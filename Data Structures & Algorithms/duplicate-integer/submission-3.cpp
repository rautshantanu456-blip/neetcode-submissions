class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool x= false;
        if(!nums.empty()){
        sort(nums.begin(), nums.end());
        for(int i=0;i< nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                x=true;
            }

        }
        }
        
        return x;
    }
};