class Solution {
    public int[] solution(int rows, int columns, int[][] queries) {
        int[] answer = new int[queries.length];
        int[][] num = new int[rows+1][columns+1];
        
        int num1 = 1;
        
        for(int i=1; i<=rows; i++) {
            for(int j=1; j<=columns; j++) {
                num[i][j] = num1++;
            }
        }
        
        for(int a=0; a<queries.length; a++) {
            int x1 = queries[a][0];
            int y1 = queries[a][1];
            int x2 = queries[a][2];
            int y2 = queries[a][3];
            
            int tmp = num[x1][y1];
            int min = tmp;
            
            for(int x = x1+1; x<=x2; x++) {
                min = Math.min(min,num[x][y1]);
                num[x-1][y1] = num[x][y1];
            }
            for(int y = y1+1; y<=y2; y++) {
                min = Math.min(min, num[x2][y]);
                num[x2][y-1] = num[x2][y];
            }
            for(int x = x2-1; x>=x1; x--) {
                min = Math.min(min, num[x][y2]);
                num[x+1][y2] = num[x][y2];
            }
            for(int y = y2-1; y>=y1; y--) {
                min = Math.min(min,num[x1][y]);
                num[x1][y+1] = num[x1][y];
            }
            num[x1][y1+1] = tmp;
            answer[a] = min;
        }
        return answer;
    }
}
