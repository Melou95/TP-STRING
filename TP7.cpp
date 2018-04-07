#include "String.h"
#include <iostream>
using namespace std;

int main(){
    //Vérification de la mise en place de l'environnement
    cout<< "Hello World !" <<endl;
    cout<< " " <<endl;
    
    //Vérification du constructeur à partir d'une c-string
    char test[4]={'L','o','u','\0'};
    cout<< "La chaine test est : " << test <<endl;
    String s1(test);
    //Vérification du getter c_str
    cout<< "La string s1 contient la chaine : " << s1.c_str() <<endl;
    //Vérification du getter size
    cout<< "La taille renvoyée par size de la chaine s1 est : " << s1.size() <<endl;
    //Vérification du getter length
    cout<< "La taille renvoyée par length de la chaine s1 est : " <<s1.length() <<endl;
    //Vérification du getter capacity
    cout<< "La taille du tableau contenant la chaine s1 est : " << s1.capacity() <<endl;
    //Vérification du getter max_size
    cout<< "La taille maximale d'une chaine est : " <<s1.max_size() <<endl;
    cout<< " " <<endl;
    
    //Vérification des setters resize
    s1.resize(2);
    cout<< "La chaine s1 raccourcie d'un caractère est : " << s1.c_str() <<endl;
    s1.resize(-1);
    cout<< "La chaine s1 reste inchangée : " << s1.c_str() <<endl;
    s1.resize(70);
    cout<<"La chaine s1 reste inchangée : " <<  s1.c_str() <<endl;
    cout<< " " <<endl;
    
    s1.resize(3,'u');
    cout<< "La chaine s1 à laquelle on rajoute 'u' devient : " << s1.c_str() <<endl;
    s1.resize(4,'i');
    cout<< "La chaine s1 à laquelle on rajoute 'i' devient : " << s1.c_str() <<endl;
    s1.resize(2,'L');
    cout<< "La chaine reste inchangée : " << s1.c_str() <<endl;
    s1.resize(-2,'O');
    cout<< "La chaine reste inchangée : " << s1.c_str() <<endl;
    cout<< " " <<endl;
    
    // Pour tester la prise en compte de MAX_SIZE_
    char test2[5]={'T','e','s','t','\0'};
    cout<< "La string s2 contient la chaine test2 : " << test2 <<endl;
    String s2(test2);
    s2.resize(103,'.');
    cout<< " " <<endl;
    
    // Pour tester l'opérateur "="
    s2 = 'A';
    cout<< "La chaine contenue dans la string s2 est maintenant : " << s2.c_str() <<endl;
    cout<< "La longeur de cette chaine est : " << s2.length() <<endl;
    cout<< "La taille du tableau la contenant est : " << s2.capacity() <<endl;
    
    return 0;
    
    //Vérification du constructeur par copie
    
}
