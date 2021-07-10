NAME = DiamondTrap
CPP = clang++ 
CPPFLAGS =  -std=c++98 -pedantic -Wall -Wextra -Werror -Wshadow -Wno-shadow
OBJS = main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o

all:	$(NAME)

$(NAME):    $(OBJS)
		  $(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
%.o: %.cpp
	   $(CPP) $(CPPFLAGS) -c $< 
clean:
	   rm -f $(OBJS)
fclean: clean 
	   rm -f $(NAME)
re: fclean all

.PHONY: all, clean, fclean, re
