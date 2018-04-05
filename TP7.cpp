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
  cout<< s1.c_str() <<endl;
  cout<< s1.size() <<endl;
  cout<< s1.capacity() <<endl;
  return 0;
  
  //Vérification du constructeur par copie
  
}
