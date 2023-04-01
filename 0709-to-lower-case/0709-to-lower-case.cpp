class Solution
{
    public:
        string toLowerCase(string s)
        {
            string ans = s;
            for (int i = 0; i < s.length(); i++)
            {

                if (isupper(s[i]))
                    ans[i] = tolower(s[i]);

                else
                    ans[i] = s[i];
            }
            return ans;
        }
};