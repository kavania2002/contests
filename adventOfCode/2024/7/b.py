def solve(index, numbers, current, total) -> bool:
    if index == len(numbers):
        return total == current
    add = solve(index + 1, numbers, current + numbers[index], total)
    multiply = solve(
        index + 1,
        numbers,
        numbers[index] if index == 0 else current * numbers[index],
        total,
    )
    concatenate = solve(
        index + 1,
        numbers,
        int(str(current) + str(numbers[index])),
        total,
    )
    return add or multiply or concatenate


with open("./input.txt", "r", encoding="UTF-8") as f:
    lines = f.readlines()
    result = 0
    for line in lines:
        number = int(line.split(":")[0])
        terms = list(map(int, line.split(":")[1].split()))
        if solve(0, terms, 0, number):
            result += number
    print(result)