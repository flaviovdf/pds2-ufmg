for f in *.c; do
    gcc -m32 $f -o `echo $f | sed 's/\.c//g'`_32
    gcc $f -o `echo $f | sed 's/\.c//g'`_64
done
