/*****************************************************************
* Դ�� <<C++ Primer Plus>> ��������ϰ��4 
* ������Ͷ�ʷ�ʽ��
*    ��������Ϣ10%
*    ��������Ϣ5%
* ������������Ͷ�ʷ�ʽҪ���ڵ�����Ͷ�ʷ�ʽ����չʾ���ߵ�Ͷ������
* 
* workfile: cal_bank_intrest.cpp
*
* ���Ի�����vs2013
* 
* ���ߣ�wangkai
******************************************************************/
#include <iostream>
#include <cstdio>

const double single_intst    = 0.1;   // ������Ϣ
const double compound_intst = 0.05;   // ������Ϣ
const double capital = 100; // ���� $100

int main()
{
	int years = 0;
	double single_inst_total = capital;   // �����ܶ�
	double compound_inst_total = capital; // �����ܶ�

	while (1)
	{	
		years++;

		single_inst_total += capital * single_intst;
		compound_inst_total += compound_inst_total * compound_intst;

		if (compound_inst_total >= single_inst_total)
		{
			printf("After %d years, compound inst is larger than single inst!\n", years);
			printf("single_inst_total = %lf\n", single_inst_total);
			printf("compound_inst_total = %lf\n", compound_inst_total);
			break;
		}
	}

	return 0;
}


