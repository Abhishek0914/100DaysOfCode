#include <vector>
#include <algorithm>

class Solution {
public:
    void nextPermutation(std::vector<int>& A) {
        int ind = -1;
        int n = A.size();
        
        // Find the rightmost element that is smaller than the element next to it
        for (int i = n - 2; i >= 0; i--) {
            if (A[i] < A[i + 1]) {
                ind = i;
                break;
            }
        }
        
        // If no such element is found, reverse the array
        if (ind == -1) {
            std::reverse(A.begin(), A.end());
            return;
        }
        
        // Find the rightmost element that is larger than A[ind]
        for (int i = n - 1; i > ind; i--) {
            if (A[i] > A[ind]) {
                std::swap(A[i], A[ind]);
                break;
            }
        }
        
        // Reverse the elements after index 'ind'
        std::reverse(A.begin() + ind + 1, A.end());
    }
};
