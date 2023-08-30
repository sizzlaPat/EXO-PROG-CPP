#include<iostream>

#include <string>

using namespace std;

int sommeParValeur(int a , int b){
    int maxInt=2147483647;
    int result;
    result =a+b;
    if (result>maxInt){
        cout<<" la somme est plus grande qu'un entier";
        return -1;
    }

    return result;
}

void produitParReference(int &a , int &b){
        a = a*b;
    
}

int main(){
    int a;
    int b;
    while (true){
    cout<<"merci de saisir deux entiers"<< endl;
    cin>> a>>b;
    if ( a>0 && b>0){
    int resultatInt =sommeParValeur(a,b);
    cout <<"la somme de "<<a<<" + " <<b <<" =" << resultatInt <<endl;
    cout<<" La valeur  de a:"<< a<<endl;
    cout <<"Le produit de "<<a<<" et " <<b <<" : " << a*b <<endl;
    produitParReference(a,b);
    cout<<" La nouvelle valeur est :"<< a<<endl;
    }
    else {
        cout<<"Merci de saisir des entiers positifs"<<endl;

    }

    }
 





    return 0;
}