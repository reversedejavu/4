// Задача №4 Программа для определения площади пятиугольника
//#include<iostream>
//#include<cmath>

//int main(){
//    float a,b,c,d,e,f,g,s, s1,s2,s3, p1,p2,p3;
//    p1=(a+b+f)/2;
//    p2=(f+g+c)/2;
//    p3=(e+f+d)/2;
//    s1=sqrt(p1*(p1-e)*(p1-b)*(p1-g));
//    s2=sqrt(p2*(p2-f)*(p2-g)*(p2-c));
//    s3=sqrt(p3*(p3-e)*(p3-d)*(p3-d));
//    s=s1+s2+s3;

//    return 0;
//}



//Задача №3 Задан треугольник ABC с длиннами своих сторон a,b,c. Найти его медианы для стороны a= 1/2 sqrt (2+b^2+c^2-a^2)
//#include<iostream>
//#include<cmath>

//int main(){
//    float a,b,c,m;
//    std::cin >> a >> b >> c;
//    m=sqrt(2*(b*b+c*c)-a*a)/2;

//    return 0;
//}

//Задача №1 Реализовать с помощью функции вычисления y=b-a/2 + b^2+1/a
#include<iostream>
#include<cmath>
using namespace std;

double function(double a, double b) { // функция для вычисления значения y
    return b - a / 2 + pow(b, 2) + 1 / a;
}


int main() {
    double a, b; // входные данные

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    double y = function(a, b); // вызов функции для вычисления значения y

    cout << "y = " << y << endl; // вывод результата

    return 0;

}

