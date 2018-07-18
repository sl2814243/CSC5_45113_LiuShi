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

        //  Setting窗体的大小并居中
        this.setSize(500, 600); //  Setting窗体大小
        this.setTitle("Chess Game"); //  Setting窗体标题

        int width = Toolkit.getDefaultToolkit().getScreenSize().width;// 获取屏幕的宽度
        int height = Toolkit.getDefaultToolkit().getScreenSize().height;// 获取屏幕的高度
        this.setLocation((width - 500) / 2, (height - 500) / 2); //  Setting窗体的位置（居中）
        this.setResizable(false); //  Setting窗体不可以放大
       
        //  Setting菜单栏
        JMenuBar bar = new JMenuBar();
        this.setJMenuBar(bar);
        // 添加菜单栏目录
        JMenu menu1 = new JMenu("Game Setting"); // 实例化菜单栏目录
        JMenu menu2 = new JMenu("Setting");
        JMenu menu3 = new JMenu("Help");
        bar.add(menu1); // 将目录添加到菜单栏
        bar.add(menu2);
        bar.add(menu3);

        JMenu menu4 = new JMenu("Game Model"); // 将“模式”菜单添加到“ Setting”里面
        menu2.add(menu4);

        //  Setting“”目录下面的子目录
        JRadioButtonMenuItem item1 = new JRadioButtonMenuItem("Man-Man Model");
        JRadioButtonMenuItem item2 = new JRadioButtonMenuItem("Man-Machine Model");
        // item1按钮添加时间并且为匿名类
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
        //  Settingitem2按钮的事件监听事件，也就是 SettingMan-Machine Model
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
        //  Setting按钮组并把Man-Machine Model与Man-Man Model添加到一个按钮组里面
        ButtonGroup bg = new ButtonGroup();
        bg.add(item1);
        bg.add(item2);
        // 将按钮组添加到菜单里面
        menu4.add(item1);
        menu4.add(item2);
        item2.setSelected(true);

        // 先行 Setting
        JMenu menu5 = new JMenu("Order Setting"); // 将“先行 Setting”菜单添加到“ Setting”里面
        menu2.add(menu5);
        //  Setting黑子先行还是White First的按钮
        JRadioButtonMenuItem item3 = new JRadioButtonMenuItem("Black First");
        JRadioButtonMenuItem item4 = new JRadioButtonMenuItem("White First");
        //  Settingitem3的鼠标点击事件， SettingBlack First
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
        //  Settingitem4的鼠标点击事件
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
        //  Setting按钮组并把Man-Machine Model与Man-Man Model添加到一个按钮组里面
        ButtonGroup bg1 = new ButtonGroup();
        bg1.add(item3);
        bg1.add(item4);
        // 将按钮组添加到菜单里面
        menu5.add(item3);
        menu5.add(item4);
        item3.setSelected(true);
        //  Setting“帮助”下面的子目录
        JMenuItem menu6 = new JMenuItem("Help");
        menu3.add(menu6);
        /*
         * 菜单栏的目录 Setting完毕
         */
        // Start Game菜单 Setting
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
        // Exit Game选项 Setting
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
                    System.exit(0);// 退出程序
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
        JRadioButtonMenuItem item5 = new JRadioButtonMenuItem("Low");// 添加按钮
        JRadioButtonMenuItem item6 = new JRadioButtonMenuItem("Simple");
        JRadioButtonMenuItem item7 = new JRadioButtonMenuItem("Normal");
        
        ButtonGroup bg3 = new ButtonGroup();//  Setting按钮组
        bg3.add(item5);
        bg3.add(item6);
        bg3.add(item7);
        // bg3.add(item8);
        JMenu menu10 = new JMenu("Game Difficulty Setting");// 添加菜单到主菜单
        menu2.add(menu10);
        menu10.add(item5);// 添加选项到Game Difficulty Setting菜单
        menu10.add(item6);
        menu10.add(item7);
        // menu2.add(item8);
        item5.setSelected(true);// 默认选项按钮
        // 傻瓜Game Difficulty Setting的鼠标点击事件
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
        // 简单Game Difficulty Setting模式
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
        // 普通Game Difficulty Setting
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
        //游戏帮助提示信息
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
         * 窗口里面的容器 Setting
         */
        Container con = this.getContentPane(); // 实例化一个容器父类
        con.add(panel); // 将容器添加到父类
        /*
         * 窗口里面的容器 Setting完毕
         */

    }

}