CPP_SHARED := -std=c++11 -O3 -I src -shared -fPIC src/Extensions.cpp src/Group.cpp src/Networking.cpp src/Hub.cpp src/Node.cpp src/WebSocket.cpp src/HTTPSocket.cpp src/Socket.cpp src/Epoll.cpp src/Room.cpp
CPP_OPENSSL_OSX := -L/usr/local/opt/openssl/lib -I/usr/local/opt/openssl/include
CPP_OSX := -stdlib=libc++ -mmacosx-version-min=10.7 -undefined dynamic_lookup $(CPP_OPENSSL_OSX)

all: server-uws.cpp client-uws.cpp
	$(CXX) -std=c++11 -O3 server-uws.cpp -Isrc -o server-uws -lpthread -L. -luWS -lssl -lcrypto -lz -luv
	$(CXX) -std=c++11 -O3 client-uws.cpp -Isrc -o client-uws -lpthread -L. -luWS -lssl -lcrypto -lz -luv
.PHONY: clean
clean:
	rm -f server-uws
	rm -f client-uws
