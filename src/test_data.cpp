#include "IntData.h"
#include "DoubleData.h"
#include "iostream"
using namespace std;

int main()
{
	IntData idata = IntData(0);
	int data =0;
	cout <<"Enter idata: ";
	cin >> data;
	idata.SetData(data);
	idata.print();
	DoubleData ddata = DoubleData(0);
	ddata.ConsoleEnterData();
	ddata.print();

	auto a1 = new IntData[3]{ IntData(1),IntData(2) ,IntData(3) };
	auto a2 = new DoubleData[3]{ DoubleData(3),DoubleData(2) ,DoubleData(1) };


	for (int i = 0; i < 3; i++)
	{
		a1[i].print();
		a2[i].SetData(a1[i]);
		a2[i].print();
	}

	system("pause");
	return 0;
}
