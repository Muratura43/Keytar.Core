#include "main.h"
#include "keytar.h"
#include <iostream>

KEYTAR char* get_password(const char* str)
{
	std::string serv(str);
	std::string pass;
	std::string err;

	keytar::FindPassword(serv, &pass, &err);

	char* result = new char[pass.length() + 1];
	strcpy(result, pass.c_str());

	if (!err.empty())
	{
		std::cout << err << "\n";
	}

	return result;
}

KEYTAR int create_password(const char* service, const char* account, const char* password)
{
	std::string serv(service);
	std::string acc(account);
	std::string pass(password);
	std::string err;

	int result = (int)keytar::SetPassword(serv, acc, pass, &err);

	if (!err.empty())
	{
		std::cout << err << "\n";
	}

	return result;
}

KEYTAR int delete_password(const char* service, const char* account)
{
	std::string serv(service);
	std::string acc(account);
	std::string err;

	int result = (int)keytar::DeletePassword(serv, acc, &err);

	if (!err.empty())
	{
		std::cout << err << "\n";
	}

	return result;
}