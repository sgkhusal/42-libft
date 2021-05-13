# Libft

42 school Libft project + other functions

## Using the library

* clone this repo
* run ```make all```
* Include the library libft.h in your C projects:
```
#include "libft.h"
```

## Tests

Folder "Testes": tests to check the functions from Libft project.
Do not test all the functions together.
There is no guarantee that your code will pass in moulinette or norminette tests if your code pass in those tests.

The tests helps to verified specific situations and can help pass the others tests commonly used for this project:

* [Libftest](https://github.com/jtoty/Libftest)
* [libftTester](https://github.com/Tripouille/libftTester)
* [libft-unit-test](https://github.com/alelievr/libft-unit-test)
* [libft-war-machine](https://github.com/ska42/libft-war-machine)

### Using the tests: 
* copy main.c file and <Testes> folder to your library directory
* edit main.c file
* run your makefile
* gcc main.c Testes/<test-name>.c libft.a (edit <test_name>)
