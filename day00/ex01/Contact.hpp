#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <iomanip>
# define string std::string
class Contact
{
private:
	string fname, lname, nname, login, address,
		email, birth, phone, meal, undwear, secret;
public:
	Contact();
	~Contact();

	// GETTERS
	string getFname(void);
	string getLname(void);
	string getNname(void);
	string getLogin(void);
	string getAddress(void);
	string getEmail(void);
	string getBirth(void);
	string getPhone(void);
	string getMeal(void);
	string getUnderwear(void);
	string getSecret(void);
	
	// SETTERS
	void setFname(string value);
	void setLname(string value);
	void setNname(string value);
	void setLogin(string value);
	void setAddress(string value);
	void setEmail(string value);
	void setBirth(string value);
	void setPhone(string value);
	void setMeal(string value);
	void setUnderwear(string value);
	void setSecret(string value);
};

#endif