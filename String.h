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
    String& operator=(const String& obj);
    friend String operator+(const String& obj1, char obj2);
    void operator = (char carac);
    friend String operator + (String s, char * chaine);
    String& operator= (const char* c_string);
    friend String operator + (const String& st1, const String& st2);
    
    //Test
    bool empty();
};

String operator+(const String& obj1, char obj2);
String operator + (String s, char * chaine);

