import sys
input = sys.stdin.readline

# dfs
def group(a, b, field, visited):
	stack, group = [(a, b)], []

	while stack:
		y, x = stack.pop()
		for i in range(4):
			ny, nx = y + dy[i], x + dx[i]
				if 0 <= ny < 12 and 0 <= nx < 12:
					
			
	
	pass

def pung():
	# gravity is y+
	w, h = 6, 12
	visited = [[0] * 6 for _ in range(12)]
	
	# search each field
	for y in range(h):
		for x in range(w):
			if field[h][w] == '.':
				continue
			else:
				group(y, x)
	pass

def arrange():
	pass


field = [list(input().strip()) for _ in range(12)]
print(field)
dx = [-1, 0, 1, 0]
dy = [0, -1, 0, 1]
