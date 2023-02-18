class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int start = 1, end = num;
        while(start<=end){
            long long int mid = start+(end-start)/2;
            if(mid*mid > num){
                end = mid-1;
            }
            else if(mid*mid < num){
                start = mid+1;
            }
            else{
                return true;
            }
            
        }
        return false;
    }
};