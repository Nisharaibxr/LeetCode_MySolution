class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;
        
        for(int x:n){
            maxi = max(maxi, (int)(x-'0'));
        }
        return maxi;
    }
};