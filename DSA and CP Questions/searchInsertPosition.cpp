class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int beg=0,end=nums.size()-1,mid=beg+(end-beg)/2;

        while(beg <= end){
            if(nums[mid]==target)
                return mid;
            else if(target < nums[mid] )
                end=mid-1;
            else
                beg=mid+1;
                mid=beg+(end-beg)/2;
        }
        return mid;
    }
};
