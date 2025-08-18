N, K = map(int, input().split())

start_point = [num for num in range(K, 0, -1)]
flag = True
pointer = 0

while True:
    
    if flag:
        
        print(" ".join([str(num) for num in start_point]))
        flag = False

    if pointer == 0:
        
        if start_point[0] < N:
            
            start_point[0] += 1
            pointer = 1
            flag = True
            
        else:
            
            break
    else:
        
        if pointer > K-1:
            
            pointer = K-1
            
        if start_point[pointer] < start_point[pointer - 1] - 1:
            
            start_point[pointer] += 1
            pointer += 1
            flag = True
            
        else:
            
            start_point[pointer] = K - pointer
            pointer -= 1
