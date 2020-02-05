output macro var
lea dx,var
mov ah,09h
int 21h
endm

.model small
.stack 400h
.data
msg1 db 10,13,'1: Convert HEX to BCD',10,13,'$'
msg2 db '2: Convert BCD to HEX',10,13,'$'
msg3 db '3: Exit',10,13,'$'
msg4 db 'EXIT',10,13,'$'
msg5 db 10,13,'Enter 5-Digit BCD number:$'
msg6 db 10,13,'Enter hexadecimal number:$'
msg7 db 'Enter your choice:$'
msg8 db 10,13,'Result:$'
msg9 db 10,13,'Invalid input',10,13,'$'
a db 5 dup(0)
b db 4 dup(0)
.code

mov ax,@data
mov ds,ax

menu:   output msg1    ;DISPLAY_MENUE
        output msg2
        output msg3
        output msg7
        mov ah,01h     
        int 21h
        cmp al,33h
        je label1
        cmp al,32h
        je label2
        cmp al,31h
        je label3

label5: cmp al,30h
        jb labela
        sub al,30h      ;subtract 30 if input char in number
        mov [si],al
        inc si
        jmp ab
        

label6: cmp al,41h
        jb labela
        sub al,37h      ;subtract 37 if input char is capital alphabet
        mov [si],al
        inc si
        jmp ab
        

label7: cmp al,51h
        jb labela
        sub al,57h     ;subtract 57 if input char is lower case
        mov [si],al
        inc si
        jmp ab

label3: output msg6    ;hex to bcd conversion
        lea si,b
        mov cl,04h
        loop2:mov ah,01h
        int 21h
        cmp al,39h
        jbe label5

        cmp al,46h     ;check if input char is number or alphabet
        jbe label6

        cmp al,66h
        jbe label7

        ab: loop loop2
        mov ax,0000h
        jmp label8
        call hex_to_bcd    ;procedure called
        

label1:output msg4         ;if input is invalid
        mov ah,4ch
        int 21h

label4:output msg9
jmp label2

labela:output msg9
jmp label3

label2: output msg5
        lea si,a
        mov cl,05h
        loop1:mov ah,01h
        int 21h
        cmp al,2fh
        jbe label4
        cmp al,3ah
        jae label4
        sub al,30h
        mov [si],al
        inc si
        loop loop1
        lea si,a

        mov ax,0000h
        mov bx,0000h
        mov cx,0000h
        mov al,[si]
        mov bx,10000
        mul bx
        mov cx,ax
        inc si
        mov ax,0000h
        mov al,[si]
        mov bx,1000
        mul bx
        add cx,ax
inc si

        mov ax,0000h
        mov al,[si]
        mov bx,100
        mul bx
        add cx,ax
        inc si
        
        mov ax,0000h
        mov al,[si]
        mov bx,10
        mul bx
        add cx,ax
        inc si

        mov ax,0000h
        mov al,[si]
        add cx,ax

        mov bx,cx
        mov ax,cx
        mov ch,04h
        mov cl,04h

        output msg8
        l2:rol bx,cl
        mov dl,bl
        and dl,0fh
        cmp dl,09h
        jbe l3
        add dl,07h

l3:     add dl,30h
        mov ah,02h
        int 21h
        dec ch

        jnz l2
        jmp menu

label8: lea si,b
        mov al,[si]
        mov cl,04h
        rol ax,cl
        inc si
        add al,[si]
        rol ax,cl
        inc si
        add al,[si]
        rol ax,cl
        inc si
        add al,[si]
        mov bx,ax
        call hex_to_bcd

hex_to_bcd proc near
        mov ax,bx
        mov bx,10
        mov cx,0000h
z1:     mov dx,0000h
        div bx
        push dx
        inc cx
        cmp ax,0000h
        ja z1
        output msg8
z2:     pop dx
        add dx,30h
        mov ah,02h
        int 21h
        mov dx,0000h
        loop z2
        jmp menu
endp
        


       



end
