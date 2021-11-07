#ifndef __DOUBLEDATA_H__
#define __DOUBLEDATA_H__

#include "BaseData.h"
#include "IntData.h"

class DoubleData : public BaseData {
private:
	double m_data;
public:
	DoubleData(double data = 0);
	~DoubleData();
	void print();
	void ConsoleEnterData();
	void SetData(double data);
	void SetData(IntData data);
	double GetData();
};

#endif
