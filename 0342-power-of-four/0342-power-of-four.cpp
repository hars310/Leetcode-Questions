class Solution
{
    public:
        bool isPowerOfFour(int n)
        {

            if (n < 1)
                return false;
            if (n == 1)
                return true;
            int t = 0;
            int temp = 0;
            while (n > 1)
            {
                t = n % 4;
                n /= 4;
                temp += t;
            }
            if (temp == 0)
                return true;

            return false;
        }
};