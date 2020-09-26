#include <string>
#include <iostream>
#include <cmath>
using namespace std;
/*
 Даны координаты двух противоположных вершин прямоугольника :
 (x1;y1), (x2;y2). Стороны прямоугольника параллельны осям координат.
 Найти периметр и площадь  данного прямоугольника.
 */
int main() {
    int x1,x2,y1,y2;
    cout<<"Введите координаты первой вершины : "<<endl;
    cout<<"x1 = ";
    cin>>x1;
    cout<<"y1 = ";
    cin>>y1;
    
    cout<<"Введите координаты второй вершины : "<<endl;
    cout<<"x2 = ";
    cin>>x2;
    cout<<"y2 = ";
    cin>>y2;
    
    int height = sqrt(pow((y2-y1),2));
    int weidth = sqrt(pow((x2-x1),2));
    cout<<"Высота прямоуголника равна : "<<height<<endl;
    cout<<"Ширина прямоуголника равна : "<<weidth<<endl;
    
    int perimetr = (height+weidth)*2;
    int area = height*weidth;
    cout<<"Периметр прямоугольника равен : "<<perimetr<<endl;
    cout<<"Площадь прямоугольника равна : "<<area<<endl;
    
    return 0;
}


