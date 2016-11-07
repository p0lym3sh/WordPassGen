# WordPassGen
Generates sentence based passwords using a dictionary file

## What is this?
This is a very simple utility to quickly create
sentence based passwords by pulling words
out of a dictionary file.

## Usage
```sh
passgen "path/to/dictfile" "# of words to print"
```

## Compiling
Just type ```make && sudo make install ``` in the source direcrtory.
If you want to uninstall it, simply type ```sudo make remove``` inside the source 
directory.

## Extra
``` get_dict.sh ``` will download an English dictionary file if one is not present in the ```/usr/share/dict``` directory already, you can run it by typing ```sudo ./get_dict```.
