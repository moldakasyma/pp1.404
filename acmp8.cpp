#include <iostream>
using namespace std;
int main(){
    string n;
    cin>>n;
    string a[n][n];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          cin>>a[i][j];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==a[i][j+1] || a[i][j]==a[i+1][j] || a[i][j]==a[i+1][j+1]){
                cout<<"NO";
            }
            else{cout<<"YES";
            }

        }
    }
        return 0;
    }