
NAME = Triangle
CPP = clang++ 
CPP_FLAGS = -std=c++98 -Wall -Wextra -Werror 
OBJS = main.o Fixed.o Point.o

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
