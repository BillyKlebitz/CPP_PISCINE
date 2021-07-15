#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute){
	this->is_signed = 0;
}

Form::Form(Form &	src): name(src.name), grade_to_sign(src.grade_to_sign), grade_to_execute(src.grade_to_execute){

	this->is_signed = src.is_signed;
}

Form & Form::operator=(Form &	src){
	
	this->is_signed = src.is_signed;
	return *this;
}

std::string	Form::getName() const{

	return this->name;
}

void Form::beSigned(Bureaucrat & bureaucrat){

	if (bureaucrat.getGrade() <= this->grade_to_sign)
		this->is_signed = 1;
	else
		throw Form::GradeTooLowException();
}

int	Form::getToSign() const{

	return this->grade_to_sign;
}

int	Form::getToExecute() const{
	
	return this->grade_to_execute;
}

std::ostream & operator<<(std::ostream & o, const Form & form){

	o << "Form " << form.getName() <<  " requires minimum grade of " << form.getToSign() << " to be signed and " << form.getToExecute() << " to be executed"; 
	return o;
}

void	Form::setTarget(std::string target){

	this->target = target;
}

bool	Form::checkForm(Bureaucrat const & executor) const{

	if (this->is_signed == 1 && executor.getGrade() <= this->grade_to_execute)
		return 1;
	return 0;
}

std::string	Form::getTarget(void) const{

	return this->target;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm",145,137) {
	this->setTarget(target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

	if(this->checkForm(executor))
		return;
	std::ofstream myfile;
	myfile.open(this->getTarget() + "_shrubbery");
	
	
myfile << "                                                                                    @@#        &@@@@#    .&@/                                                                                          "<< std::endl;
myfile << "                                                                                   @@          @&     @@     %@#                                                                                       " << std::endl;
myfile << "                                                                                  @@           @/      @      %@,                                                                                      " << std::endl;
myfile << "                                                                                 *@               /&&&&&       @@                                                                                      " << std::endl;
myfile << "                                                                                 @(                             @(                                                                                     " << std::endl;
myfile << "                                                                            @@/                                 /@                                                                                     " << std::endl;
myfile << "                                                                          @@                                     @@                                                                                    " << std::endl;
myfile << "                                                                        ,@,                 *@@/                  @%                                                                                   " << std::endl;
myfile << "                                                                        @,                  #@ ,@,                .@,                                                                                  " << std::endl;
myfile << "                                                                       *&                 &@    @,                 %@                                                                                  " << std::endl;
myfile << "                                                                       @.                @*     @,                  @%                                                                                 " << std::endl;
myfile << "                                                                       @.               %&     #@                   *@,                                                                                " << std::endl;
myfile << "                                                                       @.               %(   ,@(                     *@.                                                                               " << std::endl;
myfile << "                                                                       *@%               *@@@,                        %@                                                                               " << std::endl;
myfile << "                                                                         @%                             @@@%           &@                                                                              " << std::endl;
myfile << "                                                                        &@@@                           %(  /@*          &@                                                                             " << std::endl;
myfile << "                                                                       @@                              %(    #@(         *@(                                                                           " << std::endl;
myfile << "                                                                     /@/                                @&     ,@%         @@                                                                          " << std::endl;
myfile << "                                                                   @@&            #@@@                   &@(     @@@         @@,                                                                       " << std::endl;
myfile << "                                                                  @@             &(     /@@@@              *@@@####@(         (@*                                                                      " << std::endl;
myfile << "                                                               *@@               &*        /@@                                  *@@                                                                    " << std::endl;
myfile << "                                                             (@%                 .@#         @@                                    @@                                                                  " << std::endl;
myfile << "                                                           %@.                     #@#      ,@*                                      &@                                                                " << std::endl;
myfile << "                                                        (@&                           &@@%@@@                                          .@@                                                             " << std::endl;
myfile << "                                                     &@@       .(&&&&&&&&&&&&..                                                           *@@.                                                         " << std::endl;
myfile << "                                                 *@@.       @@,                 .(@@#                                                         @@@                                                      " << std::endl;
myfile << "                                             ,@@# %@       *&                         @@                                                          @@/                                                  " << std::endl;
myfile << "                                          #@@.     &/      *&                           #@.                                                          (@&                                               " << std::endl;
myfile << "                                       #@&         &@      *&                             @#                                                            ,@@,                                           " << std::endl;
myfile << "                                    &@%          ,@#       %@*                            .@                                    @*                         /@@.                                        " << std::endl;
myfile << "                                 @@%           @@/           @@.                         @@                  @# .@@            @@.%@                        ,@@@@@@@&.                                 " << std::endl;
myfile << "                            #@@@@@@@@@@@@@@@@@/                 %@@.                   @@,                    /////             ,@. @@                               *@,                               " << std::endl;
myfile << "                          ,@@                                       *%@@@@@@@@@@@@@@@&/                                          ,@..@                                 @                               " << std::endl;
myfile << "                        @@.                                                                                                        (@.                                 (@@/                            " << std::endl;
myfile << "                      @&                                ((@@@@@@@@@@@@@@@@@@@@@#///////////@@@@@///////////%@@@@@@@@@@@@@@@@@@@@@((                                     @,@%                           " << std::endl;
myfile << "                    @@                      ,@@@@@&&                                                                                   &&@@@@&,                         ,@ @@                          " << std::endl;
myfile << "                   @@   @@@@@        (&@@&,                                         @@(                           %.                            ,&@@&/                   @( @/                         " << std::endl;
myfile << "                  @@    &@@@@   (@@/                                                  .@@                         @@                                   /@@(               /*/@                         " << std::endl;
myfile << "                 @@         .@@*                                                         @@                       %@                      &@               /@@.              @%                        " << std::endl;
myfile << "                (@        @@.              ./@@@@@&%*                                     *@(                     ,@                      @@                  .@@            (@,                       " << std::endl;
myfile << "               %@      .@@                             *#@@@/                               @@                    @@                     (@,                     @@           @&                       " << std::endl;
myfile << "               @/     @@    @@@@@&,,                          *@@@,                          %@                  /@.                     @%                        @@         *@.                      " << std::endl;
myfile << "              ,@     @@               ..@@@@@@@&%                  .(@@@.                     %@                 @&                     @@                          @@         @&                      " << std::endl;
myfile << "              ,@    @(                               (((@@@@@@//          #@@@/.               @&               @&                    %@#                (@%         #@        %@                      " << std::endl;
myfile << "               @/   @,                                           .%@@@@@,        %@@,     ,@@@@%%......(%@@@@@,@@                *@@@,               ,@@@.            %@       %@                      " << std::endl;
myfile << "               %@   @,                                                     @@@.     %@@@@.                      ,@@@/       #@@&.              /@@@@,                 .@       %@                      " << std::endl;
myfile << "                @@  @&          .@@@@@&((            (((((((((@@@@@@@@@@@@//  (@@@.                                  .&@@@@/              /@@@(                       .@       %@                      " << std::endl;
myfile << "                 @@ ,@/                                                    @@(                                           #@@        .@@@@                             .@       @/                      " << std::endl;
myfile << "                  &@. @@                                                #@%                                                 &@@@@@/.                                  .@      *@                       " << std::endl;
myfile << "                   *@( .@@                                             @&                                                     (@,                                     /@      @&                       " << std::endl;
myfile << "                     @@   &@@                                .@@@(   ,@(                                                        @&                                    @(     #@                        " << std::endl;
myfile << "                       @&     @@%                     .@@@@@,       *@*                                                          &@,@@@@@@@&%%%                     /@/     #@                         " << std::endl;
myfile << "                         &@/      &@@/         /@@@@%               @&                       (#%                                  %@                 ###@@@@      .@@      ,@,                         " << std::endl;
myfile << "                            .&@@#.     .%@@@&,                     %@                                              .%@&.           &@                          *@@.       @@.                          " << std::endl;
myfile << "                                  ,@@@@%        ,,@@@@@@@@@@@@@@@@@@.                                                     (%        @%                    %@@@#        *@@/                            " << std::endl;
myfile << "                                          /#@@@@@@%////.          @@       @@@@@@@@@@(                                        #     #@          //%@@@@@#         (@@@(                                " << std::endl;
myfile << "                                                                 *@,     @@  @@@@@@@@@(.&@@   %           @     ,&@@@@@@@@.          @@&&&....               %@@%                                      " << std::endl;
myfile << "                                                                 @@      @@# @@@@@@@@@#   ,@@  ((          #.@@* &@@@@@@@,@@        .@@@@&##############@@@#                                           " << std::endl;
myfile << "                                                                 @          /@@@@@@@@@   #@@                @@   @@@@@@@@,,@,        @(                                                                " << std::endl;
myfile << "                                                                #@                 *@@@@@                    .@@ @@@@@@@@  @,       @@                                                                 " << std::endl;
myfile << "                                                                @#                                               *@@@@@@**         /@                                                                  " << std::endl;
myfile << "                                                               /@                                                                  @(                                                                  " << std::endl;
myfile << "                                                               @*                                      &                          @@                                                                   " << std::endl;
myfile << "                                                              @@                                      .@                         ,@                                                                    " << std::endl;
myfile << "                                                             #@.                                      .@                         @@                                                                    " << std::endl;
myfile << "                                                             @#                                       .@(                        @&                                                                    " << std::endl;
myfile << "                                                            &@                                          @@.                     /@                                                                     " << std::endl;
myfile << "                                                            @*                        @@,                 @&                    /@                                                                     " << std::endl;
myfile << "                                                           *@                         @.                  @(                    /@                                                                     " << std::endl;
myfile << "                                                           @&                         #@@*    @@@.   @@@@@@                     /@                                                                     " << std::endl;
myfile << "                                                           @#                                                                   #@                                                                     " << std::endl;
myfile << "                                                          #@.                                                                   @%                                                                     " << std::endl;
myfile << "                                                          #@                                                                    @%                                                                     " << std::endl;
myfile << "                                                          @#                                                                    @%                                                                     " << std::endl;
myfile << "                                                          @#                                                                    (@                                                                     " << std::endl;
myfile << "                                                          @                                                                      (@                                                                    " << std::endl;
myfile << "                                                          @                                                       ,@@              @&                                                                  " << std::endl;
myfile << "                                                         @@                ,,,&&&&&&&&&@@@@@@@@@@@@@@@@@@@&&&&&%,.                  @@                                                                 " << std::endl;
myfile << "                                                         @@                                                                           @%                                                               " << std::endl;
myfile << "                                                         @*                                                                            ,@/                                                             " << std::endl;
myfile << "                                                         @*                                                                              #@,                                                           " << std::endl;
myfile << "                                                        #@                                                                                 &@                                                          " << std::endl;
myfile << "                                                        @#                                                                                   %@#                                                       " << std::endl;
myfile << "                                                       @@                                                                                       @@/                                                    " << std::endl;
myfile << "                                                      (@                                                                                           .@@/                                                " << std::endl;
myfile << "                                                     ,@,                                                                                               %@@                                             " << std::endl;
myfile << "                                                     @*                                                                                                   ,@@,                                         " << std::endl;
myfile << "                                                   .@*                                                                                                        @@.                                      " << std::endl;
myfile << "                                                  /@*                                                                                                            @@*                                   " << std::endl;
myfile << "                                                 @@                                                                                                                 @@,                                " << std::endl;
myfile << "                                               @@.                                                                                                                     @@.                             " << std::endl;
myfile << "                                             @@                                                                                                                          #@.                           " << std::endl;
myfile << "                                          .@@                                                                                                                              @@                          " << std::endl;
myfile << "                                        &@(                                                                                                                                  @&                        " << std::endl;
myfile << "                                     #@@                                                                                                                                      *@(                      " << std::endl;
myfile << "                                   @@                                                                                                                                           #@%                    " << std::endl;
myfile << "                   ,        ,/@@@@                                                                                                                                                 (@@.                " << std::endl;
myfile << "        ,&@@@@@@&@@&........                                                                                                                                                           *@@%            " << std::endl;
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm",72,45) {
	this->setTarget(target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{

	if(!this->checkForm(executor))
		return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm",25,5) {
	this->setTarget(target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{

	if(!this->checkForm(executor))
		return;
}
