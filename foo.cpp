//// According to our 4/17 lecture video 15:17-16:03
void my_dgemv(int n, double* A, double* x, double* y) {
   // insert your code here: implementation of basic matrix multiply
   for (int row = 0; row < n; row++) {
      double temp = 0.0;
      for (int col = 0; col < n; col++){
         int index = col + row * n;
         temp += A[index] * x[col];
      }
      y[row] += temp;
   }
}