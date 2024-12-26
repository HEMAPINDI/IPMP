 void heapify(vector<int>& arr,int n,int i){
        int l,r,maxi;
        
        maxi=i;
        l=2*i+1;
        r=2*i+2;
        
        if(l<n&&arr[l]>arr[maxi]) maxi=l;
        if(r<n && arr[maxi]<arr[r]) maxi=r;
        
        if(maxi!=i) {swap(arr[maxi],arr[i]);heapify(arr,n,maxi);}
        
        
        
    }
    void heapSort(vector<int>& arr) {
        int n=arr.size();
        
        for(int i=n/2-1 ;i>=0;i-- ){
            heapify(arr,n,i);
        }
        for(int i=n-1;i>0;i--){
          
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
        
    }