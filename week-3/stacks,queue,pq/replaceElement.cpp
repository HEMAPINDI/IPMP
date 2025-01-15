class Solution{
public:
//since multiple elements can get ssame rank ,,, 
//use map datastructure to make all those uplicates have same rank
    vector<int> replaceWithRank(vector<int> &arr, int n){

        vector<int>ans;
        int cnt=1;
        vector<int>sorted_arr=arr;
        sort(sorted_arr.begin(),sorted_arr.end());
        map<int,int>m;
        for(int i=0;i<n;i++){
            if(m[sorted_arr[i]]==0) {m[sorted_arr[i]]=cnt;cnt++;}
        }
        for(int i=0;i<n;i++){
            ans.push_back(m[arr[i]]);
        }
       return ans;
    }

};