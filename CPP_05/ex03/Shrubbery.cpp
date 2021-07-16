#include "Form.hpp"


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
myfile.close();	
}
