class Solution {
public:
    double myPow(double x, int n) {
    double ans=1;
    long long nn=n;
    if(nn<0)
    {
        nn=-nn;
    }
    while(nn)
    {
        if(nn%2==1)
        {
            ans*=x;
            nn--;
        }
        else
        {
            x*=x;
            nn/=2;
        }
    }
    if(n<0)
    {
        return 1/ans;
    }
    return ans;
    }
};