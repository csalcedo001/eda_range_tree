#!/bin/bash

if [ -z $1 ]
then
	echo "error: missing argument 'number_of_queries'. Usage: $0 <number_of_queries>"
	exit
fi

input_filename=data/input/test_$1.in

if [ ! -f $input_filename ]
then
	echo "error: file $input_filename does not exist. To generate this file, call: ./generate_points $1."
	exit
fi

if [ ! -f bin/kd_range_tree ]
then
	make bin/kd_range_tree
fi

./bin/kd_range_tree < $input_filename
