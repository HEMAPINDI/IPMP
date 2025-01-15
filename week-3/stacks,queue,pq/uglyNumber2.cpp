class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>v(n);
        int p1,p2,p3;
        p1=p2=p3=0;
        v[0]=1;
        for(int i=1;i<n;i++){
            int two_mul=v[p1]*2;
            int three_mul=v[p2]*3;
            int five_mul=v[p3]*5;

            v[i]=min(two_mul,min(three_mul,five_mul));

            if(two_mul==v[i]) p1++;
            if(three_mul==v[i]) p2++;
            if(five_mul==v[i]) p3++;


        }
        return v[n-1];
    }
};