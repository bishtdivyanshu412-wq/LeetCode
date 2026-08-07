/**
 * @param {number[]} ratings
 * @return {number}
 */
var candy = function(ratings) {
 let n = ratings.length;
 let count = 0;
 if(ratings[0]>ratings[1]) {
    count += 2;
 }
 if(ratings[0]<=ratings[1]) {
    count += 1;
 }
 if(ratings[n-1]>ratings[n-2]) count+=2;
 if(ratings[n-1]<=ratings[n-2]) count+=1;
 for(let i =1;i<n-1;i++){
    if(ratings[i]>=ratings[i-1] && ratings[i]>=ratings[i+1]){
        count+=2;
    }
    else{
        count += 1;
    }
 }  
 return count; 
};