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
    print(format("%.1f"%(40-i),"<16s"),format("%.1f"%Fahrenheit,"<16s"),"|","     ",format("%.1f"%(120-i*10),"<16s"),"%.2f" %celsius)
    format("Celsius", "<15s")
'''心得:
在這之前沒有寫過有關格式化的程式碼，有需要也都以輸出空格來呈現，剛開始是先在網路上查到以print("字符串不足5位，左边补空格%5s" % '2')嘗試過之後才發現，雖然可以使用但與課本習題呈現的靠左對齊不符，於是參考範例程式使用
format語法，順利成功。
為了得到與課本取小數點後一位或兩位的結果，也上網搜尋並學習使用"%.2f"%，成功執行。(課本有些取到小數點第一位有些取兩位，於是依照課本的結果撰寫程式碼)
學習到print("字符串不足5位，左边补空格%5s" % '2')語法、format語法；、print("%.2f"%)語法
'''