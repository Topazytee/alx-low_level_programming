global main

section .data
msg:    db "Hello, Holberton", 0xa
fmt:    db "%s", 10, 0

section .text
main:
    mov    rax, 1
    mov    rdi, 1
    mov    rsi, msg
    mov    rdx, 13
    syscall

    mov    rax, 60
    mov    rdi, 0
    syscall
