# Calculator
A beginner calculator C application

------
I made this program to retrive my C skills, To remember the basics of C (because if i forget that i am cocked)

Features
- Power calculation
- Basic math (+, -, *, /)
- Calculating the square root of numbers
- Rounding (upwards and downwards)
- Garbage code, not organized at all
- Use this if you hate your life

**How to compile this program?**
--------
**NOTE: There is already a compiled version in this repository, but if you want to compile it yourself for whatever reason, This is how)**

First install gcc 

**Arch:** ```sudo pacman -S gcc```

**Debian:** ```sudo apt install build-essential``` If it doesn't work try ```sudo apt update``` first

**Fedora:** ```sudo dnf install gcc```

**Termux (untested):** ```pkg install clang``` 

Then download the C code from this repository, And run ```gcc -o calc1 calc1.c -lm```
After that run ```./calc1```

**NOTE: For termux or if you want to use CLANG please run: ```clang calc1.c -o math1 -lm``` and then ```./calc1``` normally** 

**To verify the installation of gcc**
------
Run: ```gcc --version```

For termux and CLANG run: ```clang --version```

**How to use this program?**
-----
You will first be greeted with some NOTES: Read them
Type the letter "p" when asked for the type of calculation for calculating the power of something
The letter "s" is for square root, While the letter "r" is for rounding (either upwards or downwards)
```*``` Sign is for multiplication
```/``` is for division
**How to use (format):** ./calc1 [OPERATION (+, -, /, r, p, s, *] [FIRST NUMBER] [SECOND NUMBER] 

**Usage examples**
-----
1. Let's say you're studying, You came across a math problem. So you open your terminal and just type ```./calc1``` and you can easily calculate the problem

2. You are at the store, You aren't sure if you're correct about the calculation, But you have compiled the program on Termux (a sand-boxed linux-ish enviroment on your phone) So now you can use the program on your phone (un-tested, if there is any problems open a bug in this repo)




Ideas: 
I will probably add something for rounding numbers, using the simple ```floor()``` and ```ceil()``` functions

Thank you for reading, I will make some actual projects soon
