NAME= recur\
      recurFunc
OBJECTS = $(NAME).c
cc = gcc 
#MKLPATH=/opt/intel/composer_xe_2013.5.192/mkl/lib/intel64
#MKLINCLUDE=/opt/intel/composer_xe_2013.5.192/mkl/include
#MODPATH=/opt/intel/composer_xe_2013.5.192/mkl/include/intel64/lp64
#FLAGS= -march=native -O3 -pipe -fomit-frame-pointer -L$(MKLPATH) -I$(MKLINCLUDE)  -I$(MODPATH)    -lmkl_intel_lp64 -lmkl_intel_thread -lmkl_core  -liomp5 -lm -lpthread `pkg-config --libs --cflags gsl`   -lrt # -fopenmp
#-I/usr/local/include -L/usr/local/lib -lgsl -lgslcblas -lm
FLASS = -lm
OUTNAME=a.out#$(NAME).out

$(NAME): $(OBJECTS)
  $(cc) -o $(OUTNAME) $(OBJECTS) $(FLAGS)
clean:
  rm -f $(OUTNAME) 
#
#gcc zheev_mkl.c -ole_zheev -Iopt/intel/composer_xe_2013.5.192/mkl/include -L/opt/intel/composer_xe_2013.5.192/mkl/lib/intel64 -L/opt/intel/composer_xe_2013.5.192/compiler/lib/intel64 -lmkl_intel_lp64 -lmkl_intel_thread -lmkl_core -liomp5 -lm -lpthread

