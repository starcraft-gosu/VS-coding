import sys
input = sys.stdin.readline
from collections import deque

def bfs(w, h, k):
    q = deque([(0, 0, 0, k)])

    while q:
        y, x, cnt, jump = q.popleft()
        visited[jump][y][x] = 1
        # arrive
        if y == h-1 and x == w-1:
            return cnt
    # walk
        for dy, dx in [(1, 0), (0, 1), (-1, 0), (0, -1),]:
            ny, nx = y+dy, x+dx
            if 0 <= ny < h and 0 <= nx < w and board[ny][nx] == 0 and visited[jump][ny][nx] == 0:
                q.append((ny, nx, cnt+1, jump))
                visited[jump][ny][nx] = 1
            pass
        # jump
        if jump > 0:
            for dy, dx in [(2, 1), (1, 2), (2, -1), (1, -2), (-2, 1), (-1, 2), (-2, -1), (-1, -2)]:
                ny, nx = y+dy, x+dx
                if 0 <= ny < h and 0 <= nx < w and board[ny][nx] == 0 and visited[jump-1][ny][nx] == 0:
                    q.append((ny, nx, cnt+1, jump-1))
                    visited[jump-1][ny][nx] = 1
    # fail  
    return -1

k = int(input())
w, h = map(int, input().split())
board = [list(map(int, input().split())) for _ in range(h)]
visited = [[[0]*w for _ in range(h)] for _ in range(k+1)]
print(bfs(w, h, k))