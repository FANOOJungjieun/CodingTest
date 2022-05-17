class Solution {
    public String solution(int[] numbers, String hand) {
        String answer = "";
        int left = 10; // *
        int right = 12; // #
        // 0 = 11
            
        for(int i =0; i<numbers.length; i++) {
            int num = numbers[i];
            if (numbers[i] == 0) num = 11;
            
            if(num % 3 == 1) 
            {
                answer += "L"; 
                left = num;
            } else if (num %3 == 0) 
            {
                answer += "R"; 
                right = num;
            } else {
                int lAbs = Math.abs(num-left);
                int rAbs = Math.abs(num-right);
                
                int lDis = (lAbs%3) + (lAbs/3);
                int rDis = (rAbs%3) + (rAbs/3);
                
                if(lDis < rDis) {
                    answer += "L"; 
                    left =num;
                } else if (lDis > rDis) {
                    answer += "R"; 
                    right = num;
                } else {
                    if(hand.equals("right")) {
                        answer += "R"; 
                        right = num;
                    } else {
                        answer += "L"; 
                        left = num;
                    }
                }
            }
        }
        
        return answer;
    }
}
