#include "String.h"
#include <iostream>
using namespace std;

int main(){
  //Vérification de la mise en place de l'environnement
  cout<< "Hello World !" <<endl;

  //Vérification du constructeur à partir d'une c-string
  char test[4]={'L','o','u','\0'};
  cout<< test <<endl;
  String s1(test);
  //Vérification du getter c_str
  cout<< s1.c_str() <<endl;
  //Vérification du getter size
  cout<< s1.size() <<endl;
  //Vérification du getter length
  cout<< s1.length() <<endl;
  //Vérification du getter capacity
  cout<< s1.capacity() <<endl;
  //Vérification du getter max_size
  cout<< s1.max_size() <<endl;

  //Vérification des setters resize
  s1.resize(2);
  cout<< s1.c_str() <<endl;
  s1.resize(-1);
  cout<< s1.c_str() <<endl;
  s1.resize(70);
  cout<< s1.c_str() <<endl;

  s1.resize(3,'u');
  cout<< s1.c_str() <<endl;
  s1.resize(4,'i');
  cout<< s1.c_str() <<endl;
  s1.resize(2,'L');
  cout<< s1.c_str() <<endl;
  s1.resize(-2,'O');
  cout<< s1.c_str() <<endl;

  // Pour tester la prise en compte de MAX_SIZE_
  char test2[5]={'T','e','s','t','\0'};
  cout<< test2 <<endl;
  String s2(test2);
  s2.resize(103,'.');

  // Pour tester l'opérateur "="
  s2 = 'A';
  cout<< s2.c_str() <<endl;
  cout<< s2.length() <<endl;
  cout<< s2.capacity() <<endl;

  return 0;
  
  //Vérification du constructeur par copie
  
}
