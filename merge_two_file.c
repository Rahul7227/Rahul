#include <stdio.h>
#include <stdlib.h>

int main()
{
// Open two files to be merged
FILE *fp1 = fopen("p1.c", "r");
FILE *fp2 = fopen("p2.c", "r");

// Open file to store the result
FILE *fp3 = fopen("p3.c", "w");
char ch;

if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
{
		puts("Could not open files");
		exit(0);
}

// Copy contents of first file to file3.txt
while ((ch = fgetc(fp1)) != EOF)
	fputc(ch, fp3);
	

// Copy contents of second file to file3.txt
while ((ch = fgetc(fp2)) != EOF)
	fputc(ch, fp3);

printf("Merged p1.c and p2.c into p3.c");

fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}

