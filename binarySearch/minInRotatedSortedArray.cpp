class Solution {
public:
    int findMin(vector<int>& arr) {
        int index=-1;
        int n=arr.size();
        int low=0,high=n-1;
        int ans=INT_MAX;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[high]){
                if(arr[low]<ans){
                    ans=arr[low];
                    index=low;
                }
                break;
            }
            else if(arr[low]<=arr[mid]){
                if(arr[low]<ans){
                    ans=arr[low];
                    index=low;
                }
                low=mid+1;
            }
            else{
                if(arr[mid]<ans){
                    ans=arr[mid];
                    index=mid;
                }
                high=mid-1;
            }
        }
        return ans;
    }
};