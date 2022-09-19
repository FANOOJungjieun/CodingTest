def solution(board, skill):
    answer = 0
    #2차원 누적합
    d = [[0] * (len(board[0]) + 1) for _ in range(len(board) + 1)]
    
    for type, r1, c1, r2, c2, degree in skill:
        d[r1][c1] += degree if type == 2 else -degree
        d[r1][c2+1] += -degree if type == 2 else degree
        d[r2+1][c1] += -degree if type == 2 else degree # 플마제로로 만들어야 하니 반대부호
        d[r2+1][c2+1] += degree if type == 2 else -degree
        
    #행 누적합
    for i in range(len(d)-1):
        for j in range(len(d[0]) - 1):
            d[i][j+1] += d[i][j]
            
    #열 누적합
    for j in range(len(d[0])-1):
        for i in range(len(d)-1):
            d[i+1][j] += d[i][j]
            
    for i in range(len(board)):
        for j in range(len(board[0])):
            if board[i][j] + d[i][j] > 0:
                answer += 1
    return answer
    
