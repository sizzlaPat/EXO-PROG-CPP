#include<iostream>
#include<iomanip>  // Pour la precision des decimal
#include<string>





int main(){

std::string film1 = "Bienvenue à Zombieland";
std::string  film2 = "Pirate des Caraibes";
std::string film1_copy = "Bienvenue à Zombieland";
std::string film2_copy = "Pirate des Caraibes";

std::string film_concate_1= film1_copy.append("\n").append(film2);
std::string film_concate_2 = film2_copy.append("\n").append(film1);

int longueur_film_concate_1= film_concate_1.length();
int longueur_film_concate_2= film_concate_2.length();

if (longueur_film_concate_1==longueur_film_concate_2){
    std::cout << "comparaison de longueur:les 2 chaines ont la meme taille \n";
}
if (film_concate_1==film_concate_2){
    std::cout << " Comparaison de chaine :les 2 chaines ont la meme taille \n";
}
int comparaison = film_concate_1.compare(film_concate_2 );
if(comparaison ==0){
std::cout << "les 2 chaines ont la meme taille \n";
}
else if (comparaison <0){
    std::cout << "la chaine1  est plus petite que la chaine2 \n";
}
else{
    std::cout << "la chaine1  est plus grande que la chaine2 \n";
}

if (film1 != film2){
    std::cout << "la chaine1 est diférente de la chaine2 \n";

}




    return 0;
}