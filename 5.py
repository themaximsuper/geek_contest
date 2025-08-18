N, K = map(int, input().split())

m = [i for i in range(K, 0, -1)]
flag = True
p = 0

while True:
    
    if flag:
        
        print(" ".join([str(el) for el in m]))
        flag = False

    if p == 0:
        
        if m[0] < N:
            
            m[0] += 1
            p = 1
            flag = True
            
        else:
            
            break
    else:
        
        if p > K-1:
            
            p = K-1
            
        if m[p] < m[p - 1] - 1:
            
            m[p] += 1
            p += 1
            flag = True
            
        else:
            
            m[p] = K - p
            p -= 1
