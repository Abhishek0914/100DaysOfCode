class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0; 
        int right = height.size() - 1;
        int max_area = 0; 

        while (left < right) {
            
            int width = right - left;
            int curr_height = std::min(height[left], height[right]);
            int curr_area = width * curr_height;

            max_area = std::max(max_area, curr_area);

            if (height[left] < height[right]) {
                left++; 
            } else {
                right--; 
            }
        }

        return max_area; 
    }
};