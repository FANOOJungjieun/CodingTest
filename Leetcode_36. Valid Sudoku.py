class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        # 유효성 검사: .을 뺀 s의 길이와 set(s)의 길이가 같으면, 유효하다고 판단한다.(중복된 숫자가 없다)
        def isValid(arr):
            s = ''.join(arr).replace('.','')
            return len(s) == len(set(s))
        
        # Row 순회
        def checkRow():
            for row in board:
                if not isValid(row):
                    return False
            return True
        
        # Column 순회
        def checkCol():
            for col in zip(*board):
                if not isValid(col):
                    return False
            return True
        
        # 하위 상자 순회
        def checkSub():
            for r in range(0,9,3):
                for c in range(0,9,3):
                    sub = [board[r+dr][c+dc] for dr in range(3) for dc in range(3)]
                    if not isValid(sub):
                        return False
            return True
        
        return checkRow() and checkCol() and checkSub() # 가로,세로, 하위상자 모두가 유효하다면 true
