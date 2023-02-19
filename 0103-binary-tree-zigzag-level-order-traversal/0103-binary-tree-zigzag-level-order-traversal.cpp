/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //O(n), O(n)
        queue<TreeNode *> q {};
        vector<vector<int>> res {};
        bool dir = true; //true = left -> right
        if(!root)
            return res;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            vector<int> temp {};
            for(int i=0; i<size; ++i) {
                auto x = q.front();
                q.pop();
                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
                if(dir)
                    temp.push_back(x->val);
                else
                    temp.insert(temp.begin(),x->val);
            }
            res.push_back(temp);
            dir ^= 1;
        }
        return res;
    }
};