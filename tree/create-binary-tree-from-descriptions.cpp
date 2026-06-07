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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> nodeMap;    // value -> node
        unordered_set<int> children;             // all child values

        // Step 1: Build nodes and connections
        for (const auto& desc : descriptions) {
            int parentVal = desc[0];
            int childVal = desc[1];
            bool isLeft = (desc[2] == 1);

            // Create or get parent node
            if (!nodeMap.count(parentVal)) {
                nodeMap[parentVal] = new TreeNode(parentVal);
            }
            TreeNode* parent = nodeMap[parentVal];

            // Create or get child node
            if (!nodeMap.count(childVal)) {
                nodeMap[childVal] = new TreeNode(childVal);
            }
            TreeNode* child = nodeMap[childVal];

            // Link parent and child
            if (isLeft) {
                parent->left = child;
            } else {
                parent->right = child;
            }

            // Mark child as a child (it cannot be root)
            children.insert(childVal);
        }

        // Step 2: Find root — a node that is never a child
        TreeNode* root = nullptr;
        for (const auto& [val, node] : nodeMap) {
            if (children.find(val) == children.end()) {
                root = node;
                break;
            }
        }

        return root;
    }
};