#include <iostream>

using namespace std;

int main()
{
    string frase;
    cout << "Ingrese la frase ha cifrar" << endl;
    getline(cin,frase);
    for (int i=0; i<frase.length();i++)
    {
        if (frase[i]==' ')
        {
            frase[i]=' ';
        }
        else if (frase[i]=='x')
        {
            frase[i]='a';
        }
        else if (frase[i]=='X')
        {
            frase[i]='A';
        }
        else if (frase[i]=='y')
        {
            frase[i]='b';
        }
        else if (frase[i]=='Y')
        {
            frase[i]='B';
        }
        else if (frase[i]=='z')
        {
            frase[i]='c';
        }
        else if (frase[i]=='Z')
        {
            frase[i]='C';
        }
        else
        {
            frase[i]=frase[i]+3;
        }
    }
    cout<< "Frase cifrada: " << frase << endl;
    return 0;
}
