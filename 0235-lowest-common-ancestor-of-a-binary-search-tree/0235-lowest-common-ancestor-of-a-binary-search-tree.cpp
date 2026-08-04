/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {

public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if ( ((root->val >= p->val) and (root->val <= q->val)) or ((root->val <= p->val) and (root->val >= q->val)) ) return root;

        TreeNode* result = nullptr;

        if (root->val > p->val and root->val > q->val) result = lowestCommonAncestor(root->left,p,q);
        else if(root->val < p->val and root->val < q->val) result = lowestCommonAncestor(root->right,p,q);

        return result;
    }
};

// p and q of course upar jaaunga
// let me consider 0 and 9 i need to find the common ancestor
// first parent of 0 == 9 ? No also parent of 9 == 0 ? No
// So I would make a third case checking the parents of both are same or not since this is a BST then i would go up only
// now same i would check for the but if let say i need to find parent of 6 and 3 then 6 is root node or let say 2 and 3 then parent of 3 is 4 , parent of 2 is 6 but then parent of 4 is 2 right
// so there is another thing that here 

// root se traverse kar left and riight par wait it is a bst right so nodes ek side mai  honge like 2 and 4 are on same side right since they are less than 6 so instead of traversing it all i could just check what values i guess p and q like let me take example of 0 and 9 since 0 < 6 and 9 > 6 i know common will be 6 only now let me check for th 3 and 0 since bboth are less than 6 right then it would check on 2 since 0 < 2 and 3 > 2then 2 is parent and common ancestor