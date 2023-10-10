#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeSign(150), _gradeExec(150)
{
	std::cout << "A default Form named [" << _name <<
		"] has been constructed" << std::endl;
	checkGrade(_gradeSign);
	checkGrade(_gradeExec);
}

Form::Form(const std::string name, bool isSigned, int gradeSign, int gradeExec)
	: _name(name)
	, _isSigned(isSigned)
	, _gradeSign(gradeSign)
	, _gradeExec(gradeExec)
{
	checkGrade(_gradeSign);
	checkGrade(_gradeExec);
	std::cout << "A Form named [" << _name <<
		"] has been constructed" << std::endl;
}

Form::~Form()
{
	std::cout << "A Form named [" << _name <<
		"] has been destructed" << std::endl;
}

Form::Form(const Form& ref)
	: _name(ref._name)
	, _isSigned(ref._isSigned)
	, _gradeSign(ref._gradeSign)
	, _gradeExec(ref._gradeExec)
{
	std::cout << "A Form named [" << _name <<
		"] has been copied" << std::endl;
		*this = ref;
}

Form& Form::operator=(const Form& ref)
{
	if (this != &ref) {}
	return (*this);
}

const std::string Form::get_name() const
{
	return (_name);
}

bool Form::get_isSigned() const
{
	return (_isSigned);
}

int Form::get_gradeSign() const
{
	return (_gradeSign);
}

int Form::get_gradeExec() const
{
	return (_gradeExec);
}

void	Form::checkGrade(int grade)
{
	try
	{
		if (grade < 1)
			GradeTooHighException();
		else if (grade > 150)
			GradeTooLowException();
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error Form Name [" << _name << "]: " << e.what() << std::endl;
	}
}

void Form::GradeTooHighException()
{
	throw std::out_of_range("Grade Too High");
}

void Form::GradeTooLowException()
{
	throw std::out_of_range("Grade Too Low");
}

void Form::beSigned(Bureaucrat *b)
{
	try
	{
		if (b->getGrade() <= get_gradeSign())
			_isSigned = true;
		else
			GradeTooLowException();
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error during signing " << _name << ": " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << "Name: [" << form.get_name() << "], Signed: [" << form.get_isSigned()
		<< "], Grade to Sign: [" << form.get_gradeSign()
		<< "], Grade to Exec: [" << form.get_gradeExec() << "]";
	return os;
}