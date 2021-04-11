#s0951034 顏禎誼
initial_population=312032486 #設定initial value
for i in range(1,6):
    population=initial_population+i*(365*24*60*60)//7-i*(365*24*60*60)//13+i*(365*24*60*60)//45#計算population value
    print(i,".",population)#印出population
'''
心得:
原本population是用累加方式計算，但因每年的population會有小數部分，多年累加起來population便有誤差值，而後改正計算方式便得到正確答案。
學習到應小心設定運算方式
'''
