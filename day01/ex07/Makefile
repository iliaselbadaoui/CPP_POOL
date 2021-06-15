compile = clang++ -Wall -Wextra -Werror
src = *.cpp
Name = replace

all: $(Name)

$(Name):
	@$(compile) $(src) -o $(Name)
clean:
	@rm -rf $(Name)
fclean: clean
	@rm -rf *.replace

re: fclean all

.PHONY: all clean fclean re