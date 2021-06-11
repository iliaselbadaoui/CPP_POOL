cpp = clang++ -Wall -Wextra -Werror

Name = ex00

src = megaphone.cpp

all: $(Name)

$(Name):
	@$(cpp) $(src) -o $(Name)
clean:
	@rm -rf $(Name)
re: clean all
.PHONY: all clean re