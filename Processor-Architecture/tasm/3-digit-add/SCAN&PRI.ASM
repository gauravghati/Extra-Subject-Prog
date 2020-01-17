        .MODEL small
        .STACK 100
        .DATA
A		DW		?
B		DW		?
C		DW		?        
;---------------------------------------
        .CODE
MAIN    PROC    FAR
        MOV     AX, @data 
        MOV     DS, AX

        MOV     AH, 01H			; INPUT A
        INT 	21H
        MOV		A, AX

        MOV     AH, 01H			; INPUT
        INT 	21H
        MOV		B, AX
        
        MOV      AX, A
        ADD      AX, B
        MOV      C, AX
        
        MOV      AX, C
        SUB      AX, 30H
        MOV      C, AX
        
        MOV		AH, 02H			; OUTPUT
        MOV		DL, AL
        INT		21H
        
        MOV     AX, 4C00H
        INT     21H
        
MAIN    ENDP
        END     MAIN
