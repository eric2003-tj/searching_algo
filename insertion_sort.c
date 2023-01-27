#include <stdio.h>
void insertion_sort(int *arr,int size){
   for(int i =1;i<size;i++){
     int current = arr[i];
     int counter = i-1;
     while(counter >= 0 && arr[counter]>current){
        arr[counter+1] = arr[counter];
        counter--;
     }
     arr[counter+1] = current;
   }
}
int main(){
   int arr[] = {90,67,123,670};
   insertion_sort(arr,4);
   for(int i=0;i<4;i++){
    printf("%d ",arr[i]);
   }
}
