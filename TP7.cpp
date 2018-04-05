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

  //Vérification du setter resize
  s1.resize(2);
  cout<< s1 <<endl;

  return 0;
  
  //Vérification du constructeur par copie
  
}
