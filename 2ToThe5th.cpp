#include <stdlib.h>
#include <stdio.h>

// Most Obfuscated: Which code snippet was the most difficult to understand?
// Displays a Cycling banner that alternates between two messages. (For Windows / Win32 systems, compiles on MSVC)

int main(void)
{
	int A[6] = { 1768386117, 1919247726, 543649385, 1634757961, 29795 };
	int B[6] = { 0 };
	char C[] = "*#71#9\n\0375,*~&$.9.*";

	int *d, *e, *f, *g;
	int i;
	e = g = B;
	do
	{
		i = 0;
		for (d = f = ((e == A)? B : A); *d % 256 || (e++, *(d = d + 1)); *d /= 256)
		{
			system("cls");
			printf("%.*s%.*s%s\n", i, g, 4, f + (i / 4), f + (i / 4) + 1);
			*e += (((*d) % 256) + (f==A? 1:~0)*(C[i++] - 44)) * (1 << 8 * i);
		}
		e = g = ((f == A)? A : B);
	} while (!0);

	return 0;
}
