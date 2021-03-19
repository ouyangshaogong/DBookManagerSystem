#ifndef COMMONCLIENT_H
#define COMMONCLIENT_H

//命令消息从100开始
#define CMD_MSG_DATA_COMMAND 100

//普通消息从1000开始
#define MSG_ADDLEVEL 9999

#define MSG_ADDUSER 1000
#define MSG_DELETEUSER 1001
#define MSG_MODIFYUSER 1002
#define MSG_QUERYUSER 1003
#define MSG_QUERYALLUSER 1004
#define MSG_MODIFYPASSWD 1010
#define MSG_LOGINHISTORY 1011

#define MSG_ADDBOOK 1005
#define MSG_DELETEBOOK 1006
#define MSG_MODIFYBOOK 1007
#define MSG_QUERYBOOK 1008
#define MSG_QUERYALLBOOK 1009



#endif // COMMONCLIENT_H
