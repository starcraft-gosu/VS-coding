# -*- coding: utf-8 -*-
import sys
input = sys.stdin.readline

# dfs
# 연쇄나는 그룹 묶어주기
def group(a, b, field, visited):
	visited[a][b] = 1
	stack = [(a, b)]
	color = field[a][b]
	pointer = 0

	# 델타 탐색으로 color 같은 애들 stack에 append
	while pointer < len(stack):
		y, x = stack[pointer]
		for i in range(4):
			ny, nx = y + dy[i], x + dx[i]
			if 0 <= ny < 12 and 0 <= nx < 6 and visited[ny][nx] == 0:
				if field[ny][nx] == color:
					stack.append((ny, nx))
					visited[ny][nx] = 1
		pointer += 1
	# print(a, b)
	# print(visited)
	
	# stack 길이가 4 이상이면 group 내 자리들 0으로 바꾸기
	# print(stack)
	# print('----------------------------')
	if len(stack) >= 4:
		for y, x in stack:
			field[y][x] = 0

# group된 애들 없애주고 연쇄 유무 알려주는 함수
# 12~0까지 0만나면 +1씩
def arrange(w, h, field):
	combo = 0
	for y in range(11, -1, -1):
		for x in range(w):
			# 0을 발견하면 계속 당겨서 0이 아닐때까지
			while field[y][x] == 0:
				combo = 1
				start = y
				while start > 0:
					field[start][x] = field[start-1][x]
					start -= 1
					# print(field)
					# print('------')
				field[0][x] = '.'
	return combo


# 연쇄일어나고 자리 정렬
# 12가 바닥이고 중력은 + 방향
def pung():
	w, h = 6, 12
	visited = [[0] * 6 for _ in range(12)]
	answer = 0
	# print(field, visited)

	# 필드 써치하며 group 찾기
	for y in range(h):
		for x in range(w):
			if field[y][x] == '.':
				visited[y][x] = 1
				continue
			else:
				# print(y, x)
				# print(visited)
				# print('---------------------')
				if visited[y][x] == 0:
					group(y, x, field, visited)

	combo = arrange(w, h, field)
	# print(field)
	return combo



field = [list(input().strip()) for _ in range(12)]
dx = [-1, 0, 1, 0]
dy = [0, -1, 0, 1]
answer = 0
while pung():
	answer += 1
print(answer)