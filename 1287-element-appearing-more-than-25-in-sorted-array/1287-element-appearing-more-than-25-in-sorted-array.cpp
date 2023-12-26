class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>m;
        for(auto it:arr)
        {
            ++m[it];
        }
        int ans;
        for(auto it:m)
        {
            if(it.second>(arr.size()/4))
                ans=it.first;
        }
        return ans;
    }
};