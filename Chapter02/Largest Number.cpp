#include<iostream>
#include<limits.h>

int max(int a, int b){
  if(a>b){
    return a;
  }else{
    return b;
  }
}

int LargestNumber(int arr[], int size){
  int largest = INT_MAX;

  for(int i = 0;i<size;i++){
    smallest = max(smallest,arr[i]);
  }
  return largest;
}

int main()
{
  int arr[] = {21,34,21,11,14};

  int size = sizeof(arr)/sizeof(int);

  std::cout<<LargestNumber(arr,size);

  return 0;
}
