class Solution {
public:
    int mySqrt(int x) {
        long long int start = 0, end = INT_MAX;
        long long int ans = 0;
        while(start<=end){
            long long int mid = start + (end-start)/2;
            if(mid*mid < x){
                start = mid+1;
                ans = mid;
            }
            else if(mid*mid == x){
                return mid;
            }
            else {
                end = mid-1;
            }
        }
        return ans;
        
    }
};