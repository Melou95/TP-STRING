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
void String::resize(int size, char carac){
	if (size>capacity_-1){
		char * c_string=new char[size+1];
		for (int i=0; i<=size_; ++i){
			c_string[i]=data_[i];
		}
		for (int j=size_; j<=size; ++j){
			c_string[j]=data_[j];
		}
		c_string[size+1]='\0';
		delete data_;
		data_=c_string;
		size_=size;
		capacity_=size+1;
	}
	else {
		if (size<0){
			cout<< "La taille que vous donnez en entrée doit être positive."<<endl;
		}
		else if (size<size_){
			cout<< "L'entier entré en paramètre est plus petit que la taille de la chaine de caractère."<<endl;
			cout<< "Veuillez rentrer un entier plus grand que : " << size_ <<endl;
		}
		else {
			int i=size_;
			while (i < size){
				data_[i]=carac;
				++i;
			}
			data_[i]='\0';
			size_=size;
		}
	}
}

void String::resize(int size){
	if (size>size_){
		cout<< "La chaine de caratère que vous chercher à créer est plus longue que la chaine existante" <<endl;
		cout<< "Veuillez choisir une taille inferieure à la taille de la chaine actuelle " << size_ <<endl;
		cout<< "Ou choisir un caractère à ajouter à la chaine de caratère existance" <<endl;
	}
	else if (size<0){
		cout<< "La taille que vous donnez en entrée doit être positif." <<endl;
	}
	else {
		int i=0;
		while (i < size){
			++i;
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
		++taille;
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

// Opérators

// Définition de l'opérateur "="

// Définition de l'opérateur "+"
