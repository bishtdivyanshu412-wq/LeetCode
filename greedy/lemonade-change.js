/**
 * @param {number[]} bills
 * @return {boolean}
 */
var lemonadeChange = function(bills) {
    let n = bills.length;
    let count5 = 0;
    let count10 = 0;
    let count20 = 0;
    for(let i =0;i<n;i++){
        if(bills[i] === 5) count5 = count5 + 1;
        else if(bills[i] === 10){
           if(count5 >= 1) {
            count10 = count10 + 1;
            count5 = count5-1;
           }
           else return false;
        }
        else{
            if(count5>=1 && count10>=1){
                count20 = count20+1;
                count10 = count10 -1;
                count5 = count5-1;
            }
            else{
                return false;
            }
        }
    }
    return true;
};