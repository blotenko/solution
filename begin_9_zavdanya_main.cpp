#include <string>
#include <iostream>
#include <cmath>
using namespace std;

/*Даны  два неотрицательных числа a и b.
Найти их среднее геометрическое,
то есть квадратный корень из этих произвидений*/


int main() {
    float a,b;
    cout<<"Введите два неотрицательных числа"<<endl;
    cin>>a>>b;
    if(a < 0 || b < 0){
        cout<<"Пожалуйста введите неотрицательные числа"<<endl;
    }
    else{
    float geomAvarage = sqrt(a*b);
    cout<<"Среднее геометрическое этих двух чисел это : "<<geomAvarage<<endl;
    }
    
    
return 0;
}

