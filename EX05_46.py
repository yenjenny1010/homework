# s0951034 顏禎誼
import math
number = 10
totalsum = 0  # 儲存各個數相加
totalquadraticsum = 0  # 儲存各個數的平方相加
for i in range(number):
     numbervalue = eval(input("Enter a number: "))
     totalsum+= numbervalue
     totalquadraticsum += numbervalue ** 2
mean = totalsum / number
deviation = ((totalquadraticsum - totalsum * totalsum / number) / (number - 1))**1/2
print("The mean is ", mean, "The standard deviation is ", deviation)

'''心得:
更熟悉使用+=語法
'''
