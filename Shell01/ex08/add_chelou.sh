#!/bin/bash
NBR1=`echo $FT_NBR1 | sed 'y/'\''\\"?!/01234/'`
NBR2=`echo $FT_NBR2 | sed 'y/mrdoc/01234/'`
B5=`echo "ibase=5; $NBR1+$NBR2;" | bc`
B13=`echo "obase=13; $B5;" | bc | sed 'y/0123456789ABC/gtaio luSnemf/'`
echo $B13
