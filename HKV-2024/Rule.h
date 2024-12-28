#pragma once
#define GRB_ERROR_SERIES 600
#include"Greibach.h"
#include"MFST.h"
namespace GRB {
#define NS(n) Rule::Chain::N(n)
#define	TS(n) Rule::Chain::T(n)
	Greibach greibach(NS('S'), TS('$'),
		15,
		Rule(NS('Z'), GRB_ERROR_SERIES + 1,			//�������� ��������� ������� 1
			2,
			Rule::Chain(5, TS('f'), TS('i'), TS('('), NS('G'), TS(')')),
			Rule::Chain(4, TS('f'), TS('i'), TS('('), TS(')'))
		),
		Rule(NS('S'), GRB_ERROR_SERIES + 0,			//�������� ��������� ��������� 1
			5,
			Rule::Chain(7, TS('t'), NS('Z'), TS('['), NS('N'), TS(']'), TS(';'), NS('S')),
			Rule::Chain(6, TS('t'), NS('Z'), TS('['), NS('N'), TS(']'), NS('S')),
			Rule::Chain(4, TS('m'), TS('['), NS('N'), TS(']')),
			Rule::Chain(3, TS('t'), NS('Z'), NS('S')),
			Rule::Chain(4, TS('e'), TS('t'), NS('Z'), NS('S'))

		),
		Rule(NS('G'), GRB_ERROR_SERIES + 2,		//������ � ���������� ������� 1
			6,
			Rule::Chain(1, TS('i')),
			Rule::Chain(1, TS('l')),
			Rule::Chain(2, TS('t'), TS('i')),
			Rule::Chain(4, TS('t'), TS('i'), TS(','), NS('G')),
			Rule::Chain(3, TS('i'), TS(','), NS('G')),
			Rule::Chain(3, TS('l'), TS(','), NS('G'))
		),

		Rule(NS('V'), GRB_ERROR_SERIES + 3,		//������ � �������������� �������� 1
			4,
			Rule::Chain(1, TS('+')),
			Rule::Chain(1, TS('-')),
			Rule::Chain(1, TS('*')),
			Rule::Chain(1, TS('/'))
		),
		Rule(NS('O'), GRB_ERROR_SERIES + 4,			//���������� �������� 1
			8,
			Rule::Chain(1, TS('|')),
			Rule::Chain(1, TS('&')),
			Rule::Chain(1, TS('!')),
			Rule::Chain(1, TS('%')),
			Rule::Chain(1, TS('>')),
			Rule::Chain(1, TS('<')),
			Rule::Chain(1, TS('}')),
			Rule::Chain(1, TS('{'))
		),
		Rule(NS('Q'), GRB_ERROR_SERIES + 5,			//������ � ���������� ������� ����������� ���������� 1
			2,
			Rule::Chain(3, TS('('), NS('M'), TS(')')),
			Rule::Chain(5, TS('('), NS('M'), TS(')'), NS('V'), NS('E'))
		),
		Rule(NS('L'), GRB_ERROR_SERIES + 6, //������ � ������ ����������� ������� 1
			3,
			Rule::Chain(2, TS('R'), NS('Q')),
			Rule::Chain(2, TS('S'), NS('Q')),
			Rule::Chain(2, TS('U'), NS('Q'))
		),

		Rule(NS('D'), GRB_ERROR_SERIES + 7,			//������������� ���������� 1
			1,
			Rule::Chain(2, TS('t'), NS('W'))
		),
		Rule(NS('W'), GRB_ERROR_SERIES + 8,			//���������� �������� 1
			5,
			Rule::Chain(3, TS('i'), TS('='), NS('M')),
			Rule::Chain(3, TS('i'), TS('='), NS('E')),
			Rule::Chain(3, TS('i'), TS('='), NS('L')),
			Rule::Chain(5, TS('i'), TS('='), NS('E'), NS('V'), NS('E')),
			Rule::Chain(4, TS('i'), TS('='), TS('n'), NS('M'))
		),

		Rule(NS('E'), GRB_ERROR_SERIES + 9,		//������ � ��������� 1
			17,
			Rule::Chain(1, TS('i')),
			Rule::Chain(1, TS('l')),
			Rule::Chain(3, TS('i'), NS('V'), NS('E')),
			Rule::Chain(2, TS('l'), NS('V')),
			Rule::Chain(3, TS('l'), NS('V'), NS('E')),
			Rule::Chain(3, TS('i'), NS('O'), NS('E')),
			Rule::Chain(3, TS('l'), NS('O'), NS('E')),
			Rule::Chain(2, NS('S'), NS('Q')),
			Rule::Chain(2, NS('U'), NS('Q')),
			Rule::Chain(2, NS('R'), NS('Q')),
			Rule::Chain(2, NS('V'), NS('E')),
			Rule::Chain(4, TS('i'), TS('('), NS('G'), TS(')')),
			Rule::Chain(6, TS('i'), TS('('), NS('G'), TS(')'), NS('V'), NS('E')),
			Rule::Chain(3, TS('i'), TS('('), TS(')')),
			Rule::Chain(5, TS('i'), TS('('), TS(')'), NS('V'), NS('E')),
			Rule::Chain(3, TS('('), NS('E'), TS(')')),
			Rule::Chain(5, TS('('), NS('E'), TS(')'), NS('V'), NS('E'))
		),

		Rule(NS('M'), GRB_ERROR_SERIES + 10,			//��������� ������������� ��� ������� 1
			2,
			Rule::Chain(1, TS('l')),
			Rule::Chain(1, TS('i'))

		),

		Rule(NS('K'), GRB_ERROR_SERIES + 11,//������ � ��������� ��������� ��������� 1
			3,
			Rule::Chain(5, TS(':'), NS('E'), TS('$'), NS('A'), TS('$')),
			Rule::Chain(4, TS(':'), NS('E'), TS('$'), TS('$')),
			Rule::Chain(5, TS(':'), NS('E'), TS('$'), TS('$'), NS('N'))
		),
		Rule(NS('A'), GRB_ERROR_SERIES + 12,			//������ ���������� ��������� ��������� 1
			3,
			Rule::Chain(3, TS('c'), TS(':'), NS('Y')),
			Rule::Chain(3, TS('w'), TS(':'), NS('Y')),
			Rule::Chain(2, TS('v'), NS('Y'))
		),
		Rule(NS('Y'), GRB_ERROR_SERIES + 13,	//������ ���� ���������/����� 1
			2,
			Rule::Chain(4, TS('['), NS('N'), TS(']'), NS('A')),
			Rule::Chain(3, TS('['), NS('N'), TS(']'))
		),

		Rule(NS('N'), GRB_ERROR_SERIES + 14,		//������ � ���������� ���������� 1
			12,
			Rule::Chain(4, TS('n'), TS('t'), TS('i'), TS(';')),
			Rule::Chain(5, TS('n'), TS('t'), TS('i'), TS(';'), NS('N')),
			Rule::Chain(4, TS('n'), NS('D'), TS(';'), NS('N')),
			Rule::Chain(3, TS('n'), NS('D'), TS(';')),
			Rule::Chain(5, TS('i'), TS('='), NS('E'), TS(';'), NS('N')),
			Rule::Chain(4, TS('i'), TS('='), NS('E'), TS(';')),
			Rule::Chain(3, TS('p'), NS('E'), TS(';')),
			Rule::Chain(4, TS('p'), NS('E'), TS(';'), NS('N')),
			Rule::Chain(3, TS('?'), NS('K'), NS('N')),
			Rule::Chain(2, TS('?'), NS('K')),
			Rule::Chain(3, TS('r'), NS('M'), TS(';')),
			Rule::Chain(4, NS('N'), TS(';'), TS('r'), NS('i'))
		)
	);

}