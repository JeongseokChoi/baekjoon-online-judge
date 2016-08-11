import sys


pattern = list(sys.stdin.readline().rstrip())
text = list(sys.stdin.readline().rstrip())
result = []
result2 = []

len_pattern = len(pattern)
len_text = len(text)

l_idx = 0  # index from left side
r_idx = len_text - 1  # index from right side


def match_left():
    pattern_idx = 0
    global l_idx
    global result
    while l_idx < len_text:
        if pattern[0] == text[l_idx]:
            pattern_idx = 1
            while (l_idx < len_text and pattern_idx < len_pattern
                    and pattern[pattern_idx] == text[l_idx + pattern_idx]):
                pattern_idx += 1
            if pattern_idx == len_pattern:
                l_idx += pattern_idx
                break
            if pattern_idx != len_pattern:
                for i in range(pattern_idx):
                    result.append(text[l_idx + i])
                l_idx += pattern_idx
        else:
            result.append(text[l_idx])
            l_idx += 1
    if l_idx == len_text:
        return False
    else:
        return True


def match_right():
    pattern_idx = 0
    global r_idx
    global result2
    while r_idx >= 0:
        if pattern[len_pattern - 1] == text[r_idx]:
            pattern_idx = 1
            while (r_idx >= 0 and pattern_idx < len_pattern
                    and pattern[(len_pattern - 1) - pattern_idx]
                        == text[r_idx - pattern_idx]):
                pattern_idx += 1
            if pattern_idx == len_pattern:
                r_idx -= pattern_idx
                break
            if pattern_idx != len_pattern:
                for i in range(pattern_idx):
                    result2.append(text[r_idx - i])
                r_idx -= pattern_idx
        else:
            result2.append(text[r_idx])
            r_idx -= 1
    if r_idx == -1:
        return False
    else:
        return True


while match_right():
    print(result2)
    print("r_idx: %d " % r_idx)
while r_idx >= 0:
    result2.append(text[r_idx])
    r_idx -= 1
print(result2)
