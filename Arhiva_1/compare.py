from cs50 import get_int

x = get_int("x: ")
y = get_int("y: ")

if x < y:
    print("x is less then y")
elif x > y:
    print("x is greater then y")
else:
    print("x is equal to y")
