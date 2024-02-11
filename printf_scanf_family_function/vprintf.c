#include <stdio.h>
#include <stdarg.h>

// Function to print formatted output to stdout using vprintf
void printFormattedString(const char* format, ...) {
    va_list args;
	printf("sizeof va_list: %ld\n", sizeof(va_list));
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

// Function to print formatted output to a file using vfprintf
void printToFile(FILE* file, const char* format, ...) {
    va_list args;
    va_start(args, format);
    vfprintf(file, format, args);
    va_end(args);
}

int main() {
    // Example using vprintf
    int num1 = 10;
    double num2 = 3.14;
    char* str = "Hello";

    printf("Using vprintf:\n");
    printFormattedString("Integer: %d, Float: %.2f, String: %s\n", num1, num2, str);
    //printFormattedString("Integer: %d, Float: %.2f\n", num1, num2);

    // Example using vfprintf
    FILE* outputFile = fopen("output.txt", "w");
    if (outputFile != NULL) {
        printf("Using vfprintf we write data into output.txt file:\n");
        printToFile(outputFile, "Integer: %d, Float: %.2f, String: %s\n", num1, num2, str);
        fclose(outputFile);
    } else {
        printf("Error opening file!\n");
    }

    return 0;
}

