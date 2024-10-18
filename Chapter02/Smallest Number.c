#include<stdio.h>
#include<limits.h>

int min(int a, int b){
  if(a>b){
    return b;
  }else{
    return a;
  }
}

int SmallestNumber(int arr[], int size){
  int smallest = INT_MAX;

  for(int i = 0;i<size;i++){
    smallest = min(smallest,arr[i]);
  }
  return smallest;
}

int main()
{
  int arr[] = {21,34,21,11,14};

  int size = sizeof(arr)/sizeof(int);

  printf("%d",SmallestNumber(arr,size));

  return 0;
}
