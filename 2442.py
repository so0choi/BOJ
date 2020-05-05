n=int(input())
j=n-1
for i in range(n):
    j=n-i-1
    while(j>0):
        j-=1
        print(" ",end='')
        
    for k in range(i*2+1):
        print("*",end='')
    print()
