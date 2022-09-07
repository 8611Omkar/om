#include <iostream>
using namespace std;
int main()
{

    char button;
    cout << "input a character: ";

    cin >> button;

    if (button == 'a')
    {
        cout << "hello" << endl;
    }
    else if (button == 'b')
    {
        cout << "Namaste" << endl;
    }
    else if (button == 'c')
    {
        cout << "Salut" << endl;
    }
    else if (button == 'd')
    {
        cout << "hola"<<endl;
    }
    else if (button == 'e'){
        cout << "Ciao"<<endl;
    }
    else{
        cout<<"I am still learning more"<<endl;
    }













    
    return 0;
}