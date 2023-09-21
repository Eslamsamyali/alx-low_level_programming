; 101-hello_holberton.asm
; A 64-bit program in assembly that prints Hello, Holberton, followed by a new line

        global  main            ; make main function visible to linker
        extern  printf          ; use printf function from libc

        section .data           ; data section
msg:    db      "Hello, Holberton", 10, 0 ; message to print, 10 is newline, 0 is null terminator

        section .text           ; code section
main:                           ; main function
        push    rbp             ; save base pointer
        mov     rbp, rsp        ; set base pointer to stack pointer
        mov     rdi, msg        ; set first argument to msg address
        mov     rax, 0          ; set rax to 0 for variadic function
        call    printf          ; call printf function
        mov     rax, 0          ; set return value to 0
        pop     rbp             ; restore base pointer
        ret                     ; return from main function
