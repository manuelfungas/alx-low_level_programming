section .data
	hello_string db "Hello, Holberton", 0
	format_string db "%s", 10, 0 ; %s is for string, 10 is for newline, 0 is for null terminator

section .text
	global main
	extern printf

main:
	; Set up stack frame
	push rbp
	mov rbp, rsp

	; Call printf
	mov rdi, format_string
	mov rsi, hello_string
	call printf

	; Clean up stack frame
	mov rsp, rbp
	pop rbp

	; Exit the program
	ret

