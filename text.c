print("Python + C Car Puzzle Game")
if object "gamefailorcomplete" false == print("You Lose!")
if object "gamefailorcomplete" true == print("You Win! To play again, press any key to continue. To exit, click the x button on window options.")
inputifwin {
  input == "Esc, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, Pause, Break, Print Screen, Insert, Delete, 1, 2, `, 3, 4, 5, 6, 7, 8, 9, 0, -, =, Backspace, Tab, Q, W, E, R, T, Y, U, I, O, P, {, }, \, Caps Lock, A, S, D, F, G, H, J, K, L, ;, ', Enter, Shift, Z, X, C, V, B, N, M, ,, ., /, Shift, Up Arrow Key, Fn, Ctrl, Left Fn, Windows, Alt, Space, Alt, Ctrl, Left Arrow Key, Down Arrow Key, Right Arrow Key" goto file.object (redo-opearation.c)
  }

Get.Object("inputifwin") > if object "gamefailorcomplete" true == print("You Win! To play again, press any key to continue.")
  timer = 30
  
