n, k, m = map(int, input().split())

stations_statuses = [k for station in range(n)]
output = []

for request in range(m):
    
    x, y = map(int, input().split())
    
    for station in range(x, y):
        if stations_statuses[station] > 0:
            stations_statuses[station] -= 1
        else:
            output.append("0")
            break
    else:
        output.append("1")

print("\n".join(output))
    