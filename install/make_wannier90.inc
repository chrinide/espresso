#=======================================
# WANNIER90 	
#=======================================

TOPDIR = /data2/group3/nisihara/espresso_serial

F90=gfortran
FCOPTS=$(FFLAGS) -x f95-cpp-input -fopenmp 
LDOPTS= -g -pthread -fopenmp

LIBS =    -lmkl_gf_lp64  -lmkl_gnu_thread -lmkl_core 
