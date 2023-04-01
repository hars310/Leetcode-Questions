class Solution {
public:
    bool isPalindrome(int x) {


        if(x<0)
        return false;

       long int n=0;
        int r;
        r=x;
        while(x>0){
         n= (n*10) + (x%10);
        x=x/10;
        }
        if(n==r)
        return true;
        else
        return false;



    }
};