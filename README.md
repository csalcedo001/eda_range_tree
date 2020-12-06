# Range tree

Range tree implementation

## Setup

Run `make` from the root directory to compile all executables.

## Testing

Generate test sets with `generate_points.sh` by giving the desired number of queries, and optionally the dataset size and number of dimensions.

```
./generate_points.sh <number_of_queries> [<dataset_size> [<dimensions>] ]
```

Default datasets are stored in `data/input/` directory. Generated datasets can be tested with the following command

```
./test_performance.sh <number_of_queries>
```

Manually generated datasets can be tested by redirecting the file content as input to the main Range tree executable. An example is shown below.

```
./bin/kd_range_tree data/input/manual.in
```
