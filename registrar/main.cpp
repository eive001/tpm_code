#include<iostream>
#include"registrar_client.hpp"


//for fork
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main()
{


   pid_t pid = fork();

   if(pid < 0 ){
      cout<<"创建进程失败"<<endl;
   }else if (pid == 0){ //子进程
      unProtectedHandler un_protected_server;
      un_protected_server.listen("127.0.0.1",8000);
   } else {   //父进程
      registrar_client::getData(1,1,1,"aa");
   }


  


   

   return 0;

}
