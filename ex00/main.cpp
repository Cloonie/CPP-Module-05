#include "Bureaucrat.hpp"

int	main(void)
{
	// ~~~~ default constructor ~~~
	std::cout << "DEFAULT CONSTRUCTOR\n" << std::endl;
	Bureaucrat b1;

	b1.decrementGrade();
	std::cout << b1 << std::endl;

	b1.incrementGrade();
	std::cout << b1 << std::endl;

	for (int i = 0; i < 3; i++)
		b1.incrementGrade();
	std::cout << b1 << std::endl;


	// ~~~ copy constructor ~~~
	std::cout << "\nCOPY CONSTRUCTOR\n" << std::endl;
	Bureaucrat b2(b1);

	std::cout << b2 << std::endl;

	for (int i = 0; i < 2; i++)
		b2.incrementGrade();
	std::cout << b2 << std::endl;


	// ~~~ assign constructor ~~~
	std::cout << "\nASSIGN CONSTRUCTOR\n" << std::endl;
	Bureaucrat b3("Yasuo", 1);

	std::cout << b3 << std::endl;

	for (int i = 0; i < 2; i++)
		b3.incrementGrade();
	std::cout << b3 << std::endl;

	std::cout << "\nDESTRUCTORS\n";
}