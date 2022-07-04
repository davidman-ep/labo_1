#include <iostream>

using namespace std;


//ROLMAN ECHAVARRIA//
//2,5,15, 4
#define CASE 4




void valores(int *, int, int);
int decodePermits(const string&);


int main()
{
#if CASE==2
    //PROBLEMA 2
    short int opcion=0;
    int cantidad=0,denominacion=50000;
    int cont=0;

    cout<<"Programa que determina la minima combinacion de billetes y monedas \n"
    "para cantidad de dinero ingresada"<<endl;

     do{
        cout<<"0.salir\n1.minima combinacion\n";
        cout<<"ingrese opcion: ";cin>>opcion;

        switch (opcion) {

        case 0:
            cout<<"****gracias, fin del programa****"<<endl;
            break;
        case 1:
            cout<<"ingrese la cantidad que desea determinar"<<endl;
            cout<<"ingrese la cantidad: ";cin>>cantidad;
            valores(&cantidad,denominacion,cont);
            denominacion=20000;
            valores(&cantidad,denominacion,cont);
            denominacion=10000;
            valores(&cantidad,denominacion,cont);
            denominacion=5000;
            valores(&cantidad,denominacion,cont);
            denominacion=2000;
            valores(&cantidad,denominacion,cont);
            denominacion=1000;
            valores(&cantidad,denominacion,cont);
            denominacion=500;
            valores(&cantidad,denominacion,cont);
            denominacion=200;
            valores(&cantidad,denominacion,cont);
            denominacion=100;
            valores(&cantidad,denominacion,cont);
            denominacion=50;
            valores(&cantidad,denominacion,cont);
            cout<<"Faltante: "<<cantidad<<endl<<endl;
            break;
        }


    }while (opcion!=0);

#endif

#if CASE==5

    int tam=0;
    char s=' ',a='*';
    int tam_s=0,tam_a=0;
    cout<<"Ingrese el tamano de la figura que desea realizar.\n";

    do {
        cout<<"favor asignar numero impar: ";
        cin>>tam;
        if(tam%2==0)
        cout<<"no es numero impar.";
    } while (tam%2==0);
    cout<<endl;
    tam_a=1;
    tam_s=(tam-tam_a)/2;

    for (int i=1; i<=tam;i++ ) {

        if(i<=((tam-1)/2)){
            for (int a=0;a<tam_s ;a++ ) {
                cout<<s;
            }
            for (int b=0;b<tam_a ;b++ ) {
                cout<<a;
            }
            for (int a=0;a<tam_s ;a++ ) {
                cout<<s;
            }
            tam_s-=1;
            tam_a+=2;
        }
        else if (i==((tam+1)/2)) {
            for (int j=0;j<tam ;j++ ) {
                cout<<a;
            }
            tam_s=1;
            tam_a=tam-2;
        }
        else {
            for (int a=0;a<tam_s ;a++ ) {
                cout<<s;
            }
            for (int b=0;b<tam_a ;b++ ) {
                cout<<a;
            }
            for (int a=0;a<tam_s ;a++ ) {
                cout<<s;
            }

            tam_s+=1;
            tam_a-=2;

        }

        cout<<endl;
    }



#endif

#if CASE==15

int n,sum=1,aux=1;

cout<<"ingrese tamano de la matriz, dato ingresado impar: ";
cin>>n;

for (int i=1;i<=(n-1)/2 ;i++ ){
    for (int k=0;k<4 ;k++ ) {
        aux+=2*i;
        sum+=aux;
    }
}

cout<<"En una espiral de "<<n<<"x"<<n<<", la suma es: "<<sum<<endl;


#endif

#if CASE==4

//Decodificador de permisos en Linux

   string permit1 = "rw-r--r--";
   string permit2 = "rwxr-x--x";
   string allpermits = "rwxrwxrwx";

   std::cout << decodePermits(permit1) << std::endl;
   std::cout << decodePermits(permit2) << std::endl;
   std::cout << decodePermits(allpermits) << std::endl;



#endif

    return 0;
}
void valores (int *cantidad, int denominacion, int cont){

    cont=*cantidad/denominacion;
    *cantidad=*cantidad%denominacion;
    cout<<denominacion<<": "<<cont<<endl;
};



int decodePermits(const string& permits){
    int num=0,aux=0;
    int mul=100;
    for (int i=0;i<9 ;i+=3 ) {

        for (int k=0;k<3;k++) {

            switch (permits[i+k]) {

            case 'r':
                num+=4;
                break;
            case 'w':
                num+=2;
                break;
            case 'x':
                num+=1;
                break;
            case '-':

                break;

            }

        }
        num*=mul;
        aux+=num;
        mul/=10;
        num=0;
    }


    return aux;
}

//problema 2//
/*Se necesita un programa que permita determinar la mínima combinación de billetes y monedas
para una cantidad de dinero determinada. Los billetes en circulación son de
$50.000, $20.000, $10.000,$5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Haz un programa que entregue el número de billetes y monedas de cada denominación para
completar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede
lograrla cantidad deseada, el sistema deberá decir lo que resta para lograrla.*/

//problema 5
/*realizar programa que permita imprimir un patron en pantalla, el tamaño del
 * patron esta deteminado por un numerol impar asignado por el usuario*/

//problema 6
//Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
//se genera una espiral En el caso de esta espiral de 5x5, la suma de los números
//en la diagonal es 101. Escribe un programa que reciba un número impar n y calcula
//la suma de los números en la diagonal de una espiral de nxn.


