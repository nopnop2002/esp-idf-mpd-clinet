#define CMD_LEFT  		100
#define CMD_LONG_LEFT	150
#define CMD_MIDDLE  	200
#define CMD_LONG_MIDDLE	250
#define CMD_RIGHT  		300
#define CMD_LONG_RIGHT	350
#define CMD_MPC  		400
#define CMD_ENCODER_UP  500
#define CMD_ENCODER_DN  550
#define CMD_HALT 		900

typedef struct {
    char command[16];
    TaskHandle_t taskHandle;
} REQUEST_t;

typedef struct {
    char command[16];
    char payload[512];
    TaskHandle_t taskHandle;
} RESPONSE_t;

