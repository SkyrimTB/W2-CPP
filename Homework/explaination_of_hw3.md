# Advantages of n_pascal.cpp

1. It encapsulates all the logic of the pascal triangle, which helps in organizing code around its functionality and keeping together. Also, it's easier to maintain and modify the code. You only need to look at ```PascalTriangle``` class, this reduces the risk of bringing new bugs in unrelated parts

2. ```PascalTriangle``` class can be reused in different parts of the program, or even in different programs, without needing to rewrite the logic.Beside, it is easier to read(understand) what you are writing. Each function within the class has a clear purpose, and the class itself represents a concept. When you need to add new functions in the future, it's easier to do so with the class structure.
