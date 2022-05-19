class Solution {
    public int solution(int[][] board, int[] moves) {
        int answer = 0;
        int len = board.length;
        int[] stk = new int[1001];
        int pointer = 0;
        
        for(int i = 0; i<moves.length; i++) {
            int tmp = 0;
            for(int j = 0; j<len; j++) {
                if(board[j][moves[i]-1] != 0) {
                    tmp = board[j][moves[i]-1];
                    board[j][moves[i]-1] = 0;
                    break;
                }
            }
            
            if(tmp != 0) {
                if(stk[pointer] == tmp) {
                    stk[pointer] = 0;
                    if(pointer > 0) pointer--; //pointer == 0일때 음수로 떨어지지 않도록 함.
                    answer += 2;
                } else {
                    if(stk[pointer] != 0) pointer++;
                    stk[pointer] = tmp;
                }
            }
        }
        
        return answer;
    }
}
