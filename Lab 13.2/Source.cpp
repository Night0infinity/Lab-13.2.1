#define _CRT_SECURE_NO_WARNINGS
/*
 lab_13_2.
 Обчислити площу круга, знайти максимум з двох чисел, використовуючи
 макроси піднесення до квадрата, виведення результатів, знаходження
 максимального значення. За допомогою директив умовної компіляції
 активізувати різні частини програми.
*/
#include <stdio.h>
#include <conio.h> 
//#include <iostream>
//
//using namespace 

#define z 11 // директива препроцесора – макровизначення
#define SQR(x) (x)*(x) // макрос з параметром – визначення квадрата числа
#define KUB(x) (x)*(x)*(x)// макрос з параметром – визначення куба числа
// макрос визначення найбільшого з двох чисел
#define MAX(y,z) ((y)>(z))?(y):(z) // макрос як умовний вираз
// макрос визначення найменшого з двох чисел
#define MIN(y,z) ((y)<(z))?(z):(y) // макрос як умовний вираз
 // виведення повідомлення та значення цілого числа
#define ABS(x) ((x)>(0))?(x):(-x) // макрос модуля
#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)
 // використовується символ продовження макроса '\'
 // символ '#' використовується для об’єднання рядків
 // виведення повідомлення та значення дійсного числа
#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)

void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y; // змінні для розрахунків
		int x_kube; // x*x*x
		int dushka_x_plus_y_dushka_dosqr; // (x+y)*(x+y)
			int modul_x_minus_z; // abs(x-z)
			int modul_x_plus_z; // abs(x+z)
			int maxim; // максимальне з чисел
	    int minim; // мінімальне з чисел
	char ch; // відповідь чи продовжувати виконання програми
	//puts("define maximum of two numbers");
	//puts("Input 3 integer numbers");
	//scanf_s("%d", &x);// введення числа
	//cin >> x;
	//PRINTI(x); // макрос виведення числа
	//scanf_s("%d", &y);
	//PRINTI(y);
	do
	{
#if z<=10 // якщо умова істинна,
		// то шукаємо максимум з трьох чисел
		puts("define maximum of two numbers");
		puts("Input 3 integer numbers");
		scanf_s("%d", &x);// введення числа
		PRINTI(x); // макрос виведення числа
		scanf_s("%d", &y);
		PRINTI(y);

		modul_x_minus_z = ABS(x-z);// макрос визначення квадрату числа
		PRINTI(modul_x_minus_z);
		modul_x_plus_z = ABS(x+y);
	    PRINTI(modul_x_plus_z);
		minim = MIN(modul_x_minus_z, modul_x_plus_z);// пошук максимуму з двох чисел
		PRINTR(minim); // макрос виведення результату

		/*x_kube = KUB(x);// макрос визначення квадрату числа
		PRINTI(x_kube);
		dushka_x_plus_y_dushka_dosqr = SQR(x+y);
			PRINTI(dushka_x_plus_y_dushka_dosqr);*/


#else // компілювати іншу частину програми, якщо N > 10
		{
			puts("define maximum of two numbers");
			puts("Input 3 integer numbers");
			scanf_s("%d", &x);// введення числа
			PRINTI(x); // макрос виведення числа
			scanf_s("%d", &y);
			PRINTI(y);

			puts("define area of a circle");
			puts("Input radius of circle");
			x_kube = KUB(x);// макрос визначення квадрату числа
			PRINTI(x_kube);
			dushka_x_plus_y_dushka_dosqr = SQR(x + y);
			PRINTI(dushka_x_plus_y_dushka_dosqr);
			maxim = MAX(x_kube, dushka_x_plus_y_dushka_dosqr);
			PRINTR(maxim);
		}
#endif // завершення блоку умовної компіляції
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}