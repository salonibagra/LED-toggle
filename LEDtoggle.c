#include<stdio.h>
#include"LEDtoggleheader.h"
#include<stdlib.h>

 {int initialize_led(LED.led_no, int n)
    for(i=0:i<n:i++)

    {
        *(led[i].status)=0;
    }

    int set_led(LED.LED_no)
    {
        *(LED_no->status)=1

    }

    int toggle_led(LED.LED_no)
    {
         *(LED_no->status)=! *(LED_no->status);
    }
 }

int main()
{
    int n,m,led{100},p;
    printf("enter the number of LEDs");
    scanf("%d",&n);
    printf("enter the number of toggles");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        led{i} =i+1;
    }

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
            {if (i%2==0)
            {
                toggle_led(led[i]);
            }
        }
    }

    return();



}
