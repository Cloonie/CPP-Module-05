#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "A default Bureaucrat with a grade " << _grade << " has been constructed" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	try
	{
		setGrade(grade);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error during Bureaucrat named " << _name << " construction: " << e.what() << std::endl;
	}
	std::cout << "A Bureaucrat named " << _name << " with a grade "
		<< _grade << " has been constructed" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "A Bureaucrat named " << _name << " with a grade "
		<< _grade << " has been destructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
{
	std::cout << "A Bureaucrat named " << _name << " with a grade "
		<< _grade << " has been constructed as a copy" << std::endl;
	*this = ref;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
	if (this != &ref)
	{
		this->_grade = ref.getGrade();
	}
	return (*this);
}

const std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::setGrade(int grade)
{
	_grade = grade;
	if (grade < 1)
		GradeTooHighException();
	else if (grade > 150)
		GradeTooLowException();
}

void Bureaucrat::GradeTooHighException()
{
	throw std::out_of_range("Grade Too High");
}

void Bureaucrat::GradeTooLowException()
{
	throw std::out_of_range("Grade Too Low");
}

void Bureaucrat::incrementGrade()
{
	try
	{
		setGrade(_grade - 1);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error during increment of Bureaucrat named " << _name << ": " << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		setGrade(_grade + 1);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error during decrement of Bureaucrat named " << _name << ": " << e.what() << std::endl;
	}
}
