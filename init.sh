name=${1%.c}
g++ -Wall -g ./$1 -o ./build/$name.out -lm $(ncursesw6-config --cflags --libs)
# ./build.sh $1
shift
./build/$name.out $@
