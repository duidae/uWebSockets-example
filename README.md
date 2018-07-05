# uWebsocket-test

## 0. source
* enviroment
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
  * $ make
  * $ sudo make install
* Node.js
  * $ npm init
  * $ npm install uws --save
  
## problem
* problem 1: 找不到相關library
  * include<openssl.h> 找不到 openssl.h -> openssl-devel沒裝 -> $ yum install openssl-devel
  * 找不到 -luv -> libuv沒裝 -> $ yum install libuv-devel 

* problem 2: Node.js 執行錯誤
  * 官網是說有兩個可能
    * There was no C++11 compiler available at installation.
    * Your system is not an official Tier 1 Node.js platform.
  * 可我g++已經是gcc version 4.8.5, 有支援c++11, 所以應該是Node.js太舊
    * CentOS 用 yum install下來的node.js太舊(v6.14.3), 要升級, 否則uws執行時會有error
    * [Node.js更新方法](http://eddychang.me/blog/javascript/58-nodes-update.html)
    * Node.js管理版本的工具叫做'n'...設計這些工具的人應該也要考慮user在google時的體驗...n這種關鍵字不是很難google嗎...
    * $ sudo n stable
    * 裝完shell要重開...
    
```
[Error] Error: Compilation of µWebSockets has failed and there is no pre-compiled binary available for your system. Please install a supported C++11 compiler and reinstall the module 'uws'.
```
