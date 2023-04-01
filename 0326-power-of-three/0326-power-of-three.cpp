class Solution
{
    public:
        bool isPowerOfThree(int n)
        {
            int val = 0;
            if (n <= 0)
                return false;
            if (n == 1)
                return true;
            while (n > 1)
            {
                val = val + n % 3;
                n /= 3;
            }
            if (val == 0)
                return true;

            return false;
        }
};