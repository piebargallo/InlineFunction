#include <iostream>
using namespace std;

// Class operation
class operation {
	
	// Def variables
	int a, b, add, sub, mul;
	float div;

// Def constructor
public:
	void get();
	void sum();
	void difference();
	void product();
	void division();

}; // End class

// Inline get
inline void operation :: get() {
	
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;

}

// Inline sum
inline void operation :: sum() {
	
	add = a + b;
	cout << "Addition of two numbers: " << a + b << "\n";

}

// Inline difference
inline void operation :: difference() {
	
	sub = a - b;
	cout << "Difference of two numbers: " << a - b << "\n";

}

// Inline product
inline void operation :: product() {
	
	mul = a * b;
	cout << "Product of two numbers: " << a * b << "\n";
	
}

// Inline division
inline void operation :: division() {
	div= a / b;
	cout<<"Division of two numbers: "<< a / b <<"\n" ;
}

// Driver program
int main() {
	
	cout << "Program using inline function\n";
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	
	return 0;

} // End driver

