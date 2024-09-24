#include<iostream>

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
    
    std::cout<<LinearSearch(arr,5,213);
    
    return 0;
}
