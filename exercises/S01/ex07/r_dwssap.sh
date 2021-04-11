#!/bin/sh
#-Código do alterado com awk
cat /etc/passwd | awk -F : '{print $1}'| sed -n '1~2!p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed ':a;N;$!ba;s/\n/, /g' | tr '\n' '.'

#-Código do luiz
cat /etc/passwd | sed 's/:.*//' | sed -n '1~2!p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed -z 's/\n/, /g' | sed 's/..$/./'


cat /etc/passwd | awk -F : '{print $1}'| sed -n '1~2!p' | rev | sort -r | sed -n "7,15 p" | sed -z 's/\n/, /g' | sed 's/..$/./'
cat /etc/passwd | sed 's/:.*//' | sed -n '1~2!p' | rev | sort -r | sed -n "7,15 p" | sed -z 's/\n/, /g' | sed 's/..$/./'