#include "HeadM.hpp"
#include <iostream>
string HeadMassage::GetTimestamp()
{
    struct tm *ptr;
    time_t It;
    It = time(NULL);
    ptr = localtime(&It);
    //printf("%s", asctime(ptr));
    string p=static_cast<string>(asctime(ptr));
    Timestamp=p;
    return Timestamp;
}
uint16_t HeadMassage:: GetIdTimestamp()
{
    return IdTimestamp;
}
string HeadMassage:: GetKeepaliveInterval()
{
    return KeepaliveInterval;
}
uint16_t HeadMassage:: GetIdKeepaliveInterval()
{
    return IdKeepaliveInterval;
}
uint32_t HeadMassage:: GetDeltaMillisecs()
{
    return DeltaMillisecs;
}
string HeadMassage:: GetCredentials()
{
    return Credentials;
}
uint16_t HeadMassage:: GetIdCredentials()
{
    return IdCredentials;
}
char* HeadMassage::GetString20()
{
    return String20;
}

void HeadMassage:: SetTimestamp(string _Timestamp)
{
    this->Timestamp=_Timestamp;
}
void HeadMassage:: SetIdTimestamp(uint16_t _IdTimestamp)
{
    this->IdTimestamp=_IdTimestamp;
}
void HeadMassage:: SetKeepaliveInterval(string _KeepaliveInterval)
{
    this->KeepaliveInterval=_KeepaliveInterval;
}
void HeadMassage:: SetIdKeepaliveInterval(uint16_t _IdKeepaliveInterval)
{
    this->IdKeepaliveInterval=_IdKeepaliveInterval;
}
void HeadMassage:: SetDeltaMillisecs(uint32_t _DeltaMillisecs)
{
    this->DeltaMillisecs=_DeltaMillisecs;
}

void HeadMassage:: SetCredentials(string _Credentials)
{
    this->Credentials=_Credentials;
}

void HeadMassage:: SetIdCredentials(uint16_t _IdCredentials)
{
    this->IdCredentials=_IdCredentials;
}

void HeadMassage:: SetSting20(char* _String20)
{
    char* buf=new char [strlen(_String20)];
    strcpy(buf, _String20);
    strcpy(String20, buf);
    delete[] buf;
//    if (_String20.size()<=strlen(this->String20))
//    {
//        for (int i=0;i<_String20.size();++i)
//        {
//            this->String20[i]=_String20[i];
//        }
//    }
    
}
