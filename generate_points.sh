#!/bin/bash

number_of_queries=$1
dataset_size=$2
dimensions=$3

if [ -z $number_of_queries ]
then
	echo "error: missing argument 'number_of_queries': Usage:$0 <number_of_queries> [<dataset_size> [<dimensions>]]"
	exit
fi

if [ -z $dataset_size ]
then
	dataset_size=100000
fi

if [ -z $dimensions ]
then
	dimensions=2
fi


if [ ! -f bin/point_generator ]
then
	make bin/point_generator
fi

echo "$dataset_size $dimensions $number_of_queries" | ./bin/point_generator > data/input/test_$number_of_queries.in
