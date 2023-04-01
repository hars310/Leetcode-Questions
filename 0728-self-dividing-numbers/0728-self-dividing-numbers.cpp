class Solution
{
    public:

        bool check(int n)
        {
            int val = 0, i;
            i = n;

            while (i > 0)
            {
                val = i % 10;
                if (val == 0)
                    return false;
                else if (n % val == 0)
                    i /= 10;
                else
                    return false;
            }
            return true;
        }
    vector<int> selfDividingNumbers(int left, int right)
    {

        int val = 0;
        vector<int> v;

        for (int i = left; i <= right; i++)
        {
            if (check(i) == true)
                v.push_back(i);
        }
        return v;
    }
};