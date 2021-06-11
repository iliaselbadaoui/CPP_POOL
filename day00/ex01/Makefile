cpp = clang++ -Wall -Wextra -Werror

Name = Phonebook

src = main.cpp Contact.cpp Phonebook.cpp
inc = -IContact.hpp -IPhonebook.hpp

all: $(Name)

$(Name):
	@$(cpp) $(src) $(inc) -o $(Name)
clean:
	@rm -rf $(Name)
re: clean all
.PHONY: all clean re