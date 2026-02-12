package com.jetbrains;

public class Parasite extends Lifeform {

    private String SkinColor;

    public Parasite (String description, String skinColor)
    {
        super(description);
        SkinColor = skinColor;
    }

    public void displaySkinColor()
    {
        System.out.println("This parasite has " + SkinColor + " colored skin.");
    }
}
