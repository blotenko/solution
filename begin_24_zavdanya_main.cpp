#include <string>
#include <iostream>
#include <cmath>
using namespace std;
/*
 Даны переменные A, B, C. Изменить
 их значения, переместив содер-
 жимое A в C, C — в B, B — в A,
 и вывести новые значения переменных A,B,C.
 */
int main() {
    float A,B,C;
    cout<<"Введите число А : ";
    cin>>A;
    cout<<"Введите число B : ";
    cin>>B;
    cout<<"Введите число C : ";
    cin>>C;
    cout<<"Ваши числа до обработки : "<<A<<" "<<B<<" "<<C<<endl;
    int tmp = C;
    C = A;
    A = B;
    int tmp1 = B;
    B = C;
    B = tmp;
    
    
    cout<<"Ваши числа после обработки : "<<A<<" "<<B<<" "<<C<<endl;

    
    return 0;
}
