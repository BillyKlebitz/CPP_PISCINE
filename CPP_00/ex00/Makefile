
NAME = megaphone
CPP = clang++ 
CPP_FLAGS = -Wall -Wextra -Werror 
OBJS = megaphone.o

all:	 $(NAME)

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

