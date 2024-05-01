class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int amount_water=0,temp_capacity=capacity;
        for(int i=0; i<plants.size(); i++)
        {
            if(plants[i]<=temp_capacity)
            {
                amount_water++;
                temp_capacity -= plants[i];
            }else{
                amount_water += i+i+1;
                temp_capacity = capacity-plants[i];
            }
        }
        return amount_water;
    }
};