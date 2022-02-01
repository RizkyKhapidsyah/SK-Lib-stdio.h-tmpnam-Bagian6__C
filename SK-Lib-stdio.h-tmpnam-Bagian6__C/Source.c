#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	char* filename1 = tmpnam(NULL);
	printf("Temporary file name: %s\n", filename1);

	char filename2[L_tmpnam];
	tmpnam(filename2);
	printf("Temporary file name: %s\n", filename2);

	_getch();
	return 0;
}

