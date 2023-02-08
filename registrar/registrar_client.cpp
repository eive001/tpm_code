#include "registrar_client.hpp"
#include <iostream>
void registrar_client::getData(int registrar_ip, int registrar_port, int agent_id, std::string tls_context)
{
    std::cout<<"hello this is in get data"<<std::endl;
    httplib::Client cli("127.0.0.1",8000);

    auto res = cli.Get("hi");
    std::cout<<"body is"<<res->body<<std::endl;



    std::cout<<"hello there is out of  getdata"<<std::endl;

}