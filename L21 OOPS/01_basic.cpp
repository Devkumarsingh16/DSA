#include<iostream>
using namespace std;

class Hero{

    // properties
   int health;
};

int main(){

    // object creation
    Hero h1;

    cout<< "size :" << sizeof(h1)<< endl;
    return 0;
}

                               //public and private accessing
#include<iostream>
using namespace std;

class Hero{

    // properties
    public:
   int health;

   string level;

};

int main(){

    // object creation
    Hero ramesh;

    ramesh.health = 70;
    ramesh.level = 'A';

    cout<< "Health is :" << ramesh.health<< endl;
    cout<< "Level is :" << ramesh.level<< endl;    
    return 0;
}

                     //   using getter and setter 
#include<iostream>
using namespace std;

class Hero{

    // properties
    private:
   int health;

   public:
   char level;


   int gethealth(){
    return health;
   }

   char getlevel(){
    return level;
   }

   void sethealth(int h){
    health = h;
   }

   void setlevel(int l){
    level = l;
   }
};

int main(){

    // object creation
    Hero ramesh;

    ramesh.sethealth(80);
    ramesh.level = 'A';

    cout<< "Health is : " << ramesh.gethealth()<< endl;
    cout<< "Level is : " << ramesh.level<< endl;  
    return 0;
}

                              //  static and dynamic allocation
#include<iostream>
using namespace std;

class Hero{

    // properties
    private:
   int health;

   public:
   char level;


   int gethealth(){
    return health;
   }

   char getlevel(){
    return level;
   }

   void sethealth(int h){
    health = h;
   }

   void setlevel(int l){
    level = l;
   }
};

int main(){

           // static allocation
    Hero a;

    a.sethealth(90);
    a.level = 'A';

    cout<< "Health is : " << a.gethealth()<< endl;
    cout<< "Level is : " << a.level<< endl;    

                   // dynamic allocation
      Hero *b = new Hero();

    (*b).sethealth(80);
    (*b).level = 'A';

    cout<< "Health is : " << (*b).gethealth()<< endl;
                      // or
    //  cout<< "Health is : " << b->gethealth()<< endl;
    cout<< "Level is : " << (*b).level<< endl;   
    return 0;
}
                                            
                                          // constructor
#include<iostream>
using namespace std;

class Hero{


    // properties
    private:
   int health;

   public:
   char level;

     Hero(){                // simple constructor
        cout << "constructor called" << endl;
    }

  Hero(int health){      //  parametrise constructor
    this-> health = health;           
     
    }

   int gethealth(){
    return health;
   }

   char getlevel(){
    return level;
   }

   void sethealth(int h){
    health = h;
   }

   void setlevel(int l){
    level = l;
   }
};

int main(){

    // object creation statically
   
    Hero ramesh;
    ramesh.gethealth();

    // dynamically

    Hero *h = new Hero();

    return 0;
}

                                          //   copy constructor  
#include<iostream>
using namespace std;

class Hero{


    // properties
    private:
   int health;

   public:
   char level;

  
    // parametrise constructor

  Hero(int health,int level){      
    this-> health = health;  
    this->level = level;         
     
    }
               //copy constructor

    Hero(Hero& temp){
    cout<<"copy constructor"<< endl;
    this-> health = temp.health;  
    this->level = temp.level;   


    }

 void print(){
    cout << "hello"<<endl;
    cout<<"health is : "<<  this-> health << endl;
    cout<<"level is : "<<  this-> level << endl;
 }

   int gethealth(){
    return health;
   }

   char getlevel(){
    return level;
   }

   void sethealth(int h){
    health = h;
   }

   void setlevel(int l){
    level = l;
   }
};

int main(){

    // object creation statically
   
    Hero ramesh(70,'C');
    ramesh.print();
  
     // copy constructer

    Hero suresh(ramesh);
    suresh.print();

    return 0;
}

                                          // shallow copy and deep copy
         1.Shallow copy

#include<iostream>
#include<cstring>
using namespace std;

class Hero{

    // properties
    private:
   int health;

   public:
    char *name;
   char level;

   Hero(){
    cout << "Simple constructor called" << endl;
    name = new char[100];
   }
    // parametrise constructor

  Hero(int health,int level){      
    this-> health = health;  
    this->level = level;         
     
    }
               //copy constructor

   //  Hero(Hero& temp){
   //  cout<<"copy constructor"<< endl;
   //  this-> health = temp.health;  
   //  this->level = temp.level;   


   //  }

 void print(){
    cout << "Name :" << this->name <<endl;
    cout<<"health is : "<<  this-> health << endl;
    cout<<"level is : "<<  this-> level << endl;
 }

   int gethealth(){
    return health;
   }

   char getlevel(){
    return level;
   }

   void sethealth(int h){
    health = h;
   }

   void setlevel(int l){
    level = l;
   }

   void setName(char name[]){
    strcpy(this->name,name);

   }
};

int main(){

     Hero h1;
     h1.sethealth(12);
     h1.setlevel('D');
     char name[5] = "Ravi";
     h1.setName(name);

    h1.print();


    // default copy constructor

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'L';
    h1.print();

    h2.print();

    return 0;
}

         // 2. Deep copy

#include<iostream>
#include<cstring>
using namespace std;

class Hero{

    // properties
    private:
   int health;

   public:
    char *name;
   char level;

   Hero(){
    cout << "Simple constructor called" << endl;
    name = new char[100];
   }
    // parametrise constructor

  Hero(int health,int level){      
    this-> health = health;  
    this->level = level;         
     
    }
               //copy constructor

    Hero(Hero& temp){
    char *ch = new char[strlen(temp.name) + 1];
    strcpy(ch,temp.name);
    this->name = ch;
    this-> health = temp.health;  
    this->level = temp.level;   
    }

 void print(){
    cout << "Name :" << this->name <<endl;
    cout<<"health is : "<<  this-> health << endl;
    cout<<"level is : "<<  this-> level << endl;
 }

   int gethealth(){
    return health;
   }

   char getlevel(){
    return level;
   }

   void sethealth(int h){
    health = h;
   }

   void setlevel(int l){
    level = l;
   }

   void setName(char name[]){
    strcpy(this->name,name);

   }
};

int main(){

     Hero h1;
     h1.sethealth(12);
     h1.setlevel('D');
     char name[5] = "Ravi";
     h1.setName(name);

    h1.print();


    // default copy constructor

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'L';
    h1.print();

    h2.print();

    return 0;
}

                                    //   copy assignment operator

#include<iostream>
#include<cstring>
using namespace std;

class Hero{

    // properties
    private:
   int health;

   public:
    char *name;
   char level;

   Hero(){
    cout << "Simple constructor called" << endl;
    name = new char[100];
   }
    // parametrise constructor

  Hero(int health,int level){      
    this-> health = health;  
    this->level = level;         
     
    }
               //copy constructor

    Hero(Hero& temp){
    char *ch = new char[strlen(temp.name) + 1];
    strcpy(ch,temp.name);
    this->name = ch;
    this-> health = temp.health;  
    this->level = temp.level;   
    }

 void print(){
    cout << "Name :" << this->name <<endl;
    cout<<"health is : "<<  this-> health << endl;
    cout<<"level is : "<<  this-> level << endl;
 }

   int gethealth(){
    return health;
   }

   char getlevel(){
    return level;
   }

   void sethealth(int h){
    health = h;
   }

   void setlevel(int l){
    level = l;
   }

   void setName(char name[]){
    strcpy(this->name,name);

   }
};

int main(){

     Hero h1;
     h1.sethealth(12);
     h1.setlevel('D');
     char name[5] = "Ravi";
     h1.setName(name);
  
    // default copy constructor

    Hero h2(h1);
 

    h1.name[0] = 'L';
    h1.print();

    h2.print();

    h1 = h2;
     h1.print();

    h2.print();
    return 0;
}

                                          // Destructor
#include<iostream>
#include<cstring>
using namespace std;

class Hero{


    // properties
    private:
   int health;

   public:
    char *name;
   char level;

   Hero(){
    cout << "Simple constructor called" << endl;
    name = new char[100];
   }
    // parametrise constructor

  Hero(int health,int level){      
    this-> health = health;  
    this->level = level;         
     
    }
               //copy constructor

    Hero(Hero& temp){
    char *ch = new char[strlen(temp.name) + 1];
    strcpy(ch,temp.name);
    this->name = ch;
    this-> health = temp.health;  
    this->level = temp.level;   


    }

 void print(){
    cout << "Name :" << this->name <<endl;
    cout<<"health is : "<<  this-> health << endl;
    cout<<"level is : "<<  this-> level << endl;
 }

   int gethealth(){
    return health;
   }

   char getlevel(){
    return level;
   }

   void sethealth(int h){
    health = h;
   }

   void setlevel(int l){
    level = l;
   }

   void setName(char name[]){
    strcpy(this->name,name);

   }

   // destructor

   ~Hero(){
      cout <<" Destructor called"<< endl;
   }
};

int main(){

   // statically
   Hero a;

  // dymaically

  Hero *b = new Hero();

    //  manually destructor
    delete b;
}

                                    //   Static keyword
#include<iostream>
using namespace std;

class Hero{
   
   public:
   static int timeToComplete;
};

int Hero :: timeToComplete = 5;

int main(){

   cout << Hero::timeToComplete << endl;
   return 0;
}

                                        // static function
#include<iostream>
using namespace std;

class Hero{
   
   public:
   static int timeToComplete;

   static int random(){
      cout <<"hii"<<endl;
      return timeToComplete;
   }
};

int Hero :: timeToComplete = 5;

int main(){

   cout << Hero::random() << endl;
   return 0;
}
