//  binary search

class Solution
{
public:
  int binarySearch(vector<int> &arr, int start, int end, int k)
  {
    if (start > end)
    {
      return -1;
    }
    int mid = (start + end) / 2;
    if (k == arr[mid])
    {
      return mid;
    }
    if ( arr[mid]>k)
    {
      return binarySearch(arr, start, mid - 1, k);
    }
    else
    {
      return binarySearch(arr, mid + 1, end, k);
    }
  }
  int search(vector<int> &nums, int target)
  {
    int ans = binarySearch(nums, 0, nums.size() - 1, target);
    return ans;
  }
};

