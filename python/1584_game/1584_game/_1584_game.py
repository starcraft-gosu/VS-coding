import sys
input = sys.stdin.readline
from collections import deque

# 0,0 -> 500,500까지
# 실패하는 경우는 아무데도 갈데가 없는경우
def bfs():
    q = [(0, 0, 0)]
    y, x, cnt = q.popleft
    # field가 음수이면 못가고 0이면 걍 두고 양수이면 cnt+1
    # 0에 양수를집어넣는 순간 0이 아니게된다
    # 그렇다고 0으로 두면 무한루프 발생
    # visited는 필요할것으로 사료
    while q:
        for dy, dx in [(-1, 0), (0, -1), (1, 0), (0, 1)]:
            ny, nx = y + dy, x + dx
            if 0 <= ny <= 500 and 0 <= ny <= 500 and field[ny][nx] >= 0:
                if field[ny][nx] == 0:
                    pass
                else:
                    pass
    return -1 # 갈곳없을때

field, visited = [[0]*501 for _ in range(501)], [[0]*501 for _ in range(501)]
n = int(input())
for _ in range(n):
    x1, y1, x2, y2 = map(int, input().split())
    for y in range(min(y1, y2), max(y1, y2)+1):
        for x in range(min(x1, x2), max(x1, x2)+1):
            field[y][x] = 1
m = int(input())
for _ in range(m):
    x1, y1, x2, y2 = map(int, input().split())
    for y in range(min(y1, y2), max(y1, y2)+1):
        for x in range(min(x1, x2), max(x1, x2)+1):
            field[y][x] = -1


