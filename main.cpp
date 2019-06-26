/*  main.cpp -- This is the applicantion's main file */

/*
	Alunos: Lucas Vieira Araujo
			Odilon Fernandes Damasceno Neto
*/

#include <cstdio>
#include "car.h"

int
main(int argc, char **argv)
{
	/*	main function */

	Car c1(100, 20), c2(100, 30);
	c1.addGas(20);
	c2.addGas(30);
	c1.move(200);
	c2.move(400);

	printf("Carro 1:\nDistancia: %.2f\nCombustivel: %.2f\n\n", c1.getTotalMoved(), c1.getA());

	printf("Carro 2:\nDistancia: %.2f\nCombustivel: %.2f\n\n", c2.getTotalMoved(), c2.getA());

	return 0;
}