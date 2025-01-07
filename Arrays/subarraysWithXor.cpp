int Solution::solve(vector<int> &A, int B) {
    map<int,int>m;
    m[0]=1;
    int count=0;
    int xr=0;
    for(int i=0;i<A.size();i++){
        xr=xr^A[i];
            m[xr]++;
        
            count+=m[xr^B];
        
        
    }
    return B==0?1:count;
}