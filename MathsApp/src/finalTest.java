/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 214068730
 */
import java.awt.Color;
import java.util.*;
import javax.swing.*;
  
public class finalTest extends javax.swing.JFrame {

    /**
     * Creates new form finalTest
     */
     
   Random ran1 =new Random();
   Random ran2 =new Random();
   Random opRun =new Random();
   Learner learner =new Learner( );
   ArrayList<String>names= new ArrayList<String>();
   ArrayList<String>marks= new ArrayList<String>();
   ArrayList<String>total= new ArrayList<String>();
   ArrayList<String> op=new ArrayList<String>();
   int numOfQ;
   int count=0;  
   
    public finalTest() {
        initComponents();
         this.setTitle("BRAIN FLEX");
        this.setLocationRelativeTo(null);
        jPanel3.setBackground(Color.decode("#1569C7"));
        jPanel1.setBackground(Color.decode("#1569C7"));
        txtName.requestFocus();
        jPanel2.setVisible(false);
        jPanel3.setVisible(false);
        txtAnswer.setVisible(false);
        btnShow.setVisible(false);
        btnSubmit.setVisible(false);
        jTextField1.setVisible(false);
        jTextField2.setVisible(false);
        jTextField3.setVisible(false);
        names.add("Siraaj");
        marks.add("10");
        total.add("20");
        names.add("Cornelious");
        marks.add("11");
        total.add("15");
        op.add("+");
        op.add("-");
        op.add("/");
        op.add("*");
        }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jMenu3 = new javax.swing.JMenu();
        menuBar1 = new java.awt.MenuBar();
        menu1 = new java.awt.Menu();
        menu2 = new java.awt.Menu();
        popupMenu1 = new java.awt.PopupMenu();
        jMenuBar1 = new javax.swing.JMenuBar();
        jMenu1 = new javax.swing.JMenu();
        jMenu2 = new javax.swing.JMenu();
        jMenuBar3 = new javax.swing.JMenuBar();
        jMenu6 = new javax.swing.JMenu();
        jMenu7 = new javax.swing.JMenu();
        jDialog1 = new javax.swing.JDialog();
        jPanel1 = new javax.swing.JPanel();
        btnEnter = new javax.swing.JButton();
        txtName = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        txtNumQ = new javax.swing.JTextField();
        jLabel8 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();
        jButton1 = new javax.swing.JButton();
        jPanel2 = new javax.swing.JPanel();
        btnShow = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        txtAreaDisplay = new javax.swing.JTextArea();
        jLabel5 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jPanel3 = new javax.swing.JPanel();
        lblDisplay = new javax.swing.JLabel();
        txtAnswer = new javax.swing.JTextField();
        btnSubmit = new javax.swing.JButton();
        btnSave = new javax.swing.JButton();
        btnHome = new javax.swing.JButton();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jLabel10 = new javax.swing.JLabel();
        jTextField1 = new javax.swing.JTextField();
        jTextField2 = new javax.swing.JTextField();
        jTextField3 = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();
        jMenuBar2 = new javax.swing.JMenuBar();
        jMenu4 = new javax.swing.JMenu();
        jMenuItem1 = new javax.swing.JMenuItem();
        jMenuItem2 = new javax.swing.JMenuItem();

        jMenu3.setText("jMenu3");

        menu1.setLabel("File");
        menu1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                menu1ActionPerformed(evt);
            }
        });
        menuBar1.add(menu1);

        menu2.setLabel("Edit");
        menuBar1.add(menu2);

        popupMenu1.setLabel("popupMenu1");

        jMenu1.setText("File");
        jMenuBar1.add(jMenu1);

        jMenu2.setText("Edit");
        jMenuBar1.add(jMenu2);

        jMenu6.setText("File");
        jMenuBar3.add(jMenu6);

        jMenu7.setText("Edit");
        jMenuBar3.add(jMenu7);

        javax.swing.GroupLayout jDialog1Layout = new javax.swing.GroupLayout(jDialog1.getContentPane());
        jDialog1.getContentPane().setLayout(jDialog1Layout);
        jDialog1Layout.setHorizontalGroup(
            jDialog1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 400, Short.MAX_VALUE)
        );
        jDialog1Layout.setVerticalGroup(
            jDialog1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 300, Short.MAX_VALUE)
        );

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(new java.awt.CardLayout());

        jPanel1.setBorder(javax.swing.BorderFactory.createBevelBorder(0));
        jPanel1.setFont(new java.awt.Font("Tahoma", 2, 11)); // NOI18N
        jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        btnEnter.setFont(new java.awt.Font("Bodoni MT", 0, 18)); // NOI18N
        btnEnter.setText("OK");
        btnEnter.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));
        btnEnter.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnEnterActionPerformed(evt);
            }
        });
        btnEnter.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyReleased(java.awt.event.KeyEvent evt) {
                btnEnterKeyReleased(evt);
            }
        });
        jPanel1.add(btnEnter, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 240, 310, 40));

        txtName.setText(" ");
        jPanel1.add(txtName, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 130, 128, -1));

        jLabel2.setFont(new java.awt.Font("Bodoni MT", 1, 18)); // NOI18N
        jLabel2.setText("Name");
        jPanel1.add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(40, 130, -1, -1));

        jLabel3.setFont(new java.awt.Font("Bodoni MT", 1, 18)); // NOI18N
        jLabel3.setText("Number of Questions");
        jPanel1.add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(40, 160, -1, -1));

        txtNumQ.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtNumQActionPerformed(evt);
            }
        });
        txtNumQ.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyReleased(java.awt.event.KeyEvent evt) {
                txtNumQKeyReleased(evt);
            }
        });
        jPanel1.add(txtNumQ, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 160, 130, -1));

        jLabel8.setFont(new java.awt.Font("Snap ITC", 0, 24)); // NOI18N
        jLabel8.setForeground(new java.awt.Color(51, 255, 51));
        jLabel8.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel8.setText("Register");
        jPanel1.add(jLabel8, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 40, 250, 50));
        jPanel1.add(jLabel9, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 400, 350));

        getContentPane().add(jPanel1, "card6");

        jButton1.setText("jButton1");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButton1, "card2");

        jPanel2.setBorder(javax.swing.BorderFactory.createBevelBorder(0));
        jPanel2.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        btnShow.setText("Show");
        btnShow.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnShowActionPerformed(evt);
            }
        });
        jPanel2.add(btnShow, new org.netbeans.lib.awtextra.AbsoluteConstraints(170, 320, 70, 20));

        txtAreaDisplay.setEditable(false);
        txtAreaDisplay.setColumns(20);
        txtAreaDisplay.setRows(5);
        txtAreaDisplay.addContainerListener(new java.awt.event.ContainerAdapter() {
            public void componentAdded(java.awt.event.ContainerEvent evt) {
                txtAreaDisplayComponentAdded(evt);
            }
        });
        txtAreaDisplay.addMouseMotionListener(new java.awt.event.MouseMotionAdapter() {
            public void mouseMoved(java.awt.event.MouseEvent evt) {
                txtAreaDisplayMouseMoved(evt);
            }
        });
        jScrollPane1.setViewportView(txtAreaDisplay);

        jPanel2.add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(12, 48, 376, 260));

        jLabel5.setFont(new java.awt.Font("Snap ITC", 0, 24)); // NOI18N
        jLabel5.setForeground(new java.awt.Color(102, 255, 102));
        jLabel5.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel5.setText("Student Results");
        jPanel2.add(jLabel5, new org.netbeans.lib.awtextra.AbsoluteConstraints(80, 10, 250, -1));

        jLabel4.setIcon(new javax.swing.ImageIcon(getClass().getResource("/final.jpg"))); // NOI18N
        jPanel2.add(jLabel4, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 400, 350));

        getContentPane().add(jPanel2, "card3");

        jPanel3.setBackground(new java.awt.Color(204, 204, 204));
        jPanel3.setBorder(javax.swing.BorderFactory.createBevelBorder(0));
        jPanel3.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        lblDisplay.setFont(new java.awt.Font("Snap ITC", 0, 36)); // NOI18N
        lblDisplay.setForeground(new java.awt.Color(153, 255, 51));
        lblDisplay.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jPanel3.add(lblDisplay, new org.netbeans.lib.awtextra.AbsoluteConstraints(12, 143, 368, 40));

        txtAnswer.setText(" ");
        txtAnswer.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyReleased(java.awt.event.KeyEvent evt) {
                txtAnswerKeyReleased(evt);
            }
        });
        jPanel3.add(txtAnswer, new org.netbeans.lib.awtextra.AbsoluteConstraints(96, 223, 91, -1));

        btnSubmit.setText("Start");
        btnSubmit.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnSubmitActionPerformed(evt);
            }
        });
        jPanel3.add(btnSubmit, new org.netbeans.lib.awtextra.AbsoluteConstraints(176, 254, 96, -1));

        btnSave.setText("Submit");
        btnSave.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));
        btnSave.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                btnSaveMouseClicked(evt);
            }
        });
        btnSave.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnSaveActionPerformed(evt);
            }
        });
        jPanel3.add(btnSave, new org.netbeans.lib.awtextra.AbsoluteConstraints(216, 225, 64, 20));

        btnHome.setText("MENU");
        btnHome.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));
        btnHome.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnHomeActionPerformed(evt);
            }
        });
        jPanel3.add(btnHome, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 310, 380, -1));

        jLabel6.setFont(new java.awt.Font("Snap ITC", 1, 24)); // NOI18N
        jLabel6.setForeground(new java.awt.Color(153, 255, 51));
        jLabel6.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel6.setText("Final Test");
        jPanel3.add(jLabel6, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 40, 217, -1));

        jLabel7.setFont(new java.awt.Font("Snap ITC", 0, 18)); // NOI18N
        jLabel7.setForeground(new java.awt.Color(153, 255, 51));
        jLabel7.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel7.setText("Q1");
        jPanel3.add(jLabel7, new org.netbeans.lib.awtextra.AbsoluteConstraints(180, 100, 40, -1));

        jLabel10.setBackground(new java.awt.Color(255, 255, 255));
        jPanel3.add(jLabel10, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 400, 350));

        jTextField1.setText("jTextField1");
        jPanel3.add(jTextField1, new org.netbeans.lib.awtextra.AbsoluteConstraints(330, 210, -1, -1));

        jTextField2.setText("jTextField2");
        jPanel3.add(jTextField2, new org.netbeans.lib.awtextra.AbsoluteConstraints(330, 240, -1, -1));

        jTextField3.setText("jTextField3");
        jPanel3.add(jTextField3, new org.netbeans.lib.awtextra.AbsoluteConstraints(330, 270, -1, -1));

        getContentPane().add(jPanel3, "card4");

        jLabel1.setFont(new java.awt.Font("Snap ITC", 1, 24)); // NOI18N
        jLabel1.setText(" Final Test");
        getContentPane().add(jLabel1, "card5");

        jMenu4.setText("Options");
        jMenu4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenu4ActionPerformed(evt);
            }
        });

        jMenuItem1.setText("Records");
        jMenuItem1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuItem1ActionPerformed(evt);
            }
        });
        jMenu4.add(jMenuItem1);

        jMenuItem2.setText("Exit");
        jMenuItem2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuItem2ActionPerformed(evt);
            }
        });
        jMenu4.add(jMenuItem2);

        jMenuBar2.add(jMenu4);

        setJMenuBar(jMenuBar2);

        pack();
    }// </editor-fold>//GEN-END:initComponents
int counter=0;
    private void btnSubmitActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnSubmitActionPerformed
        // TODO add your handling code here:
        counter++;
        jLabel7.setText("Q"+Integer.toString(counter));
        int num1=ran1.nextInt(100);
        int num2= ran2.nextInt(100);
        int opNum=opRun.nextInt(4);
        String n1=Integer.toString(num1);
        String n2=Integer.toString(num2);
        if(op.get(opNum)=="-")
        {
        lblDisplay.setText(n2+op.get(opNum)+n1);
        jTextField1.setText(n2);
        jTextField2.setText(n1);
        }
        else{
        lblDisplay.setText(n1+op.get(opNum)+n2);   
        jTextField1.setText(n1);
        jTextField2.setText(n2);
        }    
        jTextField3.setText(op.get(opNum));
        txtAnswer.setVisible(true);
        btnSubmit.setEnabled(false);
         
    }//GEN-LAST:event_btnSubmitActionPerformed
    int points=0,n=1;

    private void btnSaveActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnSaveActionPerformed
        // TODO add your handling code here:
         count = count +1; 
         String answerr="",remainder=""; 
        int dNum1=0;
        if(jTextField3.getText().equals("+"))
        {
            answerr=Integer.toString(Integer.parseInt(jTextField1.getText())+Integer.parseInt(jTextField2.getText()));
        }
        else 
            if(jTextField3.getText().equals("-"))
            {
                answerr=Integer.toString(Integer.parseInt(jTextField1.getText())-Integer.parseInt(jTextField2.getText()));
            }
             else 
                if(jTextField3.getText().equals("*"))
                {
                    answerr=Integer.toString(Integer.parseInt(jTextField1.getText())*Integer.parseInt(jTextField2.getText()));
                }
                else
                    {
                        if(jTextField2.getText()=="0")
                        {
                            dNum1=1;
                        }
                        else 
                            {
                                dNum1=Integer.parseInt(jTextField2.getText());
                            }
                            remainder=Integer.toString(Integer.parseInt(jTextField1.getText())%dNum1);
                            if (Integer.parseInt(jTextField1.getText())%dNum1==0)
                            {
                              answerr=Integer.toString(Integer.parseInt(jTextField1.getText())/dNum1);
                            }
                            else
                                {
                                    answerr=Integer.toString(Integer.parseInt(jTextField1.getText())/dNum1)+"r"+remainder;
                                }
                         
                    }
                    if (answerr.equalsIgnoreCase(txtAnswer.getText()))
                    {
                        JOptionPane.showMessageDialog(null, "Correct");
                         points++;
                        learner.setMark(points);           
                    }
                    else
                        {
                            JOptionPane.showMessageDialog(null, "Incorrect");
                        }
                        txtAnswer.setText("");
                        btnSubmit.setEnabled(true);
                        btnSubmit.doClick(1);
                        txtAnswer.requestFocus();
                        if (count==numOfQ)
                        {
                            marks.add(Integer.toString(learner.getMark()));
                            JOptionPane.showMessageDialog(null,learner.toString());
                            count=0;
                            points=0;   
                            btnSave.setEnabled(false);
                            JOptionPane.showMessageDialog(null,"Click on options to view results\n OR to exit the test");
                           jMenuItem1.setVisible(true);
                            }
        
        
    }//GEN-LAST:event_btnSaveActionPerformed

    private void btnSaveMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_btnSaveMouseClicked
        // TODO add your handling code here:
        
    }//GEN-LAST:event_btnSaveMouseClicked

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        // TODO add your handling code here:
        User user=new User();
       
        
     
        user.setVisible(true);
        dispose();
    }//GEN-LAST:event_jButton1ActionPerformed

    private void btnEnterActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnEnterActionPerformed
        // TODO add your handling code here:
        int n;
        btnSubmit.doClick(1); 
        txtAnswer.requestFocus();
        if(txtName.getText().equals(" "))
        {
            JOptionPane.showMessageDialog(null,"Name is empty");
        }
        if(txtNumQ.getText().equals("")||txtNumQ.getText().equals("0"))
        {
                JOptionPane.showMessageDialog(null,"Number of questions is empty or you entered a zero");
        }
        else
            if((Integer.parseInt(txtNumQ.getText())<5)|| (Integer.parseInt(txtNumQ.getText())>20))
               {
                     JOptionPane.showMessageDialog(null,"Number of questions must be more than 4 and less than 21");
               }
               else
                    {
                        learner.setName(txtName.getText()); 
                        learner.setTotal(Integer.parseInt(txtNumQ.getText()));
                        names.add(learner.getName());
                        total.add(Integer.toString(learner.getTotal()));
                        numOfQ=Integer.parseInt(txtNumQ.getText());
                        JOptionPane.showMessageDialog(null,"For Division:\n if your answer has a remainder include the remainder"
                                + "\nFor example\n5/2 answer = 2r1\nGOOD LUCK!!!!!!");
                        jPanel3.setVisible(true);
                        jMenuItem1.setVisible(false);
                        jPanel1.setVisible(false); 
                        txtAnswer.setText("");
                }         
    }//GEN-LAST:event_btnEnterActionPerformed

    private void btnShowActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnShowActionPerformed
    StringBuilder sb = new StringBuilder();   
    StringBuilder sb1 = new StringBuilder();
  
    sb1.append("\033NAME\tMARK OBTAINED      TOTAL QUESTIONS\033\n\n");
    for (int i=0;i<names.size();i++)
        {
            sb.append(names.get(i)+"\t"+marks.get(i)+"\t\t"+total.get(i)+"\n");             
        }   
        txtAreaDisplay.setText(sb1.toString()+sb.toString());
    }//GEN-LAST:event_btnShowActionPerformed

    private void menu1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_menu1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_menu1ActionPerformed

    private void jMenuItem1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jMenuItem1ActionPerformed
        // TODO add your handling code here:
        jPanel2.setVisible(true);
        jPanel3.setVisible(false);
        jPanel1.setVisible(false);
         btnShow.doClick(1);
         
       
    }//GEN-LAST:event_jMenuItem1ActionPerformed

    private void jMenu4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jMenu4ActionPerformed
        // TODO add your handling code here:
       
    }//GEN-LAST:event_jMenu4ActionPerformed

    private void btnHomeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnHomeActionPerformed
        // TODO add your handling code here:
        String option;
        option=JOptionPane.showInputDialog("Do you want to quit: Y/N");
         if (option.equalsIgnoreCase("y"))
         {
            User user=new User();
            user.setVisible(true);
            this.setVisible(false);
            //dispose();
         }
    }//GEN-LAST:event_btnHomeActionPerformed

    private void txtAreaDisplayComponentAdded(java.awt.event.ContainerEvent evt) {//GEN-FIRST:event_txtAreaDisplayComponentAdded
        // TODO add your handling code here:
    }//GEN-LAST:event_txtAreaDisplayComponentAdded

    private void txtAreaDisplayMouseMoved(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_txtAreaDisplayMouseMoved
        // TODO add your handling code here:
         
    }//GEN-LAST:event_txtAreaDisplayMouseMoved

    private void jMenuItem2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jMenuItem2ActionPerformed
        // TODO add your handling code here:
        User user=new User();
        user.setVisible(true);
        dispose();
    }//GEN-LAST:event_jMenuItem2ActionPerformed

    private void txtNumQActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtNumQActionPerformed
        // TODO add your handling code here:
        
    }//GEN-LAST:event_txtNumQActionPerformed

    private void txtNumQKeyReleased(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_txtNumQKeyReleased
        // TODO add your handling code here:
         char ky;
        ky=evt.getKeyChar();
        if((Character.isDigit(ky))||(evt.getKeyCode() == evt.VK_ENTER))
        {
          
        }
        else
        {
           txtNumQ.setText("");
           JOptionPane.showMessageDialog(null,"Enter only a number to proceed");
        }
    }//GEN-LAST:event_txtNumQKeyReleased

    private void txtAnswerKeyReleased(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_txtAnswerKeyReleased
        // TODO add your handling code here:
        char ky;
        ky=evt.getKeyChar();
        if((Character.isDigit(ky))||(evt.getKeyCode() == evt.VK_ENTER)||(evt.getKeyChar()=='r'))
        {
          
        }
        else
        {
            txtAnswer.setText("");
           JOptionPane.showMessageDialog(null,"Enter only a number to proceed");
        }
    }//GEN-LAST:event_txtAnswerKeyReleased

    private void btnEnterKeyReleased(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_btnEnterKeyReleased
        // TODO add your handling code here:
         
    }//GEN-LAST:event_btnEnterKeyReleased

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
            java.util.logging.Logger.getLogger(finalTest.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(finalTest.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(finalTest.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(finalTest.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
                     
        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new finalTest().setVisible(true);
                
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnEnter;
    private javax.swing.JButton btnHome;
    private javax.swing.JButton btnSave;
    private javax.swing.JButton btnShow;
    private javax.swing.JButton btnSubmit;
    private javax.swing.JButton jButton1;
    private javax.swing.JDialog jDialog1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel10;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JMenu jMenu1;
    private javax.swing.JMenu jMenu2;
    private javax.swing.JMenu jMenu3;
    private javax.swing.JMenu jMenu4;
    private javax.swing.JMenu jMenu6;
    private javax.swing.JMenu jMenu7;
    private javax.swing.JMenuBar jMenuBar1;
    private javax.swing.JMenuBar jMenuBar2;
    private javax.swing.JMenuBar jMenuBar3;
    private javax.swing.JMenuItem jMenuItem1;
    private javax.swing.JMenuItem jMenuItem2;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JPanel jPanel3;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextField jTextField1;
    private javax.swing.JTextField jTextField2;
    private javax.swing.JTextField jTextField3;
    private javax.swing.JLabel lblDisplay;
    private java.awt.Menu menu1;
    private java.awt.Menu menu2;
    private java.awt.MenuBar menuBar1;
    private java.awt.PopupMenu popupMenu1;
    private javax.swing.JTextField txtAnswer;
    private javax.swing.JTextArea txtAreaDisplay;
    private javax.swing.JTextField txtName;
    private javax.swing.JTextField txtNumQ;
    // End of variables declaration//GEN-END:variables
}
