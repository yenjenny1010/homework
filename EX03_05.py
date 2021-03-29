import math
number_of_sides = eval(input("Enter the number of sides:"))
side = eval(input("Enter the side :"))
area=(number_of_sides*side**2)/(4*math.tan(math.pi/number_of_sides))
print("The area of the polygon is ", area)

