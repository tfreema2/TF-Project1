# TF-Project1

TF-Project1-Style1 Branch uses Egyptian-style braces, Camel case, RME documentation, and variable without preﬁxes 
TF-Project1-Style2 Branch uses Hanging braces, Snake case, Top-of-ﬁle documentation, and variable with prefixes
Between the two different ways that I prefer the styles that I used in TF-Project1-Style1 (Egyptian-style braces, Camel case,
RME documentation, and variable without preﬁxes) the best. This is the way that I was taught how to format my code, so it is what I am 
already used to. The one thing that I think could be helpful for me to switch to in the future is using variable with prefixes. 
I have only done it a couple of times so I am not very comfortable with it, which is probably why I don't like it very much right now.
However, more practice with it, I feel like it could make my code more readable and make it harder to accidentally switch up variables.

One of the compiler errors that I had was accidently declaring in my BMIConverter.cpp file that my two setters (setHeight and setWeight) 
take intergers as parameters, whereas I had stated in my BMIConverter.h file that these should both take doubles as parameters.
Another compiler error that I had was caused by not adding my BMIConverter.cpp to the CMakeLists.txt file.

One of the runtime errors that I had was accidently creating an endless loop. I give an option for the user to input "y" in order to 
calculate another BMI. However, when I first did this, I forgot to add the statement at the end of the loop that got the input from the 
user. This caused the program to constantly ask the user to calculate another BMI after the first.

One logic error that I faced was getting the BMI rank/category. When I was writing it, I accidently said that everyone was the first 
rank (underweight). I couldn't figure out what was happening, so I ran it through the debugger. While using the debugger, I realized 
that I accidentally used a >= sign instead of a <= sign, making all of the height/weight combinations that I originally tried fall into 
the of having a BMI of over 18.

The reason why I wanted to create a BMI calculator for this project is actually because of the Psychology lab that I work in. The lab 
works with preschoolers around Burlington and one of the tasks that needs to be done is calculating BMI. The first time I helped with 
this, I realized that there was definitely a way to code this and make it easier. While this doesn't yet do exactly what they need it to 
do for my psych lab, it is definitely a step in along the way. I hope to continue to work on it and make it so that this task could be
completely animated for them, which would help save a lot of time in the future.

