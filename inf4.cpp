#include <iostream>
using namespace std;
int main(){
    int n,m;
    int max=-12345;
    int position;
    int position2;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(max<a[i][j]){
                max=a[i][j];
                position=i;
                position2=j;
            }
        }
    }
    cout<<max<<endl<<position<<" "<<position2;
    return 0;
}

