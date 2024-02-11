#include <stdio.h>
#include<string.h>

int main() 
{
	int i=0;

	// fprintf
	FILE* file = fopen("output.txt", "w");
	fprintf(file, "This is a demonstration of fprintf\n");
	fclose(file);

	// sprintf
	char buffer[100];
	sprintf(buffer, "This is a demonstration of sprintf\n");
	printf("%s", buffer);

	// snprintf
	char snBuffer[100];
	snprintf(snBuffer, sizeof(snBuffer), "This is a demonstration of snprintf\n");
	printf("%s", snBuffer);
	while(snBuffer[i])
	{
		i++;
	}
	printf("lenghth of string is %d\n", i);

	// vprintf
	vprintf("This is a demonstration of vprintf\n", NULL);

	// vfprintf
	FILE* outputFile = fopen("output.txt", "a");
	vfprintf(outputFile, "This is a demonstration of vfprintf\n", NULL);
	fclose(outputFile);

	// fscanf
	FILE* input = fopen("output.txt", "r");
	char buffer1[100];
	fscanf(input, "%s", buffer);
	printf("data read from file: %s\n", buffer1);
	fclose(input);

	// sscanf
	char str[] = "1234";
	int convertedValue;
	sscanf(str, "%d", &convertedValue);
	printf("Converted value from string: %d\n", convertedValue);

	// sscanf with multiple values
	char data[] = "pramod Rathod 26";
	char name[20];
	char name1[20];
	int age;
	sscanf(data, "%s %s %d", name, name1, &age);
	printf("Name: %s, Name1: %s Age: %d\n", name,name1, age);	
	return 0;
}

/*
   - `printf` is used to print formatted output to the standard output.
   - `fprintf` is used to print formatted output to a file stream.
   - `sprintf` is used to print formatted output to a character array.
   - `snprintf` is used to print formatted output to a character array with a specified maximum length.
   - `vprintf` is used to print formatted output to the standard output with a variable argument list.
   - `vfprintf` is used to print formatted output to a file stream with a variable argument list.
   - `scanf` is used to read formatted input from the standard input.
   - `fscanf` is used to read formatted input from a file stream.
   - `sscanf` is used to read formatted input from a string.
   - `sscanf` is also demonstrated with multiple values extracted from a string.


NOTE: 
char str[] = "Hello";  // Compiler adds '\0' at the end 
When you declare a string literal like "Hello", the compiler automatically includes a null character ('\0') at the end to mark the termination of the string.

Similarly, functions like 
strcpy, strncpy.
strcat, strncat.
sprintf,snprintf.
which manipulate strings, ensure that the destination string is null-terminated after the operation. This null terminator is essential for C functions to know where the string ends.
 */
