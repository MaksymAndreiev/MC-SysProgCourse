# Interaction of processes

**1. Reading console output**.

Some utilities generate quite a lot of output, and you just need to count the number of '0' characters in this output.
The utility takes 1 parameter at runtime. Your task is to develop a program that calls this utility with the given
parameter and counts the number of '0' characters in its output. Your program takes 2 parameters as input - the name of
the utility, in the current directory and its parameter. After counting, your program should print the number '0' in a
separate line,
ending with a newline character.

**2. Multiplexed input**.

In the current directory there are 2 channels in1 and in2, which randomly receive numbers that need to be summed and
display the final sum on the screen. The sum is displayed on a separate line, followed by an end-of-line character. A
sign of the end of character supply to the channels is the closing of these channels by the sending party.

**Tip**: for non-blocking reading, use select.
**Note**: the channel exchange protocol is textual, i.e. numbers are represented by the strings

**3. Counting signals**.

Develop an application that can process SIGUSR1, SIGUSR2, SIGTERM signals. After the start, your application must, upon
the arrival of one of the signals SIGUSR1, SIGUSR2, summarize the number of triggering of each signal, and after the
arrival of SIGTERM signal, you need to output to the standard output stream 2 numbers, separated by a space,
corresponding to the number of processed signals SIGUSR1, SIGUSR2, and end the program. The output ends with the
end-of-line character.

**4. The "correct" daemon**.

In this task you need to finalize the daemon developed earlier in task 5. The task is to provide the daemon with a
SIGURG signal handler, after which the daemon should terminate its work.

**5. Shared memory**.

The system has 2 regions of shared memory filled with some numbers (of `int` type). Each of the regions has a size of
1000 bytes. Your task is to develop an application that pairs the first 100 numbers in these regions and places the sums
in a new ( created by your application) memory region of 1000 bytes. Thus, after your application is finished, there
should be a region in memory, there should be a 1000-byte shared memory region containing 100 sums at the beginning.
Before termination, the application outputs the key of the created region to the standard input/output stream, which
ends with the end-of-line character. As input, your application accepts the keys of existing memory regions.

# Взаємодія процесів

**1. Читання консольного виводу**

Деяка утиліта генерує доволі великий вивід, а вам потрібно всього-лише порахувати кількість символів '0' у цьому виводі.
Утиліта під час запуску приймає 1 параметр. Вам потрібно розробити програму, яка викликає зазначену утиліту, із заданим
параметром і підраховує кількість символів '0' у її виводі. Ваша програма приймає на вхід 2 параметра - ім'я утиліти, у
поточному каталозі та її параметр. Ваша програма повинна після підрахунку вивести знайдене число '0' в окремому рядку,
що закінчується символом кінця рядка.

**2. Мультиплексоване введення**

У поточному каталозі є 2 канали in1 in2, до яких у випадковому порядку надходять числа, які необхідно підсумувати і
вивести остаточну суму на екран. Сума виводиться в окремому рядку, що завершується символом кінця рядка. Ознакою
закінчення подачі символів у канали є закриття цих каналів стороною, що посилає.

**Підказка**: для неблокуючого читання використовувати select.
**Зауваження**: протокол обміну каналом текстовий, тобто числа представлені рядками

**3. Підрахунок сигналів**

Розробити додаток, що вміє обробляти сигнали SIGUSR1, SIGUSR2, SIGTERM. Після старту Ваш застосунок має після приходу
одного із сигналів SIGUSR1, SIGUSR2 виконувати підсумовування числа спрацьовувань кожного із сигналів, а після приходу
сигналу SIGTERM, потрібно вивести в стандартний потік виведення 2 числа, розділені пропуском, що відповідають кількості
опрацьованих сигналів SIGUSR1, SIGUSR2, і завершити програму. Виведення закінчується символом кінця рядка.

**4. "Правильний" демон**

У завданні потрібно доопрацювати демон, розроблений раніше в завданні 5. Завдання - забезпечити демон
оброблювачем сигналу SIGURG, після приходу якого демон має завершувати свою роботу.

**5. Роздільна пам'ять**

У системі існують 2 регіони спільної пам'яті, заповненої деякими числами (типу `int`). Кожен із регіонів має розмір 1000
байт. Вам потрібно розробити додаток, який попарно підсумовує перші 100 чисел у цих регіонах і поміщає суми в новий (
створений вашим додатком) регіон пам'яті розміром 1000 байт. Таким чином, після завершення роботи Вашого додатка в
пам'яті має існувати регіон пам'яті, що розділяється, розміром 1000 байт, який містить на початку 100 сум. Перед
завершенням роботи додаток виводить у стандартний потік введення-виведення ключ створеного регіону, що завершується
символом кінця рядка. На вхід ваш додаток приймає ключі наявних регіонів пам'яті.