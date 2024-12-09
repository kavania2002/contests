with open("input.txt", "r", encoding="UTF-8") as inputf:
    data = inputf.read().strip()
    n = len(data)

    decoded = []
    id = 0
    for i in range(0, n, 2):
        file_len = int(data[i])
        decoded.extend([str(id)] * file_len)
        if i+1 < n:
            space_len = int(data[i + 1])
            decoded.extend(["."] * space_len)

        id += 1

    dotIndex = 0
    lastIndex = len(decoded) - 1

    while lastIndex >= 0 and decoded[lastIndex] == ".":
        lastIndex -= 1

    while dotIndex < len(decoded) and lastIndex > dotIndex:
        while dotIndex < len(decoded) and decoded[dotIndex] != ".":
            dotIndex += 1

        if dotIndex < lastIndex:
            decoded[dotIndex] = decoded[lastIndex]
            decoded[lastIndex] = "."

            while lastIndex >= 0 and decoded[lastIndex] == ".":
                lastIndex -= 1

    total = 0
    for i, char in enumerate(decoded):
        if char == ".":
            break
        total += int(char) * i

    with open("output.txt", "w", encoding="UTF-8") as outputf:
        outputf.write(f"{total}\n")
