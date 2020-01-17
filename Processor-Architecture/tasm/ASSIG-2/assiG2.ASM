; Write menu driven ALP to convert 4-digit Hex number into its equivalent BCD number and 5-digit
; BCD number into its equivalent HEX number. Make your program user friendly to accept the choice
; from user for
; i. HEX to BCD
; ii. BCD to HEX (iii) EXIT.
; Display proper strings to prompt the user while accepting the input and displaying the result. Write
; near procedures to complete the task.

        .MODEL small
        .STACK 100
        .DATA
CAR DB ?
MSG0 DB 10,13,"ENTER CHOICE : $"
MSG1 DB 10,13,"1) BCD TO HEX $"
MSG2 DB 10,13,"2) HEX TO BCD $"
MSG3 DB 10,13,"3) EXIT$"
;-----------------------------------------------------------
        .CODE
MAIN    PROC    FAR

	MOV AX, @DATA
	MOV DS,AX
	
MENU: 
	LEA DX,MSG0				
	MOV AH,9				; print the 1st string by AH, 9
	INT 21H	

	MOV AH,1				; INPUT 1st digit of first number
	INT 21H			
	MOV CAR,AL
	
	CMP CAR,'1'
	JE HTB
	CMP CAR,'2'
	JE BTH
	CMP CAR,'3'
	JE EXIT
HTB:
	LEA DX,MSG1				
	MOV AH,9				; print the 1st string by AH, 9
	INT 21H	
	
	CALL BCDTOHEX
	JMP MENU
BTH:
	LEA DX,MSG2				
	MOV AH,9				; print the 1st string by AH, 9
	INT 21H	
	JMP MENU

EXIT:	
	MOV AH,4CH
	INT 21H	
        
MAIN    ENDP					; end main proc	
        


BCDTOHEX    PROC                       		; start

	LEA DX,MSG0				
	MOV AH,9				; print the 1st string by AH, 9
	INT 21H

BCDTOHEX    ENDP				; end
        END
        
        
