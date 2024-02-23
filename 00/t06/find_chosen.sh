
#!/bin/bash

if [ "$1"=="FILE" ];then
	shopt -s nocasematch
	while IFS= read -r line;
       	do
	       	if [[ $line == redpill* ]]; then
        		echo "$line"
		fi	
	done < "$1"
	shopt -u nocasematch
fi
  
