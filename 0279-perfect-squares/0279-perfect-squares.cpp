class Solution {
public:
    int numSquares(int n) {
        queue<int>q;
        unordered_set<int>seen;
        for(int i = 1;i * i <= n;i++){
            q.push(i * i);
            seen.insert(i * i);
        }
        int res = 1;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int cur = q.front();
                q.pop();
                if(cur == n){
                    return res;
                }
                for(int i = 1;i * i <= n;i++){
                    int newCur = cur + i * i;
                    if(newCur <= n and seen.find(newCur) == seen.end()){
                        q.push(newCur);
                        seen.insert(newCur);
                    }
                }
            }
            res++;
        }
        return res; 
    }
};