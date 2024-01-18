#include <iostream>
using namespace std;
int main() {
    // Declration of an array arr of size 6;
  int arr[6];
    // Taking input elements of array arr;
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
   // Method to find size of array   
    int ArraySize=sizeof(arr)/sizeof(arr[0]);
     
    cout<<"Size of Array is : "<<ArraySize<<endl;

    // Elements of Array are:

    for(int i=0;i<ArraySize;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
