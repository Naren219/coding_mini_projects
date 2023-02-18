height = int(input("Height: "))

add = 2
for i in range(height):
  for j in range(height - 1):
    print(" ", end='')
  for k in range(add - 1):
    print("#", end='')
  print("#")
  height -= 1
  add += 2