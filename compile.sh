# you will need to install gcc and strip first !

g++ kim.cpp -Os -v -fpermissive -o kim
strip --strip-all kim

