class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> counter(nums.size()+1, false);
        vector<int> ans;

        for(int i=0; i<nums.size(); i++) {
            counter[nums[i]] = true;
        }

        for(int i=1; i<nums.size()+1; i++) {
            if(counter[i]==false) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};