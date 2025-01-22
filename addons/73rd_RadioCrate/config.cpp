class CfgPatches {
    class 73_Objects {
        units[] = {"73rd_Radio_Crate"};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {
            "ace_interact_menu",
            "optre_core",
            "tfar_core",
            "Reeveli_TFAR_scribbles"
        };
    };
};

class CfgEditorCategories 
{
    class 73rd_Objects
    {
        displayName = "[73rd] Objects";
    };
};

class CfgEditorSubCategories
{
    class 73rd_Crates
    {
        displayName = "Crates";
        vehicleClass = "73rd_Objects";
    };
};

class CfgVehicles {
    class Land_optre_milcrate_reachgreencrate; // Base class declaration

    class 73rd_Radio_Crate: Land_optre_milcrate_reachgreencrate {
        scope = 2;
        scopeCurator = 2;
        displayName = "[73rd] Radio Crate";
        // Other properties...
         vehicleClass = "73rd_Objects";  // This line assigns your crate to the new category
            editorCategory ="73rd_Objects"; // This places it under "Empty" in the Eden Editor
            editorSubcategory = "73rd_Crates";


        class ACE_Actions {
            class ACE_MainActions {
                displayName = "Interact";
                distance = 4;
                condition = "true";
                selection = "";

                class t_MA {
                    displayName = "Set Radio";
                    condition = "true";
                    
                    // Alpha Company
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
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '120.1'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '120.2'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '120.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '220.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '120'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '35'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '70'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 1 Act','Alpha 1-1','Alpha 1-2','Alpha 1 OF','Plt Med Net','Plt 1 Net','Air Net','Cmpy Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class AAlpha_1_HQ_JT {
                                    displayName = "Alpha Actual RTO";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '120.1'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '120.2'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '120.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '220.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '120'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '35'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '70'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 1 Act','Alpha 1-1','Alpha 1-2','Alpha 1 OF','Plt Med Net','Plt 1 Net','Air Net','Cmpy Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_1_HQ_Member {
                                    displayName = "Alpha Actual Member";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '120.1'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '120.2'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '120.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '399.5'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '379.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 1 Act','Alpha 1-1','Alpha 1-2','Alpha 1 OF']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_1_HQ_Medic {
                                    displayName = "Alpha Actual Medic";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '120.1'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '120.2'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '120.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '220.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '389.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 1 Act','Alpha 1-1','Alpha 1-2','Alpha 1 OF','Plt Med Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                            };

                            class Alpha_1_1 {
                                displayName = "Alpha 1-1";
                                condition = "true";

                                class Alpha_1_1_HQ {
                                    displayName = "Alpha 1-1 Lead";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '120.2'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '120.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '120.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '220.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '120'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '35'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '70'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 1-1','Alpha 1 Act','Alpha 1-2','Alpha 1 OF','Plt Med Net','Plt 1 Net','Air Net','Cmpy Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_1_1_Member {
                                    displayName = "Alpha 1-1 Member";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '120.2'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '120.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '120.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '399.5'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '379.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 1-1','Alpha 1 Act','Alpha 1-2','Alpha 1 OF']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_1_1_Medic {
                                    displayName = "Alpha 1-1 Medic";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '120.2'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '120.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '120.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '220.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '389.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 1-1','Alpha 1 Act','Alpha 1-2','Alpha 1 OF','Plt Med Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                            };

                            class Alpha_1_2 {
                                displayName = "Alpha 1-2";
                                condition = "true";

                                class Alpha_1_2_TL {
                                    displayName = "Alpha 1-2 Lead";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '120.3'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '120.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120.2'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '120.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '220.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '120'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '35'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '70'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 1-2','Alpha 1 Act','Alpha 1-1','Alpha 1 OF','Plt Med Net','Plt 1 Net','Air Net','Cmpy Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_1_2_Member {
                                    displayName = "Alpha 1-2 Member";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '120.3'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '120.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120.2'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '120.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '399.5'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '379.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 1-2','Alpha 1 Act','Alpha 1-1','Alpha 1 OF']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_1_2_Medic {
                                    displayName = "Alpha 1-2 Medic";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '120.3'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '120.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120.2'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '120.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '220.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '389.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 1-2','Alpha 1 Act','Alpha 1-1','Alpha 1 OF','Plt Med Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
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
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '121.1'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '121.2'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '121.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '221.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '121'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '35'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '70'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 2 Act','Alpha 2-1','Alpha 2-2','Alpha 2 OF','Plt Med Net','Plt 2 Net','Air Net','Cmpy Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_2_HQ_JT {
                                    displayName = "Alpha 2 Actual RTO";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '121.1'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '121.2'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '121.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '221.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '121'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '35'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '70'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 2 Act','Alpha 2-1','Alpha 2-2','Alpha 2 OF','Plt Med Net','Plt 2 Net','Air Net','Cmpy Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_2_HQ_Member {
                                    displayName = "Alpha 2 Actual Member";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '121.1'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '121.2'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '121.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '399.5'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '379.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 2 Act','Alpha 2-1','Alpha 2-2','Alpha 2 OF']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_2_HQ_Medic {
                                    displayName = "Alpha 2 Actual Medic";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '121.1'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '121.2'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '121.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '221.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '389.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 2 Act','Alpha 2-1','Alpha 2-2','Alpha 2 OF','Plt Med Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                            };

                            class Alpha_2_1 {
                                displayName = "Alpha 2-1";
                                condition = "true";

                                class Alpha_2_1_HQ {
                                    displayName = "Alpha 2-1 Lead";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '121.2'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '121.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '121.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '221.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '121'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '35'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '70'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 2-1','Alpha 2 Act','Alpha 2-2','Alpha 2 OF','Plt Med Net','Plt 2 Net','Air Net','Cmpy Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_2_1_Member {
                                    displayName = "Alpha 2-1 Member";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '121.2'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '121.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '121.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '399.5'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '379.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 2-1','Alpha 2 Act','Alpha 2-2','Alpha 2 OF']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                }; class Alpha_2_1_Medic {
                                    displayName = "Alpha 2-1 Medic";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '121.2'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '121.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '121.3'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '221.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '389.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 2-1','Alpha 2 Act','Alpha 2-2','Alpha 2 OF','Plt Med Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                            };

                            class Alpha_2_2 {
                                displayName = "Alpha 2-2";
                                condition = "true";

                                class Alpha_2_2_TL {
                                    displayName = "Alpha 2-2 Lead";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '121.3'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '121.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '121.2'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '221.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '121'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '35'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '70'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 2-2','Alpha 2 Act','Alpha 2-1','Alpha 2 OF','Plt Med Net','Plt 2 Net','Air Net','Cmpy Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_2_2_Member {
                                    displayName = "Alpha 2-2 Member";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '121.3'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '121.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '121.2'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '399.5'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '379.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 2-2','Alpha 2 Act','Alpha 2-1','Alpha 2 OF']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                                class Alpha_2_2_Medic {
                                    displayName = "Alpha 2-2 Medic";
                                    statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '121.3'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '121.1'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '121.2'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121.4'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '221.1'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '389.5'] call TFAR_fnc_setChannelFrequency; [true, ['Alpha 2-2','Alpha 2 Act','Alpha 2-1','Alpha 2 OF','Plt Med Net']] call Rev_TFAR_fnc_setDefaultScribbles;";
                                    condition = "true";
                                };
                            };
                        };
                    };

                    // Air Force
                    class Chair_Force {
                        displayName = "Air Force";
                        condition = "true";

                        class Chair_Force_1 {
                            displayName = "Air Squad 1";
                            statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '260'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '230'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '122'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '250'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '251'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '252'] call TFAR_fnc_setChannelFrequency; [true, ['Air Net 1','Air Net 2','Alpha 1','Alpha 2','Alpha 3','Bravo 1','Bravo 2','Bravo 3']] call Rev_TFAR_fnc_setDefaultScribbles;";
                            condition = "true";
                        };
                        class Chair_Force_2 {
                            displayName = "Air Squad 2";
                            statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '260'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '230'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '122'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '250'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '251'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '252'] call TFAR_fnc_setChannelFrequency; [true, ['Air Net 1','Air Net 2','Alpha 1','Alpha 2','Alpha 3','Bravo 1','Bravo 2','Bravo 3']] call Rev_TFAR_fnc_setDefaultScribbles;";
                            condition = "true";
                        };
                    };

                    // Mech Force
                    class Arm_frc {
                        displayName = "Mech Force";
                        condition = "true";

                        class Arm_frc_1 {
                            displayName = "Mech Force 1";
                            statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '360'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '330'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '122'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '250'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '251'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '252'] call TFAR_fnc_setChannelFrequency; [true, ['Mech Net 1','Mech Net 2','Alpha 1','Alpha 2','Alpha 3','Bravo 1','Bravo 2','Bravo 3']] call Rev_TFAR_fnc_setDefaultScribbles;";
                            condition = "true";
                        };
                        class Arm_frc_2 {
                            displayName = "Mech Force 2";
                            statement = "private _radio = call TFAR_fnc_activeSwRadio; [_radio, 1, '360'] call TFAR_fnc_setChannelFrequency; [_radio, 2, '330'] call TFAR_fnc_setChannelFrequency; [_radio, 3, '120'] call TFAR_fnc_setChannelFrequency; [_radio, 4, '121'] call TFAR_fnc_setChannelFrequency; [_radio, 5, '122'] call TFAR_fnc_setChannelFrequency; [_radio, 6, '250'] call TFAR_fnc_setChannelFrequency; [_radio, 7, '251'] call TFAR_fnc_setChannelFrequency; [_radio, 8, '252'] call TFAR_fnc_setChannelFrequency; [true, ['Mech Net 1','Mech Net 2','Alpha 1','Alpha 2','Alpha 3','Bravo 1','Bravo 2','Bravo 3']] call Rev_TFAR_fnc_setDefaultScribbles;";
                            condition = "true";
                        };
                    };
                };
            };
        };
    };
};