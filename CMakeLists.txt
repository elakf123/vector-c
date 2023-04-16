cmake_minimum_required(VERSION 3.16)
project(untitled6 C)
set(CMAKE_C_STANDARD 99)
# определение точки входа. Будет запущен файл main.c.
# указывается произвольная метка, в данном случае - project
add_executable(untitled6 main.c)
# создаём библиотеку
add_library(str tasks/string_.h tasks/string_.c
        # string/tasks/digitToStartTransform.h
        # string/tasks/reverseWords.h
        # string/tasks/replaceDigitsBySpaces.h
        # ...
        # < файл с решением задачи для следующей лабораторной >
        # ...
        # string/tasks/hasPairOfWordsWithEqualLetterSet.h
        # string/tasks/printWordsNonEqualLastWord.h
        )
# описываем, что для запуска project потребуется сборка str
target_link_libraries(untitled6 str)