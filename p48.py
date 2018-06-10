ans=0
res=0

for i in range(1,1001):
    ans=i
    for j in range(1,i):
        ans=ans*i
        ans=ans%10000000000
    res=res+ans
    res=res%10000000000
           

print(res)    
    