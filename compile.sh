if [ "$EUID" -ne 0 ]
then
	echo "Please run with root permissions."
	exit
fi

if gcc -o /bin/kittyim main.c -lncurses; then
	echo Compiled successfully.
else
	echo Compilation failed.
fi