#include<iostream>
#include<iomanip>  // Pour la precision des decimal
#include<string>

using namespace std;

 void triEleves(string eleves[100][2]);
 float moyenneClasse(string listEl[100][2]);
void ajouter(string name,string listEl[100][2], int taille);


    float moyenneClasse(string listEl[100][2]){
        float resultat;
        float stringToFloat;
         for (int i=0;i<100;i++){
            if (listEl[i][1]!= "\0"){
                stringToFloat = std::stof(listEl[i][1]);
                resultat+=stringToFloat;

            }
            else
            {
                resultat=resultat/i;
                break;
            }

         }
        return resultat;
    }
    void ajouter(string name,string listEl[100][2], int taille){

        for (int i=0;i<taille;i++){
            if (listEl[i][0]== "\0"){
               listEl[i][0]=name;
                break;
            }
        }
    }
    void ajouterAmeliorer(string name, string moyenne,string listEl[100][2], int taille){

        for (int i=0;i<taille;i++){
            if (listEl[i][1]== "\0"){
                listEl[i][0]=name;
                listEl[i][1]=moyenne;


                break;
            }
            
        }
    }


    bool rechercherEtudiant(string nom,string listEl[100][2]){
       bool  isExist=false;
       for (int i =0;i<100;i++){
        if(listEl[i][0]== nom){
            isExist=true;
           break;
        }
       }
        return isExist;
    }

    bool rechercherEtudiantAmeliorer(string nom,string listEl[100][2]){
       bool  isExist=false;
       for (int i =0;i<100;i++){
        if(listEl[i][0]== nom){
            isExist=true;
           break;
        }
       }
        return isExist;
    }


    void afficherListeAmeliorer(string elevesList[100][2]){
        for (int i =0;i<100;i++){
            if (elevesList[i][0]== "\0"){
                break;
            }
            cout<<"nom de l'eleve numero "<< i+1<< " : "<<elevesList[i][0] << endl;
            cout<<"moyenne : "<<elevesList[i][1] << endl;
        }

    }
    
    void triEleves(string eleves[100][2]){
        for (int i = 0; i < 98; i++) 
        {
            if (eleves[i][0]== "\0")
                continue;
                for (int j = 0; j < 98; j++) 
                {
                    
                    if (eleves[j][0]== "\0")
                    continue;

                    if (eleves[j][0].at(0) > eleves[j+1][0].at(0)) 
                    {
                        swap(eleves[j][0], eleves[j+1][0]);
                        swap(eleves[j][1], eleves[j+1][1]);
                    }
                }
        

        }
    }




    int menu(){
    int choix ;
    cout<<"1- Ajouter un étudiant à la liste\n";
    cout<<"2- Rechercher un étudiant dans la liste\n";
    cout<<"3- Afficher la liste des étudiants\n";
    cout<<"4- Trier la liste des étudiants\n";
    cout<<"5- Moyenne des étudiants\n";
    cout<<"6- Quitter le programme\n";
    cin >> choix;
    return choix;
    }

int main(){

    string etudiants[100][2];
    /*string listEl[]={"Nebra","Lassey","Demba","Jean Denis","Michel","Wagner","Polzt","Makhlouf","Bool","Chapeau"};
    int taille= sizeof(listEl)/32;// diviser par 32 car retourne des bits
    for ( int i =0;i<taille;i++){
        ajouter(listEl[i],etudiants,100);
    }
    ajouter( "Mathbeloteu",etudiants,100);
    cout << "nom etudiant  "<<etudiants[0]<<endl;
    */
    bool test=true;
    while( test){
    int choix = menu();
    string nom,moyenne;
    bool isIn;
    float moyenne_Classe;
    switch (choix){

        case 1:
                cout << " saisir le nom de l'eleve\n";
                cin >> nom;
                cout << " saisir la moyenne\n";
                cin >> moyenne;
                ajouterAmeliorer(nom,moyenne,etudiants,100);
        break;
        case 2:
                cout << " saisir le nom de l'eleve recherche\n";
                cin >> nom;
                isIn =rechercherEtudiant( nom,etudiants);
                if (isIn){
                    cout<< nom<<" est compris dans la liste d'eleves!!\n";
                }
                else{
                cout<< nom<<" n'est pas compris dans la liste d'eleves!!\n";  
                }
         break;
         case 3:
               afficherListeAmeliorer(etudiants);
         break;
         case 4:
               triEleves(etudiants);
         break;
         case 5:
            moyenne_Classe=moyenneClasse(etudiants);
            cout<<"La moyenne des éléves est de : "<<moyenne_Classe<<endl;
         break;
         case 6:
    
        test=false;
         break;
        default:
        cout<<"Erreur de saisie\nMerci de selectionner un nombre entre 1 et 6 !!!\n";
    


    }



    }












    return 0;
}