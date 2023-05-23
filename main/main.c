#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


   


void app_main(void)
{
    printf("My app template!\n");
    int counter = 0; 
     while (1)
    {
        
        printf("My app template!\n");

        while(1){
            printf("counter %d \r\n",counter);
            vTaskDelay(1000 / portTICK_PERIOD_MS);
            counter++;


        }

    }

}
