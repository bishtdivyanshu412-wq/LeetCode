class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
    int n = nums.size();
    int sum =0;
    for(int i=0;i<n;i++){
        int count =0;
        int sum1 =0;
        for(int j=1;j*j<=nums[i];j++){
            if(nums[i]%j ==0){
                int other = nums[i]/j;
                sum1 +=j;
                count++;
                if(j!=other){
                    sum1+= other;
                    count++;
                }
                if(count>4) break;
            }
        }
            if(count==4) sum += sum1;
    }  
    return sum;  
    }
};