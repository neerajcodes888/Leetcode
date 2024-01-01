class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
            priority_queue<int,vector<int>,greater<int>>heap;
        sort(g.begin(),g.end());
        int ans=0;
        for(auto i:s){
            heap.push(i);
        }
        for(auto i:g){
            bool flag=false;
            while( flag==false && !heap.empty()){
                if(i<=heap.top()){
                    ans++;
                    flag=true;
                    heap.pop();
                } else {
                    heap.pop();
                }
                
            }
            if(heap.empty()) return ans;
        }
        return ans; 
    }
};