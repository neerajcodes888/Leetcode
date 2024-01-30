static unordered_set<string> operations({"*","-","+","/"});
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto it:tokens){
            if(operations.find(it)==operations.end()) st.push(stoi(it));
            else{
                int c=st.top();st.pop();
                int b=st.top();st.pop();
                if(it=="*") st.push(b*c);
                else if(it=="-") st.push(b-c);
                else if(it=="+") st.push(b+c);
                else st.push(b/c);
            }
        }
        return st.top();
    }
};