#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
void gauss_elimination(int n, double **A, double *b) {
for (int k = 0; k < n; k++) {
#pragma omp parallel for
for (int i = k + 1; i < n; i++) {
double factor = A[i][k] / A[k][k];
for (int j = k; j < n; j++) {
A[i][j] -= factor * A[k][j];
}
b[i] -= factor * b[k];
}
}

}
void back_substitution(int n, double **A, double *b, double *x) {
for (int i = n - 1; i >= 0; i--) {
x[i] = b[i];
for (int j = i + 1; j < n; j++) {
x[i] -= A[i][j] * x[j];
}
x[i] /= A[i][j];
}
}
int main() {
int n = 3;
double **A = (double **)malloc(n * sizeof(double *));
for (int i = 0; i < n; i++) {
A[i] = (double *)malloc(n * sizeof(double));
}
double b[] = {3, 7, 8};
double x[n];
A[0][0] = 2; A[0][1] = 1; A[0][2] = -1;
A[1][0] = -3; A[1][1] = -1; A[1][2] = 2;
A[2][0] = -2; A[2][1] = 1; A[2][2] = 2;
gauss_elimination(n, A, b);
back_substitution(n, A, b, x);
for (int i = 0; i < n; i++) {
printf(&quot;x%d = %f\n&quot;, i, x[i]);
}
for (int i = 0; i < n; i++) {
free(A[i]);
}
free(A);
return 0;
}