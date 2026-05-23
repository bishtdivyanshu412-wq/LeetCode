class Solution {
    public int[] sumZero(int n) {
     int arr[] = new int [n];
     int k =0;
     if(n%2==1){
        arr[k++]=0;
     }  
     for(int i =1;k<n;i++){
        arr[k++] = i;
        arr[k++] = -i;
     } 
     return arr;
    }
}