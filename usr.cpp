#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
    int act;

    cout<<"Choose action: 1. Log-in; 2. Change password;";
    cin>>act;
     if (act==1){
        string pass ="";
        char ch;
          string usr;
            cout<<"enter user: \n"; cin<<user;
                if(user=='adam')
                    {
                    cout << "Enter pass\n";
                    ch = _getch();
                        while(ch != 13)
                        {//pass ii 13
                            pass.push_back(ch);
                                cout << '*';
                                ch = _getch();
                                        }
                                if(pass == "13")
                                {
                                        cout << "\n Acces permis!\n"; //urmeaza o noua secventa sau sir de secvente cu diferite actiuni
                                }else
                                {
      cout << "\n Accesul interzis...\n";
   }
    }else if
    {
        cout<<"Introduceti vechiul user: \n"; cin>>user;
        cout<<"introduceti vechea paronla: \n"; cin>>pass;
        if (pass="13" && user="adam")
        {
            cout<<"Introd. noul user: \n"; cin>>nusr;
            cout<<"Introd. noua parola: \n"; cin>>npass;
        {
            usr=nusr;
            pass=npass;
        }
        }
    }
    }
}
