class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      if(nums.size() == 0) return false;
      int count = 0;
        for(int i = 0;i<nums.size() - 1;i++){
          if(nums[i] == nums[i+1])
          count++;
        }
        if(count != 0)return true;
        else return false;
    }
};