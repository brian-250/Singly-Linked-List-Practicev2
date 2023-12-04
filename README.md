# Singly Linked List Practice v2

Creating and using a singly linked list. Previous repository is having issues with including the correct header files.

## Tools

* Languages: C++

## Issues

The issue I was having with my custom singly linked list class not working is that I needed to include my node and sll ".cc" files in "main.cc" to have the ability to use my custom singly linked list class

## Lessons Learned

There are two approaches one can take to make template classes work properly. When you declare ".h" files and define ".cc" files, you are going to need to include all your ".cc" files in "main.cc", however, when you define only ".h" files, you need to include your ".h" files in "main.cc"

Hope this helps solve your code issues.
