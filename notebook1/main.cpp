#include <iostream>
#include <string>

using namespace std;
class hello
{

public:
    hello(string number){
        cout<<"FIRST";
        this->number = number;
    }
    hello(double number)
    {
        cout<<"Sevond";

    }
private:
    string number;

    

};

int main(){
    hello num1("1000000.99999999");
    hello num2(10000.0);
    cin.get();
    return 0;
}