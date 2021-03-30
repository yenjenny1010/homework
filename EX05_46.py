import math

number = 10 
sum = 0 
sum_1 = 0

for i in range(number):
     numbervalue = eval(input("Enter a number: "))
     sum += numbervalue
     sum_1 += numbervalue ** 2 
mean = sum / number 

deviation = ((sum_1 - sum * sum / number) / (number - 1))**1/2
print("The mean is ",mean,"The standard deviation is ",deviation)