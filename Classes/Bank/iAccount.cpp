/*
The keyword 'virtual' tells the compiler to find the furthest implementation down.

An abstract class contains at least ONE pure virtual method (=0); it cannot be instantiated.

An interface is PURE abstract class; a special case of abstract classes containing only pure virtual methods which are
the only methods we want the user to have access to.

An interface doesn't contain any data members (the user doesn't need to know about them; they only need the methods)
and is the only thing that we are going to include int the main.cpp, so the user can't access even the abstract class
below it, and hence, can't see the member variables.

Created by Adam Saher on 08/12/2018.
*/

#include "iAccount.h"
