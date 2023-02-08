#ifndef __REGISTRAR_COMMON_
#define __REGISTRAR_COMMON_


#define CPPHTTPLIB_OPENSSL_SUPPORT
#include"httplib.h"

using namespace httplib;

class ProtectedHandler :public httplib::SSLServer{

};


class unProtectedHandler:public httplib::Server  {
    unProtectedHandler &Get(const std::string &pattern, Handler handler)
    {
        // httplib::Server temp_super_server = httplib::Server::Get(pattern,[](const httplib::Request &, httplib::Response &res){res.set_content("hello name ", "text/plain");});
        // return static_case<unProtectedHandler> (&temp_super_server);
        std::cout<<"get request from "<<std::endl; 
        
        return *this;
    }
};



// unProtectedHandler un_protected_server;
// un_protected_server.listen("127.0.0.1",8000);




#endif