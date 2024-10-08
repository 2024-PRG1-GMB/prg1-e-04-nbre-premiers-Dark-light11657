#include <iostream>
#include <cstdlib>
#include <cinttypes>
#include <cmath>

using namespace std;

int main() {
    char terminer;
    int valeur;

    bool vrai = false;
    bool recommencer = false; //false

    do {
        cout<<"Entrer une valeur entre 2 et 1000 :"<<endl;
        cin >> valeur;


        if (valeur<1000 && valeur >= 2) {
            vrai = true;
            cout << "Voici la liste des nombres premiers" << endl;
        } else
        {
            cout<<"Entrer une valeur entre 2 et 1000 :"<<endl;
            cin >> valeur;
        }

        int boucle = 0;

        while (vrai == true && valeur <= 1000) {

            int compteur_colonne = 0;
            int valeur_premier = valeur;

            bool test1 = valeur % 2;
            bool test2 = valeur % 3;
            bool test3 = valeur % 5;

            bool premier = test1 && test2 && test3;
            if (premier == true) {

                cout << valeur_premier << '\t';
                compteur_colonne++;

                if (compteur_colonne == 5) {
                    cout << endl;
                    compteur_colonne = 0;
                }

                valeur = valeur_premier + 1;
                ++boucle;

            } else {
                valeur = valeur_premier + 1;
            }
        }

        if (valeur>1000) {
            do {
                while (terminer != 'N' && terminer != 'O') {
                    cout <<endl;
                    cout << "Voulez-vous recommencer [O/N] :" <<endl;
                    cin>>terminer;
                }
                if (terminer == 'O') {
                    recommencer = true;
                    valeur = 0;
                } else {
                    return EXIT_SUCCESS;
                }
            } while (recommencer == false);
        }

        terminer = 'X';
        recommencer = false;
        vrai = false;

    }while(terminer != 'N');
    return EXIT_SUCCESS;
}

