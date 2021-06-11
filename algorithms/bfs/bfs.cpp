#include "../../headers.h"

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val (0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<vector<int>> levelOrder( TreeNode* root)
{
    vector<vector<int>> traverse;
    if (!root) return traverse;

    deque<TreeNode*> q; // Need to understand the difference b/w TreeNode and TreeNode* here
    if (root) q.emplace_back(root);

    while(q.size())
    {
        traverse.resize(traverse.size()+1);
        // This queue re-sizing condition is strange - Need to get to know this?

        int og_size = q.size();
        //for(int i = 0; i < q.size(); i++)
        for (int i = 0, og_size = q.size(); i != og_size; i++)
        {
            auto node = q.front();
            q.pop_front();

            traverse.back().push_back(node->val);

            if(node->left) q.emplace_back(node->left);
            if(node->right) q.emplace_back(node->right);
        }
    }

    return traverse;
}


int main()
{
    return 0;
}