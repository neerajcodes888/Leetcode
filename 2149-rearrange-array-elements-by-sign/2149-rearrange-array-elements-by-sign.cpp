class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int a=-2,b=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[a+=2]=nums[i];
            }
            else{
                ans[b+=2]=nums[i];
            }
        }
        return ans;
    }
};