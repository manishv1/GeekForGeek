/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/


class Solution 
{
  public:
    vector<int> inOrder(Node* root)
    {
        vector<int> result;
        inOrderHelper1(root, result);
        return result;
    }

  private:
    void inOrderHelper1(Node* root, vector<int>& result) {
        if (root == NULL)
            return;
        inOrderHelper1(root->left, result);   // visit left subtree
        result.push_back(root->data);        // visit node
        inOrderHelper1(root->right, result);  // visit right subtree
    }
};