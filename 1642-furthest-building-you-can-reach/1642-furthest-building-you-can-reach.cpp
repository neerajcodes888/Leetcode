class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=1;i<n;i++){
            int wd = heights[i]-heights[i-1];
            if(wd>0){
                pq.push(wd);
                if(pq.size()>ladders)
                {
                    bricks-=pq.top();
                    pq.pop();
                }
                if(bricks<0)
                    return i-1;
            }
        }
        return  n-1;
    }
};