class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {
            int numsSize = nums.size();
            int i;
            int j = 1;

            if (numsSize == 0 || numsSize == 1)
                return 1;

            for (i = 1; i < numsSize; i++)
            {
                if (nums[i] != nums[i - 1])
                {
                    nums[j] = nums[i];
                    j++;
                }
            }
            if (j < numsSize)
                nums[j] = '\0';
            return j;
        }
};