test : test.cpp particleset.h particleset.cpp
	cl test.cpp particleset.cpp -I BorrowedCode Threevector.cc