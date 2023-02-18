class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int ans(0);
        // Binary Search: O(m lg(n)) or equivalently O(n lg(m)) - look for break point of each row / column
        for (const vector<int>& row: grid)
            ans += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
        return ans;
        
    }
};