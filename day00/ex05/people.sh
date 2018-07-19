ldapsearch -xLLL uid='z*' -S cn | grep cn | sort -fr | cut -c5-
