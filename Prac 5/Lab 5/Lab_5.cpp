/*
* Alejandro López-Tello Mora
* Juan Jesus Martos Escribano
* G-10
*/

#include <iostream>

int getlastdigit(long long int n) {

	while (n % 10 == 0) {
		n = n / 10;
	}
	int q = n % 10;
	return q;
}//obtain right-most value

/*Precondition:
 *  n >= 1 & n <= 10¹⁵
 */

int recursiveCalculationSNN(long long int n) {

	long long int sum;
	long long int lastDigit = 0;
	
	if (n != 0) {

		lastDigit = getlastdigit(n);
		
	}
	else {
		return sum = 0;
		
	}
	sum = lastDigit + recursiveCalculationSNN(n - 1);

	return sum;
}
/*
 * Postcondition: sum = SUM(0 - n): getlastdigit(n)
 *
 */
 /*Complexity:
  * Equations:
  * T(n) = { 4 + T(n-1) + c       if n > 1  }
  *
  * Iteration: 4 + T(n-1)
  * 			  4 + 4 + T (n-2)
  * 			  4 + 4 + 4 + T (n-3)
  * 			  = 4 * k + T(n-k)
  *
  * Postulate:
  * We reach the direct case when n = 0
  * 		n - k = 0 -> k = n
  * 		T(n) is of complexity O(n)
  */

int main() {
	long long int n;

	std::cin >> n;
	while (n != 0) {
		int result = recursiveCalculationSNN(n);
		std::cout << result << std::endl;
		std::cin >> n;
	}

	return 0;

}



