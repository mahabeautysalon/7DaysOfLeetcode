class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        for(int i=0; i<flowerbed.size(); i++)
        {
            if(flowerbed[i]==0 && n>0)
            {
                if(i==0 || flowerbed[i-1]!=1)
                {
                    if(i== flowerbed.size()-1 || flowerbed[i+1]!=1)
                    {
                        flowerbed[i]=1;
                        i++;
                        n--;
                    }
                }
            }
            if(n==0)
            {
                return true;
            }
        }
        if(n==0)
        {
            return true;
        }else{
            return false;
        }
    }
};