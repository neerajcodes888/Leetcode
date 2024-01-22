class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        
        map<int,int>m;
        for(auto it:nums){
            ++m[it];
        }
        for(auto it:m){
            if(it.second==2)
                ans.push_back(it.first);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(i+1)==m.end())
                ans.push_back(i+1);
        }
        return ans;
    }
};