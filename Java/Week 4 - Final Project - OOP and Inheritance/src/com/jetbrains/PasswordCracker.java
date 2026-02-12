package com.jetbrains;
import java.util.*;

public class PasswordCracker{

    public PasswordCracker()
    {

    }

    private String correctPassword = "lab1";

    public void RunPasswordCrackerArray()
    {
        String[] passwordVault = new String [10];
        passwordVault[0] = "banana";
        passwordVault[1] = "apple";
        passwordVault[2] = "orange";
        passwordVault[3] = "qwerty";
        passwordVault[4] = "admin";
        passwordVault[5] = "login";
        passwordVault[6] = "lab1";
        passwordVault[7] = "dragon";
        passwordVault[8] = "master";
        passwordVault[9] = "star1";

        for (int i = 0; i < passwordVault.length; i++)
        {
            System.out.println("Current password: " + i + " = " + passwordVault[i]);
            if (passwordVault[i] == correctPassword)
            {
                System.out.println("Password: " + passwordVault[i] + " is Correct!!!");
                System.out.println("");
                break;
            }
            else
            {
                System.out.println("Password: " + passwordVault[i] + " is Incorrect.");
                System.out.println("");
            }
        }
    }
}