#include <iostream>

using namespace std;

int main() {
    int m,n;
    cin>>n>>m;
    int ma[1000][1000];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ma[i][j];
        }
    }

    int s=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            s=s+ma[i][j];
        }
        cout<<s<<" ";
        s=0;
    }
    return 0;
}
