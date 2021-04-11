#s0951034 顏禎誼
x,y=eval(input("Enter a point with two coordinates:(seperate by comma) "))
distance=(x**2+y**2)**(1/2)#計算與原點距離
if distance<10:
    print("Point (" ,x,",",y, ") is in the circle")
elif distance==10:
    print("Point (" ,x,",",y, ") is on the circle")
else:
    print("Point (" ,x,",",y, ") is not in the circle")
'''心得:
除了題目要求外，加入distance==10的條件
'''