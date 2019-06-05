/*
 ============================================================================
 Name        : calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

	int main (void){
	    float x, y, z=1, ansver; //переменные, с которыми будем работать
	    int c;
	    int q=1;
	    while (q==1){
	        printf("please, enter two numbers x and y\n");
	        scanf("%f%f", &x, &y);
	        printf("(Addition=1)_\n");
	        printf("(Subtraction =2)\n");            //сканируем введенные переменные, введенные в цикле, далее они выводятся в консоли, а затем выводятся варианты команд с их последующим выбором
	        printf("(Multiplication =3)\n");
	        printf("(Division =4)\n");
	        printf("(power of number(x^y)=5)\n");
	        printf("(factorial(from x)=6)\n");
	        printf("_enter your comand_\n");
	        scanf("%d", &c);
	        switch (c) {   //вводим значение команды, выбирается команда, которая нужна
	            case 1:                             // с=1-сложение
	                 printf("ansver %f\n", x + y);
	                 break;
	            case 2:                             // с=2-вычитание
	                 printf("ansver %f\n", x - y);
	                 break;
	            case 3:                             // с=3-умножение
	                 printf("ansver %f\n", x * y);
	                 break;
	            case 4:                             // с=4-деление
	                 printf("ansver %f\n", x / y);
	                 break;
	            case 5:                             // с=5-возведение в степень
	                 ansver =  pow(x, y);
	                 printf("ansver %f\n", ansver);
	                 break;
	            case 6:                             // с=6-факториал числе от a
	                 while (x != 0) {
	                            z = z * x;
	                            x = x - 1;
	                            if (x==0){
	                                printf("ansver %f\n", z);
	                                     }
	                                }
	                      }
	                  break;
	                 }

	            printf("restart: enter 1, exit: enter 2\n");
	            scanf("%d", &z);
	                }
