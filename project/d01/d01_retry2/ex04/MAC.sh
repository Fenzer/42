ifconfig | grep ether | cut -f 2 | sed -e 's/ //g ; s/ether//g'
