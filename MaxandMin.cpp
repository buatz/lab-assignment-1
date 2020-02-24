#include <iostream> 
using namespace std; 
  
// function to print Minimum element using reursion 
int findMinNum(int arr[], int n) 
{ 
    // if size = 0 means whole array has been traversed 
    if (n == 1) 
        return arr[0]; 
    return min(arr[n-1], findMinNum(arr, n-1)); 
} 

int findMaxNum(int arr[], int n) 
{  
    if (n == 1) 
        return arr[0]; 
    return max(arr[n-1], findMaxNum(arr, n-1)); 
} 
  
  
// driver code to test above function 
int main() 
{ 
cout<<"Enter The Size Of Array: ";
int size;
cin>>size;
int arr[size], num,i;

// Taking Input In Array
for(int j=0;j<size;j++){
cout<< "Enter value "<< j + 1 <<": ";
cin>>arr[j];
} 
    int n = sizeof(arr)/sizeof(arr[0]);
	cout << "\nMinimum Number: ";
    cout <<  findMinNum(arr, n);
	cout << "\nMaximum Number: "; 
    cout <<  findMaxNum(arr, n);
    return 0; 
} 
