#/bin/bash

# for i in $( ls | grep log); do echo $i
for i in $( ls | grep log); do echo $(echo "$i" | cut -f 1 -d '.')  >> /tmp/list
done
cat /tmp/list | uniq > /tmp/final

echo "READ file"
while read F  ; do
        if [ ! -z "$F" ]; then
          echo $F
          # ls $F.*
          MAXLOG=21
          for i in `seq $((MAXLOG-1)) -1 1`; do
            # echo $i
            if [ -f "$F.log.$i" ]; then
              mv "$F.log."{$i,$((i+1))}
            fi
          done
          mv "$F".log "$F".log.1
          touch "$F".log
        fi
done </tmp/final


echo "" > /tmp/list
echo "" > /tmp/final