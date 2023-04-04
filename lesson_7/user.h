#ifndef user.h
#define user_h
class User {
	char* name;
	char* password;

public:
	void setUserName(char* name);
	void setUserPassword(char* password);
	char* getUserName();
	char* getUserPassword();
	User();
	~User();
	User(User& const other);
	User& operator=(User& const other);
	User& operator=(User&& other);
	User(User&& other);
	void writeToFile();
	void readFromFile(char* nameNewUser);
};
#endif // !user.h

