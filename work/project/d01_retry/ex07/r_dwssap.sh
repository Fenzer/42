cat /etc/passwd | grep -v '#' | cut -d : -f 1  | awk 'NR%2==0'| rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' -e '$s/$/./g' | tr -d "\n"
