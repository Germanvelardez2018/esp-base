#include "uart_task.h"

#include "freertos/FreeRTOS.h"
#include "driver/uart.h"
#include "driver/gpio.h"





/* Configure parameters of an UART driver,
     * communication pins and install the driver */
    uart_config_t uart_config = {
        .baud_rate = ECHO_UART_BAUD_RATE,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_DEFAULT,
    };


void uart_task(void *arg){

    printf("My app !\n");
    int counter = 0;
    while(1){
        printf("counter %d \r\n",counter);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        counter++;
    }

   }


