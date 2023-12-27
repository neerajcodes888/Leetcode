class Solution {
public:
    int maxScore(string s) {
      int ans = -1;
        int len = s.length();

        int ones = 0;
        int tempSum = 0;
        for(int i=0;i<len-1;i++) {
            if(s[i]=='0') 
                tempSum++;
            else {
                ones++;
                tempSum--;
            }
            if(ans < tempSum) ans = tempSum;
        }
				
		
        ones += s[(len-1)] == '1' ? 1 : 0;

        return ones + ans;
    }
};