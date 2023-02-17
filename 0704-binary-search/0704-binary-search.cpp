class Solution {
public:
    int search(vector<int>& nums, int target) {
        int z = binary_search(nums.begin(),nums.end(),target);
        if(z == 0){
            return -1;
        }
        else{
            int x = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            return x;
        }
    }
};