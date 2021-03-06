#include <iostream>
using namespace std;

template<class T>
class Calculator{

    public:
        T first, second;
        Calculator(T a, T b){
            first = a;
            second = b;
        }
        T bigger();
        T add();

};

template<class T>
T Calculator<T>::bigger(){
    return(first>second?first:second);
}
template<class T>
T Calculator<T>::add(){
    return(first + second);
}
int main()
{
    Calculator <int> c(69, 105);
    cout << c.first << " + " << c.second << " = " << c.add() << endl;
    cout << "The maximum between " << c.first << " and " << c.second << " is " << c.bigger() << endl;
}
