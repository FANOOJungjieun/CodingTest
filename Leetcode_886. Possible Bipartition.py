class Solution:
    def possibleBipartition(self, N, dislikes):
        """
        :type N: int
        :type dislikes: List[List[int]]
        :rtype: bool
        사이클의 노드의 수가 홀수면 false, 짝수면 true를 리턴한다.
        """
        bag = [[] for i in range(N+1)]
        visited = [-1] * (N+1)
        count = 0
        for dislike in dislikes:
            bag[dislike[0]].append(dislike[1])
            bag[dislike[1]].append(dislike[0])
        
        for i in range(1, N+1):
            if visited[i] == -1 and  len(bag[i]) > 0:
                if not self.visit(0, i, bag, visited):
                    return False
                
        return True
      
    def visit(self, curLevel, i, bag, visited):     
        if visited[i] >= 0:
            return (curLevel - visited[i]) % 2 == 0
                
        visited[i] = curLevel
        for des in bag[i]:
            if not self.visit(curLevel + 1, des, bag, visited):
                return False
        return True
