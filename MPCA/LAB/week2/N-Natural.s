.DATA
	SUM: .WORD 0

.TEXT
	LDR R1,=SUM
	MOV R2,#10

LOOP:
	LDR R3,[R1]
	ADD R3,R3,R2
	STR R3,[R1]
	SUB R2,R2,#1
	CMP R2,#0
	BNE LOOP
	SWI 0X011

.END