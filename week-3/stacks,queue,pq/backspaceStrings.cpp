class Solution {
public:
//using 2 stacks ...
    bool backspaceCompare(string s, string t) {
       stack<char>st1;
       stack<char>st2;
       int n=s.size(),m=t.size();
       for(int i=0;i<n;i++){
          if(s[i]=='#' && !st1.empty()){
            st1.pop();
          }
          else if(s[i]!='#')
          st1.push(s[i]);
        }
        for(int i=0;i<m;i++){
          if(t[i]=='#' && !st2.empty()){
            st2.pop();
          }
          else if(t[i]!='#')
          st2.push(t[i]);
        }
        if(st1.size()==st2.size()){ 
          while(!st1.empty()){
              if(st1.top()==st2.top())
              {
                  st1.pop();
                  st2.pop();
              }
              else 
              return 0;
            }
        } 
        else
        return 0; 
        return 1; 
    }
};