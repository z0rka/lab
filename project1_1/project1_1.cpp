#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(0, "rus");

    cout << "Первый пример ";

    double y = 0;
    double d = 0;
    double x = 2.72;

    
    cout << "Введите число y" << endl;
    cin >> y;

    cout << "Введите число d" << endl;
    cin >> d;


    double r = (pow(sin(y) , 2)+ 0.3 * d)/(pow(exp(x),y) + log(d));

    cout << "Результат: " << r << endl;


















    cout << "Второй  пример " << endl;


    double x_2 = 0;
    double y_2 = 0;

    

    cout << "Введите число y_2" << endl;
    cin >> y_2;

    cout << "Введите число x_2" << endl;
    cin >> x_2;

    double f = (sqrt(pow(2+y,2) + pow(sin(y+5),1/7))) /(log(x+1) - pow(y,3)) ;

    cout << "Результат: " << f << endl;
























    cout << "Третий пример " << endl;

    double x_3 = 0;

    cout << "Введите число x_3" << endl;
    cin >> x_3;
    
    double v = (pow(cos(pow(x, 2) + atan(sqrt(abs(x - 1.8)))), 5)) / pow(sin(pow((pow(x, 2) + 1.5), 5)), 2) + pow(pow(x,3.5),1/3);

    cout << "Результат: " << v << endl;















    cout << "Четвертый пример " << endl;


    double x_4 = 0;

    cout << "Введите число x_4" << endl;
    cin >> x_4;

    double y_4 = (log(x) + 2 * x) / (pow(x, 2) + 1) + ((x + 1) / (2 * pow(x, 2) + 1));

    cout << "Результат: " << y_4 << endl;






    cout << "Пятый  пример " << endl; 
     
    double p_5 = 0;
    double t_5 = 4.1;
    
    cout << "Введите число p_5" << endl;
    cin >> p_5;

    double k_5 = sqrt(p_5 + pow(t_5, 2));
    double x_5 = p_5 + k_5;

    double y_5 = pow(atan(pow(x_5, 2)),3);

    cout << "Результат: " << y_5 << endl;





    cout << "Шестой  пример " << endl;

    double a_6 = 0;
    double b_6 = 0;

    cout << "Введите число a" << endl;
    cin >> a_6;
    cout << "Введите число b" << endl;
    cin >> b_6;

    double  x_6 = ((12 - b_6) * a_6) / 2;

    cout << "Результат: " << x_6 << endl;

}




    