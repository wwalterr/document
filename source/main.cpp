#include "headers.hpp"

int main(const int argc, const char *argv[], const char *envp[])
{
	//
	// Create an user
	//
	// User *user = new User("First Name", "Second Name", "e-mail@email.com", "password");
	//
	User *user = new User();

	//
	// Search for an user
	//
	user->search_one_by_id("5d0afc602a554e628e63ddb2");

	return 0;
}