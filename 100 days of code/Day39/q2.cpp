//  Flatten BST to sorted list(GFG)

class Solution
{
public:
    Node *flattenBST(Node *root)
    {
       
    if (root == NULL)
    {
        return root;
    }
    
    // Array to store inorder traversal
    vector<int> inorderArray;
    
    inorder(root, inorderArray);

    // Create a pointer called newRoot, and store the first value of the array in it.
    Node *newRoot = new Node(inorderArray[0]);

    // Create a pointer called curr and store the newRoot in it.
    Node *curr = newRoot;

    for (int i = 1; i < inorderArray.size(); i++)
    {

        // Create a new node.
        Node *temp = new Node(inorderArray[i]);

        // Make the left child of curr as NULL and right child as the temp. And make curr = temp.
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }

    // Make both the left and the right child of the last node as NULL.
    curr->left = NULL;
    curr->right = NULL;

    return newRoot;
    }
    void inorder(Node *root, vector<int> &inorderArray)
{
    if (root == NULL)
    {
        return;
    }
    
    // Recur for left sub-tree
    inorder(root->left, inorderArray);

    // Add current node data to array
    inorderArray.push_back(root->data);

    // Recur for right sub-tree
    inorder(root->right, inorderArray);
}


};
