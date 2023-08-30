#include <iostream>
#include <string>
using namespace std;

/*
**Bonus 1 : Gestion des emprunts**

- Étendez la classe "Livre" pour inclure un attribut booléen "estEmprunte" pour indiquer si le livre est actuellement emprunté ou non.
- Créez une classe "Emprunteur" qui représente une personne qui peut emprunter des livres. L'Emprunteur peut avoir un nom et une liste de livres empruntés.
- Ajoutez des méthodes pour permettre à un Emprunteur d'emprunter un livre de la bibliothèque et de le retourner.
*/





class Livre{

    public:
        string  titre;
        string  auteur;
        int anneePublication;
        int nbrPages;
        bool estEmprunte = false;

        Livre(string titre,string auteur,int anneePublication,int nbrPages){
            this->titre = titre;
            this->auteur = auteur;
            this->anneePublication = anneePublication;
            this->nbrPages = nbrPages;
        }


        string get_titre(){
            return titre;
        }

        void set_titre(string uptdateTitre){
            this->titre= uptdateTitre;

        }

        string get_auteur(){
            return titre;
        }

        void set_auteur(string updateAuteur){
            this->auteur = updateAuteur;
        }

        int get_anneePublication(){
            return anneePublication;
        }

        void set_anneePublication(int updateAnneePublication){
            this->anneePublication= updateAnneePublication;
        }

        int get_nbrPages(){
            return nbrPages;
        }

        void set_nbrPages(int updateNbPages){
            this->nbrPages = updateNbPages;
        }

        void afficherInfo(){
            cout<<"Titre : "<<titre<< "\nAuteur : "
            << auteur <<"\nAnnée de publication : "
            <<anneePublication <<"\nNombre de pages : "<<nbrPages<<"\nstatut d'emprunt 1 si emprunter 0 si disponible  :"<< estEmprunte<<endl;
        }

        bool estAncien(){
            bool isOld=false;
            if(anneePublication > 30)
            {
                isOld = true;
                cout <<titre<<"  est vieux de plus de 30 ans"<<endl;
            }
            else{
                 cout <<titre<<"  est recent moins de 30 ans"<<endl;
            }

            return isOld;
        }

        void set_emprunt(bool ok){
            this->estEmprunte = ok;
        }

        ~Livre(){
            cout<<"le livre a été supprimé!!" <<endl;
        }


};


class Emprunteur{

    public:
        string nom;
        Livre* livres[100];
        int nbLivresEmprunter=0;



        Emprunteur(string nom){
        this->nom = nom;
        }


        string get_nom(){
            return nom;
        }

        void set_nom(string updateNom){
            this->nom = updateNom;
        }

        void affichageEmprunt(){
            cout<<" L'emprunteur :" <<nom << " a emprunté :\n";
            for(int i=0;i<100;i++)
            {
                livres[i]->afficherInfo();
            }


        }

        void empruntLivre(Livre &livre){
            if (nbLivresEmprunter<100)
            {
                for(int i=0;i<100;i++)
                {
                     if( livres[i]== nullptr)
                        {
                            livre.set_emprunt(true);
                            livres[i]=&livre;
                            nbLivresEmprunter++;
                             cout<<"Bravo vous avez emprunt le livre!!\n";
                            break;
                        }
                }

            }
            else{
                cout<<"Desolé , Vous avez emprunté déja le max de livre!!\n";
            }
           
        }

        void retournerLivre(Livre &livre){
            for(int i=0;i<100;i++)
            {
                if( livres[i] == &livre){
                    livre.set_emprunt(false);
                    livres[i]=nullptr;
                    nbLivresEmprunter--;
                    cout<<"Bravo vous avez retourner le livre!!\n";

                }


            }


        }




};





int main(){

/*
- Harry Potter, J.K. Rowling, 1997, 450 pages
    - Les Misérables, Victor Hugo, 1862, 1500 pages
    - Dune, Frank Herbert, 1965, 800 pages
*/

    Livre livre1("Harry Potter", "J.K. Rowling", 1997, 450 );
    Livre livre2("Les Misérables", "Victor Hugo", 1862, 1500);
    Livre livre3("Dune", "Frank Herbert", 1965, 800);
    Livre livre4("Dune2 ","Frank Herbert", 1975, 850);
    Emprunteur emprunteur1("Ludovic");

    livre1.afficherInfo();
    livre4.estAncien();
    emprunteur1.empruntLivre(livre1);
    emprunteur1.empruntLivre(livre2);
    emprunteur1.empruntLivre(livre3);
    livre3.afficherInfo();
    emprunteur1.retournerLivre(livre3);
    livre3.afficherInfo();


    
    
    





    return 0;
}