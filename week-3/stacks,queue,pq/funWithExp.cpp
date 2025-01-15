class Solution {
public:
//using stack ...
    int calculate(string s) {
        stack<int> st;
        int num = 0;
        char op = '+';
        
        for (int i = 0; i < s.length(); i++) {
            char cur = s[i];
            
            if (isdigit(cur)) {
                num = num * 10 + (cur - '0');
            }
            
            if (!isdigit(cur) && !isspace(cur) || i == s.length() - 1) {
                if (op == '+') {
                    st.push(num);
                } else if (op == '-') {
                    st.push(-num);
                } else if (op == '*') {
                    int top = st.top();
                    st.pop();
                    st.push(top * num);
                } else if (op == '/') {
                    int top = st.top();
                    st.pop();
                    st.push(top / num);
                }
                op = cur;
                num = 0;
            }
        }
        
        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result;
    }
};