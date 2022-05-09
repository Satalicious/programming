
#include <stdio.h>
#include <conio.h>

void ausgabe(int z1)

{
	int a, b, c, d, e, f, g, h, i, rest;

	printf("\nAnzahl der 500 Euro Scheine: ");
	a = z1 / 500;
	rest = z1 % 500;
	printf("%d", a);

	printf("\nAnzahl der 200 Euro Scheine: ");
	b = rest / 200;
	rest = rest % 200;
	printf("%d", b);

	printf("\nAnzahl der 100 Euro Scheine: ");
	c = rest / 100;
	rest = rest % 100;
	printf("%d", c);

	printf("\nAnzahl der 50 Euro Scheine: ");
	d = rest / 50;
	rest = rest % 50;
	printf("%d", d);

	printf("\nAnzahl der 20 Euro Scheine: ");
	e = rest / 20;
	rest = rest % 20;
	printf("%d", e);

	printf("\nAnzahl der 10 Euro Scheine: ");
	f = rest / 10;
	rest = rest % 10;
	printf("%d", f);

	printf("\nAnzahl der 5 Euro Scheine: ");
	g = rest / 5;
	rest = rest % 5;
	printf("%d", g);

	printf("\nAnzahl der 2 Euro Muenzen: ");
	h = rest / 2;
	rest = rest % 2;
	printf("%d", h);

	printf("\nAnzahl der 1 Euro Muenzen: ");
	i = rest / 1;
	rest = rest % 1;
	printf("%d", i);
}