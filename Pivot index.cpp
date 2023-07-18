class Solution {
public:
    int pivotIndex(vector<int>& nums) {

    int sum =0;
    int rsum = 0;

    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];

    }
     for(int i=0;i<nums.size();i++){
         sum=sum-nums[i];
         if(sum==rsum){
             return i;
         }
         else{
             rsum = rsum+nums[i];
         }

     }

     return -1;

    

        

        
    }

};
