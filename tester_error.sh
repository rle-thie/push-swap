#!/bin/sh

echo "Full Error\nNON\n"
./push_swap 5 4 1 2 3 8 8

echo "\n"
./push_swap 5 4 1 2 3 8+8

echo "\n"
./push_swap 5 4 1 2 3 8-8

echo "\nNON\n"
./push_swap 5 4 1 2 3 - 8

echo "\nNON\n"
./push_swap 5 4 1 2 3 + 8

echo "\n"
./push_swap "5 4 1 2 3 8+8"

echo "\n"
./push_swap 5 4 1 2 3 +8 8

echo "\n"
./push_swap "5 4 1 2 3 8-8"

echo "\nNON\n"
./push_swap "5 4 1 2 3 - 8"

echo "\nNON\n"
./push_swap "5 4 1 2 3 + 8"

echo "\n"
./push_swap "5 4" 1 2 "3 8+8"

echo "\n"
./push_swap "5 4" 1 2 "3 8-8"

echo "\nNON\n"
./push_swap "5 4" 1 2 "3 - 8"

echo "\nNON\n"
./push_swap "5 4" 1 2 "3 + 8"

echo "\nNON\n"
./push_swap "--5 4" 1 2 "3 + 8"

echo "\nNON\n"
./push_swap "5- 4" 1 2 "3 + 8"

echo "\n"
./push_swap 0 1 2 18446744073709551615

echo "\n"
./push_swap 99999999999999999999999999999999999999999999999999999999999999999999999 0 9