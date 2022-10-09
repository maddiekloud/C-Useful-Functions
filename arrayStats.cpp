#include <iostream>
#include <string>
#include <cassert>
using namespace std;
/*create function for finding the minimum value in an array
Algorithm:
1. Initialize a variable to store the minimum value, assign to the first value in the array
2. Iterate over the array starting at index 1, 
for each index of arr if the minimum value is greater than the value at the index, set min equal to this value
3. Return the minimum value
Parameters: arr[] (double), arr_size (int)
Returns: minimum value in arr
*/
double min(double arr[], int arr_size){
    double min = arr[0];
    for(int i=1; i<arr_size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
/*
Algorithm:
1. Initialize a variable to store the sum (double)
2. Iterate over the array starting at index 1, 
for each index of arr, add value to the sum
3. Return the sum
Parameters: arr[] (double), arr_size (int)
Returns: sum of all elements in arr
*/
double sum(double arr[], int arr_size){
    double sum = 0;
    for(int i = 0; i<arr_size; i++){
        sum += arr[i];
    }
    return sum;
}
/*
Algorithm:
1. Initialize a variable to store the sum (double)
2. Iterate over the array starting at index 1, 
for each index of arr, add value to the sum
3. Return the sum / arr_size, this is the average of every element in arr
Parameters: arr[] (double), arr_size (int)
Returns: average of all elements in arr
*/
double average(double arr[], int arr_size){
    double sum = 0;
    for(int i = 0; i<arr_size; i++){
        sum += arr[i];
    }
    return sum/arr_size;
}
