section .data
    format db 'Hello, Holberton', 0   ; Thisstore a null-terminated string

section .text
global main
extern printf

main:
    push format             ; the address of the formated string is pished onto the stack
    call printf             ; Calling the printf function
    add esp, 4              ; stack clean up after the call

    xor eax, eax            ; the return value is det to zero
    ret                     ; Return

