class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int32_t result = 0;
    for (int i = 0; i < 32; ++i) {
        // Shift result to the left to make room for the next bit
        result <<= 1;
        // Add the least significant bit of n to result
        result |= (n & 1);
        // Shift n to the right to process the next bit
        n >>= 1;
    }
    return result;
    }
};