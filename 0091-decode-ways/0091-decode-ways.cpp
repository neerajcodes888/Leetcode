class Solution {
public:
    int numDecodings(string s) {
        int a=0,b=1,c=0;
        int n = s.length();
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!='0')
                a=b;
            if((i+1<n) && ((s[i]=='1' && s[i+1]<='9') || (s[i]=='2' && s[i+1]<='6')))
            
                a+=c;
                c=b;
                b=a;
                a=0;
            
        }
        return b; 
    }
};