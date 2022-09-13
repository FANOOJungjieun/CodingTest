class Solution:
    def validUtf8(self, data: List[int]) -> bool:
        n_bytes = 0
        for v in data:
            tmp = "{0:b}".format(v).zfill(8) # 옥텟 만들기
            if n_bytes == 0: #바이트 세기
                for t in tmp: # 110xxxxx...에서 1의 개수 세기
                    if t == '0':
                        break
                    n_bytes += 1
                
                if n_bytes == 0: #0으로 시작하면 1바이트
                    continue # 1byte
                
                if n_bytes == 1 or n_bytes > 4:
                    return False #예외처리
            else:
                if not (tmp[0] == '1' and tmp[1] == '0'): # 맨 처음 바이트가 아닌데, 10으로 시작하지도 않으면 False
                    return False
            
            n_bytes -= 1
            
        return n_bytes == 0
