NAME = Form
CPP = clang++ 
CPPFLAGS =  -std=c++98 -pedantic -Wall -Wextra -Werror 
OBJS = main.o Bureaucrat.o Form.o

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
