package com.ass9;

import javax.swing.*;
import java.awt.*;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Time extends JFrame {
    private JLabel timeLabel;

    public Time() {
        setTitle("Digital Clock");
        setSize(300, 100);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setLayout(new FlowLayout());

        timeLabel = new JLabel();
        timeLabel.setFont(new Font("Arial", Font.BOLD, 30));
        add(timeLabel);

        // Timer to update the time every second
        Timer timer = new Timer(1000, e -> updateTime());
        timer.start();

        updateTime(); // Initial call to set the time immediately
    }

    private void updateTime() {
        // Get the current time and format it
        SimpleDateFormat formatter = new SimpleDateFormat("HH:mm:ss");
        String currentTime = formatter.format(new Date());
        timeLabel.setText(currentTime);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            Time clock = new Time();
            clock.setVisible(true);
        });
    }
}