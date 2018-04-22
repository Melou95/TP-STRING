#include "String.h"
#include <iostream>
using namespace std;

const int String::MAX_SIZE_ = 100;


// Getters
char * String::c_str(){
    return data_;
}

int String::size()/*const noexcept*/{
    return size_;
}

int String::length()/*const noexcept*/{
    return size_;
}

int String::capacity()/*const noexcept*/{
    return capacity_;
}

int String::max_size()/*const noexcept*/{
    return MAX_SIZE_;
}

//Setters
void String::resize(int size, char carac){
    if (size>capacity_-1){
        if (size<MAX_SIZE_){
            char * c_string=new char[size+1];
            for (int i=0; i<=size_; ++i){
                c_string[i]=data_[i];
            }
            for (int j=size_; j<size; ++j){
                c_string[j]=carac;
            }
            c_string[size+1]='\0';
            delete data_;
            data_=c_string;
            size_=size;
            capacity_=size+1;
        }
        else {
            cout<< "L'entier donné en entrée est plus grand que l'espace maximum qui peut être alloué à une chaine de caractère."<<endl;
            cout<< "Veuillez entrer un entier inférieur à : " << MAX_SIZE_ <<endl;
        }
        
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
        cout<< "La chaine de caratère que vous chercher à créer est plus longue que la chaine existante." <<endl;
        cout<< "Veuillez choisir une taille inferieure à la taille de la chaine actuelle : " << size_ <<"."<<endl;
        cout<< "Ou choisir un caractère à ajouter à la chaine de caratère existante." <<endl;
    }
    else if (size<0){
        cout<< "La taille que vous donnez en entrée doit être positive." <<endl;
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

String String::reserve(int capacity){
  capacity_=capacity;
  char * tab = new char [capacity];
  tab = this->data_;
  delete this -> data_;
  this -> data_ = tab;
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
        c_string[i]=obj[i];
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

bool String::empty(){
  if (this -> data_[0]=='\0'){
    return true;
  }
  else {
    return false;
  }
}

// Opérators

// Définition de l'opérateur "="

void String::operator = (char carac){
    char* c_string=new char[2];
    c_string[0]=carac;
    c_string[1]='\0';
    delete data_;
    data_=c_string;
    size_=1;
    capacity_=2;
    
}

// Définition de l'opérateur "+"

String operator + (String s, char * chaine){
    String s1(s.c_str());
    int taille=0;
    while (chaine[taille]!='\0'){
        ++taille;
    }
    char * c_string=new char[s1.capacity_+taille];
    for (int i=0; i<=s1.size_; ++i){
        c_string[i]=s1.data_[i];
    }
    for (int j=s1.size_; j<s1.size_+taille; ++j){
        c_string[j]=chaine[j-s1.size_];
    }
    c_string[s1.capacity_+taille]='\0';
    delete s1.data_;
    s1.data_=c_string;
    s1.size_+=taille;
    s1.capacity_+=taille;
    return (s1);
}

/*Destructor
String::~String(){
  delete this -> data_;
}*/

