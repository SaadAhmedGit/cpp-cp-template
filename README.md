# C++ competitive programming template
A minimal but handy C++ competitive programming template

You should replace `<bits/stdc++.h>` with individual header files if you are not compiling with `gcc` since this header file is exclusive to GNU based C++ compilers but, is supported in almost all coding competitions or websites since the most commonly used compiler on all sites and competitions happens to be `gcc`

To read from a file using `cin` when running locally, define the `LOCAL_ENV` macro by using the `-D` flag in `gcc` for example:<br>
```
gcc -D LOCAL_ENV a.cpp -o a
```
Since this macro won't likely be defined on the online platform, `cin` would read normally from `stdin`.
