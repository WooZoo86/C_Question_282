#include "stdafx.h"
#include <stdlib.h>
#include <time.h>


#define	max(a,b)	(a)>=(b)?(a):(b)
#define	min(a,b)	(a)>=(b)?(b):(a)

#define	MYPRINTFLN(fmt,...)	{printf("[%s]",__func__);printf(fmt,__VA_ARGS__);printf("\n");}

//======================================chapter 1=======================================
/*	first c program	*/
void Question_001()
{
	MYPRINTFLN("Hello World!");
}

/*	a complete c program
	calculate 10+20 and print the result.
*/
void Question_002()
{
	int a = 20;
	int b = 10;

	MYPRINTFLN("%d + %d = %d", a, b, a + b);
}

/*print well-known saying*/
void Question_003()
{
	MYPRINTFLN("贵有恒，何必三更起五更睡；最无益，只怕一日曝，十日寒；");
}

/*open a txt-file with TC2.0*/
void Question_004()
{
	MYPRINTFLN("ignore this question.")
}

/*caculate square perimeter*/
void Question_005()
{
	int border_len = 4;

	MYPRINTFLN("%d * %d = %d", 4, border_len, border_len * 4);
}

//======================================chapter 2=======================================
/*print a square with '*' */
void Question_006()
{
	MYPRINTFLN("");

	size_t border_len = 10;
	for (size_t i = 0; i < border_len; i++)
	{
		for (size_t j = 0; j < border_len; j++)
		{
			if (0 == i || (border_len - 1) == i || 0 == j || (border_len - 1) == j)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}

		printf("\n");
	}
}

/*print a triangle with '*' */
void Question_007()
{
	MYPRINTFLN("");

	size_t border_len = 6;

	for (size_t i = 0; i < border_len; i++)
	{
		for (size_t j = 0; j < 2 * border_len - 1; j++)
		{
			if ((border_len - 1) == i || (border_len - 1 - i) == j || (border_len - 1 + i) == j)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}

		printf("\n");
	}
}

/*caculate two integer sum*/
void Question_008()
{
	int a = 123;
	int b = 789;

	MYPRINTFLN("%d + %d = %d", a, b, a + b);
}

/*caculate 10!*/
void Question_009()
{
	size_t end = 10;
	unsigned long value = 1;

	for (size_t i = 1; i <= end; i++)
	{
		value *= i;
	}

	MYPRINTFLN("%d! = %lu", end, value);
}

/*order three integer in ascending*/
void Question_010()
{
	srand(time(NULL));
	
	int md = 100000;
	int a = rand() % md;
	int b = rand() % md;
	int c = rand() % md;

	//1
	int max_temp = max(max(a, b), c);
	int min_temp = min(min(a, b), c);
	
	MYPRINTFLN("md = %d,%d,%d,%d-->%d > %d > %d", md, a, b, c, max_temp,
		(a == max_temp) ? ((b == min_temp) ? c : b) : ((a == min_temp) ? (b == max_temp ? c : b) : a),
		min_temp);

	//2
	int temp = 0;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}

	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}

	printf("-->%d < %d < %d\n", a, b, c);
}

/*monkey eat peach*/
void Question_011()
{
	int days = 10;
	int sum = 1;

	for (int i = 0; i < days - 1; i++)
	{
		sum = (sum + 1) * 2;
	}

	MYPRINTFLN("total is %d", sum);
}

/*yangyang buy apple*/
void Question_012()
{
	int day = 1;
	int count = 2;
	int sum = 2;
	float average = 0.0f;

	do
	{
		sum += (count*=2);
		day++;

	} while (sum <= 100);

	average = (float)sum * 0.8 / day;
	MYPRINTFLN("day=%d,average=%.6f", day, average);
}