with open("input.txt", "r", encoding="UTF-8") as inputf:
    data = inputf.readline()
    numbers = list(map(int, data.split(" ")))
    times = 25

    n = len(numbers)
    
    for i in range(0, times):
        result = []
        for num in numbers:
            if num == 0:
                result.append(1)
            elif len(str(num))%2 == 0:
                num_str = str(num)
                first_half = num_str[:len(num_str)//2]
                second_half = num_str[len(num_str)//2:]
                result.append(int(first_half))
                result.append(int(second_half))
            else:
                result.append(num*2024)
        numbers = result
    

    with open("output.txt", "w", encoding='UTF-8') as outputf:
        outputf.write(f"{len(numbers)}")