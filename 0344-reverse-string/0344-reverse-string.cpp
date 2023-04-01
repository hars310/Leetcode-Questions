class Solution {
public:
    void reverseString(vector<char>& s) {
        int a=s.size();
         stack<char> st;
           for(int i=0;i<a;i++){
                st.push(s[i]);
           }
        
           for(int i=0;i<a;i++){
               s[i]=st.top();
               st.pop();
           }
    }
};