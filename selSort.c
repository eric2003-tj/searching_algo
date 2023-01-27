#include <stdio.h>
void swap(int *a,int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
void selsort(int *arr,int size){
   for(int i=0;i<size-1;i++){
     int currentMin = i;
     for(int j=i+1;j<size;j++){
        if(arr[j] < arr[currentMin]){
            currentMin = j;
        }
     }
     swap(arr+i,arr+currentMin);
   }
}
int main(){
   int arr[] = {1,2,34,56,23};
   selsort(arr,5);
   for(int i=0;i<5;i++){
     printf("%d ",arr[i]);
   }
}
