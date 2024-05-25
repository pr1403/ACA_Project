class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size() - 1;
        while (hi >= lo) {
            int mid = lo + (hi - lo) / 2;
            
            if (mid == 0 || nums[mid - 1] == nums[mid]) {
                if (mid % 2 == 0) {
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }

            } 
            else if (mid == nums.size() - 1 || nums[mid + 1] == nums[mid]) {
                if (mid % 2 == 0) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
            else{
                return nums[mid];
            }
        }
        return -1;
    }
};
        
    