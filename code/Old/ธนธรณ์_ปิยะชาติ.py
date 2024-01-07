

#Amount of copy
Amount_Copy = int(input("Amount of copy = "))
#Amount of paid
if Amount_Copy>99:
    Amount_Paid = int(Amount_Copy*1)    
elif Amount_Copy>9 and Amount_Copy<=99 :
    Amount_Paid = int(Amount_Copy*2)
elif Amount_Copy>=1 and Amount_Copy<=9 :
    Amount_Paid = int(Amount_Copy*3)
else:
    print("ERROR")
print(f"total price = {Amount_Paid}")  

#จ่ายจริง

Amount_Insert = int(input("Please intert money = "))
torn = Amount_Insert - Amount_Paid

while (torn > 0):
    if (torn >= 500):
        x = torn//500
        print("Banknote 500 Baht: ", x)
        torn = torn - x*500
    elif (torn >= 100):
        x = torn//100
        print("Banknote 100 Baht: ", x)
        torn = torn - x*100
    elif (torn >= 10):
        x = torn//10
        print("Coin 10 Baht: ", x)
        torn = torn - x*10
    elif (torn >= 5):
        x = torn//5
        print("Coin 5 Baht: ", x)
        torn = torn - x*5
    else:
        print("Coin 1 Baht: ", torn)
        torn = 0    
    
