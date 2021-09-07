#include<bits/stdc++.h> 
using namespace std;

void mergeArrays(int X[], int Y[], int Z[], int n){
    int i=0, j=0, k=0;
    while (i<n && j<n){
        if(X[i]<Y[j]){
            Z[k]=X[i];
            i++, k++;
        }
        else{
            Z[k]=Y[j];
            j++, k++;
        }
        if(X[i]==Y[j]){
            Z[k]=X[i];
            k++;
            Z[k]=Y[j];
            i++, j++, k++; 
        }
    }
    while (i<n){
        Z[k++]=X[i++];
    }
    while (j<n){
        Z[k++]=Y[j++];
}

cout<<"The Merged Array: ";

for(int i=0;i<2*n;i++){
    cout<<Z[i]<<" ";
}
}

void largestElement(int Z[],int n){
   int largest=Z[0];
    int secondLargest=Z[0];
    for(int i=1;i<2*n;i++){
        if(Z[i]>largest){
            largest=Z[i];
             }
        }
    
    for(int i=1;i<2*n;i++){
        if(Z[i]>secondLargest){
        if(Z[i]==largest){
            continue;
        }
        secondLargest=Z[i]; 
          
    }}

    cout<<"\nThe lagest element is: "<<largest;
    cout<<"\nThe second largest element is: "<<secondLargest;
    
}

void Median(int Z[],int n){
    int size = 2*n;
    int mid;
    if(size % 2 == 0){
        mid = (Z[size/2]+Z[size/2-1])/2;
        cout<<"\nThe Median is: "<<mid;
    }
    else{
        cout<<"\nThe Median is: "<<round(Z[size/2]);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the arrays: ";
    cin>>n;

    int X[n];
    int Y[n];
    int Z[2*n];
    
    cout<<"Enter the first array: ";
    for(int i=0;i<n;i++){
        cin>>X[i];
    }
    cout<<"Enter the second array: ";
    for(int i=0;i<n;i++){
        cin>>Y[i];
    }

    mergeArrays(X,Y,Z,n);
    largestElement(Z,n);
    Median(Z,n);
    return 0;
    
}