	      INT    0, 40
	      SUP    0, main
	      RET    0, 0
fun:
	      INT    0, 16
	      INT    0, 12
	      LDA    0, 12
	      LOD    1, 12
	      POP    0, 5
	     ADDR    0, printf
	      CAL    0, 0
	      LDA    1, -4
	      LOD    1, 12
	      STO    0, 1
	      RET    0, 0
	      RET    0, 0
main:
	      INT    0, 16
	      LDA    1, 12
	      INT    0, 16
	     LITI    0, 10
	      POP    0, 4
	     ADDR    0, fun
	      CAL    0, 0
	      STX    0, 1
	      POP    0, 1
	      INT    0, 12
	      LDA    0, 28
	      LOD    1, 12
	      POP    0, 5
	     ADDR    0, printf
	      CAL    0, 0
	      RET    0, 0
.literal    12 "param: %d\n"
.literal    28 "ret: %d\n"
