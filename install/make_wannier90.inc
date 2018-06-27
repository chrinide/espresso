#=======================================
# WANNIER90 	
#=======================================

TOPDIR = /home/s-nishihara/espresso

F90=mpiifort
FCOPTS=$(FFLAGS) -nomodule -qopenmp 
LDOPTS=-static-intel  -qopenmp

LIBS =    -lmkl_intel_lp64  -lmkl_intel_thread -lmkl_core 
