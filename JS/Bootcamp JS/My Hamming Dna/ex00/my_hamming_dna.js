function my_hamming_dna(first, second){

    var count = 0;
    
    if (first.length != second.length){
        return -1; 
    } else{
        for (var i = 0; i < first.length; i++){
             if (first[i] != second[i]){
                    count ++;
            }
        }
        return count;
      }
}