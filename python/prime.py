seq = [48, 15, 24, 48, 38, 2, 35, 5, 4, -1, 14, 40, 21, 13]
prime = 0
comp = 0

for iter in seq:
    if iter == -1:
        break
    if iter < 2:
        continue
    for j in range(2, (iter // 2) + 1):
        if iter % j == 0:
            comp += 1
            break
    else:
        prime += 1
print(f"Primes: {prime}")
print(f"Composites: {comp}")
