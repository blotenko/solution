#include <string>
#include <iostream>
#include <cmath>
using namespace std;
/*
Дано  значение угла а в градусах (0<a<360).
 Определить значения этого угла в радианах,
 учитывая, что 180 - п радианов. В качестве
 значения п использовать 3.14 .
 */
int main() {
    float a;
    cout<<"Введите значение угла в градусах : ";
    cin>>a;
    float radian = (a*3.14)/180;
    cout<<"Ваш угол в радианах : "<<radian<<endl;
    
    
    
    return 0;
}
