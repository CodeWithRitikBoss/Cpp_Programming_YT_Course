// Write a program to print the smallest and largest number in an array.
// Input: 1 2 3 4 5
// Output: Smallest: 1, Largest: 5
#include <iostream>
using namespace std;

int SnallestNo(int arr[], int size){
    int smallest= arr[0];
    for(int i= 1; i< size; i++){
        if(arr[i]< smallest){
            smallest= arr[i];
        }
    }
    return smallest;
}

int LargestNo(int arr[], int size){
    int largest= arr[0];
    for(int i= 1; i< size; i++){
        if(arr[i]> largest){
            largest= arr[i];
        }
    }
    return largest;
}

int main(){

    int arr[6]= {34,23,32,56,-5, 132};

    cout<<"The smallest number in the array is : "<<SnallestNo(arr, 6)<<endl;
    cout<<"The largest number in the array is : "<<LargestNo(arr, 6)<<endl;


    return 0;
}