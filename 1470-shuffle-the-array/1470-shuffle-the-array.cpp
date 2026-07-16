class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr(nums.size());
        for(int i=0; i<nums.size()/2; i++) {
            arr[2*i] = nums[i];       
            arr[2*i+1] = nums[i+n];   
        }
        return arr;
    }
};