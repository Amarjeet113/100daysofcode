//  Swap the array elements  (GFG)

class Solution{
  public:
    // Function to swap elements of the array
    void swapElements(int arr[], int n){
        
        for(int i = 0; i < n-2; i++){
            int temp = arr[i];
            arr[i] = arr[i+2];
            arr[i+2] = temp;
        }
    }
};
