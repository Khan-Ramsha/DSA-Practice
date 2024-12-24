class Solution {
public:
    double myPow(double x, int n) {
        double res=1.0;
        long  exp = n;
        //if exp is neg
        if(exp < 0) exp *= -1;
        while(exp > 0){
            if(exp % 2 != 0){
                res *= x;
                exp--;
            }
            else{
                exp /= 2;
                x*=x;
            }
        }
        return (n < 0 ? 1/res : res);
    }
};