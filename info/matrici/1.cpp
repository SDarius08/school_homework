#include <iostream>

using namespace std;

int main() {
    int n,m,a[100][100];
    cin>>n; cin>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            s+=a[i][j];
        }
    }

    cout<<s;
    return 0;
}
