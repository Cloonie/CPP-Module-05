#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "A default Bureaucrat named [" << _name << "] with a grade ["
		<< _grade << "] has been constructed" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	try
	{
		std::cout << "A Bureaucrat named [" << _name << "] with a grade ["
			<< _grade << "] has been constructed" << std::endl;
		setGrade(grade);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error during Bureaucrat named " << _name
		<< " construction: " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "A Bureaucrat named [" << _name << "] with a grade ["
		<< _grade << "] has been destructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref) : _name(ref._name), _grade(ref._grade)
{
	std::cout << "A Bureaucrat named [" << _name << "] with a grade ["
		<< _grade << "] has been constructed as a copy" << std::endl;
	*this = ref;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
	// std::cout << "A Bureaucrat named [" << _name << "] with a grade ["
	// 	<< _grade << "] has been assign new grade [" << ref.getGrade() << "]" << std::endl;
	if (this != &ref)
		this->_grade = ref.getGrade();
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
		std::cout << "Bureaucrat named [" << _name << "] with a grade [" << _grade
			<< "] has been increment to [" << _grade - 1 << "]" << std::endl;
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
		std::cout << "Bureaucrat named [" << _name << "] with a grade [" << _grade
			<< "] has been decrement to [" << _grade + 1 << "]" << std::endl;
		setGrade(_grade + 1);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error during decrement of Bureaucrat named " << _name << ": " << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form & form)
{
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(Form const & form)
{
	if (form.get_isSigned() == false)
		std::cout << "Form is not signed" << std::endl;
	else if (getGrade() > form.get_gradeExec())
		std::cout << "Grade requirements not met to execute" << std::endl;
	else
	{
		std::cout << getName() << " executed " << form.get_name() << std::endl;
		form.execute(*this);
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << "Bureaucrat - Name: [" << bureaucrat.getName() << "], Grade [" << bureaucrat.getGrade() << "]";
	return os;
}
