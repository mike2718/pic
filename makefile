all:	gitadd

gitadd:
	git add makefile README.md ch02/*.c ch03/*.c ch04/*.c
gitpush:
	git push -u origin master
