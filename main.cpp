#include <iostream>
#include "LandOwnerv2.h"

using namespace std;


int main()
{
    LandOwnerv2 *dizhu = new LandOwnerv2("test");
    dizhu->Setcards(&cards[0][3]);
    dizhu->Setcards(&cards[3][2]);
    dizhu->Show();
    return 0;
}









/*
using namespace std;

double Addition(double num1, double num2)
{
    return num1 + num2;
}
double Subtraction(double num1, double num2)
{
    return num1 - num2;
}
double Multiplication(double num1, double num2)
{
    return num1 * num2;
}
double Division(double num1, double num2)
{
    if(num2 == 0)
    {
        cerr << "��ĸ��ӦΪ��" << endl;
        return 0;
    }
    else
        return num1 / num2;
}
void Print(double (*pCalc)(double, double), double num1, double num2)
{

    cout << pCalc(num1, num2) << endl;
}

int main()
{
    double (*pCalc)(double, double);
    double num1, num2;
    cout << "����������:";
    cin >> num1 >> num2;
    cout << "ѡ�����(+,-,*,/):";
    char op;
    cin >> op;
    switch(op)
    {
        case '+':
            pCalc = Addition;
            break;
        case '-':
            pCalc = Subtraction;
            break;
        case '*':
            pCalc = Multiplication;
            break;
        case '/':
            pCalc = Division;
            break;
        default:
            break;
    }
    Print(pCalc, num1, num2);

    return 0;
}
*/
