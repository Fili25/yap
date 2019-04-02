
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;
//функция расчета
double Fun1(double x, double y)
{
	double c=pow(x,y)/(1-(1/exp(-x*sin(y))));
	return c;
}
//функция ввода
double Vvod(TextBox^ x)
{
	return Convert::ToDouble(x->Text);
}
//функция вывода
void Vivod(double^ x, TextBox^ t)
{
	t->Text = x->ToString("0.####");
}