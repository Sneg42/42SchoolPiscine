echo "\nex00";
gcc -Wall -Wextra -Werror ex00/test.c ../../day11/ex00/*.c;
./a.out;

echo "\nex01";
gcc -Wall -Wextra -Werror ex01/test.c ../../day11/ex00/ft_create_elem.c ../../day11/ex01/*.c;
./a.out;

echo "\nex02";
gcc -Wall -Wextra -Werror ex02/test.c  ../../day11/ex00/ft_create_elem.c ../../day11/ex02/*.c;
./a.out;

echo "\nex03";
gcc -Wall -Wextra -Werror ex03/test.c  ../../day11/ex00/ft_create_elem.c ../../day11/ex03/*.c;
./a.out;

echo "\nex04";
gcc -Wall -Wextra -Werror ex04/test.c  ../../day11/ex00/ft_create_elem.c ../../day11/ex04/*.c;
./a.out;

echo "\nex05";
gcc -Wall -Wextra -Werror ex05/test.c  ../../day11/ex00/ft_create_elem.c ../../day11/ex05/*.c;
echo "arguments: test1 test2 test3 test4";
./a.out test1 test2 test3 test4;
echo "arguments: one_arguments";
./a.out one_arguments;
echo "empty line";
./a.out;

echo "\nex06";
gcc -Wall -Wextra -Werror ex06/test.c  ../../day11/ex00/ft_create_elem.c ../../day11/ex06/*.c;
./a.out;

echo "\nex07";
gcc -Wall -Wextra -Werror ex07/test.c  ../../day11/ex00/ft_create_elem.c ../../day11/ex07/*.c;
./a.out;

echo "\nex08";
gcc -Wall -Wextra -Werror ex08/test.c  ../../day11/ex00/ft_create_elem.c ../../day11/ex08/*.c;
./a.out;

echo "\nex09";
gcc -Wall -Wextra -Werror ex09/test.c  ../../day11/ex00/ft_create_elem.c ../../day11/ex09/*.c;
./a.out;

