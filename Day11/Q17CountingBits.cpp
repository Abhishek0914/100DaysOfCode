class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
    for (int i = 0; i <= n; ++i) {
        ans[i] = __builtin_popcount(i); // __builtin_popcount counts the number of 1's in the binary representation
    }
    return ans;
    }
};