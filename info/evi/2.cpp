#include <iostream>

using namespace std;

int main()
{
    int a[100], i,n,aux,k;
    cin>>n;

    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<endl;

    for (k=1;k<=n;k++){
        aux=a[n-1];

        for (i=n-1; i>0; i--){
            a[i]=a[i-1];
        }

        a[0]=aux;
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
