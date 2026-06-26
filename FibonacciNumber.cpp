class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        int temp;
        if (n==0){
            return 0;
        }
        if (n==1){return 1;}
        for(int i=2;i<n+1;i++){
            temp=a+b;
            a=b;
            b=temp;
        }
        return temp;
    }
};
