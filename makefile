all:
	gcc --std=c11 perfectnumber.c -o perfectnumber -lquadmath

clean:
	rm perfectnumber
