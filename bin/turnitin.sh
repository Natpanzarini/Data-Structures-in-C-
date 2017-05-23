#!/bin/sh

dest=/var2/home/turnitin.d
name=`/usr/bin/whoami`
stamp=`date +%s`

fname=${name}_${stamp}.zip


echo "About to turn in the files in $1"
echo -n "Is this correct? [Y/n]:  "
read ans
echo


if [ "$ans" == "Y" ]; then
  zip -r $fname $1 
  cp $fname $dest
  chmod 644 $dest/$fname
  if [ $? -eq 0 ]; then
    echo "Your assignment was handed in as: $dest/$fname"
    echo "now go and have some fun."
  else
    echo "Possible problem turning in your assignment.  Ask for help."
  fi 
else
  echo "OK.  Exiting without doing anything."
fi

