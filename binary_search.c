#include <stdio.h>
int binary_search(int *arr,int target,int left,int right){
   int mid = (left+right)/2;
   if(arr[mid] == target){
      return mid;
   }
   if(left > right){
      return -1;
   }
   if(arr[mid]>target){
      return binary_search(arr,target,left,mid-1);
   }else{
      return binary_search(arr,target,mid+1,right);
   }
}
int main(){
   int arr[] = {2,3,4,5,7,9};
   printf("%d\n",binary_search(arr,1,0,5)); //print -1
   printf("%d",binary_search(arr,5,0,5)); //print 3
}
