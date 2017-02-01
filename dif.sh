rm -rf dif.txt standard.txt mainft.c myfct.txt
touch standard.txt
touch myfct.txt
touch dif.txt
make
cp main4.c maintmp.c
sed s/printf/ft_printf/ maintmp.c > mainft.c
gcc mainft.c libftprintf.a 
./a.out > myfct.txt
gcc main4.c 
./a.out > standard.txt
open -a Sublime\ Text myfct.txt standard.txt
./chk standard.txt myfct.txt dif.txt main4.c
open -a Sublime\ Text dif.txt
rm -rf maintmp.c 