        .MODEL small
        .STACK 100
        .DATA
NUM11 DB ?
NUM21 DB ?
NUM12 DB ?
NUM22 DB ?
TEMP DB ?
RESULT DB ?
MSG1 DB 10,13,"ENTER FIRST NUMBER TO ADD : $"
MSG2 DB 10,13,"ENTER SECOND NUMBER TO ADD : $"
MSG3 DB 10,13,"RESULT OF ADDITION IS : $"   
;---------------------------------------
        .CODE
MAIN    PROC    FAR

	MOV AX, @DATA
	MOV DS,AX				
	
	LEA DX,MSG1				
	MOV AH,9				; print the 1st string by AH, 9
	INT 21H					
	
	MOV AH,1				; INPUT 1st digit of first number
	INT 21H					
	SUB AL,30H		
	MOV NUM11,AL				
	
	MOV AH,1				; INPUT 2nd digit of first number
	INT 21H					
	SUB AL,30H		
	MOV NUM12,AL
	
	LEA DX,MSG2				
	MOV AH,9				; print the 1st string by AH, 9
	INT 21H
	
	MOV AH,1				; INPUT 1st digit of Second number
	INT 21H
	SUB AL,30H
	MOV NUM21,AL
	
	MOV AH,1				; INPUT 2nd digit of second number
	INT 21H
	SUB AL,30H
	MOV NUM22,AL
	
	; ==============================================
	
	ADD AL,NUM12			; ADD VALUE  
	
	MOV RESULT,AL			; MOVE TO RESULT
	
	MOV AH,0				; ASCII ADJUST ADDITION
	AAA
	
	ADD AH,30H				; ADD 30H IN BOTH   ; FIRST DIGIT
	ADD AL,30H				; SECOND DIGIT
	
	MOV BX,AX				; Saving AH and AL into BH and BL
	
	ADD AH, NUM11			; ADD NUM11 in FIRST DIGIT to the carry
	ADD AH, NUM12
	
	MOV RESULT, AH
	MOV AL, RESULT			
	
	MOV TEMP, BL				; Saving BL into var
	
	MOV AH,0				; ASCII ADJUST ADDITION for more than 100 sum
	AAA
	
	ADD AH,30H				; ADD 30H IN BOTH   ; FIRST DIGIT
	ADD AL,30H				; SECOND DIGIT
	
	MOV BX,AX				; Saving AH and AL into BH and BL
	
	LEA DX,MSG3				; PRINTING 3rd String 
	MOV AH,9
	INT 21H
		
	MOV AH,2				; Printing 1st value of the digit
	MOV DL,BH
	INT 21H
	
	MOV AH,2				; Printing 1st value of the digit
	MOV DL,BL
	INT 21H
	
	MOV AH,2				; Printing   ; correct
	MOV DL,TEMP
	INT 21H
	
	MOV AH,4CH
	INT 21H
        
MAIN    ENDP
        END     MAIN
