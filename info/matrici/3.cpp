#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int min1=9999;
    int l1,c1;
    for(int i=0;i<n;i++){
        if(a[i][0]<min1){
            min1=a[i][0];
            l1=i;
            c1=0;
        }
    }

    int min2=9999;
    int l2,c2;
    for(int i=0;i<n;i++){
        if(a[i][m-1]<min2){
            min2=a[i][m-1];
            l2=i;
            c2=m-1;
        }
    }

    int aux;
    aux=a[l1][c1];
    a[l1][c1]=a[l2][c2];
    a[l2][c2]=aux;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
