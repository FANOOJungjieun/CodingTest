class Solution:
    def longestPalindrome(self, words: List[str]) -> int:
        from collections import defaultdict
        
        seen = defaultdict(int)
        result = 0

        for word in words:
            complement = word[1] + word[0] # 순서를 바꾼 문자열
            if seen[complement] > 0:  # 이 값이 seen딕셔너리 안에 존재하면
                result += 4 # 결과값 +4 (앞뒤로 2개씩 붙어서)
                seen[complement] -= 1 # 쌍이 되는 값을 차감한다.
                if seen[complement]==0: # 만약 값이 0이면
                    del seen[complement]  # 삭제
            else:
                seen[word] += 1 # seen에 존재하지 않으면 word키를 추가한다.
        
        # seen에 값이 남아있으면, 정 가운데 위치한 palindrome을 찾는다.
        for word in seen:
            if seen[word] > 0 and word[0] == word[1]:
                result += 2
                break # 한 개만 필요하므로 하나를 찾으면 break
                
        return result    
