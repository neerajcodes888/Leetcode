class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
         int time=0,max=0,total=0;
            for(int i=0;i<colors.size();i++)
            {
                    total+=neededTime[i];
                    if(max<neededTime[i])
                    {
                                 max=neededTime[i];
                    }
                    if(colors[i]!=colors[i+1])
                    {
                            time+=total-max;
                               max=0,total=0;
                    }
                 
            }
            time += total-max;
            return time;
    }
};