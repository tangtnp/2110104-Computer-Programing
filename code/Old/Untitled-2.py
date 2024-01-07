def def1():
    value = input("กรุณาใส่ค่า: ")
    return value

def def2(parameter):
    print("ค่าที่ได้รับจาก def1 คือ:", parameter)

def main():
    result = def1()
    def2(result)

if __name__ == "__main__":
    main()