#include <string>
#include <iostream>
#include <cmath>
using namespace std;
/*
 Даны три точки A,B,C на числовой оси.
 Точка С расположена между точками A и B.
 Найти произвидение длин отрезков AC и BC.
 */
int main() {
    float a;
    float b;
    float c;
    cout<<"Введите кординаты точки a на числовой прямой : "<<endl;
    cin>>a;
    
    cout<<"Введите кординаты точки b на числовой прямой : "<<endl;
    cin>>b;
    
    cout<<"Введите кординаты точки c на числовой прямой : "<<endl;
    cin>>c;
    
    float first = c - a;
    float second = b - c;
    
    cout<<"Отрезок АС = "<<first<<endl;
    cout<<"Отрезок BС = "<<second<<endl;
    float multiplication = first * second;
    cout<<"Произвидение длин отрезков AC и BС = "<<multiplication<<endl;

    return 0;
}


