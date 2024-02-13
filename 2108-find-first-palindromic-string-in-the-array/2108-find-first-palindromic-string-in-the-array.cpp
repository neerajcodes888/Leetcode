class Solution {
public:
    bool palin(string s)
    {
        string ss="";
        for(int i=s.length()-1;i>=0;i--)
        {
            ss+=s[i];
        }
        if(ss==s)
            return true;
        else
            return false;
    }
    string firstPalindrome(vector<string>& words) {
       string ans="";
     for(int i=0;i<words.size();i++)
     {
         if(palin(words[i]))
         {
                    ans=words[i];
         break;
         }
     }
        return ans;
    }
};