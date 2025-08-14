def hexadecimalToDecimal(hex_str):
    try:
        return int(hex_str, 16)
    except ValueError:
        return "Invalid hexadecimal input"

# Inside main()
if choice == "4":
    hex_value = input("Enter hexadecimal number: ")
    print("Decimal:", hexadecimalToDecimal(hex_value))
