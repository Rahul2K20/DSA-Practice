#include<iostream>
using namespace std;

int reverseArray(int arr[], int n){
    int s = 0;
    int e = n-1;

    while(s<e) {
        
        int temp = 0;
        temp = arr[s]; 
        arr[s] = arr[e];
        arr[e] = temp;
        s+=1;
        e-=1;
    }
    return -1;

}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);

    cout<<"The given array: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    reverseArray(arr,n);

    cout<<"\nThe reversed array: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}