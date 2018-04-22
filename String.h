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
    int size() /*const noexcept*/;
    int length() /*const noexcept*/;
    int capacity() /*const noexcept*/;
    int max_size() /*const noexcept*/;
    
    //Setters
    void clear();
    void resize(int size);
    void resize(int size, char carac);
    String reserve(int capacity);
    
    //Constructors
    String(const String& obj);
    String(const char * obj);
    //~String();
    
    //Operators
    void operator = (char carac);
    friend String operator + (String s, char * chaine);
    
    //Test
    bool empty();
};

String operator + (String s, char * chaine);

