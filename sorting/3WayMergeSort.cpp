#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid1,int mid2,int high,vector<int> &copy){
   
    int i=low;
    int j=mid1;
    int k=mid2;
    int l=low;

    while(i<mid1 && j<mid2 && k<high){
        if(arr[i]<arr[j]){
            if(arr[i]<arr[k]){
                copy[l++]=arr[i++];
            }else{
                copy[l++]=arr[k++];
            }
        }else{
            if(arr[j]<arr[k]){
                copy[l++]=arr[j++];
            }else{
                copy[l++]=arr[k++];
            }
        }
    }

    while(i<mid1 && j<mid2){
        if(arr[i]<arr[j]){
            copy[l++]=arr[i++];
        }else{
            copy[l++]=arr[j++];
        }
    }

    while(j<mid2 && k<high){
        if(arr[j]<arr[k]){
            copy[l++]=arr[j++];
        }else{
            copy[l++]=arr[k++];
        }
    }

    while(i<mid1 && k<high){
        if(arr[i]<arr[k]){
            copy[l++]=arr[i++];
        }else{
            copy[l++]=arr[k++];
        }
    }

    while(i<mid1){
        copy[l++]=arr[i++];
    }

    while(j<mid2){
        copy[l++]=arr[j++];
    }

    while(k<high){
        copy[l++]=arr[k++];
    }

    
}

void mergeSort(vector<int> &arr,int low,int high,vector<int> &copy){
    
    if(high-low<=1) return;

    int mid1=low+(high-low)/3;
    int mid2=low+2*(high-low)/3;

    mergeSort(copy,low,mid1,arr);
    mergeSort(copy,mid1,mid2,arr);
    mergeSort(copy,mid2,high,arr);

   

    merge(copy,low,mid1,mid2,high,arr);
}

void util(vector<int> &arr,int n){
    if(n==0) return;

    vector<int>copy(n);

    for(int i=0;i<n;i++){
        copy[i]=arr[i];
    }

    mergeSort(copy,0,n,arr);

    //copy back ..

    for(int i=0;i<n;i++){
        arr[i]=copy[i];
    }

}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    util(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}