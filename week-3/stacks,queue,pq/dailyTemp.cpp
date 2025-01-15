class Solution {
public:
//like moified next gretaer elemnt 
//store indices in stack
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>st;
        vector<int>ans(t.size(),0);

        for(int i=0;i<t.size();i++){
            while(!st.empty() && t[i]>t[st.top()]) {int idx=st.top();st.pop(); ans[idx]=i-idx;}
            st.push(i);
        }
        return ans;

    }
};