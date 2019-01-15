# Lab03
lab for week of 10/1/18
<h1>Explanations</h1>
(1/2/3)
<br>
To determine when overflow occurs, simply examine the value returned.
<br>
A negative sum will be returned when overflow has occurred and two positive numbers are added. 
<br>
A product of zero or a negative product will be returned when overflow has occured for n! where n is positive.
<br><br>
Short sum breaks when n = 256.
<br>
Long sum breaks when n = 475556966.
<br><br>
(4/5)
<br>
Float product breaks when n = 32.
<br>
Double product breaks when n = 32.
<br><br>
(6)
<br>
Float and double both round their values, so when dealing with larger decimals, there is rounding error when computing (1/n)*n.
<br>
Double can store more precision characters, so it breaks at larger values than float does for the same computation.
<br><br>
(7/8)
<br>
The code using float breaks at the very end. It includes the upper limit of i in its computations instead of stopping before reaching it. When using double it works correctly and does not include the upper limit. This is because of rounding error: float cannot store the values exactly as they are repeating fractions in binary, so does not iterate the correct number of times.
<br>
<h2>references</h2>
https://www.dreamincode.net/forums/topic/24152-systempause%3B/
<br>
http://www.c-jump.com/CIS77/CPU/Overflow/lecture.html
<br>
https://en.cppreference.com/w/cpp/language/types
<br>
https://docs.oracle.com/cd/E19957-01/806-3568/ncg_goldberg.html
<br>
https://www.dummies.com/programming/cpp/the-limits-of-the-double-variable-in-c/
<br>
https://wiki.sei.cmu.edu/confluence/display/c/FLP30-C.+Do+not+use+floating-point+variables+as+loop+counters
<br>
