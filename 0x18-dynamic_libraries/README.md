# 0x18-dynamic_libraries


General
What is a dynamic library, how does it work, how to create one, and how to use it
What is the environment variable $LD_LIBRARY_PATH and how to use it
What are the differences between static and shared libraries
Basic usage nm, ldd, ldconfig


# 0. A library is not a luxury but one of the necessities of life.
Create the dynamic library libdynamic.so containing all the functions listed below:

File: libdynamic.so, main.h

# 1. Without libraries what have we? We have no past and no future
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

File: 1-create_dynamic_lib.sh

# 2. Let's call C functions from Python
I know, you’re missing C when coding in Python. So let’s fix that!

Create a dynamic library that contains C functions that can be called from Python. See example for more detail.

File: 100-operations.so

# 3. Code injection: Win the Giga Millions!

File: 101-make_me_win.sh
