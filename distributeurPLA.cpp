#include<iostream>

void menu(){
std:: cout << "Menu du Distributeur \nSelectionner une boisson \n1) Coca Cola  prix = 2 Euros\n2) Sprite Prix= 2 Euros\n3) Chocolat Corsé  Prix= 1,5 Euros\n4) Thé Menthe Prix= 1 Euro\n5) Potage Prix= 3 Euros\n6) Exit\n";
}

int selection(int choix){
    if ( (choix >=1) && (choix <=5)){
        return choix;
    }
        else return 0;

}

float montantClient(){
    float montantInsere;
    std :: cout << "Rentrer le montant que vous desirez mettre dans le distributeur\n";
    std :: cin >> montantInsere;
    return montantInsere;
}

float prixSelection(int choix, float prix[]){
     std :: cout <<"la boisson coute \n" << prix[choix-1] <<std ::endl;
    return prix[choix-1];
}

bool estSuffisant(int prixChoix , float montantInsere){
        bool isEnough= false;
        if (montantInsere >= prixChoix){
            std :: cout <<"la boisson est en cours de distribution \n";
            isEnough= true;
        }
        else {
        std :: cout <<"Vous n'avez pas mis assez d'argent \n";
        }
        return isEnough;

}

void monnaieRendu(int prixChoix,float montantInsere){
    std :: cout <<"Votre monnaie est de\n" << montantInsere-prixChoix << std ::endl;
    

}

int choixNotEnough(){
    int choixNotEnough;
    std::cout << "Vous n'avez pas mis assez d'argent\n1) Voulez vous réessayer avec un nouveau montant \n2) annuler l'opération \n";
    std :: cin >> choixNotEnough;
    return choixNotEnough;
}


int main(){
    float prix [5] ={2,2,1.5,1,3};
    int choix;
    int choixSelection;
    float montantInsere;
    float prixBoisson;
    bool enough;
    int notEnough;
    do{
      menu(); 
      std :: cin >> choix;
      if (choix ==6){
        choixSelection = choix;
        break;
      }
      choixSelection=selection(choix);
      montantInsere=montantClient();
      prixBoisson=prixSelection(choixSelection,prix);
      enough=estSuffisant(prixBoisson,montantInsere);
      if ( enough){
        monnaieRendu(prixBoisson,montantInsere);
      }
      else {
        notEnough=choixNotEnough();
        if (notEnough==1){
            montantInsere=montantClient();
        }
        else 
        choixSelection =6;
      }



    }

    while (choixSelection !=6);









    return 0;
}