#!/bin/sh

# if your system doesn't already have a
# dictonary file inside the /usr/share/dict
# directory, this script will download
# one for you.

wget http://www-01.sil.org/linguistics/wordlists/english/wordlist/wordsEn.txt
sudo mv wordsEn.txt /usr/share/dict/
echo "English dictionary installed."
