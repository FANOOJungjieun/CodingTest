class Solution:
    def numSquares(self, n: int) -> int:
        # n이하의 모든 제곱수를 저장.
        perfectSq = []
        
        # dp.
        dp = [inf] * (n+1)
        
        for i in range(1,n+1):
            
            # i의 제곱을 구하고, dp[i*i] =1 로 세팅.
            # i*i이 n이하라면 perfectSq에 저장한다.
            i_sq = pow(i,2)
            if i_sq <= n:
                perfectSq.append(i_sq)
                dp[i_sq] = 1
            
            # dp 연산
            for ps in perfectSq:
                # i는 i를 구성하기 위한 완전제곱수보다 작아야한다.
            	# i has to be smaller than the perfect square number that is used to construct i
                if i<ps: break
                
                dp[i] = min(dp[i],1+dp[i-ps])
                # dp[i] = min(dp[i],dp[ps]+dp[i-ps])와 같다 (dp[ps]=1)

        return dp[n]
