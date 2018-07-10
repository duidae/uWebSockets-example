#include <uWS/uWS.h>
#include <iostream>

int main()
{
    uWS::Hub h;

    h.onMessage([](uWS::WebSocket<uWS::SERVER> *ws, char *message, size_t length, uWS::OpCode opCode) {
		std::cout << "Received message: " << message << std::endl;
    });

    if (h.listen(8080)) {
        h.run();
    }
}
