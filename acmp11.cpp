#include <iostream>
using namespace std;
int main(){
    int n;
    int k=0;
    cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(a[i][j]=='C'){
                k++;
            }
        }
    }
    k/=2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(k>0){
                cout<<1;
            }
            else{
                cout<<2;
            }
            if(a[i][j]=='C'){
                k--;
            }
            
        }
        cout<<endl;
    }
    return 0;

}