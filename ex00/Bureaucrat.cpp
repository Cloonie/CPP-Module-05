#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "A default Bureaucrat has been constructed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		std::cout << "Bureaucrat::GradeTooHighException" << std::endl;
	else if (grade > 150)
		std::cout << "Bureaucrat::GradeTooLowException" << std::endl;
	else
	{
		this->_grade = grade;
		std::cout << "A Bureaucrat named " << _name << " with a grade "
			<< _grade << " has been constructed" << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "A Bureaucrat named " << _name << " with a grade "
		<< _grade << " has been destructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
{
	this->_name = ref.getName();
	this->_grade = ref.getGrade();
	std::cout << "A Bureaucrat named " << _name << " with a grade "
		<< _grade << " has been constructed as a copy" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
	if (this != &ref)
	{
		this->_name = ref.getName();
		this->_grade = ref.getGrade();
	}
	return (*this);
}

const std::string Bureaucrat::getName()
{
	return (Bureaucrat::_name);
}

int Bureaucrat::getGrade()
{
	return (Bureaucrat::_grade);
}

// const std::string Bureaucrat::GradeTooHighException()
// {
// 	return ("Grade Too High, Highest grade: 1\n");
// }

// const std::string Bureaucrat::GradeTooLowException()
// {
// 	return ("Grade Too Low, Lowest grade: 150\n");
// }