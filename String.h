/* Déclaration de la classe String */
class String {
  protected :
    char * data_;
    int capacity_;
    int size_;
    static const int MAX_SIZE_;   //Mot clé const + en majuscule car c'est une constante
  public :
    //Getters
    char * c_str();
    int size();
    int length();
    int capacity();
    int max_size();
    
    //Setters
    String clear();
    String resize(int size);
    String reserve(int capacity);
    
    //Constructors
    String(const String* obj);
    String(char * obj);
    ~String();
    
    //Test
    bool empty();
};
