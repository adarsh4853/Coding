#include <stdio.h>
#include<math.h>
int factorial(int n)
{
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

double rec_eval_f(float x, int n, int term_num, int sign)
{
    if (n == 0) {
        // Base case: return 0 when there are no more terms
        printf("Term %d: 0\n", term_num);
        return 0;
    }

    double term = sign * n * pow(x, n - 1) / factorial(n - 1);
    printf("Term %d: %.2lf\n", term_num, term);

    // Recursive call with updated values
    return term + rec_eval_f(x, n - 1, term_num + 1, -sign);
}


int main()
{
    float x;
    int n;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    double result = rec_eval_f(x, n, 1, -1);
    printf("Result of the series: %.2lf\n", result);

    return 0;
}

