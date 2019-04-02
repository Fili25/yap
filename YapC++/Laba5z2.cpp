
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;
//функция расчета
void vivodListBox(int x, double y, ListBox^ L)
{
	L->Items->Add(x.ToString() + "\t" + y.ToString("F7"));
}
int Fact(int x)
{
	if (x == 0)
		return 1;
	return x * Fact(x - 1);
}
double Fun2(double x, double& my, double& vstr, ListBox^ L)
{
	L->Items->Clear();
	my=1;
	double my1;
	double n = 1;
	double e = 0.00005;
	int f;
	do {
		my1 = my;
		n=n*2;
		f = Fact(n);
		my = my + pow(x, n) / f;
		vivodListBox(n, my, L);
	} while (fabs(my - my1) >= e);

	vstr = (exp(x) + exp(-x)) / 2;
	return 0;
}




//функция ввода
