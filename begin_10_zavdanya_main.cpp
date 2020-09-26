#include <string>
#include <iostream>
#include <cmath>
using namespace std;
/*
 Даны два ненулевых числа. Найти сумму, разность, произвидение и частное их квадратов.
 */
int main() {
    float a;
    float b;
    cout<<"Введите два ненулевых числа : "<<endl;
    cin>>a>>b;
    float x = pow(a,2);
    float y = pow(b,2);
    float sum = x + y;
    float difference = x - y;
    float  multiplication = x * y;
    float  division = x / y;
    if(a == 0 || b == 0){
        cout<<"Введите ненулевые числа"<<endl;
    }
    else{
        cout<<"Сумма их квадратов будет равна : "<<sum<<endl;
        cout<<"Разность их квадратов будет равна : "<<difference<<endl;
        cout<<"Произвидение их квадратов будет равна : "<<multiplication<<endl;
        cout<<"Частное их квадратов будет равна : "<<division<<endl;

    }
    
    return 0;
}


