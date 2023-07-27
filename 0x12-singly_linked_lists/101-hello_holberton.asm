section .data
    hello_msg db "Hello, Holberton", 0    ; Null-terminated string to be printed

section .text
    global main
    extern printf

main:
    push rbp                        ; Save the base pointer
    mov rdi, hello_msg              ; Set the first argument (format string)
    call printf                     ; Call the printf function
    pop rbp                         ; Restore the base pointer

    ; Clean up and exit the program
    xor rax, rax                    ; Set the return value to 0 (success)
    ret                             ; Return from main

