class Solution:
    def sumSubarrayMins(self, arr: List[int]) -> int:
        MOD = 10 ** 9 + 7

        # 스택 = 최소값의 인덱스를 저장
        stack = []

        # dp 배열
        dp = [0] * len(arr)

        # 스택 채우기
        for i in range(len(arr)):

            # 스택이 채워져 있고, 스택 최상위 값이 arr[i] 이상이면 pop
            # = 현재 탐색한 숫자 중 가장 작은 수의 인덱스를 top에 보관함. 이 스택의 밑은 이 값보다 작은 수만 존재함.
            while stack and arr[stack[-1]] >= arr[i]:
                stack.pop()

            # dp 계산
            if stack: # 만약 스택이 차 있으면
                previousSmaller = stack[-1] # stack최상단(가장 작은 값의 인덱스)
                dp[i] = dp[previousSmaller] + (i - previousSmaller) * arr[i]
            else: # 스택이 비어 있으면(=arr[i]보다 작은 값이 없으면)
                dp[i] = (i + 1) * arr[i]
            stack.append(i)

        return sum(dp) % MOD
