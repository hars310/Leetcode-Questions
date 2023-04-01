class Solution
{
    public:
        int diagonalSum(vector<vector < int>> &mat)
        {
            int n = mat.size();
            int left = 0, right = n - 1;
            int sum = 0;
            while (left < right)
            {
                int top = left, bottom = right;
                sum += mat[top][left];
                sum += mat[top][right];
                sum += mat[bottom][left];
                sum += mat[bottom][right];
                left++, right--;
            }
            if (left == right)
                sum += mat[left][right];
            return sum;
        }
};