//   Sum of nodes on the longest path from root to leaf node  (GFG)



class Solution
{
public:
    //Utility function to calculate the sum of the longest root to leaf path
    void sumOfLongRootToLeafPathUtil(Node *root, int sum, int len, int &maxLen, int &maxSum)
    {
        //Base case: if the current node is null
        if (!root)
        {
            //Checking if the current path has a longer length and update maxLen and maxSum accordingly
            if (maxLen < len)
            {
                maxLen = len;
                maxSum = sum;
            }
            //If the lengths are equal, check if the current sum is greater and update maxSum if necessary
            else if (maxLen == len && maxSum < sum)
                maxSum = sum;
            return;
        }
        //Recursively calculating the sum of the left and right subtrees
        sumOfLongRootToLeafPathUtil(root->left, sum + root->data, len + 1, maxLen, maxSum);
        sumOfLongRootToLeafPathUtil(root->right, sum + root->data, len + 1, maxLen, maxSum);
    }

    //Function to calculate the sum of the longest root to leaf path
    int sumOfLongRootToLeafPath(Node *root)
    {
        //Base case: if the tree is empty
        if (!root)
            return 0;
        
        int maxSum = INT_MIN, maxLen = 0; //Initializing the variables to store the maximum length and sum
        sumOfLongRootToLeafPathUtil(root, 0, 0, maxLen, maxSum); //Calling the utility function
        return maxSum; //Returning the maximum sum
    }
};
