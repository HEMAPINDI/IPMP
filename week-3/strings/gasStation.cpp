class Solution {
public:
//if the total amount of gas is greater than or eaqul to costs, then even if gas runs out midway, starting from a different location will allow a full circuit.
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum_gas=accumulate(gas.begin(),gas.end(),0);
        int sum_cost=accumulate(cost.begin(),cost.end(),0);
        if(sum_gas<sum_cost) return -1;
        int available_gas=0;
        int n=gas.size();
        int ans=0;
        for(int i=0;i<n;i++){
            available_gas+=(gas[i]-cost[i]);
            if(available_gas<0){
                available_gas=0;
                ans=i+1;
            }
        }
        return ans;
    }
};