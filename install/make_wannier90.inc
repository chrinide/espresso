#=======================================
# WANNIER90 	
#=======================================

TOPDIR = /c/Users/nishihara.satomichi/git/espresso

F90=gfortran
FCOPTS=$(FFLAGS) -x f95-cpp-input -fopenmp 
LDOPTS=-g -pthread -fopenmp

LIBS = $(TOPDIR)/LAPACK/liblapack.a $(TOPDIR)/LAPACK/libblas.a  
