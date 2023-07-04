class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        int ans;
        for(auto i:nums)
            ++m[i];
        for(auto i:m)
            if(i.second==1)
                ans=i.first;
        return ans;
    }
};