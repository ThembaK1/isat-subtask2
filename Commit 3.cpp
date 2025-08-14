def binaryToDecimal(binary_str):
    try:
        return int(binary_str, 2)
    except ValueError:
        return "Invalid binary input"

# Inside main()
if choice == "2":
    binary = input("Enter binary number: ")
    print("Decimal:", binaryToDecimal(binary))
