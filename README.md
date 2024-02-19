# ascii

simple c command line program to either log the entire 8 bit ascii character table or log the 8 bit values in decimal and hex respectively of each character of a string argument

`$ ascii [string | null]`

example:

```
$ ascii hello
>
104 	 68 	 h
101 	 65 	 e
108 	 6c 	 l
108 	 6c 	 l
111 	 6f 	 o
```

to build and run, run `./build.sh`

NOTE: to run globally, export bin path to `$PATH`
