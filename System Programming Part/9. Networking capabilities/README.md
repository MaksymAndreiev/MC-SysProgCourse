# Networking capabilities

**1. Host resolver**.

Develop a command-line utility that takes a hostname as input and prints a list of IP addresses associated with that
hostname to a standard output stream
IP addresses associated with this name.

**2. UDP log service**.

Develop a UDP server for logging (collecting and recording) messages. The server accepts a parameter at startup -- the
number of the
port number on which requests will be accepted. Each request received by the server is a string not exceeding 5K in
size.
The server's task is to output incoming strings to a standard input-output stream, ending with the end-of-line
character.
of the string.

The server quits when it receives a string containing only the text 'OFF' and ends with a newline character '
`\n`'.

The server uses the local address 127.0.0.1

**3. TCP string sorter**.

Develop a TCP server designed to sort the characters in a string. The server receives as input strings ending with
character, sorts the characters in them in descending order of ASCII codes, and sends them back to the client as a
string that
ending with '\0'. The server shuts down when it receives a string containing only 'OFF'.

At startup, the server receives the port number as a command line parameter. bind is executed at the address 127.0.0.1

# Мережеві можливості

**1. Host resolver**

Розробіть утиліту командного рядка, що приймає на вхід ім'я хоста і друкує в стандартний потік виведення список
IP-адрес, асоційованих із цим ім'ям.

**2. UDP log service**

Розробіть UDP-сервер для логування (збору та запису) повідомлень. Сервер під час запуску приймає параметр -- номер
порту, на якому прийматимуться запити. Кожен запит, що приходить до сервера, -- рядок, що не перевищує розмір 5K.
Завдання сервера -- виводити рядки, що надходять, у стандартний потік введення-виведення, що завершуються символом кінця
рядка.

Сервер завершує роботу, коли отримує рядок, що містить тільки текст 'OFF', і закінчується символом переведення рядка '
`\n`'.

Сервер використовує локальну адресу 127.0.0.1

**3. TCP string sorter**

Розробіть TCP сервер, призначений для сортування символів у рядку. Сервер отримує на вхід рядки, що закінчуються
символом '\0', сортує в них символи в порядку убування ASCII-кодів і відсилає назад на клієнт у вигляді рядка, що
закінчується '\0'. Завершення роботи сервера відбувається після отримання рядка, що містить тільки 'OFF'.

Під час старту сервер отримує на вхід номер порту як параметр командного рядка. bind виконується на адресі 127.0.0.1