 #include<iostream>
 using namespace std;

 int binarySearch(int arr[], int n, int key){
     int start = 0;
     int end = n-1; 
  
     while(start<=end){
         int mid = (start+end)/2;
         if(arr[mid]==key){
             return mid;
         }
         else if(arr[mid]>key){
             end = mid-1;
         }
         else {
             start = mid+1;
         }
     }
     return -1;

 }

 int main () {
     int arr [] = {10,20,30,40,50,60};
     int n = sizeof(arr)/sizeof(int);
     cout<<"Your given array is: ";
     for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
     }
     int key;
     cout<<"\nEnter the element to be searched: ";
     cin>>key;

     int index = binarySearch(arr,n,key);

     if(index!=-1){
         cout<<"\nYour element was found at "<<index<<" index";
     }
     else{
         cout<<"\nYour element was not found!";
     }

 }