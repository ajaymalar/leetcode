class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l=flowerbed.size();
        if(l==1 )
        {
            if(flowerbed[0]==0 )
            n--;
            return n<=0;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0)
        {
            flowerbed[0]=1;
            n--;
        }
        for(int i=1;i<l-1;i++)
        {
            if(flowerbed[i]!=1 && flowerbed[i-1]!=1 && flowerbed[i+1]!=1)
            {
                n--;
                flowerbed[i]=1;
            }
        }
           if (flowerbed[l - 1] == 0 && flowerbed[l - 2] == 0) {
            flowerbed[l - 1] = 1;
            n--;
        }
        if(n<=0)
        return true;
        return false;
    }
};