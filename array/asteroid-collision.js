/**
 * @param {number[]} asteroids
 * @return {number[]}
 */
var asteroidCollision = function(asteriods) {
   let n = asteriods.length;

   let ans = [];

   for(let i =0;i<n;i++){
    if(asteriods[i]>0){
        ans.push(asteriods[i]);
    }
    else{
        while(ans.length !== 0 && ans[ans.length-1]<Math.abs(asteriods[i])){
            ans.pop();
        }
        if(Math.abs(asteriods[i]) === ans[ans.length-1]){
            ans.pop();
        }
        else if(ans.length === 0 || ans[ans.lentgh-1]<0) ans.push(asteriods[i]); 
    }
   } 
   return ans;
};