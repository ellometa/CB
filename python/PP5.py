nums = list(range(20))
even_nums = filter(lambda n: n % 2 == 0, nums)
squared_nums = list(map(lambda n: n ** 2, even_nums))
print(squared_nums)

############################
triplets = [(1, 2, 3), (3, 4, 5), (7, 24, 25), (8, 9, 10), (6, 10, 13)]
triplets = list(map(sorted, triplets))
valid_triplets = filter(lambda t: (t[0] ** 2 + t[1] ** 2) == t[2] ** 2, triplets)

for triplet in valid_triplets:
    print(triplet)

