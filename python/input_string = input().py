input_string = input()
frequency_dict = {}
for i in input_string:
    if i in frequency_dict:
        frequency_dict[i] += 1
    else:
        frequency_dict[i] = 1
print(frequency_dict)