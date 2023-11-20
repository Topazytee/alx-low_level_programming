extern printf;

    global main; the standard gcc entry point

section .data
msg:    db "Hello, Holberton", 0xa
fmt:    db "%s", 10, 0

section .text
    main:; the program label for the entry point
    mov    rax, 1
    mov    rdi, 1
    mov    rsi, msg
    mov    rdx, 13
    syscall

    mov    rax, 60
    mov    rdi, 0
    syscall
