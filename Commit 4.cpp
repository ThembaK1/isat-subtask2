def decimalToHexadecimal(decimal_number):
    return hex(decimal_number)[2:].upper()

# Inside main()
if choice == "3":
    num = int(input("Enter decimal number: "))
    print("Hexadecimal:", decimalToHexadecimal(num))
