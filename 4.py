import math


n = int(input())

m = sorted(list(map(int, input().split())), key=lambda num: num if num % 2 == 0 else math.inf)

m = sorted(m, key=lambda num: -1 if num % 2 == 0 else num)

print(" ".join([str(num) for num in m]))