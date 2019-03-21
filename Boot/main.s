# Declare constants for the multiboot header.
.set ALIGN,    1<<0             # align loaded modules on page boundaries
.set MEMINFO,  1<<1             # provide memory map
.set FLAGS,    ALIGN | MEMINFO  # this is the Multiboot 'flag' field
.set MAGIC,    0x1BADB002       # 'magic number' lets bootloader find the header
.set CHECKSUM, -(MAGIC + FLAGS) # checksum of above, to prove we are multiboot

# Declare a header as in the Multiboot Standard.
.section .multiboot
.align 4
.long MAGIC
.long FLAGS
.long CHECKSUM

# Reserve a stack for the initial thread.
.section .bss
.align 16
stack_bottom:
.skip 16384 # 16 KiB
stack_top:

# The kernel entry point.
.section .text

.global _start
.type _start, @function

_start:
	movl $stack_top, %esp

	# Transfer control to the main kernel.
	push %ebx
	call kmain

	# Hang if kernel_main unexpectedly returns.
	# cli
1:	hlt
	jmp 1b

# Keyboard Interrupt Handler
.global Keyboard_EventHandlerASM
.extern Keyboard_OnInterrupt

Keyboard_EventHandlerASM:
	call    Keyboard_OnInterrupt
	iret

.global Serial_Port1InterruptHandlerASM
.extern Serial_Port1InterruptHandler

Serial_Port1InterruptHandlerASM:
	call Serial_Port1InterruptHandler
	iret

.global I8042_FirstPortInterruptHandlerASM
.extern I8042_FirstPortInterruptHandler

I8042_FirstPortInterruptHandlerASM:
	call I8042_FirstPortInterruptHandler
	iret

.global I8042_SecondPortInterruptHandlerASM
.extern I8042_SecondPortInterruptHandler

I8042_SecondPortInterruptHandlerASM:
	call I8042_SecondPortInterruptHandler
	iret

.size _start, . - _start

