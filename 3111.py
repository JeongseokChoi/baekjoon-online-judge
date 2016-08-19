import sys

p = None  # pattern
t = None  # text
left = []
right = []

p_len = None  # length of pattern
t_len = None  # length of text

l_idx = None  # index from left
r_idx = None  # index from right


def match_left():
    global left, right, p_len, t_len, l_idx, r_idx
    p_matched_cnt = 0
    while l_idx <= r_idx:
        if p_matched_cnt == p_len:
            l_idx += p_len
            break
        elif (l_idx + p_matched_cnt <= r_idx
                and t[l_idx + p_matched_cnt] == p[p_matched_cnt]):
            p_matched_cnt += 1
        elif p_matched_cnt != 0:
            for i in range(p_matched_cnt):
                left.append(t[l_idx + i])
            l_idx += p_matched_cnt
            p_matched_cnt = 0
        else:
            left.append(t[l_idx])
            l_idx += 1
    if p_matched_cnt == p_len:
        return True
    else:
        return False


def match_right():
    global left, right, p_len, t_len, l_idx, r_idx
    p_matched_cnt = 0
    while r_idx >= l_idx:
        if p_matched_cnt == p_len:
            r_idx -= p_len
            break
        elif (r_idx - p_matched_cnt >= l_idx
                and t[r_idx - p_matched_cnt] == p[(p_len - 1) - p_matched_cnt]):
            p_matched_cnt += 1
        elif p_matched_cnt != 0:
            for i in range(p_matched_cnt):
                right.append(t[r_idx - i])
            r_idx -= p_matched_cnt
            p_matched_cnt = 0
        else:
            right.append(t[r_idx])
            r_idx -= 1
    if p_matched_cnt == p_len:
        return True
    else:
        return False


if __name__ == "__main__":
    p = sys.stdin.readline().rstrip()
    t = sys.stdin.readline().rstrip()
    p_len = len(p)
    t_len = len(t)
    l_idx = 0
    r_idx = t_len - 1
    while True:
        if match_left() == False:
            break
        if match_right() == False:
            break
    result = ""
    for x in left:
        result += x
    right.reverse()
    for x in right:
        result += x
    sys.stdout.write(result)
