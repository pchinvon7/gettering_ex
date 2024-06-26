void read_me()
  {
    sw();                           //--------->>> คำสั่งรอปุ่มกด
      bz(100);                        //--------->>> คำสั่งเปิดเสียง  
      rgb(0, 1, 0);                   //--------->>> คำสั่งเปิด ปิด led RGB
      Motor(30, 30);                  //--------->>> คำสั่งควบคุมการทำงานของมอเตอร์
      Motor(-30, -30); 
      
      mcp_f(0);                       //--------->>> คำสั่งแสดงค่าของ sensor แผงหน้าที่อ่านได้ ขณะนั้น mcp_f(0 - 7);
      md_mcp_f(0);                    //--------->>> คำสั่งแสดงค่ากลางของ sensor  md_mcp_f(0 - 7);
      max_mcp_f(0);                   //--------->>> คำสั่งแสดงค่าสูงสุดของ sensor  max_mcp_f(0 - 7);
      min_mcp_f(0);                   //--------->>> คำสั่งแสดงค่าต่ำสุดของ sensor  min_mcp_f(0 - 7);

      mcp_b(0);                       //--------->>> คำสั่งแสดงค่าของ sensor แผงหลังที่อ่านได้ ขณะนั้น mcp_f(0 - 7);
      md_mcp_b(0);                    //--------->>> คำสั่งแสดงค่ากลางของ sensor  md_mcp_b(0 - 7); 
      max_mcp_b(0);                   //--------->>> คำสั่งแสดงค่าสูงสุดของ sensor  max_mcp_b(0 - 7);
      min_mcp_b(0);                   //--------->>> คำสั่งแสดงค่าต่ำสุดของ sensor  min_mcp_b(0 - 7);

      analogRead(26);                 //--------->>> คำสั่งแสดงค่าของ sensor ใต้ท้อง  analogRead(26 - 27);
      md_adc(26);                     //--------->>> คำสั่งแสดงค่ากลางของ sensor ใต้ท้อง  md_adc(26 - 27); 

      servo(23,90);                   //--------->>> คำสั่งควบคุมการทำงาน servo servo(23,90);  พารามิเตอร์ ตัวที่ 1 ประกอบด้วย 23, 8, 7, 29 และ 28
                                      //--------->>>  พารามิเตอร์ ตัวที่ 2 ใส่ค่าตั้งแต่  0 -180

      fline(0,0,0.2,10,'c','l',80, "a2", 5);  //--------->>> คำสั่ง หุ่นยนต์เดินตามเส้นไปข้างหน้า
      bline(40,40,0.2,0,'c','p',80, "a4", 5);  //--------->>> คำสั่ง หุ่นยนต์เดินตามเส้นเดินถอยหลัง
      
      fline_2sensor(15, 15, 0.5, 0, "0:1","a7", 's', 30);
  }
