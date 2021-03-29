population=312032486#initial
for i in range(1,6):
    population=population+(365*24*60*60)//7
    population=population+(365*24*60*60)//45
    population=population-(365*24*60*60)//13
    print(i,".",population)