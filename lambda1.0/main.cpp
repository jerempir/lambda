#include <iostream>
using namespace std;

int main() {
    int a = 248;
    auto myLambada = [](int &n)
    {
        n = 7;
    };
    myLambada(a);
    cout<<"var ="<<a<<endl;
    return 0;

}
