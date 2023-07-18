#include "main.h" //imported prototype from main.h
/**
 * A program that can add number, subtract number, multiply number, divide number, find exponent of number, fint square of a number
 * --------------------
 * Algorithm
 * --------------------
 * step 1 - create an addition function
 * step 2 - create a subtraction function
 * step 3 - create a multiplication funtion
 * step 4 - create a division function
 * step 5 - create an exponential function
 * step 6 - create a square funtion
 * step 7 - create an operation variable
 * step 8 - create a condition for each function according to the type of operation to be performed
 * step 9 - create a result variable
 * step 10 - output result
 * ------------------------
 * add - adds numbers
 * subtract - subtract numbers
 * multiply - multiply numbers
 * divide - divide numbers
 * exponential - finds the exponent of a number
 * square_root - finds the sqare root of a number
 * @a: number variable
 * @b: number variable
 * Return: 'Error' if value 'a' or 'b' is not a number, 0 if the program runs through
*/
int main()
{
    #if VERSION == 1
    int num1, num2, result, operation; //variables used
    printf("--Welcome to Terminal calc developed by %s--\n", DEVELOPER);
    printf("--Enter 1 for addition\n--Enter 2 for subtraction\n--Enter 3 for multiplication\n--Enter 4 for division\n--Enter 5 for exponent\n--Enter 6 for Square_root\n--Enter 0 to exit");
    printf("\nWhich operation would you like to perform?: ");
    scanf("%d", &operation);

    while (1) //loop to keep running the code
    {
        if (operation <= 0) //exit the program
        {
            printf("--------------------------------------------------------------");
            printf("\nThamk you for using this program, More upgardes coming!\n");
            printf("--------------------------------------------------------------");
            exit(98);
        }
        else if (operation == 1)
        {
            printf("\nEnter the first number: ");
            scanf("%d", &num1);
            printf("\nEnter the second number");
            scanf("%d", &num2);

            result = add(num1, num2);
            printf("-----------------------------------------------");
            printf("\nThe result of the addition is: %d\n", result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", &operation);
        }
        else if (operation == 2)
        {
            printf("\nEnter the first number: ");
            scanf("%d", &num1);
            printf("\nEnter the second number");
            scanf("%d", &num2);

            result = subtract(num1, num2);
            printf("-----------------------------------------------");
            printf("\nThe result of the subtraction is: %d\n", result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", &operation);
        }
        else if (operation == 3)
        {
            printf("\nEnter the first number: ");
            scanf("%d", &num1);
            printf("\nEnter the second number");
            scanf("%d", &num2);

            result = multiply(num1, num2);
            printf("-----------------------------------------------");
            printf("\nThe result of the multiplication is: %d\n", result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", &operation);
        }
        else if (operation == 4)
        {
            printf("\nEnter the first number: ");
            scanf("%d", &num1);
            printf("\nEnter the second number");
            scanf("%d", &num2);

            result = divide(num1, num2);
            printf("-----------------------------------------------");
            printf("\nThe result of the division is: %d\n", result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", &operation);
        }
        else if (operation == 5)
        {
            printf("\nEnter the base number: ");
            scanf("%d", &num1);
            printf("\nEnter the exponent number");
            scanf("%d", &num2);

            result = exponential(num1, num2);
            printf("-----------------------------------------------");
            printf("\nThe exponential value of %d raise to power %d is: %d\n", num1, num2, result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", &operation);
        }
        else if (operation == 6)
        {
            printf("\nEnter the number to find the square root: ");
            scanf("%d", &num1);

            result = square_root(num1);
            printf("-----------------------------------------------");
            printf("\nThe square root of %d is: %d\n", num1, result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", &operation);
        }
        else if (operation == 0)
        {
            printf("\nThamk you for using this program, More upgardes coming!");
            break;
        }
    }
    return (0);
    #endif

    #if VERSION == 2
    double *num1 = malloc(sizeof(double));
    double *num2 = malloc(sizeof(double));
    double result;
    int *operation = malloc(sizeof(int));
    
    printf("TERMINAL CALCULATOR VERSION %d\n",VERSION);
    printf("Developed by %s\n",DEVELOPER);
    printf("--Enter 1 for addition\n--Enter 2 for subtraction\n--Enter 3 for multiplication\n--Enter 4 for division\n--Enter 5 for exponent\n--Enter 6 for Square_root\n--Enter 0 to exit");
    printf("\nWhich operation would you like to perform?: ");
    scanf("%d", operation);

    while (1) // loop to keep running the code
    {
        if (*operation <= 0) // exit the program
        {
            printf("--------------------------------------------------------------");
            printf("\nThamk you for using this program, More upgardes coming!\n");
            printf("--------------------------------------------------------------");
            exit(98);
        }
        else if (*operation == 1)
        {
            printf("\nEnter the first number: ");
            scanf("%d", num1);
            printf("\nEnter the second number");
            scanf("%d", num2);

            result = add(*num1, *num2);
            printf("-----------------------------------------------");
            printf("\nThe result of the addition is: %d\n", result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", operation);
        }
        else if (*operation == 2)
        {
            printf("\nEnter the first number: ");
            scanf("%d", num1);
            printf("\nEnter the second number");
            scanf("%d", num2);

            result = subtract(*num1, *num2);
            printf("-----------------------------------------------");
            printf("\nThe result of the subtraction is: %d\n", result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", operation);
        }
        else if (*operation == 3)
        {
            printf("\nEnter the first number: ");
            scanf("%d", num1);
            printf("\nEnter the second number");
            scanf("%d", num2);

            result = multiply(*num1, *num2);
            printf("-----------------------------------------------");
            printf("\nThe result of the multiplication is: %d\n", result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", operation);
        }
        else if (*operation == 4)
        {
            printf("\nEnter the first number: ");
            scanf("%d", num1);
            printf("\nEnter the second number");
            scanf("%d", num2);

            result = divide(*num1, *num2);
            printf("-----------------------------------------------");
            printf("\nThe result of the division is: %d\n", result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", operation);
        }
        else if (*operation == 5)
        {
            double base = *num1;
            double exponent = *num2;

            printf("\nEnter the base number: ");
            scanf("%d", &base);
            printf("\nEnter the exponent number");
            scanf("%d", &exponent);

            result = exponential(*num1, *num2);
            printf("-----------------------------------------------");
            printf("\nThe exponential value of %d raise to power %d is: %lf\n", base, exponent, result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", operation);
        }
        else if (*operation == 6)
        {
            printf("\nEnter the number to find the square root: ");
            scanf("%d", num1);

            result = square_root(*num1);
            printf("-----------------------------------------------");
            printf("\nThe square root of %d is: %d\n", num1, result);
            printf("-----------------------------------------------");

            printf("\nWhich operation would you like to perform?: ");
            scanf("%d", operation);
        }
        else if (*operation == 0)
        {
            printf("\nThamk you for using this program, More upgardes coming!");
            break;
        }
    }
    return (0);
#endif
}

// functions
//----------------
// Addtion function
double add(double a, double b)
{
    double addition = a + b;
    return (addition);
}

// subtraction function
double subtract(double a, double b)
{
    double subtraction = a - b;
    return (subtraction);
}

// multiplication function
double multiply(double a, double b)
{
    double multiplication = a - b;
    return (multiplication);
}

// division function
double divide(double a, double b)
{
    double division = a - b;
    return (division);
}

// exponential function
double exponential(double a, double b)
{
    double expo = pow(a, b);
    return (expo);
}

// square_root function
double square_root(double a)
{
    double sqr = sqrt(a);
    return (sqr);
}