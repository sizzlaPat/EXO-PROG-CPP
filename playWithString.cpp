#include <iostream>
#include <iomanip>  // Pour la precision des decimal
#include <string>

/*
- Demande à l'utilisateur d'entrer deux chaînes de caractères (de type string).
    - Utilisez la méthode length() pour afficher la longueur de chaque chaîne de caractères saisie par l'utilisateur.
    - Utilisez la méthode size() pour vérifier si les deux chaînes ont la même longueur et affichez un message approprié.
    - Utilisez l'opérateur [] pour sélectionner le premier et le dernier caractère de chaque chaîne et affichez-les.
    - Utilisez la méthode at() pour afficher le caractère situé à la position n/2 (n étant la longueur de la chaîne) pour chaque chaîne de caractères.
    - Demandez à l'utilisateur d'entrer une sous-chaîne, puis utilisez la méthode find() pour rechercher cette sous-chaîne dans les deux chaînes de caractères saisies précédemment.
    - Si la sous-chaîne est trouvée dans l'une des chaînes, affichez un message indiquant dans quelle chaîne elle a été trouvée, ainsi que la position à laquelle elle a été trouvée.
    - Si la sous-chaîne n'est pas trouvée dans l'une des chaînes, affichez un message indiquant qu'aucune correspondance n'a été trouvée.

*/


int main(){
    std :: string string1;
    std :: string string2;
    std :: string subString;

    std :: cout << "Saisir un premier string\n";
    std :: cin >> string1;
    std :: cout << "Saisir un deuxieme string\n";
    std :: cin >> string2;

    std :: cout << "Longueur de la 1ere string est egale à " << string1.length() << " caractéres \n" ;
    std :: cout << "Longueur de la 2nd string est egale à " << string2.length() << " caractéres\n" ;
    
    int longueurString1 = string1.size();
    int longueurString2 = string2.size();
    if (longueurString1 == longueurString2){

        std :: cout << "Les deux chaines de carateres ont la meme longeur \n";
    }
     else{
        std :: cout << "Les deux chaines de carateres n'ont pas la meme longeur \n";
    
     }

        std :: cout << "Le premier caractere de la 1ere chaine est " << string1[0] << " Le dernier caractere est de la 1ere chaine est "<< string1[longueurString1 - 1] << "\n";
        std :: cout << "Le premier caractere de la 2nd chaine est " << string2[0] << " Le dernier caractere est de la 2nd chaine est "<< string2[longueurString2 - 1] << "\n";
        std :: cout << "Le caractere au milieu de la 1ere  chaine est " << string1.at((longueurString1)/2)<< "\n";
        std :: cout << "Le caractere au milieu de la 2nd chaine est " << string2.at((longueurString2)/2)<< "\n";
        std :: cout << "Saisir une sous chaine\n";
        std :: cin >> subString;

        string1.find(subString);
        string2.find(subString);
    if(string1.find(subString) != std::string::npos){
       std :: cout << "La sous chaine est presente dans la 1ere chaine à l'index " << string1.find(subString) <<"\n";
        }
       else{
        std :: cout << "La sous chaine n'est paspresente dans la 1ere chaine\n";
       }
    
    if(string2.find(subString) != std::string::npos){
         std :: cout << "La sous chaine est presente dans la 2nd chaine à l'index " << string2.find(subString) <<"\n";

       }
       else{
        std :: cout << "La sous chaine n'est paspresente dans la 2nd chaine\n";
       }



    return 0;
}