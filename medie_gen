#include<iostream>

using namespace std;

int main( ) {
    int i, n, k, s;
    int max, min;

    cout << "Nr. de elevi este: ";
    cin >> n;

    int med[n];

    //citire medie
    for (i = 0; i < n; i++){
        cin >> med[i];
    }

    //afisare medii
    for (i = 0; i < n; i++){
        cout << "Medie elev "<<i+1<<" este: "<<med[i]<<endl;
    }
    k=0;
   //nr elevi nepromovati
    for (i = 0; i < n; i++){
        if (med[i] < 5)
            k = k + 1;
    }
    cout<<endl;
    if(k!=0){
        cout << "Nr. elevilor nepromovati este: " <<k<<endl;
    }
    else{
        cout<<"Toti elevii au promovat"<<endl;
    }

     //media generala
     s=0;
    for (i = 0; i < n; i++){
        s+=med[i];
    }
    cout<<endl;
    cout << "Media generala a clasei este: " <<s/n;

     //media maxima
    max = -9999;
    min = 9999;
    for (i = 0; i < n; i++){
        if(med[i]>max){
            max=med[i];
        }
        if(med[i]<min){
            min=med[i];
        }
    }
    cout<<endl;
    cout << "Media cea mai mare este: " << max<<endl;
    cout<<"Media ce mai mica este: "<<min<<endl;

}
