// Count all possible point(GFG)

class Solution {
public:
	int isPossible(vector<vector<int>> paths) {
		bool f = true;
		// Loop through each row in the paths matrix
		for (int i = 0; i < paths.size(); i++) {
			int cntOfOne = 0;
			// Count the number of 1s in the current row
			for (int j = 0; j < paths[i].size(); j++) {
				cntOfOne += paths[i][j] == 1;
			}
			// Check if the count of 1s is odd or zero
			if (cntOfOne & 1 or !cntOfOne)
				f = false;
		}
		// If there's only one node, return 1
		if (paths.size() == 1)
			return 1;
		// Otherwise, return the flag
		return f;
	}
};
