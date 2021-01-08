function only(value, index, self) {
    return self.indexOf(value) === index;
};

function my_array_uniq(param) {
    var list = param.filter(only)
    return list;
};
