class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        unordered_map<int,int>m;//(m[va]=index)
        for(int i=0;i<n;i++){
            int x=target-arr[i];
            if(m.count(x)){
                return {i,m[x]};
            }
            m[arr[i]]=i;
        }
        return {};
    }
};