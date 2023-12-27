# Linux programming basics

**1. Searching for ppid using procfs**\
Develop a solution program that searches for the parent PID of the current process in the proc file system and
displays the found value on the console. The result returned by the function must be printed on a separate line (
must end with a newline character \n) in stdio.\
**2. Counting the number of processes with a given name**\.
Develop a solution program that searches for and counts the number of processes named genenv in the Linux system on
which the program is running on.\
**3. Finding the path to init by a given pid**\
Develop a solution program that, given a pid, searches the path in the process tree to the process with the identifier
1 (init). For each process found, its identifier is printed in a separate line.\
**4. Counting processes in a subtree**\
Develop a solution program that, given pid, searches for all children of a process with this identifier and prints
their number (including the process with the given pid).\
**5. Creating a daemon**\
Develop a solution program that "demonizes" itself during startup and remains in memory. Before closing the standard
stdout output stream inherited from the parent, the program must print the Pid of the daemon process to it.

# Основи програмування для Linux

**1. Пошук ppid з використанням procfs**\
Розробити програму solution, яка здійснює пошук батьківського PID поточного процесу у файловій системі proc і
виводить знайдене значення на консоль. Результат, що повертається функцією, повинен бути виведений окремим рядком (
повинен закінчуватися символом переведення рядка \n) у stdio.\
**2. Підрахунок кількості процесів із заданим ім'ям**\
Розробити програму solution, яка здійснює пошук і підрахунок числа процесів з іменем genenv у системі Linux на якій
виконується програма.\
**3. Пошук шляху до init за заданим pid**\
Розробити програму solution, яка за заданим pid, здійснює пошук шляху в дереві процесів до процесу з ідентифікатором
1 (init). Для кожного знайденого процесу друкується в окремому рядку його ідентифікатор.\
**4. Підрахунок процесів у піддереві**\
Розробити програму solution, яка за заданим pid, здійснює пошук усіх нащадків процесу з цим ідентифікатором і виводить
їхню кількість (включно з процесом із заданим pid).\
**5. Створення демона**\
Розробити програму solution, яка під час запуску себе "демонізує" і залишається в пам'яті. Перед закриттям стандартного
потоку виведення stdout успадкованого від батька, програма має вивести в нього Pid процесу-демона.