class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        if n==0:
            return [""]
        elif n==1:
            return["()"]
        else:
            temp=set()
            for i in self.generateParenthesis(n-1):
                for j in range(len(i)):
                    temp.add(i[:j]+"()"+i[j:])
            ans=list(temp)
        return ans
        
