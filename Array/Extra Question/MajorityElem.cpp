class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target = 0;
        int count = 0;

        for(int num:nums){
            if(count == 0){
                target = num;
            }
            if(num == target){
                count++;
            }
            else{
                count--;
            }
        }
return target;
        }
};