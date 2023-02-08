#ifndef __REGISTRAR_CLIENT_

#define __REGISTRAR_CLIENT_

#include<string>
#include"registrar_common.hpp"
class registrar_client
{
public:
    static void getData(int registrar_ip, int registrar_port, int agent_id, std::string tls_context);
    // static void doRegisterAgent(registrar_ip, registrar_port, agent_id, 
    //                       ek_tpm, ekcert, aik_tpm, mtls_cert=None, contact_ip=None, contact_port=None);
    // static void doActivateAgent(registrar_ip, registrar_port, agent_id, key);
    // static void doRegistrarDelete(registrar_ip, registrar_port, agent_id, tls_context);
    // static void doRegistrarList(registrar_ip, registrar_port, tls_context);

};

#endif