#define _CRT_SECURE_NO_WARNINGS
/*
 lab_13_2.
 ��������� ����� �����, ������ �������� � ���� �����, ��������������
 ������� ��������� �� ��������, ��������� ����������, �����������
 ������������� ��������. �� ��������� �������� ������ ���������
 ����������� ��� ������� ��������.
*/
#include <stdio.h>
#include <conio.h> 
//#include <iostream>
//
//using namespace 

#define z 11 // ��������� ������������ � ���������������
#define SQR(x) (x)*(x) // ������ � ���������� � ���������� �������� �����
#define KUB(x) (x)*(x)*(x)// ������ � ���������� � ���������� ���� �����
// ������ ���������� ���������� � ���� �����
#define MAX(y,z) ((y)>(z))?(y):(z) // ������ �� ������� �����
// ������ ���������� ���������� � ���� �����
#define MIN(y,z) ((y)<(z))?(z):(y) // ������ �� ������� �����
 // ��������� ����������� �� �������� ������ �����
#define ABS(x) ((x)>(0))?(x):(-x) // ������ ������
#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)
 // ��������������� ������ ����������� ������� '\'
 // ������ '#' ��������������� ��� �ᒺ������ �����
 // ��������� ����������� �� �������� ������� �����
#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)

void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y; // ���� ��� ����������
		int x_kube; // x*x*x
		int dushka_x_plus_y_dushka_dosqr; // (x+y)*(x+y)
			int modul_x_minus_z; // abs(x-z)
			int modul_x_plus_z; // abs(x+z)
			int maxim; // ����������� � �����
	    int minim; // �������� � �����
	char ch; // ������� �� ������������ ��������� ��������
	//puts("define maximum of two numbers");
	//puts("Input 3 integer numbers");
	//scanf_s("%d", &x);// �������� �����
	//cin >> x;
	//PRINTI(x); // ������ ��������� �����
	//scanf_s("%d", &y);
	//PRINTI(y);
	do
	{
#if z<=10 // ���� ����� �������,
		// �� ������ �������� � ����� �����
		puts("define maximum of two numbers");
		puts("Input 3 integer numbers");
		scanf_s("%d", &x);// �������� �����
		PRINTI(x); // ������ ��������� �����
		scanf_s("%d", &y);
		PRINTI(y);

		modul_x_minus_z = ABS(x-z);// ������ ���������� �������� �����
		PRINTI(modul_x_minus_z);
		modul_x_plus_z = ABS(x+y);
	    PRINTI(modul_x_plus_z);
		minim = MIN(modul_x_minus_z, modul_x_plus_z);// ����� ��������� � ���� �����
		PRINTR(minim); // ������ ��������� ����������

		/*x_kube = KUB(x);// ������ ���������� �������� �����
		PRINTI(x_kube);
		dushka_x_plus_y_dushka_dosqr = SQR(x+y);
			PRINTI(dushka_x_plus_y_dushka_dosqr);*/


#else // ���������� ���� ������� ��������, ���� N > 10
		{
			puts("define maximum of two numbers");
			puts("Input 3 integer numbers");
			scanf_s("%d", &x);// �������� �����
			PRINTI(x); // ������ ��������� �����
			scanf_s("%d", &y);
			PRINTI(y);

			puts("define area of a circle");
			puts("Input radius of circle");
			x_kube = KUB(x);// ������ ���������� �������� �����
			PRINTI(x_kube);
			dushka_x_plus_y_dushka_dosqr = SQR(x + y);
			PRINTI(dushka_x_plus_y_dushka_dosqr);
			maxim = MAX(x_kube, dushka_x_plus_y_dushka_dosqr);
			PRINTR(maxim);
		}
#endif // ���������� ����� ������ ���������
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}