printf "\ec\e[44;36m\n"
cat $1 | sed 's/\t//g' | sed 's/  //g' | tr -d '\n' | tr -d '\r'   > $1.2.xml

