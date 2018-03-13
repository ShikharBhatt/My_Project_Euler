"""
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!
"""

def factorial(x):
    if x==1:
        return 1
    else:
        return x*factorial(x-1)

n=factorial(100)

add=0

while n!=0:
    x=n%10
    n=n//10
    add=add+x

print(add)

#Ans :648
