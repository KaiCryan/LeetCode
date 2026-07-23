class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;

        for(int i=0; i<nums.size(); i++) {
            int count = 0;
            for(int j=0; j<nums.size(); j++) {
                if(j != i && nums[j]==nums[i]) {
                    count++;
                }
            }
            if(count==0) {
                single = nums[i];
                return single;
            }
        }

        return single;
    }
};