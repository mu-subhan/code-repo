class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
     int count=0;
   for(auto cnt:costs){
    if(coins-cnt < 0) break;
    count++;
    coins -= cnt;
   }
     return count;
    }
};