def decimalToBinary(decimal_number):
    return bin(decimal_number)[2:]

# Inside main()
if choice == "1":
    num = int(input("Enter decimal number: "))
    print("Binary:", decimalToBinary(num))
