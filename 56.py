max=1

for i in range(1,100):
    for j in range(1,100):
        val=i**j

        sum_of_digits=0

        while(val>0):
            rem=val%10
            sum_of_digits=sum_of_digits+rem
            val=val/10

        if(sum_of_digits>max):
            max=sum_of_digits


print(max)                