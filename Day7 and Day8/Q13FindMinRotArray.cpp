class Solution {
public:
    int findMin(vector<int>& arr)
{
int low = 0, high = arr.size () - 1;
int ans = INT_MAX;
while(low <= high) {
int mid = (low + high) / 2;
// search space is already sorted
// then always arr [low] is will be smaller
// in that search space
if(arr [low] <= arr[high]) {
ans = min (ans, arr[low]);
break;
}
if(arr[low] <= arr[mid]) {
ans = min (ans, arr[low]);
low = mid + 1;
}
else {
high = mid - 1;
ans = min (ans, arr [mid]);
}
}
return ans;
}
};