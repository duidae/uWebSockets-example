# uWebSockets-example

## 0. source
* environment
  * CentOS 7
* uWebSockets
  * github(C++): https://github.com/uNetworking/uWebSockets
  * nodejs npm(Javascript): https://www.npmjs.com/package/uws

## 1. install related library
* $ sudo yum install openssl-devel libuv-devel

## 2. build & install uWebSockets
* build C++ source
  * $ git clone https://github.com/uNetworking/uWebSockets.git uWebSockets-source
  * $ make
  * $ sudo make install
* 我的這個repo只有放範例而已, git clone 後 make 產生 server-uws
  
## problems(solved)
* 找不到相關library
  * include<openssl.h> 找不到 openssl.h -> openssl-devel沒裝 -> $ yum install openssl-devel
  * 找不到 -luv -> libuv沒裝 -> $ yum install libuv-devel 
