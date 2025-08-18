n = int(input())
m = list(map(int, input().split()))

first_half, second_half = m[:n // 2], m[n // 2:]

for i in range(int(n / 4)):
    first_half[i], first_half[- 1 - i] = m[- 1 - n // 2 - i], m[i]
    second_half[i], second_half[- 1 - i] = m[- 1 - i], m[n // 2 + i]

print(" ".join(str(num) for num in first_half + second_half))