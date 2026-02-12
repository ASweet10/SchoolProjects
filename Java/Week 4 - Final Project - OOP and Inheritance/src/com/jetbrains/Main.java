package com.jetbrains;
import java.util.Scanner;
import java.util.concurrent.TimeUnit;

public class Main {

    public static void main(String[] args)
    {
        System.out.println("Hello, my name is MAC. It stands for Multipurpose Assignment Computer.");
        System.out.println("What is your name?");

        //Get user input using Scanner class
        Scanner nameScanner = new Scanner(System.in);
        String nameInput = nameScanner.nextLine();
        System.out.println("Hello " + nameInput + "! Welcome to Starbase 13!");

        System.out.println("Starbase 13. A glorious achievement that will go down in history.");
        System.out.println("Its sleek metal exterior and ovular shape make it seem futuristic.");
        System.out.println("Starbase 13 is the result of tireless effort from some of the world's top scientific minds.");
        System.out.println("You may notice the flashing lights as you enter close proximity.");
        System.out.println("These are used for ship docking, triangulation of signals, and other important tasks.");
        System.out.println("As your transport vessel reaches the docking bay, giant doors will open for docking procedure.");
        System.out.println("Do not be alarmed by the creaking and groaning sounds you hear, as they are expected.");
        System.out.println("Try to take in the experience. You are one of the first civilian groups allowed access.");

        Spaceship Enterprise = new Spaceship("the classic Star Trek space cruiser in one corner.");
        Spaceship Apollo = new Spaceship("a conical spacecraft lost to time.");
        Spaceship Independence = new Spaceship("a famous mothership.");
        Spaceship Moonraker = new Spaceship("a complex spaceship like nothing you've seen before.");
        Spaceship MillenniumFalcon = new Spaceship("a familiar disk-like spaceship.");

        Lifeform Xenomorph = new Lifeform ("a hideous black creature with a tail trapped behind a glass pane.");
        Lifeform ET = new Lifeform ("an alien that points at you and his finger glows.");
        Lifeform Yoda = new Lifeform ("an ancient-looking green alien with pointed ears meditating mid-air.");
        Lifeform Rigellian = new Lifeform ("a green tentacled alien encased in a giant glass helmet.");
        Lifeform Stitch = new Lifeform ("a small blue alien with four arms locked in a complex cage labeled: DANGEROUS.");

        Robot Tripod = new Robot("a strange machine with 3 legs and tentacles rolled onto its side.", "rusted brown");
        Robot T2000 = new Robot("a humanoid robot with glowing red eyes sitting in disrepair.", "polished chrome");
        Robot Bumblebee = new Robot("a rusted yellow robot missing its voice box and looking defeated.", "yellow");
        Robot Bender = new Robot("a shiny metal robot who reeks of alcohol and is missing its butt plate.", "faded silver");
        Robot C3PO = new Robot("a gold robot that shuffles nervously back and forth.", "luminous gold");

        Parasite Facehugger = new Parasite("a creature with 8 legs, a tail, and no eyes that waves its tail menacingly.", "beige");
        Parasite Cordyceps = new Parasite("a strange fungus growing out at odd angles through an ant's exoskeleton.", "milky white");
        Parasite Thing = new Parasite("an apparent person sitting in a cell marked: DANGER. DO NOT OPEN CELL UNDER ANY CIRCUMSTANCES.", "pasty white");
        Parasite BrainSlug = new Parasite("a small blob with one eye that has a blank expression on its face.", "green");
        Parasite TheyLive = new Parasite("a person siting in a cell, revealed to be a skeletal alien under special lighting.", "brown");

        Enterprise.DisplaySpaceShipDescription();
        Apollo.DisplaySpaceShipDescription();
        Independence.DisplaySpaceShipDescription();
        Moonraker.DisplaySpaceShipDescription();
        MillenniumFalcon.DisplaySpaceShipDescription();
        Xenomorph.DisplayLifeformDescription();
        ET.DisplayLifeformDescription();
        Yoda.DisplayLifeformDescription();
        Rigellian.DisplayLifeformDescription();
        Stitch.DisplayLifeformDescription();

        System.out.println("You continue to peer around the hangar....");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex) {
            Thread.currentThread().interrupt();
        }

        System.out.println("As you continue to walk through the enormous hangar, you start to recognize objects around you.");
        System.out.println("");
        System.out.println("You're pretty sure you recognize the first robot in the scrap heap.");
        Tripod.DisplayLifeformDescription();
        Tripod.displayCasingColor();
        System.out.println("'It's a Tripod!', you exclaim. 'They nearly conquered Earth in the late 19th century!'");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex) {
            Thread.currentThread().interrupt();
        }

        System.out.println("'This must be one of those old SKYNET models.'");
        T2000.DisplayLifeformDescription();
        T2000.displayCasingColor();
        System.out.println("'SKYNET nearly destroyed humanity.. A remnant of a dark era.'");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex)
        {
            Thread.currentThread().interrupt();
        }

        System.out.println("'Hey!' You call out to the group. 'Look!'");
        Bumblebee.DisplayLifeformDescription();
        Bumblebee.displayCasingColor();
        System.out.println("'It's Bumblebee! The Transformer!'");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex)
        {
            Thread.currentThread().interrupt();
        }

        System.out.println("'And a crude Bending robot!'");
        Bender.DisplayLifeformDescription();
        Bender.displayCasingColor();
        System.out.println("'Bite My Shiny Metal Asp!'");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex)
        {
            Thread.currentThread().interrupt();
        }

        C3PO.DisplayLifeformDescription();
        C3PO.displayCasingColor();
        System.out.println("'And who could forget C3PO?' .. 'But where is R2D2??'");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex)
        {
            Thread.currentThread().interrupt();
        }

        System.out.println("You take a peek into a small room off to your left.");
        System.out.println("");
        System.out.println("You recognize the first alien in a jar.");
        Facehugger.DisplayLifeformDescription();
        Facehugger.displaySkinColor();
        System.out.println("'A face hugger!'... 'I thought those were a myth!'");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex)
        {
            Thread.currentThread().interrupt();
        }

        System.out.println("'I think I've heard of this fungus.'");
        Cordyceps.DisplayLifeformDescription();
        Cordyceps.displaySkinColor();
        System.out.println("'Yeah! It's the parasite that controls ants' minds!'");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex)
        {
            Thread.currentThread().interrupt();
        }

        System.out.println("'Is that a human in that cell?! Help me get them out!'");
        Thing.DisplayLifeformDescription();
        Thing.displaySkinColor();
        System.out.println("'Wait a second... Read the warning.'");
        System.out.println("Oh my God... Its torso is opening!! What the Hell is that thing?");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex)
        {
            Thread.currentThread().interrupt();
        }

        System.out.println("'Ahh, another one of David Cohen's creations.'");
        BrainSlug.DisplayLifeformDescription();
        BrainSlug.displaySkinColor();
        System.out.println("Careful! Don't let him onto your head!'");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex)
        {
            Thread.currentThread().interrupt();
        }

        System.out.println("Only one cell remaining in the room...");
        System.out.println("'Another human trapped in a cell?!'");
        TheyLive.DisplayLifeformDescription();
        TheyLive.displaySkinColor();
        System.out.println("'Wait... Flip that switch to change lighting.'");
        System.out.println("'Oh my god it's hideous! Why does it look so much like us?'");
        System.out.println("");

        try{
            TimeUnit.SECONDS.sleep(5);
        } catch(InterruptedException ex)
        {
            Thread.currentThread().interrupt();
        }

        Room Laboratory = new Room ("a large room full of beakers and jars filled with bubbling liquids.");
        Room SpaceLounge = new Room ("a quiet room with comfortable lounge chairs and a self-serve bar.");

        PasswordCracker pwCracker = new PasswordCracker();

        Boolean userRoomMenu = true;

        while (userRoomMenu == true)
        {
            System.out.println();
            System.out.println("      Menu");
            System.out.println("_________________");
            System.out.println();
            System.out.println("1: Go to Laboratory");
            System.out.println("2: Go to Space Lounge");
            System.out.println("3: Go to Hangar");
            System.out.println("4: Exit program");
            System.out.println();
            System.out.print("Please enter your choice in numerical form (1, not One): ");
            System.out.println("");

            Scanner MenuInput = new Scanner(System.in);

            int UserInputRoomChoice = 0;
            UserInputRoomChoice = MenuInput.nextInt();

            System.out.println();
            System.out.println();

            switch (UserInputRoomChoice){
                case 1:
                    Boolean labPasswordChoice = true;

                    while (labPasswordChoice == true) {
                        System.out.println("You have chosen the Laboratory.");
                        System.out.println("This location is password-protected.");
                        System.out.println("        Menu");
                        System.out.println("______________________");
                        System.out.println("1 = Manual Password Entry");
                        System.out.println("2 = Password Cracker");
                        System.out.print("Please enter your choice in numerical form (1, not One)");
                        System.out.println("");

                        Scanner PasswordInput = new Scanner(System.in);

                        int PasswordInputChoice = 0;
                        PasswordInputChoice = PasswordInput.nextInt();

                        if (PasswordInputChoice == 1)
                        {
                            System.out.println("You have chosen to enter password manually.");
                            System.out.println("Please enter password (All lowercase): ");

                            int passwordGuess;

                            for (passwordGuess = 5; passwordGuess > 0; passwordGuess--) {
                                String passwordInput;

                                Scanner getLaboratoryPasswordInput = new Scanner(System.in);
                                passwordInput = getLaboratoryPasswordInput.nextLine();

                                if (passwordInput.equals("lab1"))
                                {
                                    System.out.println("Password correct! You may enter.");
                                    Laboratory.DisplayRoomDescription();
                                    break;
                                }
                                else if (passwordInput.equals("password"))
                                {
                                    System.out.println("Nice try, wise guy!");
                                    System.out.println("You have" + passwordGuess + "try/tries left!");
                                }
                                else
                                {
                                    System.out.println("Invalid password!");
                                    System.out.println("You have" + passwordGuess + "try/tries left!");
                                }
                            }

                            labPasswordChoice = false;
                        }
                        else if (PasswordInputChoice == 2)
                        {
                            System.out.println("You have chosen the password cracker.");
                            pwCracker.RunPasswordCrackerArray();
                            System.out.println("Taking you back to password input selection...");

                            labPasswordChoice = true;
                        }
                        else
                        {
                            System.out.println("Incorrect input! Try again. 1 or 2.");
                            labPasswordChoice = true;
                        }

                    }
                    System.out.println("Taking you back to room selection...");
                    userRoomMenu = true;
                    break;
                case 2:
                    System.out.println("You have chosen the Space Lounge.");
                    SpaceLounge.DisplayRoomDescription();
                    System.out.println("Taking you back to room selection...");
                    userRoomMenu = true;
                    break;
                case 3:
                    System.out.println("You have chosen to re-enter the hangar.");
                    System.out.println("Looking around, you see spaceships and odd lifeforms.");

                    Enterprise.DisplaySpaceShipDescription();
                    Apollo.DisplaySpaceShipDescription();
                    Independence.DisplaySpaceShipDescription();
                    Moonraker.DisplaySpaceShipDescription();
                    MillenniumFalcon.DisplaySpaceShipDescription();
                    Xenomorph.DisplayLifeformDescription();
                    ET.DisplayLifeformDescription();
                    Yoda.DisplayLifeformDescription();
                    Rigellian.DisplayLifeformDescription();
                    Stitch.DisplayLifeformDescription();
                    System.out.println("");
                    System.out.println("Now presenting Robots...");
                    System.out.println("");

                    try{
                        TimeUnit.SECONDS.sleep(5);
                    } catch(InterruptedException ex)
                    {
                        Thread.currentThread().interrupt();
                    }

                    Tripod.DisplayLifeformDescription();
                    Tripod.displayCasingColor();
                    T2000.DisplayLifeformDescription();
                    T2000.displayCasingColor();
                    Bumblebee.DisplayLifeformDescription();
                    Bumblebee.displayCasingColor();
                    Bender.DisplayLifeformDescription();
                    Bender.displayCasingColor();
                    C3PO.DisplayLifeformDescription();
                    C3PO.displayCasingColor();

                    System.out.println("");
                    System.out.println("...And Parasites!");
                    System.out.println("");

                    try{
                        TimeUnit.SECONDS.sleep(5);
                    } catch(InterruptedException ex)
                    {
                        Thread.currentThread().interrupt();
                    }

                    Facehugger.DisplayLifeformDescription();
                    Facehugger.displaySkinColor();
                    Cordyceps.DisplayLifeformDescription();
                    Cordyceps.displaySkinColor();
                    Thing.DisplayLifeformDescription();
                    Thing.displaySkinColor();
                    BrainSlug.DisplayLifeformDescription();
                    BrainSlug.displaySkinColor();
                    TheyLive.DisplayLifeformDescription();
                    TheyLive.displaySkinColor();
                    System.out.println("Taking you back to room selection...");
                    userRoomMenu = true;
                    break;
                case 4:
                    System.out.println("You have chosen to exit.");
                    userRoomMenu = false;
                    return;
                default:
                    System.out.println("You are lost! Invalid entry!");
                    System.out.println("Taking you back to room selection...");
                    userRoomMenu = true;
            }
        }
    }
}