printf "\ec\e[44;36m\a\n\n"
clang -S $1 -emit-llvm -o /tmp/out.s
cat /tmp/out.s
