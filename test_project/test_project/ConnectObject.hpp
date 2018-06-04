#ifndef ConnectObject_hpp
#define ConnectObject_hpp

#include <stdio.h>


/*
 int sockfd;
 volatile int port;
 struct sockaddr_in address;
 int result;
 char ch[20];
 sockfd=socket(AF_INET, SOCK_STREAM, 0);
 if (sockfd<0)
 {
 cout<<"error";
 }
 
 address.sin_family=AF_INET;
 address.sin_port=htons(59000);//htons59000
 address.sin_addr.s_addr=inet_addr("91.208.232.53");
 
 if ((result=connect(sockfd, (struct sockaddr*)&address,sizeof(address))==-1))
 {
 perror("Ошибка: соединения");
 close(sockfd);
 return EXIT_FAILURE;
 }
 else
 {
 perror("Connect");
 }
 read(sockfd,&ch,1);
 write(sockfd,&ch,1);
 
 while(1)
 {
 bzero(ch, strlen(ch));
 
 size_t rc = read(sockfd, ch,strlen(ch) );
 if ( rc > 0)
 {
 string tester (ch);
 cout << ": "<< tester << endl;
 
 if(tester == "exit_server")
 break;
 }
 }
 close(sockfd);
 exit(0);
 */
#endif /* ConnectObject_hpp */
