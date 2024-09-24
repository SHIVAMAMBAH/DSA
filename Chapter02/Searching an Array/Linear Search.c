#include<stdio.h>

int LinearSearch(int arr[],int size, int target)
{
    for(int i = 0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5 ] = {21,23,43,45,54};
    
    printf("%d\n",LinearSearch(arr,5,23));
    printf("%d\n",LinearSearch(arr,5,129));
    
    return 0;
}
