#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	// ~~~~ default constructor ~~~
	std::cout << "\n~~~ DEFAULT CONSTRUCTOR ~~~" << std::endl;
	ShrubberyCreationForm scf1("hello");
	Bureaucrat b1("John", 137);

	// b1.signForm(&scf1);
	std::cout << scf1 << std::endl;
	scf1.execute(b1);

	// std::cout << "\n~~~ GRADE LOWER SIGNING ~~~" << std::endl;
	// b1.signForm(&f1);
	// std::cout << b1 << std::endl;
	// std::cout << f1 << std::endl;

	// std::cout << "\n~~~ GRADE HIGHER SIGNING ~~~" << std::endl;
	// f1.beSigned(&b2);
	// std::cout << b2 << std::endl;
	// std::cout << f1 << std::endl;

	// // ~~~ copy constructor ~~~
	// std::cout << "\n~~~ COPY CONSTRUCTOR ~~~" << std::endl;
	// Bureaucrat b3(b1);

	// std::cout << b3 << std::endl;

	// // ~~~ equals operator ~~~
	// std::cout << "\n~~~ EQUALS OPERATOR ~~~" << std::endl;
	// Bureaucrat b4;

	// b4 = b1;
	// std::cout << b4 << std::endl;

	// std::cout << "\n~~~ TEST OUT OF BOUND GRADES ~~~" << std::endl;
	// Form f2("TestForm", false, 150, 137);
	// Bureaucrat b5("OutofBounds", 150);
	// b5.signForm(&f2);
	// std::cout << f2 << std::endl;

	// ~~~~ destructor ~~~
	std::cout << "\n~~~ DESTRUCTORS ~~~\n";
}