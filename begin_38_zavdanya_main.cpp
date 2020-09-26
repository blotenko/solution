#include <string>
#include <iostream>
#include <cmath>
using namespace std;
/*
 Решить линейное уравнение A·x + B = 0, заданное своими коэффици-
 ентами A и B (коэффициент A не равен 0).
 */
int main() {
    float A,B,x;
    cout<<"Введите коэффициет А для решения уравнения A·x + B = 0 : ";
    cin>>A;
    cout<<"Введите коэффициет B для решения уравнения A·x + B = 0 : ";
    cin>>B;
    if( A!=0){
        x=-B/A;
        cout<<"x будет равен : "<<x<<endl;
    }
    else
        cout<<"Коэффициент А не может равняться 0"<<endl;
    return 0;
}
