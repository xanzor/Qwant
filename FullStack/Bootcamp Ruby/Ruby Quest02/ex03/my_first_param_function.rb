def detonation_in(seconds_left)
    puts("detonation in... #{seconds_left} secondes.")
end

timer = 10

while (timer >= 1)
  detonation_in(timer)
  timer -= 1
end