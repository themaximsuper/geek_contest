for el in sorted(input().rstrip("?").split(" "), key=lambda x: len(x), reverse=True):
    if "Y" not in el:
        print(len(el))
        break