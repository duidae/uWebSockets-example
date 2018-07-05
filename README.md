# uWebsocket-test

## 0. source
* github(C++): https://github.com/uNetworking/uWebSockets
* nodejs npm(Javascript): https://www.npmjs.com/package/uws

## 1. install related library
* $ sudo yum install openssl-devel libuv-devel
* 找不到 -luv -> libuv沒裝 -> yum install libuv-devel 

## 2. build & install
* C++
  * $ make
  * $ sudo make install
* Node.js
  * $ npm init
  * $ npm install uws --save
  
## problem
* CentOS 用 yum install下來的node.js太舊(v6.14.3), 要升級, 否則uws執行時會有error
  * [Node.js更新方法](http://eddychang.me/blog/javascript/58-nodes-update.html)
  * sudo n stable
``
[Error] Error: Compilation of µWebSockets has failed and there is no pre-compiled binary available for your system. Please install a supported C++11 compiler and reinstall the module 'uws'.
``
