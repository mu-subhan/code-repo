class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int finalanser=0;
        int currsum=0;
        for(int i=0;i<gain.size();i++){
       currsum += gain[i];
       finalanser=max(currsum,finalanser);
        }
        return finalanser;
    }
};