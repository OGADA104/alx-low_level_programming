section .data
    hello db "Hello, Holberton", 0  ; Null-terminated string for printf

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello  ; Pass the format string to printf
    call printf
    add rsp, 8      ; Restore the stack pointer
    xor rax, rax   ; Return 0
    ret

