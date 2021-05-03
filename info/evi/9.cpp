#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"n="; cin>>n;
    int v[n]; //definim vectorul dupa n

    for(int i=0;i<n;i++){
        cin>>v[i]; //citim vectorul v[n]
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int aux;
            if(v[j] < v[i]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            } //facem o sortare liniara pentru a-l putea verifica
        }
    }

    int ok=0; //initializam un flag cu 0, luand ca toate numerele introduse sunt distincte
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[j] == v[i]){ //cautam liniar daca exista numere egale, stiind deja ca sunt ordonate crescator, deci daca  ar exista egale ar fi unu dupa altul
                ok=1; //ridicam flag ul in cazul in care gasim, daca nu ramane 0 ca toate sunt distincte
            }
        }
    }

    if(ok!=0){ //verificam ce valoare are ok ul, (flag ul)
        cout<<"NU SUNT DISTINCTE";
    }
    else{
        cout<<"DA SUNT DISTINCTE";
    }
    return 0;
}
