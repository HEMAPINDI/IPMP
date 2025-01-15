// class Solution {
// public:
//     int calPoints(vector<string>& op) {
//         stack<int>st;
//         int n=op.size();
//         for(int i=0;i<n;i++){
//             if(isdigit(op[i][0])) st.push(stoi(op[i]));
//             else if(op[i]=="C") {
//                 if(!st.empty()) st.pop();
//             }
//             else if(op[i]=="D") {
//                 if(!st.empty())st.push(st.top()*2);
//             }
//             else if(op[i]=="+"){
//                 if(st.size()>=2) {
//                     int x=st.top();
//                     st.pop();
//                     int y=st.top();
//                     st.push(x);
//                     st.push(x+y);
//                 }
//             }
//         }
//         int ans=0;
//         while(!st.empty()){
//         ans+=st.top();st.pop();
//        }
//        return ans;
//     }
// };
class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int>st;
        int n = op.size();
        for(int i = 0; i < n; i++){
            if(op[i] == "C") {
                st.pop();
            }
            else if(op[i] == "D") {
                st.push(st.top() * 2);
            }
            else if(op[i] == "+") {
                int top1 = st.top(); st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1 + top2);
            }
            else {
                st.push(stoi(op[i]));
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans += st.top(); st.pop();
        }
        return ans;
    }
};
