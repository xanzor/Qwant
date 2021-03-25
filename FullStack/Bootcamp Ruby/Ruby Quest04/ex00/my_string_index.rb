def my_string_index(param_1, param_2)
    i = 0 
    while param_1[i]
        i += 1
        if param_1[i] == param_2
           return i
        end
    end
    return -1
end

# a = "anzor"
# b = 'z'
# puts (my_string_index(a, b))