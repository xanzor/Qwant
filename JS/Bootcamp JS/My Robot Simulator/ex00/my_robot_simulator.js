function my_robot_simulator (instruct){
    var direction = 'north';
    var x = 0;
    var y = 0;
    
    /*var rev = {
        x: 0,
        y: 0,
        "bearing": 'north'
    };*/
    for (var i = 0; i < instruct.length; i++){

       if (instruct[i] == 'R' && direction == 'east'){
           direction = 'south';

       }else if (instruct[i] == 'R' && direction == 'south'){
           direction = 'west';

       }
       else if (instruct[i] == 'R' && direction == 'west'){
           direction = 'north';

       } else if (instruct[i] == 'R' && direction == 'north'){
           direction = 'east';

       } else if (instruct[i] == 'L' && direction == 'south'){
           direction = 'east';

       } else if (instruct[i] == 'L' && direction == 'west'){
           direction = 'south';

       } else if (instruct[i] == 'L' && direction == 'north'){
           direction = 'west';
       } else if (instruct[i] == 'L' && direction == 'east'){
           direction = 'north';

       } else if (instruct[i] == 'A' && direction == 'south'){
           y++;

       } else if (instruct[i] == 'A' && direction == 'west'){
           x--;

       } else if (instruct[i] == 'A' && direction == 'north'){
           y--;
        } else if (instruct[i] == 'A' && direction == 'east'){
           x++;
        }
    }
    /*rev ["x"] = x;
    rev ["y"] = y;
    rev ["bearing"] = direction;
    return rev;*/
    var ans = "{x: " +x+", y: "+y+", bearing: '"+direction+"'}";
    return ans;
}