/**
 * @param {number[]} bills
 * @return {boolean}
 */
var lemonadeChange = function(bills) {
    let count = 0;
    let n = bills.length;
    for(let i =0;i<n;i++){
        if(bills[i] === 5) count = count+bills[i];
        else if(bills[i] === 10){
            if((bills[i]-5)>count) return false;
            else count = count - (bills[i]-5)+5;
        }
        else{
            if(bills[i]-5>count){
                return false;
            }
            else{
                count = count-(bills[i]-5)+5;
            }
        }
    }
    return true;
};