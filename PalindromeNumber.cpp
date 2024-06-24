class Solution {
public:
    int reversenum(int a)
    {
        int lastdig;
        long long num;
        while(a!=0)
        {
            lastdig=a%10;
            a=a/10;
            num=((num*10)+lastdig);
        }

        return num;
    }
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        else
        {
            if(x==reversenum(x))
            {
                return true;
            }
            else{
                return false; 
            }
        }
    }
};
