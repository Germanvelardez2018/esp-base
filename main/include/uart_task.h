

#ifndef INC_UART_TASK_H
#define INC_UART_TASK_H

#define ECHO_UART_PORT_NUM (2)
#define ECHO_UART_BAUD_RATE (115200)
#define ECHO_TASK_STACK_SIZE (2048)


void uart_task(void *arg);


#endif






