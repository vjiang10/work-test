#include <stdio.h>

int main() {
	// testing prinf
	printf("I would like get a good night's sleep during the weekends\n");
	int x = 22;
	int y = 7;
	float pi = 3.141592;
	printf("A fair approximation of pi%c%c%0.4f%c is %d/%d.\n", '(', '~', pi, ')', x, y);
	printf("pointer (x): %p\n", x); // gives compiler warnings, but does compile
	printf("pointer (y): %p\n", y);
	printf("pointer (pi): %p\n", pi);
	
	// testing char 
	char a, b, c, d, e, f, g, h, i;
	a = 'A';
	b = a+a; // b should get AA? or aa? or maybe an entirely different char?
	printf("var a gives: %c, while var b gives: %c. Cool!\n", a, b); 
	c = 'c';
	printf("var c before additon: %c\n", c);
	d = c+7; // does the value of c change?
	printf("var d: %c\n", d);
	printf("var c after addition: %c\n", c);
	e = c-7; // does subtraction work?
	printf("var e: %c\n", e);
	f = 12; // does assigning a integer to a char var work?
	printf("var f: %c\n", f);
	g = '2';
	h = g+3;
	i = g-3;
	printf("var g: %c\n", g);
	printf("var h: %c\n", h);
	printf("var i: %c\n", i);

	// testing int
	int j, k, l, m, n, o;
	j = 2;
	k = 2*j;
	l = j/3;
	printf("var j: %d\n", j);
	printf("var k: %d\n", k);
	printf("var l: %d\n", l);
	m += j; // this gives a random value within a range every time! 
	n = o = 0; // does this work?
	n -= j; 
	// o = 5/o; // floating point error
	printf("var m: %d\n", m);  
	printf("var n: %d\n", n);

	// testing unsigned integer types

	// testing unsigned char
	unsigned char p = -1; 
	printf("var p: %d\n", p);
	// unsigned char q = 256; // overflow; assigned to 0

	// testing unsigned short 
	unsigned short r, s, t;
	r = -1;
	// s = 65536; // overflow; assigned to 0
	t = r+r; // should get 65534
	printf("var r: %d\n", r);
	printf("var t: %d\n", t);

	return 0;
}