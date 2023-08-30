#include<iostream>
#include <iomanip>  // Pour la precision des decimal
#include <string>
#include<cctype>
#include<algorithm>
using namespace std;


string saisie(){

    string motSaisie;
    cout << "Saisir une chaine de carateres\n";
    cin >> motSaisie;
    return motSaisie;
}

int  menu(){
int choix;
    cout << "Selectionner votre type de manipulation sur votre chaîne de caracteres saisies\n1)Affichez le cinquième caractère de votre chaîne de caracteres\n2)Inversez l'ordre des caractères de votre chaîne de caracteres\n3)Convertissez en majuscules tous les caractères de votre chaîne\n4)Quitter\n";
    cin >> choix;
        if (choix >=1 && choix <=4){
            return choix;
        }
        else{
            cout <<"Erreur de saisie\n";
            menu();
        }
        return choix;
}

string upTop(string mot){
 string upperCaseMot;

 for( int i = 0 ; i<mot.size();i++){
    upperCaseMot[i]=toupper(mot[i]);
 }

return upperCaseMot;

}


void selection(int choix,string mot){
    string copyMot=mot;
    string majuscule = upTop(mot);
    switch(choix) {
        case 1:
            cout << "La cinquieme lettre de mot " << mot << " est le caractere " << mot[4] << endl;
            break;
        case 2:
            reverse(copyMot.begin(),copyMot.end());
            cout << "L'inversion du mot " << mot << " correspond à " << copyMot << endl;
            break;
        case 3:        
            cout << " conversion du mot " << mot << " en majuscule : "<< majuscule << endl;
            break;
        case 4 :
            
            break;
        default:
            cout << " erreur de saisie" << endl;
        };






}


int longueurString( string mot){
    int longueur = mot.size();
    cout<< " la chaine de caracteres : "<<mot <<" a pour longueur "<< longueur <<" caracteres\n";
    return longueur;
}


int main() {
    string test= "La programmation en C++ est très amusante !";
    int longueurTest=longueurString(test);
    string mot= saisie();
    int longueur=longueurString(mot);
    int choix=menu();
    selection(choix,mot);









    return 0;
}