cpp = clang++ -Wall -Wextra -Werror

Name = megaphone

src = megaphone.cpp

all: $(Name)

$(Name):
	@$(cpp) $(src) -o $(Name)
clean:
	@rm -rf $(Name)
fclean:clean
re: clean all
.PHONY: all clean re