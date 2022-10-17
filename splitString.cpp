// CSCI 1300 Fall 2022
// Author: Maddie Kloud
// Recitation: 205 – Maria Valentini
// Homework 5 - Problem #4 - Splitting a String
#include <iostream>
#include <string>
#include <cassert>
using namespace std;
/*
Algorithm:
1. Initialize variables for the index of arr and the start of the substring 
2. check if an empty string was provided, return 0 
3. iterate over input_string
4. if the separator if found in input string, add substring of input string before delimiter to the array 
5. if arr is full, break/stop adding more elements to arr and return -1
6. if strings were added to arr (delimiters were found in input_string),add last substring of input_string to the array
(the substring of input_string between the last delimiter and the end of input_string)
7.if no delimiters were found in input_string, store the entire string in the first index of arr and return 1
8. Return the number of elements in arr (number of pieces that input_string was split up into)
Parameters: input_string (string), separator (char),arr (string array), arr_size (int)
Returns: Number of pieces input_string was split up into (int)
*/
int split(string input_string, char separator, string arr[], int arr_size){
    int index = 0; //initialize variables
    int start = 0;
    if(input_string.length()==0){ //if an empty string is provided, return 0
        return 0;
    }
    for(int i = 0; i<input_string.length(); i++){ //iterate over the input string
        if(input_string[i]==separator){ //if the separator if found in input string, add substring of input string before delimiter to the array 
            arr[index] = input_string.substr(start,i-start); //set the next index of arr equal to the substring of input string before the delimiter
            start = i+1; //set the next start of the substring equal to the next index after the delimiter so the next substring of input_string can be inserted
            index++; //go to next index of arr
            if(arr_size == index){
                break; //if the array is full, stop adding more elements to the array and -1 will be returned
            }
        }
    }
    if(arr_size==index){ //return -1 if the array is full
        return -1;
    }
    if(index>0){ //put the last part of input_string in the array, the substring of input_string between the last delimiter and the end of input_string
        arr[index] = input_string.substr(start);
    }
    if(index == 0){ //if there were no delimiters found, store the string in the first index of arr and return 1 
        arr[0] = input_string;
        return 1;
    }
    return index+1; //return the number of pieces that the string was split into
}