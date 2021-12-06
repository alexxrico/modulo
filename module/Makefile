obj-m += millenials_module.o

all:
	echo "Compilando modulo millenials"
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean