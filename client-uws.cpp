#include <iostream>
#include <uWS/uWS.h>

int main(int argc, char *argv[])
{
	uWS::Hub h;

	h.onConnection([&h](uWS::WebSocket<uWS::CLIENT> *ws, uWS::HttpRequest req) {
			char message[] = "hello";
			std::cout << "Client send: " << message << std::endl;
			ws->send(message);
			h.getDefaultGroup<uWS::CLIENT>().close();
	});

	std::cout << "Connection started." << std::endl;

	h.connect("ws://localhost:8080", nullptr);
	h.run();

	std::cout << "Connection terminated." << std::endl;

	return 0;
}
