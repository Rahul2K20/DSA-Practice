#include<iostream>
 using namespace std;

 int linearSearch(int arr[], int n, int key){
     for(int i=0;i<n;i++){
         if(arr[i] == key) {
             return i;
         }
     }
     return -1; 
 }

 int main(){
     int arr [] = {10,20,30,40,50,60};
     int n = sizeof(arr)/sizeof(int); 
     cout<<"The given array is: ";

     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }

     int key;
     cout<<"\nEnter the element you'd like to find on the given array: ";
     cin>>key;

    int index = linearSearch(arr,n,key);

    if(index!=-1){
        cout<<"\nYour element was found on "<<index<<" index";
    }

    else {
        cout<<"\nYour element was not found!";
    }
     
 }