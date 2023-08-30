#include<iostream>
#include<iomanip>  // Pour la precision des decimal

char menu(){
    char choix;
    std:: cout << "Selectionner votre type de conversion\n1) Taper C pour convertir en Celsuis en Farenheit\n Taper F pour convertir des Farenheit en Celsuis\n";
    std :: cin >> choix;
    if (choix =='c' || choix == 'f'||choix =='C' || choix == 'F')
    return choix;
    else{
        std:: cout << "Mauvais choix\n";
        menu();
    }
    return choix;
 }

void convertion(char choix,float degre){
    float temperature;
   std::cout << std::fixed << std::setprecision(2);
if ( choix=='F' || choix == 'f'){
temperature = (degre-32)* 5/9 ;
std:: cout << "La temperature en degre farenheit de "<< degre << " est égale  à "<< temperature << " en degre celsuis\n";
    

} 
else {
temperature= degre*(9/5) + 32;
std:: cout << "La temperature en degre celsuis de "<< degre << " est égale  à "<< temperature << " en degre farenheit\n";
 
}

}

int main (){
    char choix = menu();
    float temperature;
    std :: cout << "Saisir une temperature\n";
    std :: cin >> temperature;
    convertion(choix,temperature);


    return 0;
}