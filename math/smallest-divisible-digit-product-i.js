/**
 * @param {number} n
 * @param {number} t
 * @return {number}
 */
var smallestNumber = function(n, t) {
  while(true){
    let num = n;
    let ans = 1;
    while(num!=0){
     let bit = num%10;
     ans = ans * bit;
     num = Math.floor(num/10);
    }
    if(ans%t === 0) return n;
    n = n+1;
  }  
  return -1;
};