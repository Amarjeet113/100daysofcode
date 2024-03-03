//  Largest Number formed from an Array  (GFG)

class Solution{
public:

	static int myCompare(string X, string Y) {
	  
	    string XY = X.append(Y);

	    
	    string YX = Y.append(X);

	    
	    return XY.compare(YX) > 0 ? 1 : 0;
	}
public:

	string printLargest(int n, vector<string> &arr) {
	    
	    sort(arr.begin(), arr.end(), myCompare);

	    string ans;
	    for (int i = 0; i < arr.size(); i++) ans += arr[i];
	    return ans;
	}
};
