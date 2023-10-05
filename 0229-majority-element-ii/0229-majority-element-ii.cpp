class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int num: nums) mp[num]++;
        vector<int> result;
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second * 3 > nums.size()) result.push_back(it->first);
        }
        return result;
    }
};