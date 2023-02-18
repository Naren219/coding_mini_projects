height = int(input("Height: "))

add = 0
for i in range(height):
  for j in range(height - 1):
    print(" ", end='')
  for k in range(add):
    print("#", end='')
  print("#")
  height -= 1
  add += 1