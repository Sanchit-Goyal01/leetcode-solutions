class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++; 
            for(int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;

            if(top <= bottom) {
                // Traverse from right to left on the bottom row
                for(int i = right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--; 
            }

            if(left <= right) {
                // Traverse from bottom to top on the left column
                for(int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++; 
            }
        }
        return result;
    }
};
