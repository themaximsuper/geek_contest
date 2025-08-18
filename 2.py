for word in sorted(input().rstrip("?").split(" "), key=lambda word: len(word), reverse=True):
    
    if "Y" not in word:
        
        print(len(word))
        break