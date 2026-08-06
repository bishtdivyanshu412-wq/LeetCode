/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
   let n  = nums.length;
   let prev = nums[0];
   if(n===1) return true;

   for(let i = 0;i<n;i++){
     prev = prev-1;
    if(prev + i >= n-1) return true;
    if(prev < nums[i]) prev = nums[i];
    if(prev <0 && i != n-1) return false;
   }
   return false;
};