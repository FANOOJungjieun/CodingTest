dx = [0,0,1,-1]
dy = [1,-1,0,0]

def bfs(place, i, j, distance):
    check = [[0]*5 for a in range(5)]
    q = []
    q.append([i,j,distance])
    
    while q :
        x, y, d= q.pop(0)
        check[x][y] = 1
        
        for a in range(4) :
            nx = x + dx[a]
            ny = y + dy[a]
            nd = d +1
            if 0<=nx<5 and 0<=ny<5 and not check[nx][ny]:
                if nd <= 2 and place[nx][ny] == 'P' :
                    return 0
                if place[nx][ny] != 'X' :
                    q.append([nx,ny,nd])
        
    
    return 1

def solution(places):
    answer = []
    
    for p in places :
        tmp = 1
        for i in range(5) :
            for j in range(5) :
                if p[i][j] == 'P' :
                    tmp2 = bfs(p, i, j, 0)
                    if not tmp2 :
                        tmp = 0
        answer.append(tmp)
    return answer
