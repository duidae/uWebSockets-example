# uWebSockets-example

## 0. source
* environment
  * CentOS 7
* uWebSocket
  * github(C++): https://github.com/uNetworking/uWebSockets
  * nodejs npm(Javascript): https://www.npmjs.com/package/uws
* websocket
  * github: https://github.com/theturtle32/WebSocket-Node

## 1. install related library
* $ sudo yum install openssl-devel libuv-devel

## 2. build & install
* C++
  * $ mkdir -p uWebSockets-example
  * $ cd uWebSockets-example
  * $ git clone https://github.com/uNetworking/uWebSockets.git
  * $ make
  * $ sudo make install
  
## problems(solved)
* problem 1: 找不到相關library
  * include<openssl.h> 找不到 openssl.h -> openssl-devel沒裝 -> $ yum install openssl-devel
  * 找不到 -luv -> libuv沒裝 -> $ yum install libuv-devel 
