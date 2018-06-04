

#ifndef Client_hpp
#define Client_hpp
/*
<composite name="messageHeader" description="Template ID and length of message root">
<type name="blockLength" primitiveType="uint16"/>
<type name="templateId"  primitiveType="uint16"/>
<type name="schemaId"    primitiveType="uint16"/>
<type name="version"     primitiveType="uint16"/>
</composite>
</types>
*/
//<message name="Establish" id="5000">
//<field name="Timestamp"         id="20204" type="TimeStamp" />
//<field name="KeepaliveInterval" id="20205" type="DeltaMillisecs" />
//<field name="Credentials"       id="20206" type="String20" />
//</message>

#include <time.h>
#include <string>
#include <stdio.h>

using namespace std;
class HeadMassage
{
private:
    string Timestamp; //+
    uint16_t IdTimestamp;//+
    string KeepaliveInterval;//+
    uint16_t IdKeepaliveInterval;//+
    uint32_t DeltaMillisecs;//+
    string Credentials;//+
    uint16_t IdCredentials;// +
    char String20[20];
    
public:
    HeadMassage()
    {
        struct tm *ptr;
        time_t It;
        It = time(NULL);
        ptr = localtime(&It);
        //printf("%s", asctime(ptr));
        string p=static_cast<string>(asctime(ptr));
        Timestamp=p;
    }
    //GETTER
    string GetTimestamp();
    uint16_t GetIdTimestamp();
    string GetKeepaliveInterval();
    uint16_t GetIdKeepaliveInterval();
    uint32_t GetDeltaMillisecs();
    string GetCredentials();
    uint16_t GetIdCredentials();
    char* GetString20();
    //SETTER
    void SetTimestamp(string _Timestamp);
    void SetIdTimestamp(uint16_t _IdTimestamp);
    void SetKeepaliveInterval(string _KeepaliveInterval);
    void SetIdKeepaliveInterval(uint16_t _IdKeepaliveInterval);
    void SetDeltaMillisecs(uint32_t _DeltaMillisecs);
    void SetCredentials(string _Credentials);
    void SetIdCredentials(uint16_t _IdCredentials);
    void SetSting20(char* _String20);
    
};


#endif /* Client_hpp */
