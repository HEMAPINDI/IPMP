 //Permute two arrays such that sum of every pair is greater or equal to K
 
 
 bool isPossible(int k, vector<int> &arr1, vector<int> &arr2) {
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end(),greater<int>());
        
        int n=arr1.size();
        
        for(int i=0;i<n;i++){
             if(arr1[i]+arr2[i]<k) return false;
        }
        return true;
    }