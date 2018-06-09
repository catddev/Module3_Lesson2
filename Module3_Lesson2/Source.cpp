#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <conio.h>

void main()
{

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		int a, b;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;
		printf("a=%d\t b=%d\n\n", a, b);

		if ((pow(a, 2) - pow(b, 2)) > fabs(pow((a - b), 2)))
			printf("Разность квадратов двух чисел больше модуля квадрата их разности\n\n");
		else
			printf("бла-бла меньше или равны\n\n");
		break;
	}
	case 2:
	{
		int p, m;
		printf("parallel from -90 to 90:\t");
		scanf("%d", &p);
		printf("meridian from -180 to 180:\t");
		scanf("%d", &m);

		if (m > 0)
			printf("\neast\n");
		else if (m < 0)
			printf("\nwest\n");
		if (p > 0)
			printf("\nnorth\n");
		else if (p < 0)
			printf("\nsouth\n\n");
	}
	break;
	case 3:
	{
		int s, t, wd;
		s = 100;
		printf("enter call time and a weekday:\t");
		scanf("%d %d", &t, &wd);
		switch (wd)
		{
		case 6:
		case 7:
			printf("\nprice: %d\n", s = s*t*0.8);
			break;
		default:
			printf("\nprice: %d\n", s = s*t);
		}
	}
	break;
	case 4:
	{
		int s;
		printf("enter the price:\t");
		scanf("%d", &s);
		if (s > 500 && s < 1000)
			printf("total: %d\n", s = s*0.95);
		else if (s > 1000)
			printf("total: %d\n", s = s * 0.9);
		else if (s < 500)
			printf("no discount\n\n");
	}
	break;
	case 5:
	{
		int m = 1 + rand() % 20;
		printf("%d\n\n", m);
		switch (m)
		{
		case 1:
		case 12:
		case 2:
			printf("winter\n\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("spring\n\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("summer\n\n");
			break;
		case 9:
		case 10:
		case 11:
			printf("autumn\n\n");
			break;
		default:
			SetConsoleTextAttribute(hConsole, 4);
			printf("error: there is no such month\n\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
	}
	break;
	case 6:
	{
		int a, b, c;
		printf("enter three numbers:\n");
		scanf("%d %d %d", &a, &b, &c);
		if (a == b || b == c || a == c)
			printf("at least one pare of equal numbers\n\n");
		else
			printf("no equal numbers\n\n");
	}
	break;
	case 7:
	{
		int t = 0 + rand() % 25;
		printf("current time:%d\n\n", t);
		if (t >= 6 && t < 12)
			printf("morning\n\n");
		else if (t >= 12 && t < 18)
			printf("daytime\n\n");
		else if (t >= 18 && t < 24)
			printf("evening\n\n");
		else if (t >= 24 && t < 6);
		printf("night\n\n");
	}
	break;
	case 8:
	{
		int p;
		printf("enter two-digit number: ");
		scanf("%d", &p);

		int a;
		printf("a=");
		scanf("%d", &a);

		if (p >-100 && p<-9 && p>9 && p <99);
		{
			p = abs(p);

			int x = p % 10;
			int y = (p - x) / 10;

			if (x == a || y == a)
				printf("given number contents a\n\n");
			else
				printf("does not content number a\n\n");
		}
	}
	break;
	case 9:
	{
		int a;
		printf("enter number from 1 to 99\n\n");
		scanf("%d", &a);

		if (a >= 1 && a <= 99)
		{
			int x = a % 10;
			if (x == 1)
				x = 1;
			else if (x > 1 && x < 5)
				x = 2;
			else if (x >= 5 && x <= 9 || x == 0)
				x = 3;
			switch (x)
			{
			case 1:
				printf("%d копейка\n\n", a);
				break;
			case 2:
				printf("%d копейки\n\n", a);
				break;
			case 3:
				printf("%d копеек\n\n", a);
			}
		}
		else
			printf("отнимите рубли\n\n");
	}
	break;
	case 10:
	{
		int n, x1, x2, x3, x4;
		printf("\nenter 4-digit number:\t");
		scanf("%d", &n);

		if (n > 999 && n < 10000)
		{
			x1 = n % 10;
			n = n / 10;
			x2 = n % 10;
			n = n / 10;
			x3 = n % 10;
			n = n / 10;
			x4 = n % 10;
			printf("%d\t\t %d\t\t %d\t\t %d\n", x1, x2, x3, x4);

			if (x1 == x4 && x2 == x3)
				printf("\nДа, палиндром\n");
			else
				printf("\nНет, не палиндром\n");

		}
		else
			printf("\nThis is not 4-digit number. try again\n\n");
 

	/*	int n, a, b, x, y;
		printf("enter 4-digit number:\t");
		scanf("%d", &n);

		if (n >= 1000 && n <= 9999)
		{
			a = n % 100;
			b = (n-a)/100;
			x = a % 10;
			y = (a-x)/10;
			if ((a == y * 10 + x) && (b == x * 10 + y))
				printf("\nпалиндром\n\n");
			else
				printf("\nне палиндром\n\n");
		}
		else
			printf("\nenter another number\n\n");*/
	}
	break;
	case 11:
	{
		int a, b;
		printf("\nenter 2 numbers:\n");
		scanf("%d %d", &a, &b);
		if ((a > 0 && b < 0) || (a < 0 && b>0))
			printf("\na=%d \nb=%d\n\n", -a, -b);
		else
			printf("a=0 \nb=0\n\n");
	}
	break;
	case 12:
	{
		int c, r, d, sum;
		printf("enter the city option number:\nAlmaty - 1 \tAstana - 2 \tShymkent - 3 \tKaraganda - 4\n\n");
		scanf("%d", &c);
		printf("enter route option:\none way - 1 \troundtrip - 2\n\n");
		scanf("%d", &r);
	start1:
		switch (c)
		{
		case 1:
		{
			switch (r)
			{
			case 1:
				sum = 500;
			break;
			case 2:
				sum = 750;
			break;
			default:
				printf("entered data is invalid, please check and try again\n\n");
				goto start1;
				break;
			}
		}
		break;
		case 2:
		{
			switch (r)
			{
			case 1:
				sum = 400;
			break;
			case 2:
				sum = 600;
			break;
			default:
				printf("entered data is invalid, please check and try again\n\n");
				goto start1;
				break;
			}
		}
		break;
		case 3:
		{
			switch (r)
			{
			case 1:
				sum = 350;
			break;
			case 2:
				sum = 550;
			break;
			default:
				printf("entered data is invalid, please check and try again\n\n");
				goto start1;
				break;
			}
		}
		break;
		case 4:
		{
			switch (r)
			{
			case 1:
				sum = 600;
			break;
			case 2:
				sum = 900;
			break;
			default:
				printf("entered data is invalid, please check and try again\n\n");
				goto start1;
				break;
			}
		}
		break;
		default:
			printf("entered data is invalid, please check and try again\n\n");
			goto start1;
			break;
		}

		printf("enter number of days from now till the flight:\n\n");
		scanf("%d", &d);
		if (d >= 45)
			sum = sum*0.8;
		else if (d > -20 && d < 45)
			sum = sum*0.9;
		else
			sum = sum;
		printf("\nyour tikets price:%d\n Thank you!\n\n", sum);

	}
	break;
	}
	goto start;
}