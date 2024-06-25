void fline_ms(int spl ,int spr, float kp, String sensor, int endt) 
  {
    /*
    last_time = millis();
        while(millis()-last_time < 100)
          {
            float error_L = map(mcp_m(1), min_mcp_m(1), max_mcp_m(1), 0, 30 );
            float error_R = map(mcp_m(2), min_mcp_m(2), max_mcp_m(2), 0, 30 );
            errors = error_L - error_R;  
            I = 0;
            previous_I = 0;
            previous_error = 0;
            P = errors;
            I = I + previous_I;
            D = errors - previous_error ;            
            previous_I=I;
            previous_error=errors  ;  
            PID_output = (kp * P) + (0.0000015 * I) + (0.5* D); 
            Motor(spl - PID_output,spr + PID_output);
                    
          }
    */

    while(1)
      {
            if(mcp_m(1)>md_mcp_m(1)&&mcp_m(2)>md_mcp_m(2)&&mcp_m(0)<md_mcp_m(0))
              {
                do{Motor(spl, 10);}while(mcp_m(2) > md_mcp_m(2));
              }
            else if(mcp_m(1)>md_mcp_m(1)&&mcp_m(2)>md_mcp_m(2)&&mcp_m(3)<md_mcp_m(3))
              {
                do{Motor(10, spr);}while(mcp_m(1) > md_mcp_m(1));
              }
            float error_L = map(mcp_m(1), min_mcp_m(1), max_mcp_m(1), 0, 30 );
            float error_R = map(mcp_m(2), min_mcp_m(2), max_mcp_m(2), 0, 30 );
            errors = error_L - error_R;  
            I = 0;
            previous_I = 0;
            previous_error = 0;
            P = errors;
            I = I + previous_I;
            D = errors - previous_error ;            
            previous_I=I;
            previous_error=errors  ;  
            PID_output = (kp * P) + (0.0000015 * I) + (0.5* D); 

            Motor(spl - PID_output,spr + PID_output);
             if(sensor == "a0")
                  {
                      if(mcp_f(0)<md_mcp_f(0) && mcp_f(1)<md_mcp_f(1))
                          {
                              break;
                          }
                  }
              else if(sensor == "a7")
                  {
                      if(mcp_f(7)<md_mcp_f(7) && mcp_f(6)<md_mcp_f(6))
                          {
                              break;
                          }
                  }
             else if(sensor == "b0")
                  {
                      if(mcp_b(0) < md_mcp_b(0))
                          {
                              break;
                          }
                  }
              else if(sensor == "b7")
                  {
                      if(mcp_b(7) < md_mcp_b(7))
                          {
                              break;
                          }
                  }
             else if(sensor == "26")
                  {
                      if(analogRead(26)<md_adc(26))
                          {
                              break;
                          }
                  }
              else if(sensor == "27")
                  {
                      if(analogRead(27)<md_adc(27))
                          {
                              break;
                          }
                  }
              else if(sensor == "m4")
                  {
                      if(mcp_m(4) < md_mcp_m(4)-30)
                          {
                              break;
                          }
                  }
              else if(sensor == "m5")
                  {
                      if(mcp_m(5) < md_mcp_m(5)-30)
                          {
                              break;
                          }
                  }
             else if(sensor == "m6")
                  {
                      if(mcp_m(6) < md_mcp_m(6)-30)
                          {
                              break;
                          }
                  }
              else if(sensor == "m7")
                  {
                      if(mcp_m(7) < md_mcp_m(7)-30)
                          {
                              break;
                          }
                  }
       } 
    if(endt > 0)
       {
          Motor(-spl,-spr);delay(endt);
          Motor(-1,-1);delay(10); 
       }
     else
       {}       

  }
 void TL(int spl, String sensor, int endt)
  {
    Motor(30, 30);delay(50);
    do{Motor(25, 25);}while(mcp_m(5) < md_mcp_m(5));
    delay(50);
    Motor(-1,-1);delay(20); 
    Motor(-spl/1.2, spl);delay(50);
    do{Motor(-spl/1.2, spl);}while(mcp_m(3) > md_mcp_m(3));
    if(sensor == "m2")
      {
        do{Motor(-spl/1.2, spl);}while(mcp_m(2) > md_mcp_m(2));
      }
    else if(sensor == "m1")
      {
        do{Motor(-spl/1.2, spl);}while(mcp_m(1) > md_mcp_m(1));
      }
    else if(sensor == "m0")
      {
        do{Motor(-spl/1.2, spl);}while(mcp_m(0) > md_mcp_m(0));
      }
    else if(sensor == "m3")
      {
        do{Motor(-spl/1.2, spl);}while(mcp_m(3) > md_mcp_m(3));
      }
    
    Motor(spl/1.2, -spl);delay(endt);
    Motor(1,1);delay(10); 
    
  }
 void TR(int spl, String sensor, int endt)
  {
    Motor(30, 30);delay(50);
    do{Motor(25, 25);}while(mcp_m(5) < md_mcp_m(5));
    delay(50);
    Motor(-1,-1);delay(20); 
    Motor(spl, -spl/1.2);delay(60);
    do{Motor(spl, -spl/1.2);}while(mcp_m(0) > md_mcp_m(0));
    if(sensor == "m1")
      {
        do{Motor(spl, -spl/1.2);}while(mcp_m(1) > md_mcp_m(1));
      }
    else if(sensor == "m2")
      {
        do{Motor(spl, -spl/1.2);}while(mcp_m(2) > md_mcp_m(2));
      }
    else if(sensor == "m3")
      {
        do{Motor(spl, -spl/1.2);}while(mcp_m(3) > md_mcp_m(3));
      }
    else if(sensor == "m0")
      {
        do{Motor(spl, -spl/1.2);}while(mcp_m(0) > md_mcp_m(0));
      }
    Motor(-spl/1.2, spl);delay(endt);
    Motor(1,1);delay(10); 
    
  }

void TL_MD(int spl, String sensor, int endt)
  {
    Motor(20, 20);delay(50);
    do{Motor(20, 20);}while(mcp_m(5) < md_mcp_m(5));
    Motor(-spl, spl);delay(200);
    do{Motor(-spl, spl);}while(mcp_m(3) > md_mcp_m(3));
    if(sensor == "m2")
      {
        do{Motor(-spl, spl);}while(mcp_m(2) > md_mcp_m(2));
      }
    else if(sensor == "m1")
      {
        do{Motor(-spl, spl);}while(mcp_m(1) > md_mcp_m(1));
      }
    else if(sensor == "m0")
      {
        do{Motor(-spl, spl);}while(mcp_m(0) > md_mcp_m(0));
      }
    else if(sensor == "m3")
      {
        do{Motor(-spl, spl);}while(mcp_m(3) > md_mcp_m(3));
      }
    
    Motor(spl, -spl);delay(endt);
    Motor(1,1);delay(10); 
    
  }
