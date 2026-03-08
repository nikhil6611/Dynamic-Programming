class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1){
            return n;
        }
       int pre=1, pre2=0, curr;
       for(int i=2;i<=n;i++){
            curr=pre+pre2;
            pre2 = pre;
            pre = curr;
       }
       return curr;
    }
};
