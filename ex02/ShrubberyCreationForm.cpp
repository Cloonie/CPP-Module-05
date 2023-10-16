#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", false, 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm has been constructed with target: " << _target << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm has been destructed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref)
	: AForm(ref), _target(ref._target)
{
	std::cout << "ShrubberyCreationForm has been copied" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm:: operator=(const ShrubberyCreationForm& ref)
{
	(void)ref;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->get_isSigned() == false)
		std::cout << "Form is not signed" << std::endl;
	else if (executor.getGrade() > this->get_gradeExec())
		std::cout << "Grade requirements not met to execute form" << std::endl;
	else
	{
		std::cout << _target + "_shrubbery file has been created successfully" << std::endl;
		std::ofstream file((_target + "_shrubbery").c_str());
		file << "                      ___" << std::endl;
		file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
		file << "             ,-'          __,,-- \\" << std::endl;
		file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
		file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
		file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
		file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
		file << "     (     ,-'                  `." << std::endl;
		file << "      `._,'     _   _             ;" << std::endl;
		file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
		file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
		file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
		file << "                \"Hb HH dF" << std::endl;
		file << "                 \"HbHHdF" << std::endl;
		file << "                  |HHHF" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  |HHH|" << std::endl;
		file << "                  dHHHb" << std::endl;
		file << "                .dFd|bHb.               o" << std::endl;
		file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
		file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__mliew  Y" << std::endl;
		file << "##########################################" << std::endl;
		file.close();
	}
}