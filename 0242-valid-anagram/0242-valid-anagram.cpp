class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            int s_len = s.length();
            int t_len = t.length();
           	// stack<char> st1;
           	// stack<char> st2;
           	// for(int i=0;i < s_len;i++){
           	//     st1.push(s[i]);
           	//     for(int j=0;j < t_len;j++){
           	//             if(s[i]==t[j]){
           	//             st2.push(t[j]);
           	//             t[j]=' ';
           	//             break;
           	//             }

           	//     }
           	// }
           	//     for(int i=0;i < s_len;i++){

           	//     if(st1.top()!=st2.top())  
           	//     return false;

           	//     else
           	//     st1.pop();
           	//     st2.pop();

           	//     }

            if (s_len != t_len)
                return false;

            sort(s.begin(), s.end());
            sort(t.begin(), t.end());

            for (int i = 0; i < s_len; i++)
            {
                if (s[i] != t[i])
                    return false;
            }
            return true;
        }
};