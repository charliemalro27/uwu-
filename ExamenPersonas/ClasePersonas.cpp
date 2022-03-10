#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


//Clase

class Persona{

  private:

    string Nombre;
    string DNI;
    int Edad;
    vector <int> VIP;

  public:

  //Constructor
    Persona(string Nombre="Charlie",string DNI="75943840W", int Edad=18){
      this->Nombre=Nombre;
      this->DNI=DNI;
      this->Edad=Edad;
    }

    //SETS

    void setNombre(string Nombre){
      this->Nombre=Nombre;
    }

    void setDNI(string DNI){
      this->DNI=DNI;
    }

    void setEdad(int Edad){
      this->Edad=Edad;
    }

    void setVIP(vector <int> VIP){
      this->VIP=VIP;
    }

    //Imprimir

    void imprimirNombre(){
      cout<<"Este es el nombre: "<<this->Nombre<<endl;
    }

    void imprimirDNI(){
      cout<<"Este es el DNI: "<<this->DNI<<endl;
    }

    void imprimirEdad(){
      cout<<"Esta es la edad: "<<this->Edad<<endl;
    }

    void imprimirFrase(){
       cout<<"Me llamo "<<this->Nombre<<" "<<"tengo"<<" "<<this->Edad<<" "<<"anos"<<" "<<"y mi DNI es"<<" "<<this->DNI<<endl;
    }

    //GETS

    string getNombre(){
      return this->Nombre;
    }

    string getDNI(){
      return this->DNI;
    }

    int getEdad(){
      return this->Edad;
    }

    //Metodos

    void MayorOmenor(int edad){
      if(this->Edad>=18)
      {
        cout<<"Eres mayor de edad "<<endl;
      }
      if(this->Edad<18)
      {
        cout<<"Eres menor de edad "<<endl;
      }

    }

    void comprobacionVIP(vector<int> VIP){
      int sumatoria=0;
      for(int i=0;i<VIP.size();i++){
        sumatoria+=VIP[i];
      }
      if (sumatoria/11==0){
      cout<<"Enhorabuena eres VIP! "<<endl;}
      else{
        cout<<"Sorry no eres VIP "<<endl;
      }

    }
};

int main(){

  Persona PersonillaDefecto;
  Persona Personilla;


  cout<<"Estos son los valores por defecto"<<endl;
  PersonillaDefecto.imprimirNombre();
  PersonillaDefecto.imprimirDNI();
  PersonillaDefecto.imprimirEdad();
  PersonillaDefecto.imprimirFrase();
  cout<<endl;

  int Edad2;
  Edad2=PersonillaDefecto.getEdad();
  PersonillaDefecto.MayorOmenor(Edad2);
  cout<<endl;

  cout<<"Estos son los valores con sets establecidos"<<endl;
  Personilla.setNombre("Rodolfo");
  Personilla.setDNI("26953870U");
  Personilla.setEdad(14);
  Personilla.imprimirNombre();
  Personilla.imprimirDNI();
  Personilla.imprimirEdad();
  Personilla.imprimirFrase();
  cout<<endl;

  int Edad;
  Edad=Personilla.getEdad();
  Personilla.MayorOmenor(Edad);
  cout<<endl;

  cout<<"Introduce los numeros VIPS"<<endl;
  int numero1,numero2,numero3;
  cin>>numero1;
  cin>>numero2;
  cin>>numero3;
  vector <int> VIP={numero1,numero2,numero3};
  Personilla.setVIP(VIP);
  Personilla.comprobacionVIP(VIP);




  return 0;
}
