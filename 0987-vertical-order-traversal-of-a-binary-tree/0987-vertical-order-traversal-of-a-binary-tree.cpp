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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<tuple<TreeNode*,int,int>> q;
        q.push({root,0,0});

        unordered_map<int,vector<pair<int,int>>> mpp;

        int start = INT_MAX;
        int end = INT_MIN;

        while(!q.empty()){

            auto [curr_elem,pos,level] = q.front();

            q.pop();


            start = min(pos,start);
            end = max(pos,end);

            if(curr_elem->left != NULL) q.push({curr_elem->left,pos-1,level+1});
            if(curr_elem->right != NULL) q.push({curr_elem->right,pos+1,level+1});

            mpp[pos].push_back({level,curr_elem->val});
        }

        vector<vector<int>> ans;

        for(int i=start;i<=end;i++){
            auto arr = mpp[i];
            sort(arr.begin(),arr.end());
            
            vector<int> line;

            for(auto [level,node] : arr){
                line.push_back(node);
            }

            ans.push_back(line);
        }

        return ans;

    }
};