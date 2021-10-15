# Hashfunctions

## Definition "Hashfunction"

Simply said hash functions creates with help of a given input an abstract output wich can be used in the background. The output is called hash values. Furthermore, hash functions are "one-way-functions". That means you can get the output with help of the input but you will not get the input if you just have the output. One example why hash functions are very usefull is saving passwords. It is typical that (for example websites) store the hash values of your password and not the "real" password because if the website is being hacked the hackers get the hash values of passwords and not the real passwords. Due to the "one-way-functions" they can not get the "real" passwords. 

##### Explanation-Diagram of hash functions

![Hashfruntion explanation diagram](https://github.com/JoBo33/Hashfunctions/blob/main/Hash%20functions%20explanation%20diagram.png "Hashfunction explanation diagram")

## GUI-concept

![GUI-design](https://github.com/JoBo33/Hashfunctions/blob/main/Gui-design%20example.png "GUI-design")

On the top is on the one hand a combo box to choose the algorithm you would like to use and an the other hand the generate button to get the specific hash values. On the buttom you can use the textbox on the left side for the input and on the right side you can see the the hash values after pushing the generate button.

## Polynomial rolling hash function

> H(s0, s1, …, sk) = (s0 _ pk-1 + s1 _ pk-2 + … + sk * p0 ) mod M

Using this formula, hash values of strings can be generated.  
**s** are the different parts of the string.  
**p** is a constant prime number. It should be choosen as the highest prime number smaller than the possible different input characters (i. e. input character = lowercase letters of the English alphabet -> p should be 31).   
**k** is the length of the input string.  
**M** is the probability that two random strings collide is inversely proportional to m. So m should be a large prime number. 

## String folding

In contrast to the polinomial rolling hash function devides the string holding hash funtion the input string in larger parts (not every character). For example, the every part could be have the length 8. After that the integer value of each part gets added together. At the end, the sum is converted with the modulus operator.

## Fibonacci hash

Fibonacci hash is a fast hash function to get the hash values of an integer input. The reason that it is fast is that it avoids the modulo operator. Fibonacci hash works with the bitshift operator instead. So one just have to multiply the input with 11400714819323198485 and shift right, leaving as many bits as desired. 11400714819323198485 is computed by the following Calculation:
> 2^64 / ((1 + √5) ÷ 2) =  11400714819323198485
