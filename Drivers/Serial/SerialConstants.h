#pragma once

#define SERIAL_PORT_1_ADDRESS 0x03F8
#define SERIAL_PORT_2_ADDRESS 0x02F8
#define SERIAL_PORT_3_ADDRESS 0x03E8
#define SERIAL_PORT_4_ADDRESS 0x02E8

#define SERIAL_DLAB_DIVISOR_LSB_REGISTER_OFFSET 0x00
#define SERIAL_DLAB_DIVISOR_MSB_REGISTER_OFFSET 0x01

#define SERIAL_DATA_REGISTER_OFFSET              0x00
#define SERIAL_INTERRUPT_REGISTER_OFFSET         0x01
#define SERIAL_INTERRUPT_ID_REGISTER_OFFSET 0x02
#define SERIAL_FIFO_CTRL_REGISTER_OFFSET 0x02
#define SERIAL_LINE_CONTROL_REGISTER_OFFSET      0x03
#define SERIAL_MODEM_CONTROL_REGISTER_OFFSET     0x04
#define SERIAL_LINE_STATUS_REGISTER_OFFSET       0x05
#define SERIAL_MODEM_STATUS_REGISTER_OFFSET      0x06
#define SERIAL_SCRATCH_REGISTER_OFFSET           0x07

#define SERIAL_BAUD_DIVISOR_115200 1
#define SERIAL_BAUD_DIVISOR_57600  2
#define SERIAL_BAUD_DIVISOR_38400  3
#define SERIAL_BAUD_DIVISOR_19200  6
#define SERIAL_BAUD_DIVISOR_9600   12
#define SERIAL_BAUD_DIVISOR_4800   24
#define SERIAL_BAUD_DIVISOR_2400   48
#define SERIAL_BAUD_DIVISOR_1200   96 
#define SERIAL_BAUD_DIVISOR_300    384
#define SERIAL_BAUD_DIVISOR_50     2304

#define SERIAL_DLAB_ENABLE_MASK  0x80
#define SERIAL_DLAB_DISABLE_MASK 0x7F

#define SERIAL_DATA_BITS_CLEAR_MASK 0xFC
#define SERIAL_DATA_BITS_5_MASK     0x00
#define SERIAL_DATA_BITS_6_MASK     0x01
#define SERIAL_DATA_BITS_7_MASK     0x02
#define SERIAL_DATA_BITS_8_MASK     0x03

#define SERIAL_STOP_BITS_CLEAR_MASK 0xFB
#define SERIAL_STOP_BITS_1_MASK     0x00
#define SERIAL_STOP_BITS_2_MASK     0x04

#define SERIAL_PARITY_CLEAR_MASK 0xC7
#define SERIAL_PARITY_NONE_MASK  0x00
#define SERIAL_PARITY_ODD_MASK   0x08
#define SERIAL_PARITY_EVEN_MASK  0x18
#define SERIAL_PARITY_MARK_MASK  0x28
#define SERIAL_PARITY_SPACE_MASK 0x38

#define SERIAL_STATUS_DATA_READY                 0x01
#define SERIAL_STATUS_OVERRUN_ERROR              0x02
#define SERIAL_STATUS_PARITY_ERROR               0x04
#define SERIAL_STATUS_FRAMING_ERROR              0x08
#define SERIAL_STATUS_BREAK_INDICATOR            0x10
#define SERIAL_STATUS_TRANSMITTER_HOLD_REG_EMPTY 0x20
#define SERIAL_STATUS_TRANSMITTER_EMPTY          0x40
#define SERIAL_STATUS_IMPENDING_ERROR            0x80

#define SERIAL_IIR_INTERRUPT_PENDING    0x00
#define SERIAL_IIR_NO_INTERRUPT_PENDING 0x01
#define SERIAL_IIR_MODEM_STATUS_CHANGE  0x00
#define SERIAL_IIR_THRE                 0x02
#define SERIAL_IIR_RX_DATA_AVAILABLE    0x04
#define SERIAL_IIR_LINE_STATUS_CHANGE   0x06
#define SERIAL_IIR_CHAR_TIMEOUT         0x0C