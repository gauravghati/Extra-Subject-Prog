disp macro var
    lea dx,var
    mov ah,09h
    int 21h
endm

strdisp macro var
        disp msg10
        lea dx,var+2
        mov ah,09h
        int 21h
endm

.model small
.stack 100h
.data
        string db 20 dup('$')
        rev db 20 dup('$')
        msg1 db 10,13,"Enter the String: $"
        msg2 db 10,13,"1. Find and Display Length $"
        msg3 db 10,13,"2. Display Reverse $"
        msg4 db 10,13,"3. Check whether string is palindrome or not $"
        msg5 db 10,13,"Enter Choice: $"
        msg6 db 10,13,"4. Exit $"
        msg7 db 10,13,"Length of String: $"
        msg8 db 10,13,"Reverse of the String: $"
        msg9 db 10,13,"String is a palindrome $"
        msg10 db 10,13,"String is: $"
        msg11 db 10,13,"String is not a palindtrome $"
.code
        mov ax,@data
        mov ds,ax

        disp msg1
        lea dx,string
        mov ah,0ah
        int 21h
        strdisp string

menu:   disp msg2
        disp msg3
        disp msg4
        disp msg6
        disp msg5
        mov ah,01h
        int 21h
        cmp al,31h
        je lable1
        cmp al,32h
        je lable2
        cmp al,33h
        je lable3
        cmp al,34h
        je exit

lable1: call strlen
        jmp menu
lable2: call reverse
        strdisp rev
        jmp menu
lable3: call palindrome
        pal:    disp msg9
        jmp menu
        np:     disp msg11   
        jmp menu
exit:   mov ah,4ch
        int 21h

strlen proc near
        disp msg7
        lea si,string
        inc si
        mov dl,[si]
        add dl,30h
        mov ah,02h
        int 21h
        ret
endp

reverse proc near
        disp msg8
        lea si,string
        inc si
        mov bl,[si]
        mov cl,bl
        loop2:
                inc si
        loop loop2
        lea di,rev
        inc di
        mov [di],bl
        inc di
        mov cl,bl
        loop1:
                mov al,[si]
                dec si
                mov [di],al
                inc di
        loop loop1
        ret
endp

palindrome proc near
        lea si,string+1
        ;lea di,rev+2
        mov cl,[si]
        lea si,string+2
        lea di,rev+2
        repnz cmpsb
       ; mov dl,cl
       ; add dl,30h
       ; mov ah,02h
       ; int 21h
        jz pal
        jnz np
        ;inc si
       ; loop3:
        
               rep cmpsb
              ;  mov bl,[si]
              ;  mov dl,[di]
              ;  inc si
              ;  inc di
              ;  cmp dl,bl
              ;  jne np 
       ; loop loop3
       ; jmp pal
        ret
endp

end
