class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        answer = []

        for x in zip(*strs): #리스트에 들어간 str들을 알파벳 하나씩 묶어 튜플화(그냥 str만 입력하면 리스트 요소 전체를 튜플화함)
            if len(set(x)) == 1: #이 튜플의 알파벳 종류가 1종류면 (=모두 같은 알파벳이면) true
                answer.append(x[0])
            else:
                break
        return "".join(answer)
        
