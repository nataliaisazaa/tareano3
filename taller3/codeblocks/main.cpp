#include <iostream>
#include <cmath>

using namespace std;

int main()
{
        float area,radio,diametro,longitud;
        const float PI=3.14;
        float base,altura,area2;
        int ts,hd,hdiurna,hnocturna,hdominicales,hfestivos,valorHDi, valorHNo,valorHDo,valorHFe;
        int n,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
        int valordolar,cantidaddedolares,total;

    cout<<"\t a-Area de un circulo"<<endl;
    cout << "ingrese el valor del radio de la circunferencia" << endl;
    cin>>radio;
    area=PI*pow(radio,2);
    diametro=2*PI;
    longitud=2*PI*radio;

    cout <<"Circunferencia con Radio ="<<radio<<endl;
    cout <<"Area de la circunferencia ="<<area<<endl;
    cout <<"Diametro de la circunferencia="<<diametro<<endl;
    cout <<"Longitud de la circunferencia="<<longitud<<"\n"<<endl;

    cout<<"\t b-Area de un triangulo"<<endl;
    cout<<"ingrese la base y despues la altura fde un triangulo"<<endl;
    cin>>base;
    cin>>altura;
    area2=base*altura/2;
    cout<<"Triangulo con base="<< base<<",altura="<< altura<<endl;
    cout<<"Area del triangulo="<< area2<<endl;
    cout<<"Grafica del triangulo=\n"<<endl;
    cout<<"\t\t\t    *\n\t\t\t   * *\n\t\t\t  * * *\n\t\t\t * * * *\n\t\t\t* * * * * "<<"\n"<<endl;

    cout <<"\t c-Salario de un empleado\n" << endl;
    cout<<"horas diurnas de trabajo"<<endl;
    cin>>hdiurna;
    cout<<"horas nocturnas de trabajo"<<endl;
    cin>>hnocturna;
    cout<<"horas dominicales de trabajo"<<endl;
    cin>>hdominicales;
    cout<<"horas festivos de trabajo"<<endl;
    cin>>hfestivos;

    hd=2500;
    valorHDi=(2500)*hdiurna;
    valorHNo=(2500+0,35)*hnocturna;
    valorHDo=(2500+0,5)*hdominicales;
    valorHFe=(2500+0,75)*hfestivos;
    ts=valorHDi+valorHNo+valorHDo+valorHFe;
    cout<<"Valor hora= "<<hd<<endl;
    cout<<"Valor horas diurnas= "<<valorHDi<<endl;
    cout<<"Valor horas nocturnas= "<<valorHNo<<endl;
    cout<<"Valor horas dominicales= "<<valorHDo<<endl;
    cout<<"Valor horas festivos= "<<valorHFe<<endl;
    cout<<"Total salario= $"<<ts<<"\n"<<endl;


    cout << "\t d-tabla de multiplicar" << endl;
    cout << "ingrese un numero" << endl;
    cin>>n;
    n1=n*1;
    n2=n*2;
    n3=n*3;
    n4=n*4;
    n5=n*5;
    n6=n*6;
    n7=n*7;
    n8=n*8;
    n9=n*9;
    n10=n*10;
    cout<<n<<"*1="<<n1<<"\n"<<n<<"*2="<<n2<<"\n"<<n<<"*3="<<n3<<endl;
    cout<<n<<"*4="<<n4<<"\n"<<n<<"*5="<<n5<<"\n"<<n<<"*6="<<n6<<endl;
    cout<<n<<"*7="<<n7<<"\n"<<n<<"*8="<<n8<<"\n"<<n<<"*9="<<n9<<"\n"<<n<<"*10="<<n10<<"\n"<<endl;

    cout<<"\t e-Dolares"<<endl;
    cout<<"ingrese valor del dolar"<<endl;
    cin>>valordolar;
    cout<<"ingrese cantidad de dolares"<<endl;
    cin>>cantidaddedolares;
    total=valordolar*cantidaddedolares;
    cout<<"el total de dinero en dolares es de "<< total<<endl;
    return 0;
}
