def amount_of_copy():
    c = int(input("Amount of copy: "))
    return c

def pricing(c):
    price = 0
    for i in range(c):
        if i>=0 and i<9:
            price += 3
        if i>=9 and i<99:
            price += 2
        if i>=99:
            price += 1
    return price

def amount_of_paid():
    p = int(input("Amount of paid: "))
    return p

def give_a_change(total):
    if (total == 0):
        print ("NO CHANGE")
        return
    elif (total < 0):
        print("NOT PAID ENOUGH")
        return

    x = 0
    while (total > 0):
        if (total >= 500):
            x = total//500
            print("Banknote 500 Baht: ", x)
            total = total - x*500
        elif (total >= 100):
            x = total//100
            print("Banknote 100 Baht: ", x)
            total = total - x*100
        elif (total >= 10):
            x = total//10
            print("Coin 10 Baht: ", x)
            total = total - x*10
        elif (total >= 5):
            x = total//5
            print("Coin 5 Baht: ", x)
            total = total - x*5
        else:
            print("Coin 1 Baht: ", total)
            total = 0

copy = amount_of_copy()
price = pricing(copy)
paid = amount_of_paid()
give_a_change(paid - price)