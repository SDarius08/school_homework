#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int v[n];

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

/*    int s=0;
    for(int i=0; i<n; i++){
        if(v[i] >= 0){
            s = s+v[i];
        }
    }

    cout<<s<<endl;*/

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int aux;
            if(v[j] > v[i]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }

/*    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }*/

    int s=0;
    int ct=0;
    for(int i=0; i<n; i++){
        if(v[i] >= 0){
            s=s+v[i];
            ct++;
        }
    }
    if(ct==0){
        for(int i=0; i<2; i++){
            s=s+v[i];
        }
    }
    if(ct==1){
        for(int i=1; i<2; i++){
            s=s+v[i];
        }
    }

    cout<<s<<endl;
}
