pattern = input()
text = input()

while True:
    pos = text.find(pattern)
    if pos < 0: break
    text = text[:pos] + text[pos + 3:]
    pos = text.rfind(pattern)
    if pos < 0: break
    text = text[:pos] + text[pos + 3:]

print(text)
