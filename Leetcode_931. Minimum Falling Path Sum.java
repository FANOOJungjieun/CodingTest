class Solution {
    public int minFallingPathSum(int[][] matrix) {
        int n = matrix.length;
        int[][] dp = new int[n][n];
        int answer = Integer.MAX_VALUE;

        for(int i=0; i<n; i++) {
            dp[0][i] = matrix[0][i];
        } // 초기값 설정

        for(int i=1; i<n; i++) {
            for(int j=0; j<n; j++) {
                int min = dp[i-1][j];
                
                if(j > 0) min = Math.min(min, dp[i-1][j-1]);
                if(j < n-1) min = Math.min(min, dp[i-1][j+1]);

                dp[i][j] = min + matrix[i][j];

            }
        }

        for(int i=0; i<n; i++) {
            answer = Math.min(answer, dp[n-1][i]);
        }

        return answer;
    }
}
