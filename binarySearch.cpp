#include <iostream>
using namespace std;

//binary search function
int binary_Search(int array[], int num, int start, int end, int size)
{
 int mid;
 if (start > end){
  cout << "\nNumber cannot be found";
  return 0;
 }else{
  mid = (start + end) / 2;
  if(array[mid] == num){
   cout << "\nNumber is found at position "  << mid;
   return 0;
  } else if (num > array[mid]) {
   binary_Search (array, num, mid+1, end, size);
  } else if (num < array[mid]) {
   binary_Search (array, num, start , mid-1, size);
  }
 }
}
 
//main function
int main() {
 
 int num, i, n, start, end;

 //Get the size of the array
cout<<"Enter The Size Of Array: ";
int size;
cin>>size;
int array[size];

cout <<"\nEnter sorted values \n";
 
 //Get Values
 for(int j=0; j<size; j++) {
  cout<< "Enter Value " << j+1<<": ";
  cin >> array[j];
 }
 
 cout <<"\nEnter key: ";
 cin >> num;
 
 start = 0;
 end = n-1;
 
//initialize binary search function
binary_Search (array, num, start, end, size);
 
 return 0;
}
