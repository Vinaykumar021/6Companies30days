class Solution {
public:
    int solve(int n,vector<int>&nums){
        if(nums[n]!=-1){
            return nums[n];
        }
        return nums[n] = solve(n-1,nums) + solve(n-2,nums) + solve(n-3,nums);
    }
    
    int tribonacci(int n) {
        vector<int>nums(38,-1);
        nums[0]=0,nums[1]=1,nums[2]=1;
        return solve(n,nums);
        
    }
};