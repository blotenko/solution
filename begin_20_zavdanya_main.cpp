#include <string>
#include <iostream>
#include <cmath>
using namespace std;
/*
Найти растояние между двумя точками с задаными координатами
 (x1;y1), (x2;y2) на плоскости.
 Растояние вычисляется по формуле sqrt(pow((x2-x1),2)+pow((y2-y1),2))
 */
int main() {
    float x1,x2,y1,y2;
    
    cout<<"Введите координаты первой точки : "<<endl;
    cout<<"x1 = ";
    cin>>x1;
    cout<<"y1 = ";
    cin>>y1;

    cout<<"Введите координаты второй точки : "<<endl;
    cout<<"x2 = ";
    cin>>x2;
    cout<<"y2 = ";
    cin>>y2;
    
    float distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"Расстояние между двумя точками равно : "<<distance<<endl;
    return 0;
}

