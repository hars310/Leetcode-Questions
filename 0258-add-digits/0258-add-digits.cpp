class Solution
{
    public:
        int val;
    int addDigits(int num)
    {
        int temp = 0;

        while (num > 0)
        {
            temp = temp + num % 10;
            num /= 10;
        }
        val = temp;
        if (temp <= 9)
            return temp;
        else
            addDigits(val);

        return val;
    }
};