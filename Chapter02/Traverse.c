#include<stdio.h>

//  both are correct

// traversing using the array ine=dexing
void Traverse(int arr[],int size)
{
  for(int i = 0;i<size;i++){
    printf("%d\n",arr[i]);
  }
}

// traversing using the pointers
// void Traverse(int arr[],int size)
// {
//   for(int i = 0;i<size;i++){
//     printf("%d\n",*(arr+i));
//   }
// }

int main()
{
  int arr[] = {21,34,54,27,89}; 

  // both are correct
  int size = sizeof(arr)/sizeof(int);
  // int size = sizeof(arr)/sizeof(arr[0]);

  Traverse(arr,size);
  return 0;
}
