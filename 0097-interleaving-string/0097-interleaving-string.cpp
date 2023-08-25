class Solution {
public:
    unordered_map<string, bool> memo;   

bool checkInterleave(string &s1, int i, string &s2, int j, string &s3, int k) {
     
    if (i == s1.size() && j == s2.size() && k == s3.size())
        return true;
    if (k >= s3.size())
        return false;

    string key = to_string(i) + "|" + to_string(j) + "|" + to_string(k);

 
    if (memo.find(key) != memo.end())
        return memo[key];

    bool result = false;

    
    if (i < s1.size() && s1[i] == s3[k])
        result = checkInterleave(s1, i + 1, s2, j, s3, k + 1);

    
    if (!result && j < s2.size() && s2[j] == s3[k])
        result = checkInterleave(s1, i, s2, j + 1, s3, k + 1);

    
    memo[key] = result;
    return result;
}

bool isInterleave(string s1, string s2, string s3) {
    return checkInterleave(s1, 0, s2, 0, s3, 0);
}
};