if gcc -o kittyim main.c -lncurses; then
	echo Compiled successfully.
else
	echo Compilation failed.
fi

if [ "$EUID" -ne 0 ]
then
	echo "Cannot move to /bin, executing local file."
	./kittyim
	exit
fi

echo "Moving to /bin"
mv kittyim /bin/kittyim
echo "Done."
exit
