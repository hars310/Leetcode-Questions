class Solution {
public:
    bool checkPerfectNumber(int num) {
        int val=1;
        if(num==1)
        return false;

        for(int i=2;i<=num/2;i++){
              if(num%i==0)
              val+=i;

        }
        if(val==num)
        return true;

        return false;
    }
};