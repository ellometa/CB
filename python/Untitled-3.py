#Question 1
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

def main():
    prime_count = 0
    composite_count = 0
    
    while True:
        num = int(input("Enter a number (-1 to stop): "))
        if num == -1:
            break
        
        if num > 1:
            if is_prime(num):
                prime_count += 1
            else:
                composite_count += 1
    
    print(f"Prime numbers: {prime_count}")
    print(f"Composite numbers: {composite_count}")
main()


