void RobotLine::AaBbCc() {
  if (lineAny()) {
    if (line(8))
       go(-90, 90);
     else if (line(0))
      go(90, -90);
     else if (line(7))
      go(0, 100);
     else if (line(1))
      go(100, 0);
     else if (line(6))
      go(30, 80);
     else if (line(2))
      go(80, 30);
     else if (line(5))
      go(40, 70);
     else if (line(3))
      go(70, 40);
     else if (line(4))
      go(70, 70);
  }

  if (line(0) && line(8)) {
    go(50, 50);
    delayMs(500);}
  if (!lineAny()) {
    go(50, 60);
    delayMs(200);

  }
}
