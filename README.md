<h1 align="center">Sorting Algorithms</h1>
<p align="center">Greetings hackers of <a href="https://hacktoberfest.digitalocean.com/">Hacktoberfest</a>! :computer: :tada:</p>
<div align="center">
    <a href="https://github.com/claesgill/sorting_algorithms/commits">
        <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/claesgill/sorting_algorithms?label=updated">
    </a>
    <a href="https://github.com/claesgill/sorting_algorithms/commits">
        <img alt="Updated" src="https://img.shields.io/github/contributors/claesgill/sorting_algorithms" />
    </a>
</div>

# Table of content
1. [Run](#run)
2. [Contribute](#contribute)
    1. [Getting started](#getting-started)
    2. [Rules](#rules)

## Run
The following command will build and run the program:

```sh
g++ -std=c++17 main.cpp src/algorithms.cpp && ./a.out
```

## Contribute
Feel free to contribute with any sorting algorithms you want, as long
as you follow the [rules](#rules) :raised_hands:

### Getting started
Follow the steps bellow to get started!

0. Make sure to read the [rules](#rules) section.
1. Fork this repo by clicking the top right fork button.
2. Clone the reposetory you just forked.
3. Create a new branch:
    1. `git checkout -b new_branch_name`
4. Make your changes and push your code.
5. Lastly, create a [pull request](https://github.com/claesgill/sorting_algorithms/pulls) to this reposetorys `main` branch.

Happy coding :keyboard:

### Rules
TL;DR Follow the same pattern as the `bubbleSort()` does.

1. Implement the new sorting algorithm in the files:
    ```
    src/algorithms.h
    src/algorithms.cpp
    ```
2. Use the `getUnsortedVector()` as the vector to sort.
3. Use the `VERIFY_SORTED()` to verify that your vector is properly sorted.
4. **NO** thirdparty packages.
5. `main.cpp` should be able to run.
6. Have fun! :tada: