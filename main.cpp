#include <iostream>
using namespace std;



int main()
{
    try{
        int num1;
        cout <<"Enter first number: " << endl;
        cin >> num1;

        int num2;
        cout <<"Enter second number: " << endl;
        cin >> num2;

        if(num2 == 0){
            throw 0;
        }

        cout << num1/num2;

    }catch(int x){
        cout << "You can't divide by " << x << endl;
    }



}
