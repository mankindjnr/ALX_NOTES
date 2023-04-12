/**
 * divide the problem into smaller problem
 * ensure you have a base case
 * 
 * FACTORIAL(4)
 * 
 * int factorial(n)
 * {
 *      if (n == 1)
 *          {
 *              return 1;
 *              //base case- stops the recursion.
 *          }
 *          else
 *          {
 *              //recursive case
 *              return n * fact(n - 1)
 *          }
 * }
 * 
 * 
 * int main()
 * {
 *      int n;
 *      print("enter the number: ");
 *      scanf("%d", $n);
 *      printf("Factorial of a number %d is %d", n, factorial(n));
 * }
 * fact(1) = 1
 * fact(2) = 2 * 1 == 2 * fact(1)
 * fact(3) = 3 * 2 * 1 == 3 * fact(2)
 * fact(4) = 4 * 3 * 2 * 1 == 4 * fact(3)
 * 
 * fact(n) = n * fact(n - 1)
*/

//DIRECT RECURSION
/**
 * fun()
 * {
 *      fun()
 * }
*/

//INDIRECT RECURSION
/**
 * where one function calls another function and that other function calls the initial function
 * 
 * fun1()
 * {
 *      fun2();
 * }
 * 
 * fun2()
 * {
 *      fun1()
 * }
*/
