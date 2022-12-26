/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void menu();
int main()
{
  
    //cria calculadora somar,multiplicar,subtrair,divisivel
    
   // cout <<"digite 1 para somar,2 para subtrair,3 para multiplicar, e 4 para dividir : "<<endl;
    
    menu();
    int opt;
    cin>>opt;
    cout<<"informe o primeiro numero: ";
    
    int a;
    int b;
    
    cin>> a;
    
    cout<<"informe o segundo numero: ";
    
    cin>> b;
   
    if(opt == 1){
        
    cout<< " resultado da soma e = "<<a+b<<endl;
    }
    
    if(opt == 2){
        cout<<"o resultado da subtracao e = "<< a-b<<endl;
        
    }
    if(opt == 3){
        cout<<"o resultado da multiplicacao e = "<<a*b<<endl;
    }
    
    if(opt == 4){
        cout<<" o resultado da divisao e = "<<a/b<<endl;
    }
    
        return 0;
}

    void menu(){
        cout<<"++++++++++++++++++++++++"<<endl;
        cout <<"informe : "<<endl;
        
        cout<<"1 para somar"<<endl<<"2 para subtrair "<<endl<< "3 para multiplicar"<<endl<<"4 para dividir "<<endl;
        cout<<"++++++++++++++++++++++++"<<endl;
        
    }

