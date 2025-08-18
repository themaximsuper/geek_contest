N, K, M = map(int, input().split())

stations_statuses = [K for station in range(N)]
output = []

for request in range(M):
    
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
    