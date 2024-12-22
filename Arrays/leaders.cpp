class Solution {  
  public:
  //stack should be empty that means the element is a leader
  //space complexity o(n)
    vector<int> leaders(vector<int>& arr) {
        vector<int>v;
        stack<int>st;
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty()&&st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty())v.push_back(arr[i]);
            st.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

//optimise space required for stack,just take a single variable maxi 
//and keep updating it with the maximum element from right

class Solution {  
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int>v;
        int n=arr.size()-1;
        int maxi=INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
           if(maxi<=arr[i]) v.push_back(arr[i]);
           maxi=max(arr[i],maxi);
    }
    reverse(v.begin(),v.end());
    return v;
    }
};