#pragma once
class programmer{
private:
	char* name;
	int work_experience;
	float salary;
	char* workingOnProgect;
	char* programming_language;
public:
	void set_name(char* name);
	void set_work_experience(int work_experience);
	void set_salary(float salary);
	void set_workingOnProgect(char* workingOnProgect);
	void set_programming_language(char* programming_language);
	
	char* get_name();
	int get_work_experience();
	float get_salary();
	char* get_workingOnProgect();
	char* get_programming_language();
	
	void print();




};

