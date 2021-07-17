#ifndef PROJECT_NAME_SERVER_HPP
#define PROJECT_NAME_SERVER_HPP

#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>



class Server {
public:
	int start();

private:
	int _socket_init();

private:
	int _m_socket;


//	struct GradeTooLowException : public std::exception {
//		GradeTooLowException() throw() {};
//		virtual const char* what() const throw() {return "Grade is too low!";}
//	};
};


struct Server_start_exception : public std::exception {
	enum eWhat_messages {

	};
	std::string what_message;
	Server_start_exception() throw() {};
	virtual const char *what() const throw() { return "Grade is too high!";};
};

#endif //PROJECT_NAME_SERVER_HPP
