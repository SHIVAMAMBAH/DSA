#include<iostream>
#include<algorithm>

int BinarySearch(int arr[],int size,int target)
{
  int left = 0;
  int right = size-1;

  while(left<=right){
    mid = left +(right-left)/2;

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
  int arr[] = {12,32,45,43,33,56};
  int size = sizeof(arr)/sizeof(int);

  std::sort(arr, arr + size);

  std::cout<<"Sorted Array: "<<"\n";
  for(int i = 0;i<size;i++){
      std::cout<<arr[i]<<" ";
  }
  std::cout<<"\n";
  
  int result = BinarySearch(arr,size,33);

  if(result == -1){
    std::cout<<"Element not found";
  }else{
    std::cout<<"Element found at index "<<result;
  }
  return 0;
}
