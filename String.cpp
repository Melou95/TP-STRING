#include "String.h"

const int String::MAX_SIZE_ = 100;


// Getters
char * String::c_str(){
  return data_;
}

int String::size(){
  return size_;
}
 
//Setters
 
//Constructors 
 
//Définition du constructeur par copie
String::String(const String* obj){
  int longueur;
  longueur=obj.size();
  String* obj = new String* chaine
}
  
//Test
  
