# kadanes-algorithm
#include<stdio.h>
int main(int arr[],int n){
int i,j,k,max_sum=INT_MIN;
// i is the starting point.
   for(i=0;i<n;i++){
//j is the ending point.
   for(j=i;j<n;j++){
int sum=0;
//k iterates over all the elements in a subarray.
   for(k=i;k<=j;k++)
     sum+=arr[k];
 }
}
if(sum>max_sum)
max_sum=sum;
}
return max_sum;


 
