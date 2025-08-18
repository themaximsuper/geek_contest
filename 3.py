N = int(input())
m = list(map(int, input().split()))

first_half, second_half = m[:N//2], m[N//2:]

for i in range(N//2):
    first_half[0+i], first_half[-1-i] = m[-1-N//2-i], m[0+i]
    second_half[0+i], second_half[-1-i] = m[-1-i], m[0+N//2+i]

print(" ".join(str(num) for num in first_half+second_half))