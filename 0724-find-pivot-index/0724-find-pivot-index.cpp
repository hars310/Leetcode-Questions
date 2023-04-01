class Solution
{
    public:
        int pivotIndex(vector<int> &nums)
        {
            int lsum = 0, rsum = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                lsum += nums[i];
            }
            for (int j = 0; j < nums.size(); j++)
            {
                lsum -= nums[j];
                if (lsum == rsum)
                    return j;

                rsum += nums[j];
            }

            return -1;
        }
};