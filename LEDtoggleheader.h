#ifndef LEDtoggle_H
#define LEDtoggle_H

struct{
int LED_no;
int *status;
}LED;

int initialize_led(LED.led_no, int n);
int set_led(LED.led_no);
int reset_LED(LED.led_no);
int toggle_LED(LED.led_no);




#endif // LEDtoggle_H
