	      INT    0, 56
	      SUP    0, main
	      RET    0, 0
main:
	      INT    0, 68
	      LDA    1, 20
	     LITI    0, 10
	      STX    0, 1
	      POP    0, 1
	      LDA    1, 12
	     LITI    0, 0
	      STX    0, 1
	      POP    0, 1
L2:
	      LOD    1, 12
	      LOD    1, 20
	     LSSI    0, 0
	      JPC    0, L3
	      LDA    1, 28
	      LOD    1, 12
	     LITI    0, 4
	     MULI    0, 0
	   OFFSET    0, 0
	      LOD    1, 20
	      LOD    1, 12
	     SUBI    0, 0
	      STX    0, 1
	      POP    0, 1
L1:
	      LOD    1, 12
	      LDA    1, 12
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L2
L3:
	      INT    0, 12
	      LDA    0, 12
	      POP    0, 4
	     ADDR    0, printf
	      CAL    0, 0
	      LDA    1, 12
	     LITI    0, 0
	      STX    0, 1
	      POP    0, 1
L5:
	      LOD    1, 12
	      LOD    1, 20
	     LSSI    0, 0
	      JPC    0, L6
	      INT    0, 12
	      LDA    0, 24
	      LDA    1, 28
	      LOD    1, 12
	     LITI    0, 4
	     MULI    0, 0
	   OFFSET    0, 0
	      LDI    0, 1
	      POP    0, 5
	     ADDR    0, printf
	      CAL    0, 0
L4:
	      LOD    1, 12
	      LDA    1, 12
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L5
L6:
	      LDA    1, 12
	     LITI    0, 0
	      STX    0, 1
	      POP    0, 1
L8:
	      LOD    1, 12
	      LOD    1, 20
	     LITI    0, 1
	     SUBI    0, 0
	     LSSI    0, 0
	      JPC    0, L9
	      LDA    1, 16
	     LITI    0, 0
	      STX    0, 1
	      POP    0, 1
L11:
	      LOD    1, 16
	      LOD    1, 20
	     LITI    0, 1
	     SUBI    0, 0
	      LOD    1, 12
	     SUBI    0, 0
	     LSSI    0, 0
	      JPC    0, L12
	      LDA    1, 28
	      LOD    1, 16
	     LITI    0, 4
	     MULI    0, 0
	   OFFSET    0, 0
	      LDI    0, 1
	      LDA    1, 28
	      LOD    1, 16
	     LITI    0, 1
	     ADDI    0, 0
	     LITI    0, 4
	     MULI    0, 0
	   OFFSET    0, 0
	      LDI    0, 1
	     GTRI    0, 0
	      JPC    0, L13
	      LDA    1, 24
	      LDA    1, 28
	      LOD    1, 16
	     LITI    0, 4
	     MULI    0, 0
	   OFFSET    0, 0
	      LDI    0, 1
	      STX    0, 1
	      POP    0, 1
	      LDA    1, 28
	      LOD    1, 16
	     LITI    0, 4
	     MULI    0, 0
	   OFFSET    0, 0
	      LDA    1, 28
	      LOD    1, 16
	     LITI    0, 1
	     ADDI    0, 0
	     LITI    0, 4
	     MULI    0, 0
	   OFFSET    0, 0
	      LDI    0, 1
	      STX    0, 1
	      POP    0, 1
	      LDA    1, 28
	      LOD    1, 16
	     LITI    0, 1
	     ADDI    0, 0
	     LITI    0, 4
	     MULI    0, 0
	   OFFSET    0, 0
	      LOD    1, 24
	      STX    0, 1
	      POP    0, 1
L13:
L10:
	      LOD    1, 16
	      LDA    1, 16
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L11
L12:
L7:
	      LOD    1, 12
	      LDA    1, 12
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L8
L9:
	      INT    0, 12
	      LDA    0, 32
	      POP    0, 4
	     ADDR    0, printf
	      CAL    0, 0
	      LDA    1, 12
	     LITI    0, 0
	      STX    0, 1
	      POP    0, 1
L15:
	      LOD    1, 12
	      LOD    1, 20
	     LSSI    0, 0
	      JPC    0, L16
	      INT    0, 12
	      LDA    0, 48
	      LDA    1, 28
	      LOD    1, 12
	     LITI    0, 4
	     MULI    0, 0
	   OFFSET    0, 0
	      LDI    0, 1
	      POP    0, 5
	     ADDR    0, printf
	      CAL    0, 0
L14:
	      LOD    1, 12
	      LDA    1, 12
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L15
L16:
	      LDA    1, -4
	     LITI    0, 0
	      STO    0, 1
	      RET    0, 0
	      RET    0, 0
.literal    12 "before : "
.literal    24 "%d "
.literal    32 "\n\nafter : "
.literal    48 "%d "
