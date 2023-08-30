#include<iostream>
using namespace std;

// calcul somme d'un nombre decrementant
    int recursivityFunction(int n){

    if (n==1){
        return 1;
    } else{

        return n+recursivityFunction(n-1);
    }

    }
    // Cas base 10 ( exemple 1258)
    int sommeNumber(int n){
        int result= n%10;

        if (n<1){
            return n;
        }
        else{
            return result+ sommeNumber((n/10));
        }
    }

    // Cas avec base 8 (exemple 0455)
    int Modulo8(int n){
        int result= n%8;

        if (n<8){
            return n;
        }
        else{
            return result+ sommeNumber((n/8));
        }
    }

int main(){

int result=recursivityFunction(5);
cout<<"resultat\n"<<result <<endl;

int result2=sommeNumber(10);
cout<<"resultat2\n"<<result2 <<endl;

int result3=Modulo8(04047);
cout<<"resultat modulo 8\n"<<result3 <<endl;





    return 0;
}