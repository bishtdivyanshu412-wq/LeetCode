/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
   let n  = nums.length;
   for(let i =0;i<n;i++){
    if(i + nums[i] === n-1) return true;
   } 
   return false;
};