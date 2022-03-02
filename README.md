# CP-stamper-cpp

```
/**
 * written: 2022-03-02 16:05:09 Wed [KST]
 * in <YOUR_NAME>'s mac.
 **/
```
Add `timestamp` & `author` above your source code.  
Get your source code **ready-to-submit** with simple commands.

### init.cpp
```zsh
$ ./init
```
: creates/overrides `main.cpp` template including necessary STL libraries.

### stamp.cpp
```zsh
$ ./stamp [fileName]
```
: creates a copy of `main.cpp` with file name `[fileName]`.cpp & attaches header comment including timestamp & author info.

<br/>

## Getting ready

Make sure you have modern [gcc compiler](https://gcc.gnu.org/releases.html) installed, and added to your system `PATH`.

<br/>

## How to use

### 1. Replace **<YOUR_NAME>** with your name in `stamp.cpp`

### 2. Compile
OS X / Linux:
```zsh
~/CP-stamper-cpp$ make
```
Windows:
```zsh
~/CP-stamper-cpp$ g++ init.cpp -o init && g++ stamp.cpp -o stamp
```

### 3. Init
```zsh
~/CP-stamper-cpp$ ./init
```

### 4. Write code in main.cpp

### 5. Stamp
```zsh
~/CP-stamper-cpp$ ./stamp A
```

### 6. Upload `A.cpp` to submit

<br/>

## Notes

- If you give more than 1 argument to `stamp` binary, it considers the last argument as its `fineName`.  
For example, `./stamp main.cpp file as A` will give you `A.cpp`.

- If no argument is given, the `stamp` binary will generate `[currentTimeStamp].cpp`.

<br/>

## License

MIT License

Copyright 2022. JunHa Jeong

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
