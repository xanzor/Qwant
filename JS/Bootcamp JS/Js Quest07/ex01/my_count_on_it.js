function my_count_on_it(array) {
    for (let i = 0; i < array.length; i++) {
        array[i] = array[i].length;
    }
    return array;
};