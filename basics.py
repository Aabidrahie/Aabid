"""Basic Programming"""
L = [2,5,4,3,1,8,6,9,7]
S = len(L)
for i in range(S - 1):
    for j in range(S - 1):
        if L[j] > L[j+1]:
            x = L[j]
            L[j] = L[j+1]
            L[j + 1]=x
print(L)