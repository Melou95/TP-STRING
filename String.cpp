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

int String::max_size(){
  return MAX_SIZE_;
}
 
//Setters
void String::resize(int size){
	if (size>capacity_-1){
		cout<< "La chaine de caratère que vous chercher à créer est plus longue que la capacité du tableau : " << cpacity_ <<endl;
	}
	else if (size<0){
		cout<< "La taille que vous donnez en entrée doit être positif."
	}
	else {
		int i=0;
		while (i < size){
			i+=1;
		}
		data_[i]='\0';
		size_=size;
	}
}

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
  
