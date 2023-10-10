#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	// ~~~~ default constructor ~~~
	std::cout << "\n~~~ DEFAULT CONSTRUCTOR ~~~" << std::endl;
	Bureaucrat b1("John", 4);
	Form f1("RegisterForm", false, 3, 3);

	f1.beSigned(&b1);
	b1.signForm(&f1);

	std::cout << b1 << std::endl;
	std::cout << f1 << std::endl;

	// // ~~~ assign constructor ~~~
	// std::cout << "\n~~~ ASSIGN CONSTRUCTOR ~~~" << std::endl;
	// Bureaucrat b2("Bucciarati", 1);

	// std::cout << b2 << std::endl;

	// for (int i = 0; i < 2; i++)
	// 	b2.incrementGrade();
	// std::cout << b2 << std::endl;


	// // ~~~ copy constructor ~~~
	// std::cout << "\n~~~ COPY CONSTRUCTOR ~~~" << std::endl;
	// Bureaucrat b4;

	// b4 = b1;
	// std::cout << b4 << std::endl;

	// for (int i = 0; i < 2; i++)
	// 	b4.incrementGrade();
	// std::cout << b4 << std::endl;

	// // ~~~ equals operator ~~~
	// std::cout << "\n~~~ EQUALS OPERATOR ~~~" << std::endl;
	// Bureaucrat b5(b2);
	// std::cout << b5 << std::endl;

	// for (int i = 0; i < 3; i++)
	// 	b5.decrementGrade();
	// std::cout << b5 << std::endl;

	// std::cout << "\n~~~ DESTRUCTORS ~~~\n";
}