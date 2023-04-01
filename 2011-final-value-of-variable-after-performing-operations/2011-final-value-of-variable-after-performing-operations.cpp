class Solution
{
    public:
        int finalValueAfterOperations(vector<string> &operations)
        {
            int x = 0;
            for (int i = 0; i < operations.size(); i++)
            {
                for (int j = 0; j < operations[i].length(); j++)
                {

                    if (operations[i][j] == '+')
                    {
                        x = x + 1;
                        break;
                    }
                    if (operations[i][j] == '-')
                    {
                        x = x - 1;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                cout << x;
            }
            return x;
        }
};