#include "String.h"

const int String::MAX_SIZE_ = 100;


// Getters
char * String::c_str(){
  return data_;
}

int String::size(){
  return size_;
}

int String::length(){
  return size_;
}

int String::capacity(){
  return capacity_;
}
 
//Setters
 
//Constructors 

//Définition du contructeur à partir d'une c-string
String::String(const char* obj){
	int taille=0;
	while (obj[taille]!='\0'){
		taille+=1;
	}
	char * c_string=new char[taille+1];
	for (int i=0; i<=taille; i++){
		c-string[i]=obj[i];
	}
	c_string[taille+1]='\0';
	data_=c_string;
	size_=taille;
	capacity_=taille+1;
}
 
/*//Définition du constructeur par copie
String::String(const String* obj){
  int longueur;
  longueur=obj->size();
  String* obj = new String* chaine
}*/
  
//Test
  
