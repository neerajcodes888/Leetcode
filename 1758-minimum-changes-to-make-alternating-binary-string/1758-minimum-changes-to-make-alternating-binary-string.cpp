class Solution {
public:
    int minOperations(string s) {
        int zeroAtOdd=0,zeroAtEven=0;
        int oneAtOdd=0,oneAtEven=0;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                if(s[i]=='0')
                   oneAtEven+=1;
                else
                    zeroAtEven+=1;
            }
            else{
                   if(s[i]=='0')
                   oneAtOdd+=1;
                else
                   zeroAtOdd+=1;
            }
        }
        return min(zeroAtOdd+oneAtEven,oneAtOdd+zeroAtEven);
    }
};