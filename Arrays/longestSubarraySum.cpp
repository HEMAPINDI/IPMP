   //prefix sum
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        int n=arr.size();
        int count=0;
        int sum=0;
        unordered_map<long long,int>m;
        
        for(int i=0;i<n;i++){
           sum+=arr[i];
            if(sum==k)
            count=max(count,i+1);
            if(m.find(sum-k)!=m.end()){
               count=max(count,i-m[sum-k]);
            }
            if(m.find(sum)==m.end()){
                m[sum]=i;
            }
        }
    return count;
    }