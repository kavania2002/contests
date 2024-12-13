from collections import deque

with open("input.txt", "r", encoding="UTF-8") as inputf:
    data = inputf.readlines()

    data = [list(line[:len(line)-1]) for line in data]

    def calculate_fencing_cost(grid):
        n, m = len(grid), len(grid[0])
        visited = [[False]*m for _ in range(n)]

        def is_valid(x, y, plant_type):
            return 0 <= x < n and 0 <= y < m and not visited[x][y] and grid[x][y] == plant_type
        
        def bfs(x, y):
            queue = deque([(x, y)])
            visited[x][y] = True
            plant_type = grid[x][y]
            area = 0
            sides = set()

            while queue:
                r, c = queue.popleft()
                area += 1

                for i, (dr, dc) in enumerate([(0, 1), (1, 0), (0, -1), (-1, 0)]):
                    if not (0 <= r+dr < n and 0 <= c+dc < m) or grid[r+dr][c+dc] != plant_type:
                        if i < 2:
                            sides.add((min(r, n), c))
                        else:
                            sides.add((r, min(c, m)))
                    elif not visited[r+dr][c+dc]:
                        queue.append((r+dr, c+dc))
                        visited[r+dr][c+dc] = True
                    

            return area, len(sides)

        total_cost = 0
        for i in range(len(data)):
            for j in range(len(data[0])):
                if not visited[i][j]:
                    area, perimeter = bfs(i, j)
                    total_cost += (area * perimeter)
        
        return total_cost

    with open("output.txt", "w", encoding='UTF-8') as outputf:
        outputf.write(f"{calculate_fencing_cost(data)}")