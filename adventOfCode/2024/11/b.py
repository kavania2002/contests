import collections

with open("input.txt", "r", encoding="UTF-8") as inputf:
    data = inputf.readline()
    numbers = list(map(int, data.split(" ")))
    times = 75

    n = len(numbers)
    numberCounter = collections.Counter(numbers)
    
    for i in range(0, times):
        tempCounter = collections.Counter()
        for [num, numCount] in numberCounter.items():
            if num == 0:
                tempCounter[1] += numCount
            elif len(str(num))%2 == 0:
                num_str = str(num)
                first_half = num_str[:len(num_str)//2]
                second_half = num_str[len(num_str)//2:]
                tempCounter[int(first_half)] += numCount
                tempCounter[int(second_half)] += numCount
            else:
                tempCounter[num*2024] += numCount
        numberCounter = tempCounter

    with open("output.txt", "w", encoding='UTF-8') as outputf:
        outputf.write(f"{sum(numberCounter.values())}")