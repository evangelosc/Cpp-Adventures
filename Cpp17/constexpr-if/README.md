# constexpr-if
The official description of the if constexpre on the [cppreference](https://en.cppreference.com/w/cpp/language/if) is as follows.

<em><strong>Constexpr If</strong>
* If the condition yields true after conversion to bool, statement-true is executed.

* If the else part of the if statement is present and condition yields false after conversion to bool, statement-false is executed.

* In the second form of if statement (the one including else), if statement-true is also an if statement then that inner if statement must contain an else part as well (in other words, in nested if-statements, the else is associated with the closest if that doesn't have an else)</em>

<em>What is the constexpr-if??</em> It allows the programmer to choose at compile time one or more different branches to take in the code.

Important: The Compiler must be able to evaluate the entire condition of the if
constexpr, else it throws a compile time error.

Nested if constexpr can be used for avoiding the above phenomenon, however that's not a compiler friendly approach.
