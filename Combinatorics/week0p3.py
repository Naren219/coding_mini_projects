for l in range(3):
    chars = ["A", "B", "C"]
    base = chars[l]
    chars.pop(l)
    for i in range(2):
      print(base, end='')
      print(''.join(chars))
      chars.reverse()