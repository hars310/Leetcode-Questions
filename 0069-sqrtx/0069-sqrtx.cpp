class Solution
{
    public:
        int mySqrt(int x)
        {

            if (x == 1 || x == 0)
                return x;

            long int result = 1;
            long int i = 1;
            while (result <= x)
            {
                i++;
                result = i * i;
            }

            return i - 1;
        }
};