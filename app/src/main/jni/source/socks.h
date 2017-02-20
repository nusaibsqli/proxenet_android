#define SOCKS_REQUEST_MAXLEN 0x100
#define SOCKS_VERSION 0x04
#define SOCKS_REQUEST_CONNECT 0x01
#define SOCKS_RESPONSE_GRANTED 0x5a
#define SOCKS_RESPONSE_REJECTED_FAILED 0x5b
#define SOCKS_RESPONSE_REJECTED_CLIENT_FAILED 0x5c
#define SOCKS_RESPONSE_REJECTED_USERID_FAILED 0x5d

int proxenet_socks_connect(sock_t, char*, int, bool);
