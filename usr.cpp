#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])

{
    int suma=0, cec, nrint=0;
     char cont;
      do
      {
          cout<<"Valoarea cecului este: ";
           cin>>cec;
             suma=suma+cec;
              nrint++;
                cout<<"Doriti sa introduceti un alt cec? Y/da; N/nu;";
                 cin>>cont;

      }
        while(cont=='Y' || cont=='y');
            cout<<"Ati introdus: "<<nrint<<" cecuri, in valoare de: "<<suma<<" RON"<<endl;
            system("PAUSE");
            return EXIT_SUCCESS;
}
