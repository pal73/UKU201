
//***********************************************
//����
extern char bRXIN1;
extern char UIB1[100];
extern char flag1;
extern char rx_buffer1[RX_BUFFER_SIZE1];
extern char tx_buffer1[TX_BUFFER_SIZE1];
extern unsigned short rx_wr_index1,rx_rd_index1,rx_counter1;
extern unsigned short tx_wr_index1,tx_rd_index1,tx_counter1;
extern char rx_buffer_overflow1;
extern char tx1_restart;

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
void putchar1(char c);