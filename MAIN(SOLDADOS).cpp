#include "LISTAC.cpp"
#include "string"
#include "iostream"
#include "conio.h"
using namespace std;

int main(){
    LISTAC<string> l;
    l.add("A");
    l.add("B");
    l.add("C");
    l.add("D");
    l.add("E");
    l.add("F");
    bool F = true;
    while(F){
        system("cls");
        cout<<"\n\t\t[1] comenzar\n\t\t[2] Imprimir lista\n\t\t[3] Salir"<<endl<<endl<<"\tSeleccion: ";
        int Option; cin>>Option;
        switch (Option){
        case(1):{
            system("cls");
            if (l.isEmpty()){
                cout<<endl<<"\tLa lista esta vacia";
            }
            else{
                cout<<endl<<"\tA partir de que soldado se va a empezar? ";
                string s; cin>>s;
                if(l.search(s)==true){
                    cout<<endl<<"\tIngrese el numero: ";
                    int n; cin>>n; cout<<endl;
                    while(l.isEmpty()==false){
                        cout<<"Se elimino "<<l.remove(n)<<endl;
                    }
                }
                else{
                    cout<<endl<<"\tNo existe el soldado";
                }
            }
            getch();
        }
        break;
        case(2):
            system("cls");
            if (l.isEmpty()){
                cout<<endl<<"\tLa lista esta vacia";
            }
            else{
                l.print();
            }
            getch();
            break;
        case(3):
            system("cls");
            cout<<endl<<"\tSaliendo del programa..."<<endl;
            return 0;
        default:
            cout<<endl<<endl<<"\tOpcion invalida"<<endl;
            getch();
            break;
        }
    }
}
