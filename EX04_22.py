#s0951034 顏禎誼
x,y=eval(input("Enter a point with two coordinates: "))
distance=(x**2+y**2)**(1/2)
print(distance)
if distance<10:
    print("Point (" ,x,",",y, ") is in the circle")
else:
    print("Point (" ,x,",",y, ") is not in the circle")
'''心得