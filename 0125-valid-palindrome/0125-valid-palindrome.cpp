class Solution
{
    public:
        bool isPalindrome(string s)
        {

            string temp = "";
            for (int i = 0; i < s.length(); i++)
            {
                if (isupper(s[i]))
                    temp += tolower(s[i]);
                if (islower(s[i]))
                    temp += s[i];

                if (s[i] <= 57 && s[i] >= 48)
                    temp += s[i];
            }
            int len = temp.length();
            for (int i = 0; i < len; i++)
            {
                if (temp[i] == temp[len - i - 1])
                    continue;
                else
                    return false;
            }
            return true;
        }
};