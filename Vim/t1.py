n = int(input())

def dfs(step) :
    if step < 1:
        return 1
    else:
        return dfs(step-1) + dfs(step/2)

def ln(n) :
    if n < 0: 
        return 1
    else :
        return 2 * ln(n-1)

print(dfs(n))
print(ln(n))
