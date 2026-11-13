# College Lost and Found System - 10 Modules

Standalone C++ programs Q01.cpp through Q10.cpp correspond to the 10 modules in the supplied project brief.

## Compile and run

```sh
g++ -std=c++17 Q01.cpp -o Q01
./Q01
```

Compile each program separately. Q02 and Q03 append item records to `records.txt`; Q04-Q08 read or update that file; Q09 exports it to `report.txt`. Q01 records student login details in `students.txt`. Run programs from the same directory to share their files.

The matching example checks for an exact item-name or category match. These are simple classroom examples; they do not implement secure account authentication.
