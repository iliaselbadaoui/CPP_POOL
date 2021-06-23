compile = clang++ -Werror -Wextra -Wall
src = *.cpp
Name = Ref_VS_Ptr

all : $(Name)

$(Name):
	@$(compile) $(src) -o $(Name)
clean:
	@rm -rf $(Name)
fclean: clean

re: fclean all

.PHONY: all clean fclean re