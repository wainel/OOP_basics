#include <iostream>
using namespace std;

// struct is used for small passive objects that carry public data and have no or few basic member functions.
// struct is used for a data container.
struct Person_t{
    string name;    // public
    unsigned age;
};

// class is usually used for a bigger active objects that carry private data, interfaced through public member functions.
// a class is used for a more complex data structure.
class Person{
    string name_;   // private
    unsigned age_;
public:
    unsigned age() const {return age_;} //getter
    void set_age(unsigned a){age_ = a;} //setter
};

int main()
{
    Person_t PT;
    PT.age = 7;
    cout << PT.age << endl;

    Person P;
    P.set_age(4);
    cout << P.age() << endl;
}
