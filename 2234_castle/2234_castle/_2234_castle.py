import sys
input = sys.stdin.readline
from collections import defaultdict

# make rooms
def bfs(y, x, room_id, visited, walls):
    pointer = 0
    n, m = len(walls[0]), len(walls)
    d = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    q = [(y, x)]
    while pointer < len(q):
        cy, cx = q[pointer]
        dir = walls[cy][cx]
        # print(dir)
        for i in range(4):
            if dir[i] == '0':
                # print(i)
                ny, nx = cy + d[i][1], cx + d[i][0]
                if 0 <= ny < m and 0 <= nx < n and visited[ny][nx] == -1:
                    q.append((ny,nx))
                    visited[ny][nx] = room_id
        pointer += 1
        # print(q)
    return q    
    
# run bfs for each cells
def make_room(n, m, walls, visited):
    result = []
    room_id = 0
    for r in range(m):
        for c in range(n):
            if visited[r][c] >= 0:
                continue
            visited[r][c] = room_id
            room = bfs(r, c, room_id, visited, walls)
            room_id += 1
            result.append(room)
    return result

n,m = map(int, input().split())
# walls are given by binary
walls = [list(map(lambda n: format(n, '04b'), map(int, input().split()))) for _ in range(m)]
visited = [[-1]*n for _ in range(m)]

rooms = make_room(n, m, walls, visited)
two_room = 0

# print(rooms, visited)


for y in range(m):
    for x in range(n):
        room_num = visited[y][x]
        ny, nx = y + 1, x + 1
        if ny < m and visited[ny][x] != room_num:
            area = len(rooms[room_num]) + len(rooms[visited[ny][x]])
            two_room = max(two_room, area)
        if nx < n and visited[y][nx] != room_num:
            area = len(rooms[room_num]) + len(rooms[visited[y][nx]])
            two_room = max(two_room, area)


for room in rooms:
    print(room)
print(len(rooms))
print(max(map(len, rooms)))
print(two_room)
'''
BFS with visited
also need adjacency between rooms - manage with dict() or adjacency list
how to figure out adjacency?
delta search for each cell?
plus two rooms
exchange with max
'''