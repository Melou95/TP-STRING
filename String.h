/* Déclaration de la classe String */
class string {
  protected :
    char * data_;
    int capacity_;
    int size_;
    static int max_size;
  public :
    //Getters
    char * c_str();
    int size();
    int length();
    int capacity();
    int max_size();
    
    //Setters
    string clear();
    string resize();
    string reserve();
    
    //Constructors
    string(string obj);
    string(char * obj);
    destructor();
    
    //Test
    void empty();
}
