#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>
#include "Massage/HeadM.hpp"


using namespace std;
void AddStirng (HeadMassage & Object)
{
    Object.SetTimestamp("Timestamp");
    Object.SetIdTimestamp(20207);
    Object.GetTimestamp();
    
    Object.SetKeepaliveInterval("KeepaliveInterval");
    Object.SetIdKeepaliveInterval(20205);
    Object.SetDeltaMillisecs(5000);
    
    Object.SetCredentials("Credentials");
    Object.SetIdCredentials(20208);
    Object.SetSting20("twFZct_00FC2");
}
int main()
{
    HeadMassage Establish;
    AddStirng(Establish);
   
}
//ftp://ftp.rasla.ru/Books/Linux/Основы_программирования_в_Linux.pdf




