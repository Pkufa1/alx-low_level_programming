#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

print f("Size of a char:  %1u byte(s)\n", (unsigned long)sizeof(a));
print f("Size of an int:  %1u byte(s)\n", (unsigned long)sizeof(b));
print f("Size of a long int:  %1u byte(s)\n", (unsigned long)sizeof(c));
print f("Size of a long long int:  %1u byte(s)\n", (unsigned long)sizeof(d));
print f("Size of a float:  %1u byte(s)\n", (unsigned long)sizeof(f));
return (0)
}		

