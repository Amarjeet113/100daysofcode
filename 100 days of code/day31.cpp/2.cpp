// Min distance between two given nodes of a Binary Tree (GFG QUESTION)

// Function to find the level of a node in a binary tree
int findLevel(Node *root, int k, int level) {
    if (root == NULL) return -1;
    if (root->data == k) return level;
    // Recursively call the function on the left child with increased level
    int l = findLevel(root->left, k, level + 1);
    // If the node is found on the left side, return its level
    // Otherwise, continue searching on the right child
    return (l != -1) ? l : findLevel(root->right, k, level + 1);
}

// Function to find the lowest common ancestor of two nodes and the distance between the two nodes
Node *findDistU(Node *root, int a, int b, int &d1, int &d2, int &dist, int lvl) {
    if (root == NULL) return NULL;
    if (root->data == a) {
        // If the first node is found, store its level and return the node
        d1 = lvl;
        return root;
    }
    if (root->data == b) {
        // If the second node is found, store its level and return the node
        d2 = lvl;
        return root;
    }

    // Recursively call the function on the left and right children
    Node *l = findDistU(root->left, a, b, d1, d2, dist, lvl + 1);
    Node *r = findDistU(root->right, a, b, d1, d2, dist, lvl + 1);

    if (l and r) {
        // If both nodes are found on different subtrees, calculate the distance
        dist = d1 + d2 - 2 * lvl;
    }
    // Return the node found or NULL if not found
    return (l != NULL) ? l : r;
}

class Solution{
    public:
int findDist(Node *root, int a, int b) {
    int d1 = -1, d2 = -1, dist;
    // Find the lowest common ancestor of the two nodes and calculate the distance
    Node *lca = findDistU(root, a, b, d1, d2, dist, 1);
    if (d1 != -1 and d2 != -1) {
        // If both nodes are found, return the distance between them
        return dist;
    }

    if (d1 != -1) {
        // If only the first node is found, find its distance to the second node
        dist = findLevel(lca, b, 0);
        return dist;
    }
    if (d2 != -1) {
        // If only the second node is found, find its distance to the first node
        dist = findLevel(lca, a, 0);
        return dist;
    }
    // Return -1 if both nodes are not found
    return -1;
}
};  
