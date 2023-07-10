//Program to search an element using Linear Search
#include<iostream>
using namespace std;

int linSearch(int array[], int size, int key) {
   for(int i = 0; i<size; i++) {
      if(array[i] == key) 
         return i;
   }
   return -1; 
}

int main() {
   int n, searchKey, loc;
   cout << "Enter No. of elements: ";
   cin >> n;
   int arr[n]; //create an array of size n
   cout << "Enter items: " << endl;

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

   cout << "Enter search key to search in the list: ";
   cin >> searchKey;

   if((loc = linSearch(arr, n, searchKey)) >= 0)
      cout << "Item found at location: " << loc << endl;
   else
      cout << "Item is not found in the list." << endl;
}
