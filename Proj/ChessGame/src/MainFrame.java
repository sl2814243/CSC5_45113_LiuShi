import javax.swing.ButtonGroup;
import javax.swing.Icon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;
import javax.swing.JRadioButtonMenuItem;

import java.awt.Color;
import java.awt.Component;
import java.awt.Container;
import java.awt.Graphics;
import java.awt.Toolkit;
import java.awt.event.ActionListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;


public class MainFrame extends JFrame {

    final ChessPanel panel = new ChessPanel();

    public MainFrame() {

        //  Setting����Ĵ�С������
        this.setSize(500, 600); //  Setting�����С
        this.setTitle("Chess Game"); //  Setting�������

        int width = Toolkit.getDefaultToolkit().getScreenSize().width;// ��ȡ��Ļ�Ŀ��
        int height = Toolkit.getDefaultToolkit().getScreenSize().height;// ��ȡ��Ļ�ĸ߶�
        this.setLocation((width - 500) / 2, (height - 500) / 2); //  Setting�����λ�ã����У�
        this.setResizable(false); //  Setting���岻���ԷŴ�
       
        //  Setting�˵���
        JMenuBar bar = new JMenuBar();
        this.setJMenuBar(bar);
        // ��Ӳ˵���Ŀ¼
        JMenu menu1 = new JMenu("Game Setting"); // ʵ�����˵���Ŀ¼
        JMenu menu2 = new JMenu("Setting");
        JMenu menu3 = new JMenu("Help");
        bar.add(menu1); // ��Ŀ¼��ӵ��˵���
        bar.add(menu2);
        bar.add(menu3);

        JMenu menu4 = new JMenu("Game Model"); // ����ģʽ���˵���ӵ��� Setting������
        menu2.add(menu4);

        //  Setting����Ŀ¼�������Ŀ¼
        JRadioButtonMenuItem item1 = new JRadioButtonMenuItem("Man-Man Model");
        JRadioButtonMenuItem item2 = new JRadioButtonMenuItem("Man-Machine Model");
        // item1��ť���ʱ�䲢��Ϊ������
        item1.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub
                Icon icon = new Icon() {

                    @Override
                    public void paintIcon(Component c, Graphics g, int x, int y) {
                        // TODO Auto-generated method stub

                    }

                    @Override
                    public int getIconWidth() {
                        // TODO Auto-generated method stub
                        return 0;
                    }

                    @Override
                    public int getIconHeight() {
                        // TODO Auto-generated method stub
                        return 0;
                    }
                };
                Object[] options = { "Save and Restart", "No, Thanks" };
                int n = JOptionPane.showOptionDialog(null, "Save Settings and Restart?", "Man-Machine Model Setting", 0, 1, icon, options, "Save and Restart");
                if (n == 0) {
                    panel.setIsManAgainst(true);
                    panel.Start();
                    item1.setSelected(true);
                }

            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        //  Settingitem2��ť���¼������¼���Ҳ���� SettingMan-Machine Model
        item2.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub

                Icon icon = new Icon() {

                    @Override
                    public void paintIcon(Component c, Graphics g, int x, int y) {
                        // TODO Auto-generated method stub

                    }

                    @Override
                    public int getIconWidth() {
                        // TODO Auto-generated method stub
                        return 0;
                    }

                    @Override
                    public int getIconHeight() {
                        // TODO Auto-generated method stub
                        return 0;
                    }
                };
                Object[] options = { "Save and Restart", "No, Thanks" };
                int n = JOptionPane.showOptionDialog(null, "Save Settings and Restart?", "Man-Machine Model Setting", 0, 1, icon, options, "Save and Restart");
                if (n == 0) {
                    panel.setIsManAgainst(false);
                    panel.Start();
                    item2.setSelected(true);
                }
            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        //  Setting��ť�鲢��Man-Machine Model��Man-Man Model��ӵ�һ����ť������
        ButtonGroup bg = new ButtonGroup();
        bg.add(item1);
        bg.add(item2);
        // ����ť����ӵ��˵�����
        menu4.add(item1);
        menu4.add(item2);
        item2.setSelected(true);

        // ���� Setting
        JMenu menu5 = new JMenu("Order Setting"); // �������� Setting���˵���ӵ��� Setting������
        menu2.add(menu5);
        //  Setting�������л���White First�İ�ť
        JRadioButtonMenuItem item3 = new JRadioButtonMenuItem("Black First");
        JRadioButtonMenuItem item4 = new JRadioButtonMenuItem("White First");
        //  Settingitem3��������¼��� SettingBlack First
        item3.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub
                Icon icon = new Icon() {

                    @Override
                    public void paintIcon(Component c, Graphics g, int x, int y) {
                        // TODO Auto-generated method stub

                    }

                    @Override
                    public int getIconWidth() {
                        // TODO Auto-generated method stub
                        return 0;
                    }

                    @Override
                    public int getIconHeight() {
                        // TODO Auto-generated method stub
                        return 0;
                    }
                };
                Object[] options = { "Save and Restart", "No, Thanks" };
                int n = JOptionPane.showOptionDialog(null, "Save Settings and Restart?", "Man-Machine Model Setting", 0, 1, icon, options, "Save and Restart");
                if (n == 0) {
                    panel.setIsBlack(true);
                    panel.Start();
                    item3.setSelected(true);
                }

            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        //  Settingitem4��������¼�
        item4.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub
                Icon icon = new Icon() {

                    @Override
                    public void paintIcon(Component c, Graphics g, int x, int y) {
                        // TODO Auto-generated method stub

                    }

                    @Override
                    public int getIconWidth() {
                        // TODO Auto-generated method stub
                        return 0;
                    }

                    @Override
                    public int getIconHeight() {
                        // TODO Auto-generated method stub
                        return 0;
                    }
                };
                Object[] options = { "Save and Restart", "No, Thanks" };
                int n = JOptionPane.showOptionDialog(null, "Save Settings and Restart?", "Man-Machine Model Setting", 0, 1, icon, options, "Save and Restart");
                if (n == 0) {
                    panel.setIsBlack(false);
                    panel.Start();
                    item4.setSelected(true);
                }

            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        //  Setting��ť�鲢��Man-Machine Model��Man-Man Model��ӵ�һ����ť������
        ButtonGroup bg1 = new ButtonGroup();
        bg1.add(item3);
        bg1.add(item4);
        // ����ť����ӵ��˵�����
        menu5.add(item3);
        menu5.add(item4);
        item3.setSelected(true);
        //  Setting���������������Ŀ¼
        JMenuItem menu6 = new JMenuItem("Help");
        menu3.add(menu6);
        /*
         * �˵�����Ŀ¼ Setting���
         */
        // Start Game�˵� Setting
        JMenuItem menu7 = new JMenuItem("Start Game");
        menu1.add(menu7);
        JMenuItem menu8 = new JMenuItem("Restart Game");
        menu1.add(menu8);
        menu7.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub

                panel.Start();
                // panel.repaint();

            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        menu8.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub
                Icon icon = new Icon() {

                    @Override
                    public void paintIcon(Component c, Graphics g, int x, int y) {
                        // TODO Auto-generated method stub

                    }

                    @Override
                    public int getIconWidth() {
                        // TODO Auto-generated method stub
                        return 0;
                    }

                    @Override
                    public int getIconHeight() {
                        // TODO Auto-generated method stub
                        return 0;
                    }
                };
                Object[] options = { "Restart Game", "No, Thanks" };
                int n = JOptionPane.showOptionDialog(null, "Restart Game?", "Message", 0, 1, icon, options, "Save and Restart");
                if (n == 0) {
                    panel.Start();
                }

                // panel.repaint();

            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        // Exit Gameѡ�� Setting
        JMenuItem menu9 = new JMenuItem("Exit Game");
        menu1.add(menu9);
        menu9.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub
                Icon icon = new Icon() {

                    @Override
                    public void paintIcon(Component c, Graphics g, int x, int y) {
                        // TODO Auto-generated method stub

                    }

                    @Override
                    public int getIconWidth() {
                        // TODO Auto-generated method stub
                        return 0;
                    }

                    @Override
                    public int getIconHeight() {
                        // TODO Auto-generated method stub
                        return 0;
                    }
                };
                Object[] options = { "Exit Game", "No, Thanks" };
                int n = JOptionPane.showOptionDialog(null, "Exit Game?", "Message", 0, 1, icon, options, "Save and Restart");
                if (n == 0) {
                    System.exit(0);// �˳�����
                }

                // panel.repaint();

            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        // Game Difficulty Setting
        JRadioButtonMenuItem item5 = new JRadioButtonMenuItem("Low");// ��Ӱ�ť
        JRadioButtonMenuItem item6 = new JRadioButtonMenuItem("Simple");
        JRadioButtonMenuItem item7 = new JRadioButtonMenuItem("Normal");
        
        ButtonGroup bg3 = new ButtonGroup();//  Setting��ť��
        bg3.add(item5);
        bg3.add(item6);
        bg3.add(item7);
        // bg3.add(item8);
        JMenu menu10 = new JMenu("Game Difficulty Setting");// ��Ӳ˵������˵�
        menu2.add(menu10);
        menu10.add(item5);// ���ѡ�Game Difficulty Setting�˵�
        menu10.add(item6);
        menu10.add(item7);
        // menu2.add(item8);
        item5.setSelected(true);// Ĭ��ѡ�ť
        // ɵ��Game Difficulty Setting��������¼�
        item5.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub

                Icon icon = new Icon() {

                    @Override
                    public void paintIcon(Component c, Graphics g, int x, int y) {
                        // TODO Auto-generated method stub

                    }

                    @Override
                    public int getIconWidth() {
                        // TODO Auto-generated method stub
                        return 0;
                    }

                    @Override
                    public int getIconHeight() {
                        // TODO Auto-generated method stub
                        return 0;
                    }
                };
                Object[] options = { "Save and Restart", "No, Thanks" };
                int n = JOptionPane.showOptionDialog(null, "Save Settings and Restart?", "Man-Machine Model Setting", 0, 1, icon, options, "Save and Restart");
                if (n == 0) {
                    panel.setGameDifficulty(0);
                    panel.Start();
                    item5.setSelected(true);
                }
            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        // ��Game Difficulty Settingģʽ
        item6.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub

                Icon icon = new Icon() {

                    @Override
                    public void paintIcon(Component c, Graphics g, int x, int y) {
                        // TODO Auto-generated method stub

                    }

                    @Override
                    public int getIconWidth() {
                        // TODO Auto-generated method stub
                        return 0;
                    }

                    @Override
                    public int getIconHeight() {
                        // TODO Auto-generated method stub
                        return 0;
                    }
                };
                Object[] options = { "Save and Restart", "No, Thanks" };
                int n = JOptionPane.showOptionDialog(null, "Save Settings and Restart?", "Game Difficulty Setting", 0, 1, icon, options, "Save and Restart");
                if (n == 0) {
                    panel.setGameDifficulty(1);
                    panel.Start();
                    item6.setSelected(true);
                }
            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        // ��ͨGame Difficulty Setting
        item7.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub

                Icon icon = new Icon() {

                    @Override
                    public void paintIcon(Component c, Graphics g, int x, int y) {
                        // TODO Auto-generated method stub

                    }

                    @Override
                    public int getIconWidth() {
                        // TODO Auto-generated method stub
                        return 0;
                    }

                    @Override
                    public int getIconHeight() {
                        // TODO Auto-generated method stub
                        return 0;
                    }
                };
                Object[] options = { "Save and Restart", "No, Thanks" };
                int n = JOptionPane.showOptionDialog(null, "Save Settings and Restart?", "Man-Machine Model Setting", 0, 1, icon, options, "Save and Restart");
                if (n == 0) {
                    panel.setGameDifficulty(2);
                    panel.Start();
                    item7.setSelected(true);
                }
            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        //��Ϸ������ʾ��Ϣ
        menu6.addMouseListener(new MouseListener() {

            @Override
            public void mouseReleased(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mousePressed(MouseEvent e) {
                // TODO Auto-generated method stub
                Icon icon = new Icon() {

                    @Override
                    public void paintIcon(Component c, Graphics g, int x, int y) {
                        // TODO Auto-generated method stub

                    }

                    @Override
                    public int getIconWidth() {
                        // TODO Auto-generated method stub
                        return 0;
                    }

                    @Override
                    public int getIconHeight() {
                        // TODO Auto-generated method stub
                        return 0;
                    }
                };
                JOptionPane.showMessageDialog(null, "Chess Game");

            }

            @Override
            public void mouseExited(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseEntered(MouseEvent e) {
                // TODO Auto-generated method stub

            }

            @Override
            public void mouseClicked(MouseEvent e) {
                // TODO Auto-generated method stub

            }
        });
        /*
         * ������������� Setting
         */
        Container con = this.getContentPane(); // ʵ����һ����������
        con.add(panel); // ��������ӵ�����
        /*
         * ������������� Setting���
         */

    }

}