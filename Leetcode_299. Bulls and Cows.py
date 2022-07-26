#Runtime: 61 ms, faster than 57.85% of Python3 online submissions for Bulls and Cows.
#Memory Usage: 13.9 MB, less than 31.00% of Python3 online submissions for Bulls and Cows.

class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        s1, s2 = defaultdict(int), defaultdict(int)
        x = 0
        y = 0

        for s,g in zip(secret,guess):
            if s==g:
                x += 1
            else:
                s1[s] += 1
                s2[g] += 1
        for k in s1.keys():
            if k in s2:
                y += min(s1[k], s2[k])
                
        answer = str(x) + 'A' + str(y) + 'B'
        return answer
