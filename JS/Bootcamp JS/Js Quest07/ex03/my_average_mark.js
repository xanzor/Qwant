function my_average_mark(param_1) {
    
    if (Object.keys(param_1).length == 0) {
        return 0;
    }
    var num = 0;

    for (var element of param_1) {
        if (Object.keys(element).includes("integer")) {
            num += element["integer"];
        }
    }

    var result = num / param_1.length;
    return result.toFixed(1);
};