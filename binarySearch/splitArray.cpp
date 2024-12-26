class Solution {
public:
//min(max) type....
//koko eating bananas,ship with in D days,painter partition,split array ,allocate books..
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
    int splitArray(vector<int>& w, int k) {
           int low=0,high=0;
        int n=w.size();
        for(int i=0;i<n;i++){
            if(low<w[i]) low=w[i];
            high+=w[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int total=util(w,mid);
            if(total<=k) high=mid-1;
            else if(total>k) low=mid+1;
        }
        return low;
    }
};