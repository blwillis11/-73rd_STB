class Land_optre_milcrate_reachgreencrate; // Base class declaration

class 73_Radio_Crate: Land_optre_milcrate_reachgreencrate {
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Radio Crate";
    // Other properties...
    vehicleClass = "73_Objects";  // This line assigns your crate to the new category
    editorCategory ="73_Objects"; // This places it under "Empty" in the Eden Editor
    editorSubcategory = "73_Crates";
    


    class ACE_Actions {
        class ACE_MainActions {
            displayName = "Interact";
            distance = 4;
            condition = "true";
            selection = "";

            class t_MA {
                displayName = "Radios";
                condition = "true";

                class shortRange{
                    displayName = "Short Range";
                    condition = "true";
                    class Alpha {
                        displayName = "Alpha Company";
                        condition = "true";

                        class Alpha_1 {
                            displayName = "First Platoon";
                            condition = "true";

                            class Alpha_1_m {
                                displayName = "Alpha 1 Actual";
                                condition = "true";

                                class Alpha_1_HQ {
                                    displayName = "Alpha Actual Lead";
                                    statement = "0 = [0,5,300,1,100] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class AAlpha_1_HQ_JT {
                                    displayName = "Alpha Actual RTO";
                                    statement = "0 = [0,6,400,1,100] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_1_HQ_Member {
                                    displayName = "Alpha Actual Member";
                                    statement = "0 = [0,5,100,2,100] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_1_HQ_Medic {
                                    displayName = "Alpha Actual Medic";
                                    statement = "0 = [0,4,200,2,100] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Alpha_1_1 {
                                displayName = "Alpha 1-1";
                                condition = "true";

                                class Alpha_1_1_HQ {
                                    displayName = "Alpha 1-1 Lead";
                                    statement = "0 = [1,5,300,1,100] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_1_1_Member {
                                    displayName = "Alpha 1-1 Member";
                                    statement = "0 = [1,5,100,2,100] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_1_1_Medic {
                                    displayName = "Alpha 1-1 Medic";
                                    statement = "0 = [1,4,200,2,100] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Alpha_1_2 {
                                displayName = "Alpha 1-2";
                                condition = "true";

                                class Alpha_1_2_TL {
                                    displayName = "Alpha 1-2 Lead";
                                    statement = "0 = [2,5,300,1,100] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_1_2_Member {
                                    displayName = "Alpha 1-2 Member";
                                    statement = "0 = [2,5,100,2,100] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_1_2_Medic {
                                    displayName = "Alpha 1-2 Medic";
                                    statement = "0 = [2,4,200,2,100] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };
                        };

                        class Alpha_2 {
                            displayName = "Second Platoon";
                            condition = "true";

                            class Alpha_2_m {
                                displayName = "Alpha 2 Actual";
                                condition = "true";

                                class Alpha_2_HQ {
                                    displayName = "Alpha 2 Actual Lead";
                                    statement = "0 = [0,5,300,1,200] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_2_HQ_JT {
                                    displayName = "Alpha 2 Actual RTO";
                                    statement = "0 = [0,6,400,1,200] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_2_HQ_Member {
                                    displayName = "Alpha 2 Actual Member";
                                    statement = "0 = [0,5,100,2,200] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_2_HQ_Medic {
                                    displayName = "Alpha 2 Actual Medic";
                                    statement = "0 = [0,4,200,2,200] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Alpha_2_1 {
                                displayName = "Alpha 2-1";
                                condition = "true";

                                class Alpha_2_1_HQ {
                                    displayName = "Alpha 2-1 Lead";
                                    statement = "0 = [1,5,300,1,200] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_2_1_Member {
                                    displayName = "Alpha 2-1 Member";
                                    statement = "0 = [1,5,100,2,200] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_2_1_Medic {
                                    displayName = "Alpha 2-1 Medic";
                                    statement = "0 = [1,4,200,2,200] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Alpha_2_2 {
                                displayName = "Alpha 2-2";
                                condition = "true";

                                class Alpha_2_2_TL {
                                    displayName = "Alpha 2-2 Lead";
                                    statement = "0 = [2,5,300,1,200] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_2_2_Member {
                                    displayName = "Alpha 2-2 Member";
                                    statement = "0 = [2,5,100,2,200] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_2_2_Medic {
                                    displayName = "Alpha 2-2 Medic";
                                    statement = "0 = [2,4,200,2,200] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };
                        };
                        class Alpha_3 {
                            displayName = "Third Platoon";
                            condition = "true";

                            class Alpha_3_m {
                                displayName = "Alpha 3 Actual";
                                condition = "true";

                                class Alpha_3_HQ {
                                    displayName = "Alpha 3 Actual Lead";
                                    statement = "0 = [0,5,300,1,300] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_3_HQ_JT {
                                    displayName = "Alpha 3 Actual RTO";
                                    statement = "0 = [0,6,400,1,300] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_3_HQ_Member {
                                    displayName = "Alpha 3 Actual Member";
                                    statement = "0 = [0,5,100,2,300] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_3_HQ_Medic {
                                    displayName = "Alpha 3 Actual Medic";
                                    statement = "0 = [0,4,200,2,300] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Alpha_3_1 {
                                displayName = "Alpha 3-1";
                                condition = "true";

                                class Alpha_3_1_HQ {
                                    displayName = "Alpha 3-1 Lead";
                                    statement = "0 = [1,5,300,1,300] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_3_1_Member {
                                    displayName = "Alpha 3-1 Member";
                                    statement = "0 = [1,5,100,2,300] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_3_1_Medic {
                                    displayName = "Alpha 3-1 Medic";
                                    statement = "0 = [1,4,200,2,300] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Alpha_3_2 {
                                displayName = "Alpha 3-2";
                                condition = "true";

                                class Alpha_3_2_TL {
                                    displayName = "Alpha 3-2 Lead";
                                    statement = "0 = [2,5,300,1,300] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_3_2_Member {
                                    displayName = "Alpha 3-2 Member";
                                    statement = "0 = [2,5,100,2,300] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Alpha_3_2_Medic {
                                    displayName = "Alpha 3-2 Medic";
                                    statement = "0 = [2,4,200,2,300] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };
                        };

                    };

                    class Bravo {
                        displayName = "Bravo Company";
                        condition = "true";

                        class Bravo_1 {
                            displayName = "First Platoon";
                            condition = "true";

                            class Bravo_1_m {
                                displayName = "Bravo 1 Actual";
                                condition = "true";

                                class Bravo_1_HQ {
                                    displayName = "Bravo Actual Lead";
                                    statement = "0 = [0,5,300,1,600] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_1_HQ_JT {
                                    displayName = "Bravo Actual RTO";
                                    statement = "0 = [0,6,400,1,600] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_1_HQ_Member {
                                    displayName = "Bravo Actual Member";
                                    statement = "0 = [0,5,100,2,600] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_1_HQ_Medic {
                                    displayName = "Bravo Actual Medic";
                                    statement = "0 = [0,4,200,2,600] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Bravo_1_1 {
                                displayName = "Bravo 1-1";
                                condition = "true";

                                class Bravo_1_1_HQ {
                                    displayName = "Bravo 1-1 Lead";
                                    statement = "0 = [1,5,300,1,600] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_1_1_Member {
                                    displayName = "Bravo 1-1 Member";
                                    statement = "0 = [1,5,100,2,600] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_1_1_Medic {
                                    displayName = "Bravo 1-1 Medic";
                                    statement = "0 = [1,4,200,2,600] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Bravo_1_2 {
                                displayName = "Bravo 1-2";
                                condition = "true";

                                class Bravo_1_2_TL {
                                    displayName = "Bravo 1-2 Lead";
                                    statement = "0 = [2,5,300,1,600] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_1_2_Member {
                                    displayName = "Bravo 1-2 Member";
                                    statement = "0 = [2,5,100,2,600] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_1_2_Medic {
                                    displayName = "Bravo 1-2 Medic";
                                    statement = "0 = [2,4,200,2,600] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };
                        };

                        class Bravo_2 {
                            displayName = "Second Platoon";
                            condition = "true";

                            class Bravo_2_m {
                                displayName = "Bravo 2 Actual";
                                condition = "true";

                                class Bravo_2_HQ {
                                    displayName = "Bravo 2 Actual Lead";
                                    statement = "0 = [0,5,300,1,700] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_2_HQ_JT {
                                    displayName = "Bravo 2 Actual RTO";
                                    statement = "0 = [0,6,400,1,700] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_2_HQ_Member {
                                    displayName = "Bravo 2 Actual Member";
                                    statement = "0 = [0,5,100,2,700] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_2_HQ_Medic {
                                    displayName = "Bravo 2 Actual Medic";
                                    statement = "0 = [0,4,200,2,700] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Bravo_2_1 {
                                displayName = "Bravo 2-1";
                                condition = "true";

                                class Bravo_2_1_HQ {
                                    displayName = "Bravo 2-1 Lead";
                                    statement = "0 = [1,5,300,1,700] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_2_1_Member {
                                    displayName = "Bravo 2-1 Member";
                                    statement = "0 = [1,5,100,2,700] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_2_1_Medic {
                                    displayName = "Bravo 2-1 Medic";
                                    statement = "0 = [1,4,200,2,700] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Bravo_2_2 {
                                displayName = "Bravo 2-2";
                                condition = "true";

                                class Bravo_2_2_TL {
                                    displayName = "Bravo 2-2 Lead";
                                    statement = "0 = [2,5,300,1,700] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_2_2_Member {
                                    displayName = "Bravo 2-2 Member";
                                    statement = "0 = [2,5,100,2,700] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_2_2_Medic {
                                    displayName = "Bravo 2-2 Medic";
                                    statement = "0 = [2,4,200,2,700] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };
                        };
                        class Bravo_3 {
                            displayName = "Third Platoon";
                            condition = "true";

                            class Bravo_3_m {
                                displayName = "Bravo 3 Actual";
                                condition = "true";

                                class Bravo_3_HQ {
                                    displayName = "Bravo 3 Actual Lead";
                                    statement = "0 = [0,5,300,1,800] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_3_HQ_JT {
                                    displayName = "Bravo 3 Actual RTO";
                                    statement = "0 = [0,6,400,1,800] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_3_HQ_Member {
                                    displayName = "Bravo 3 Actual Member";
                                    statement = "0 = [0,5,100,2,800] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_3_HQ_Medic {
                                    displayName = "Bravo 3 Actual Medic";
                                    statement = "0 = [0,4,200,2,800] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Bravo_3_1 {
                                displayName = "Bravo 2-1";
                                condition = "true";

                                class Bravo_3_1_HQ {
                                    displayName = "Bravo 3-1 Lead";
                                    statement = "0 = [1,5,300,1,800] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_3_1_Member {
                                    displayName = "Bravo 3-1 Member";
                                    statement = "0 = [1,5,100,2,800] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_3_1_Medic {
                                    displayName = "Bravo 3-1 Medic";
                                    statement = "0 = [1,4,200,2,800] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };

                            class Bravo_3_2 {
                                displayName = "Bravo 2-2";
                                condition = "true";

                                class Bravo_3_2_TL {
                                    displayName = "Bravo 3-2 Lead";
                                    statement = "0 = [2,5,300,1,800] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_3_2_Member {
                                    displayName = "Bravo 3-2 Member";
                                    statement = "0 = [2,5,100,2,800] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                                class Bravo_3_2_Medic {
                                    displayName = "Bravo 3-2 Medic";
                                    statement = "0 = [2,4,200,2,800] spawn STB73_fnc_setRadio73STB;";
                                    condition = "true";
                                };
                            };
                        };
                    };

                    class Chair_Force {
                        displayName = "Air Force";
                        condition = "true";

                        class Chair_Force_1 {
                            displayName = "Air Squad 1";
                            statement = "0 = [0,0,400,1,400] spawn STB73_fnc_setRadio73STB;";
                            condition = "true";
                        };
                        class Chair_Force_2 {
                            displayName = "Air Squad 2";
                            statement = "0 = [1,1,400,1,400] spawn STB73_fnc_setRadio73STB;";
                            condition = "true";
                        };
                    };
                    class Arm_frc {
                        displayName = "Mech Force";
                        condition = "true";

                        class Arm_frc_1 {
                            displayName = "Mech Force 1";
                            statement = "0 = [0,0,400,1,500] spawn STB73_fnc_setRadio73STB;";
                            condition = "true";
                        };
                        class Arm_frc_2 {
                            displayName = "Mech Force 2";
                            statement = "0 = [1,1,400,1,500] spawn STB73_fnc_setRadio73STB;";
                            condition = "true";
                        };
                    };

                };

                class Long_Range {
                    displayName = "Long Range";
                    condition = "true";

                    class Long_Range_Warning
                    {
                        displayName = "LR must be equipped";
                        condition = "true";
                    
                        class Long_Range_1 {
                            displayName = "JTAC LR";
                            statement = "0 = [100] spawn STB73_fnc_setRadioLR73STB;";
                            condition = "true";
                        };
                        class Long_Range_2 {
                            displayName = "Platoon Leader LR";
                            statement = "0 = [200] spawn STB73_fnc_setRadioLR73STB;";
                            condition = "true";
                        };
                        class Long_Range_3 {
                            displayName = "Flight Leader LR";
                            statement = "0 = [300] spawn STB73_fnc_setRadioLR73STB;";
                            condition = "true";
                        };
                        class Long_Range_4 {
                            displayName = "Armor LR";
                            statement = "0 = [400] spawn STB73_fnc_setRadioLR73STB;";
                            condition = "true";
                        };
                        class Long_Range_5 {
                            displayName = "Regular Pilot LR";
                            statement = "0 = [500] spawn STB73_fnc_setRadioLR73STB;";
                            condition = "true";
                        };
                    };
                };
            };
            class Add_Support {
                displayName = "Support Modules";
                condition = "true";

                class Arm_frc_1 {
                    displayName = "Add Dot Menu Option";
                    statement = "0 = [player] spawn STB73_fnc_addMapDotMenu73STB";
                    condition = "true";
                };
                class Arm_frc_2 {
                    displayName = "Add Support Module";
                    statement = "0 = [player] spawn STB73_fnc_addFireSupportMenu73STB";
                    condition = "true";
                };
            };
        };
    };
};
