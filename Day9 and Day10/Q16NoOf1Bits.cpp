#include <bitset>
class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> binary(n);
    
    // Count the number of set bits (1's) in the binary representation
    return binary.count();
    }
};