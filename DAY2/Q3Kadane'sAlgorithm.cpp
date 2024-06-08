class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cnt=0, maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){ 
                cnt+=nums[i];

           if (cnt>maxi) maxi=cnt;

           if (cnt<0) cnt=0;     
        }
        return maxi;
    }
};