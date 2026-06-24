class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int y=0;
        int original =x;
        while(x!=0){
            if ((y> INT_MAX / 10) || (y < INT_MIN / 10)) {
                return 0;
            }
            y=y*10+x%10;
            x=x/10;
        }
        return(y==original);
    }
};
