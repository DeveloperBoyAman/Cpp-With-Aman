// LeetCode Question

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // 1st Approach
        vector<int> sumIndices;
        int min=nums[0];
        for(int i=1;i<nums.size();i++)
             if(nums[i]<min)
               min=nums[i];

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if(min >= 0 && nums[i] > target)
               continue;
            else if(min < 0 && target - nums[i] < min)
            continue;

          for (int j = i + 1; j < nums.size(); j++)
          {
              if (nums[i] + nums[j] == target)
              {
                 sumIndices.push_back(i);
                 sumIndices.push_back(j);
                 return sumIndices;
              }
           }
        }

       return sumIndices;

    }
};
