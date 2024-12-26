class Solution {
public:
    int util(vector<int>& w,int cap){
         int total=1;
         int wt=0;
         for(int i=0;i<w.size();i++){
            if(wt+w[i]>cap){
                 total+=1;
                 wt=w[i];
            }
            else wt+=w[i];
         }
         return total;
    }
    int shipWithinDays(vector<int>& w, int days) {
        int low=0,high=0;
        int n=w.size();
        for(int i=0;i<n;i++){
            if(low<w[i]) low=w[i];
            high+=w[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int total=util(w,mid);
            if(total<=days) high=mid-1;
            else if(total>days) low=mid+1;
        }
        return low;
    }
};