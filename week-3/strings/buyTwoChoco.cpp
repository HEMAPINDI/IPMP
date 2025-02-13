class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
         
         int min1,min2;
         min1=min2=INT_MAX;
         int n=prices.size();
         for(int i=0;i<n;i++){
            if(prices[i]<min1) {min2=min1; min1=prices[i];}
            else if(min2>prices[i]) min2=prices[i];
         }
        
        return (min1+min2)>money? money:money-(min1+min2);
    }
};