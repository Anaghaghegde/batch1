if [ -e $1 ]
then
set -- `ls -l $1`
echo "permissions are : $1"
echo "links are : $2"
echo "user: $3"
echo "group user : $4"
echo "date modifide : $5 $6 $7 at $8 "
echo "file name : $9"
else
echo "file not found!"
fi
