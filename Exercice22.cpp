/*
Écrire un programme qui trouve la plus grande et la plus petite valeur d’une succession de notes (nombres entiers entre 0 et 20) fournies en données, ainsi que le nombre de fois où ce maximum et ce minimum ont été attribués. On supposera que les notes, en nombre non connu à l’avance, seront terminées par une valeur négative. On s’astreindra à ne pas utiliser de « tableau ».
*/

#include <iostream>
using namespace std ;
int main()
{   int note ; // note "courante"
    int max ; // note maxi
    int min ; // note mini
    int nmax ; // nombre de fois où la note maxi a été trouvée
    int nmin ; // nombre de fois où la note mini a été trouvée
    max = -1 ; // initialisation max (possible car toutes notes >=0
    min = 21 ; // initialisation min (possible car toutes notes < 21
    while (cout << "donnez une note (-1 pour finir) : ",
            cin >> note, note >=0)
    {   if (note == max) nmax++ ;
        if (note > max) { max = note ;
                        nmax = 1 ;
    }
        if (note == min) nmin++ ;
        if (note < min) { min = note ;
        nmin = 1 ;
    }
}
if (max >= 0)
    { cout << "\nnote maximale : " << max << " attribuée "
        << nmax << " fois\n" ;
    cout << "note minimale : " << min << " attribuée "
        << nmin << " fois\n" ;
    }
else cout << "vous n'avez fourni aucune note" ;
}

/*Résultat :
donnez une note (-1 pour finir) : 20
donnez une note (-1 pour finir) : 21
donnez une note (-1 pour finir) : 10
donnez une note (-1 pour finir) : 15
donnez une note (-1 pour finir) : 18
donnez une note (-1 pour finir) : 20
donnez une note (-1 pour finir) : 15
donnez une note (-1 pour finir) : 13
donnez une note (-1 pour finir) : -1

note maximale : 21 attribuée 1 fois
note minimale : 10 attribuée 1 fois


=== Code Execution Successful ===
*/
