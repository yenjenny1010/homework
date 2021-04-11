#s0951034 顏禎誼
import math #因有使用到數學的三角函數運算所以需import math
number_of_sides = eval(input("Enter the number of sides:"))#輸入number_of_sides的值
side = eval(input("Enter the side :"))#輸入side的值
area=(number_of_sides*side**2)/(4*math.tan(math.pi/number_of_sides))#計算area的值
print("The area of the polygon is ", area)#輸出area
'''心得:
學習到import math 並學習如何使用三角函數的運算
'''

