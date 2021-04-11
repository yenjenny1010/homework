#s0951034 顏禎誼
def celsiusToFahrenheit(celsius):
    Fahrenheit=(9/5)*celsius+32
    return Fahrenheit
def FahrenheitTocelsius(Fahrenheit):
    celsius=(5/9)*(Fahrenheit-32)
    return celsius
print(format("Celsius", "<16s"),format("Fahrenheit", "<16s"),"|","     ",format("Fahrenheit", "<16s"),"Celsius")
for i in range(0,10):
    Fahrenheit=celsiusToFahrenheit(40-i)
    celsius=FahrenheitTocelsius(120-i*10)
    print(format("%.2f"%(40-i),"<16s"),format("%.2f"%Fahrenheit,"<16s"),"|","     ",format("%.2f"%(120-i*10),"<16s"),"%.2f" %celsius)
    format("Celsius", "<15s")
'''心得