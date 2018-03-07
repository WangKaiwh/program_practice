/*****************************************************************
* 源自 <<C++ Primer Plus>> 第五章练习题4 
* 有两种投资方式：
*    单利：利息10%
*    复利：利息5%
* 求多少年后复利的投资方式要优于单利的投资方式，并展示两者的投资收益
* 
* workfile: cal_bank_intrest.cpp
*
* 测试环境：vs2013
* 
* 作者：wangkai
******************************************************************/
#include <iostream>
#include <cstdio>

const double single_intst    = 0.1;   // 单利利息
const double compound_intst = 0.05;   // 复利利息
const double capital = 100; // 本金 $100

int main()
{
	int years = 0;
	double single_inst_total = capital;   // 单利总额
	double compound_inst_total = capital; // 复利总额

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


