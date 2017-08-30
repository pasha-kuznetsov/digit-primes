Intro
=====

A toy project doing the following:
* Generate a range of numbers from 1 to 100000, and
* for each number add the digits of that number together.
* Print the sum of those digits if the sum is a prime number.

Prerequisites
=============

* Gradle
* Visual C++, or one of the following should work but haven't tested
    * GCC
    * CygWin GCC
    * MinGW GCC

Building
========

The following should build `build\exe\primes\primes.exe` on Windows

    gradlew build

Running
=======

    build\exe\primes\primes.exe > output.txt
