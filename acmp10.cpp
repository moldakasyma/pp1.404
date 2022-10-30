#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char b;
    bool a[n+2][m+2];
    for(int i=0; i<n+2; i++){
        for(int j=0; j<m+2; j++){
            a[i][j]=true;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>b;
            a[i][j]=(b=='.');
        }
    }
    int count =0;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=m; j++){
            if(a[i][j] && a[i+1][j] && a[i-1][j] && a[i][j-1] && a[i][j+1]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}