#s0951034 顏禎誼
initial_population=312032486#initial
for i in range(1,6):
    population=initial_population+i*(365*24*60*60)//7-i*(365*24*60*60)//13+i*(365*24*60*60)//45
    print(i,".",population)