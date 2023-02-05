def fact(n):
    if n>=1:
        return n*fact(n-1)
    else:
        return 1
    
a = int(input())
print(f"Factorial of {a} is {fact(a)}")
