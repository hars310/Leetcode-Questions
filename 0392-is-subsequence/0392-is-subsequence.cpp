// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         string a="";
//         for(int i=0;i < t.length();i++){
//             for(int j=0;j < s.length();j++){
//                 if(t[i]==s[j])
//                 a.push_back(t[i]);
//                 break;
//             }
//         }
//         if(a==s)

//         return true;

//         return false;
//     }
// };
class Solution
{
    public:
        bool isSubsequence(string s, string t)
        {
            int s_len = s.length(), t_len = t.length();
            int j = 0;

            for (int i = 0; i < t_len and j < s_len; i++)
                if (s[j] == t[i])
                    j++;

            if (j == s_len)
                return true;

            return false;
        }
};