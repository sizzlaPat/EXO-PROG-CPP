#include<iostream>
#include <iomanip>  // Pour la precision des decimal
#include <string>
#include<cctype>
#include<algorithm>
using namespace std;

/*

1. `int somme(int a, int b)`: cette fonction prendra deux entiers en paramètres et retournera la somme de ces deux entiers.
2. `double diviser(double a, double b)`: cette fonction prendra deux doubles en paramètres et retournera le résultat de la division du premier paramètre par le second. Vous pouvez supposer que le second paramètre sera différent de zéro.
3. `string concatenation(string a, string b)`: cette fonction prendra deux chaînes de caractères en paramètres et retournera la concaténation de ces deux chaînes.
4. `void afficherInfos(int age, string nom)`: cette fonction prendra un entier et une chaîne de caractères en paramètres, et affichera sur la console le texte suivant : "Nom : [nom], Age : [age]". Remplacez [nom] et [age] par les valeurs fournies en paramètres.

*/

int somme(int a, int b){

    return a+b;
}

double diviser(double a, double b){

    return a/b;
}

string concatenation(string a, string b){

    return a+b;
}


void afficherInfos(int age, string nom){

    cout<< "mr " <<nom <<" a "<<age << "ans\n";
}
int main(){
    int a ,b;
    double c,d;
    string e,f;
    int age;
    string nom;

    cout<<"merci de saisir deux entiers"<< endl;
    cin>> a>>b;
    int resultatInt =somme(a,b);
    cout <<"la somme de "<<a<<" + " <<b <<" =" << resultatInt <<endl;
    
    cout<<"merci de saisir deux doubles"<< endl;
    cin>> c>>d;
    double resultatDivision = diviser(c,d);
    cout <<"la division de "<<c<<" par " <<d <<" =" << resultatDivision <<endl;
    
    cout<<"merci de saisir deux mots"<< endl;
    cin>> e>>f;
    string concat=concatenation(e,f);
    cout <<"la concatention de "<<e<<" avec " <<f <<" donne :" << concat <<endl;

    cout<<"merci de un nom et un age"<< endl;
    cin>> nom>>age;
    afficherInfos(age,nom);









    return 0;
}