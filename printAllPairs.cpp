#include<iostream>
 using namespace std;

 int printAllPairs(int arr[], int n){

     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             cout<<arr[i]<<","<<arr[j]<<"\n";
         }
     }
     return -1;
 }

 int main() {
     int arr[] ={10,20,30,40,50};
     int n = sizeof(arr)/sizeof(int);
     int pair = printAllPairs(arr,n);

 }