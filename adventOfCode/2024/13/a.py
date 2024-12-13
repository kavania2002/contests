with open("input.txt", "r", encoding="UTF-8") as inputf:
    total_cost = 0

    while True:
        aline = inputf.readline()

        if not aline:
            break

        bline = inputf.readline()
        prizeline = inputf.readline()
        emptyline = inputf.readline()

        ax, ay = int(aline.split(" ")[2].split(",")[0].split("+")[1].strip()), int(
            aline.split(" ")[3].split(",")[0].split("+")[1].strip()
        )
        bx, by = int(bline.split(" ")[2].split(",")[0].split("+")[1].strip()), int(
            bline.split(" ")[3].split(",")[0].split("+")[1].strip()
        )
        px, py = int(prizeline.split(" ")[1].split(",")[0].split("=")[1].strip()), int(
            prizeline.split(" ")[2].split(",")[0].split("=")[1].strip()
        )

        min_cost = float('inf')
        prize_won = False

        for a in range(101):
            for b in range(101):
                if (a * ax + b * bx == px) and (a * ay + b * by == py):
                    prize_won = True
                    min_cost = min(min_cost, 3*a + b)
            
        if prize_won:
            total_cost += min_cost

    with open("output.txt", "w", encoding="UTF-8") as outputf:
        outputf.write(str(total_cost))