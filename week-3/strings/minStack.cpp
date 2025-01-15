class MinStack {
  stack < long long > st;
  long long mini;
public:
    MinStack() {
        while(!st.empty()) st.pop();
        mini=LLONG_MAX;
    }
    
    void push(int val) {
        long long value = val;
         if(st.empty()){
            st.push(value);
            mini=value;
         }
         else{
            if(val<mini){
                st.push(2*value-mini);
                mini=value;
            }
            else st.push(value);
         }
    }
    
    void pop() {
        if(st.empty()) return;
        long long x=st.top();
        st.pop();
        if(x<mini){
            mini=2*mini-x;
        }
    }
    
    int top() {
       
        long long x=st.top();
        if(x<mini) return mini;
        else return x;
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */