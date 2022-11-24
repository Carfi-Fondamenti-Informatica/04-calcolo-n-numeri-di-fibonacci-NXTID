#include <iostream>
using namespace std;

void serie(int a){
    int risultato=1;
    int precedente=1;
    int x=0;

    cout<<risultato<<endl;
    cout<<risultato<<endl;

    for(int i=(a-2); i>0; i--){
        x=risultato;
        risultato= risultato+precedente;
        cout<<risultato<<endl;
        precedente=x;
    }
}
int main() {
    int n=0;

    while(n<2){
        cin>>n;

        if(n<2){
            cout<<"errore"<<endl;
            break;
        }else if(n>=2){
            serie(n);
            break;
        }
    }
    return 0;
}
