# If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 
# letters used in total.

# If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


# NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 
# (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.


# Answer:
# 21124



single_digit = {0:0, 1:3, 2:3, 3:5, 4:4, 5:4, 6:3, 7:5, 8:5, 9:4} #like one, two
double_digit_teen = {10:3, 11:6, 12:6, 13:8, 14:8, 15:7, 16:7, 17:9, 18:8, 19:8} #like ten,eleven
double_digit_ty = {2:6, 3:6, 4:5, 5:5, 6:5, 7:7, 8:6, 9:6} #like twenty, thirty
triple_digit = {0:10, 1:13, 2:13, 3:15, 4:14, 5:14, 6:13, 7:15, 8:15, 9:14}

def letter_count(n):

    if n<10:
        return single_digit[n%10]
    

    elif n<100:
        if n<20:
            return double_digit_teen[n]

        else:
            return (double_digit_ty[n//10] + single_digit[n%10])


    elif n<1000:
        
        if n%100 == 0:
            return triple_digit[n//100] - 3 #removing count of "and"

        elif n%100 < 20:
            if n%100 >= 10:
                return (triple_digit[n//100] + double_digit_teen[n%100])
            else:
                return (triple_digit[n//100] + single_digit[n%10])
        
        else:
            return (triple_digit[n//100] + double_digit_ty[(n%100)//10] + single_digit[n%10])


count = 0

for i in range(1,1000):
    count = count + letter_count(i)

print(count + 11)

