# Printf_Tester
To check how's printf works

# How to use?

## - Clone position
![Repository's position](https://user-images.githubusercontent.com/58177127/106249478-c0200c00-6255-11eb-81c5-9317dcc6f9a0.png)

## commands
1. First, You need to go inside of this Repository and Check ` main.c `.(Only main_char isn't comment outed default.)
You can comment out the function which you don't need.
Check the functions bellow.

| Function | Format |
|----|----|
| `void main_char(void)` | `%c` |
| `void main_string(void)` | `%s` |
| `void main_digit(void)` | `%d` |
| `void main_integer(void)` | `%i` |
| `void main_unsigned(void)` | `%u` |
| `void main_pointer(void)` | `%p` |
| `void main_small_hex(void)` | `%x` |
| `void main_large_hex(void)` | `%X` |

2. Secondly, run make.
```
make
```
Then, `tester.a` will be made, let them out.
```
mv ./tester.a ..
```

Run the command bellow.
```
gcc libftprintf.a tester.a
```


