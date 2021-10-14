# $1 is the name of the folder
# Ex._ sh script.sh Tree
clear
cd ./$1
make
make clean
sleep 1

echo
echo --- Running ---
echo
./app
