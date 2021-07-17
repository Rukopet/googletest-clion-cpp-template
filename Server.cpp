#include "Server.hpp"

int Server::start() {
	return 0;
}



//TODO need adding port for that
#define SOME_PORT 10000

int Server::_socket_init() {
	_m_socket = socket(PF_INET, SOCK_STREAM, 0);

	sockaddr_in sa_server {0};
	sa_server.sin_addr.s_addr = INADDR_ANY;
	sa_server.sin_family = AF_INET;
	sa_server.sin_port = htons(SOME_PORT);
}
