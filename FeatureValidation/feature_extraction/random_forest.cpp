#include "random_forest.h"


#include <vector>
using namespace std;

int random_forest_predict(float diff_median, float systolic_area, float ss_median, float rr_std) {
    int votes[50] = {0};
// Decision rules for tree 0
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.003857266972772777) {
            votes[0] = 2;
        } else {
            if (rr_std <= 4.633125424385071) {
                votes[0] = 2;
            } else {
                if (systolic_area <= 21.25664710998535) {
                    if (systolic_area <= 20.387378692626953) {
                        votes[0] = 0;
                    } else {
                        votes[0] = 0;
                    }
                } else {
                    votes[0] = 0;
                }
            }
        }
    } else {
        if (systolic_area <= 11.173145771026611) {
            if (rr_std <= 10.748459815979004) {
                if (systolic_area <= -54.38247871398926) {
                    if (systolic_area <= -91.57369232177734) {
                        votes[0] = 1;
                    } else {
                        if (diff_median <= 23.381596565246582) {
                            votes[0] = 1;
                        } else {
                            votes[0] = 3;
                        }
                    }
                } else {
                    if (ss_median <= 47.5) {
                        if (rr_std <= 7.856485366821289) {
                            if (systolic_area <= 0.8902555704116821) {
                                if (systolic_area <= -10.577096939086914) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 5;
                                }
                            } else {
                                votes[0] = 3;
                            }
                        } else {
                            if (rr_std <= 9.055115222930908) {
                                votes[0] = 3;
                            } else {
                                votes[0] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 8.932136535644531) {
                            if (rr_std <= 6.50924277305603) {
                                if (rr_std <= 4.943553686141968) {
                                    if (rr_std <= 3.072139024734497) {
                                        votes[0] = 3;
                                    } else {
                                        votes[0] = 1;
                                    }
                                } else {
                                    votes[0] = 3;
                                }
                            } else {
                                if (rr_std <= 8.004197120666504) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 3;
                                }
                            }
                        } else {
                            if (ss_median <= 50.5) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 3;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 17.488332748413086) {
                    if (systolic_area <= -44.02517509460449) {
                        if (systolic_area <= -52.96514320373535) {
                            votes[0] = 1;
                        } else {
                            votes[0] = 1;
                        }
                    } else {
                        if (diff_median <= 21.807252883911133) {
                            if (diff_median <= 14.945480346679688) {
                                if (diff_median <= 8.919450283050537) {
                                    if (rr_std <= 12.462348937988281) {
                                        votes[0] = 1;
                                    } else {
                                        if (ss_median <= 50.5) {
                                            votes[0] = 4;
                                        } else {
                                            votes[0] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 12.737593173980713) {
                                        votes[0] = 5;
                                    } else {
                                        votes[0] = 5;
                                    }
                                }
                            } else {
                                votes[0] = 3;
                            }
                        } else {
                            if (diff_median <= 32.71002006530762) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 1;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 2.437201142311096) {
                        votes[0] = 4;
                    } else {
                        if (diff_median <= 25.685441970825195) {
                            if (ss_median <= 44.5) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 1;
                            }
                        } else {
                            votes[0] = 1;
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 66.5) {
                if (rr_std <= 9.306947708129883) {
                    if (diff_median <= 8.413626670837402) {
                        if (rr_std <= 7.684685468673706) {
                            if (systolic_area <= 20.119470596313477) {
                                votes[0] = 3;
                            } else {
                                if (systolic_area <= 27.633392333984375) {
                                    votes[0] = 2;
                                } else {
                                    if (ss_median <= 47.25) {
                                        votes[0] = 4;
                                    } else {
                                        votes[0] = 3;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 4.6485655307769775) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 5;
                            }
                        }
                    } else {
                        if (ss_median <= 46.5) {
                            votes[0] = 1;
                        } else {
                            if (diff_median <= 27.348722457885742) {
                                if (diff_median <= 13.5247483253479) {
                                    votes[0] = 3;
                                } else {
                                    votes[0] = 3;
                                }
                            } else {
                                votes[0] = 3;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 22.183086395263672) {
                        if (diff_median <= 9.552072525024414) {
                            if (ss_median <= 52.25) {
                                if (systolic_area <= 18.637752532958984) {
                                    if (rr_std <= 19.02913188934326) {
                                        votes[0] = 4;
                                    } else {
                                        votes[0] = 1;
                                    }
                                } else {
                                    votes[0] = 2;
                                }
                            } else {
                                if (diff_median <= 4.241669774055481) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 14.706089973449707) {
                                if (diff_median <= 33.51682758331299) {
                                    votes[0] = 4;
                                } else {
                                    votes[0] = 3;
                                }
                            } else {
                                if (rr_std <= 19.57943058013916) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 2;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 18.172350883483887) {
                            if (rr_std <= 17.441914558410645) {
                                if (diff_median <= 2.8468077182769775) {
                                    votes[0] = 4;
                                } else {
                                    if (systolic_area <= 25.764131546020508) {
                                        votes[0] = 4;
                                    } else {
                                        if (rr_std <= 10.461669921875) {
                                            votes[0] = 4;
                                        } else {
                                            votes[0] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 51.75) {
                                    if (ss_median <= 46.75) {
                                        if (systolic_area <= 28.26747703552246) {
                                            votes[0] = 4;
                                        } else {
                                            votes[0] = 4;
                                        }
                                    } else {
                                        if (diff_median <= 3.4784988164901733) {
                                            votes[0] = 5;
                                        } else {
                                            votes[0] = 4;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 4.243029832839966) {
                                        votes[0] = 4;
                                    } else {
                                        votes[0] = 1;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 17.855530738830566) {
                                if (rr_std <= 11.493761539459229) {
                                    votes[0] = 3;
                                } else {
                                    votes[0] = 3;
                                }
                            } else {
                                votes[0] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 10.45276403427124) {
                    if (diff_median <= 22.185340881347656) {
                        if (systolic_area <= 21.16811180114746) {
                            if (rr_std <= 4.052065372467041) {
                                if (ss_median <= 71.0) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 2;
                                }
                            } else {
                                if (diff_median <= 5.2702412605285645) {
                                    votes[0] = 2;
                                } else {
                                    if (rr_std <= 7.418870210647583) {
                                        votes[0] = 2;
                                    } else {
                                        votes[0] = 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 0.6291683614253998) {
                                votes[0] = 2;
                            } else {
                                if (rr_std <= 7.139284610748291) {
                                    votes[0] = 2;
                                } else {
                                    if (rr_std <= 7.247061729431152) {
                                        votes[0] = 2;
                                    } else {
                                        votes[0] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 5.600613117218018) {
                            votes[0] = 3;
                        } else {
                            votes[0] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 18.216461181640625) {
                        votes[0] = 3;
                    } else {
                        votes[0] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 1
    if (diff_median <= 0.06452756375074387) {
        if (systolic_area <= 20.366151809692383) {
            if (rr_std <= 4.533208608627319) {
                votes[1] = 0;
            } else {
                if (systolic_area <= 19.79263687133789) {
                    votes[1] = 0;
                } else {
                    votes[1] = 0;
                }
            }
        } else {
            if (diff_median <= 0.005839566234499216) {
                if (ss_median <= 84.5) {
                    votes[1] = 2;
                } else {
                    votes[1] = 2;
                }
            } else {
                votes[1] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 12.792227268218994) {
                if (rr_std <= 21.466031074523926) {
                    if (systolic_area <= -31.27735137939453) {
                        if (systolic_area <= -64.66521644592285) {
                            if (ss_median <= 43.75) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 1;
                            }
                        } else {
                            if (diff_median <= 5.53985333442688) {
                                votes[1] = 3;
                            } else {
                                if (ss_median <= 56.5) {
                                    if (diff_median <= 14.692852020263672) {
                                        if (systolic_area <= -50.14225959777832) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 50.5) {
                                            votes[1] = 1;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    }
                                } else {
                                    votes[1] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 20.1695613861084) {
                            if (diff_median <= 10.098436832427979) {
                                if (systolic_area <= -0.19486644864082336) {
                                    if (systolic_area <= -10.248213291168213) {
                                        if (systolic_area <= -18.599841117858887) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 3;
                                        }
                                    } else {
                                        votes[1] = 5;
                                    }
                                } else {
                                    if (rr_std <= 11.61336612701416) {
                                        if (ss_median <= 48.75) {
                                            votes[1] = 4;
                                        } else {
                                            votes[1] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 6.898256063461304) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 12.993562698364258) {
                                    if (systolic_area <= -7.100354909896851) {
                                        if (rr_std <= 8.524975299835205) {
                                            votes[1] = 1;
                                        } else {
                                            votes[1] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 10.515695095062256) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 52.5) {
                                        if (ss_median <= 45.25) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 1;
                                        }
                                    } else {
                                        votes[1] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[1] = 2;
                        }
                    }
                } else {
                    if (diff_median <= 4.192545175552368) {
                        votes[1] = 1;
                    } else {
                        if (ss_median <= 57.0) {
                            votes[1] = 1;
                        } else {
                            votes[1] = 1;
                        }
                    }
                }
            } else {
                if (systolic_area <= 152.45352172851562) {
                    if (diff_median <= 21.07227325439453) {
                        if (rr_std <= 9.175432205200195) {
                            if (diff_median <= 12.863130569458008) {
                                if (systolic_area <= 32.773738861083984) {
                                    if (systolic_area <= 20.76215648651123) {
                                        votes[1] = 5;
                                    } else {
                                        if (diff_median <= 4.716692209243774) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 2;
                                        }
                                    }
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                if (rr_std <= 6.417435169219971) {
                                    votes[1] = 3;
                                } else {
                                    votes[1] = 3;
                                }
                            }
                        } else {
                            if (systolic_area <= 22.32546901702881) {
                                if (diff_median <= 9.552072525024414) {
                                    if (ss_median <= 52.5) {
                                        if (rr_std <= 19.88898754119873) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 4.297407388687134) {
                                            votes[1] = 2;
                                        } else {
                                            votes[1] = 2;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 57.75) {
                                        votes[1] = 4;
                                    } else {
                                        votes[1] = 5;
                                    }
                                }
                            } else {
                                if (diff_median <= 2.584200382232666) {
                                    if (diff_median <= 0.9478302001953125) {
                                        votes[1] = 5;
                                    } else {
                                        votes[1] = 5;
                                    }
                                } else {
                                    if (systolic_area <= 41.45831108093262) {
                                        if (systolic_area <= 25.634554862976074) {
                                            votes[1] = 4;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    } else {
                                        votes[1] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 50.5) {
                            if (systolic_area <= 26.318053245544434) {
                                if (rr_std <= 8.664087057113647) {
                                    votes[1] = 5;
                                } else {
                                    if (ss_median <= 45.25) {
                                        votes[1] = 5;
                                    } else {
                                        votes[1] = 3;
                                    }
                                }
                            } else {
                                votes[1] = 5;
                            }
                        } else {
                            if (rr_std <= 11.43853235244751) {
                                if (diff_median <= 33.00468444824219) {
                                    votes[1] = 3;
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                votes[1] = 5;
                            }
                        }
                    }
                } else {
                    votes[1] = 4;
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (diff_median <= 26.720373153686523) {
                    if (ss_median <= 73.5) {
                        if (ss_median <= 72.25) {
                            if (systolic_area <= 25.54444694519043) {
                                if (rr_std <= 0.8468153178691864) {
                                    if (diff_median <= 5.554967403411865) {
                                        votes[1] = 2;
                                    } else {
                                        votes[1] = 2;
                                    }
                                } else {
                                    if (systolic_area <= 20.36599063873291) {
                                        if (rr_std <= 5.940504312515259) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 2;
                                        }
                                    } else {
                                        votes[1] = 5;
                                    }
                                }
                            } else {
                                votes[1] = 2;
                            }
                        } else {
                            votes[1] = 2;
                        }
                    } else {
                        votes[1] = 2;
                    }
                } else {
                    votes[1] = 5;
                }
            } else {
                if (systolic_area <= 17.036200046539307) {
                    if (diff_median <= 18.13949489593506) {
                        votes[1] = 3;
                    } else {
                        votes[1] = 3;
                    }
                } else {
                    if (rr_std <= 19.268754959106445) {
                        votes[1] = 5;
                    } else {
                        votes[1] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 2
    if (diff_median <= 0.06383661925792694) {
        if (diff_median <= 0.003857266972772777) {
            if (systolic_area <= 21.450921058654785) {
                votes[2] = 2;
            } else {
                votes[2] = 2;
            }
        } else {
            if (rr_std <= 3.6463444232940674) {
                votes[2] = 0;
            } else {
                if (rr_std <= 100.07865905761719) {
                    votes[2] = 0;
                } else {
                    votes[2] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.217223167419434) {
                if (rr_std <= 10.636523723602295) {
                    if (systolic_area <= -24.28780174255371) {
                        if (rr_std <= 7.024388313293457) {
                            if (systolic_area <= -69.95687866210938) {
                                votes[2] = 1;
                            } else {
                                votes[2] = 1;
                            }
                        } else {
                            if (diff_median <= 23.874228477478027) {
                                if (rr_std <= 9.538952350616455) {
                                    votes[2] = 3;
                                } else {
                                    votes[2] = 1;
                                }
                            } else {
                                votes[2] = 1;
                            }
                        }
                    } else {
                        if (diff_median <= 9.395570755004883) {
                            if (systolic_area <= -0.19486644864082336) {
                                if (systolic_area <= -11.206169128417969) {
                                    votes[2] = 5;
                                } else {
                                    votes[2] = 5;
                                }
                            } else {
                                if (ss_median <= 49.75) {
                                    votes[2] = 4;
                                } else {
                                    if (systolic_area <= 17.802071571350098) {
                                        votes[2] = 3;
                                    } else {
                                        votes[2] = 5;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 45.5) {
                                if (diff_median <= 15.680401802062988) {
                                    votes[2] = 3;
                                } else {
                                    votes[2] = 5;
                                }
                            } else {
                                if (rr_std <= 4.475710868835449) {
                                    if (diff_median <= 20.010544776916504) {
                                        votes[2] = 3;
                                    } else {
                                        votes[2] = 5;
                                    }
                                } else {
                                    if (ss_median <= 56.5) {
                                        if (systolic_area <= -9.249878406524658) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    } else {
                                        votes[2] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 10.886988639831543) {
                        if (diff_median <= 2.2280458211898804) {
                            votes[2] = 4;
                        } else {
                            if (rr_std <= 17.49462604522705) {
                                if (systolic_area <= -44.02517509460449) {
                                    if (ss_median <= 44.25) {
                                        votes[2] = 1;
                                    } else {
                                        votes[2] = 1;
                                    }
                                } else {
                                    if (ss_median <= 58.5) {
                                        if (diff_median <= 37.07236671447754) {
                                            votes[2] = 1;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    } else {
                                        votes[2] = 3;
                                    }
                                }
                            } else {
                                if (systolic_area <= 10.25899362564087) {
                                    votes[2] = 1;
                                } else {
                                    votes[2] = 1;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 52.25) {
                            if (diff_median <= 7.179832935333252) {
                                if (rr_std <= 18.392136573791504) {
                                    votes[2] = 2;
                                } else {
                                    votes[2] = 1;
                                }
                            } else {
                                if (diff_median <= 8.676390647888184) {
                                    votes[2] = 5;
                                } else {
                                    if (diff_median <= 21.27649688720703) {
                                        votes[2] = 4;
                                    } else {
                                        if (diff_median <= 38.21768760681152) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 13.23010778427124) {
                                if (rr_std <= 12.148530960083008) {
                                    votes[2] = 4;
                                } else {
                                    votes[2] = 5;
                                }
                            } else {
                                if (diff_median <= 11.202391147613525) {
                                    if (diff_median <= 4.138580679893494) {
                                        votes[2] = 2;
                                    } else {
                                        votes[2] = 2;
                                    }
                                } else {
                                    votes[2] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 17.516669273376465) {
                    if (rr_std <= 9.480578899383545) {
                        if (ss_median <= 48.5) {
                            if (ss_median <= 46.75) {
                                votes[2] = 4;
                            } else {
                                votes[2] = 5;
                            }
                        } else {
                            if (systolic_area <= 48.1158447265625) {
                                votes[2] = 3;
                            } else {
                                votes[2] = 1;
                            }
                        }
                    } else {
                        if (diff_median <= 2.3521947860717773) {
                            if (rr_std <= 22.178415298461914) {
                                votes[2] = 5;
                            } else {
                                votes[2] = 4;
                            }
                        } else {
                            if (diff_median <= 15.771183490753174) {
                                if (rr_std <= 19.147869110107422) {
                                    if (rr_std <= 10.399651527404785) {
                                        if (systolic_area <= 34.11296463012695) {
                                            votes[2] = 4;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    } else {
                                        votes[2] = 4;
                                    }
                                } else {
                                    if (rr_std <= 21.888712882995605) {
                                        votes[2] = 1;
                                    } else {
                                        if (rr_std <= 34.79751396179199) {
                                            votes[2] = 4;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[2] = 4;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 27.262463569641113) {
                        if (diff_median <= 20.717068672180176) {
                            votes[2] = 3;
                        } else {
                            votes[2] = 3;
                        }
                    } else {
                        if (diff_median <= 38.51356887817383) {
                            votes[2] = 5;
                        } else {
                            votes[2] = 3;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 11.052355289459229) {
                    votes[2] = 3;
                } else {
                    if (ss_median <= 73.5) {
                        if (systolic_area <= 18.27181053161621) {
                            if (rr_std <= 6.443719387054443) {
                                votes[2] = 5;
                            } else {
                                votes[2] = 2;
                            }
                        } else {
                            if (diff_median <= 4.148450970649719) {
                                votes[2] = 2;
                            } else {
                                if (diff_median <= 14.117921829223633) {
                                    if (ss_median <= 69.0) {
                                        if (diff_median <= 11.2326340675354) {
                                            votes[2] = 2;
                                        } else {
                                            votes[2] = 2;
                                        }
                                    } else {
                                        votes[2] = 2;
                                    }
                                } else {
                                    votes[2] = 2;
                                }
                            }
                        }
                    } else {
                        votes[2] = 5;
                    }
                }
            } else {
                if (systolic_area <= 19.392446517944336) {
                    votes[2] = 3;
                } else {
                    if (rr_std <= 21.801372528076172) {
                        votes[2] = 5;
                    } else {
                        votes[2] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 3
    if (diff_median <= 0.08662371709942818) {
        if (diff_median <= 0.0038555990904569626) {
            votes[3] = 2;
        } else {
            if (rr_std <= 5.136745572090149) {
                votes[3] = 0;
            } else {
                if (systolic_area <= 19.246849060058594) {
                    votes[3] = 0;
                } else {
                    if (diff_median <= 0.005838251672685146) {
                        votes[3] = 2;
                    } else {
                        votes[3] = 0;
                    }
                }
            }
        }
    } else {
        if (systolic_area <= 11.404314517974854) {
            if (systolic_area <= -55.3567008972168) {
                if (ss_median <= 43.75) {
                    votes[3] = 1;
                } else {
                    votes[3] = 1;
                }
            } else {
                if (rr_std <= 12.729589462280273) {
                    if (systolic_area <= -8.785614490509033) {
                        if (diff_median <= 22.077635765075684) {
                            if (rr_std <= 6.71722674369812) {
                                votes[3] = 1;
                            } else {
                                if (diff_median <= 8.525029182434082) {
                                    if (rr_std <= 9.054909229278564) {
                                        votes[3] = 3;
                                    } else {
                                        votes[3] = 5;
                                    }
                                } else {
                                    if (ss_median <= 50.5) {
                                        votes[3] = 3;
                                    } else {
                                        votes[3] = 3;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= -36.28563690185547) {
                                votes[3] = 1;
                            } else {
                                votes[3] = 1;
                            }
                        }
                    } else {
                        if (diff_median <= 11.934275150299072) {
                            if (diff_median <= 3.892882823944092) {
                                if (systolic_area <= 6.605204105377197) {
                                    votes[3] = 4;
                                } else {
                                    votes[3] = 3;
                                }
                            } else {
                                if (systolic_area <= 5.904846668243408) {
                                    if (rr_std <= 8.478462219238281) {
                                        if (systolic_area <= -1.5611779689788818) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    } else {
                                        votes[3] = 5;
                                    }
                                } else {
                                    votes[3] = 4;
                                }
                            }
                        } else {
                            if (rr_std <= 9.101352214813232) {
                                if (diff_median <= 20.17491626739502) {
                                    votes[3] = 3;
                                } else {
                                    if (ss_median <= 52.0) {
                                        votes[3] = 3;
                                    } else {
                                        votes[3] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 11.524967193603516) {
                                    votes[3] = 5;
                                } else {
                                    votes[3] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 6.143704175949097) {
                        if (rr_std <= 13.805545806884766) {
                            if (rr_std <= 13.281068801879883) {
                                votes[3] = 1;
                            } else {
                                votes[3] = 1;
                            }
                        } else {
                            if (ss_median <= 48.5) {
                                if (systolic_area <= -8.973236799240112) {
                                    votes[3] = 1;
                                } else {
                                    votes[3] = 5;
                                }
                            } else {
                                if (systolic_area <= -6.51741361618042) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 4;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 10.770977973937988) {
                            if (rr_std <= 37.201751708984375) {
                                votes[3] = 1;
                            } else {
                                votes[3] = 1;
                            }
                        } else {
                            votes[3] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.175432205200195) {
                if (ss_median <= 66.5) {
                    if (rr_std <= 7.605438470840454) {
                        if (diff_median <= 7.418256044387817) {
                            if (diff_median <= 4.865335464477539) {
                                if (ss_median <= 54.75) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 3;
                                }
                            } else {
                                votes[3] = 4;
                            }
                        } else {
                            if (diff_median <= 26.68294048309326) {
                                if (systolic_area <= 30.436634063720703) {
                                    if (ss_median <= 59.5) {
                                        votes[3] = 3;
                                    } else {
                                        votes[3] = 3;
                                    }
                                } else {
                                    votes[3] = 3;
                                }
                            } else {
                                votes[3] = 3;
                            }
                        }
                    } else {
                        if (diff_median <= 4.6485655307769775) {
                            votes[3] = 5;
                        } else {
                            if (rr_std <= 8.511747360229492) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 3;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 14.106964588165283) {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 7.790127754211426) {
                                votes[3] = 2;
                            } else {
                                if (rr_std <= 0.8769984543323517) {
                                    votes[3] = 2;
                                } else {
                                    if (rr_std <= 5.308671236038208) {
                                        votes[3] = 5;
                                    } else {
                                        if (ss_median <= 71.0) {
                                            votes[3] = 2;
                                        } else {
                                            votes[3] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[3] = 5;
                        }
                    } else {
                        if (rr_std <= 5.698183059692383) {
                            votes[3] = 3;
                        } else {
                            votes[3] = 5;
                        }
                    }
                }
            } else {
                if (systolic_area <= 22.217223167419434) {
                    if (diff_median <= 9.741822719573975) {
                        if (ss_median <= 51.75) {
                            if (systolic_area <= 17.71390724182129) {
                                if (rr_std <= 19.374171257019043) {
                                    if (diff_median <= 6.87516975402832) {
                                        votes[3] = 3;
                                    } else {
                                        votes[3] = 5;
                                    }
                                } else {
                                    votes[3] = 1;
                                }
                            } else {
                                votes[3] = 2;
                            }
                        } else {
                            if (ss_median <= 57.5) {
                                if (systolic_area <= 17.157826900482178) {
                                    votes[3] = 2;
                                } else {
                                    votes[3] = 2;
                                }
                            } else {
                                votes[3] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 12.148530960083008) {
                            votes[3] = 3;
                        } else {
                            if (rr_std <= 19.544686317443848) {
                                if (rr_std <= 16.356670379638672) {
                                    if (systolic_area <= 17.165529251098633) {
                                        votes[3] = 4;
                                    } else {
                                        votes[3] = 5;
                                    }
                                } else {
                                    votes[3] = 5;
                                }
                            } else {
                                votes[3] = 2;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 16.197636604309082) {
                        if (rr_std <= 15.63172721862793) {
                            if (diff_median <= 10.21409273147583) {
                                if (systolic_area <= 152.80693817138672) {
                                    if (systolic_area <= 36.04973030090332) {
                                        votes[3] = 4;
                                    } else {
                                        votes[3] = 1;
                                    }
                                } else {
                                    votes[3] = 4;
                                }
                            } else {
                                votes[3] = 4;
                            }
                        } else {
                            if (diff_median <= 11.828458309173584) {
                                if (ss_median <= 50.5) {
                                    if (diff_median <= 4.85901665687561) {
                                        votes[3] = 5;
                                    } else {
                                        votes[3] = 4;
                                    }
                                } else {
                                    if (diff_median <= 4.243029832839966) {
                                        if (rr_std <= 22.632559776306152) {
                                            votes[3] = 4;
                                        } else {
                                            votes[3] = 4;
                                        }
                                    } else {
                                        votes[3] = 1;
                                    }
                                }
                            } else {
                                votes[3] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 18.507460594177246) {
                            if (systolic_area <= 24.14421558380127) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 3;
                            }
                        } else {
                            votes[3] = 1;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 4
    if (diff_median <= 0.08662371709942818) {
        if (diff_median <= 0.0037499095778912306) {
            votes[4] = 2;
        } else {
            if (rr_std <= 5.0368287563323975) {
                votes[4] = 2;
            } else {
                if (rr_std <= 85.26799774169922) {
                    if (systolic_area <= 21.25664710998535) {
                        votes[4] = 0;
                    } else {
                        votes[4] = 0;
                    }
                } else {
                    votes[4] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 25.63729190826416) {
                if (systolic_area <= -54.13969612121582) {
                    if (rr_std <= 7.67237663269043) {
                        votes[4] = 1;
                    } else {
                        if (diff_median <= 40.831899642944336) {
                            if (ss_median <= 43.75) {
                                votes[4] = 1;
                            } else {
                                votes[4] = 1;
                            }
                        } else {
                            votes[4] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 9.110387802124023) {
                        if (ss_median <= 48.75) {
                            if (diff_median <= 5.1763834953308105) {
                                if (systolic_area <= -1.4706001281738281) {
                                    votes[4] = 5;
                                } else {
                                    votes[4] = 5;
                                }
                            } else {
                                if (systolic_area <= -10.059023380279541) {
                                    votes[4] = 1;
                                } else {
                                    if (ss_median <= 45.5) {
                                        if (ss_median <= 43.25) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 4;
                                        }
                                    } else {
                                        if (diff_median <= 16.183337211608887) {
                                            votes[4] = 3;
                                        } else {
                                            votes[4] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 54.75) {
                                if (diff_median <= 28.428017616271973) {
                                    if (rr_std <= 7.635684251785278) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 3;
                                    }
                                } else {
                                    votes[4] = 3;
                                }
                            } else {
                                if (diff_median <= 12.358064651489258) {
                                    if (systolic_area <= -4.507694721221924) {
                                        votes[4] = 1;
                                    } else {
                                        if (diff_median <= 5.463590025901794) {
                                            votes[4] = 4;
                                        } else {
                                            votes[4] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 3.207412838935852) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 21.753507614135742) {
                            if (systolic_area <= 11.13438892364502) {
                                if (diff_median <= 8.030594110488892) {
                                    if (systolic_area <= -18.210250854492188) {
                                        votes[4] = 5;
                                    } else {
                                        if (ss_median <= 48.5) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 13.281068801879883) {
                                        if (systolic_area <= -8.311931371688843) {
                                            votes[4] = 1;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 47.5) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 7.406989812850952) {
                                    if (rr_std <= 14.48183536529541) {
                                        votes[4] = 5;
                                    } else {
                                        if (rr_std <= 18.075851440429688) {
                                            votes[4] = 2;
                                        } else {
                                            votes[4] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 19.5789737701416) {
                                        if (rr_std <= 14.222147464752197) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    } else {
                                        votes[4] = 2;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 1.6942816972732544) {
                                votes[4] = 4;
                            } else {
                                if (systolic_area <= 12.400026321411133) {
                                    if (ss_median <= 57.0) {
                                        votes[4] = 1;
                                    } else {
                                        votes[4] = 1;
                                    }
                                } else {
                                    votes[4] = 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.485362529754639) {
                    if (ss_median <= 47.25) {
                        if (systolic_area <= 34.44016456604004) {
                            votes[4] = 3;
                        } else {
                            votes[4] = 4;
                        }
                    } else {
                        if (diff_median <= 7.746871709823608) {
                            votes[4] = 3;
                        } else {
                            votes[4] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 20.23182773590088) {
                        if (systolic_area <= 158.4512596130371) {
                            if (systolic_area <= 40.77180480957031) {
                                if (diff_median <= 2.933680295944214) {
                                    if (diff_median <= 1.3087035417556763) {
                                        votes[4] = 4;
                                    } else {
                                        votes[4] = 5;
                                    }
                                } else {
                                    if (diff_median <= 11.095959186553955) {
                                        if (diff_median <= 8.612894058227539) {
                                            votes[4] = 4;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= 34.56259727478027) {
                                            votes[4] = 4;
                                        } else {
                                            votes[4] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 49.0) {
                                    votes[4] = 5;
                                } else {
                                    votes[4] = 1;
                                }
                            }
                        } else {
                            votes[4] = 4;
                        }
                    } else {
                        votes[4] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 13.923456192016602) {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 4.026300668716431) {
                            votes[4] = 2;
                        } else {
                            if (ss_median <= 71.25) {
                                if (ss_median <= 67.25) {
                                    votes[4] = 2;
                                } else {
                                    if (diff_median <= 10.383548259735107) {
                                        votes[4] = 2;
                                    } else {
                                        votes[4] = 2;
                                    }
                                }
                            } else {
                                if (systolic_area <= 25.0954532623291) {
                                    votes[4] = 2;
                                } else {
                                    votes[4] = 2;
                                }
                            }
                        }
                    } else {
                        votes[4] = 3;
                    }
                } else {
                    if (diff_median <= 30.973605155944824) {
                        if (diff_median <= 21.432908058166504) {
                            votes[4] = 5;
                        } else {
                            votes[4] = 2;
                        }
                    } else {
                        votes[4] = 3;
                    }
                }
            } else {
                if (systolic_area <= 16.598926067352295) {
                    if (rr_std <= 13.171812057495117) {
                        votes[4] = 3;
                    } else {
                        votes[4] = 3;
                    }
                } else {
                    if (rr_std <= 21.57893466949463) {
                        votes[4] = 5;
                    } else {
                        votes[4] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 5
    if (diff_median <= 0.0636307867243886) {
        if (diff_median <= 0.0037875473499298096) {
            votes[5] = 2;
        } else {
            if (systolic_area <= 21.375597953796387) {
                if (rr_std <= 6.05823278427124) {
                    votes[5] = 0;
                } else {
                    if (ss_median <= 323.75) {
                        votes[5] = 0;
                    } else {
                        votes[5] = 0;
                    }
                }
            } else {
                votes[5] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.098475456237793) {
                if (systolic_area <= -53.2972354888916) {
                    if (rr_std <= 7.67237663269043) {
                        votes[5] = 1;
                    } else {
                        if (systolic_area <= -90.64995193481445) {
                            if (systolic_area <= -99.11768341064453) {
                                votes[5] = 1;
                            } else {
                                votes[5] = 1;
                            }
                        } else {
                            votes[5] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 19.08421039581299) {
                        if (diff_median <= 1.916571855545044) {
                            if (systolic_area <= 5.83650130033493) {
                                votes[5] = 4;
                            } else {
                                votes[5] = 1;
                            }
                        } else {
                            if (systolic_area <= -8.785614490509033) {
                                if (diff_median <= 26.38028335571289) {
                                    if (rr_std <= 7.046201944351196) {
                                        votes[5] = 1;
                                    } else {
                                        if (diff_median <= 7.571774959564209) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 35.64711570739746) {
                                        votes[5] = 1;
                                    } else {
                                        votes[5] = 1;
                                    }
                                }
                            } else {
                                if (diff_median <= 11.823472023010254) {
                                    if (systolic_area <= 18.652591705322266) {
                                        if (systolic_area <= -0.19486644864082336) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 6.117182493209839) {
                                            votes[5] = 2;
                                        } else {
                                            votes[5] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 45.5) {
                                        if (rr_std <= 14.501341819763184) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 55.25) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.173145771026611) {
                            if (systolic_area <= 8.286088943481445) {
                                if (ss_median <= 51.5) {
                                    votes[5] = 1;
                                } else {
                                    votes[5] = 1;
                                }
                            } else {
                                if (systolic_area <= 10.25899362564087) {
                                    votes[5] = 1;
                                } else {
                                    votes[5] = 1;
                                }
                            }
                        } else {
                            if (ss_median <= 52.25) {
                                if (systolic_area <= 16.836462020874023) {
                                    votes[5] = 1;
                                } else {
                                    votes[5] = 3;
                                }
                            } else {
                                if (rr_std <= 21.201406478881836) {
                                    votes[5] = 2;
                                } else {
                                    votes[5] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.232347011566162) {
                    if (ss_median <= 47.25) {
                        if (systolic_area <= 33.752986907958984) {
                            votes[5] = 1;
                        } else {
                            votes[5] = 4;
                        }
                    } else {
                        if (systolic_area <= 46.54791450500488) {
                            if (systolic_area <= 27.3469295501709) {
                                votes[5] = 3;
                            } else {
                                votes[5] = 3;
                            }
                        } else {
                            votes[5] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 15.398310661315918) {
                        if (diff_median <= 2.569055438041687) {
                            if (ss_median <= 57.75) {
                                if (diff_median <= 1.307878315448761) {
                                    votes[5] = 5;
                                } else {
                                    votes[5] = 5;
                                }
                            } else {
                                votes[5] = 4;
                            }
                        } else {
                            if (systolic_area <= 152.76970672607422) {
                                if (systolic_area <= 41.45831108093262) {
                                    if (rr_std <= 9.043081283569336) {
                                        votes[5] = 5;
                                    } else {
                                        if (diff_median <= 10.53769826889038) {
                                            votes[5] = 4;
                                        } else {
                                            votes[5] = 4;
                                        }
                                    }
                                } else {
                                    votes[5] = 1;
                                }
                            } else {
                                votes[5] = 4;
                            }
                        }
                    } else {
                        if (systolic_area <= 48.493595123291016) {
                            if (systolic_area <= 24.14421558380127) {
                                votes[5] = 5;
                            } else {
                                if (ss_median <= 54.5) {
                                    votes[5] = 3;
                                } else {
                                    votes[5] = 4;
                                }
                            }
                        } else {
                            votes[5] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 26.720373153686523) {
                    if (systolic_area <= 12.253990173339844) {
                        votes[5] = 3;
                    } else {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 15.373574256896973) {
                                if (diff_median <= 3.699536919593811) {
                                    votes[5] = 2;
                                } else {
                                    if (diff_median <= 9.235647678375244) {
                                        votes[5] = 2;
                                    } else {
                                        if (diff_median <= 10.953918933868408) {
                                            votes[5] = 2;
                                        } else {
                                            votes[5] = 2;
                                        }
                                    }
                                }
                            } else {
                                votes[5] = 2;
                            }
                        } else {
                            votes[5] = 2;
                        }
                    }
                } else {
                    votes[5] = 5;
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 19.392446517944336) {
                        if (diff_median <= 11.696134090423584) {
                            votes[5] = 3;
                        } else {
                            votes[5] = 3;
                        }
                    } else {
                        votes[5] = 5;
                    }
                } else {
                    votes[5] = 4;
                }
            }
        }
    }
// Decision rules for tree 6
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.004029264091514051) {
            votes[6] = 2;
        } else {
            if (rr_std <= 3.746261239051819) {
                votes[6] = 2;
            } else {
                if (systolic_area <= 19.230298042297363) {
                    votes[6] = 0;
                } else {
                    if (diff_median <= 0.007222690153867006) {
                        votes[6] = 2;
                    } else {
                        votes[6] = 0;
                    }
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 22.098475456237793) {
                if (systolic_area <= -43.60191345214844) {
                    if (ss_median <= 43.75) {
                        votes[6] = 1;
                    } else {
                        if (rr_std <= 9.72970199584961) {
                            if (systolic_area <= -78.07887268066406) {
                                votes[6] = 1;
                            } else {
                                votes[6] = 1;
                            }
                        } else {
                            if (rr_std <= 12.693106651306152) {
                                if (ss_median <= 49.75) {
                                    votes[6] = 1;
                                } else {
                                    votes[6] = 1;
                                }
                            } else {
                                votes[6] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 21.9226655960083) {
                        if (rr_std <= 19.3992280960083) {
                            if (diff_median <= 11.87086534500122) {
                                if (systolic_area <= 18.923368453979492) {
                                    if (rr_std <= 8.93813180923462) {
                                        if (rr_std <= 0.7241657376289368) {
                                            votes[6] = 5;
                                        } else {
                                            votes[6] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 4.406568646430969) {
                                            votes[6] = 4;
                                        } else {
                                            votes[6] = 5;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 5.780998229980469) {
                                        if (diff_median <= 2.8511000871658325) {
                                            votes[6] = 2;
                                        } else {
                                            votes[6] = 2;
                                        }
                                    } else {
                                        votes[6] = 2;
                                    }
                                }
                            } else {
                                if (systolic_area <= -17.567960739135742) {
                                    if (diff_median <= 26.33542251586914) {
                                        votes[6] = 1;
                                    } else {
                                        votes[6] = 1;
                                    }
                                } else {
                                    if (rr_std <= 10.584284782409668) {
                                        if (ss_median <= 43.5) {
                                            votes[6] = 5;
                                        } else {
                                            votes[6] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 15.328180313110352) {
                                            votes[6] = 3;
                                        } else {
                                            votes[6] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 54.25) {
                                votes[6] = 1;
                            } else {
                                votes[6] = 2;
                            }
                        }
                    } else {
                        if (diff_median <= 1.6942816972732544) {
                            votes[6] = 4;
                        } else {
                            if (systolic_area <= 12.21763277053833) {
                                if (rr_std <= 25.06040096282959) {
                                    votes[6] = 1;
                                } else {
                                    votes[6] = 1;
                                }
                            } else {
                                votes[6] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.232347011566162) {
                    if (diff_median <= 13.07077169418335) {
                        if (systolic_area <= 27.633392333984375) {
                            votes[6] = 4;
                        } else {
                            votes[6] = 1;
                        }
                    } else {
                        if (rr_std <= 2.6383429765701294) {
                            votes[6] = 3;
                        } else {
                            if (systolic_area <= 35.023765563964844) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 19.908303260803223) {
                        if (diff_median <= 2.3521947860717773) {
                            if (systolic_area <= 31.60818386077881) {
                                votes[6] = 4;
                            } else {
                                votes[6] = 5;
                            }
                        } else {
                            if (systolic_area <= 152.93936920166016) {
                                if (systolic_area <= 40.77180480957031) {
                                    if (rr_std <= 9.201727867126465) {
                                        votes[6] = 5;
                                    } else {
                                        if (diff_median <= 15.771183490753174) {
                                            votes[6] = 4;
                                        } else {
                                            votes[6] = 4;
                                        }
                                    }
                                } else {
                                    votes[6] = 1;
                                }
                            } else {
                                votes[6] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 13.633975505828857) {
                            if (rr_std <= 10.37123155593872) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        } else {
                            votes[6] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 11.052355289459229) {
                    votes[6] = 3;
                } else {
                    if (diff_median <= 15.373574256896973) {
                        if (ss_median <= 73.5) {
                            if (ss_median <= 69.0) {
                                if (diff_median <= 9.7643461227417) {
                                    votes[6] = 2;
                                } else {
                                    votes[6] = 2;
                                }
                            } else {
                                if (rr_std <= 6.235124111175537) {
                                    if (rr_std <= 2.036064565181732) {
                                        votes[6] = 2;
                                    } else {
                                        votes[6] = 2;
                                    }
                                } else {
                                    votes[6] = 2;
                                }
                            }
                        } else {
                            votes[6] = 3;
                        }
                    } else {
                        if (systolic_area <= 17.676159858703613) {
                            votes[6] = 5;
                        } else {
                            votes[6] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 19.392446517944336) {
                        votes[6] = 3;
                    } else {
                        votes[6] = 5;
                    }
                } else {
                    if (systolic_area <= 32.777814865112305) {
                        votes[6] = 4;
                    } else {
                        votes[6] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 7
    if (diff_median <= 0.06452756375074387) {
        if (systolic_area <= 19.79263687133789) {
            if (rr_std <= 5.42728316783905) {
                votes[7] = 0;
            } else {
                votes[7] = 0;
            }
        } else {
            if (rr_std <= 54.60662841796875) {
                if (diff_median <= 0.0067393663339316845) {
                    votes[7] = 0;
                } else {
                    votes[7] = 0;
                }
            } else {
                votes[7] = 2;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= -43.696794509887695) {
                if (ss_median <= 42.75) {
                    votes[7] = 1;
                } else {
                    if (rr_std <= 9.748514175415039) {
                        if (systolic_area <= -74.50880813598633) {
                            votes[7] = 1;
                        } else {
                            votes[7] = 1;
                        }
                    } else {
                        if (systolic_area <= -52.96514320373535) {
                            votes[7] = 1;
                        } else {
                            votes[7] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 9.144592761993408) {
                    if (diff_median <= 13.07077169418335) {
                        if (rr_std <= 8.278104305267334) {
                            if (systolic_area <= 20.641596794128418) {
                                if (ss_median <= 56.5) {
                                    if (rr_std <= 2.122118651866913) {
                                        votes[7] = 1;
                                    } else {
                                        if (systolic_area <= -1.5611779689788818) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 3;
                                        }
                                    }
                                } else {
                                    votes[7] = 1;
                                }
                            } else {
                                if (diff_median <= 4.865335464477539) {
                                    if (systolic_area <= 29.5870304107666) {
                                        votes[7] = 3;
                                    } else {
                                        votes[7] = 3;
                                    }
                                } else {
                                    if (systolic_area <= 32.773738861083984) {
                                        votes[7] = 2;
                                    } else {
                                        votes[7] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 8.864468574523926) {
                                votes[7] = 5;
                            } else {
                                votes[7] = 5;
                            }
                        }
                    } else {
                        if (systolic_area <= -8.253284454345703) {
                            votes[7] = 1;
                        } else {
                            if (systolic_area <= 21.7103214263916) {
                                if (systolic_area <= 19.976263999938965) {
                                    if (rr_std <= 4.49879002571106) {
                                        votes[7] = 3;
                                    } else {
                                        if (systolic_area <= 14.133031845092773) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 3;
                                        }
                                    }
                                } else {
                                    votes[7] = 5;
                                }
                            } else {
                                if (rr_std <= 5.162203311920166) {
                                    votes[7] = 3;
                                } else {
                                    votes[7] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 22.217223167419434) {
                        if (rr_std <= 24.657917022705078) {
                            if (diff_median <= 9.20974349975586) {
                                if (systolic_area <= 10.681879043579102) {
                                    if (rr_std <= 11.07578706741333) {
                                        votes[7] = 4;
                                    } else {
                                        if (ss_median <= 42.0) {
                                            votes[7] = 5;
                                        } else {
                                            votes[7] = 1;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 51.75) {
                                        if (systolic_area <= 15.767888069152832) {
                                            votes[7] = 4;
                                        } else {
                                            votes[7] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 5.730275630950928) {
                                            votes[7] = 2;
                                        } else {
                                            votes[7] = 2;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 11.363510131835938) {
                                    if (ss_median <= 49.0) {
                                        votes[7] = 5;
                                    } else {
                                        votes[7] = 5;
                                    }
                                } else {
                                    if (systolic_area <= 11.923323631286621) {
                                        if (systolic_area <= 5.206527948379517) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 15.872620105743408) {
                                            votes[7] = 4;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 12.792227268218994) {
                                if (systolic_area <= 8.286088943481445) {
                                    votes[7] = 1;
                                } else {
                                    votes[7] = 1;
                                }
                            } else {
                                votes[7] = 1;
                            }
                        }
                    } else {
                        if (diff_median <= 19.801846504211426) {
                            if (diff_median <= 10.52086591720581) {
                                if (systolic_area <= 152.93936920166016) {
                                    if (systolic_area <= 40.53420639038086) {
                                        if (rr_std <= 18.24321746826172) {
                                            votes[7] = 5;
                                        } else {
                                            votes[7] = 4;
                                        }
                                    } else {
                                        votes[7] = 1;
                                    }
                                } else {
                                    votes[7] = 4;
                                }
                            } else {
                                if (systolic_area <= 41.52779960632324) {
                                    if (diff_median <= 15.771183490753174) {
                                        votes[7] = 4;
                                    } else {
                                        votes[7] = 4;
                                    }
                                } else {
                                    votes[7] = 1;
                                }
                            }
                        } else {
                            if (ss_median <= 48.5) {
                                votes[7] = 1;
                            } else {
                                votes[7] = 3;
                            }
                        }
                    }
                }
            }
        } else {
            if (systolic_area <= 11.052355289459229) {
                if (diff_median <= 8.25759768486023) {
                    votes[7] = 3;
                } else {
                    votes[7] = 3;
                }
            } else {
                if (rr_std <= 10.45276403427124) {
                    if (diff_median <= 14.106964588165283) {
                        if (rr_std <= 3.989093065261841) {
                            if (rr_std <= 0.6057857573032379) {
                                if (systolic_area <= 21.213376998901367) {
                                    votes[7] = 2;
                                } else {
                                    votes[7] = 2;
                                }
                            } else {
                                votes[7] = 2;
                            }
                        } else {
                            if (diff_median <= 5.163873672485352) {
                                if (systolic_area <= 21.051084518432617) {
                                    votes[7] = 2;
                                } else {
                                    votes[7] = 2;
                                }
                            } else {
                                votes[7] = 2;
                            }
                        }
                    } else {
                        if (ss_median <= 68.5) {
                            votes[7] = 2;
                        } else {
                            votes[7] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 18.723191261291504) {
                        votes[7] = 5;
                    } else {
                        votes[7] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 8
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.0037875473499298096) {
            votes[8] = 2;
        } else {
            if (rr_std <= 5.136745572090149) {
                votes[8] = 2;
            } else {
                if (systolic_area <= 20.357171058654785) {
                    votes[8] = 0;
                } else {
                    if (diff_median <= 0.005787551635876298) {
                        votes[8] = 2;
                    } else {
                        votes[8] = 0;
                    }
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 22.098475456237793) {
                if (systolic_area <= -47.88606834411621) {
                    if (ss_median <= 42.5) {
                        votes[8] = 1;
                    } else {
                        if (rr_std <= 9.72970199584961) {
                            if (systolic_area <= -87.11788940429688) {
                                votes[8] = 1;
                            } else {
                                votes[8] = 5;
                            }
                        } else {
                            votes[8] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 15.483339786529541) {
                        if (diff_median <= 16.821608543395996) {
                            if (systolic_area <= 7.681258201599121) {
                                if (ss_median <= 53.5) {
                                    if (diff_median <= 3.4222337007522583) {
                                        votes[8] = 4;
                                    } else {
                                        if (systolic_area <= 3.2516214847564697) {
                                            votes[8] = 5;
                                        } else {
                                            votes[8] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= -24.350685119628906) {
                                        votes[8] = 1;
                                    } else {
                                        if (diff_median <= 9.33897590637207) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 10.79201364517212) {
                                    votes[8] = 1;
                                } else {
                                    if (diff_median <= 8.10333800315857) {
                                        if (ss_median <= 49.5) {
                                            votes[8] = 5;
                                        } else {
                                            votes[8] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 16.971096992492676) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= -19.466744422912598) {
                                if (diff_median <= 30.068690299987793) {
                                    votes[8] = 5;
                                } else {
                                    votes[8] = 1;
                                }
                            } else {
                                if (diff_median <= 54.5666618347168) {
                                    if (rr_std <= 4.5134665966033936) {
                                        votes[8] = 5;
                                    } else {
                                        if (systolic_area <= -7.059191703796387) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 3;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 47.0) {
                                        votes[8] = 5;
                                    } else {
                                        votes[8] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 23.219493865966797) {
                            if (diff_median <= 9.4509859085083) {
                                if (systolic_area <= 14.379140853881836) {
                                    if (rr_std <= 18.392136573791504) {
                                        votes[8] = 5;
                                    } else {
                                        votes[8] = 2;
                                    }
                                } else {
                                    votes[8] = 2;
                                }
                            } else {
                                if (systolic_area <= 12.98179578781128) {
                                    if (ss_median <= 45.5) {
                                        votes[8] = 5;
                                    } else {
                                        if (systolic_area <= 9.704356670379639) {
                                            votes[8] = 1;
                                        } else {
                                            votes[8] = 2;
                                        }
                                    }
                                } else {
                                    votes[8] = 5;
                                }
                            }
                        } else {
                            if (systolic_area <= 13.871681690216064) {
                                if (systolic_area <= 7.042778491973877) {
                                    votes[8] = 1;
                                } else {
                                    if (rr_std <= 26.02840805053711) {
                                        votes[8] = 1;
                                    } else {
                                        votes[8] = 1;
                                    }
                                }
                            } else {
                                votes[8] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.360839128494263) {
                    if (diff_median <= 23.281174659729004) {
                        if (rr_std <= 3.4891804456710815) {
                            votes[8] = 3;
                        } else {
                            if (rr_std <= 6.431420087814331) {
                                votes[8] = 3;
                            } else {
                                votes[8] = 3;
                            }
                        }
                    } else {
                        votes[8] = 5;
                    }
                } else {
                    if (diff_median <= 15.730360984802246) {
                        if (diff_median <= 5.240048170089722) {
                            if (rr_std <= 13.145554065704346) {
                                votes[8] = 5;
                            } else {
                                if (ss_median <= 56.5) {
                                    if (systolic_area <= 28.576754570007324) {
                                        votes[8] = 2;
                                    } else {
                                        if (rr_std <= 19.271584510803223) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 5;
                                        }
                                    }
                                } else {
                                    votes[8] = 4;
                                }
                            }
                        } else {
                            if (ss_median <= 52.75) {
                                if (ss_median <= 45.75) {
                                    votes[8] = 4;
                                } else {
                                    if (systolic_area <= 152.8576431274414) {
                                        if (systolic_area <= 35.48892021179199) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 1;
                                        }
                                    } else {
                                        votes[8] = 4;
                                    }
                                }
                            } else {
                                if (ss_median <= 60.5) {
                                    votes[8] = 4;
                                } else {
                                    votes[8] = 4;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 28.963520050048828) {
                            if (ss_median <= 52.5) {
                                votes[8] = 3;
                            } else {
                                votes[8] = 4;
                            }
                        } else {
                            if (systolic_area <= 48.59086227416992) {
                                votes[8] = 5;
                            } else {
                                votes[8] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 13.923456192016602) {
                    if (ss_median <= 73.5) {
                        if (systolic_area <= 15.519532680511475) {
                            votes[8] = 2;
                        } else {
                            if (diff_median <= 7.790127754211426) {
                                votes[8] = 2;
                            } else {
                                if (rr_std <= 3.6961541175842285) {
                                    if (rr_std <= 0.5958648025989532) {
                                        votes[8] = 2;
                                    } else {
                                        votes[8] = 2;
                                    }
                                } else {
                                    if (diff_median <= 10.054105758666992) {
                                        votes[8] = 2;
                                    } else {
                                        votes[8] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[8] = 5;
                    }
                } else {
                    if (rr_std <= 5.772883415222168) {
                        if (ss_median <= 70.0) {
                            votes[8] = 2;
                        } else {
                            votes[8] = 3;
                        }
                    } else {
                        votes[8] = 5;
                    }
                }
            } else {
                if (rr_std <= 18.996522903442383) {
                    if (systolic_area <= 16.598926067352295) {
                        if (ss_median <= 71.5) {
                            votes[8] = 3;
                        } else {
                            votes[8] = 3;
                        }
                    } else {
                        votes[8] = 5;
                    }
                } else {
                    votes[8] = 4;
                }
            }
        }
    }
// Decision rules for tree 9
    if (diff_median <= 0.12481981888413429) {
        if (systolic_area <= 22.04329490661621) {
            if (diff_median <= 0.004030388314276934) {
                votes[9] = 0;
            } else {
                if (rr_std <= 5.186081171035767) {
                    votes[9] = 0;
                } else {
                    if (systolic_area <= 20.282907485961914) {
                        votes[9] = 0;
                    } else {
                        if (ss_median <= 74.0) {
                            votes[9] = 0;
                        } else {
                            votes[9] = 0;
                        }
                    }
                }
            }
        } else {
            votes[9] = 2;
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= -19.080717086791992) {
                if (systolic_area <= -52.96514320373535) {
                    if (rr_std <= 7.67237663269043) {
                        if (diff_median <= 18.283288955688477) {
                            votes[9] = 5;
                        } else {
                            votes[9] = 1;
                        }
                    } else {
                        if (ss_median <= 52.75) {
                            votes[9] = 1;
                        } else {
                            votes[9] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 7.718029022216797) {
                        votes[9] = 1;
                    } else {
                        if (diff_median <= 14.808274269104004) {
                            if (rr_std <= 12.701016426086426) {
                                if (diff_median <= 8.093640565872192) {
                                    votes[9] = 3;
                                } else {
                                    votes[9] = 3;
                                }
                            } else {
                                votes[9] = 1;
                            }
                        } else {
                            if (systolic_area <= -26.000110626220703) {
                                if (rr_std <= 11.136429786682129) {
                                    votes[9] = 5;
                                } else {
                                    votes[9] = 1;
                                }
                            } else {
                                votes[9] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.144592761993408) {
                    if (diff_median <= 12.593645572662354) {
                        if (diff_median <= 8.527245044708252) {
                            if (ss_median <= 48.75) {
                                if (rr_std <= 3.215168595314026) {
                                    votes[9] = 4;
                                } else {
                                    if (ss_median <= 45.5) {
                                        votes[9] = 3;
                                    } else {
                                        votes[9] = 5;
                                    }
                                }
                            } else {
                                if (ss_median <= 54.25) {
                                    votes[9] = 3;
                                } else {
                                    if (ss_median <= 58.5) {
                                        votes[9] = 1;
                                    } else {
                                        votes[9] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 4.943553686141968) {
                                votes[9] = 1;
                            } else {
                                votes[9] = 3;
                            }
                        }
                    } else {
                        if (diff_median <= 28.34833335876465) {
                            if (diff_median <= 21.063109397888184) {
                                if (diff_median <= 15.88905143737793) {
                                    if (systolic_area <= 25.428054809570312) {
                                        votes[9] = 3;
                                    } else {
                                        votes[9] = 3;
                                    }
                                } else {
                                    if (diff_median <= 19.19491195678711) {
                                        votes[9] = 3;
                                    } else {
                                        votes[9] = 1;
                                    }
                                }
                            } else {
                                votes[9] = 3;
                            }
                        } else {
                            if (rr_std <= 6.085484504699707) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 5;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 23.285293579101562) {
                        if (rr_std <= 19.3992280960083) {
                            if (diff_median <= 15.127201557159424) {
                                if (diff_median <= 5.810624122619629) {
                                    if (ss_median <= 43.5) {
                                        votes[9] = 3;
                                    } else {
                                        if (systolic_area <= 17.719721794128418) {
                                            votes[9] = 4;
                                        } else {
                                            votes[9] = 2;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 44.75) {
                                        votes[9] = 5;
                                    } else {
                                        if (diff_median <= 7.629018783569336) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 13.084068298339844) {
                                    if (rr_std <= 10.009634494781494) {
                                        votes[9] = 5;
                                    } else {
                                        if (systolic_area <= 11.79903507232666) {
                                            votes[9] = 3;
                                        } else {
                                            votes[9] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 10.062552452087402) {
                                        votes[9] = 1;
                                    } else {
                                        if (rr_std <= 17.81490707397461) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 21.953694343566895) {
                                if (systolic_area <= 11.356832504272461) {
                                    votes[9] = 1;
                                } else {
                                    if (systolic_area <= 15.094753742218018) {
                                        votes[9] = 2;
                                    } else {
                                        votes[9] = 2;
                                    }
                                }
                            } else {
                                if (diff_median <= 1.6942816972732544) {
                                    votes[9] = 4;
                                } else {
                                    if (systolic_area <= 10.36304521560669) {
                                        if (rr_std <= 25.395835876464844) {
                                            votes[9] = 1;
                                        } else {
                                            votes[9] = 1;
                                        }
                                    } else {
                                        votes[9] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 20.28665065765381) {
                            if (rr_std <= 17.441914558410645) {
                                if (systolic_area <= 25.764131546020508) {
                                    votes[9] = 4;
                                } else {
                                    if (diff_median <= 2.471925735473633) {
                                        votes[9] = 4;
                                    } else {
                                        if (ss_median <= 46.25) {
                                            votes[9] = 4;
                                        } else {
                                            votes[9] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 19.923544883728027) {
                                    votes[9] = 5;
                                } else {
                                    if (ss_median <= 51.75) {
                                        if (diff_median <= 3.499208927154541) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 4;
                                        }
                                    } else {
                                        votes[9] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 16.22456169128418) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 10.45276403427124) {
                if (ss_median <= 73.25) {
                    if (diff_median <= 14.106964588165283) {
                        if (diff_median <= 4.018357753753662) {
                            votes[9] = 2;
                        } else {
                            if (systolic_area <= 18.27181053161621) {
                                votes[9] = 2;
                            } else {
                                votes[9] = 2;
                            }
                        }
                    } else {
                        if (systolic_area <= 25.657934188842773) {
                            if (systolic_area <= 16.544642448425293) {
                                votes[9] = 2;
                            } else {
                                votes[9] = 5;
                            }
                        } else {
                            votes[9] = 2;
                        }
                    }
                } else {
                    votes[9] = 5;
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 19.102481842041016) {
                        if (diff_median <= 14.274242401123047) {
                            votes[9] = 3;
                        } else {
                            votes[9] = 3;
                        }
                    } else {
                        votes[9] = 5;
                    }
                } else {
                    votes[9] = 4;
                }
            }
        }
    }
// Decision rules for tree 10
    if (diff_median <= 0.08662371709942818) {
        if (diff_median <= 0.00422980566509068) {
            if (rr_std <= 72.0794448852539) {
                votes[10] = 0;
            } else {
                votes[10] = 2;
            }
        } else {
            if (systolic_area <= 22.03877353668213) {
                if (rr_std <= 3.6463444232940674) {
                    votes[10] = 0;
                } else {
                    votes[10] = 0;
                }
            } else {
                votes[10] = 2;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= -45.74421310424805) {
                if (rr_std <= 10.693111896514893) {
                    if (systolic_area <= -59.59743309020996) {
                        if (diff_median <= 23.874228477478027) {
                            if (ss_median <= 47.25) {
                                votes[10] = 1;
                            } else {
                                votes[10] = 1;
                            }
                        } else {
                            votes[10] = 1;
                        }
                    } else {
                        votes[10] = 1;
                    }
                } else {
                    votes[10] = 1;
                }
            } else {
                if (systolic_area <= 25.63729190826416) {
                    if (rr_std <= 10.579628944396973) {
                        if (diff_median <= 8.107214450836182) {
                            if (systolic_area <= -0.19486644864082336) {
                                if (systolic_area <= -11.114920616149902) {
                                    if (rr_std <= 7.504640340805054) {
                                        votes[10] = 3;
                                    } else {
                                        votes[10] = 3;
                                    }
                                } else {
                                    votes[10] = 5;
                                }
                            } else {
                                if (systolic_area <= 17.078928470611572) {
                                    if (rr_std <= 8.25086498260498) {
                                        votes[10] = 3;
                                    } else {
                                        votes[10] = 4;
                                    }
                                } else {
                                    votes[10] = 5;
                                }
                            }
                        } else {
                            if (ss_median <= 42.25) {
                                votes[10] = 5;
                            } else {
                                if (systolic_area <= -1.424813151359558) {
                                    if (diff_median <= 28.72761631011963) {
                                        if (rr_std <= 9.012728691101074) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        votes[10] = 1;
                                    }
                                } else {
                                    if (systolic_area <= 14.439377307891846) {
                                        if (diff_median <= 11.239394664764404) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 15.965699672698975) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 19.294036865234375) {
                            if (systolic_area <= 0.32170623540878296) {
                                if (ss_median <= 42.0) {
                                    votes[10] = 3;
                                } else {
                                    if (diff_median <= 12.826086044311523) {
                                        if (diff_median <= 6.590471506118774) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= -13.38764476776123) {
                                            votes[10] = 1;
                                        } else {
                                            votes[10] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 3.6311562061309814) {
                                    votes[10] = 2;
                                } else {
                                    if (diff_median <= 21.394559860229492) {
                                        if (rr_std <= 17.51356792449951) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 47.25) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 2.537117600440979) {
                                if (systolic_area <= 12.518390655517578) {
                                    votes[10] = 4;
                                } else {
                                    votes[10] = 1;
                                }
                            } else {
                                if (systolic_area <= 10.358896732330322) {
                                    votes[10] = 1;
                                } else {
                                    if (ss_median <= 52.25) {
                                        if (ss_median <= 48.25) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 19.19779682159424) {
                                            votes[10] = 2;
                                        } else {
                                            votes[10] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.232347011566162) {
                        if (systolic_area <= 47.83042907714844) {
                            if (rr_std <= 3.4891804456710815) {
                                votes[10] = 3;
                            } else {
                                votes[10] = 3;
                            }
                        } else {
                            votes[10] = 3;
                        }
                    } else {
                        if (diff_median <= 16.116446495056152) {
                            if (diff_median <= 5.340798616409302) {
                                if (rr_std <= 13.449592590332031) {
                                    votes[10] = 5;
                                } else {
                                    if (diff_median <= 3.738792061805725) {
                                        if (rr_std <= 24.914609909057617) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    } else {
                                        votes[10] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 16.123345851898193) {
                                    if (rr_std <= 9.261868476867676) {
                                        votes[10] = 4;
                                    } else {
                                        votes[10] = 4;
                                    }
                                } else {
                                    if (diff_median <= 7.192633628845215) {
                                        votes[10] = 4;
                                    } else {
                                        votes[10] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 16.77373695373535) {
                                if (systolic_area <= 29.154306411743164) {
                                    votes[10] = 3;
                                } else {
                                    votes[10] = 5;
                                }
                            } else {
                                votes[10] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.851328372955322) {
                if (diff_median <= 15.029474258422852) {
                    if (ss_median <= 69.5) {
                        if (systolic_area <= 22.38975715637207) {
                            votes[10] = 3;
                        } else {
                            votes[10] = 2;
                        }
                    } else {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 4.395073890686035) {
                                votes[10] = 2;
                            } else {
                                if (diff_median <= 9.184192180633545) {
                                    votes[10] = 2;
                                } else {
                                    if (rr_std <= 5.373843431472778) {
                                        votes[10] = 2;
                                    } else {
                                        votes[10] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[10] = 2;
                        }
                    }
                } else {
                    if (diff_median <= 21.432908058166504) {
                        votes[10] = 5;
                    } else {
                        votes[10] = 3;
                    }
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 16.411948680877686) {
                        votes[10] = 3;
                    } else {
                        votes[10] = 5;
                    }
                } else {
                    votes[10] = 4;
                }
            }
        }
    }
// Decision rules for tree 11
    if (diff_median <= 0.08593277260661125) {
        if (systolic_area <= 20.366151809692383) {
            if (rr_std <= 4.540418982505798) {
                votes[11] = 0;
            } else {
                if (systolic_area <= 19.246849060058594) {
                    votes[11] = 0;
                } else {
                    votes[11] = 0;
                }
            }
        } else {
            if (rr_std <= 60.2817497253418) {
                if (systolic_area <= 21.375597953796387) {
                    votes[11] = 0;
                } else {
                    votes[11] = 0;
                }
            } else {
                votes[11] = 2;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 14.367379665374756) {
                if (rr_std <= 18.627275466918945) {
                    if (systolic_area <= -18.967034339904785) {
                        if (systolic_area <= -59.59743309020996) {
                            if (ss_median <= 53.0) {
                                if (systolic_area <= -71.50848388671875) {
                                    if (ss_median <= 43.75) {
                                        votes[11] = 1;
                                    } else {
                                        votes[11] = 1;
                                    }
                                } else {
                                    votes[11] = 1;
                                }
                            } else {
                                votes[11] = 1;
                            }
                        } else {
                            if (diff_median <= 14.808274269104004) {
                                if (rr_std <= 6.889637231826782) {
                                    votes[11] = 1;
                                } else {
                                    if (rr_std <= 12.701016426086426) {
                                        if (diff_median <= 8.285271167755127) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 7.140083074569702) {
                                            votes[11] = 1;
                                        } else {
                                            votes[11] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 9.807211875915527) {
                                    votes[11] = 1;
                                } else {
                                    if (diff_median <= 29.380626678466797) {
                                        votes[11] = 1;
                                    } else {
                                        votes[11] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 11.228723526000977) {
                            if (diff_median <= 4.3800270557403564) {
                                if (rr_std <= 7.471208095550537) {
                                    votes[11] = 3;
                                } else {
                                    votes[11] = 4;
                                }
                            } else {
                                if (diff_median <= 5.560596227645874) {
                                    votes[11] = 5;
                                } else {
                                    if (diff_median <= 7.843425035476685) {
                                        if (rr_std <= 11.086048603057861) {
                                            votes[11] = 4;
                                        } else {
                                            votes[11] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 6.693103075027466) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 13.667430400848389) {
                                if (ss_median <= 45.5) {
                                    if (diff_median <= 15.680401802062988) {
                                        votes[11] = 3;
                                    } else {
                                        votes[11] = 5;
                                    }
                                } else {
                                    if (rr_std <= 9.44698429107666) {
                                        if (rr_std <= 4.586677551269531) {
                                            votes[11] = 3;
                                        } else {
                                            votes[11] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 0.5388516783714294) {
                                            votes[11] = 3;
                                        } else {
                                            votes[11] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 27.678056716918945) {
                                    votes[11] = 1;
                                } else {
                                    votes[11] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (diff_median <= 1.8475979566574097) {
                        votes[11] = 4;
                    } else {
                        if (systolic_area <= 11.018815994262695) {
                            if (diff_median <= 22.02208137512207) {
                                votes[11] = 1;
                            } else {
                                votes[11] = 1;
                            }
                        } else {
                            votes[11] = 1;
                        }
                    }
                }
            } else {
                if (diff_median <= 15.48736572265625) {
                    if (rr_std <= 9.175432205200195) {
                        if (diff_median <= 8.413626670837402) {
                            if (ss_median <= 48.75) {
                                if (rr_std <= 5.533743381500244) {
                                    votes[11] = 4;
                                } else {
                                    votes[11] = 5;
                                }
                            } else {
                                if (rr_std <= 5.364973545074463) {
                                    votes[11] = 3;
                                } else {
                                    votes[11] = 2;
                                }
                            }
                        } else {
                            votes[11] = 3;
                        }
                    } else {
                        if (systolic_area <= 22.096806526184082) {
                            if (rr_std <= 13.259176254272461) {
                                if (systolic_area <= 17.431222915649414) {
                                    votes[11] = 4;
                                } else {
                                    votes[11] = 5;
                                }
                            } else {
                                if (rr_std <= 20.416611671447754) {
                                    if (systolic_area <= 18.605966567993164) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 2;
                                    }
                                } else {
                                    votes[11] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 17.441914558410645) {
                                if (systolic_area <= 23.80601978302002) {
                                    votes[11] = 4;
                                } else {
                                    if (diff_median <= 9.017483234405518) {
                                        if (systolic_area <= 152.3210906982422) {
                                            votes[11] = 4;
                                        } else {
                                            votes[11] = 4;
                                        }
                                    } else {
                                        votes[11] = 4;
                                    }
                                }
                            } else {
                                if (systolic_area <= 153.26847076416016) {
                                    if (systolic_area <= 36.852840423583984) {
                                        if (rr_std <= 22.122333526611328) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 4;
                                        }
                                    } else {
                                        votes[11] = 1;
                                    }
                                } else {
                                    votes[11] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 15.250352382659912) {
                        if (rr_std <= 13.034942150115967) {
                            if (systolic_area <= 24.262418746948242) {
                                if (ss_median <= 50.5) {
                                    if (rr_std <= 7.087122201919556) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 3;
                                    }
                                } else {
                                    if (rr_std <= 9.943656921386719) {
                                        votes[11] = 3;
                                    } else {
                                        votes[11] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= 34.053579330444336) {
                                    votes[11] = 3;
                                } else {
                                    votes[11] = 3;
                                }
                            }
                        } else {
                            votes[11] = 4;
                        }
                    } else {
                        if (systolic_area <= 48.59086227416992) {
                            if (ss_median <= 45.0) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 5;
                            }
                        } else {
                            votes[11] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (diff_median <= 15.029474258422852) {
                    if (systolic_area <= 10.700500011444092) {
                        votes[11] = 3;
                    } else {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 3.699536919593811) {
                                votes[11] = 2;
                            } else {
                                if (diff_median <= 7.7864089012146) {
                                    votes[11] = 2;
                                } else {
                                    if (rr_std <= 0.8769984543323517) {
                                        votes[11] = 2;
                                    } else {
                                        if (systolic_area <= 25.63753604888916) {
                                            votes[11] = 2;
                                        } else {
                                            votes[11] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[11] = 5;
                        }
                    }
                } else {
                    if (ss_median <= 68.5) {
                        votes[11] = 2;
                    } else {
                        if (rr_std <= 5.412319660186768) {
                            votes[11] = 5;
                        } else {
                            votes[11] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 18.028037071228027) {
                    if (systolic_area <= 16.411948680877686) {
                        votes[11] = 3;
                    } else {
                        votes[11] = 5;
                    }
                } else {
                    votes[11] = 4;
                }
            }
        }
    }
// Decision rules for tree 12
    if (diff_median <= 0.08662371709942818) {
        if (systolic_area <= 21.903182983398438) {
            if (systolic_area <= 19.246849060058594) {
                if (rr_std <= 7.44871711730957) {
                    votes[12] = 0;
                } else {
                    votes[12] = 0;
                }
            } else {
                if (diff_median <= 0.006086284993216395) {
                    votes[12] = 0;
                } else {
                    votes[12] = 0;
                }
            }
        } else {
            votes[12] = 2;
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= -19.080717086791992) {
                if (systolic_area <= -61.51252365112305) {
                    votes[12] = 1;
                } else {
                    if (diff_median <= 34.46483612060547) {
                        if (ss_median <= 57.5) {
                            if (rr_std <= 9.054909229278564) {
                                votes[12] = 3;
                            } else {
                                if (ss_median <= 49.5) {
                                    if (systolic_area <= -40.07346534729004) {
                                        votes[12] = 1;
                                    } else {
                                        votes[12] = 1;
                                    }
                                } else {
                                    if (rr_std <= 14.957902431488037) {
                                        if (ss_median <= 51.5) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    } else {
                                        votes[12] = 3;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 60.5) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 1;
                            }
                        }
                    } else {
                        if (diff_median <= 44.5882625579834) {
                            votes[12] = 1;
                        } else {
                            votes[12] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 9.175679683685303) {
                    if (ss_median <= 47.5) {
                        if (diff_median <= 9.277058124542236) {
                            if (rr_std <= 3.8779830932617188) {
                                votes[12] = 5;
                            } else {
                                if (systolic_area <= 16.64472723007202) {
                                    votes[12] = 5;
                                } else {
                                    votes[12] = 3;
                                }
                            }
                        } else {
                            if (diff_median <= 20.439093112945557) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 5;
                            }
                        }
                    } else {
                        if (diff_median <= 7.841857671737671) {
                            if (rr_std <= 8.269699096679688) {
                                if (systolic_area <= 27.925729751586914) {
                                    if (systolic_area <= 17.808398246765137) {
                                        votes[12] = 3;
                                    } else {
                                        votes[12] = 4;
                                    }
                                } else {
                                    votes[12] = 3;
                                }
                            } else {
                                votes[12] = 5;
                            }
                        } else {
                            if (diff_median <= 28.34833335876465) {
                                if (ss_median <= 61.5) {
                                    if (rr_std <= 8.194108009338379) {
                                        if (systolic_area <= 10.332001686096191) {
                                            votes[12] = 3;
                                        } else {
                                            votes[12] = 3;
                                        }
                                    } else {
                                        votes[12] = 3;
                                    }
                                } else {
                                    votes[12] = 3;
                                }
                            } else {
                                votes[12] = 3;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 22.217223167419434) {
                        if (rr_std <= 15.068942546844482) {
                            if (diff_median <= 15.037595748901367) {
                                if (diff_median <= 1.7283836007118225) {
                                    votes[12] = 4;
                                } else {
                                    if (diff_median <= 7.629018783569336) {
                                        if (systolic_area <= 15.03227710723877) {
                                            votes[12] = 3;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 12.776742458343506) {
                                            votes[12] = 4;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 4.99385142326355) {
                                    if (systolic_area <= -4.646574854850769) {
                                        votes[12] = 3;
                                    } else {
                                        votes[12] = 5;
                                    }
                                } else {
                                    if (diff_median <= 21.66301441192627) {
                                        votes[12] = 4;
                                    } else {
                                        votes[12] = 3;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 10.36304521560669) {
                                if (systolic_area <= 4.286606967449188) {
                                    votes[12] = 4;
                                } else {
                                    if (systolic_area <= 8.331603527069092) {
                                        votes[12] = 1;
                                    } else {
                                        votes[12] = 1;
                                    }
                                }
                            } else {
                                if (ss_median <= 52.25) {
                                    if (diff_median <= 7.063426971435547) {
                                        if (rr_std <= 20.54794979095459) {
                                            votes[12] = 1;
                                        } else {
                                            votes[12] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 48.5) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 21.494892120361328) {
                                        if (diff_median <= 8.145074129104614) {
                                            votes[12] = 2;
                                        } else {
                                            votes[12] = 2;
                                        }
                                    } else {
                                        votes[12] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 15.730360984802246) {
                            if (rr_std <= 12.676074504852295) {
                                if (diff_median <= 7.0333251953125) {
                                    votes[12] = 4;
                                } else {
                                    if (ss_median <= 46.25) {
                                        votes[12] = 4;
                                    } else {
                                        votes[12] = 4;
                                    }
                                }
                            } else {
                                if (systolic_area <= 147.08760833740234) {
                                    if (systolic_area <= 36.852840423583984) {
                                        if (systolic_area <= 25.075812339782715) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 4;
                                        }
                                    } else {
                                        votes[12] = 1;
                                    }
                                } else {
                                    votes[12] = 4;
                                }
                            }
                        } else {
                            if (ss_median <= 54.5) {
                                if (diff_median <= 34.13496208190918) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 5;
                                }
                            } else {
                                votes[12] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 28.116731643676758) {
                    if (ss_median <= 73.5) {
                        if (systolic_area <= 12.253990173339844) {
                            votes[12] = 2;
                        } else {
                            if (diff_median <= 14.117921829223633) {
                                if (diff_median <= 3.699536919593811) {
                                    votes[12] = 2;
                                } else {
                                    if (diff_median <= 7.7864089012146) {
                                        votes[12] = 2;
                                    } else {
                                        if (rr_std <= 0.8769984543323517) {
                                            votes[12] = 2;
                                        } else {
                                            votes[12] = 2;
                                        }
                                    }
                                }
                            } else {
                                votes[12] = 2;
                            }
                        }
                    } else {
                        votes[12] = 2;
                    }
                } else {
                    votes[12] = 3;
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 17.139187335968018) {
                        votes[12] = 3;
                    } else {
                        votes[12] = 5;
                    }
                } else {
                    votes[12] = 4;
                }
            }
        }
    }
// Decision rules for tree 13
    if (diff_median <= 0.08819644525647163) {
        if (diff_median <= 0.0038555990904569626) {
            if (ss_median <= 84.25) {
                votes[13] = 2;
            } else {
                votes[13] = 2;
            }
        } else {
            if (rr_std <= 3.6463444232940674) {
                votes[13] = 0;
            } else {
                if (rr_std <= 69.48360824584961) {
                    votes[13] = 0;
                } else {
                    if (rr_std <= 94.93862915039062) {
                        votes[13] = 0;
                    } else {
                        votes[13] = 0;
                    }
                }
            }
        }
    } else {
        if (ss_median <= 69.5) {
            if (systolic_area <= 12.946030139923096) {
                if (rr_std <= 15.480857372283936) {
                    if (systolic_area <= -40.22757339477539) {
                        if (systolic_area <= -59.59743309020996) {
                            if (diff_median <= 9.080387592315674) {
                                votes[13] = 1;
                            } else {
                                votes[13] = 1;
                            }
                        } else {
                            if (rr_std <= 10.232638835906982) {
                                votes[13] = 3;
                            } else {
                                votes[13] = 1;
                            }
                        }
                    } else {
                        if (systolic_area <= -0.06718292832374573) {
                            if (diff_median <= 30.068690299987793) {
                                if (ss_median <= 56.5) {
                                    if (systolic_area <= -27.90920639038086) {
                                        if (diff_median <= 7.634963035583496) {
                                            votes[13] = 3;
                                        } else {
                                            votes[13] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= -18.48615837097168) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 60.25) {
                                        votes[13] = 1;
                                    } else {
                                        votes[13] = 3;
                                    }
                                }
                            } else {
                                if (ss_median <= 47.75) {
                                    votes[13] = 1;
                                } else {
                                    votes[13] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 8.898454189300537) {
                                if (ss_median <= 65.5) {
                                    if (rr_std <= 4.475710868835449) {
                                        votes[13] = 3;
                                    } else {
                                        if (ss_median <= 47.25) {
                                            votes[13] = 3;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    }
                                } else {
                                    votes[13] = 2;
                                }
                            } else {
                                if (diff_median <= 4.142503499984741) {
                                    votes[13] = 4;
                                } else {
                                    if (systolic_area <= 1.1125698685646057) {
                                        votes[13] = 3;
                                    } else {
                                        if (systolic_area <= 3.898542046546936) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 6.143704175949097) {
                        if (systolic_area <= -17.892775535583496) {
                            if (ss_median <= 50.0) {
                                votes[13] = 1;
                            } else {
                                votes[13] = 1;
                            }
                        } else {
                            if (ss_median <= 47.5) {
                                votes[13] = 3;
                            } else {
                                votes[13] = 4;
                            }
                        }
                    } else {
                        if (systolic_area <= 11.142370700836182) {
                            votes[13] = 1;
                        } else {
                            if (ss_median <= 52.25) {
                                votes[13] = 1;
                            } else {
                                votes[13] = 2;
                            }
                        }
                    }
                }
            } else {
                if (systolic_area <= 154.4169464111328) {
                    if (diff_median <= 16.049418449401855) {
                        if (systolic_area <= 22.22378444671631) {
                            if (rr_std <= 13.598333835601807) {
                                if (systolic_area <= 19.546825408935547) {
                                    if (ss_median <= 48.5) {
                                        votes[13] = 4;
                                    } else {
                                        if (ss_median <= 55.5) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 61.5) {
                                        votes[13] = 4;
                                    } else {
                                        votes[13] = 5;
                                    }
                                }
                            } else {
                                if (ss_median <= 52.0) {
                                    if (diff_median <= 6.529326915740967) {
                                        votes[13] = 2;
                                    } else {
                                        votes[13] = 5;
                                    }
                                } else {
                                    votes[13] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 9.590222835540771) {
                                if (systolic_area <= 28.085034370422363) {
                                    if (diff_median <= 4.716692209243774) {
                                        votes[13] = 5;
                                    } else {
                                        if (ss_median <= 65.0) {
                                            votes[13] = 3;
                                        } else {
                                            votes[13] = 2;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 7.773998022079468) {
                                        votes[13] = 3;
                                    } else {
                                        votes[13] = 3;
                                    }
                                }
                            } else {
                                if (diff_median <= 2.0889439582824707) {
                                    votes[13] = 5;
                                } else {
                                    if (systolic_area <= 37.32608604431152) {
                                        if (ss_median <= 47.5) {
                                            votes[13] = 4;
                                        } else {
                                            votes[13] = 4;
                                        }
                                    } else {
                                        votes[13] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 14.591001033782959) {
                            if (ss_median <= 60.25) {
                                if (rr_std <= 6.317869663238525) {
                                    votes[13] = 5;
                                } else {
                                    if (diff_median <= 20.708053588867188) {
                                        votes[13] = 4;
                                    } else {
                                        if (ss_median <= 47.5) {
                                            votes[13] = 3;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 25.276626586914062) {
                                    votes[13] = 5;
                                } else {
                                    votes[13] = 2;
                                }
                            }
                        } else {
                            if (ss_median <= 47.5) {
                                votes[13] = 5;
                            } else {
                                votes[13] = 5;
                            }
                        }
                    }
                } else {
                    votes[13] = 4;
                }
            }
        } else {
            if (rr_std <= 9.851328372955322) {
                if (diff_median <= 17.421164989471436) {
                    if (ss_median <= 73.5) {
                        if (systolic_area <= 15.519532680511475) {
                            votes[13] = 2;
                        } else {
                            if (rr_std <= 3.7638041973114014) {
                                if (rr_std <= 0.49925926327705383) {
                                    votes[13] = 2;
                                } else {
                                    votes[13] = 2;
                                }
                            } else {
                                votes[13] = 2;
                            }
                        }
                    } else {
                        votes[13] = 2;
                    }
                } else {
                    votes[13] = 3;
                }
            } else {
                if (systolic_area <= 20.598278999328613) {
                    votes[13] = 3;
                } else {
                    votes[13] = 4;
                }
            }
        }
    }
// Decision rules for tree 14
    if (diff_median <= 0.08593277260661125) {
        if (diff_median <= 0.004271625075489283) {
            votes[14] = 2;
        } else {
            if (rr_std <= 4.633125424385071) {
                votes[14] = 0;
            } else {
                if (diff_median <= 0.0047602299600839615) {
                    votes[14] = 0;
                } else {
                    votes[14] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 18.25303363800049) {
                if (systolic_area <= -54.13969612121582) {
                    if (diff_median <= 23.874228477478027) {
                        if (rr_std <= 9.684147834777832) {
                            votes[14] = 1;
                        } else {
                            if (systolic_area <= -90.5287094116211) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 1;
                            }
                        }
                    } else {
                        votes[14] = 1;
                    }
                } else {
                    if (rr_std <= 21.784536361694336) {
                        if (rr_std <= 11.736538887023926) {
                            if (diff_median <= 8.885387897491455) {
                                if (systolic_area <= -0.19486644864082336) {
                                    if (systolic_area <= -11.206169128417969) {
                                        if (rr_std <= 9.054909229278564) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 5;
                                        }
                                    } else {
                                        votes[14] = 5;
                                    }
                                } else {
                                    if (systolic_area <= 6.605204105377197) {
                                        votes[14] = 4;
                                    } else {
                                        votes[14] = 3;
                                    }
                                }
                            } else {
                                if (systolic_area <= -19.410364151000977) {
                                    if (systolic_area <= -37.643253326416016) {
                                        votes[14] = 3;
                                    } else {
                                        votes[14] = 1;
                                    }
                                } else {
                                    if (ss_median <= 44.25) {
                                        if (diff_median <= 15.455311298370361) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 56.5) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 19.649877548217773) {
                                if (systolic_area <= 14.826438903808594) {
                                    if (diff_median <= 5.810624122619629) {
                                        votes[14] = 3;
                                    } else {
                                        if (systolic_area <= 14.21333122253418) {
                                            votes[14] = 5;
                                        } else {
                                            votes[14] = 2;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 51.5) {
                                        votes[14] = 5;
                                    } else {
                                        votes[14] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 20.484280586242676) {
                                    votes[14] = 2;
                                } else {
                                    votes[14] = 2;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 1.6942816972732544) {
                            votes[14] = 4;
                        } else {
                            votes[14] = 1;
                        }
                    }
                }
            } else {
                if (diff_median <= 15.617777347564697) {
                    if (rr_std <= 7.293630838394165) {
                        if (diff_median <= 3.432542085647583) {
                            votes[14] = 5;
                        } else {
                            if (rr_std <= 3.4891804456710815) {
                                if (rr_std <= 2.5838067531585693) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 4;
                                }
                            } else {
                                votes[14] = 3;
                            }
                        }
                    } else {
                        if (systolic_area <= 22.217223167419434) {
                            if (diff_median <= 6.966781139373779) {
                                if (ss_median <= 49.0) {
                                    votes[14] = 2;
                                } else {
                                    votes[14] = 2;
                                }
                            } else {
                                votes[14] = 4;
                            }
                        } else {
                            if (diff_median <= 2.030216932296753) {
                                if (rr_std <= 23.620441436767578) {
                                    votes[14] = 5;
                                } else {
                                    votes[14] = 4;
                                }
                            } else {
                                if (rr_std <= 8.490394592285156) {
                                    votes[14] = 5;
                                } else {
                                    if (rr_std <= 18.663601875305176) {
                                        if (systolic_area <= 33.3370246887207) {
                                            votes[14] = 4;
                                        } else {
                                            votes[14] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 21.690034866333008) {
                                            votes[14] = 1;
                                        } else {
                                            votes[14] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.193801879882812) {
                        if (systolic_area <= 23.31321907043457) {
                            if (systolic_area <= 21.46709156036377) {
                                votes[14] = 3;
                            } else {
                                votes[14] = 5;
                            }
                        } else {
                            if (systolic_area <= 32.309326171875) {
                                if (rr_std <= 10.481905460357666) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 3;
                                }
                            } else {
                                if (systolic_area <= 37.09761428833008) {
                                    votes[14] = 4;
                                } else {
                                    votes[14] = 3;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 21.660194396972656) {
                            votes[14] = 1;
                        } else {
                            votes[14] = 5;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 12.253990173339844) {
                    votes[14] = 3;
                } else {
                    if (diff_median <= 15.029474258422852) {
                        if (ss_median <= 73.5) {
                            if (ss_median <= 70.75) {
                                if (systolic_area <= 21.393590927124023) {
                                    votes[14] = 5;
                                } else {
                                    if (ss_median <= 67.5) {
                                        votes[14] = 2;
                                    } else {
                                        votes[14] = 2;
                                    }
                                }
                            } else {
                                if (diff_median <= 4.566621780395508) {
                                    votes[14] = 2;
                                } else {
                                    if (diff_median <= 9.184192180633545) {
                                        votes[14] = 2;
                                    } else {
                                        if (ss_median <= 72.5) {
                                            votes[14] = 2;
                                        } else {
                                            votes[14] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[14] = 2;
                        }
                    } else {
                        votes[14] = 5;
                    }
                }
            } else {
                if (systolic_area <= 19.102481842041016) {
                    if (ss_median <= 69.0) {
                        votes[14] = 4;
                    } else {
                        votes[14] = 3;
                    }
                } else {
                    if (rr_std <= 20.939932823181152) {
                        votes[14] = 5;
                    } else {
                        votes[14] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 15
    if (diff_median <= 0.06383661925792694) {
        if (systolic_area <= 21.995909690856934) {
            if (diff_median <= 0.004096172749996185) {
                votes[15] = 0;
            } else {
                if (rr_std <= 5.0368287563323975) {
                    votes[15] = 0;
                } else {
                    if (systolic_area <= 20.387378692626953) {
                        votes[15] = 0;
                    } else {
                        votes[15] = 0;
                    }
                }
            }
        } else {
            votes[15] = 2;
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= -36.0290641784668) {
                if (systolic_area <= -71.50848388671875) {
                    if (systolic_area <= -90.64995193481445) {
                        if (systolic_area <= -95.11200714111328) {
                            votes[15] = 1;
                        } else {
                            votes[15] = 1;
                        }
                    } else {
                        votes[15] = 1;
                    }
                } else {
                    if (ss_median <= 53.5) {
                        if (diff_median <= 14.692852020263672) {
                            votes[15] = 5;
                        } else {
                            if (systolic_area <= -49.08848571777344) {
                                votes[15] = 1;
                            } else {
                                votes[15] = 1;
                            }
                        }
                    } else {
                        votes[15] = 1;
                    }
                }
            } else {
                if (diff_median <= 14.859651565551758) {
                    if (systolic_area <= 22.217223167419434) {
                        if (rr_std <= 15.893165588378906) {
                            if (ss_median <= 42.75) {
                                votes[15] = 3;
                            } else {
                                if (rr_std <= 8.477112770080566) {
                                    if (diff_median <= 8.437533855438232) {
                                        if (rr_std <= 5.286214351654053) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 11.33849287033081) {
                                            votes[15] = 1;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 46.25) {
                                        votes[15] = 4;
                                    } else {
                                        if (rr_std <= 12.082037925720215) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 10.36304521560669) {
                                if (diff_median <= 2.4371062517166138) {
                                    votes[15] = 4;
                                } else {
                                    if (diff_median <= 11.393077373504639) {
                                        votes[15] = 1;
                                    } else {
                                        votes[15] = 1;
                                    }
                                }
                            } else {
                                if (ss_median <= 52.25) {
                                    if (systolic_area <= 14.353884220123291) {
                                        votes[15] = 1;
                                    } else {
                                        if (ss_median <= 46.25) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 21.564513206481934) {
                                        votes[15] = 2;
                                    } else {
                                        votes[15] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 7.171521186828613) {
                            if (systolic_area <= 32.773738861083984) {
                                votes[15] = 2;
                            } else {
                                votes[15] = 3;
                            }
                        } else {
                            if (diff_median <= 5.472686290740967) {
                                if (systolic_area <= 154.87279510498047) {
                                    if (rr_std <= 18.24321746826172) {
                                        if (systolic_area <= 31.60818386077881) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 55.75) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 4;
                                        }
                                    }
                                } else {
                                    votes[15] = 4;
                                }
                            } else {
                                if (rr_std <= 13.051806926727295) {
                                    if (ss_median <= 47.0) {
                                        votes[15] = 4;
                                    } else {
                                        votes[15] = 4;
                                    }
                                } else {
                                    if (rr_std <= 21.76643943786621) {
                                        if (systolic_area <= 33.33841514587402) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    } else {
                                        votes[15] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.827225685119629) {
                        if (systolic_area <= 3.9931881427764893) {
                            if (ss_median <= 50.5) {
                                if (systolic_area <= -11.022217273712158) {
                                    votes[15] = 1;
                                } else {
                                    if (diff_median <= 29.153501510620117) {
                                        votes[15] = 5;
                                    } else {
                                        votes[15] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 10.561444282531738) {
                                    if (rr_std <= 9.52001953125) {
                                        votes[15] = 5;
                                    } else {
                                        votes[15] = 3;
                                    }
                                } else {
                                    votes[15] = 1;
                                }
                            }
                        } else {
                            if (ss_median <= 56.75) {
                                if (diff_median <= 28.04797077178955) {
                                    if (ss_median <= 53.25) {
                                        votes[15] = 3;
                                    } else {
                                        votes[15] = 3;
                                    }
                                } else {
                                    if (rr_std <= 6.933724403381348) {
                                        if (diff_median <= 31.385009765625) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 50.0) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 7.020925760269165) {
                                    votes[15] = 3;
                                } else {
                                    if (systolic_area <= 24.7980318069458) {
                                        votes[15] = 5;
                                    } else {
                                        votes[15] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 20.143839836120605) {
                            if (rr_std <= 14.725524425506592) {
                                votes[15] = 1;
                            } else {
                                if (rr_std <= 17.083005905151367) {
                                    votes[15] = 5;
                                } else {
                                    if (ss_median <= 45.5) {
                                        votes[15] = 5;
                                    } else {
                                        votes[15] = 5;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 48.5) {
                                votes[15] = 1;
                            } else {
                                votes[15] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 7.8145668506622314) {
                if (diff_median <= 15.029474258422852) {
                    if (ss_median <= 69.5) {
                        if (systolic_area <= 24.460211753845215) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 2;
                        }
                    } else {
                        if (ss_median <= 73.5) {
                            if (systolic_area <= 25.0954532623291) {
                                if (diff_median <= 12.488958358764648) {
                                    votes[15] = 2;
                                } else {
                                    votes[15] = 2;
                                }
                            } else {
                                votes[15] = 2;
                            }
                        } else {
                            votes[15] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 23.1318359375) {
                        votes[15] = 5;
                    } else {
                        votes[15] = 2;
                    }
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 16.53900957107544) {
                        if (systolic_area <= 0.479109063744545) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 3;
                        }
                    } else {
                        if (systolic_area <= 20.80749797821045) {
                            votes[15] = 5;
                        } else {
                            votes[15] = 2;
                        }
                    }
                } else {
                    if (ss_median <= 72.5) {
                        votes[15] = 4;
                    } else {
                        votes[15] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 16
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.0038919608341529965) {
            votes[16] = 2;
        } else {
            if (rr_std <= 3.6463444232940674) {
                votes[16] = 0;
            } else {
                if (rr_std <= 69.48360824584961) {
                    votes[16] = 0;
                } else {
                    if (systolic_area <= 16.515491485595703) {
                        votes[16] = 0;
                    } else {
                        votes[16] = 2;
                    }
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 11.404314517974854) {
                if (systolic_area <= -53.2972354888916) {
                    if (ss_median <= 49.75) {
                        votes[16] = 1;
                    } else {
                        votes[16] = 1;
                    }
                } else {
                    if (rr_std <= 15.483339786529541) {
                        if (systolic_area <= -8.84978437423706) {
                            if (diff_median <= 22.077635765075684) {
                                if (rr_std <= 7.046201944351196) {
                                    votes[16] = 1;
                                } else {
                                    if (rr_std <= 12.701016426086426) {
                                        if (rr_std <= 9.928871154785156) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 13.72798490524292) {
                                            votes[16] = 1;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 12.649013996124268) {
                                    if (rr_std <= 9.665088176727295) {
                                        votes[16] = 1;
                                    } else {
                                        votes[16] = 1;
                                    }
                                } else {
                                    votes[16] = 1;
                                }
                            }
                        } else {
                            if (diff_median <= 4.056577920913696) {
                                votes[16] = 4;
                            } else {
                                if (rr_std <= 9.077995777130127) {
                                    if (diff_median <= 6.306140422821045) {
                                        votes[16] = 5;
                                    } else {
                                        if (rr_std <= 4.943553686141968) {
                                            votes[16] = 3;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 11.894649028778076) {
                                        votes[16] = 5;
                                    } else {
                                        if (systolic_area <= 4.16006326675415) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 2.4880549907684326) {
                            votes[16] = 4;
                        } else {
                            if (systolic_area <= 4.7852195501327515) {
                                if (ss_median <= 51.5) {
                                    votes[16] = 5;
                                } else {
                                    votes[16] = 1;
                                }
                            } else {
                                if (systolic_area <= 11.173145771026611) {
                                    if (systolic_area <= 10.285222053527832) {
                                        votes[16] = 1;
                                    } else {
                                        votes[16] = 1;
                                    }
                                } else {
                                    votes[16] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 20.03238868713379) {
                    if (systolic_area <= 158.4512596130371) {
                        if (rr_std <= 8.292152881622314) {
                            if (diff_median <= 12.863130569458008) {
                                if (ss_median <= 48.75) {
                                    if (rr_std <= 2.4985333681106567) {
                                        votes[16] = 1;
                                    } else {
                                        votes[16] = 5;
                                    }
                                } else {
                                    if (ss_median <= 54.75) {
                                        votes[16] = 3;
                                    } else {
                                        votes[16] = 1;
                                    }
                                }
                            } else {
                                votes[16] = 3;
                            }
                        } else {
                            if (rr_std <= 13.093090534210205) {
                                if (diff_median <= 6.252249002456665) {
                                    if (systolic_area <= 20.130587577819824) {
                                        votes[16] = 3;
                                    } else {
                                        votes[16] = 5;
                                    }
                                } else {
                                    if (ss_median <= 61.25) {
                                        if (diff_median <= 10.63816499710083) {
                                            votes[16] = 4;
                                        } else {
                                            votes[16] = 4;
                                        }
                                    } else {
                                        votes[16] = 4;
                                    }
                                }
                            } else {
                                if (systolic_area <= 22.525086402893066) {
                                    if (ss_median <= 52.25) {
                                        if (rr_std <= 19.374171257019043) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 8.885932445526123) {
                                            votes[16] = 2;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 36.462690353393555) {
                                        if (diff_median <= 2.438850164413452) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 51.0) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        votes[16] = 4;
                    }
                } else {
                    if (systolic_area <= 24.614017486572266) {
                        if (rr_std <= 11.43853235244751) {
                            if (rr_std <= 6.317869663238525) {
                                if (diff_median <= 31.319908142089844) {
                                    votes[16] = 5;
                                } else {
                                    votes[16] = 5;
                                }
                            } else {
                                if (systolic_area <= 20.797916412353516) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 3;
                                }
                            }
                        } else {
                            if (ss_median <= 44.25) {
                                votes[16] = 5;
                            } else {
                                votes[16] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 19.592864990234375) {
                            if (rr_std <= 11.493761539459229) {
                                if (diff_median <= 30.15553569793701) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 3;
                                }
                            } else {
                                votes[16] = 3;
                            }
                        } else {
                            votes[16] = 1;
                        }
                    }
                }
            }
        } else {
            if (diff_median <= 15.373574256896973) {
                if (systolic_area <= 10.700500011444092) {
                    votes[16] = 3;
                } else {
                    if (rr_std <= 12.268507480621338) {
                        if (rr_std <= 8.11551022529602) {
                            if (ss_median <= 73.5) {
                                if (diff_median <= 3.699536919593811) {
                                    votes[16] = 2;
                                } else {
                                    votes[16] = 2;
                                }
                            } else {
                                votes[16] = 2;
                            }
                        } else {
                            votes[16] = 2;
                        }
                    } else {
                        votes[16] = 4;
                    }
                }
            } else {
                if (systolic_area <= 16.544642448425293) {
                    if (systolic_area <= 12.387054920196533) {
                        votes[16] = 3;
                    } else {
                        votes[16] = 3;
                    }
                } else {
                    if (ss_median <= 68.5) {
                        votes[16] = 5;
                    } else {
                        votes[16] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 17
    if (diff_median <= 0.06383661925792694) {
        if (systolic_area <= 20.329696655273438) {
            if (rr_std <= 3.6463444232940674) {
                votes[17] = 0;
            } else {
                if (systolic_area <= 19.246849060058594) {
                    votes[17] = 0;
                } else {
                    votes[17] = 0;
                }
            }
        } else {
            if (diff_median <= 0.0067393663339316845) {
                if (rr_std <= 58.331085205078125) {
                    votes[17] = 2;
                } else {
                    votes[17] = 2;
                }
            } else {
                votes[17] = 0;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 29.419212341308594) {
                if (systolic_area <= -19.080717086791992) {
                    if (systolic_area <= -61.51252365112305) {
                        if (rr_std <= 6.5303966999053955) {
                            votes[17] = 1;
                        } else {
                            votes[17] = 1;
                        }
                    } else {
                        if (diff_median <= 21.984596252441406) {
                            if (diff_median <= 7.076894998550415) {
                                if (ss_median <= 51.75) {
                                    votes[17] = 5;
                                } else {
                                    votes[17] = 1;
                                }
                            } else {
                                if (rr_std <= 12.903181552886963) {
                                    if (systolic_area <= -36.42194366455078) {
                                        votes[17] = 3;
                                    } else {
                                        votes[17] = 3;
                                    }
                                } else {
                                    votes[17] = 5;
                                }
                            }
                        } else {
                            if (ss_median <= 49.5) {
                                if (systolic_area <= -32.86784553527832) {
                                    votes[17] = 1;
                                } else {
                                    votes[17] = 1;
                                }
                            } else {
                                votes[17] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 12.864190578460693) {
                        if (diff_median <= 10.595380306243896) {
                            if (diff_median <= 3.844951629638672) {
                                if (systolic_area <= 6.605204105377197) {
                                    votes[17] = 4;
                                } else {
                                    votes[17] = 3;
                                }
                            } else {
                                if (diff_median <= 7.620173215866089) {
                                    if (rr_std <= 3.176885724067688) {
                                        votes[17] = 4;
                                    } else {
                                        if (rr_std <= 9.253140926361084) {
                                            votes[17] = 5;
                                        } else {
                                            votes[17] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 49.75) {
                                        votes[17] = 5;
                                    } else {
                                        if (rr_std <= 9.07503366470337) {
                                            votes[17] = 1;
                                        } else {
                                            votes[17] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 45.5) {
                                if (rr_std <= 8.368998289108276) {
                                    votes[17] = 5;
                                } else {
                                    votes[17] = 3;
                                }
                            } else {
                                if (rr_std <= 6.5753960609436035) {
                                    if (diff_median <= 29.13481330871582) {
                                        votes[17] = 3;
                                    } else {
                                        votes[17] = 3;
                                    }
                                } else {
                                    if (diff_median <= 14.595852375030518) {
                                        votes[17] = 4;
                                    } else {
                                        if (rr_std <= 12.271858215332031) {
                                            votes[17] = 3;
                                        } else {
                                            votes[17] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 10.976293087005615) {
                            if (systolic_area <= 6.320777416229248) {
                                if (diff_median <= 8.225133657455444) {
                                    if (ss_median <= 47.5) {
                                        votes[17] = 1;
                                    } else {
                                        votes[17] = 4;
                                    }
                                } else {
                                    if (systolic_area <= -4.804632544517517) {
                                        votes[17] = 1;
                                    } else {
                                        votes[17] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= 10.336816787719727) {
                                    if (diff_median <= 7.470163583755493) {
                                        votes[17] = 1;
                                    } else {
                                        votes[17] = 1;
                                    }
                                } else {
                                    votes[17] = 1;
                                }
                            }
                        } else {
                            if (ss_median <= 54.25) {
                                if (diff_median <= 7.07835578918457) {
                                    if (rr_std <= 20.27008056640625) {
                                        if (systolic_area <= 17.719721794128418) {
                                            votes[17] = 5;
                                        } else {
                                            votes[17] = 2;
                                        }
                                    } else {
                                        if (systolic_area <= 23.338217735290527) {
                                            votes[17] = 1;
                                        } else {
                                            votes[17] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 44.5) {
                                        votes[17] = 5;
                                    } else {
                                        if (ss_median <= 46.75) {
                                            votes[17] = 4;
                                        } else {
                                            votes[17] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 22.22378444671631) {
                                    if (rr_std <= 15.736080646514893) {
                                        votes[17] = 4;
                                    } else {
                                        if (systolic_area <= 15.40366268157959) {
                                            votes[17] = 2;
                                        } else {
                                            votes[17] = 2;
                                        }
                                    }
                                } else {
                                    votes[17] = 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.269699096679688) {
                    if (ss_median <= 46.75) {
                        votes[17] = 3;
                    } else {
                        votes[17] = 3;
                    }
                } else {
                    if (systolic_area <= 152.45352172851562) {
                        if (systolic_area <= 44.583181381225586) {
                            if (systolic_area <= 37.32608604431152) {
                                if (systolic_area <= 33.3370246887207) {
                                    if (ss_median <= 46.5) {
                                        votes[17] = 4;
                                    } else {
                                        if (ss_median <= 57.5) {
                                            votes[17] = 4;
                                        } else {
                                            votes[17] = 4;
                                        }
                                    }
                                } else {
                                    votes[17] = 4;
                                }
                            } else {
                                votes[17] = 4;
                            }
                        } else {
                            if (ss_median <= 51.0) {
                                votes[17] = 5;
                            } else {
                                votes[17] = 1;
                            }
                        }
                    } else {
                        votes[17] = 4;
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (systolic_area <= 11.052355289459229) {
                    votes[17] = 3;
                } else {
                    if (ss_median <= 73.5) {
                        if (rr_std <= 7.877695798873901) {
                            if (diff_median <= 7.790127754211426) {
                                votes[17] = 2;
                            } else {
                                if (systolic_area <= 25.54444694519043) {
                                    if (rr_std <= 0.7774560153484344) {
                                        votes[17] = 2;
                                    } else {
                                        if (ss_median <= 68.5) {
                                            votes[17] = 2;
                                        } else {
                                            votes[17] = 5;
                                        }
                                    }
                                } else {
                                    votes[17] = 2;
                                }
                            }
                        } else {
                            votes[17] = 2;
                        }
                    } else {
                        votes[17] = 2;
                    }
                }
            } else {
                if (systolic_area <= 17.198293209075928) {
                    votes[17] = 3;
                } else {
                    if (rr_std <= 23.240489959716797) {
                        votes[17] = 4;
                    } else {
                        votes[17] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 18
    if (diff_median <= 0.08593277260661125) {
        if (diff_median <= 0.003673609346151352) {
            votes[18] = 2;
        } else {
            if (systolic_area <= 21.25664710998535) {
                if (rr_std <= 68.74835968017578) {
                    votes[18] = 0;
                } else {
                    if (rr_std <= 94.93862915039062) {
                        votes[18] = 2;
                    } else {
                        votes[18] = 0;
                    }
                }
            } else {
                votes[18] = 2;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 10.663642406463623) {
                if (systolic_area <= -47.88606834411621) {
                    if (rr_std <= 10.697364330291748) {
                        if (systolic_area <= -59.59743309020996) {
                            if (diff_median <= 13.577013969421387) {
                                votes[18] = 1;
                            } else {
                                votes[18] = 1;
                            }
                        } else {
                            votes[18] = 1;
                        }
                    } else {
                        if (systolic_area <= -54.555301666259766) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 19.549918174743652) {
                        if (diff_median <= 11.823472023010254) {
                            if (systolic_area <= -1.5611779689788818) {
                                if (systolic_area <= -24.350685119628906) {
                                    if (ss_median <= 52.75) {
                                        votes[18] = 3;
                                    } else {
                                        votes[18] = 1;
                                    }
                                } else {
                                    if (ss_median <= 48.0) {
                                        votes[18] = 5;
                                    } else {
                                        if (diff_median <= 7.0012102127075195) {
                                            votes[18] = 3;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 8.534968376159668) {
                                    if (systolic_area <= 7.905123233795166) {
                                        if (diff_median <= 4.175638198852539) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 4;
                                        }
                                    } else {
                                        votes[18] = 1;
                                    }
                                } else {
                                    if (rr_std <= 8.373974800109863) {
                                        votes[18] = 1;
                                    } else {
                                        votes[18] = 5;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= -7.603692531585693) {
                                if (diff_median <= 30.408434867858887) {
                                    if (rr_std <= 10.879225254058838) {
                                        if (diff_median <= 18.39552593231201) {
                                            votes[18] = 1;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= -34.033796310424805) {
                                            votes[18] = 1;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= -16.53373146057129) {
                                        votes[18] = 1;
                                    } else {
                                        votes[18] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 13.332080364227295) {
                                    if (ss_median <= 44.75) {
                                        votes[18] = 5;
                                    } else {
                                        if (systolic_area <= 0.36602828465402126) {
                                            votes[18] = 3;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    }
                                } else {
                                    votes[18] = 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 7.737545967102051) {
                            votes[18] = 1;
                        } else {
                            if (rr_std <= 23.31034755706787) {
                                votes[18] = 1;
                            } else {
                                votes[18] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 13.601734161376953) {
                    if (systolic_area <= 24.569621086120605) {
                        if (ss_median <= 52.25) {
                            if (systolic_area <= 18.84463119506836) {
                                if (rr_std <= 19.436803817749023) {
                                    if (rr_std <= 9.532004833221436) {
                                        votes[18] = 3;
                                    } else {
                                        if (ss_median <= 45.75) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 7.375247001647949) {
                                        votes[18] = 1;
                                    } else {
                                        votes[18] = 1;
                                    }
                                }
                            } else {
                                if (systolic_area <= 20.381061553955078) {
                                    votes[18] = 2;
                                } else {
                                    votes[18] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 13.259176254272461) {
                                if (ss_median <= 58.5) {
                                    if (systolic_area <= 19.172770500183105) {
                                        votes[18] = 5;
                                    } else {
                                        votes[18] = 2;
                                    }
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                if (diff_median <= 4.6521155834198) {
                                    votes[18] = 2;
                                } else {
                                    if (diff_median <= 9.006464004516602) {
                                        votes[18] = 2;
                                    } else {
                                        votes[18] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 9.264141082763672) {
                            if (rr_std <= 7.360839128494263) {
                                if (diff_median <= 4.8628089427948) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 2;
                                }
                            } else {
                                votes[18] = 4;
                            }
                        } else {
                            if (rr_std <= 18.442757606506348) {
                                if (diff_median <= 5.133491516113281) {
                                    votes[18] = 4;
                                } else {
                                    if (ss_median <= 47.0) {
                                        votes[18] = 4;
                                    } else {
                                        votes[18] = 4;
                                    }
                                }
                            } else {
                                if (diff_median <= 11.013386726379395) {
                                    if (systolic_area <= 153.26847076416016) {
                                        if (ss_median <= 56.0) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 4;
                                        }
                                    } else {
                                        votes[18] = 4;
                                    }
                                } else {
                                    votes[18] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 10.339225769042969) {
                        if (rr_std <= 4.118124723434448) {
                            if (rr_std <= 2.227193057537079) {
                                votes[18] = 3;
                            } else {
                                votes[18] = 5;
                            }
                        } else {
                            if (diff_median <= 15.617777347564697) {
                                votes[18] = 4;
                            } else {
                                if (diff_median <= 34.3166618347168) {
                                    if (diff_median <= 19.395115852355957) {
                                        votes[18] = 3;
                                    } else {
                                        votes[18] = 3;
                                    }
                                } else {
                                    votes[18] = 3;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 48.59086227416992) {
                            if (ss_median <= 51.75) {
                                if (ss_median <= 44.5) {
                                    votes[18] = 5;
                                } else {
                                    if (systolic_area <= 24.4233341217041) {
                                        if (diff_median <= 25.706378936767578) {
                                            votes[18] = 1;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    } else {
                                        votes[18] = 3;
                                    }
                                }
                            } else {
                                if (systolic_area <= 23.648466110229492) {
                                    if (diff_median <= 17.474430084228516) {
                                        votes[18] = 5;
                                    } else {
                                        votes[18] = 5;
                                    }
                                } else {
                                    votes[18] = 4;
                                }
                            }
                        } else {
                            votes[18] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 15.029474258422852) {
                    if (systolic_area <= 18.27181053161621) {
                        if (diff_median <= 12.538262367248535) {
                            votes[18] = 3;
                        } else {
                            votes[18] = 2;
                        }
                    } else {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 3.699536919593811) {
                                votes[18] = 2;
                            } else {
                                if (systolic_area <= 21.44721508026123) {
                                    if (systolic_area <= 20.36599063873291) {
                                        votes[18] = 2;
                                    } else {
                                        votes[18] = 2;
                                    }
                                } else {
                                    if (diff_median <= 8.093398332595825) {
                                        if (ss_median <= 72.25) {
                                            votes[18] = 2;
                                        } else {
                                            votes[18] = 2;
                                        }
                                    } else {
                                        votes[18] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[18] = 2;
                        }
                    }
                } else {
                    if (diff_median <= 21.432908058166504) {
                        votes[18] = 5;
                    } else {
                        votes[18] = 2;
                    }
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 16.598926067352295) {
                        if (diff_median <= 14.274242401123047) {
                            votes[18] = 3;
                        } else {
                            votes[18] = 3;
                        }
                    } else {
                        votes[18] = 5;
                    }
                } else {
                    votes[18] = 4;
                }
            }
        }
    }
// Decision rules for tree 19
    if (diff_median <= 0.08819644525647163) {
        if (systolic_area <= 21.375597953796387) {
            if (diff_median <= 0.00422980566509068) {
                votes[19] = 0;
            } else {
                if (rr_std <= 3.6463444232940674) {
                    votes[19] = 0;
                } else {
                    if (ss_median <= 323.75) {
                        votes[19] = 0;
                    } else {
                        votes[19] = 0;
                    }
                }
            }
        } else {
            if (diff_median <= 0.005168065428733826) {
                votes[19] = 2;
            } else {
                votes[19] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= -17.772061347961426) {
                if (systolic_area <= -73.97114944458008) {
                    votes[19] = 1;
                } else {
                    if (diff_median <= 11.250539302825928) {
                        if (ss_median <= 57.5) {
                            if (diff_median <= 5.606357097625732) {
                                votes[19] = 3;
                            } else {
                                if (rr_std <= 13.629470348358154) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 1;
                                }
                            }
                        } else {
                            votes[19] = 1;
                        }
                    } else {
                        if (rr_std <= 11.644110679626465) {
                            if (diff_median <= 33.931352615356445) {
                                if (diff_median <= 21.96800422668457) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 1;
                                }
                            } else {
                                votes[19] = 1;
                            }
                        } else {
                            if (systolic_area <= -34.033796310424805) {
                                votes[19] = 1;
                            } else {
                                votes[19] = 1;
                            }
                        }
                    }
                }
            } else {
                if (systolic_area <= 168.63604354858398) {
                    if (diff_median <= 19.83118438720703) {
                        if (rr_std <= 9.330170631408691) {
                            if (rr_std <= 7.6564671993255615) {
                                if (systolic_area <= -0.06718292832374573) {
                                    votes[19] = 5;
                                } else {
                                    if (diff_median <= 12.863130569458008) {
                                        if (rr_std <= 5.022486686706543) {
                                            votes[19] = 4;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 16.821492195129395) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 49.25) {
                                    if (rr_std <= 8.988052368164062) {
                                        votes[19] = 5;
                                    } else {
                                        votes[19] = 5;
                                    }
                                } else {
                                    votes[19] = 3;
                                }
                            }
                        } else {
                            if (systolic_area <= 22.096806526184082) {
                                if (rr_std <= 19.3992280960083) {
                                    if (rr_std <= 17.9985408782959) {
                                        if (ss_median <= 42.5) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    } else {
                                        votes[19] = 5;
                                    }
                                } else {
                                    if (rr_std <= 21.784536361694336) {
                                        if (ss_median <= 52.0) {
                                            votes[19] = 1;
                                        } else {
                                            votes[19] = 2;
                                        }
                                    } else {
                                        if (rr_std <= 38.50939178466797) {
                                            votes[19] = 1;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 41.381906509399414) {
                                    if (rr_std <= 14.695073127746582) {
                                        if (diff_median <= 15.771183490753174) {
                                            votes[19] = 4;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 58.25) {
                                            votes[19] = 4;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    }
                                } else {
                                    votes[19] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 13.88441276550293) {
                            if (rr_std <= 4.359232425689697) {
                                if (diff_median <= 27.43932819366455) {
                                    votes[19] = 3;
                                } else {
                                    votes[19] = 5;
                                }
                            } else {
                                if (diff_median <= 59.50153350830078) {
                                    if (rr_std <= 10.584284782409668) {
                                        if (ss_median <= 46.5) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        votes[19] = 3;
                                    }
                                } else {
                                    votes[19] = 5;
                                }
                            }
                        } else {
                            if (systolic_area <= 10.089647769927979) {
                                if (diff_median <= 27.921354293823242) {
                                    votes[19] = 1;
                                } else {
                                    votes[19] = 5;
                                }
                            } else {
                                if (ss_median <= 45.25) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 5;
                                }
                            }
                        }
                    }
                } else {
                    votes[19] = 4;
                }
            }
        } else {
            if (systolic_area <= 11.052355289459229) {
                if (rr_std <= 12.267175674438477) {
                    votes[19] = 3;
                } else {
                    votes[19] = 3;
                }
            } else {
                if (diff_median <= 26.720373153686523) {
                    if (rr_std <= 11.376542568206787) {
                        if (ss_median <= 73.5) {
                            if (systolic_area <= 18.27181053161621) {
                                if (systolic_area <= 15.002564907073975) {
                                    votes[19] = 2;
                                } else {
                                    votes[19] = 5;
                                }
                            } else {
                                if (systolic_area <= 20.88503074645996) {
                                    if (systolic_area <= 19.51661777496338) {
                                        votes[19] = 2;
                                    } else {
                                        votes[19] = 2;
                                    }
                                } else {
                                    votes[19] = 2;
                                }
                            }
                        } else {
                            votes[19] = 2;
                        }
                    } else {
                        if (rr_std <= 20.039289474487305) {
                            votes[19] = 3;
                        } else {
                            votes[19] = 4;
                        }
                    }
                } else {
                    votes[19] = 5;
                }
            }
        }
    }
// Decision rules for tree 20
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.0037875473499298096) {
            votes[20] = 2;
        } else {
            if (rr_std <= 3.746261239051819) {
                votes[20] = 0;
            } else {
                if (rr_std <= 69.48360824584961) {
                    votes[20] = 0;
                } else {
                    if (systolic_area <= 17.72357177734375) {
                        votes[20] = 0;
                    } else {
                        votes[20] = 2;
                    }
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= -19.080717086791992) {
                if (systolic_area <= -43.696794509887695) {
                    if (rr_std <= 10.693111896514893) {
                        if (systolic_area <= -60.45057678222656) {
                            if (systolic_area <= -90.5287094116211) {
                                votes[20] = 1;
                            } else {
                                votes[20] = 1;
                            }
                        } else {
                            votes[20] = 1;
                        }
                    } else {
                        if (ss_median <= 43.75) {
                            votes[20] = 1;
                        } else {
                            votes[20] = 1;
                        }
                    }
                } else {
                    if (systolic_area <= -29.776822090148926) {
                        if (rr_std <= 12.820993423461914) {
                            votes[20] = 1;
                        } else {
                            votes[20] = 5;
                        }
                    } else {
                        if (systolic_area <= -23.096111297607422) {
                            if (rr_std <= 10.3630051612854) {
                                votes[20] = 1;
                            } else {
                                votes[20] = 1;
                            }
                        } else {
                            votes[20] = 1;
                        }
                    }
                }
            } else {
                if (systolic_area <= 24.152539253234863) {
                    if (rr_std <= 19.45835018157959) {
                        if (rr_std <= 11.705098152160645) {
                            if (ss_median <= 47.5) {
                                if (rr_std <= 6.424622058868408) {
                                    if (rr_std <= 1.034729391336441) {
                                        votes[20] = 1;
                                    } else {
                                        votes[20] = 5;
                                    }
                                } else {
                                    if (systolic_area <= 13.911821842193604) {
                                        if (diff_median <= 11.72012710571289) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 3;
                                        }
                                    } else {
                                        votes[20] = 4;
                                    }
                                }
                            } else {
                                if (diff_median <= 4.521579265594482) {
                                    if (systolic_area <= 16.138522624969482) {
                                        votes[20] = 4;
                                    } else {
                                        votes[20] = 5;
                                    }
                                } else {
                                    if (rr_std <= 10.738845348358154) {
                                        if (diff_median <= 11.669970512390137) {
                                            votes[20] = 3;
                                        } else {
                                            votes[20] = 3;
                                        }
                                    } else {
                                        votes[20] = 4;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 6.5231239795684814) {
                                if (systolic_area <= 17.371559143066406) {
                                    votes[20] = 5;
                                } else {
                                    votes[20] = 2;
                                }
                            } else {
                                if (systolic_area <= -3.8351927995681763) {
                                    votes[20] = 1;
                                } else {
                                    if (ss_median <= 58.75) {
                                        if (ss_median <= 45.25) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 5;
                                        }
                                    } else {
                                        votes[20] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 23.18968105316162) {
                            if (ss_median <= 54.25) {
                                votes[20] = 1;
                            } else {
                                votes[20] = 2;
                            }
                        } else {
                            if (diff_median <= 2.7624759674072266) {
                                votes[20] = 4;
                            } else {
                                if (systolic_area <= 14.676288604736328) {
                                    if (rr_std <= 25.44444179534912) {
                                        votes[20] = 1;
                                    } else {
                                        votes[20] = 1;
                                    }
                                } else {
                                    votes[20] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.60568380355835) {
                        if (rr_std <= 7.360839128494263) {
                            if (ss_median <= 48.0) {
                                votes[20] = 1;
                            } else {
                                if (systolic_area <= 30.77995014190674) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 3;
                                }
                            }
                        } else {
                            votes[20] = 5;
                        }
                    } else {
                        if (diff_median <= 19.801846504211426) {
                            if (diff_median <= 2.60641348361969) {
                                if (systolic_area <= 33.59370994567871) {
                                    votes[20] = 5;
                                } else {
                                    votes[20] = 4;
                                }
                            } else {
                                if (diff_median <= 14.182851791381836) {
                                    if (diff_median <= 5.232988357543945) {
                                        if (diff_median <= 3.8640735149383545) {
                                            votes[20] = 4;
                                        } else {
                                            votes[20] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 9.178614616394043) {
                                            votes[20] = 4;
                                        } else {
                                            votes[20] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 14.78789234161377) {
                                        votes[20] = 4;
                                    } else {
                                        votes[20] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[20] = 3;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 10.383006572723389) {
                    votes[20] = 3;
                } else {
                    if (diff_median <= 14.106964588165283) {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 3.699536919593811) {
                                votes[20] = 2;
                            } else {
                                if (diff_median <= 7.790127754211426) {
                                    votes[20] = 2;
                                } else {
                                    if (rr_std <= 0.8769984543323517) {
                                        votes[20] = 2;
                                    } else {
                                        if (rr_std <= 5.308671236038208) {
                                            votes[20] = 2;
                                        } else {
                                            votes[20] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[20] = 2;
                        }
                    } else {
                        if (ss_median <= 68.5) {
                            votes[20] = 2;
                        } else {
                            votes[20] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 18.015291213989258) {
                    if (systolic_area <= 15.711898803710938) {
                        votes[20] = 3;
                    } else {
                        votes[20] = 1;
                    }
                } else {
                    if (systolic_area <= 36.509531021118164) {
                        votes[20] = 4;
                    } else {
                        votes[20] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 21
    if (diff_median <= 0.06383661925792694) {
        if (diff_median <= 0.00422980566509068) {
            votes[21] = 2;
        } else {
            if (rr_std <= 3.746261239051819) {
                votes[21] = 2;
            } else {
                if (systolic_area <= 21.375597953796387) {
                    votes[21] = 0;
                } else {
                    votes[21] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.217223167419434) {
                if (systolic_area <= -19.21682834625244) {
                    if (systolic_area <= -62.68110466003418) {
                        if (ss_median <= 47.0) {
                            if (diff_median <= 9.839061260223389) {
                                votes[21] = 1;
                            } else {
                                votes[21] = 1;
                            }
                        } else {
                            votes[21] = 1;
                        }
                    } else {
                        if (diff_median <= 26.38028335571289) {
                            if (systolic_area <= -24.350685119628906) {
                                if (systolic_area <= -34.831899642944336) {
                                    if (rr_std <= 10.740319728851318) {
                                        votes[21] = 3;
                                    } else {
                                        if (systolic_area <= -46.1202392578125) {
                                            votes[21] = 1;
                                        } else {
                                            votes[21] = 1;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 53.5) {
                                        votes[21] = 3;
                                    } else {
                                        votes[21] = 3;
                                    }
                                }
                            } else {
                                votes[21] = 5;
                            }
                        } else {
                            if (systolic_area <= -39.31253433227539) {
                                votes[21] = 1;
                            } else {
                                votes[21] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.224630355834961) {
                        if (diff_median <= 11.83260726928711) {
                            if (rr_std <= 8.739152431488037) {
                                if (systolic_area <= 15.180115222930908) {
                                    if (ss_median <= 48.5) {
                                        if (systolic_area <= -5.363508939743042) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    } else {
                                        votes[21] = 3;
                                    }
                                } else {
                                    votes[21] = 4;
                                }
                            } else {
                                if (diff_median <= 3.6586203575134277) {
                                    votes[21] = 4;
                                } else {
                                    if (systolic_area <= -2.462451219558716) {
                                        votes[21] = 1;
                                    } else {
                                        if (diff_median <= 11.442824840545654) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 15.621636390686035) {
                                if (ss_median <= 51.75) {
                                    if (diff_median <= 15.655187129974365) {
                                        votes[21] = 3;
                                    } else {
                                        if (systolic_area <= 0.2093383278697729) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 10.31769847869873) {
                                        votes[21] = 3;
                                    } else {
                                        votes[21] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 6.030281066894531) {
                                    votes[21] = 5;
                                } else {
                                    if (ss_median <= 55.25) {
                                        votes[21] = 3;
                                    } else {
                                        votes[21] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.173145771026611) {
                            if (systolic_area <= 6.143704175949097) {
                                if (systolic_area <= -6.040329098701477) {
                                    votes[21] = 1;
                                } else {
                                    votes[21] = 5;
                                }
                            } else {
                                if (diff_median <= 13.204083919525146) {
                                    if (rr_std <= 31.31116771697998) {
                                        votes[21] = 1;
                                    } else {
                                        votes[21] = 1;
                                    }
                                } else {
                                    if (rr_std <= 23.31034755706787) {
                                        votes[21] = 1;
                                    } else {
                                        votes[21] = 1;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 52.25) {
                                if (rr_std <= 19.374171257019043) {
                                    if (diff_median <= 23.526612281799316) {
                                        if (diff_median <= 6.175150632858276) {
                                            votes[21] = 1;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    } else {
                                        votes[21] = 3;
                                    }
                                } else {
                                    if (ss_median <= 49.25) {
                                        if (rr_std <= 20.772905349731445) {
                                            votes[21] = 1;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    } else {
                                        votes[21] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 17.445046424865723) {
                                    votes[21] = 2;
                                } else {
                                    if (diff_median <= 8.086888074874878) {
                                        votes[21] = 2;
                                    } else {
                                        votes[21] = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.476897478103638) {
                    if (ss_median <= 45.25) {
                        votes[21] = 4;
                    } else {
                        if (rr_std <= 1.7204082608222961) {
                            votes[21] = 3;
                        } else {
                            if (systolic_area <= 31.90739631652832) {
                                votes[21] = 3;
                            } else {
                                votes[21] = 3;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 20.71663188934326) {
                        if (systolic_area <= 158.4512596130371) {
                            if (systolic_area <= 37.32608604431152) {
                                if (diff_median <= 2.9047257900238037) {
                                    if (systolic_area <= 27.026185989379883) {
                                        votes[21] = 4;
                                    } else {
                                        votes[21] = 5;
                                    }
                                } else {
                                    if (rr_std <= 9.590222835540771) {
                                        votes[21] = 5;
                                    } else {
                                        if (rr_std <= 12.725235939025879) {
                                            votes[21] = 4;
                                        } else {
                                            votes[21] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 50.5) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 1;
                                }
                            }
                        } else {
                            votes[21] = 4;
                        }
                    } else {
                        if (diff_median <= 32.67385959625244) {
                            votes[21] = 1;
                        } else {
                            votes[21] = 3;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 11.052355289459229) {
                    votes[21] = 3;
                } else {
                    if (diff_median <= 28.116731643676758) {
                        if (diff_median <= 14.106964588165283) {
                            if (ss_median <= 73.5) {
                                if (rr_std <= 0.8769984543323517) {
                                    votes[21] = 2;
                                } else {
                                    if (ss_median <= 69.0) {
                                        votes[21] = 2;
                                    } else {
                                        if (rr_std <= 6.1066954135894775) {
                                            votes[21] = 2;
                                        } else {
                                            votes[21] = 2;
                                        }
                                    }
                                }
                            } else {
                                votes[21] = 2;
                            }
                        } else {
                            if (systolic_area <= 23.999667167663574) {
                                votes[21] = 5;
                            } else {
                                votes[21] = 2;
                            }
                        }
                    } else {
                        votes[21] = 5;
                    }
                }
            } else {
                if (diff_median <= 8.173661470413208) {
                    if (ss_median <= 72.0) {
                        votes[21] = 4;
                    } else {
                        votes[21] = 4;
                    }
                } else {
                    votes[21] = 5;
                }
            }
        }
    }
// Decision rules for tree 22
    if (diff_median <= 0.08819644525647163) {
        if (diff_median <= 0.0037499095778912306) {
            votes[22] = 2;
        } else {
            if (systolic_area <= 22.03877353668213) {
                if (rr_std <= 3.1076996326446533) {
                    votes[22] = 0;
                } else {
                    if (rr_std <= 69.48360824584961) {
                        votes[22] = 0;
                    } else {
                        votes[22] = 0;
                    }
                }
            } else {
                votes[22] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 12.946030139923096) {
                if (systolic_area <= -54.13969612121582) {
                    if (rr_std <= 9.360803604125977) {
                        if (systolic_area <= -82.11041641235352) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 1;
                        }
                    } else {
                        if (systolic_area <= -90.5287094116211) {
                            if (diff_median <= 8.089169263839722) {
                                votes[22] = 1;
                            } else {
                                votes[22] = 1;
                            }
                        } else {
                            votes[22] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 18.63729763031006) {
                        if (rr_std <= 9.035609245300293) {
                            if (ss_median <= 47.75) {
                                if (rr_std <= 7.463140964508057) {
                                    if (systolic_area <= -8.672386169433594) {
                                        votes[22] = 1;
                                    } else {
                                        votes[22] = 5;
                                    }
                                } else {
                                    votes[22] = 3;
                                }
                            } else {
                                if (ss_median <= 57.5) {
                                    if (rr_std <= 4.475710868835449) {
                                        votes[22] = 3;
                                    } else {
                                        if (rr_std <= 6.546638250350952) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    }
                                } else {
                                    votes[22] = 1;
                                }
                            }
                        } else {
                            if (diff_median <= 3.7355529069900513) {
                                if (ss_median <= 49.25) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 3;
                                }
                            } else {
                                if (systolic_area <= -17.689661026000977) {
                                    if (diff_median <= 26.38028335571289) {
                                        if (systolic_area <= -40.22757339477539) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 12.649013996124268) {
                                            votes[22] = 1;
                                        } else {
                                            votes[22] = 1;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 45.5) {
                                        if (rr_std <= 16.120155334472656) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 15.893165588378906) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 1.5664995312690735) {
                            votes[22] = 4;
                        } else {
                            if (systolic_area <= 10.994448184967041) {
                                if (systolic_area <= 9.530542850494385) {
                                    votes[22] = 1;
                                } else {
                                    votes[22] = 1;
                                }
                            } else {
                                votes[22] = 2;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 17.71860980987549) {
                    if (rr_std <= 8.269118309020996) {
                        if (diff_median <= 7.026921510696411) {
                            if (systolic_area <= 28.88558006286621) {
                                if (systolic_area <= 20.641596794128418) {
                                    votes[22] = 5;
                                } else {
                                    votes[22] = 4;
                                }
                            } else {
                                votes[22] = 3;
                            }
                        } else {
                            if (ss_median <= 47.0) {
                                votes[22] = 1;
                            } else {
                                votes[22] = 3;
                            }
                        }
                    } else {
                        if (systolic_area <= 25.493388175964355) {
                            if (diff_median <= 7.406989812850952) {
                                if (ss_median <= 52.25) {
                                    if (rr_std <= 20.374510765075684) {
                                        if (diff_median <= 4.152303457260132) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        votes[22] = 1;
                                    }
                                } else {
                                    votes[22] = 2;
                                }
                            } else {
                                if (diff_median <= 12.780081272125244) {
                                    if (systolic_area <= 24.215235710144043) {
                                        if (ss_median <= 48.5) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 4;
                                        }
                                    } else {
                                        votes[22] = 5;
                                    }
                                } else {
                                    votes[22] = 5;
                                }
                            }
                        } else {
                            if (ss_median <= 54.75) {
                                if (systolic_area <= 152.45352172851562) {
                                    if (systolic_area <= 37.34276008605957) {
                                        if (systolic_area <= 28.576754570007324) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 4;
                                        }
                                    } else {
                                        if (systolic_area <= 50.51540184020996) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 1;
                                        }
                                    }
                                } else {
                                    votes[22] = 4;
                                }
                            } else {
                                if (diff_median <= 2.3521947860717773) {
                                    votes[22] = 4;
                                } else {
                                    if (diff_median <= 15.488175392150879) {
                                        if (ss_median <= 62.5) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 4;
                                        }
                                    } else {
                                        votes[22] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 14.222147464752197) {
                        if (ss_median <= 50.5) {
                            if (rr_std <= 6.424622058868408) {
                                votes[22] = 5;
                            } else {
                                if (ss_median <= 48.5) {
                                    votes[22] = 3;
                                } else {
                                    votes[22] = 3;
                                }
                            }
                        } else {
                            if (diff_median <= 20.717068672180176) {
                                votes[22] = 3;
                            } else {
                                if (systolic_area <= 25.48832893371582) {
                                    votes[22] = 3;
                                } else {
                                    votes[22] = 3;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 23.862062454223633) {
                            if (ss_median <= 46.5) {
                                votes[22] = 5;
                            } else {
                                votes[22] = 5;
                            }
                        } else {
                            votes[22] = 3;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 14.106964588165283) {
                    if (rr_std <= 3.989093065261841) {
                        if (rr_std <= 0.6739988029003143) {
                            if (diff_median <= 5.329592227935791) {
                                if (systolic_area <= 22.271092414855957) {
                                    votes[22] = 2;
                                } else {
                                    votes[22] = 2;
                                }
                            } else {
                                votes[22] = 2;
                            }
                        } else {
                            votes[22] = 5;
                        }
                    } else {
                        if (ss_median <= 71.0) {
                            votes[22] = 2;
                        } else {
                            votes[22] = 2;
                        }
                    }
                } else {
                    if (diff_median <= 29.57724666595459) {
                        if (diff_median <= 20.548751831054688) {
                            votes[22] = 5;
                        } else {
                            votes[22] = 2;
                        }
                    } else {
                        votes[22] = 3;
                    }
                }
            } else {
                if (systolic_area <= 19.102481842041016) {
                    if (ss_median <= 70.5) {
                        votes[22] = 3;
                    } else {
                        votes[22] = 3;
                    }
                } else {
                    votes[22] = 4;
                }
            }
        }
    }
// Decision rules for tree 23
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.0038555990904569626) {
            votes[23] = 2;
        } else {
            if (rr_std <= 4.6474363803863525) {
                votes[23] = 2;
            } else {
                if (systolic_area <= 20.357171058654785) {
                    votes[23] = 0;
                } else {
                    if (diff_median <= 0.005745056318119168) {
                        votes[23] = 2;
                    } else {
                        votes[23] = 0;
                    }
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 11.173145771026611) {
                if (rr_std <= 10.636523723602295) {
                    if (systolic_area <= -62.68110466003418) {
                        if (diff_median <= 28.597765922546387) {
                            votes[23] = 1;
                        } else {
                            votes[23] = 1;
                        }
                    } else {
                        if (diff_median <= 8.885387897491455) {
                            if (ss_median <= 51.0) {
                                if (diff_median <= 7.301320314407349) {
                                    votes[23] = 5;
                                } else {
                                    votes[23] = 5;
                                }
                            } else {
                                if (systolic_area <= -15.547069072723389) {
                                    votes[23] = 1;
                                } else {
                                    votes[23] = 4;
                                }
                            }
                        } else {
                            if (systolic_area <= -9.422815799713135) {
                                if (diff_median <= 19.69129467010498) {
                                    votes[23] = 3;
                                } else {
                                    votes[23] = 1;
                                }
                            } else {
                                if (rr_std <= 4.475710868835449) {
                                    votes[23] = 3;
                                } else {
                                    if (rr_std <= 8.96873426437378) {
                                        if (ss_median <= 54.25) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        votes[23] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (ss_median <= 42.5) {
                        votes[23] = 3;
                    } else {
                        if (systolic_area <= 6.143704175949097) {
                            if (systolic_area <= -43.930294036865234) {
                                if (systolic_area <= -54.65696334838867) {
                                    votes[23] = 1;
                                } else {
                                    votes[23] = 1;
                                }
                            } else {
                                if (diff_median <= 14.528214931488037) {
                                    if (diff_median <= 5.782172679901123) {
                                        votes[23] = 3;
                                    } else {
                                        if (systolic_area <= -2.5843297243118286) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 11.484323024749756) {
                                        votes[23] = 5;
                                    } else {
                                        if (ss_median <= 51.5) {
                                            votes[23] = 1;
                                        } else {
                                            votes[23] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 6.136274099349976) {
                                votes[23] = 1;
                            } else {
                                votes[23] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.276857376098633) {
                    if (systolic_area <= 47.83042907714844) {
                        if (diff_median <= 3.528975248336792) {
                            votes[23] = 5;
                        } else {
                            if (diff_median <= 27.001953125) {
                                if (diff_median <= 8.167348384857178) {
                                    votes[23] = 3;
                                } else {
                                    votes[23] = 3;
                                }
                            } else {
                                votes[23] = 3;
                            }
                        }
                    } else {
                        votes[23] = 1;
                    }
                } else {
                    if (systolic_area <= 23.372864723205566) {
                        if (rr_std <= 19.294036865234375) {
                            if (diff_median <= 6.559003591537476) {
                                if (systolic_area <= 17.371559143066406) {
                                    votes[23] = 3;
                                } else {
                                    if (systolic_area <= 21.684224128723145) {
                                        votes[23] = 2;
                                    } else {
                                        votes[23] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 13.507455825805664) {
                                    if (diff_median <= 23.531136512756348) {
                                        if (ss_median <= 54.75) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    } else {
                                        votes[23] = 3;
                                    }
                                } else {
                                    if (systolic_area <= 16.9628324508667) {
                                        votes[23] = 5;
                                    } else {
                                        votes[23] = 5;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 51.75) {
                                if (systolic_area <= 16.590295791625977) {
                                    votes[23] = 1;
                                } else {
                                    votes[23] = 1;
                                }
                            } else {
                                if (systolic_area <= 12.677558422088623) {
                                    votes[23] = 2;
                                } else {
                                    votes[23] = 2;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 15.738138675689697) {
                            if (systolic_area <= 154.10076141357422) {
                                if (systolic_area <= 40.77180480957031) {
                                    if (diff_median <= 10.989593982696533) {
                                        if (rr_std <= 15.211248874664307) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 15.194559574127197) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    }
                                } else {
                                    votes[23] = 1;
                                }
                            } else {
                                votes[23] = 4;
                            }
                        } else {
                            if (rr_std <= 17.868330001831055) {
                                if (rr_std <= 10.523756980895996) {
                                    votes[23] = 3;
                                } else {
                                    if (ss_median <= 53.0) {
                                        votes[23] = 5;
                                    } else {
                                        votes[23] = 4;
                                    }
                                }
                            } else {
                                votes[23] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (systolic_area <= 18.93103313446045) {
                    if (systolic_area <= 11.052355289459229) {
                        votes[23] = 3;
                    } else {
                        if (diff_median <= 13.707107067108154) {
                            votes[23] = 2;
                        } else {
                            if (systolic_area <= 15.881234645843506) {
                                votes[23] = 2;
                            } else {
                                votes[23] = 5;
                            }
                        }
                    }
                } else {
                    if (ss_median <= 73.5) {
                        if (systolic_area <= 21.41449546813965) {
                            if (rr_std <= 6.332443714141846) {
                                if (rr_std <= 2.237917959690094) {
                                    votes[23] = 2;
                                } else {
                                    votes[23] = 5;
                                }
                            } else {
                                if (diff_median <= 5.204066276550293) {
                                    votes[23] = 2;
                                } else {
                                    votes[23] = 2;
                                }
                            }
                        } else {
                            if (diff_median <= 14.117921829223633) {
                                if (systolic_area <= 25.0954532623291) {
                                    votes[23] = 2;
                                } else {
                                    if (systolic_area <= 25.721386909484863) {
                                        votes[23] = 2;
                                    } else {
                                        votes[23] = 2;
                                    }
                                }
                            } else {
                                votes[23] = 2;
                            }
                        }
                    } else {
                        votes[23] = 2;
                    }
                }
            } else {
                if (rr_std <= 18.9116153717041) {
                    if (systolic_area <= 16.598926067352295) {
                        votes[23] = 3;
                    } else {
                        votes[23] = 5;
                    }
                } else {
                    votes[23] = 4;
                }
            }
        }
    }
// Decision rules for tree 24
    if (diff_median <= 0.08662371709942818) {
        if (systolic_area <= 20.357171058654785) {
            if (rr_std <= 4.540418982505798) {
                votes[24] = 0;
            } else {
                if (systolic_area <= 19.20254421234131) {
                    votes[24] = 0;
                } else {
                    if (diff_median <= 0.007605610182508826) {
                        votes[24] = 0;
                    } else {
                        votes[24] = 0;
                    }
                }
            }
        } else {
            if (diff_median <= 0.0067393663339316845) {
                if (rr_std <= 73.83108520507812) {
                    votes[24] = 2;
                } else {
                    votes[24] = 2;
                }
            } else {
                votes[24] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.096806526184082) {
                if (systolic_area <= -40.22757339477539) {
                    if (diff_median <= 11.557865619659424) {
                        if (systolic_area <= -73.60319519042969) {
                            votes[24] = 1;
                        } else {
                            if (diff_median <= 5.675767660140991) {
                                votes[24] = 1;
                            } else {
                                votes[24] = 5;
                            }
                        }
                    } else {
                        if (ss_median <= 52.75) {
                            votes[24] = 1;
                        } else {
                            votes[24] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 18.785634994506836) {
                        if (diff_median <= 3.631972074508667) {
                            if (systolic_area <= 19.271531105041504) {
                                if (rr_std <= 7.730916500091553) {
                                    votes[24] = 1;
                                } else {
                                    if (diff_median <= 2.3071242570877075) {
                                        votes[24] = 1;
                                    } else {
                                        votes[24] = 4;
                                    }
                                }
                            } else {
                                votes[24] = 2;
                            }
                        } else {
                            if (rr_std <= 10.584284782409668) {
                                if (diff_median <= 8.630780220031738) {
                                    if (diff_median <= 7.301320314407349) {
                                        if (ss_median <= 46.75) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    } else {
                                        votes[24] = 5;
                                    }
                                } else {
                                    if (ss_median <= 50.75) {
                                        if (diff_median <= 28.711143493652344) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 13.477707386016846) {
                                            votes[24] = 1;
                                        } else {
                                            votes[24] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 5.810624122619629) {
                                    if (ss_median <= 45.0) {
                                        votes[24] = 3;
                                    } else {
                                        votes[24] = 4;
                                    }
                                } else {
                                    if (systolic_area <= 11.404314517974854) {
                                        if (systolic_area <= 6.563209533691406) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 21.394559860229492) {
                                            votes[24] = 4;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.018815994262695) {
                            if (rr_std <= 40.59872245788574) {
                                votes[24] = 1;
                            } else {
                                votes[24] = 1;
                            }
                        } else {
                            if (ss_median <= 52.25) {
                                if (systolic_area <= 17.677271842956543) {
                                    votes[24] = 1;
                                } else {
                                    votes[24] = 5;
                                }
                            } else {
                                if (ss_median <= 58.5) {
                                    votes[24] = 2;
                                } else {
                                    votes[24] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.232347011566162) {
                    if (systolic_area <= 47.83042907714844) {
                        if (diff_median <= 12.645779609680176) {
                            votes[24] = 3;
                        } else {
                            if (rr_std <= 4.998868942260742) {
                                votes[24] = 3;
                            } else {
                                votes[24] = 3;
                            }
                        }
                    } else {
                        votes[24] = 1;
                    }
                } else {
                    if (diff_median <= 19.908303260803223) {
                        if (rr_std <= 18.07085609436035) {
                            if (ss_median <= 48.75) {
                                if (ss_median <= 46.25) {
                                    votes[24] = 4;
                                } else {
                                    votes[24] = 5;
                                }
                            } else {
                                if (systolic_area <= 25.659781455993652) {
                                    votes[24] = 4;
                                } else {
                                    if (diff_median <= 3.0756291151046753) {
                                        votes[24] = 4;
                                    } else {
                                        if (rr_std <= 10.399651527404785) {
                                            votes[24] = 4;
                                        } else {
                                            votes[24] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 25.250760078430176) {
                                if (ss_median <= 51.75) {
                                    if (systolic_area <= 32.65921592712402) {
                                        votes[24] = 4;
                                    } else {
                                        votes[24] = 5;
                                    }
                                } else {
                                    votes[24] = 1;
                                }
                            } else {
                                if (diff_median <= 1.3105708956718445) {
                                    votes[24] = 4;
                                } else {
                                    votes[24] = 4;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 27.1874361038208) {
                            votes[24] = 5;
                        } else {
                            votes[24] = 3;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (diff_median <= 13.923456192016602) {
                    if (ss_median <= 73.5) {
                        if (systolic_area <= 13.744329929351807) {
                            votes[24] = 2;
                        } else {
                            if (rr_std <= 5.984184265136719) {
                                if (rr_std <= 0.8769984543323517) {
                                    votes[24] = 2;
                                } else {
                                    if (rr_std <= 3.989093065261841) {
                                        votes[24] = 5;
                                    } else {
                                        votes[24] = 2;
                                    }
                                }
                            } else {
                                votes[24] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 4.013660192489624) {
                            votes[24] = 5;
                        } else {
                            votes[24] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 23.1318359375) {
                        if (systolic_area <= 16.544642448425293) {
                            votes[24] = 3;
                        } else {
                            votes[24] = 5;
                        }
                    } else {
                        votes[24] = 2;
                    }
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 13.042533159255981) {
                        votes[24] = 3;
                    } else {
                        votes[24] = 5;
                    }
                } else {
                    if (rr_std <= 23.967665672302246) {
                        votes[24] = 4;
                    } else {
                        votes[24] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 25
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.00422980566509068) {
            votes[25] = 2;
        } else {
            if (systolic_area <= 22.03877353668213) {
                if (diff_median <= 0.004752852488309145) {
                    votes[25] = 0;
                } else {
                    if (rr_std <= 7.44871711730957) {
                        votes[25] = 0;
                    } else {
                        votes[25] = 0;
                    }
                }
            } else {
                votes[25] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 23.46532440185547) {
                if (systolic_area <= -54.13969612121582) {
                    if (ss_median <= 43.25) {
                        votes[25] = 1;
                    } else {
                        if (ss_median <= 53.25) {
                            votes[25] = 1;
                        } else {
                            if (systolic_area <= -76.52791213989258) {
                                votes[25] = 1;
                            } else {
                                votes[25] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 19.268980026245117) {
                        if (systolic_area <= 12.762610912322998) {
                            if (ss_median <= 47.75) {
                                if (diff_median <= 8.706947803497314) {
                                    if (systolic_area <= -1.1968004703521729) {
                                        votes[25] = 5;
                                    } else {
                                        votes[25] = 4;
                                    }
                                } else {
                                    if (diff_median <= 20.696269989013672) {
                                        if (systolic_area <= -3.4529778957366943) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= -12.358781337738037) {
                                            votes[25] = 1;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= -3.1711701154708862) {
                                    if (diff_median <= 30.97249984741211) {
                                        if (systolic_area <= -9.138967990875244) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    } else {
                                        votes[25] = 1;
                                    }
                                } else {
                                    if (diff_median <= 27.294586181640625) {
                                        if (diff_median <= 4.056577920913696) {
                                            votes[25] = 4;
                                        } else {
                                            votes[25] = 3;
                                        }
                                    } else {
                                        votes[25] = 3;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 20.03238868713379) {
                                if (rr_std <= 9.338693618774414) {
                                    if (rr_std <= 7.4286322593688965) {
                                        if (diff_median <= 7.9257872104644775) {
                                            votes[25] = 4;
                                        } else {
                                            votes[25] = 3;
                                        }
                                    } else {
                                        votes[25] = 5;
                                    }
                                } else {
                                    if (diff_median <= 10.794889450073242) {
                                        if (ss_median <= 49.5) {
                                            votes[25] = 4;
                                        } else {
                                            votes[25] = 2;
                                        }
                                    } else {
                                        if (diff_median <= 13.481935977935791) {
                                            votes[25] = 4;
                                        } else {
                                            votes[25] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 14.868794918060303) {
                                    if (ss_median <= 47.25) {
                                        votes[25] = 5;
                                    } else {
                                        if (ss_median <= 56.0) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    }
                                } else {
                                    votes[25] = 5;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.007068157196045) {
                            if (diff_median <= 2.7624759674072266) {
                                votes[25] = 1;
                            } else {
                                votes[25] = 1;
                            }
                        } else {
                            if (ss_median <= 52.25) {
                                if (rr_std <= 24.618362426757812) {
                                    votes[25] = 5;
                                } else {
                                    votes[25] = 1;
                                }
                            } else {
                                if (rr_std <= 22.672801971435547) {
                                    votes[25] = 2;
                                } else {
                                    votes[25] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 15.617777347564697) {
                    if (diff_median <= 2.009783387184143) {
                        if (rr_std <= 18.472508430480957) {
                            votes[25] = 5;
                        } else {
                            votes[25] = 4;
                        }
                    } else {
                        if (rr_std <= 8.490394592285156) {
                            if (ss_median <= 49.5) {
                                votes[25] = 4;
                            } else {
                                votes[25] = 3;
                            }
                        } else {
                            if (rr_std <= 17.441914558410645) {
                                if (rr_std <= 9.372697830200195) {
                                    votes[25] = 4;
                                } else {
                                    votes[25] = 4;
                                }
                            } else {
                                if (diff_median <= 11.013386726379395) {
                                    if (ss_median <= 58.5) {
                                        if (systolic_area <= 28.77029037475586) {
                                            votes[25] = 4;
                                        } else {
                                            votes[25] = 4;
                                        }
                                    } else {
                                        votes[25] = 4;
                                    }
                                } else {
                                    votes[25] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 48.303232192993164) {
                        if (rr_std <= 10.380784511566162) {
                            if (diff_median <= 27.001953125) {
                                votes[25] = 3;
                            } else {
                                votes[25] = 3;
                            }
                        } else {
                            votes[25] = 4;
                        }
                    } else {
                        votes[25] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 9.851328372955322) {
                if (ss_median <= 73.5) {
                    if (ss_median <= 69.5) {
                        if (systolic_area <= 21.18227195739746) {
                            votes[25] = 5;
                        } else {
                            if (diff_median <= 11.70867395401001) {
                                votes[25] = 2;
                            } else {
                                votes[25] = 2;
                            }
                        }
                    } else {
                        if (diff_median <= 13.718064308166504) {
                            if (rr_std <= 6.1066954135894775) {
                                if (rr_std <= 0.8645429611206055) {
                                    if (systolic_area <= 20.396413803100586) {
                                        votes[25] = 2;
                                    } else {
                                        votes[25] = 2;
                                    }
                                } else {
                                    if (systolic_area <= 20.866644859313965) {
                                        votes[25] = 2;
                                    } else {
                                        votes[25] = 2;
                                    }
                                }
                            } else {
                                votes[25] = 2;
                            }
                        } else {
                            votes[25] = 2;
                        }
                    }
                } else {
                    if (diff_median <= 5.487807273864746) {
                        votes[25] = 2;
                    } else {
                        votes[25] = 3;
                    }
                }
            } else {
                if (systolic_area <= 19.102481842041016) {
                    votes[25] = 3;
                } else {
                    if (rr_std <= 18.028037071228027) {
                        votes[25] = 5;
                    } else {
                        votes[25] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 26
    if (diff_median <= 0.06452756375074387) {
        if (systolic_area <= 21.375597953796387) {
            if (rr_std <= 4.540418982505798) {
                votes[26] = 0;
            } else {
                if (diff_median <= 0.00422980566509068) {
                    votes[26] = 0;
                } else {
                    if (ss_median <= 318.5) {
                        votes[26] = 0;
                    } else {
                        votes[26] = 0;
                    }
                }
            }
        } else {
            if (diff_median <= 0.005888922140002251) {
                votes[26] = 2;
            } else {
                votes[26] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 25.63729190826416) {
                if (systolic_area <= -45.50829315185547) {
                    if (diff_median <= 32.14222717285156) {
                        if (rr_std <= 9.645678043365479) {
                            votes[26] = 1;
                        } else {
                            if (ss_median <= 43.75) {
                                votes[26] = 1;
                            } else {
                                votes[26] = 1;
                            }
                        }
                    } else {
                        if (systolic_area <= -78.99589538574219) {
                            votes[26] = 1;
                        } else {
                            votes[26] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 18.785634994506836) {
                        if (rr_std <= 10.411150455474854) {
                            if (ss_median <= 42.25) {
                                votes[26] = 5;
                            } else {
                                if (diff_median <= 11.669970512390137) {
                                    if (systolic_area <= 19.100869178771973) {
                                        if (rr_std <= 8.831727027893066) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 5.476656436920166) {
                                            votes[26] = 2;
                                        } else {
                                            votes[26] = 4;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 45.5) {
                                        votes[26] = 1;
                                    } else {
                                        if (systolic_area <= -11.515172004699707) {
                                            votes[26] = 1;
                                        } else {
                                            votes[26] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 3.6311562061309814) {
                                if (diff_median <= 2.4887382984161377) {
                                    votes[26] = 1;
                                } else {
                                    votes[26] = 2;
                                }
                            } else {
                                if (systolic_area <= 11.404314517974854) {
                                    if (ss_median <= 59.75) {
                                        if (ss_median <= 54.25) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 1;
                                        }
                                    } else {
                                        votes[26] = 3;
                                    }
                                } else {
                                    if (diff_median <= 15.55389928817749) {
                                        if (rr_std <= 12.609091758728027) {
                                            votes[26] = 4;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 55.25) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.173145771026611) {
                            if (systolic_area <= 4.286606967449188) {
                                votes[26] = 1;
                            } else {
                                if (systolic_area <= 8.797767639160156) {
                                    votes[26] = 1;
                                } else {
                                    if (rr_std <= 25.44444179534912) {
                                        votes[26] = 1;
                                    } else {
                                        votes[26] = 1;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 54.25) {
                                if (systolic_area <= 12.670185565948486) {
                                    votes[26] = 4;
                                } else {
                                    if (rr_std <= 20.87733554840088) {
                                        votes[26] = 1;
                                    } else {
                                        votes[26] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= 13.554576396942139) {
                                    votes[26] = 2;
                                } else {
                                    votes[26] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.360839128494263) {
                    if (rr_std <= 3.4891804456710815) {
                        if (diff_median <= 8.040194988250732) {
                            votes[26] = 4;
                        } else {
                            votes[26] = 1;
                        }
                    } else {
                        votes[26] = 3;
                    }
                } else {
                    if (diff_median <= 20.09916400909424) {
                        if (diff_median <= 1.6653368473052979) {
                            votes[26] = 5;
                        } else {
                            if (rr_std <= 17.441914558410645) {
                                if (rr_std <= 9.446590900421143) {
                                    votes[26] = 4;
                                } else {
                                    if (diff_median <= 15.730360984802246) {
                                        if (rr_std <= 10.399651527404785) {
                                            votes[26] = 4;
                                        } else {
                                            votes[26] = 4;
                                        }
                                    } else {
                                        votes[26] = 4;
                                    }
                                }
                            } else {
                                if (diff_median <= 11.828458309173584) {
                                    if (systolic_area <= 152.99007415771484) {
                                        if (systolic_area <= 35.619028091430664) {
                                            votes[26] = 4;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    } else {
                                        votes[26] = 4;
                                    }
                                } else {
                                    votes[26] = 5;
                                }
                            }
                        }
                    } else {
                        votes[26] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 13.923456192016602) {
                    if (ss_median <= 69.5) {
                        if (diff_median <= 11.907740592956543) {
                            votes[26] = 3;
                        } else {
                            votes[26] = 2;
                        }
                    } else {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 4.558678865432739) {
                                votes[26] = 2;
                            } else {
                                votes[26] = 2;
                            }
                        } else {
                            votes[26] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 25.933034896850586) {
                        if (systolic_area <= 15.881234645843506) {
                            votes[26] = 3;
                        } else {
                            votes[26] = 5;
                        }
                    } else {
                        votes[26] = 2;
                    }
                }
            } else {
                if (systolic_area <= 3.3886428624391556) {
                    votes[26] = 3;
                } else {
                    if (rr_std <= 18.028037071228027) {
                        votes[26] = 5;
                    } else {
                        votes[26] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 27
    if (diff_median <= 0.12481981888413429) {
        if (systolic_area <= 20.174599647521973) {
            if (rr_std <= 5.42728316783905) {
                votes[27] = 0;
            } else {
                if (ss_median <= 278.0) {
                    votes[27] = 0;
                } else {
                    votes[27] = 0;
                }
            }
        } else {
            if (diff_median <= 0.00593141745775938) {
                if (rr_std <= 72.96989059448242) {
                    votes[27] = 2;
                } else {
                    votes[27] = 2;
                }
            } else {
                votes[27] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 12.792227268218994) {
                if (rr_std <= 17.706470489501953) {
                    if (systolic_area <= -43.60191345214844) {
                        if (rr_std <= 9.593011379241943) {
                            if (diff_median <= 14.245126724243164) {
                                votes[27] = 5;
                            } else {
                                votes[27] = 1;
                            }
                        } else {
                            if (diff_median <= 8.410588264465332) {
                                votes[27] = 1;
                            } else {
                                if (diff_median <= 14.60413646697998) {
                                    votes[27] = 3;
                                } else {
                                    votes[27] = 1;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 10.35350227355957) {
                            if (systolic_area <= -0.3009002208709717) {
                                if (ss_median <= 48.5) {
                                    if (ss_median <= 44.75) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 5;
                                    }
                                } else {
                                    if (rr_std <= 13.265255451202393) {
                                        if (systolic_area <= -21.045372009277344) {
                                            votes[27] = 1;
                                        } else {
                                            votes[27] = 3;
                                        }
                                    } else {
                                        votes[27] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= 0.13034726679325104) {
                                    votes[27] = 4;
                                } else {
                                    if (rr_std <= 11.084041595458984) {
                                        votes[27] = 4;
                                    } else {
                                        votes[27] = 1;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= -17.567960739135742) {
                                if (ss_median <= 45.25) {
                                    votes[27] = 5;
                                } else {
                                    if (diff_median <= 15.575821876525879) {
                                        votes[27] = 1;
                                    } else {
                                        votes[27] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.937124252319336) {
                                    if (rr_std <= 4.943553686141968) {
                                        if (systolic_area <= 4.3513875007629395) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 11.823472023010254) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 3;
                                        }
                                    }
                                } else {
                                    votes[27] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 11.007068157196045) {
                        if (diff_median <= 2.5905174016952515) {
                            votes[27] = 1;
                        } else {
                            if (rr_std <= 23.18968105316162) {
                                votes[27] = 1;
                            } else {
                                votes[27] = 1;
                            }
                        }
                    } else {
                        votes[27] = 2;
                    }
                }
            } else {
                if (systolic_area <= 168.63604354858398) {
                    if (rr_std <= 12.993968486785889) {
                        if (diff_median <= 19.227325439453125) {
                            if (rr_std <= 9.263524532318115) {
                                if (diff_median <= 8.413626670837402) {
                                    if (rr_std <= 3.144254446029663) {
                                        if (rr_std <= 0.6453211009502411) {
                                            votes[27] = 1;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 51.5) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 29.107891082763672) {
                                        votes[27] = 3;
                                    } else {
                                        votes[27] = 3;
                                    }
                                }
                            } else {
                                if (systolic_area <= 22.300701141357422) {
                                    if (rr_std <= 11.57129716873169) {
                                        votes[27] = 4;
                                    } else {
                                        votes[27] = 5;
                                    }
                                } else {
                                    if (diff_median <= 9.017483234405518) {
                                        votes[27] = 4;
                                    } else {
                                        if (ss_median <= 54.5) {
                                            votes[27] = 4;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 16.223808765411377) {
                                votes[27] = 5;
                            } else {
                                if (ss_median <= 47.25) {
                                    votes[27] = 3;
                                } else {
                                    if (ss_median <= 58.25) {
                                        votes[27] = 3;
                                    } else {
                                        votes[27] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 32.66245651245117) {
                            if (systolic_area <= 22.22378444671631) {
                                if (ss_median <= 52.5) {
                                    if (diff_median <= 6.635027170181274) {
                                        if (ss_median <= 46.25) {
                                            votes[27] = 2;
                                        } else {
                                            votes[27] = 1;
                                        }
                                    } else {
                                        if (rr_std <= 19.781843185424805) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 1;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 56.5) {
                                        votes[27] = 2;
                                    } else {
                                        votes[27] = 2;
                                    }
                                }
                            } else {
                                if (systolic_area <= 48.59086227416992) {
                                    if (systolic_area <= 31.05604839324951) {
                                        if (systolic_area <= 28.26747703552246) {
                                            votes[27] = 4;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    } else {
                                        if (systolic_area <= 32.21400260925293) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    }
                                } else {
                                    votes[27] = 1;
                                }
                            }
                        } else {
                            votes[27] = 5;
                        }
                    }
                } else {
                    votes[27] = 4;
                }
            }
        } else {
            if (rr_std <= 7.8145668506622314) {
                if (rr_std <= 6.581609010696411) {
                    if (systolic_area <= 18.99691867828369) {
                        votes[27] = 5;
                    } else {
                        if (rr_std <= 0.6291683614253998) {
                            if (diff_median <= 4.558678865432739) {
                                votes[27] = 2;
                            } else {
                                if (diff_median <= 6.137179136276245) {
                                    if (systolic_area <= 22.272720336914062) {
                                        votes[27] = 2;
                                    } else {
                                        votes[27] = 2;
                                    }
                                } else {
                                    votes[27] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 3.989093065261841) {
                                votes[27] = 5;
                            } else {
                                votes[27] = 2;
                            }
                        }
                    }
                } else {
                    if (ss_median <= 69.0) {
                        votes[27] = 2;
                    } else {
                        votes[27] = 2;
                    }
                }
            } else {
                if (rr_std <= 18.216461181640625) {
                    if (systolic_area <= 16.35203218460083) {
                        votes[27] = 3;
                    } else {
                        if (systolic_area <= 20.80749797821045) {
                            votes[27] = 5;
                        } else {
                            votes[27] = 2;
                        }
                    }
                } else {
                    votes[27] = 4;
                }
            }
        }
    }
// Decision rules for tree 28
    if (diff_median <= 0.08593277260661125) {
        if (diff_median <= 0.003600010764785111) {
            votes[28] = 2;
        } else {
            if (systolic_area <= 20.366151809692383) {
                if (rr_std <= 3.6463444232940674) {
                    votes[28] = 0;
                } else {
                    votes[28] = 0;
                }
            } else {
                if (rr_std <= 27.98522663116455) {
                    votes[28] = 0;
                } else {
                    votes[28] = 2;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 12.453307151794434) {
                if (rr_std <= 10.636523723602295) {
                    if (systolic_area <= -59.59743309020996) {
                        if (diff_median <= 13.577013969421387) {
                            votes[28] = 1;
                        } else {
                            if (systolic_area <= -82.99267578125) {
                                votes[28] = 1;
                            } else {
                                votes[28] = 1;
                            }
                        }
                    } else {
                        if (ss_median <= 45.5) {
                            if (diff_median <= 15.955674648284912) {
                                if (ss_median <= 43.25) {
                                    votes[28] = 3;
                                } else {
                                    votes[28] = 5;
                                }
                            } else {
                                votes[28] = 5;
                            }
                        } else {
                            if (rr_std <= 8.971930027008057) {
                                if (ss_median <= 52.5) {
                                    if (diff_median <= 5.421900272369385) {
                                        votes[28] = 3;
                                    } else {
                                        if (rr_std <= 4.936368465423584) {
                                            votes[28] = 1;
                                        } else {
                                            votes[28] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 4.084858655929565) {
                                        votes[28] = 3;
                                    } else {
                                        votes[28] = 1;
                                    }
                                }
                            } else {
                                if (ss_median <= 49.75) {
                                    votes[28] = 4;
                                } else {
                                    if (ss_median <= 51.5) {
                                        votes[28] = 5;
                                    } else {
                                        votes[28] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= -44.02517509460449) {
                        if (ss_median <= 44.0) {
                            votes[28] = 1;
                        } else {
                            votes[28] = 1;
                        }
                    } else {
                        if (rr_std <= 18.785634994506836) {
                            if (diff_median <= 11.691644668579102) {
                                if (diff_median <= 8.522810220718384) {
                                    if (rr_std <= 13.92846965789795) {
                                        if (diff_median <= 6.5215582847595215) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 4;
                                        }
                                    } else {
                                        votes[28] = 5;
                                    }
                                } else {
                                    votes[28] = 5;
                                }
                            } else {
                                if (rr_std <= 12.055338382720947) {
                                    votes[28] = 3;
                                } else {
                                    if (ss_median <= 45.25) {
                                        votes[28] = 5;
                                    } else {
                                        if (diff_median <= 26.073749542236328) {
                                            votes[28] = 1;
                                        } else {
                                            votes[28] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 11.007068157196045) {
                                if (diff_median <= 3.4375405311584473) {
                                    votes[28] = 1;
                                } else {
                                    if (systolic_area <= 9.09326696395874) {
                                        votes[28] = 1;
                                    } else {
                                        votes[28] = 1;
                                    }
                                }
                            } else {
                                votes[28] = 2;
                            }
                        }
                    }
                }
            } else {
                if (systolic_area <= 22.217223167419434) {
                    if (diff_median <= 9.350711345672607) {
                        if (ss_median <= 52.5) {
                            if (systolic_area <= 18.637752532958984) {
                                if (ss_median <= 49.25) {
                                    if (diff_median <= 7.063426971435547) {
                                        votes[28] = 5;
                                    } else {
                                        votes[28] = 5;
                                    }
                                } else {
                                    votes[28] = 1;
                                }
                            } else {
                                votes[28] = 2;
                            }
                        } else {
                            if (diff_median <= 3.4494208097457886) {
                                votes[28] = 5;
                            } else {
                                if (ss_median <= 55.75) {
                                    votes[28] = 2;
                                } else {
                                    votes[28] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 10.653032779693604) {
                            if (ss_median <= 45.5) {
                                votes[28] = 5;
                            } else {
                                if (ss_median <= 49.5) {
                                    votes[28] = 3;
                                } else {
                                    votes[28] = 3;
                                }
                            }
                        } else {
                            if (diff_median <= 21.394559860229492) {
                                if (rr_std <= 18.788049697875977) {
                                    if (systolic_area <= 17.165529251098633) {
                                        votes[28] = 4;
                                    } else {
                                        if (ss_median <= 57.25) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    }
                                } else {
                                    votes[28] = 2;
                                }
                            } else {
                                if (diff_median <= 32.86568069458008) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.157336711883545) {
                        if (ss_median <= 47.25) {
                            votes[28] = 5;
                        } else {
                            if (systolic_area <= 26.968457221984863) {
                                votes[28] = 3;
                            } else {
                                if (rr_std <= 3.4891804456710815) {
                                    votes[28] = 3;
                                } else {
                                    votes[28] = 3;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 19.42349910736084) {
                            if (diff_median <= 1.0134779214859009) {
                                votes[28] = 5;
                            } else {
                                if (systolic_area <= 158.4512596130371) {
                                    if (systolic_area <= 44.583181381225586) {
                                        if (rr_std <= 12.663281917572021) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 4;
                                        }
                                    } else {
                                        votes[28] = 1;
                                    }
                                } else {
                                    votes[28] = 4;
                                }
                            }
                        } else {
                            if (systolic_area <= 27.1874361038208) {
                                votes[28] = 5;
                            } else {
                                if (ss_median <= 49.5) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 3;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.851328372955322) {
                if (systolic_area <= 12.253990173339844) {
                    votes[28] = 3;
                } else {
                    if (diff_median <= 26.720373153686523) {
                        if (ss_median <= 73.5) {
                            if (systolic_area <= 18.27181053161621) {
                                if (ss_median <= 71.0) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 2;
                                }
                            } else {
                                if (diff_median <= 4.148450970649719) {
                                    votes[28] = 2;
                                } else {
                                    if (systolic_area <= 25.0954532623291) {
                                        votes[28] = 2;
                                    } else {
                                        if (rr_std <= 2.524632513523102) {
                                            votes[28] = 2;
                                        } else {
                                            votes[28] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[28] = 2;
                        }
                    } else {
                        votes[28] = 3;
                    }
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 13.042533159255981) {
                        votes[28] = 3;
                    } else {
                        votes[28] = 5;
                    }
                } else {
                    if (systolic_area <= 36.509531021118164) {
                        votes[28] = 4;
                    } else {
                        votes[28] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 29
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.0037418630672618747) {
            votes[29] = 2;
        } else {
            if (systolic_area <= 21.85579776763916) {
                if (systolic_area <= 20.366151809692383) {
                    if (rr_std <= 3.6463444232940674) {
                        votes[29] = 0;
                    } else {
                        votes[29] = 0;
                    }
                } else {
                    if (diff_median <= 0.005839566234499216) {
                        votes[29] = 0;
                    } else {
                        votes[29] = 0;
                    }
                }
            } else {
                votes[29] = 2;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 23.372864723205566) {
                if (systolic_area <= -48.81073760986328) {
                    if (systolic_area <= -53.2972354888916) {
                        if (ss_median <= 46.25) {
                            if (ss_median <= 42.5) {
                                votes[29] = 1;
                            } else {
                                votes[29] = 1;
                            }
                        } else {
                            if (rr_std <= 10.697364330291748) {
                                votes[29] = 1;
                            } else {
                                votes[29] = 1;
                            }
                        }
                    } else {
                        votes[29] = 1;
                    }
                } else {
                    if (rr_std <= 11.725342750549316) {
                        if (diff_median <= 3.631972074508667) {
                            if (systolic_area <= 6.605204105377197) {
                                votes[29] = 4;
                            } else {
                                votes[29] = 1;
                            }
                        } else {
                            if (systolic_area <= -19.155345916748047) {
                                if (rr_std <= 7.75895094871521) {
                                    votes[29] = 1;
                                } else {
                                    if (diff_median <= 13.538787841796875) {
                                        votes[29] = 3;
                                    } else {
                                        votes[29] = 1;
                                    }
                                }
                            } else {
                                if (diff_median <= 8.043346166610718) {
                                    if (ss_median <= 49.5) {
                                        if (diff_median <= 5.560596227645874) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 5;
                                        }
                                    } else {
                                        votes[29] = 3;
                                    }
                                } else {
                                    if (rr_std <= 9.088626861572266) {
                                        if (diff_median <= 11.164295673370361) {
                                            votes[29] = 1;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 15.736067771911621) {
                                            votes[29] = 3;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.142370700836182) {
                            if (diff_median <= 1.6893913745880127) {
                                votes[29] = 4;
                            } else {
                                if (rr_std <= 18.785634994506836) {
                                    if (diff_median <= 10.075616836547852) {
                                        if (rr_std <= 13.265255451202393) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 45.5) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 1;
                                        }
                                    }
                                } else {
                                    votes[29] = 1;
                                }
                            }
                        } else {
                            if (ss_median <= 52.25) {
                                if (diff_median <= 7.194761753082275) {
                                    if (rr_std <= 18.911542892456055) {
                                        votes[29] = 1;
                                    } else {
                                        votes[29] = 1;
                                    }
                                } else {
                                    if (systolic_area <= 15.462280750274658) {
                                        votes[29] = 1;
                                    } else {
                                        if (diff_median <= 27.12854766845703) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 9.604881763458252) {
                                    if (rr_std <= 21.677977561950684) {
                                        if (systolic_area <= 21.779264450073242) {
                                            votes[29] = 2;
                                        } else {
                                            votes[29] = 2;
                                        }
                                    } else {
                                        votes[29] = 2;
                                    }
                                } else {
                                    if (rr_std <= 19.544686317443848) {
                                        if (ss_median <= 58.75) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    } else {
                                        votes[29] = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.157336711883545) {
                    if (rr_std <= 6.777239561080933) {
                        if (rr_std <= 2.8175874948501587) {
                            votes[29] = 3;
                        } else {
                            if (ss_median <= 45.75) {
                                votes[29] = 3;
                            } else {
                                votes[29] = 1;
                            }
                        }
                    } else {
                        votes[29] = 3;
                    }
                } else {
                    if (diff_median <= 21.091751098632812) {
                        if (ss_median <= 44.75) {
                            votes[29] = 5;
                        } else {
                            if (rr_std <= 18.07085609436035) {
                                if (diff_median <= 2.8468077182769775) {
                                    votes[29] = 4;
                                } else {
                                    if (rr_std <= 9.4758620262146) {
                                        if (systolic_area <= 38.84313201904297) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 52.5) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 12.077300071716309) {
                                    if (ss_median <= 55.0) {
                                        if (ss_median <= 50.0) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    } else {
                                        votes[29] = 4;
                                    }
                                } else {
                                    votes[29] = 1;
                                }
                            }
                        }
                    } else {
                        votes[29] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 9.255946636199951) {
                if (diff_median <= 13.923456192016602) {
                    if (diff_median <= 3.5268014669418335) {
                        votes[29] = 3;
                    } else {
                        if (rr_std <= 3.989093065261841) {
                            if (rr_std <= 0.6291683614253998) {
                                if (systolic_area <= 21.213376998901367) {
                                    votes[29] = 2;
                                } else {
                                    votes[29] = 2;
                                }
                            } else {
                                votes[29] = 2;
                            }
                        } else {
                            if (ss_median <= 71.0) {
                                votes[29] = 2;
                            } else {
                                votes[29] = 2;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 25.933034896850586) {
                        if (systolic_area <= 15.881234645843506) {
                            votes[29] = 2;
                        } else {
                            votes[29] = 5;
                        }
                    } else {
                        votes[29] = 2;
                    }
                }
            } else {
                if (rr_std <= 23.967665672302246) {
                    if (ss_median <= 73.5) {
                        votes[29] = 4;
                    } else {
                        votes[29] = 5;
                    }
                } else {
                    votes[29] = 4;
                }
            }
        }
    }
// Decision rules for tree 30
    if (diff_median <= 0.12397865671664476) {
        if (diff_median <= 0.0037499095778912306) {
            votes[30] = 2;
        } else {
            if (systolic_area <= 21.25664710998535) {
                if (systolic_area <= 19.246849060058594) {
                    if (rr_std <= 7.44871711730957) {
                        votes[30] = 0;
                    } else {
                        votes[30] = 0;
                    }
                } else {
                    if (rr_std <= 21.296730995178223) {
                        votes[30] = 0;
                    } else {
                        votes[30] = 2;
                    }
                }
            } else {
                votes[30] = 0;
            }
        }
    } else {
        if (systolic_area <= 11.142370700836182) {
            if (rr_std <= 18.785634994506836) {
                if (systolic_area <= -35.01919746398926) {
                    if (diff_median <= 34.2674560546875) {
                        if (systolic_area <= -54.13969612121582) {
                            if (diff_median <= 7.926168918609619) {
                                votes[30] = 1;
                            } else {
                                votes[30] = 1;
                            }
                        } else {
                            if (systolic_area <= -37.479820251464844) {
                                if (systolic_area <= -44.670148849487305) {
                                    votes[30] = 1;
                                } else {
                                    votes[30] = 3;
                                }
                            } else {
                                votes[30] = 1;
                            }
                        }
                    } else {
                        votes[30] = 1;
                    }
                } else {
                    if (ss_median <= 58.5) {
                        if (systolic_area <= -0.06718292832374573) {
                            if (diff_median <= 30.408434867858887) {
                                if (systolic_area <= -3.286568760871887) {
                                    if (diff_median <= 22.882699966430664) {
                                        if (diff_median <= 7.571774959564209) {
                                            votes[30] = 5;
                                        } else {
                                            votes[30] = 3;
                                        }
                                    } else {
                                        votes[30] = 5;
                                    }
                                } else {
                                    votes[30] = 5;
                                }
                            } else {
                                if (systolic_area <= -11.702616691589355) {
                                    votes[30] = 1;
                                } else {
                                    votes[30] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 9.421497344970703) {
                                if (rr_std <= 4.548921823501587) {
                                    if (rr_std <= 1.3175848126411438) {
                                        votes[30] = 5;
                                    } else {
                                        votes[30] = 1;
                                    }
                                } else {
                                    if (ss_median <= 52.75) {
                                        if (rr_std <= 7.612271070480347) {
                                            votes[30] = 3;
                                        } else {
                                            votes[30] = 3;
                                        }
                                    } else {
                                        votes[30] = 3;
                                    }
                                }
                            } else {
                                if (systolic_area <= 1.2913286834955215) {
                                    votes[30] = 3;
                                } else {
                                    if (rr_std <= 11.61336612701416) {
                                        votes[30] = 1;
                                    } else {
                                        votes[30] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 67.5) {
                            if (diff_median <= 8.528518676757812) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 3;
                            }
                        } else {
                            votes[30] = 3;
                        }
                    }
                }
            } else {
                if (diff_median <= 2.5905174016952515) {
                    votes[30] = 4;
                } else {
                    votes[30] = 1;
                }
            }
        } else {
            if (rr_std <= 7.641831159591675) {
                if (ss_median <= 66.0) {
                    if (diff_median <= 12.863130569458008) {
                        if (rr_std <= 0.7748144865036011) {
                            votes[30] = 1;
                        } else {
                            if (ss_median <= 49.5) {
                                votes[30] = 4;
                            } else {
                                if (systolic_area <= 28.88558006286621) {
                                    votes[30] = 2;
                                } else {
                                    votes[30] = 3;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 27.17281436920166) {
                            votes[30] = 3;
                        } else {
                            if (diff_median <= 33.1005916595459) {
                                votes[30] = 5;
                            } else {
                                votes[30] = 3;
                            }
                        }
                    }
                } else {
                    if (ss_median <= 73.25) {
                        if (diff_median <= 14.106964588165283) {
                            if (diff_median <= 4.475214719772339) {
                                votes[30] = 2;
                            } else {
                                votes[30] = 2;
                            }
                        } else {
                            if (ss_median <= 68.5) {
                                votes[30] = 2;
                            } else {
                                votes[30] = 3;
                            }
                        }
                    } else {
                        if (diff_median <= 5.487807273864746) {
                            votes[30] = 5;
                        } else {
                            votes[30] = 5;
                        }
                    }
                }
            } else {
                if (systolic_area <= 24.152539253234863) {
                    if (diff_median <= 15.575210094451904) {
                        if (ss_median <= 52.5) {
                            if (systolic_area <= 21.201547622680664) {
                                if (systolic_area <= 18.889724731445312) {
                                    if (rr_std <= 19.781843185424805) {
                                        votes[30] = 5;
                                    } else {
                                        votes[30] = 1;
                                    }
                                } else {
                                    votes[30] = 2;
                                }
                            } else {
                                votes[30] = 5;
                            }
                        } else {
                            if (diff_median <= 11.521442413330078) {
                                if (systolic_area <= 22.1484432220459) {
                                    if (rr_std <= 13.639666080474854) {
                                        votes[30] = 2;
                                    } else {
                                        if (ss_median <= 53.75) {
                                            votes[30] = 2;
                                        } else {
                                            votes[30] = 2;
                                        }
                                    }
                                } else {
                                    votes[30] = 4;
                                }
                            } else {
                                if (rr_std <= 13.048919677734375) {
                                    votes[30] = 4;
                                } else {
                                    votes[30] = 2;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 56.25) {
                            if (ss_median <= 52.5) {
                                if (rr_std <= 14.037481307983398) {
                                    votes[30] = 5;
                                } else {
                                    if (rr_std <= 18.300344467163086) {
                                        votes[30] = 5;
                                    } else {
                                        votes[30] = 5;
                                    }
                                }
                            } else {
                                votes[30] = 3;
                            }
                        } else {
                            if (rr_std <= 12.002810001373291) {
                                votes[30] = 5;
                            } else {
                                votes[30] = 5;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 20.58396816253662) {
                        if (systolic_area <= 154.10076141357422) {
                            if (systolic_area <= 40.77180480957031) {
                                if (rr_std <= 34.79751396179199) {
                                    if (diff_median <= 5.232988357543945) {
                                        if (ss_median <= 59.0) {
                                            votes[30] = 4;
                                        } else {
                                            votes[30] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 60.25) {
                                            votes[30] = 4;
                                        } else {
                                            votes[30] = 4;
                                        }
                                    }
                                } else {
                                    votes[30] = 5;
                                }
                            } else {
                                if (rr_std <= 13.611329555511475) {
                                    votes[30] = 3;
                                } else {
                                    votes[30] = 1;
                                }
                            }
                        } else {
                            votes[30] = 4;
                        }
                    } else {
                        if (ss_median <= 50.0) {
                            votes[30] = 3;
                        } else {
                            votes[30] = 3;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 31
    if (diff_median <= 0.06383661925792694) {
        if (systolic_area <= 22.03877353668213) {
            if (diff_median <= 0.00422980566509068) {
                votes[31] = 0;
            } else {
                if (rr_std <= 3.6463444232940674) {
                    votes[31] = 0;
                } else {
                    if (diff_median <= 0.004752852488309145) {
                        votes[31] = 0;
                    } else {
                        votes[31] = 0;
                    }
                }
            }
        } else {
            if (diff_median <= 0.005787551635876298) {
                votes[31] = 2;
            } else {
                votes[31] = 0;
            }
        }
    } else {
        if (ss_median <= 69.5) {
            if (systolic_area <= 22.217223167419434) {
                if (systolic_area <= -56.16523361206055) {
                    if (diff_median <= 12.7254958152771) {
                        if (rr_std <= 8.991517066955566) {
                            votes[31] = 5;
                        } else {
                            if (ss_median <= 49.0) {
                                votes[31] = 1;
                            } else {
                                votes[31] = 1;
                            }
                        }
                    } else {
                        if (ss_median <= 51.5) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 19.374171257019043) {
                        if (rr_std <= 9.68324899673462) {
                            if (systolic_area <= 12.599205017089844) {
                                if (systolic_area <= -7.603692531585693) {
                                    if (systolic_area <= -23.9846830368042) {
                                        if (systolic_area <= -37.479820251464844) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 1;
                                        }
                                    } else {
                                        if (rr_std <= 7.267214298248291) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 11.228723526000977) {
                                        if (diff_median <= 7.352060794830322) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 56.75) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 8.400242805480957) {
                                    if (rr_std <= 2.1961761116981506) {
                                        votes[31] = 3;
                                    } else {
                                        if (ss_median <= 51.25) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    }
                                } else {
                                    votes[31] = 3;
                                }
                            }
                        } else {
                            if (systolic_area <= -8.50260066986084) {
                                if (diff_median <= 26.38028335571289) {
                                    if (systolic_area <= -15.453108310699463) {
                                        if (systolic_area <= -24.949822425842285) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    } else {
                                        votes[31] = 3;
                                    }
                                } else {
                                    if (ss_median <= 49.0) {
                                        votes[31] = 1;
                                    } else {
                                        votes[31] = 1;
                                    }
                                }
                            } else {
                                if (diff_median <= 5.599015235900879) {
                                    if (systolic_area <= 17.702170848846436) {
                                        if (rr_std <= 11.603694438934326) {
                                            votes[31] = 4;
                                        } else {
                                            votes[31] = 4;
                                        }
                                    } else {
                                        votes[31] = 2;
                                    }
                                } else {
                                    if (ss_median <= 54.75) {
                                        if (ss_median <= 45.25) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 11.823113441467285) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 23.18968105316162) {
                            if (ss_median <= 52.25) {
                                votes[31] = 1;
                            } else {
                                votes[31] = 2;
                            }
                        } else {
                            if (ss_median <= 48.75) {
                                votes[31] = 1;
                            } else {
                                if (systolic_area <= 13.537516117095947) {
                                    votes[31] = 1;
                                } else {
                                    votes[31] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.232347011566162) {
                    if (ss_median <= 66.5) {
                        if (diff_median <= 12.863130569458008) {
                            if (systolic_area <= 27.633392333984375) {
                                votes[31] = 2;
                            } else {
                                if (diff_median <= 4.8628089427948) {
                                    votes[31] = 3;
                                } else {
                                    votes[31] = 1;
                                }
                            }
                        } else {
                            if (systolic_area <= 31.759879112243652) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 3;
                            }
                        }
                    } else {
                        votes[31] = 2;
                    }
                } else {
                    if (systolic_area <= 158.4512596130371) {
                        if (systolic_area <= 40.77180480957031) {
                            if (diff_median <= 19.908303260803223) {
                                if (diff_median <= 10.490712642669678) {
                                    if (rr_std <= 14.46856164932251) {
                                        if (systolic_area <= 32.75374412536621) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 53.0) {
                                            votes[31] = 4;
                                        } else {
                                            votes[31] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.542770862579346) {
                                        if (ss_median <= 51.5) {
                                            votes[31] = 4;
                                        } else {
                                            votes[31] = 4;
                                        }
                                    } else {
                                        votes[31] = 4;
                                    }
                                }
                            } else {
                                votes[31] = 5;
                            }
                        } else {
                            if (diff_median <= 12.266858100891113) {
                                votes[31] = 5;
                            } else {
                                votes[31] = 1;
                            }
                        }
                    } else {
                        votes[31] = 4;
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (ss_median <= 73.25) {
                    if (ss_median <= 72.75) {
                        if (rr_std <= 0.7485185265541077) {
                            votes[31] = 2;
                        } else {
                            if (rr_std <= 6.472100734710693) {
                                votes[31] = 2;
                            } else {
                                if (rr_std <= 7.364767074584961) {
                                    votes[31] = 2;
                                } else {
                                    votes[31] = 2;
                                }
                            }
                        }
                    } else {
                        votes[31] = 2;
                    }
                } else {
                    votes[31] = 5;
                }
            } else {
                if (diff_median <= 5.402752876281738) {
                    votes[31] = 4;
                } else {
                    votes[31] = 3;
                }
            }
        }
    }
// Decision rules for tree 32
    if (diff_median <= 0.06452756375074387) {
        if (rr_std <= 5.930903315544128) {
            if (rr_std <= 0.6127603054046631) {
                votes[32] = 0;
            } else {
                votes[32] = 2;
            }
        } else {
            if (diff_median <= 0.003920551971532404) {
                votes[32] = 2;
            } else {
                if (systolic_area <= 19.246849060058594) {
                    votes[32] = 0;
                } else {
                    if (diff_median <= 0.005838251672685146) {
                        votes[32] = 2;
                    } else {
                        votes[32] = 0;
                    }
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.192455291748047) {
                if (systolic_area <= -14.925512790679932) {
                    if (systolic_area <= -61.51252365112305) {
                        if (ss_median <= 53.0) {
                            votes[32] = 1;
                        } else {
                            votes[32] = 1;
                        }
                    } else {
                        if (diff_median <= 15.380794048309326) {
                            if (ss_median <= 57.5) {
                                if (systolic_area <= -31.57961082458496) {
                                    if (rr_std <= 12.742114543914795) {
                                        votes[32] = 3;
                                    } else {
                                        votes[32] = 1;
                                    }
                                } else {
                                    votes[32] = 5;
                                }
                            } else {
                                votes[32] = 1;
                            }
                        } else {
                            if (rr_std <= 15.030885219573975) {
                                if (ss_median <= 44.5) {
                                    votes[32] = 1;
                                } else {
                                    if (systolic_area <= -43.43947982788086) {
                                        votes[32] = 1;
                                    } else {
                                        votes[32] = 1;
                                    }
                                }
                            } else {
                                votes[32] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 14.112596988677979) {
                        if (rr_std <= 9.035609245300293) {
                            if (ss_median <= 43.25) {
                                votes[32] = 5;
                            } else {
                                if (rr_std <= 4.15678858757019) {
                                    if (systolic_area <= 18.371185302734375) {
                                        if (rr_std <= 2.0082648396492004) {
                                            votes[32] = 1;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    } else {
                                        votes[32] = 5;
                                    }
                                } else {
                                    if (ss_median <= 56.75) {
                                        if (diff_median <= 7.83401346206665) {
                                            votes[32] = 3;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    } else {
                                        votes[32] = 3;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 19.819133758544922) {
                                if (diff_median <= 9.937163829803467) {
                                    if (diff_median <= 3.6917550563812256) {
                                        votes[32] = 4;
                                    } else {
                                        if (diff_median <= 7.748905420303345) {
                                            votes[32] = 3;
                                        } else {
                                            votes[32] = 4;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 3.8973151445388794) {
                                        votes[32] = 5;
                                    } else {
                                        if (systolic_area <= 17.165529251098633) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 11.264288425445557) {
                                    votes[32] = 3;
                                } else {
                                    if (systolic_area <= 13.982482433319092) {
                                        votes[32] = 1;
                                    } else {
                                        votes[32] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 24.618362426757812) {
                            if (diff_median <= 22.41316509246826) {
                                if (systolic_area <= 10.096288204193115) {
                                    if (systolic_area <= 4.7852195501327515) {
                                        votes[32] = 4;
                                    } else {
                                        votes[32] = 1;
                                    }
                                } else {
                                    if (ss_median <= 51.75) {
                                        if (systolic_area <= 15.052411079406738) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 19.187249183654785) {
                                            votes[32] = 2;
                                        } else {
                                            votes[32] = 2;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 13.910544395446777) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 5;
                                }
                            }
                        } else {
                            if (systolic_area <= 4.286606967449188) {
                                votes[32] = 4;
                            } else {
                                if (systolic_area <= 12.792227268218994) {
                                    if (systolic_area <= 8.705747127532959) {
                                        votes[32] = 1;
                                    } else {
                                        votes[32] = 1;
                                    }
                                } else {
                                    votes[32] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.157336711883545) {
                    if (ss_median <= 49.5) {
                        votes[32] = 3;
                    } else {
                        if (rr_std <= 2.9104737043380737) {
                            votes[32] = 3;
                        } else {
                            votes[32] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 15.771183490753174) {
                        if (diff_median <= 1.1716999411582947) {
                            votes[32] = 5;
                        } else {
                            if (systolic_area <= 152.45352172851562) {
                                if (systolic_area <= 42.12773513793945) {
                                    if (diff_median <= 10.52086591720581) {
                                        if (rr_std <= 25.250760078430176) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 14.93792724609375) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 4;
                                        }
                                    }
                                } else {
                                    votes[32] = 1;
                                }
                            } else {
                                votes[32] = 4;
                            }
                        }
                    } else {
                        if (ss_median <= 56.75) {
                            if (rr_std <= 14.00282907485962) {
                                votes[32] = 3;
                            } else {
                                votes[32] = 5;
                            }
                        } else {
                            votes[32] = 5;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 28.116731643676758) {
                    if (systolic_area <= 18.27181053161621) {
                        if (rr_std <= 5.254403471946716) {
                            votes[32] = 5;
                        } else {
                            votes[32] = 2;
                        }
                    } else {
                        if (ss_median <= 73.5) {
                            if (ss_median <= 69.0) {
                                if (diff_median <= 11.838449001312256) {
                                    votes[32] = 3;
                                } else {
                                    votes[32] = 2;
                                }
                            } else {
                                if (systolic_area <= 22.84284019470215) {
                                    votes[32] = 2;
                                } else {
                                    if (ss_median <= 72.25) {
                                        if (systolic_area <= 26.20392417907715) {
                                            votes[32] = 2;
                                        } else {
                                            votes[32] = 2;
                                        }
                                    } else {
                                        votes[32] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[32] = 5;
                        }
                    }
                } else {
                    votes[32] = 5;
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 11.184860944747925) {
                        votes[32] = 3;
                    } else {
                        votes[32] = 5;
                    }
                } else {
                    votes[32] = 4;
                }
            }
        }
    }
// Decision rules for tree 33
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.0038555990904569626) {
            if (rr_std <= 72.96989059448242) {
                votes[33] = 2;
            } else {
                votes[33] = 2;
            }
        } else {
            if (systolic_area <= 21.995909690856934) {
                if (rr_std <= 3.6463444232940674) {
                    votes[33] = 0;
                } else {
                    votes[33] = 0;
                }
            } else {
                votes[33] = 2;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 25.548306465148926) {
                if (systolic_area <= -34.15885925292969) {
                    if (systolic_area <= -61.51252365112305) {
                        if (ss_median <= 53.0) {
                            votes[33] = 1;
                        } else {
                            votes[33] = 1;
                        }
                    } else {
                        if (diff_median <= 11.736502647399902) {
                            votes[33] = 5;
                        } else {
                            if (rr_std <= 10.214478015899658) {
                                votes[33] = 1;
                            } else {
                                if (systolic_area <= -42.97615051269531) {
                                    votes[33] = 1;
                                } else {
                                    votes[33] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 19.374171257019043) {
                        if (rr_std <= 12.993968486785889) {
                            if (diff_median <= 10.006297588348389) {
                                if (systolic_area <= 15.03227710723877) {
                                    if (systolic_area <= 6.605204105377197) {
                                        if (rr_std <= 10.343780994415283) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 4;
                                        }
                                    } else {
                                        if (diff_median <= 4.382633686065674) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 4;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 19.496585845947266) {
                                        votes[33] = 5;
                                    } else {
                                        votes[33] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= -18.737648010253906) {
                                    votes[33] = 1;
                                } else {
                                    if (ss_median <= 45.5) {
                                        if (diff_median <= 16.7262282371521) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 55.5) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 4.820056438446045) {
                                if (systolic_area <= 16.626325130462646) {
                                    votes[33] = 3;
                                } else {
                                    if (diff_median <= 2.7958524227142334) {
                                        votes[33] = 1;
                                    } else {
                                        votes[33] = 2;
                                    }
                                }
                            } else {
                                if (systolic_area <= 11.923816680908203) {
                                    if (systolic_area <= -15.292733669281006) {
                                        votes[33] = 5;
                                    } else {
                                        if (ss_median <= 47.0) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 9.754359722137451) {
                                        if (systolic_area <= 16.24037265777588) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 2;
                                        }
                                    } else {
                                        if (systolic_area <= 21.87869167327881) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.173145771026611) {
                            if (rr_std <= 38.487619400024414) {
                                if (diff_median <= 12.831462383270264) {
                                    votes[33] = 1;
                                } else {
                                    votes[33] = 1;
                                }
                            } else {
                                votes[33] = 1;
                            }
                        } else {
                            if (ss_median <= 52.25) {
                                if (ss_median <= 48.5) {
                                    if (rr_std <= 21.192991256713867) {
                                        votes[33] = 1;
                                    } else {
                                        votes[33] = 5;
                                    }
                                } else {
                                    votes[33] = 1;
                                }
                            } else {
                                if (rr_std <= 24.21732234954834) {
                                    votes[33] = 2;
                                } else {
                                    votes[33] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 21.211217880249023) {
                    if (rr_std <= 8.069496870040894) {
                        if (rr_std <= 3.7885241508483887) {
                            votes[33] = 1;
                        } else {
                            votes[33] = 3;
                        }
                    } else {
                        if (diff_median <= 2.3521947860717773) {
                            if (ss_median <= 51.75) {
                                votes[33] = 5;
                            } else {
                                votes[33] = 4;
                            }
                        } else {
                            if (rr_std <= 8.660340309143066) {
                                votes[33] = 5;
                            } else {
                                if (rr_std <= 17.441914558410645) {
                                    if (ss_median <= 60.25) {
                                        if (ss_median <= 47.25) {
                                            votes[33] = 4;
                                        } else {
                                            votes[33] = 4;
                                        }
                                    } else {
                                        votes[33] = 4;
                                    }
                                } else {
                                    if (diff_median <= 11.417816162109375) {
                                        if (rr_std <= 21.888712882995605) {
                                            votes[33] = 4;
                                        } else {
                                            votes[33] = 4;
                                        }
                                    } else {
                                        votes[33] = 1;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (ss_median <= 49.5) {
                        votes[33] = 5;
                    } else {
                        votes[33] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (diff_median <= 15.029474258422852) {
                    if (systolic_area <= 13.744329929351807) {
                        votes[33] = 2;
                    } else {
                        if (diff_median <= 7.730715036392212) {
                            votes[33] = 2;
                        } else {
                            if (systolic_area <= 25.54444694519043) {
                                if (rr_std <= 0.5596264451742172) {
                                    votes[33] = 2;
                                } else {
                                    if (rr_std <= 5.232545018196106) {
                                        votes[33] = 5;
                                    } else {
                                        votes[33] = 2;
                                    }
                                }
                            } else {
                                votes[33] = 2;
                            }
                        }
                    }
                } else {
                    if (ss_median <= 68.5) {
                        votes[33] = 2;
                    } else {
                        votes[33] = 5;
                    }
                }
            } else {
                if (diff_median <= 5.356563091278076) {
                    votes[33] = 4;
                } else {
                    if (diff_median <= 23.43253803253174) {
                        if (diff_median <= 12.249501705169678) {
                            votes[33] = 3;
                        } else {
                            votes[33] = 3;
                        }
                    } else {
                        votes[33] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 34
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.003711247118189931) {
            votes[34] = 2;
        } else {
            if (rr_std <= 69.48360824584961) {
                if (rr_std <= 3.6463444232940674) {
                    votes[34] = 0;
                } else {
                    votes[34] = 0;
                }
            } else {
                if (systolic_area <= 16.47189426422119) {
                    votes[34] = 0;
                } else {
                    votes[34] = 2;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 20.970788955688477) {
                if (rr_std <= 19.178707122802734) {
                    if (systolic_area <= -53.2972354888916) {
                        if (ss_median <= 43.25) {
                            votes[34] = 1;
                        } else {
                            if (rr_std <= 7.091002941131592) {
                                votes[34] = 1;
                            } else {
                                if (ss_median <= 52.0) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 11.736538887023926) {
                            if (diff_median <= 8.437533855438232) {
                                if (diff_median <= 5.665926694869995) {
                                    if (rr_std <= 0.7241657376289368) {
                                        votes[34] = 5;
                                    } else {
                                        if (rr_std <= 6.982797145843506) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 4;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 7.556870460510254) {
                                        votes[34] = 5;
                                    } else {
                                        votes[34] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= -16.535932540893555) {
                                    if (systolic_area <= -35.37757110595703) {
                                        votes[34] = 3;
                                    } else {
                                        votes[34] = 5;
                                    }
                                } else {
                                    if (diff_median <= 19.766789436340332) {
                                        if (rr_std <= 8.2166166305542) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 47.75) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 5.2630720138549805) {
                                if (diff_median <= 2.3312108516693115) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 2;
                                }
                            } else {
                                if (systolic_area <= 10.096288204193115) {
                                    if (diff_median <= 10.088179111480713) {
                                        if (diff_median <= 8.605127811431885) {
                                            votes[34] = 5;
                                        } else {
                                            votes[34] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 14.850534915924072) {
                                            votes[34] = 1;
                                        } else {
                                            votes[34] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 13.084068298339844) {
                                        votes[34] = 4;
                                    } else {
                                        if (ss_median <= 52.5) {
                                            votes[34] = 5;
                                        } else {
                                            votes[34] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 11.173145771026611) {
                        if (diff_median <= 4.192545175552368) {
                            votes[34] = 1;
                        } else {
                            if (systolic_area <= 9.602065563201904) {
                                votes[34] = 1;
                            } else {
                                votes[34] = 1;
                            }
                        }
                    } else {
                        if (ss_median <= 52.25) {
                            if (ss_median <= 45.5) {
                                votes[34] = 2;
                            } else {
                                if (diff_median <= 7.960466623306274) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 1;
                                }
                            }
                        } else {
                            if (diff_median <= 9.006464004516602) {
                                votes[34] = 2;
                            } else {
                                votes[34] = 2;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 15.617777347564697) {
                    if (rr_std <= 7.276857376098633) {
                        if (rr_std <= 3.4161651134490967) {
                            if (ss_median <= 49.5) {
                                votes[34] = 4;
                            } else {
                                votes[34] = 3;
                            }
                        } else {
                            votes[34] = 3;
                        }
                    } else {
                        if (systolic_area <= 154.10076141357422) {
                            if (diff_median <= 11.190632820129395) {
                                if (rr_std <= 25.250760078430176) {
                                    if (systolic_area <= 22.16498851776123) {
                                        votes[34] = 1;
                                    } else {
                                        if (ss_median <= 49.25) {
                                            votes[34] = 5;
                                        } else {
                                            votes[34] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 31.41448974609375) {
                                        votes[34] = 4;
                                    } else {
                                        votes[34] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 15.05748701095581) {
                                    votes[34] = 4;
                                } else {
                                    votes[34] = 1;
                                }
                            }
                        } else {
                            votes[34] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 10.301344871520996) {
                        if (diff_median <= 31.37512493133545) {
                            if (systolic_area <= 23.85715961456299) {
                                votes[34] = 3;
                            } else {
                                votes[34] = 3;
                            }
                        } else {
                            votes[34] = 3;
                        }
                    } else {
                        if (ss_median <= 52.5) {
                            if (diff_median <= 32.1051664352417) {
                                if (ss_median <= 47.25) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 1;
                                }
                            } else {
                                votes[34] = 3;
                            }
                        } else {
                            votes[34] = 5;
                        }
                    }
                }
            }
        } else {
            if (systolic_area <= 10.383006572723389) {
                if (systolic_area <= -0.12264911830425262) {
                    votes[34] = 3;
                } else {
                    votes[34] = 3;
                }
            } else {
                if (rr_std <= 7.592450380325317) {
                    if (diff_median <= 14.106964588165283) {
                        if (systolic_area <= 17.960288047790527) {
                            votes[34] = 2;
                        } else {
                            if (ss_median <= 69.0) {
                                if (rr_std <= 3.921442985534668) {
                                    votes[34] = 2;
                                } else {
                                    votes[34] = 2;
                                }
                            } else {
                                votes[34] = 2;
                            }
                        }
                    } else {
                        if (systolic_area <= 20.953869819641113) {
                            votes[34] = 5;
                        } else {
                            votes[34] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 21.08693790435791) {
                        votes[34] = 5;
                    } else {
                        if (rr_std <= 10.45276403427124) {
                            votes[34] = 2;
                        } else {
                            votes[34] = 4;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 35
    if (diff_median <= 0.08750550076365471) {
        if (diff_median <= 0.0038555990904569626) {
            votes[35] = 2;
        } else {
            if (systolic_area <= 20.366151809692383) {
                if (rr_std <= 4.533208608627319) {
                    votes[35] = 0;
                } else {
                    if (ss_median <= 323.75) {
                        votes[35] = 0;
                    } else {
                        votes[35] = 0;
                    }
                }
            } else {
                if (diff_median <= 0.006756441667675972) {
                    votes[35] = 2;
                } else {
                    votes[35] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 12.453307151794434) {
                if (rr_std <= 12.734662532806396) {
                    if (systolic_area <= -59.59743309020996) {
                        if (systolic_area <= -73.60319519042969) {
                            if (rr_std <= 10.501756191253662) {
                                votes[35] = 1;
                            } else {
                                votes[35] = 1;
                            }
                        } else {
                            votes[35] = 1;
                        }
                    } else {
                        if (systolic_area <= -0.19486644864082336) {
                            if (diff_median <= 26.851755142211914) {
                                if (diff_median <= 8.525029182434082) {
                                    if (ss_median <= 51.0) {
                                        if (ss_median <= 45.75) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 5;
                                        }
                                    } else {
                                        votes[35] = 1;
                                    }
                                } else {
                                    if (diff_median <= 11.27247953414917) {
                                        votes[35] = 3;
                                    } else {
                                        if (systolic_area <= -21.513656616210938) {
                                            votes[35] = 1;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= -40.104244232177734) {
                                    votes[35] = 5;
                                } else {
                                    votes[35] = 1;
                                }
                            }
                        } else {
                            if (diff_median <= 11.823472023010254) {
                                if (rr_std <= 8.876294612884521) {
                                    if (rr_std <= 1.5467408299446106) {
                                        votes[35] = 4;
                                    } else {
                                        votes[35] = 3;
                                    }
                                } else {
                                    if (diff_median <= 8.256934642791748) {
                                        votes[35] = 4;
                                    } else {
                                        votes[35] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 4.586677551269531) {
                                    votes[35] = 3;
                                } else {
                                    votes[35] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (diff_median <= 2.233708620071411) {
                        votes[35] = 4;
                    } else {
                        if (rr_std <= 21.784536361694336) {
                            if (systolic_area <= -43.89724922180176) {
                                votes[35] = 1;
                            } else {
                                if (systolic_area <= -30.37808322906494) {
                                    votes[35] = 5;
                                } else {
                                    if (rr_std <= 18.622946739196777) {
                                        if (ss_median <= 45.75) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 1;
                                        }
                                    } else {
                                        votes[35] = 2;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 20.406360626220703) {
                                votes[35] = 1;
                            } else {
                                votes[35] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 15.098052024841309) {
                    if (rr_std <= 9.338693618774414) {
                        if (diff_median <= 4.423946380615234) {
                            if (ss_median <= 50.75) {
                                votes[35] = 5;
                            } else {
                                votes[35] = 3;
                            }
                        } else {
                            if (rr_std <= 1.4795408844947815) {
                                votes[35] = 3;
                            } else {
                                if (diff_median <= 5.353146314620972) {
                                    votes[35] = 3;
                                } else {
                                    if (ss_median <= 44.75) {
                                        votes[35] = 5;
                                    } else {
                                        if (diff_median <= 7.823406457901001) {
                                            votes[35] = 4;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 21.78153133392334) {
                            if (rr_std <= 13.566091060638428) {
                                if (diff_median <= 11.028599262237549) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 4;
                                }
                            } else {
                                if (ss_median <= 54.5) {
                                    if (systolic_area <= 18.637752532958984) {
                                        if (rr_std <= 19.374171257019043) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 1;
                                        }
                                    } else {
                                        votes[35] = 2;
                                    }
                                } else {
                                    votes[35] = 2;
                                }
                            }
                        } else {
                            if (systolic_area <= 152.45352172851562) {
                                if (systolic_area <= 41.45831108093262) {
                                    if (diff_median <= 10.490712642669678) {
                                        if (rr_std <= 14.46856164932251) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 15.542770862579346) {
                                            votes[35] = 4;
                                        } else {
                                            votes[35] = 4;
                                        }
                                    }
                                } else {
                                    votes[35] = 1;
                                }
                            } else {
                                votes[35] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.027570247650146) {
                        if (systolic_area <= 23.85715961456299) {
                            if (systolic_area <= 20.152962684631348) {
                                if (rr_std <= 7.379254102706909) {
                                    votes[35] = 3;
                                } else {
                                    votes[35] = 5;
                                }
                            } else {
                                if (ss_median <= 56.5) {
                                    votes[35] = 5;
                                } else {
                                    votes[35] = 5;
                                }
                            }
                        } else {
                            if (systolic_area <= 33.37071990966797) {
                                if (ss_median <= 51.25) {
                                    votes[35] = 3;
                                } else {
                                    votes[35] = 3;
                                }
                            } else {
                                votes[35] = 5;
                            }
                        }
                    } else {
                        if (ss_median <= 45.5) {
                            votes[35] = 5;
                        } else {
                            if (systolic_area <= 25.081371307373047) {
                                votes[35] = 5;
                            } else {
                                votes[35] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 11.052355289459229) {
                    votes[35] = 3;
                } else {
                    if (diff_median <= 15.029474258422852) {
                        if (diff_median <= 3.4289755821228027) {
                            votes[35] = 2;
                        } else {
                            if (ss_median <= 73.5) {
                                if (diff_median <= 9.235647678375244) {
                                    votes[35] = 2;
                                } else {
                                    if (systolic_area <= 23.517669677734375) {
                                        if (systolic_area <= 17.19606876373291) {
                                            votes[35] = 2;
                                        } else {
                                            votes[35] = 2;
                                        }
                                    } else {
                                        votes[35] = 2;
                                    }
                                }
                            } else {
                                votes[35] = 5;
                            }
                        }
                    } else {
                        if (ss_median <= 68.5) {
                            votes[35] = 2;
                        } else {
                            votes[35] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 18.216461181640625) {
                    if (systolic_area <= 16.598926067352295) {
                        votes[35] = 3;
                    } else {
                        votes[35] = 5;
                    }
                } else {
                    if (ss_median <= 72.5) {
                        votes[35] = 4;
                    } else {
                        votes[35] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 36
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.0037875473499298096) {
            votes[36] = 2;
        } else {
            if (systolic_area <= 20.357171058654785) {
                if (rr_std <= 3.1076996326446533) {
                    votes[36] = 0;
                } else {
                    votes[36] = 0;
                }
            } else {
                if (diff_median <= 0.0067393663339316845) {
                    votes[36] = 2;
                } else {
                    votes[36] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.217223167419434) {
                if (systolic_area <= -53.2972354888916) {
                    if (ss_median <= 43.25) {
                        votes[36] = 1;
                    } else {
                        if (ss_median <= 53.25) {
                            if (rr_std <= 7.67237663269043) {
                                votes[36] = 1;
                            } else {
                                votes[36] = 1;
                            }
                        } else {
                            votes[36] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 19.196358680725098) {
                        if (systolic_area <= 14.845122814178467) {
                            if (diff_median <= 8.161988735198975) {
                                if (systolic_area <= -3.7133142948150635) {
                                    if (ss_median <= 51.5) {
                                        if (rr_std <= 10.294933319091797) {
                                            votes[36] = 5;
                                        } else {
                                            votes[36] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= -35.860849380493164) {
                                            votes[36] = 1;
                                        } else {
                                            votes[36] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 7.905123233795166) {
                                        if (diff_median <= 6.2024149894714355) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    } else {
                                        votes[36] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 10.584284782409668) {
                                    if (ss_median <= 44.75) {
                                        if (diff_median <= 19.710583686828613) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= -9.249878406524658) {
                                            votes[36] = 1;
                                        } else {
                                            votes[36] = 3;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 20.113384246826172) {
                                        if (diff_median <= 15.407427787780762) {
                                            votes[36] = 5;
                                        } else {
                                            votes[36] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 13.926182746887207) {
                                            votes[36] = 1;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 6.863666772842407) {
                                if (rr_std <= 9.686380863189697) {
                                    votes[36] = 5;
                                } else {
                                    if (rr_std <= 14.891377449035645) {
                                        votes[36] = 2;
                                    } else {
                                        votes[36] = 2;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.148530960083008) {
                                    if (systolic_area <= 18.082847595214844) {
                                        votes[36] = 5;
                                    } else {
                                        if (systolic_area <= 20.84960174560547) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 29.681139945983887) {
                                        votes[36] = 5;
                                    } else {
                                        votes[36] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 21.71491527557373) {
                            if (systolic_area <= 11.356832504272461) {
                                votes[36] = 1;
                            } else {
                                if (systolic_area <= 15.094753742218018) {
                                    votes[36] = 2;
                                } else {
                                    votes[36] = 2;
                                }
                            }
                        } else {
                            if (systolic_area <= 4.286606967449188) {
                                votes[36] = 4;
                            } else {
                                if (systolic_area <= 13.871681690216064) {
                                    if (rr_std <= 24.606310844421387) {
                                        votes[36] = 1;
                                    } else {
                                        if (ss_median <= 48.75) {
                                            votes[36] = 1;
                                        } else {
                                            votes[36] = 1;
                                        }
                                    }
                                } else {
                                    votes[36] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 15.48922872543335) {
                    if (rr_std <= 7.276857376098633) {
                        if (ss_median <= 59.0) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        if (diff_median <= 5.4172680377960205) {
                            if (rr_std <= 10.554633140563965) {
                                votes[36] = 5;
                            } else {
                                if (diff_median <= 2.569055438041687) {
                                    if (rr_std <= 18.730175018310547) {
                                        votes[36] = 5;
                                    } else {
                                        if (systolic_area <= 28.550652503967285) {
                                            votes[36] = 5;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 50.5) {
                                        votes[36] = 4;
                                    } else {
                                        votes[36] = 4;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 62.5) {
                                if (rr_std <= 15.542770862579346) {
                                    if (ss_median <= 52.5) {
                                        if (ss_median <= 45.75) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    } else {
                                        votes[36] = 4;
                                    }
                                } else {
                                    if (diff_median <= 11.084267616271973) {
                                        if (rr_std <= 30.073304176330566) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    } else {
                                        votes[36] = 4;
                                    }
                                }
                            } else {
                                votes[36] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.130495071411133) {
                        if (rr_std <= 6.968400001525879) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        if (rr_std <= 18.507460594177246) {
                            votes[36] = 5;
                        } else {
                            votes[36] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 18.93103313446045) {
                    if (systolic_area <= 16.213388442993164) {
                        if (diff_median <= 13.523598670959473) {
                            votes[36] = 2;
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        votes[36] = 5;
                    }
                } else {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 17.421164989471436) {
                            if (ss_median <= 69.0) {
                                if (diff_median <= 11.585002899169922) {
                                    votes[36] = 2;
                                } else {
                                    votes[36] = 2;
                                }
                            } else {
                                if (systolic_area <= 20.053691864013672) {
                                    votes[36] = 2;
                                } else {
                                    if (diff_median <= 9.184192180633545) {
                                        votes[36] = 2;
                                    } else {
                                        if (rr_std <= 7.418236255645752) {
                                            votes[36] = 2;
                                        } else {
                                            votes[36] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[36] = 2;
                        }
                    } else {
                        votes[36] = 5;
                    }
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 7.325525999069214) {
                        votes[36] = 4;
                    } else {
                        votes[36] = 3;
                    }
                } else {
                    votes[36] = 4;
                }
            }
        }
    }
// Decision rules for tree 37
    if (diff_median <= 0.06383661925792694) {
        if (systolic_area <= 22.086158752441406) {
            if (systolic_area <= 19.970345497131348) {
                if (ss_median <= 323.75) {
                    if (rr_std <= 6.05823278427124) {
                        votes[37] = 0;
                    } else {
                        votes[37] = 0;
                    }
                } else {
                    votes[37] = 0;
                }
            } else {
                if (diff_median <= 0.005993089638650417) {
                    votes[37] = 2;
                } else {
                    votes[37] = 0;
                }
            }
        } else {
            votes[37] = 2;
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.098475456237793) {
                if (systolic_area <= -43.696794509887695) {
                    if (diff_median <= 12.7254958152771) {
                        if (diff_median <= 8.266197919845581) {
                            if (rr_std <= 9.593011379241943) {
                                votes[37] = 5;
                            } else {
                                votes[37] = 1;
                            }
                        } else {
                            votes[37] = 3;
                        }
                    } else {
                        if (ss_median <= 52.75) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 19.196358680725098) {
                        if (diff_median <= 3.6861249208450317) {
                            if (systolic_area <= 6.829069137573242) {
                                if (systolic_area <= -9.39627456665039) {
                                    votes[37] = 5;
                                } else {
                                    if (rr_std <= 11.603694438934326) {
                                        votes[37] = 4;
                                    } else {
                                        votes[37] = 4;
                                    }
                                }
                            } else {
                                if (diff_median <= 2.1972814798355103) {
                                    votes[37] = 5;
                                } else {
                                    votes[37] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 12.807982921600342) {
                                if (systolic_area <= -21.36056613922119) {
                                    if (ss_median <= 52.5) {
                                        votes[37] = 5;
                                    } else {
                                        votes[37] = 1;
                                    }
                                } else {
                                    if (ss_median <= 45.5) {
                                        if (rr_std <= 6.424622058868408) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 7.948843240737915) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 10.006983757019043) {
                                    if (systolic_area <= 6.143704175949097) {
                                        if (systolic_area <= -15.321630001068115) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 3;
                                        }
                                    } else {
                                        votes[37] = 1;
                                    }
                                } else {
                                    if (rr_std <= 13.084068298339844) {
                                        votes[37] = 4;
                                    } else {
                                        if (diff_median <= 7.263902902603149) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.007068157196045) {
                            if (systolic_area <= 6.806321859359741) {
                                votes[37] = 1;
                            } else {
                                if (rr_std <= 24.98412799835205) {
                                    votes[37] = 1;
                                } else {
                                    votes[37] = 1;
                                }
                            }
                        } else {
                            if (ss_median <= 52.25) {
                                if (rr_std <= 24.618362426757812) {
                                    votes[37] = 4;
                                } else {
                                    votes[37] = 1;
                                }
                            } else {
                                if (rr_std <= 21.34589958190918) {
                                    votes[37] = 2;
                                } else {
                                    votes[37] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 15.694425582885742) {
                    if (rr_std <= 9.372697830200195) {
                        if (systolic_area <= 27.924766540527344) {
                            votes[37] = 5;
                        } else {
                            if (rr_std <= 8.232347011566162) {
                                if (rr_std <= 3.4891804456710815) {
                                    votes[37] = 1;
                                } else {
                                    votes[37] = 3;
                                }
                            } else {
                                votes[37] = 4;
                            }
                        }
                    } else {
                        if (systolic_area <= 152.3210906982422) {
                            if (systolic_area <= 38.498992919921875) {
                                if (diff_median <= 8.7264723777771) {
                                    if (rr_std <= 23.532206535339355) {
                                        if (rr_std <= 13.952385902404785) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 34.60811233520508) {
                                            votes[37] = 4;
                                        } else {
                                            votes[37] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.542770862579346) {
                                        votes[37] = 4;
                                    } else {
                                        votes[37] = 4;
                                    }
                                }
                            } else {
                                votes[37] = 5;
                            }
                        } else {
                            votes[37] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 13.193801879882812) {
                        if (systolic_area <= 27.08452796936035) {
                            votes[37] = 5;
                        } else {
                            if (systolic_area <= 32.303932189941406) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 3;
                            }
                        }
                    } else {
                        if (systolic_area <= 40.56397247314453) {
                            votes[37] = 5;
                        } else {
                            votes[37] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (diff_median <= 13.923456192016602) {
                    if (systolic_area <= 13.744329929351807) {
                        votes[37] = 2;
                    } else {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 9.235647678375244) {
                                votes[37] = 2;
                            } else {
                                if (systolic_area <= 23.517669677734375) {
                                    if (rr_std <= 1.7426346987485886) {
                                        votes[37] = 2;
                                    } else {
                                        votes[37] = 2;
                                    }
                                } else {
                                    votes[37] = 2;
                                }
                            }
                        } else {
                            votes[37] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 25.425678253173828) {
                        if (rr_std <= 5.915534734725952) {
                            votes[37] = 3;
                        } else {
                            votes[37] = 5;
                        }
                    } else {
                        votes[37] = 2;
                    }
                }
            } else {
                if (rr_std <= 18.216461181640625) {
                    if (ss_median <= 72.5) {
                        votes[37] = 3;
                    } else {
                        votes[37] = 5;
                    }
                } else {
                    votes[37] = 4;
                }
            }
        }
    }
// Decision rules for tree 38
    if (diff_median <= 0.06383661925792694) {
        if (diff_median <= 0.003920551971532404) {
            votes[38] = 2;
        } else {
            if (systolic_area <= 20.366151809692383) {
                if (rr_std <= 3.6463444232940674) {
                    votes[38] = 0;
                } else {
                    if (ss_median <= 322.75) {
                        votes[38] = 0;
                    } else {
                        votes[38] = 0;
                    }
                }
            } else {
                if (diff_median <= 0.005069556646049023) {
                    votes[38] = 2;
                } else {
                    votes[38] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.217223167419434) {
                if (systolic_area <= -52.96514320373535) {
                    if (rr_std <= 7.67237663269043) {
                        votes[38] = 1;
                    } else {
                        if (ss_median <= 43.75) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 19.374171257019043) {
                        if (systolic_area <= 18.967143058776855) {
                            if (rr_std <= 10.459162712097168) {
                                if (ss_median <= 57.75) {
                                    if (diff_median <= 1.9962188601493835) {
                                        votes[38] = 4;
                                    } else {
                                        if (diff_median <= 42.40435600280762) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 5;
                                        }
                                    }
                                } else {
                                    votes[38] = 1;
                                }
                            } else {
                                if (ss_median <= 41.75) {
                                    if (systolic_area <= 0.32170623540878296) {
                                        votes[38] = 3;
                                    } else {
                                        votes[38] = 3;
                                    }
                                } else {
                                    if (systolic_area <= 12.453800201416016) {
                                        if (diff_median <= 5.782172679901123) {
                                            votes[38] = 4;
                                        } else {
                                            votes[38] = 1;
                                        }
                                    } else {
                                        if (rr_std <= 13.92793083190918) {
                                            votes[38] = 4;
                                        } else {
                                            votes[38] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 5.847273826599121) {
                                if (rr_std <= 15.489573001861572) {
                                    votes[38] = 1;
                                } else {
                                    votes[38] = 2;
                                }
                            } else {
                                if (ss_median <= 54.25) {
                                    votes[38] = 5;
                                } else {
                                    votes[38] = 4;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.173145771026611) {
                            if (systolic_area <= 4.286606967449188) {
                                votes[38] = 4;
                            } else {
                                if (ss_median <= 57.0) {
                                    if (systolic_area <= 8.286088943481445) {
                                        votes[38] = 1;
                                    } else {
                                        votes[38] = 1;
                                    }
                                } else {
                                    votes[38] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 22.672801971435547) {
                                if (ss_median <= 50.25) {
                                    votes[38] = 2;
                                } else {
                                    votes[38] = 2;
                                }
                            } else {
                                if (rr_std <= 32.94413185119629) {
                                    votes[38] = 1;
                                } else {
                                    votes[38] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.069496870040894) {
                    if (diff_median <= 12.863130569458008) {
                        if (systolic_area <= 31.879362106323242) {
                            votes[38] = 4;
                        } else {
                            votes[38] = 3;
                        }
                    } else {
                        if (rr_std <= 2.4181480407714844) {
                            votes[38] = 3;
                        } else {
                            votes[38] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 16.116446495056152) {
                        if (ss_median <= 54.75) {
                            if (systolic_area <= 152.3210906982422) {
                                if (systolic_area <= 50.51540184020996) {
                                    if (rr_std <= 9.254694938659668) {
                                        votes[38] = 5;
                                    } else {
                                        if (diff_median <= 2.258668541908264) {
                                            votes[38] = 5;
                                        } else {
                                            votes[38] = 4;
                                        }
                                    }
                                } else {
                                    votes[38] = 1;
                                }
                            } else {
                                votes[38] = 4;
                            }
                        } else {
                            if (systolic_area <= 32.21400260925293) {
                                if (systolic_area <= 29.594355583190918) {
                                    if (systolic_area <= 25.629596710205078) {
                                        if (ss_median <= 58.25) {
                                            votes[38] = 4;
                                        } else {
                                            votes[38] = 4;
                                        }
                                    } else {
                                        votes[38] = 4;
                                    }
                                } else {
                                    votes[38] = 4;
                                }
                            } else {
                                if (diff_median <= 2.4962316751480103) {
                                    votes[38] = 4;
                                } else {
                                    votes[38] = 4;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 47.25) {
                            votes[38] = 5;
                        } else {
                            if (diff_median <= 23.880175590515137) {
                                votes[38] = 4;
                            } else {
                                votes[38] = 3;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (systolic_area <= 21.14874839782715) {
                    if (ss_median <= 69.5) {
                        if (systolic_area <= 13.512225151062012) {
                            votes[38] = 3;
                        } else {
                            votes[38] = 5;
                        }
                    } else {
                        if (rr_std <= 6.304150819778442) {
                            if (systolic_area <= 18.99691867828369) {
                                votes[38] = 5;
                            } else {
                                votes[38] = 2;
                            }
                        } else {
                            if (systolic_area <= 19.718788146972656) {
                                votes[38] = 2;
                            } else {
                                votes[38] = 2;
                            }
                        }
                    }
                } else {
                    if (ss_median <= 72.75) {
                        if (diff_median <= 8.093398332595825) {
                            if (systolic_area <= 23.585951805114746) {
                                votes[38] = 2;
                            } else {
                                votes[38] = 2;
                            }
                        } else {
                            votes[38] = 2;
                        }
                    } else {
                        if (rr_std <= 3.7638041973114014) {
                            votes[38] = 2;
                        } else {
                            votes[38] = 2;
                        }
                    }
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 16.598926067352295) {
                        votes[38] = 3;
                    } else {
                        votes[38] = 5;
                    }
                } else {
                    votes[38] = 4;
                }
            }
        }
    }
// Decision rules for tree 39
    if (diff_median <= 0.06383661925792694) {
        if (systolic_area <= 22.086158752441406) {
            if (diff_median <= 0.0038919608341529965) {
                votes[39] = 2;
            } else {
                if (rr_std <= 3.1076996326446533) {
                    votes[39] = 0;
                } else {
                    if (systolic_area <= 19.246849060058594) {
                        votes[39] = 0;
                    } else {
                        if (rr_std <= 27.382890701293945) {
                            votes[39] = 0;
                        } else {
                            votes[39] = 0;
                        }
                    }
                }
            }
        } else {
            votes[39] = 2;
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.183086395263672) {
                if (systolic_area <= -34.4906120300293) {
                    if (systolic_area <= -53.2972354888916) {
                        if (diff_median <= 23.874228477478027) {
                            if (rr_std <= 12.174214839935303) {
                                if (diff_median <= 8.941139698028564) {
                                    votes[39] = 1;
                                } else {
                                    votes[39] = 3;
                                }
                            } else {
                                votes[39] = 1;
                            }
                        } else {
                            votes[39] = 1;
                        }
                    } else {
                        if (ss_median <= 44.5) {
                            votes[39] = 5;
                        } else {
                            if (diff_median <= 9.276249408721924) {
                                votes[39] = 1;
                            } else {
                                votes[39] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 21.784536361694336) {
                        if (diff_median <= 13.86250352859497) {
                            if (rr_std <= 19.42219352722168) {
                                if (diff_median <= 3.6861249208450317) {
                                    if (systolic_area <= 2.2666555047035217) {
                                        votes[39] = 4;
                                    } else {
                                        if (diff_median <= 2.5574105978012085) {
                                            votes[39] = 1;
                                        } else {
                                            votes[39] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 6.070488214492798) {
                                        if (diff_median <= 8.630780220031738) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 43.5) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 13.724849700927734) {
                                    votes[39] = 2;
                                } else {
                                    votes[39] = 2;
                                }
                            }
                        } else {
                            if (diff_median <= 59.10457229614258) {
                                if (rr_std <= 4.1421120166778564) {
                                    if (rr_std <= 3.370218515396118) {
                                        votes[39] = 3;
                                    } else {
                                        votes[39] = 5;
                                    }
                                } else {
                                    if (rr_std <= 10.584284782409668) {
                                        if (ss_median <= 50.5) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 17.735105514526367) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    }
                                }
                            } else {
                                votes[39] = 5;
                            }
                        }
                    } else {
                        if (ss_median <= 46.5) {
                            votes[39] = 4;
                        } else {
                            if (diff_median <= 13.964995861053467) {
                                votes[39] = 1;
                            } else {
                                votes[39] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 15.694425582885742) {
                    if (rr_std <= 7.360839128494263) {
                        if (ss_median <= 48.0) {
                            votes[39] = 4;
                        } else {
                            votes[39] = 3;
                        }
                    } else {
                        if (systolic_area <= 152.45352172851562) {
                            if (systolic_area <= 48.291751861572266) {
                                if (rr_std <= 9.254694938659668) {
                                    votes[39] = 5;
                                } else {
                                    if (rr_std <= 15.542770862579346) {
                                        if (diff_median <= 8.97095537185669) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 4;
                                        }
                                    } else {
                                        if (diff_median <= 11.084267616271973) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    }
                                }
                            } else {
                                votes[39] = 1;
                            }
                        } else {
                            votes[39] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 17.868330001831055) {
                        if (ss_median <= 56.75) {
                            if (ss_median <= 46.5) {
                                votes[39] = 3;
                            } else {
                                if (diff_median <= 27.262463569641113) {
                                    votes[39] = 3;
                                } else {
                                    votes[39] = 3;
                                }
                            }
                        } else {
                            votes[39] = 4;
                        }
                    } else {
                        votes[39] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 10.383006572723389) {
                    votes[39] = 3;
                } else {
                    if (diff_median <= 15.029474258422852) {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 4.148450970649719) {
                                votes[39] = 2;
                            } else {
                                if (ss_median <= 70.75) {
                                    if (systolic_area <= 21.18227195739746) {
                                        votes[39] = 2;
                                    } else {
                                        votes[39] = 2;
                                    }
                                } else {
                                    votes[39] = 2;
                                }
                            }
                        } else {
                            votes[39] = 2;
                        }
                    } else {
                        if (ss_median <= 68.5) {
                            votes[39] = 2;
                        } else {
                            if (ss_median <= 72.25) {
                                votes[39] = 3;
                            } else {
                                votes[39] = 5;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 4.684192657470703) {
                    votes[39] = 4;
                } else {
                    if (systolic_area <= 16.849222660064697) {
                        votes[39] = 3;
                    } else {
                        votes[39] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 40
    if (diff_median <= 0.06368640158325434) {
        if (diff_median <= 0.003857266972772777) {
            votes[40] = 2;
        } else {
            if (systolic_area <= 20.366151809692383) {
                if (rr_std <= 6.05823278427124) {
                    votes[40] = 0;
                } else {
                    votes[40] = 0;
                }
            } else {
                if (diff_median <= 0.005787551635876298) {
                    votes[40] = 2;
                } else {
                    votes[40] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= -18.967034339904785) {
                if (systolic_area <= -53.2972354888916) {
                    if (ss_median <= 42.5) {
                        votes[40] = 1;
                    } else {
                        if (rr_std <= 7.67237663269043) {
                            votes[40] = 1;
                        } else {
                            if (ss_median <= 53.25) {
                                votes[40] = 1;
                            } else {
                                votes[40] = 1;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 34.46483612060547) {
                        if (ss_median <= 54.25) {
                            if (ss_median <= 42.5) {
                                votes[40] = 1;
                            } else {
                                if (ss_median <= 52.5) {
                                    if (rr_std <= 10.777099609375) {
                                        votes[40] = 5;
                                    } else {
                                        votes[40] = 1;
                                    }
                                } else {
                                    votes[40] = 5;
                                }
                            }
                        } else {
                            if (diff_median <= 8.066352605819702) {
                                votes[40] = 1;
                            } else {
                                votes[40] = 1;
                            }
                        }
                    } else {
                        votes[40] = 1;
                    }
                }
            } else {
                if (systolic_area <= 28.26747703552246) {
                    if (rr_std <= 13.598333835601807) {
                        if (diff_median <= 15.098052024841309) {
                            if (rr_std <= 9.481854915618896) {
                                if (diff_median <= 8.18467378616333) {
                                    if (diff_median <= 3.9785364866256714) {
                                        if (diff_median <= 1.475551962852478) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 2.7013559341430664) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 47.5) {
                                        votes[40] = 1;
                                    } else {
                                        if (diff_median <= 11.237809181213379) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 42.5) {
                                    votes[40] = 3;
                                } else {
                                    if (diff_median <= 9.818779945373535) {
                                        if (systolic_area <= 11.934298038482666) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= 14.931149005889893) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 28.176077842712402) {
                                if (systolic_area <= 3.5045145750045776) {
                                    if (rr_std <= 8.328199625015259) {
                                        votes[40] = 5;
                                    } else {
                                        if (ss_median <= 49.0) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 7.675936222076416) {
                                        votes[40] = 3;
                                    } else {
                                        if (ss_median <= 54.25) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 47.75) {
                                    votes[40] = 5;
                                } else {
                                    if (systolic_area <= 20.57919979095459) {
                                        if (ss_median <= 52.0) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 3;
                                        }
                                    } else {
                                        votes[40] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.142370700836182) {
                            if (systolic_area <= 6.143704175949097) {
                                if (rr_std <= 21.743202209472656) {
                                    if (rr_std <= 14.728163719177246) {
                                        votes[40] = 1;
                                    } else {
                                        votes[40] = 5;
                                    }
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                if (rr_std <= 34.81440734863281) {
                                    if (ss_median <= 56.0) {
                                        votes[40] = 1;
                                    } else {
                                        votes[40] = 1;
                                    }
                                } else {
                                    votes[40] = 1;
                                }
                            }
                        } else {
                            if (diff_median <= 16.34682846069336) {
                                if (systolic_area <= 22.217223167419434) {
                                    if (rr_std <= 22.672801971435547) {
                                        if (ss_median <= 50.5) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 2;
                                        }
                                    } else {
                                        votes[40] = 1;
                                    }
                                } else {
                                    if (ss_median <= 50.75) {
                                        votes[40] = 5;
                                    } else {
                                        votes[40] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 19.856986045837402) {
                                    if (rr_std <= 17.613435745239258) {
                                        votes[40] = 5;
                                    } else {
                                        votes[40] = 5;
                                    }
                                } else {
                                    votes[40] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.113635540008545) {
                        if (rr_std <= 3.255552649497986) {
                            votes[40] = 1;
                        } else {
                            if (diff_median <= 7.746871709823608) {
                                votes[40] = 3;
                            } else {
                                if (systolic_area <= 38.060550689697266) {
                                    votes[40] = 3;
                                } else {
                                    votes[40] = 3;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 14.175132274627686) {
                            if (rr_std <= 19.156033515930176) {
                                votes[40] = 4;
                            } else {
                                if (rr_std <= 22.613826751708984) {
                                    votes[40] = 4;
                                } else {
                                    if (systolic_area <= 35.24962615966797) {
                                        votes[40] = 4;
                                    } else {
                                        votes[40] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 13.758605003356934) {
                                votes[40] = 4;
                            } else {
                                votes[40] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (diff_median <= 15.373574256896973) {
                    if (systolic_area <= 10.700500011444092) {
                        votes[40] = 3;
                    } else {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 4.156393885612488) {
                                votes[40] = 2;
                            } else {
                                if (rr_std <= 3.6961541175842285) {
                                    if (rr_std <= 0.6057857573032379) {
                                        votes[40] = 2;
                                    } else {
                                        votes[40] = 2;
                                    }
                                } else {
                                    votes[40] = 2;
                                }
                            }
                        } else {
                            votes[40] = 2;
                        }
                    }
                } else {
                    if (diff_median <= 26.720373153686523) {
                        votes[40] = 5;
                    } else {
                        votes[40] = 3;
                    }
                }
            } else {
                if (systolic_area <= 16.849222660064697) {
                    votes[40] = 3;
                } else {
                    if (rr_std <= 18.028037071228027) {
                        votes[40] = 5;
                    } else {
                        votes[40] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 41
    if (diff_median <= 0.06383661925792694) {
        if (diff_median <= 0.0038555990904569626) {
            votes[41] = 2;
        } else {
            if (systolic_area <= 21.223060607910156) {
                if (rr_std <= 3.6463444232940674) {
                    votes[41] = 0;
                } else {
                    if (systolic_area <= 20.387378692626953) {
                        votes[41] = 0;
                    } else {
                        votes[41] = 0;
                    }
                }
            } else {
                votes[41] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 13.14919137954712) {
                if (rr_std <= 18.785634994506836) {
                    if (systolic_area <= -17.772061347961426) {
                        if (systolic_area <= -53.2972354888916) {
                            if (diff_median <= 6.228287696838379) {
                                votes[41] = 1;
                            } else {
                                if (diff_median <= 14.692852020263672) {
                                    votes[41] = 3;
                                } else {
                                    if (ss_median <= 50.0) {
                                        votes[41] = 1;
                                    } else {
                                        votes[41] = 1;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 54.25) {
                                if (diff_median <= 27.228336334228516) {
                                    if (ss_median <= 43.5) {
                                        votes[41] = 1;
                                    } else {
                                        if (rr_std <= 10.108222484588623) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= -36.85545349121094) {
                                        votes[41] = 5;
                                    } else {
                                        votes[41] = 1;
                                    }
                                }
                            } else {
                                if (diff_median <= 8.367889404296875) {
                                    votes[41] = 1;
                                } else {
                                    votes[41] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 8.747280597686768) {
                            if (ss_median <= 47.5) {
                                if (systolic_area <= -1.8412916660308838) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 3;
                                }
                            } else {
                                if (systolic_area <= 8.272297859191895) {
                                    if (ss_median <= 56.5) {
                                        votes[41] = 3;
                                    } else {
                                        votes[41] = 3;
                                    }
                                } else {
                                    votes[41] = 1;
                                }
                            }
                        } else {
                            if (diff_median <= 5.684494495391846) {
                                if (ss_median <= 47.5) {
                                    votes[41] = 1;
                                } else {
                                    votes[41] = 4;
                                }
                            } else {
                                if (rr_std <= 16.043785572052002) {
                                    if (rr_std <= 13.926182746887207) {
                                        if (rr_std <= 12.48320198059082) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 3;
                                        }
                                    } else {
                                        votes[41] = 5;
                                    }
                                } else {
                                    if (ss_median <= 46.25) {
                                        votes[41] = 5;
                                    } else {
                                        votes[41] = 1;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 23.18968105316162) {
                        if (rr_std <= 20.1695613861084) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        if (diff_median <= 3.5174806118011475) {
                            votes[41] = 4;
                        } else {
                            if (rr_std <= 25.28000831604004) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 17.516669273376465) {
                    if (rr_std <= 7.276857376098633) {
                        if (diff_median <= 13.07077169418335) {
                            if (ss_median <= 48.5) {
                                if (diff_median <= 6.783100843429565) {
                                    votes[41] = 4;
                                } else {
                                    votes[41] = 1;
                                }
                            } else {
                                if (ss_median <= 52.0) {
                                    votes[41] = 3;
                                } else {
                                    votes[41] = 1;
                                }
                            }
                        } else {
                            votes[41] = 3;
                        }
                    } else {
                        if (systolic_area <= 23.465986251831055) {
                            if (diff_median <= 7.525371551513672) {
                                if (systolic_area <= 18.466983795166016) {
                                    if (ss_median <= 48.25) {
                                        votes[41] = 4;
                                    } else {
                                        votes[41] = 5;
                                    }
                                } else {
                                    if (rr_std <= 18.222140312194824) {
                                        if (systolic_area <= 21.206963539123535) {
                                            votes[41] = 2;
                                        } else {
                                            votes[41] = 2;
                                        }
                                    } else {
                                        votes[41] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 13.805318832397461) {
                                    if (diff_median <= 14.66086483001709) {
                                        votes[41] = 4;
                                    } else {
                                        votes[41] = 5;
                                    }
                                } else {
                                    votes[41] = 5;
                                }
                            }
                        } else {
                            if (diff_median <= 2.569055438041687) {
                                if (diff_median <= 1.3087035417556763) {
                                    votes[41] = 4;
                                } else {
                                    votes[41] = 5;
                                }
                            } else {
                                if (diff_median <= 15.730360984802246) {
                                    if (rr_std <= 9.113635540008545) {
                                        votes[41] = 4;
                                    } else {
                                        if (systolic_area <= 24.569621086120605) {
                                            votes[41] = 4;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    }
                                } else {
                                    votes[41] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (ss_median <= 47.25) {
                        if (diff_median <= 22.663501739501953) {
                            votes[41] = 4;
                        } else {
                            if (systolic_area <= 22.640302658081055) {
                                votes[41] = 5;
                            } else {
                                votes[41] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 14.706089973449707) {
                            if (systolic_area <= 23.31321907043457) {
                                if (systolic_area <= 19.90217685699463) {
                                    votes[41] = 3;
                                } else {
                                    votes[41] = 5;
                                }
                            } else {
                                votes[41] = 3;
                            }
                        } else {
                            votes[41] = 5;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.255946636199951) {
                if (diff_median <= 15.029474258422852) {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 4.387130975723267) {
                            votes[41] = 2;
                        } else {
                            if (diff_median <= 9.235647678375244) {
                                if (systolic_area <= 24.26345920562744) {
                                    votes[41] = 2;
                                } else {
                                    votes[41] = 2;
                                }
                            } else {
                                if (systolic_area <= 24.460211753845215) {
                                    if (rr_std <= 1.8109096586704254) {
                                        votes[41] = 2;
                                    } else {
                                        votes[41] = 2;
                                    }
                                } else {
                                    votes[41] = 2;
                                }
                            }
                        }
                    } else {
                        votes[41] = 3;
                    }
                } else {
                    if (ss_median <= 68.5) {
                        votes[41] = 2;
                    } else {
                        if (rr_std <= 6.144460201263428) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 5;
                        }
                    }
                }
            } else {
                if (diff_median <= 5.356563091278076) {
                    if (ss_median <= 72.5) {
                        votes[41] = 4;
                    } else {
                        votes[41] = 4;
                    }
                } else {
                    votes[41] = 3;
                }
            }
        }
    }
// Decision rules for tree 42
    if (diff_median <= 0.06452756375074387) {
        if (systolic_area <= 20.366151809692383) {
            if (rr_std <= 3.6463444232940674) {
                votes[42] = 0;
            } else {
                if (systolic_area <= 19.230298042297363) {
                    votes[42] = 0;
                } else {
                    if (rr_std <= 19.49807643890381) {
                        votes[42] = 0;
                    } else {
                        votes[42] = 0;
                    }
                }
            }
        } else {
            if (diff_median <= 0.0067393663339316845) {
                if (rr_std <= 54.5) {
                    votes[42] = 2;
                } else {
                    votes[42] = 2;
                }
            } else {
                votes[42] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 14.637353420257568) {
                if (systolic_area <= -36.0290641784668) {
                    if (rr_std <= 9.68324899673462) {
                        if (rr_std <= 8.894578456878662) {
                            if (diff_median <= 13.577013969421387) {
                                votes[42] = 5;
                            } else {
                                votes[42] = 1;
                            }
                        } else {
                            votes[42] = 5;
                        }
                    } else {
                        if (systolic_area <= -44.02517509460449) {
                            if (systolic_area <= -48.60599899291992) {
                                votes[42] = 1;
                            } else {
                                votes[42] = 1;
                            }
                        } else {
                            votes[42] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 18.63729763031006) {
                        if (rr_std <= 10.515695095062256) {
                            if (ss_median <= 45.75) {
                                if (rr_std <= 6.16004753112793) {
                                    votes[42] = 5;
                                } else {
                                    votes[42] = 3;
                                }
                            } else {
                                if (systolic_area <= -18.028316497802734) {
                                    votes[42] = 1;
                                } else {
                                    if (diff_median <= 9.178516387939453) {
                                        if (systolic_area <= 8.467079162597656) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= -9.119569301605225) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 4.421053171157837) {
                                votes[42] = 4;
                            } else {
                                if (ss_median <= 46.25) {
                                    if (systolic_area <= -6.859796524047852) {
                                        votes[42] = 3;
                                    } else {
                                        votes[42] = 5;
                                    }
                                } else {
                                    if (rr_std <= 15.2685227394104) {
                                        if (diff_median <= 30.5863618850708) {
                                            votes[42] = 5;
                                        } else {
                                            votes[42] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 52.0) {
                                            votes[42] = 1;
                                        } else {
                                            votes[42] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 2.3862524032592773) {
                            votes[42] = 4;
                        } else {
                            if (rr_std <= 23.18968105316162) {
                                if (ss_median <= 52.25) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 2;
                                }
                            } else {
                                votes[42] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.306947708129883) {
                    if (diff_median <= 7.86898398399353) {
                        if (systolic_area <= 28.16043758392334) {
                            if (ss_median <= 51.75) {
                                votes[42] = 5;
                            } else {
                                votes[42] = 2;
                            }
                        } else {
                            if (diff_median <= 5.597732305526733) {
                                votes[42] = 3;
                            } else {
                                votes[42] = 5;
                            }
                        }
                    } else {
                        if (diff_median <= 36.99075126647949) {
                            if (rr_std <= 8.238495349884033) {
                                if (diff_median <= 16.2123064994812) {
                                    votes[42] = 3;
                                } else {
                                    if (rr_std <= 5.162203311920166) {
                                        votes[42] = 3;
                                    } else {
                                        votes[42] = 3;
                                    }
                                }
                            } else {
                                votes[42] = 3;
                            }
                        } else {
                            votes[42] = 5;
                        }
                    }
                } else {
                    if (diff_median <= 20.28665065765381) {
                        if (systolic_area <= 22.525086402893066) {
                            if (diff_median <= 6.951852321624756) {
                                if (systolic_area <= 19.616929054260254) {
                                    votes[42] = 1;
                                } else {
                                    if (diff_median <= 2.9972537755966187) {
                                        votes[42] = 1;
                                    } else {
                                        votes[42] = 2;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.943021774291992) {
                                    if (ss_median <= 58.0) {
                                        votes[42] = 4;
                                    } else {
                                        votes[42] = 4;
                                    }
                                } else {
                                    if (rr_std <= 19.649877548217773) {
                                        votes[42] = 5;
                                    } else {
                                        votes[42] = 2;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 2.3521947860717773) {
                                if (rr_std <= 18.472508430480957) {
                                    votes[42] = 5;
                                } else {
                                    votes[42] = 4;
                                }
                            } else {
                                if (rr_std <= 16.123345851898193) {
                                    if (systolic_area <= 25.83085536956787) {
                                        votes[42] = 4;
                                    } else {
                                        if (diff_median <= 15.859522342681885) {
                                            votes[42] = 4;
                                        } else {
                                            votes[42] = 4;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 11.828458309173584) {
                                        if (systolic_area <= 36.852840423583984) {
                                            votes[42] = 4;
                                        } else {
                                            votes[42] = 4;
                                        }
                                    } else {
                                        votes[42] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 14.037481307983398) {
                            if (diff_median <= 46.85784721374512) {
                                votes[42] = 3;
                            } else {
                                votes[42] = 5;
                            }
                        } else {
                            if (rr_std <= 17.699162483215332) {
                                votes[42] = 5;
                            } else {
                                votes[42] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 13.923456192016602) {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 4.387130975723267) {
                            votes[42] = 2;
                        } else {
                            if (diff_median <= 7.790127754211426) {
                                votes[42] = 2;
                            } else {
                                if (rr_std <= 0.8769984543323517) {
                                    if (ss_median <= 70.25) {
                                        votes[42] = 2;
                                    } else {
                                        votes[42] = 2;
                                    }
                                } else {
                                    if (rr_std <= 5.300737619400024) {
                                        votes[42] = 5;
                                    } else {
                                        if (ss_median <= 69.0) {
                                            votes[42] = 2;
                                        } else {
                                            votes[42] = 2;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        votes[42] = 2;
                    }
                } else {
                    if (systolic_area <= 25.933034896850586) {
                        if (systolic_area <= 16.854087829589844) {
                            votes[42] = 3;
                        } else {
                            votes[42] = 5;
                        }
                    } else {
                        votes[42] = 2;
                    }
                }
            } else {
                if (rr_std <= 18.028037071228027) {
                    if (systolic_area <= 13.85422658920288) {
                        votes[42] = 3;
                    } else {
                        votes[42] = 3;
                    }
                } else {
                    votes[42] = 4;
                }
            }
        }
    }
// Decision rules for tree 43
    if (diff_median <= 0.08662371709942818) {
        if (diff_median <= 0.0037499095778912306) {
            votes[43] = 2;
        } else {
            if (rr_std <= 3.746261239051819) {
                votes[43] = 0;
            } else {
                if (rr_std <= 62.60324478149414) {
                    if (systolic_area <= 21.25664710998535) {
                        votes[43] = 0;
                    } else {
                        votes[43] = 0;
                    }
                } else {
                    if (systolic_area <= 16.14561176300049) {
                        votes[43] = 0;
                    } else {
                        votes[43] = 0;
                    }
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 14.771275997161865) {
                if (systolic_area <= -53.2972354888916) {
                    if (systolic_area <= -60.44002723693848) {
                        if (systolic_area <= -90.64995193481445) {
                            if (systolic_area <= -95.11200714111328) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 1;
                            }
                        } else {
                            votes[43] = 1;
                        }
                    } else {
                        votes[43] = 1;
                    }
                } else {
                    if (rr_std <= 12.852765560150146) {
                        if (diff_median <= 4.313355326652527) {
                            if (ss_median <= 51.0) {
                                votes[43] = 4;
                            } else {
                                votes[43] = 1;
                            }
                        } else {
                            if (systolic_area <= -19.07632064819336) {
                                if (diff_median <= 19.984686851501465) {
                                    if (diff_median <= 8.285271167755127) {
                                        votes[43] = 1;
                                    } else {
                                        votes[43] = 3;
                                    }
                                } else {
                                    votes[43] = 1;
                                }
                            } else {
                                if (diff_median <= 11.228723526000977) {
                                    if (diff_median <= 6.5215582847595215) {
                                        if (diff_median <= 5.421900272369385) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 6.693103075027466) {
                                            votes[43] = 5;
                                        } else {
                                            votes[43] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 4.475710868835449) {
                                        votes[43] = 5;
                                    } else {
                                        if (rr_std <= 9.14215087890625) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 10.36304521560669) {
                            if (systolic_area <= 6.913671493530273) {
                                if (diff_median <= 8.030594110488892) {
                                    if (systolic_area <= -1.9940955638885498) {
                                        votes[43] = 3;
                                    } else {
                                        votes[43] = 4;
                                    }
                                } else {
                                    if (ss_median <= 45.5) {
                                        votes[43] = 5;
                                    } else {
                                        if (diff_median <= 21.27588653564453) {
                                            votes[43] = 1;
                                        } else {
                                            votes[43] = 1;
                                        }
                                    }
                                }
                            } else {
                                votes[43] = 1;
                            }
                        } else {
                            if (rr_std <= 23.826075553894043) {
                                if (rr_std <= 19.31770420074463) {
                                    votes[43] = 5;
                                } else {
                                    votes[43] = 2;
                                }
                            } else {
                                votes[43] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 16.116446495056152) {
                    if (rr_std <= 9.166602611541748) {
                        if (diff_median <= 7.746871709823608) {
                            if (systolic_area <= 28.16043758392334) {
                                if (rr_std <= 2.35809588432312) {
                                    votes[43] = 5;
                                } else {
                                    votes[43] = 5;
                                }
                            } else {
                                if (diff_median <= 4.63588809967041) {
                                    votes[43] = 3;
                                } else {
                                    votes[43] = 4;
                                }
                            }
                        } else {
                            if (ss_median <= 50.5) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 3;
                            }
                        }
                    } else {
                        if (systolic_area <= 22.22378444671631) {
                            if (rr_std <= 13.351788997650146) {
                                if (ss_median <= 57.75) {
                                    votes[43] = 4;
                                } else {
                                    votes[43] = 5;
                                }
                            } else {
                                if (ss_median <= 52.5) {
                                    if (diff_median <= 6.966781139373779) {
                                        votes[43] = 1;
                                    } else {
                                        votes[43] = 5;
                                    }
                                } else {
                                    if (diff_median <= 4.989904165267944) {
                                        votes[43] = 2;
                                    } else {
                                        votes[43] = 2;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 152.76970672607422) {
                                if (systolic_area <= 38.498992919921875) {
                                    if (systolic_area <= 32.21400260925293) {
                                        if (systolic_area <= 29.778386116027832) {
                                            votes[43] = 4;
                                        } else {
                                            votes[43] = 4;
                                        }
                                    } else {
                                        votes[43] = 4;
                                    }
                                } else {
                                    votes[43] = 1;
                                }
                            } else {
                                votes[43] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 17.23833179473877) {
                        if (diff_median <= 17.516669273376465) {
                            votes[43] = 5;
                        } else {
                            if (diff_median <= 27.262463569641113) {
                                if (ss_median <= 54.25) {
                                    votes[43] = 3;
                                } else {
                                    votes[43] = 3;
                                }
                            } else {
                                if (ss_median <= 50.5) {
                                    if (systolic_area <= 21.98926544189453) {
                                        votes[43] = 5;
                                    } else {
                                        votes[43] = 5;
                                    }
                                } else {
                                    votes[43] = 3;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 23.224523544311523) {
                            votes[43] = 5;
                        } else {
                            votes[43] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 13.923456192016602) {
                    if (systolic_area <= 13.744329929351807) {
                        votes[43] = 2;
                    } else {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 7.7864089012146) {
                                votes[43] = 2;
                            } else {
                                if (rr_std <= 0.8769984543323517) {
                                    votes[43] = 2;
                                } else {
                                    if (rr_std <= 5.308671236038208) {
                                        votes[43] = 5;
                                    } else {
                                        if (rr_std <= 7.413903713226318) {
                                            votes[43] = 2;
                                        } else {
                                            votes[43] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[43] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 25.933034896850586) {
                        if (systolic_area <= 13.962783336639404) {
                            votes[43] = 2;
                        } else {
                            if (diff_median <= 21.90872097015381) {
                                votes[43] = 5;
                            } else {
                                votes[43] = 5;
                            }
                        }
                    } else {
                        votes[43] = 2;
                    }
                }
            } else {
                if (diff_median <= 8.173661470413208) {
                    if (ss_median <= 71.5) {
                        votes[43] = 4;
                    } else {
                        votes[43] = 4;
                    }
                } else {
                    if (systolic_area <= 16.598926067352295) {
                        votes[43] = 3;
                    } else {
                        votes[43] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 44
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.0038555990904569626) {
            votes[44] = 2;
        } else {
            if (rr_std <= 84.76052856445312) {
                if (rr_std <= 3.6463444232940674) {
                    votes[44] = 0;
                } else {
                    votes[44] = 0;
                }
            } else {
                votes[44] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 10.976293087005615) {
                if (systolic_area <= -43.60191345214844) {
                    if (rr_std <= 10.697364330291748) {
                        if (diff_median <= 14.245126724243164) {
                            votes[44] = 5;
                        } else {
                            if (rr_std <= 8.855872631072998) {
                                votes[44] = 1;
                            } else {
                                votes[44] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 12.115373611450195) {
                            votes[44] = 1;
                        } else {
                            votes[44] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 17.5358943939209) {
                        if (ss_median <= 45.75) {
                            if (diff_median <= 6.535074949264526) {
                                votes[44] = 4;
                            } else {
                                if (systolic_area <= -3.75851309299469) {
                                    if (diff_median <= 17.449106693267822) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 5;
                                    }
                                } else {
                                    if (rr_std <= 10.851216793060303) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 5;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 11.799516677856445) {
                                if (systolic_area <= 6.143704175949097) {
                                    if (systolic_area <= -8.84978437423706) {
                                        if (diff_median <= 7.0012102127075195) {
                                            votes[44] = 3;
                                        } else {
                                            votes[44] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= -0.19486644864082336) {
                                            votes[44] = 5;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    }
                                } else {
                                    votes[44] = 1;
                                }
                            } else {
                                if (systolic_area <= -7.670246124267578) {
                                    if (diff_median <= 28.905543327331543) {
                                        if (diff_median <= 18.689640998840332) {
                                            votes[44] = 3;
                                        } else {
                                            votes[44] = 3;
                                        }
                                    } else {
                                        votes[44] = 1;
                                    }
                                } else {
                                    if (diff_median <= 18.32368278503418) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 4.286606967449188) {
                            votes[44] = 4;
                        } else {
                            if (systolic_area <= 9.840086936950684) {
                                if (diff_median <= 8.91091537475586) {
                                    votes[44] = 1;
                                } else {
                                    votes[44] = 1;
                                }
                            } else {
                                votes[44] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.175432205200195) {
                    if (ss_median <= 49.25) {
                        if (diff_median <= 4.6485655307769775) {
                            votes[44] = 5;
                        } else {
                            if (diff_median <= 24.9196834564209) {
                                if (rr_std <= 3.7481400966644287) {
                                    votes[44] = 4;
                                } else {
                                    if (rr_std <= 7.209649085998535) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 6.039155006408691) {
                                    votes[44] = 5;
                                } else {
                                    votes[44] = 5;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 7.0142295360565186) {
                            if (ss_median <= 54.75) {
                                votes[44] = 3;
                            } else {
                                votes[44] = 2;
                            }
                        } else {
                            if (systolic_area <= 21.7103214263916) {
                                votes[44] = 3;
                            } else {
                                votes[44] = 3;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 15.730360984802246) {
                        if (systolic_area <= 22.217223167419434) {
                            if (rr_std <= 13.598333835601807) {
                                if (systolic_area <= 19.702869415283203) {
                                    if (diff_median <= 9.132901668548584) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 4;
                                    }
                                } else {
                                    votes[44] = 5;
                                }
                            } else {
                                if (ss_median <= 52.25) {
                                    if (systolic_area <= 17.76030731201172) {
                                        if (systolic_area <= 14.353884220123291) {
                                            votes[44] = 1;
                                        } else {
                                            votes[44] = 5;
                                        }
                                    } else {
                                        votes[44] = 2;
                                    }
                                } else {
                                    if (diff_median <= 4.241669774055481) {
                                        votes[44] = 2;
                                    } else {
                                        if (diff_median <= 10.308166980743408) {
                                            votes[44] = 2;
                                        } else {
                                            votes[44] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 152.45352172851562) {
                                if (systolic_area <= 40.68009948730469) {
                                    if (diff_median <= 9.452179431915283) {
                                        if (rr_std <= 13.952385902404785) {
                                            votes[44] = 5;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 15.542770862579346) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    }
                                } else {
                                    votes[44] = 1;
                                }
                            } else {
                                votes[44] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 13.807416915893555) {
                            if (diff_median <= 21.869815826416016) {
                                votes[44] = 5;
                            } else {
                                if (ss_median <= 48.5) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 3;
                                }
                            }
                        } else {
                            if (systolic_area <= 24.83587646484375) {
                                if (systolic_area <= 15.1005539894104) {
                                    votes[44] = 4;
                                } else {
                                    if (systolic_area <= 19.93978214263916) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 5;
                                    }
                                }
                            } else {
                                votes[44] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 26.720373153686523) {
                    if (systolic_area <= 21.16811180114746) {
                        if (ss_median <= 69.5) {
                            votes[44] = 5;
                        } else {
                            if (rr_std <= 3.619349241256714) {
                                votes[44] = 2;
                            } else {
                                if (diff_median <= 5.732568979263306) {
                                    votes[44] = 2;
                                } else {
                                    votes[44] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 3.7638041973114014) {
                            if (rr_std <= 0.6057857573032379) {
                                if (diff_median <= 5.329592227935791) {
                                    if (systolic_area <= 23.313526153564453) {
                                        votes[44] = 2;
                                    } else {
                                        votes[44] = 2;
                                    }
                                } else {
                                    votes[44] = 2;
                                }
                            } else {
                                votes[44] = 2;
                            }
                        } else {
                            if (diff_median <= 18.002981662750244) {
                                votes[44] = 2;
                            } else {
                                votes[44] = 2;
                            }
                        }
                    }
                } else {
                    votes[44] = 5;
                }
            } else {
                if (rr_std <= 18.216461181640625) {
                    if (systolic_area <= 19.102481842041016) {
                        if (systolic_area <= 7.325525999069214) {
                            votes[44] = 3;
                        } else {
                            votes[44] = 3;
                        }
                    } else {
                        votes[44] = 5;
                    }
                } else {
                    votes[44] = 4;
                }
            }
        }
    }
// Decision rules for tree 45
    if (diff_median <= 0.08662371709942818) {
        if (systolic_area <= 22.03877353668213) {
            if (rr_std <= 69.48360824584961) {
                if (rr_std <= 4.540418982505798) {
                    votes[45] = 0;
                } else {
                    votes[45] = 0;
                }
            } else {
                if (systolic_area <= 16.088496685028076) {
                    votes[45] = 0;
                } else {
                    votes[45] = 2;
                }
            }
        } else {
            votes[45] = 2;
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 24.922051429748535) {
                if (systolic_area <= -44.670148849487305) {
                    if (systolic_area <= -59.59743309020996) {
                        if (rr_std <= 6.5303966999053955) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 1;
                        }
                    } else {
                        if (rr_std <= 10.594393253326416) {
                            votes[45] = 5;
                        } else {
                            votes[45] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 11.731092929840088) {
                        if (ss_median <= 47.5) {
                            if (rr_std <= 9.018723964691162) {
                                if (rr_std <= 7.8906567096710205) {
                                    if (diff_median <= 26.544949531555176) {
                                        if (systolic_area <= -3.80430006980896) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    } else {
                                        votes[45] = 3;
                                    }
                                } else {
                                    votes[45] = 3;
                                }
                            } else {
                                if (ss_median <= 43.5) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 5;
                                }
                            }
                        } else {
                            if (systolic_area <= -16.661354541778564) {
                                if (rr_std <= 10.123628616333008) {
                                    votes[45] = 1;
                                } else {
                                    votes[45] = 5;
                                }
                            } else {
                                if (diff_median <= 8.437533855438232) {
                                    if (rr_std <= 4.831328392028809) {
                                        votes[45] = 4;
                                    } else {
                                        if (diff_median <= 3.773824453353882) {
                                            votes[45] = 1;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 14.439377307891846) {
                                        if (systolic_area <= -3.643965482711792) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 2.384304463863373) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 10.886988639831543) {
                            if (systolic_area <= 6.386136293411255) {
                                if (systolic_area <= -4.36423659324646) {
                                    if (rr_std <= 12.494638442993164) {
                                        votes[45] = 1;
                                    } else {
                                        if (diff_median <= 27.228336334228516) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 4.142503499984741) {
                                        votes[45] = 4;
                                    } else {
                                        if (rr_std <= 13.33702278137207) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 32.94869613647461) {
                                    if (systolic_area <= 9.079156875610352) {
                                        votes[45] = 1;
                                    } else {
                                        votes[45] = 1;
                                    }
                                } else {
                                    votes[45] = 1;
                                }
                            }
                        } else {
                            if (diff_median <= 13.977776050567627) {
                                if (ss_median <= 51.5) {
                                    if (diff_median <= 7.179832935333252) {
                                        if (diff_median <= 4.489069223403931) {
                                            votes[45] = 1;
                                        } else {
                                            votes[45] = 1;
                                        }
                                    } else {
                                        votes[45] = 5;
                                    }
                                } else {
                                    if (systolic_area <= 22.22378444671631) {
                                        if (rr_std <= 14.58253526687622) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 2;
                                        }
                                    } else {
                                        votes[45] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 14.222147464752197) {
                                    votes[45] = 5;
                                } else {
                                    if (rr_std <= 18.720064163208008) {
                                        votes[45] = 5;
                                    } else {
                                        votes[45] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.232347011566162) {
                    if (diff_median <= 6.762092590332031) {
                        if (diff_median <= 4.377500295639038) {
                            votes[45] = 3;
                        } else {
                            votes[45] = 3;
                        }
                    } else {
                        if (rr_std <= 3.4161651134490967) {
                            votes[45] = 3;
                        } else {
                            votes[45] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 19.85244369506836) {
                        if (systolic_area <= 152.45352172851562) {
                            if (systolic_area <= 50.51540184020996) {
                                if (rr_std <= 9.254694938659668) {
                                    votes[45] = 5;
                                } else {
                                    if (systolic_area <= 36.852840423583984) {
                                        if (diff_median <= 2.9047257900238037) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 4;
                                        }
                                    } else {
                                        votes[45] = 5;
                                    }
                                }
                            } else {
                                votes[45] = 1;
                            }
                        } else {
                            votes[45] = 4;
                        }
                    } else {
                        votes[45] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (diff_median <= 15.029474258422852) {
                    if (diff_median <= 3.5268014669418335) {
                        votes[45] = 3;
                    } else {
                        if (systolic_area <= 17.960288047790527) {
                            if (rr_std <= 6.70412015914917) {
                                votes[45] = 2;
                            } else {
                                votes[45] = 2;
                            }
                        } else {
                            if (diff_median <= 9.235647678375244) {
                                if (rr_std <= 0.4925113916397095) {
                                    if (ss_median <= 72.5) {
                                        votes[45] = 2;
                                    } else {
                                        votes[45] = 2;
                                    }
                                } else {
                                    votes[45] = 2;
                                }
                            } else {
                                if (diff_median <= 10.434257507324219) {
                                    votes[45] = 2;
                                } else {
                                    votes[45] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 5.772883415222168) {
                        votes[45] = 2;
                    } else {
                        votes[45] = 5;
                    }
                }
            } else {
                if (rr_std <= 18.301368713378906) {
                    if (systolic_area <= 16.598926067352295) {
                        votes[45] = 3;
                    } else {
                        votes[45] = 5;
                    }
                } else {
                    if (ss_median <= 72.5) {
                        votes[45] = 4;
                    } else {
                        votes[45] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 46
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.003857266972772777) {
            votes[46] = 2;
        } else {
            if (systolic_area <= 20.366151809692383) {
                if (rr_std <= 7.588472366333008) {
                    votes[46] = 0;
                } else {
                    if (systolic_area <= 19.17597770690918) {
                        votes[46] = 0;
                    } else {
                        votes[46] = 0;
                    }
                }
            } else {
                if (rr_std <= 39.19871520996094) {
                    if (diff_median <= 0.0067393663339316845) {
                        votes[46] = 0;
                    } else {
                        votes[46] = 0;
                    }
                } else {
                    votes[46] = 2;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= -48.81073760986328) {
                if (rr_std <= 12.693106651306152) {
                    if (rr_std <= 10.41910457611084) {
                        if (diff_median <= 17.25478744506836) {
                            votes[46] = 1;
                        } else {
                            votes[46] = 1;
                        }
                    } else {
                        votes[46] = 1;
                    }
                } else {
                    votes[46] = 1;
                }
            } else {
                if (rr_std <= 9.110387802124023) {
                    if (systolic_area <= -18.482629776000977) {
                        if (diff_median <= 10.896639823913574) {
                            votes[46] = 3;
                        } else {
                            votes[46] = 1;
                        }
                    } else {
                        if (diff_median <= 9.178516387939453) {
                            if (systolic_area <= -0.9166867733001709) {
                                votes[46] = 5;
                            } else {
                                if (diff_median <= 5.570219039916992) {
                                    if (diff_median <= 2.172415256500244) {
                                        votes[46] = 4;
                                    } else {
                                        if (ss_median <= 55.25) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 2;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 7.019796133041382) {
                                        votes[46] = 4;
                                    } else {
                                        votes[46] = 3;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 50.5) {
                                if (systolic_area <= 19.88106918334961) {
                                    if (rr_std <= 4.548921823501587) {
                                        votes[46] = 3;
                                    } else {
                                        if (rr_std <= 7.62229585647583) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 3;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 25.883410453796387) {
                                        votes[46] = 3;
                                    } else {
                                        votes[46] = 5;
                                    }
                                }
                            } else {
                                if (diff_median <= 19.867051124572754) {
                                    if (diff_median <= 15.616967678070068) {
                                        votes[46] = 3;
                                    } else {
                                        votes[46] = 3;
                                    }
                                } else {
                                    votes[46] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 24.66554546356201) {
                        if (rr_std <= 23.219493865966797) {
                            if (rr_std <= 19.196358680725098) {
                                if (diff_median <= 4.737594842910767) {
                                    if (systolic_area <= 17.395188808441162) {
                                        if (diff_median <= 2.2845624685287476) {
                                            votes[46] = 1;
                                        } else {
                                            votes[46] = 4;
                                        }
                                    } else {
                                        votes[46] = 2;
                                    }
                                } else {
                                    if (systolic_area <= -8.311931371688843) {
                                        if (diff_median <= 34.46483612060547) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 54.75) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 51.5) {
                                    votes[46] = 5;
                                } else {
                                    if (ss_median <= 58.5) {
                                        votes[46] = 2;
                                    } else {
                                        votes[46] = 2;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 1.6942816972732544) {
                                votes[46] = 4;
                            } else {
                                if (systolic_area <= 14.676288604736328) {
                                    if (diff_median <= 18.533164024353027) {
                                        votes[46] = 1;
                                    } else {
                                        votes[46] = 1;
                                    }
                                } else {
                                    votes[46] = 1;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 19.801846504211426) {
                            if (rr_std <= 39.741899490356445) {
                                if (systolic_area <= 152.93936920166016) {
                                    if (systolic_area <= 41.45831108093262) {
                                        if (diff_median <= 8.7264723777771) {
                                            votes[46] = 4;
                                        } else {
                                            votes[46] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 49.5) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 1;
                                        }
                                    }
                                } else {
                                    votes[46] = 4;
                                }
                            } else {
                                votes[46] = 5;
                            }
                        } else {
                            if (rr_std <= 16.10252332687378) {
                                votes[46] = 3;
                            } else {
                                votes[46] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 10.58084487915039) {
                if (systolic_area <= 11.052355289459229) {
                    votes[46] = 3;
                } else {
                    if (diff_median <= 15.373574256896973) {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 4.148450970649719) {
                                votes[46] = 2;
                            } else {
                                if (ss_median <= 69.0) {
                                    if (rr_std <= 3.845316767692566) {
                                        votes[46] = 2;
                                    } else {
                                        votes[46] = 2;
                                    }
                                } else {
                                    votes[46] = 2;
                                }
                            }
                        } else {
                            votes[46] = 2;
                        }
                    } else {
                        if (ss_median <= 68.5) {
                            votes[46] = 2;
                        } else {
                            votes[46] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 18.9116153717041) {
                    if (systolic_area <= 16.598926067352295) {
                        votes[46] = 3;
                    } else {
                        votes[46] = 5;
                    }
                } else {
                    votes[46] = 4;
                }
            }
        }
    }
// Decision rules for tree 47
    if (diff_median <= 0.06383661925792694) {
        if (diff_median <= 0.00422980566509068) {
            if (systolic_area <= 20.267452239990234) {
                votes[47] = 2;
            } else {
                votes[47] = 2;
            }
        } else {
            if (systolic_area <= 21.844715118408203) {
                if (diff_median <= 0.0047602299600839615) {
                    votes[47] = 0;
                } else {
                    votes[47] = 0;
                }
            } else {
                votes[47] = 2;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 19.06333351135254) {
                if (systolic_area <= -59.588613510131836) {
                    if (ss_median <= 53.0) {
                        if (ss_median <= 43.25) {
                            votes[47] = 1;
                        } else {
                            votes[47] = 1;
                        }
                    } else {
                        votes[47] = 1;
                    }
                } else {
                    if (rr_std <= 17.36220645904541) {
                        if (systolic_area <= -0.19486644864082336) {
                            if (systolic_area <= -8.84978437423706) {
                                if (diff_median <= 27.69980812072754) {
                                    if (systolic_area <= -18.48615837097168) {
                                        if (systolic_area <= -31.700902938842773) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 7.432090997695923) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= -38.900848388671875) {
                                        votes[47] = 5;
                                    } else {
                                        if (rr_std <= 11.084955215454102) {
                                            votes[47] = 1;
                                        } else {
                                            votes[47] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 49.0) {
                                    votes[47] = 5;
                                } else {
                                    votes[47] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 12.759157657623291) {
                                if (diff_median <= 2.65064799785614) {
                                    votes[47] = 4;
                                } else {
                                    if (diff_median <= 18.152554512023926) {
                                        if (diff_median <= 5.585694313049316) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 47.25) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 13.84742259979248) {
                                    if (diff_median <= 8.225133657455444) {
                                        votes[47] = 4;
                                    } else {
                                        votes[47] = 1;
                                    }
                                } else {
                                    votes[47] = 5;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 11.142370700836182) {
                            if (systolic_area <= 6.884846210479736) {
                                votes[47] = 1;
                            } else {
                                if (rr_std <= 37.97941017150879) {
                                    if (systolic_area <= 10.336816787719727) {
                                        votes[47] = 1;
                                    } else {
                                        votes[47] = 1;
                                    }
                                } else {
                                    votes[47] = 1;
                                }
                            }
                        } else {
                            if (ss_median <= 52.25) {
                                if (rr_std <= 22.94121551513672) {
                                    votes[47] = 1;
                                } else {
                                    votes[47] = 1;
                                }
                            } else {
                                if (diff_median <= 10.308166980743408) {
                                    votes[47] = 2;
                                } else {
                                    votes[47] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 14.854339122772217) {
                    if (systolic_area <= 168.63604354858398) {
                        if (systolic_area <= 41.45831108093262) {
                            if (systolic_area <= 22.22378444671631) {
                                if (rr_std <= 13.126884937286377) {
                                    if (systolic_area <= 20.593122482299805) {
                                        votes[47] = 5;
                                    } else {
                                        votes[47] = 4;
                                    }
                                } else {
                                    if (ss_median <= 54.75) {
                                        votes[47] = 2;
                                    } else {
                                        votes[47] = 2;
                                    }
                                }
                            } else {
                                if (rr_std <= 9.671369075775146) {
                                    if (diff_median <= 7.026921510696411) {
                                        if (systolic_area <= 26.92845916748047) {
                                            votes[47] = 5;
                                        } else {
                                            votes[47] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 46.25) {
                                            votes[47] = 1;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 10.567851543426514) {
                                        if (diff_median <= 8.304591655731201) {
                                            votes[47] = 4;
                                        } else {
                                            votes[47] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 15.542770862579346) {
                                            votes[47] = 4;
                                        } else {
                                            votes[47] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 8.793316841125488) {
                                votes[47] = 3;
                            } else {
                                votes[47] = 1;
                            }
                        }
                    } else {
                        votes[47] = 4;
                    }
                } else {
                    if (rr_std <= 17.23833179473877) {
                        if (diff_median <= 27.292417526245117) {
                            if (rr_std <= 8.990674495697021) {
                                votes[47] = 3;
                            } else {
                                if (ss_median <= 55.75) {
                                    votes[47] = 3;
                                } else {
                                    votes[47] = 4;
                                }
                            }
                        } else {
                            if (systolic_area <= 27.1874361038208) {
                                votes[47] = 5;
                            } else {
                                votes[47] = 3;
                            }
                        }
                    } else {
                        if (systolic_area <= 40.56397247314453) {
                            votes[47] = 5;
                        } else {
                            votes[47] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 13.923456192016602) {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 3.699536919593811) {
                            votes[47] = 2;
                        } else {
                            if (ss_median <= 71.25) {
                                if (systolic_area <= 24.460211753845215) {
                                    votes[47] = 2;
                                } else {
                                    votes[47] = 2;
                                }
                            } else {
                                votes[47] = 2;
                            }
                        }
                    } else {
                        votes[47] = 2;
                    }
                } else {
                    if (systolic_area <= 25.933034896850586) {
                        if (systolic_area <= 15.881234645843506) {
                            votes[47] = 3;
                        } else {
                            if (diff_median <= 29.57724666595459) {
                                votes[47] = 5;
                            } else {
                                votes[47] = 3;
                            }
                        }
                    } else {
                        votes[47] = 2;
                    }
                }
            } else {
                if (diff_median <= 8.430087327957153) {
                    if (ss_median <= 71.5) {
                        votes[47] = 4;
                    } else {
                        votes[47] = 4;
                    }
                } else {
                    if (ss_median <= 70.5) {
                        votes[47] = 3;
                    } else {
                        votes[47] = 3;
                    }
                }
            }
        }
    }
// Decision rules for tree 48
    if (diff_median <= 0.06452756375074387) {
        if (diff_median <= 0.0038555990904569626) {
            votes[48] = 2;
        } else {
            if (rr_std <= 85.26799774169922) {
                if (rr_std <= 3.9945638179779053) {
                    votes[48] = 0;
                } else {
                    if (systolic_area <= 21.25664710998535) {
                        votes[48] = 0;
                    } else {
                        votes[48] = 0;
                    }
                }
            } else {
                if (systolic_area <= 16.47189426422119) {
                    votes[48] = 0;
                } else {
                    votes[48] = 2;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.217223167419434) {
                if (systolic_area <= -45.50829315185547) {
                    if (systolic_area <= -61.51252365112305) {
                        if (systolic_area <= -90.5287094116211) {
                            if (systolic_area <= -95.11200714111328) {
                                votes[48] = 1;
                            } else {
                                votes[48] = 1;
                            }
                        } else {
                            votes[48] = 1;
                        }
                    } else {
                        if (rr_std <= 9.72970199584961) {
                            votes[48] = 3;
                        } else {
                            votes[48] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 19.766024589538574) {
                        if (systolic_area <= -8.864930629730225) {
                            if (diff_median <= 27.69980812072754) {
                                if (rr_std <= 7.2088303565979) {
                                    votes[48] = 1;
                                } else {
                                    if (systolic_area <= -16.438700675964355) {
                                        if (systolic_area <= -24.213205337524414) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 1;
                                        }
                                    } else {
                                        votes[48] = 3;
                                    }
                                }
                            } else {
                                if (diff_median <= 34.22624588012695) {
                                    votes[48] = 1;
                                } else {
                                    votes[48] = 1;
                                }
                            }
                        } else {
                            if (diff_median <= 3.6861249208450317) {
                                if (diff_median <= 2.492171287536621) {
                                    if (systolic_area <= 1.496764063835144) {
                                        votes[48] = 4;
                                    } else {
                                        votes[48] = 1;
                                    }
                                } else {
                                    votes[48] = 2;
                                }
                            } else {
                                if (rr_std <= 9.274426460266113) {
                                    if (systolic_area <= 2.7013559341430664) {
                                        if (ss_median <= 49.0) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 20.515275955200195) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 18.059768676757812) {
                                        if (diff_median <= 6.397857189178467) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 20.014819145202637) {
                                            votes[48] = 4;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 21.953694343566895) {
                            if (ss_median <= 52.0) {
                                votes[48] = 1;
                            } else {
                                votes[48] = 2;
                            }
                        } else {
                            if (systolic_area <= 4.34948056936264) {
                                votes[48] = 4;
                            } else {
                                if (systolic_area <= 14.676288604736328) {
                                    if (systolic_area <= 8.349937915802002) {
                                        votes[48] = 1;
                                    } else {
                                        if (systolic_area <= 10.36304521560669) {
                                            votes[48] = 1;
                                        } else {
                                            votes[48] = 1;
                                        }
                                    }
                                } else {
                                    votes[48] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.232347011566162) {
                    if (ss_median <= 49.25) {
                        if (diff_median <= 13.685950756072998) {
                            if (diff_median <= 7.477649450302124) {
                                votes[48] = 4;
                            } else {
                                votes[48] = 1;
                            }
                        } else {
                            votes[48] = 3;
                        }
                    } else {
                        if (rr_std <= 2.006998121738434) {
                            votes[48] = 3;
                        } else {
                            votes[48] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 19.908303260803223) {
                        if (systolic_area <= 158.4512596130371) {
                            if (systolic_area <= 49.96357536315918) {
                                if (rr_std <= 9.166602611541748) {
                                    votes[48] = 5;
                                } else {
                                    if (rr_std <= 12.663281917572021) {
                                        if (diff_median <= 8.97095537185669) {
                                            votes[48] = 4;
                                        } else {
                                            votes[48] = 4;
                                        }
                                    } else {
                                        if (systolic_area <= 29.887423515319824) {
                                            votes[48] = 4;
                                        } else {
                                            votes[48] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[48] = 1;
                            }
                        } else {
                            votes[48] = 4;
                        }
                    } else {
                        if (systolic_area <= 27.1874361038208) {
                            votes[48] = 5;
                        } else {
                            votes[48] = 3;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (diff_median <= 13.923456192016602) {
                    if (ss_median <= 73.5) {
                        if (ss_median <= 69.0) {
                            if (systolic_area <= 24.460211753845215) {
                                votes[48] = 5;
                            } else {
                                votes[48] = 2;
                            }
                        } else {
                            if (systolic_area <= 25.0954532623291) {
                                if (diff_median <= 9.184192180633545) {
                                    if (rr_std <= 0.43653950095176697) {
                                        votes[48] = 2;
                                    } else {
                                        votes[48] = 2;
                                    }
                                } else {
                                    if (rr_std <= 1.8109096586704254) {
                                        votes[48] = 2;
                                    } else {
                                        votes[48] = 2;
                                    }
                                }
                            } else {
                                votes[48] = 2;
                            }
                        }
                    } else {
                        votes[48] = 2;
                    }
                } else {
                    if (systolic_area <= 25.657934188842773) {
                        if (systolic_area <= 16.498754501342773) {
                            votes[48] = 3;
                        } else {
                            votes[48] = 5;
                        }
                    } else {
                        votes[48] = 2;
                    }
                }
            } else {
                if (systolic_area <= -3.467504322528839) {
                    votes[48] = 3;
                } else {
                    if (rr_std <= 21.09497356414795) {
                        votes[48] = 4;
                    } else {
                        votes[48] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 49
    if (diff_median <= 0.06383661925792694) {
        if (systolic_area <= 22.04329490661621) {
            if (rr_std <= 54.984304428100586) {
                if (rr_std <= 3.9945638179779053) {
                    votes[49] = 0;
                } else {
                    votes[49] = 0;
                }
            } else {
                if (systolic_area <= 18.941274642944336) {
                    votes[49] = 0;
                } else {
                    votes[49] = 2;
                }
            }
        } else {
            votes[49] = 2;
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 22.098475456237793) {
                if (systolic_area <= -45.74421310424805) {
                    if (systolic_area <= -61.51252365112305) {
                        if (ss_median <= 43.25) {
                            votes[49] = 1;
                        } else {
                            votes[49] = 1;
                        }
                    } else {
                        if (rr_std <= 9.69111156463623) {
                            votes[49] = 5;
                        } else {
                            if (systolic_area <= -54.65696334838867) {
                                votes[49] = 1;
                            } else {
                                votes[49] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 19.3992280960083) {
                        if (rr_std <= 10.219670295715332) {
                            if (systolic_area <= -18.482629776000977) {
                                if (diff_median <= 13.462110042572021) {
                                    votes[49] = 3;
                                } else {
                                    votes[49] = 1;
                                }
                            } else {
                                if (diff_median <= 9.178516387939453) {
                                    if (systolic_area <= -0.9166867733001709) {
                                        votes[49] = 5;
                                    } else {
                                        if (systolic_area <= 12.509184837341309) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 4.938035488128662) {
                                        if (rr_std <= 3.370218515396118) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= -1.827996850013733) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 6.5231239795684814) {
                                if (systolic_area <= 17.371559143066406) {
                                    if (diff_median <= 4.218668699264526) {
                                        if (ss_median <= 50.25) {
                                            votes[49] = 1;
                                        } else {
                                            votes[49] = 1;
                                        }
                                    } else {
                                        votes[49] = 3;
                                    }
                                } else {
                                    if (diff_median <= 3.5321124792099) {
                                        votes[49] = 2;
                                    } else {
                                        votes[49] = 2;
                                    }
                                }
                            } else {
                                if (systolic_area <= -3.8351927995681763) {
                                    if (diff_median <= 21.807252883911133) {
                                        if (rr_std <= 12.993562698364258) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    } else {
                                        votes[49] = 1;
                                    }
                                } else {
                                    if (ss_median <= 45.25) {
                                        votes[49] = 5;
                                    } else {
                                        if (diff_median <= 21.66301441192627) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 21.784536361694336) {
                            if (ss_median <= 52.25) {
                                votes[49] = 1;
                            } else {
                                votes[49] = 2;
                            }
                        } else {
                            if (diff_median <= 1.6942816972732544) {
                                votes[49] = 4;
                            } else {
                                if (systolic_area <= 10.36304521560669) {
                                    votes[49] = 1;
                                } else {
                                    votes[49] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.232347011566162) {
                    if (systolic_area <= 24.56007671356201) {
                        votes[49] = 3;
                    } else {
                        if (ss_median <= 45.0) {
                            votes[49] = 3;
                        } else {
                            if (diff_median <= 4.377500295639038) {
                                votes[49] = 3;
                            } else {
                                votes[49] = 3;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 15.69731616973877) {
                        if (rr_std <= 9.480578899383545) {
                            if (diff_median <= 6.797447681427002) {
                                votes[49] = 5;
                            } else {
                                votes[49] = 4;
                            }
                        } else {
                            if (systolic_area <= 152.45352172851562) {
                                if (systolic_area <= 41.45831108093262) {
                                    if (rr_std <= 12.95569372177124) {
                                        if (systolic_area <= 26.9107723236084) {
                                            votes[49] = 4;
                                        } else {
                                            votes[49] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 23.16442584991455) {
                                            votes[49] = 4;
                                        } else {
                                            votes[49] = 4;
                                        }
                                    }
                                } else {
                                    votes[49] = 1;
                                }
                            } else {
                                votes[49] = 4;
                            }
                        }
                    } else {
                        if (ss_median <= 52.75) {
                            if (rr_std <= 14.00282907485962) {
                                votes[49] = 3;
                            } else {
                                votes[49] = 5;
                            }
                        } else {
                            votes[49] = 5;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.65505313873291) {
                if (diff_median <= 15.029474258422852) {
                    if (systolic_area <= 10.260653734207153) {
                        votes[49] = 3;
                    } else {
                        if (ss_median <= 73.5) {
                            if (systolic_area <= 20.053691864013672) {
                                if (rr_std <= 6.1066954135894775) {
                                    votes[49] = 2;
                                } else {
                                    votes[49] = 2;
                                }
                            } else {
                                if (diff_median <= 9.235647678375244) {
                                    votes[49] = 2;
                                } else {
                                    if (systolic_area <= 25.721386909484863) {
                                        votes[49] = 2;
                                    } else {
                                        votes[49] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[49] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 24.773683547973633) {
                        if (rr_std <= 5.772883415222168) {
                            votes[49] = 3;
                        } else {
                            votes[49] = 5;
                        }
                    } else {
                        votes[49] = 2;
                    }
                }
            } else {
                if (systolic_area <= 19.392446517944336) {
                    if (diff_median <= 18.184285163879395) {
                        votes[49] = 3;
                    } else {
                        votes[49] = 3;
                    }
                } else {
                    if (diff_median <= 3.6639840602874756) {
                        votes[49] = 4;
                    } else {
                        votes[49] = 5;
                    }
                }
            }
        }
    }
    // Majority voting
    int class_counts[6] = {0};
    for (int i = 0; i < 50; i++) {
        class_counts[votes[i]]++;
    }
    int predicted_class = 0;
    for (int i = 1; i < 6; i++) {
        if (class_counts[i] > class_counts[predicted_class]) {
            predicted_class = i;
        }
    }
    return predicted_class;
}
