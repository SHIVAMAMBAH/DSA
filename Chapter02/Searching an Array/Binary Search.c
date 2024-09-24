#include<stdio.h>

int BinarySearch(int arr[],int size,int target)
{
  int left = 0;
  int right = size-1;

  while(left<=right){
    int mid = left +(right-left)/2;

    if(arr[mid]==target){
      return mid;
    }

    if(arr[mid]<target){
      left = mid + 1;
    }else{
      right = mid-1;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {12,32,45,48,53,56}; // sorted array
  int size = sizeof(arr)/sizeof(int);
  
  int result = BinarySearch(arr,size,32);

  if(result == -1){
    printf("Element not found");
  }else{
    printf("Element found at index : %d",result);
  }
  return 0;
}
