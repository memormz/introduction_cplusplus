//Introduccion a C++
/*
    asdfsdf
*/
#include <iostream>
#include <string> //Para utilizar tipo de dato string
//#include <sstream> //PAra utilizar stringstream
using namespace std;

//FUNCIONES 
//Conjunto de instrucciones que puede ser llamada cuando quieras
// tipo_dato nombre (parametros) {  instrucciones }

float div(float &a, float &b) {
    a = 1;
    cout << "Valor de a en func: " << a << endl;
    return a/b;
}

int main() 
{

    float a = 3, b = 5;
    auto c = div(a, b);
    cout <<  a << endl;
    cout <<"Suma:" << c << endl;

    //Tipos de datos primitivos para crear variables
    /*
        int -> entero
        char -> caracter
        bool -> dos valores: true y false
        float -> números con punto decimal
        double -> números con + puntos decimales
        wchar_t -> almacena cadena largas

        Nombre lleva carecteres alfanumericos e '_' pero no puede empezar con números.

        tipo_dato nombre; -> declarar
        tipo_dato nombre = valor -> declarar e inicializar
    
    int a = 3.3;
    float c = 3.1;
    cout << a << endl;
    cout << c << endl;
    */
   /*
        STRING
        string -> tipo de dato compuesto, almacena frases
        tipo nombre1 = "valor";
        tipo nombre2 = nombre1
   
    string str = "Hola mundo";
    cout << str << endl;
    */
   /* NUEVOS TIPOS DE DATOS de C++
   //auto nombre = valor;
   auto variable = 1.1; //Agregado en C++ - 11   
    //decltype(variable ya creada) nombre; Sólo da el mismo tipo de dato, no el valor
    decltype(variable) aux; //C++ - 14
    aux = variable;
    cout << aux << endl;
    */
   /*
        OPERADORES
        Simbolos utilizados para realizar acciones
        ARTIMETICOS
        suma +, resta -, mult *, div /, modulo (residuo de una división entera) %
        COMPUESTOS
        +=, -=, *=, /= son equivelantes a 
            int x = 3;
            x = x + 3 [es igual a] x += 3;
        INCREMENTO
        variable++ (regresa y aumenta el valor), variable-- y ++variable (aumenta y luego regresa), --variable                
   

  int a = 0;
  int r;
  r = a++;
  cout << "valor de a: " << a << endl;
  cout << "valor de r: " << r << endl;

  COMPARACION
  == igual, != diferente, > mayor que, < menor que, >= mayor igual que, <= menor igual que

    
   int a = 3;
   bool b = 3 == a;
    cout << b << endl;
    
    LOGICOS
    ! -> negacion, && and, || or
    
    
   int a = 3;
   bool b = (3 == a || a <= 0);
    cout << b << endl;

    JERARQUIA
    ()
    incremento ++, --
    artimeticos 1. *,/,% 2.+,-
    comparacion >=
    asignacion *=
    */

   /*
    ENTRADA/SALIDA BASICA
        cout -> imprime en pantalla y ocupa '<<' operado de inserción. Salida estandar
        ej.
        cout << inserción básica << inserción básica << endl;
        cout << variable1 << "texto" << variable2 << "texto" << endl;

        Entrada estandar
        cin -> obtiene caracteres de una entrada (teclado) usa operador de extracción
        ej.
        int a;
        cin >> a;

        cerr -> para imprimir errores, funciona igual que cout;

        getline(cin, string) -> para strings, porque lee entrada hasta que des un enter

        StringStream -> pero ocupas #include <sstream>, convierte un string a un tipo de dato primitivo automaticamente
   
    string a;
    float price;
    cout << "valor: "<< endl;
    getline(cin, a);
    stringstream(a) >> price;
    cout << price << endl;
    */
    /*
    long int a = 0; //extiende la capacidad máxima del entero
    short int a = 0; //disminuye
    unsigned int a = 0; //sin signo valores >= 0 
    */
   //CASTEO EXPLICITO
//    int a = 3;
//    float d = (float) a / 7.0;
//     cout << d << endl;

    // string a;
    // float price;
    // cout << "valor: "<< endl;
    // getline(cin, a);
    // /*
    //     stoi() -> string to int
    //     stof() -> string to float
    //     stod() -> string top double
    //     stold() -> string to long double
    // */
    // price = stof(a);
    // cout << price << endl;

    //ESTRUCTURAS DE CONTROL -> CONTROL FLOW STATEMENTS
    //IF
    /* PD: La condicion tiene que regresar true para que se cumpla
        if (condicion) {
            lo que va a hacer
        }

        En caso de especificar la accion a realizar si es falso, se usa else
        if (cond) {} else {}

        Se pueden multiples if-else-if
        if () {} else if () {} else if () {} else {}

        Si es una sola linea, no es necesario las llaves
    */

    // int a;
    // cin >> a;
    // if (a % 2 == 1) { 
    //     cout << "Impar" << endl;
    // }    
    // else if (a == 0) {
    //     cout << "Cero" << endl;
    // }
    // else {
    //     cout << "Par" << endl;
    // }
    //Manera de cool de un if con operador tenario ? -> expresion ? si es true : si esfalse;
    // a = 2 -> 0000001[0] & 1 -> compara con 1
    //(a & 1) ? cout << "Impar" << endl : cout << "Par" << endl;

    /*
        switch (expresion o varible) {
            case expefico:
                instruccion;
            break;
            case expefico 2:
                intruccion;
            brea;
            default:
                intruccion;
            break;
        }
    */
//    char a;
//    cin >> a;

//    switch (a)
//    {
//         case 'a':
//             cout << "digitaste a" << endl;
//         break;
//         case 'b': 
//             cout << "digitastes b" << endl;
//         break;
//         default:
//             cout << "no es a ni b" << endl;
//         break;
//    }

    //CICLO FOR
    /*
        for (inicializacion; condicion; incremento) {
            intruccion
        }

        for (tipo de variable/auto nombre : variable de tipo compuesto) {
            instruccion
        }
    */
//    for (int i = 0; i < 10; i +=2)
//         cout << i << endl;
    
    // string str = "Hola mundo";
    // int a[] = {1, 2, 3, 4 };
    // for (auto c : a)
    //     cout << c << endl;
    
    //WHILE
    /*
        Se repite mientras la condición sea verdadera
        while (condicion) {
            intrucciones
        }
    */
//    float a = 2; 
//    while (a > 0.01)
//    {
//        a -= 0.01;
//    }
   
//    cout << a << endl;

    //DO-WHILE
    /*
        do {
            intruccion
        } while (condicion);
    */


    return 0;
}