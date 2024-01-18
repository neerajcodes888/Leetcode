class Solution {
public:
    int climbStairs(int n) {
     int n1=1,n2=1,s=0;
        for(int i=2;i<=n;i++)
        {
            s=n1+n2;
            n1=n2;
            n2=s;
        }
        return n2;   
    }
};