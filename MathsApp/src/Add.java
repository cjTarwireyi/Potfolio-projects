    import java.util.Random;
    import javax.swing.JOptionPane;
    import java.util.*;
    import java.awt.Color;
    
    
    
    
    
    
public class Add extends javax.swing.JFrame {
    
        String[] questions = new String[30];
        String[] answer = new String[30];
        Random rand = new Random();
        int count = 0;
        int num;
        int correct = 0; 

    /**
     * Creates new form Add
     */
    public Add() {
        initComponents();
        this.setTitle("BRAIN FLEX");
        jLabel1.setVisible(false);
        jLabel2.setVisible(false);
        jPanel1.setVisible(false);
        jPanel1.setOpaque(false);
        
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jPanel1 = new javax.swing.JPanel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jLabel8 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();
        jLabel10 = new javax.swing.JLabel();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        jLabel11 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel1.setFont(new java.awt.Font("Snap ITC", 1, 24)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(102, 255, 102));
        jLabel1.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel1.setText("Addition");
        getContentPane().add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(89, 59, 194, 30));

        jLabel2.setFont(new java.awt.Font("Snap ITC", 0, 18)); // NOI18N
        jLabel2.setForeground(new java.awt.Color(102, 255, 102));
        jLabel2.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel2.setText("Q1");
        getContentPane().add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(23, 23, 56, 50));

        jLabel3.setFont(new java.awt.Font("Snap ITC", 0, 14)); // NOI18N
        jLabel3.setForeground(new java.awt.Color(102, 255, 102));
        jLabel3.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel3.setText("0");

        jLabel4.setFont(new java.awt.Font("Snap ITC", 0, 11)); // NOI18N
        jLabel4.setForeground(new java.awt.Color(102, 255, 102));
        jLabel4.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel4.setText("---------");

        jLabel5.setFont(new java.awt.Font("Snap ITC", 0, 14)); // NOI18N
        jLabel5.setForeground(new java.awt.Color(102, 255, 102));
        jLabel5.setText("10");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(23, 23, 23)
                        .addComponent(jLabel3))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addContainerGap()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGap(10, 10, 10)
                                .addComponent(jLabel5))
                            .addComponent(jLabel4))))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel3)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jLabel4)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jLabel5)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        getContentPane().add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(297, 2, -1, -1));

        jLabel6.setFont(new java.awt.Font("Snap ITC", 0, 36)); // NOI18N
        jLabel6.setForeground(new java.awt.Color(102, 255, 102));
        jLabel6.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel6.setText("HIT START!!");
        getContentPane().add(jLabel6, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 130, 363, 40));

        jLabel7.setFont(new java.awt.Font("Snap ITC", 0, 14)); // NOI18N
        jLabel7.setForeground(new java.awt.Color(102, 255, 102));
        jLabel7.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel7.setText(" ");
        jLabel7.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jLabel7MouseClicked(evt);
            }
        });
        getContentPane().add(jLabel7, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 220, 75, -1));

        jLabel8.setFont(new java.awt.Font("Snap ITC", 0, 14)); // NOI18N
        jLabel8.setForeground(new java.awt.Color(102, 255, 102));
        jLabel8.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel8.setText(" ");
        jLabel8.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jLabel8MouseClicked(evt);
            }
        });
        getContentPane().add(jLabel8, new org.netbeans.lib.awtextra.AbsoluteConstraints(230, 220, 75, -1));

        jLabel9.setFont(new java.awt.Font("Snap ITC", 0, 14)); // NOI18N
        jLabel9.setForeground(new java.awt.Color(102, 255, 102));
        jLabel9.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel9.setText(" ");
        jLabel9.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jLabel9MouseClicked(evt);
            }
        });
        getContentPane().add(jLabel9, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 270, 75, -1));

        jLabel10.setFont(new java.awt.Font("Snap ITC", 0, 14)); // NOI18N
        jLabel10.setForeground(new java.awt.Color(102, 255, 102));
        jLabel10.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel10.setText(" ");
        jLabel10.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jLabel10MouseClicked(evt);
            }
        });
        getContentPane().add(jLabel10, new org.netbeans.lib.awtextra.AbsoluteConstraints(230, 270, 75, -1));

        jButton1.setText("START");
        jButton1.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButton1, new org.netbeans.lib.awtextra.AbsoluteConstraints(19, 309, 346, -1));

        jButton2.setText("QUIT");
        jButton2.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });
        getContentPane().add(jButton2, new org.netbeans.lib.awtextra.AbsoluteConstraints(308, 337, 57, -1));

        jLabel11.setIcon(new javax.swing.ImageIcon(getClass().getResource("/blue.jpg"))); // NOI18N
        getContentPane().add(jLabel11, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 380, 370));

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        // TODO add your handling code here:
         count=count+1;
         jLabel3.setText(Integer.toString(correct));
         jLabel2.setText("Q"+Integer.toString(count));
         jButton1.setVisible(false);
         jButton2.setVisible(true);
         jLabel1.setVisible(true);
         
         
         questions[0]="5+2";
         questions[1]="10+2";
         questions[2]="1+2";
         questions[3]="0+2";
         questions[4]="3+2";
         questions[5]="5+2+100";
         questions[6]="100+20+1+2";
         questions[7]="0+0+1";
         questions[8]="2+2+2";
         questions[9]="6+3";
         questions[10]="1000+1000000";
         questions[11]="100000+3";
         questions[12]="5+9";
         questions[13]="+9+9+9";
         questions[14]="75+4+1";
         questions[15]="90+5+4+1";
         questions[16]="1+1+8";
         questions[17]="200+1+50";
         questions[18]="0+2";
         questions[19]="60+60+1";
         questions[20]="100+0+18";
         questions[21]="18+18+18";
         questions[22]="29+18+1";
         questions[23]="1+2+5+2";
         questions[24]="80+4+5+1";
         questions[25]="8+7+1";
         questions[26]="17+18+14";
         questions[27]="29+1+29+1";
         questions[28]="18+2+93";
         questions[29]="100+150";
         
         
         answer[0]="7";
         answer[1]="12";
         answer[2]="3";
         answer[3]="2";
         answer[4]="5";
         answer[5]="107";
         answer[6]="125";
         answer[7]="1";
         answer[8]="6";
         answer[9]="9";
         answer[10]="1001000";
         answer[11]="1000003";
         answer[12]="13";
         answer[13]="27";
         answer[14]="80";
         answer[15]="100";
         answer[16]="10";
         answer[17]="251";
         answer[18]="2";
         answer[19]="121";
         answer[20]="118";
         answer[21]="54";
         answer[22]="48";
         answer[23]="10";
         answer[24]="90";
         answer[25]="16";
         answer[26]="49";
         answer[27]="60";
         answer[28]="113";
         answer[29]="250";
         
         
         
         
  
         num=rand.nextInt(30);
         //No repeat function
         int j = 0;
         int[] n = new int[30];
         n[j] = num;
         j++;
         for(int i=0;i<j;i++)
         {
             while(num==n[i])
                 num=rand.nextInt(30); 
            
         }
         
           if(count ==1)
           {
               jPanel1.setVisible(true);
               jLabel2.setVisible(true);
               
               jLabel6.setText(questions[num]);
               jLabel10.setText(answer[num]);
               jLabel7.setText(Integer.toString(rand.nextInt(100)));
               jLabel9.setText(Integer.toString(rand.nextInt(100)));
               jLabel8.setText(Integer.toString(rand.nextInt(100)));
               jButton1.setVisible(false);
              
           }
           else
               if((count>=2)&&(count<10))
               {
                 jPanel1.setVisible(true);
                 jLabel2.setVisible(true);
                 
                 jLabel6.setText(questions[num]);
                 jLabel9.setText(answer[num]);
                 jLabel7.setText(Integer.toString(rand.nextInt(rand.nextInt(100))));
                 jLabel10.setText(Integer.toString(rand.nextInt(num)));
                 jLabel7.setText(Integer.toString(rand.nextInt(rand.nextInt(50))));
                 jButton1.setVisible(false);
                 
               } 
           else
                   if(count==10)
                    {
                            JOptionPane.showMessageDialog(null,"You have completed you training!!!");
                            new User().setVisible(true);
                            dispose();
                    }
    }//GEN-LAST:event_jButton1ActionPerformed

    private void jLabel7MouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_jLabel7MouseClicked
        // TODO add your handling code here:
        if(jLabel7.getText().equals(answer[num]))
        {
           JOptionPane.showMessageDialog(null,"Correct"); 
           correct = correct + 1;
           jButton1.doClick(1);
        }
        
        else
        {
            JOptionPane.showMessageDialog(null,"Incorrect"); 
            JOptionPane.showMessageDialog(null,"The correct answer is\n\t"+answer[num]);
            jButton1.doClick(1);
            
        }   
    }//GEN-LAST:event_jLabel7MouseClicked

    private void jLabel8MouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_jLabel8MouseClicked
        // TODO add your handling code here:
         if(jLabel8.getText().equals(answer[num]))
        {
           JOptionPane.showMessageDialog(null,"Correct"); 
           correct = correct + 1;
           jButton1.doClick(1);
        }
        
        else
        {
            JOptionPane.showMessageDialog(null,"Incorrect"); 
            JOptionPane.showMessageDialog(null,"The correct answer is\n\t"+answer[num]);
            jButton1.doClick(1);
            
        }   
    }//GEN-LAST:event_jLabel8MouseClicked

    private void jLabel9MouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_jLabel9MouseClicked
        // TODO add your handling code here:
         if(jLabel9.getText().equals(answer[num]))
        {
           JOptionPane.showMessageDialog(null,"Correct"); 
           correct = correct + 1;
           jButton1.doClick(1);
        }
        
        else
        {
            JOptionPane.showMessageDialog(null,"Incorrect"); 
            JOptionPane.showMessageDialog(null,"The correct answer is\n\t"+answer[num]);
            jButton1.doClick(1);
            
        }   
    }//GEN-LAST:event_jLabel9MouseClicked

    private void jLabel10MouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_jLabel10MouseClicked
        // TODO add your handling code here:
         if(jLabel10.getText().equals(answer[num]))
        {
           JOptionPane.showMessageDialog(null,"Correct"); 
           correct = correct + 1;
           jButton1.doClick(1);
        }
        
        else
        {
            JOptionPane.showMessageDialog(null,"Incorrect"); 
            JOptionPane.showMessageDialog(null,"The correct answer is\n\t"+answer[num]);
            jButton1.doClick(1);
            
        }   
    }//GEN-LAST:event_jLabel10MouseClicked

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        // TODO add your handling code here:
         String res;
        if(count>=1)
        {
               res =JOptionPane.showInputDialog("You have already started the Practise\nare you sure you want quit Y/N?");
               
               while((!res.equalsIgnoreCase("Y"))&&(!res.equalsIgnoreCase("N")))
               {
                     JOptionPane.showMessageDialog(null,"Invalid please re-enter");
                     res =JOptionPane.showInputDialog("Y/N?");
               }
               if(res.equalsIgnoreCase("Y"))
               {
                   User user=new User();
                   user.setVisible(true);
                    dispose();
               }  
        }
        else
        {
            User user=new User();
            user.setVisible(true);
            dispose();
        }
    }//GEN-LAST:event_jButton2ActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Add.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Add.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Add.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Add.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Add().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel10;
    private javax.swing.JLabel jLabel11;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JPanel jPanel1;
    // End of variables declaration//GEN-END:variables
}
