#include "DoubleData.h"
#include "IntData.h"
#include "iostream"
#include "stdio.h"

DoubleData::DoubleData(double data)
{
	m_data = data;
}

DoubleData::~DoubleData()
{
}

void DoubleData::print()
{
	printf("%lf\n", m_data);
}

void DoubleData::ConsoleEnterData()
{
	printf("Enter Data: ");
	scanf("%lf", &m_data);
}

void DoubleData::SetData(double data)
{
	m_data = data;
}

void DoubleData::SetData(IntData data)
{
	m_data = data.GetData();
}

double DoubleData::GetData()
{
	return m_data;
}
