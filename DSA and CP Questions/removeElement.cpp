class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int index=0,k=nums.size(),size=k;

        for(int i=0;i<size;i++){
            if(nums[i]==val)
            {
                k--;
                continue;
            }
            nums[index++]=nums[i];
        }
        return k;
    }
};
