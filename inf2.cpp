#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=true;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]!=a[j][i]){
                flag=false;
                break;
            }
        }
    }
    if(flag){
        cout<<"yes";
      }
     else{
        cout<<"no";
      }
  return 0;

}