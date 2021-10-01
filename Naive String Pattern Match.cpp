#include<bits/stdc++.h>
using namespace std;
void search(char text[],char pat[]){
    int m = strlen(pat);
    int n = strlen(text);
    
    for(int i=0;i<=n-m;i++){
        int j=0;
        for(j=0;j<m;j++){
            if(text[i+j]!=pat[j]){
                break;
            }
        }
            
        if(j==m){
             cout<<"Pattern found at index "<<i<<"\n";
         }
        
}
}
int main (){
    char text[]= "AABAACAADAABAABA";
    char pat[]=  "AABA";
    search(text,pat);
    return 0;
}