#include <uWS/uWS.h>

int main()
{
    uWS::Hub h;

    h.onMessage([](uWS::WebSocket<uWS::SERVER> *ws, char *message, size_t length, uWS::OpCode opCode) {
        ws->send(message, length, opCode);
		printf("%s\n", message);
    });

    if (h.listen(8080)) {
        h.run();
    }
}
