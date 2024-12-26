class Solution {
public:
//k*m

    bool possible(vector<int>& arr,int mid,int m,int k){
        int cnt=0;
        int n=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid) cnt++;
            else{
                n+=cnt/k;
                cnt=0;
            }
        }
        n+=cnt/k;  //check for the count even after loop ends...
        return n>=m;
    }

    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();
        if((long long)k*m>n) return -1;
        int low,high;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(mini>arr[i]) mini=arr[i];
            if(maxi<arr[i]) maxi=arr[i];
        }
        low=mini;high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(arr,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
      
    }
};