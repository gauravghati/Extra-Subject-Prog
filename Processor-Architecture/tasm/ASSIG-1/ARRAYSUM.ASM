        .MODEL small
        .STACK 100
        .DATA

ARR DB 5,3,7,1,9,2,6,8,4,1
SUM DW ?
LEN DW $-ARR
;---------------------------------------
        .CODE
MAIN    PROC    FAR

	MOV AX, @DATA
	MOV DS,AX
	LEA SI,ARR
	MOV AX,0
	MOV CX,LEN
	REPEAT:
		MOV BL,ARR[SI]
		MOV BH,0
		ADD AX,BX

		INC SI
	LOOP REPEAT

	MOV SUM,AX
	
	AAA
	
	ADD AH,30H				; FIRST DIGIT
	ADD AL,30H				; SECOND DIGIT
	
	MOV DX,AX
	
	MOV AH,02H				; Print AH				
	MOV DH,AH
	INT 21H

	MOV AH,02H				
	MOV DL,AL				; Print AL
	INT 21H

	MOV AH,4CH
	INT 21H

MAIN    ENDP

        END     MAIN
