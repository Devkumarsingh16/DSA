
                                    //   Encapsulation
#include<iostream>
using namespace std;

class Student{

    public:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }

    int setAge(int a){
        this->age = a;
    }

};

int main(){

    Student a;
    a.setAge(20);
    cout << "Age is : " << a.getAge() << endl;
}

                                                //  Inheritance
#include<iostream>
using namespace std;

class Human{

    public:
    int weight;
    int age;
    int height;
};

class male : public Human{
    public:
    string color;

    void sleep(){
        cout << " Male Sleeping "<< endl;
    }
};

int main(){

    male obj1;

    obj1.age = 20;
    obj1.weight = 70;
    obj1.height = 6;
    obj1.color = "black";

    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    cout << obj1.height << endl;

    cout << obj1.color << endl;

    obj1.sleep() ;

    return 0;


}

                                //    Type of Inheritance

                               //   1. single inheritance
#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << " barking" << endl;

    }
};

class Dog : public Animal{

    public:
    string color;
};

int main(){

    Dog d;

    d.age = 5;
    d.weight = 14;
    d.color = "Red";

    cout << d.age << endl;
    cout << d.color << endl;

    d.speak();
    return 0;
}
                                        //    2. Multi-level inheritance
#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << " barking" << endl;

    }
};

class Dog : public Animal{

    public:
    string color;
};

class GermanShephard : public Dog{

};

int main(){

   GermanShephard gs;
    gs.speak();
    gs.color = "Red";
    cout << gs.color << endl;
    return 0;
}

                                                //    3. Multiple inheritance
#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout << " barking" << endl;

    }
};

class Human{
    public:
    void speak(){
        cout << "Speaking" << endl;
    }

};

class Hybrid : public Animal,public Human{

};

int main(){

   Hybrid h1;

   h1.bark();
   h1.speak();
    return 0;
}

                                        //   4. Hierarchical inheritance
#include <iostream>
using namespace std;

class Fun1{
      public:
      void func1(){
        cout << " inside func1" << endl;
      }
};

class Fun2 : public Fun1{
      public:
      void func2(){
        cout << " inside func2" << endl;
      }
};

class Fun3 : public Fun1{
      public:
      void func3(){
        cout << " inside func3" << endl;
      }
};

int main(){
    Fun1 obj1;
    obj1.func1();

    Fun2 obj2;
    obj2.func1();
    obj2.func2();

    Fun3 obj3;
    obj3.func1();
    obj3.func3();
}

                                        // 5. Hybrid inheritance
#include <iostream>
using namespace std;

class Fun1{
      public:
      void func1(){
        cout << " inside func1" << endl;
      }
};

class Hello{
      public:
      void hay(){
        cout << " inside hay" << endl;
      }
};

class Fun2 : public Fun1{
      public:
      void func2(){
        cout << " inside func2" << endl;
      }
};

class Fun3 : public Fun1,public Hello{
      public:
      void func3(){
        cout << " inside func3" << endl;
      }
};

int main(){
    Fun1 obj1;
    obj1.func1();

    Fun2 obj2;
    obj2.func1();
    obj2.func2();

    Fun3 obj3;
    obj3.func1();
    obj3.func3();
    obj3.hay();
}
                                    //    Inheritance Ambiguity

#include <iostream>
using namespace std;

class A{

    public:
    void fun(){
        cout << " I am A"<< endl;
    }
};

class B{

    public:
    void fun(){
        cout << " I am B"<< endl;
    }
};

class C : public A,public B{
  
};

int main(){

    C obj;
    obj.A :: fun();
    obj.B :: fun();

}
                                                // Polymorphism

                                                // 1. compile time polymorphism
                                                // 1(a) funtion overloading

#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout << " I am Dev" << endl;
    }

      void sayHello(string name){
        cout << " Hello" << endl;
    }

      void sayHello(int age){
        cout << " Hay " << endl;
    }
};

int main(){

    A obj;
    obj.sayHello("Ravi");

    return 0;
}

                                                    // 1(b) Operator overloading
#include<iostream>
using namespace std;

class B{

    public:
    int a;
    int b;

    public:
    int add(){
        return a + b;
    }

    void operator + (B &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << " output is : " << value2 - value1 << endl;
    }
};

int main(){

    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    
} 
                                                   // Runtime polymorphism
#include <iostream>
using namespace std;

class Animal{

    public:
    void speak(){
        cout << " Speaking" << endl;
    }
};

class Dog : public Animal{

    public:
    void speak(){
        cout << " barking" << endl;
    }
};

int main(){

    Dog d;
    d.speak();

    return 0;
}
