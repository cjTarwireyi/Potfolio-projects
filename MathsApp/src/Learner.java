
import javax.swing.JOptionPane;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 214051471
 */
public class Learner {
    
    private String learnerName;
    private int learnerMark ;
    private int total;
    public Learner()
    {}
    public Learner(String n,int m,int t)
    {
        learnerName=n;
        learnerMark=m;
         total=t;
    }
    public void setName(String n)
    {
        learnerName=n;
    }
    public void setMark(int m)
    {
        learnerMark=m;
    }
    public void setTotal(int tot)
    {
        total=tot;
    }
    public int getTotal()
    {
        return total;
    }
    public String getName()
    {
        return learnerName;
    }
    public int getMark()
    {
        int total=0;
        return   total+= learnerMark  ;
    }
    public String toString()
    {
    return  "You have completed your exercise\nResult\n" +learnerMark+" out of "+total;
    }
}
