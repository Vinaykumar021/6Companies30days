class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
            int elem = 0;
            for (int i = 0; i < n; i++) {
                elem = elem ^ nums[i];
            }
            
            return elem;
        
    }
};