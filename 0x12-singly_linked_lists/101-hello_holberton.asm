section .data
    hello db "Hello, Holberton", 0
    fmt db "%s", 10, 0

section .text
    extern printf

global _start

_start:
    ; Move the address of hello to rsi
    mov rsi, hello
    ; Move the address of fmt to rdi
    mov rdi, fmt
    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60        ; syscall number for exit
    xor rdi, rdi      ; exit status 0
    syscall
