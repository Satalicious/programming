# Dynamic Memory Management (Free Store)
Exercise material for using the free store in the C programming language. Fork, clone or download this repository to use the automated tests for solving [free store exercise sheet](https://bulme.find-santa.eu/exercises/c/exercise_free_store/).

<!---
TODO: move these explanations to a shared page on my website and link to it from all similar tasks.
-->

While developing your solution, you can run the tests as follows. Make sure that [Criterion is installed](https://criterion.readthedocs.io/en/latest/setup.html#installation) on your system. Create the source and header files as required by the description of the exercise. Then compile your solution:

```
mkdir build && cd build
cmake ..
make -j4
```

The test runners provide an excellent interface available with the `-h` flag.
For running some or all of the tests for the task **Create arrays on the free store**, execute

```
./create_arrays_test
```

For running some or all of the tests for the task **Create your own int array data type**, execute

```
./int_array_test
```

If you want to run all of the tests for all tasks at the same time with a high level summary, use the `ctest` command.
