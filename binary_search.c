#include <stdio.h>
int binary_search(int *arr,int target,int size){
   int left = 0;
   int right = size-1;
   while(left<=right){
      int mid = (left+right)/2;
      if(arr[mid]==target){
        return mid;
      }
      if(arr[mid] > target){
        right = mid-1;
      }
      if(arr[mid] < target){
        left = mid+1;
      }
   }
   return -1;
}
int main(){
   int arr[] = {2,3,4,5,7,9};
   printf("%d\n",binary_search(arr,1,6)); //print -1
   printf("%d",binary_search(arr,5,6)); //print 3
}
