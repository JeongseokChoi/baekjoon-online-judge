l = []
for _ in range(10):
    l.append(int(input()) % 42)
l = list(set(l))
print(len(l))
