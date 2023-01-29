class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // 1st Approach
        // int k = nums.size(),count,j;
        // for (int i = 0; i < k ; i++)
        // {
        //    for(j = i + 1, count = 0; j < size && nums[i] == nums[j] ; j++, count++);
        //    if (count)
        //    {
        //      for (int l = i + count + 1; l < k; l++)
        //          nums[l - count] = nums[l];
        //       k -= count;
        //    }
        // }
        // return k;

         // 2nd Approach
         int k = nums.size(),size=k,count,j,index=0;
         for (int i = 0; i < size ; i+=count+1)
         {
            for(j = i + 1, count = 0; j < size && nums[i] == nums[j] ; j++, count++);
            k-=count;
            nums[index]=nums[i];
            index++;
          }
          return k;
    }
};
