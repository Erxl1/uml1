#include "IntData.h"
#include "DoubleData.h"

IntData::IntData(int data)
{
	m_data = data;
}

IntData::~IntData()
{
}

void IntData::print()
{
	printf("%d\n", m_data);
}

void IntData::SetData(int data)
{
	m_data = data;
}

int IntData::GetData()
{
	return m_data;
}
