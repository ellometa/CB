def armstrong(num):
    total = 0
    checking_num = num

    while checking_num > 0:
        digit = checking_num % 10
        total += digit ** 3
        checking_num //= 10

    if num == total:
        print(num, "is an Armstrong number")
    else:
        print(num, "is not an Armstrong number")

num = int(input("Enter a number: "))
armstrong(num)
