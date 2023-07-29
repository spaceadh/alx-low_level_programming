SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

        SECTION .text
	    extern printf
    	global main

global _start

main:
    ; Move the address of hello to rsi
	mov esi, msg

	mov edi, fmt
	mov eax, 0

    ; Call printf
	call printf

    ; Exit the program
	mov eax, 0
	ret
