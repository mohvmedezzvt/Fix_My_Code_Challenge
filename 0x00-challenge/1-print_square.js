#!/usr/bin/env node
/*
    Print a square with the character #
    
    The size of the square must be the first argument 
    of the program.
*/


if (process.argv.length <= 2) {
    process.stderr.write("Missing argument\n");
    process.stderr.write("Usage: ./1-print_square.js <size>\n");
    process.stderr.write("Example: ./1-print_square.js 8\n");
    process.exit(1);
}

size = parseInt(process.argv[2]);  // Parsing the size argument as an integer

if (isNaN(size)) {
    process.stderr.write("Invalid size argument. Please provide a valid number.\n");
    process.exit(1);
}

for (let i = 0 ; i < size ; i ++) {
    let line = '';
    for (let j = 0 ; j < size ; j ++) {
        line += "#";
    }
    console.log(line);
}
