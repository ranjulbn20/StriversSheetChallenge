// Day 10

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int row = -1, len;
    for(int i = 0; i < mat.size(); i++) {
        len = mat[i].size()-1;
        if(target <= mat[i][len]) {
            row = i;
            break;
        }
    } 

    if(row == -1)
        return false;

    int left = 0, right = len;
    while(left <= right) {
        int mid = left + (right-left)/2;

        if(mat[row][mid] == target)
            return true;
        else if(mat[row][mid] > target)
            right = mid - 1;
        else   
            left = mid + 1;
    }       

    return false;
}