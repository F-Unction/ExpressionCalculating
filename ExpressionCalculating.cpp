// ExpressionCalculating.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdio.h"
#include "main.h"
#include <iostream>


string qu(string x)
{
	return "\"" + string(x) + "\" ";
}
#define q(x) qu(#x)

int main()
{
	int a; char c; float f;
	scanf_s("%d %c %f", &a, &c, &f);


loop:cout << "Please input a expression" << endl \
	<< "(input \"help\" to get help,input\"exit\" to exit):" << endl;
	string exp;
	getline(cin,exp);

	if (exp == "exit")goto endLab;
	if (exp == "help")goto helpLab;

	double result;
	if(expCalculate(exp, result))
		cout << "The result:" << result << endl << endl;
	else cout << "Sorry , your expression is wrong." << endl << endl;

	goto loop;

helpLab:cout << "It has supported operators:" << q(+) + q(-) + q(*) + q(/ ) + q(^) + q(%) + qu("(") + qu(")") << endl;
	cout << "   functions:" << q(sin) + q(cos) + q(tan) + q(arcsin) + q(arccos) + q(arctan) + \
		q(lg) + q(ln) + q(log) + q(abs) + q(int) + q(sqrt) + q(rand) << endl;
	cout << "   numbers:" << q(PI) << q(E) << endl << endl;
	goto loop;

	endLab : return 0;
}
