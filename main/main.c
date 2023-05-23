#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "uart_task.h"


  




void app_main(void)
{

    xTaskCreate(uart_task, "app_task", 5000, NULL, 10, NULL);



}
