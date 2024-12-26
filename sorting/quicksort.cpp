 void quickSort(vector<int>& arr, int low, int high) {
          if(low>=high) return;
          int ind=partition(arr,low,high);
          quickSort(arr,low,ind-1);
          quickSort(arr,ind+1,high);
    }

  public:
     // places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j){
            while(arr[i]<=pivot &&i<high) i++;
            while(arr[j]>pivot && j>low) j--;
            if(i<j) swap(arr[i],arr[j]);
        }
         swap(arr[low],arr[j]);
        return j;
    }