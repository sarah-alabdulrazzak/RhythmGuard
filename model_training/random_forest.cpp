#include <vector>
using namespace std;

int random_forest_predict(float diastolic_time, float dist_std, float num_peaks, float rr_median, float rr_std, float diastolic_area) {
    int votes[50] = {0};
// Decision rules for tree 0
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_median <= 86.25) {
            if (rr_std <= 16.190052032470703) {
                if (rr_median <= 75.5) {
                    if (num_peaks <= 134.5) {
                        if (num_peaks <= 86.5) {
                            if (diastolic_area <= -5.464520454406738) {
                                votes[0] = 4;
                            } else {
                                votes[0] = 5;
                            }
                        } else {
                            if (dist_std <= 0.14924569427967072) {
                                if (rr_std <= 9.218300342559814) {
                                    if (rr_median <= 69.5) {
                                        if (rr_median <= 61.5) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 3;
                                        }
                                    } else {
                                        votes[0] = 3;
                                    }
                                } else {
                                    if (rr_std <= 10.51915693283081) {
                                        votes[0] = 1;
                                    } else {
                                        if (diastolic_area <= -37.13578224182129) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 5;
                                        }
                                    }
                                }
                            } else {
                                votes[0] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 10.364746570587158) {
                            votes[0] = 3;
                        } else {
                            votes[0] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 116.5) {
                        votes[0] = 3;
                    } else {
                        if (rr_std <= 7.26845383644104) {
                            votes[0] = 5;
                        } else {
                            votes[0] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -49.05288887023926) {
                    if (rr_std <= 33.84240913391113) {
                        if (diastolic_area <= -73.79341888427734) {
                            votes[0] = 3;
                        } else {
                            votes[0] = 5;
                        }
                    } else {
                        votes[0] = 5;
                    }
                } else {
                    if (num_peaks <= 133.5) {
                        if (dist_std <= 0.11728234589099884) {
                            if (diastolic_time <= 0.18050948530435562) {
                                if (num_peaks <= 125.5) {
                                    votes[0] = 4;
                                } else {
                                    if (rr_std <= 22.89695453643799) {
                                        votes[0] = 4;
                                    } else {
                                        votes[0] = 4;
                                    }
                                }
                            } else {
                                votes[0] = 4;
                            }
                        } else {
                            votes[0] = 3;
                        }
                    } else {
                        if (dist_std <= 0.04725406877696514) {
                            votes[0] = 0;
                        } else {
                            votes[0] = 3;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -89.24246978759766) {
                if (rr_median <= 94.0) {
                    votes[0] = 1;
                } else {
                    if (diastolic_area <= -95.25642776489258) {
                        votes[0] = 1;
                    } else {
                        votes[0] = 1;
                    }
                }
            } else {
                if (dist_std <= 0.03593516908586025) {
                    if (num_peaks <= 128.0) {
                        votes[0] = 4;
                    } else {
                        votes[0] = 5;
                    }
                } else {
                    if (diastolic_time <= 0.03718486428260803) {
                        if (num_peaks <= 136.0) {
                            votes[0] = 3;
                        } else {
                            votes[0] = 0;
                        }
                    } else {
                        if (dist_std <= 0.10888004302978516) {
                            if (rr_std <= 25.431367874145508) {
                                if (diastolic_area <= -38.784833908081055) {
                                    if (rr_median <= 99.25) {
                                        votes[0] = 5;
                                    } else {
                                        if (num_peaks <= 118.0) {
                                            votes[0] = 5;
                                        } else {
                                            votes[0] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 7.9489710330963135) {
                                        votes[0] = 1;
                                    } else {
                                        votes[0] = 1;
                                    }
                                }
                            } else {
                                if (num_peaks <= 127.0) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 12.189423143863678) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 3;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 127.5) {
            if (diastolic_time <= 0.7724000215530396) {
                if (dist_std <= 0.09362464770674706) {
                    if (rr_std <= 14.157156467437744) {
                        if (num_peaks <= 107.0) {
                            if (diastolic_area <= -22.155031204223633) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 5;
                            }
                        } else {
                            if (rr_std <= 4.967562675476074) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 76.75) {
                            if (dist_std <= 0.03662537690252066) {
                                votes[0] = 0;
                            } else {
                                if (rr_std <= 31.739327430725098) {
                                    if (rr_median <= 68.0) {
                                        votes[0] = 2;
                                    } else {
                                        votes[0] = 2;
                                    }
                                } else {
                                    votes[0] = 1;
                                }
                            }
                        } else {
                            if (diastolic_area <= -16.160560607910156) {
                                if (num_peaks <= 90.0) {
                                    votes[0] = 2;
                                } else {
                                    votes[0] = 5;
                                }
                            } else {
                                if (rr_median <= 98.5) {
                                    if (diastolic_time <= 0.4385000020265579) {
                                        if (num_peaks <= 87.5) {
                                            votes[0] = 4;
                                        } else {
                                            votes[0] = 4;
                                        }
                                    } else {
                                        votes[0] = 4;
                                    }
                                } else {
                                    votes[0] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 74.25) {
                        if (num_peaks <= 105.5) {
                            if (dist_std <= 0.10264686867594719) {
                                votes[0] = 2;
                            } else {
                                votes[0] = 2;
                            }
                        } else {
                            if (dist_std <= 0.13581082969903946) {
                                if (rr_median <= 69.5) {
                                    votes[0] = 2;
                                } else {
                                    votes[0] = 5;
                                }
                            } else {
                                votes[0] = 2;
                            }
                        }
                    } else {
                        if (diastolic_area <= -19.92510223388672) {
                            votes[0] = 5;
                        } else {
                            votes[0] = 2;
                        }
                    }
                }
            } else {
                if (rr_median <= 79.25) {
                    votes[0] = 1;
                } else {
                    votes[0] = 1;
                }
            }
        } else {
            if (rr_std <= 8.07284927368164) {
                if (dist_std <= 0.061053141951560974) {
                    votes[0] = 5;
                } else {
                    votes[0] = 1;
                }
            } else {
                if (dist_std <= 0.06627212278544903) {
                    if (diastolic_time <= 0.28164102137088776) {
                        votes[0] = 0;
                    } else {
                        if (rr_median <= 61.5) {
                            if (diastolic_area <= -13.400634765625) {
                                if (rr_std <= 14.96319580078125) {
                                    votes[0] = 0;
                                } else {
                                    votes[0] = 0;
                                }
                            } else {
                                votes[0] = 0;
                            }
                        } else {
                            votes[0] = 0;
                        }
                    }
                } else {
                    votes[0] = 2;
                }
            }
        }
    }
// Decision rules for tree 1
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_std <= 14.666455268859863) {
            if (rr_median <= 99.5) {
                if (rr_median <= 76.25) {
                    if (rr_median <= 45.0) {
                        votes[1] = 4;
                    } else {
                        if (rr_std <= 8.713873386383057) {
                            if (dist_std <= 0.1229875423014164) {
                                votes[1] = 3;
                            } else {
                                if (rr_std <= 0.581251710653305) {
                                    votes[1] = 3;
                                } else {
                                    votes[1] = 5;
                                }
                            }
                        } else {
                            if (dist_std <= 0.05037383548915386) {
                                if (num_peaks <= 132.0) {
                                    votes[1] = 5;
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                if (num_peaks <= 120.0) {
                                    votes[1] = 3;
                                } else {
                                    votes[1] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -4.43813955783844) {
                        if (diastolic_area <= -39.300357818603516) {
                            if (rr_std <= 0.9681594967842102) {
                                if (diastolic_area <= -61.46049690246582) {
                                    votes[1] = 5;
                                } else {
                                    votes[1] = 4;
                                }
                            } else {
                                if (num_peaks <= 134.5) {
                                    votes[1] = 3;
                                } else {
                                    votes[1] = 5;
                                }
                            }
                        } else {
                            if (dist_std <= 0.09477906301617622) {
                                votes[1] = 5;
                            } else {
                                if (diastolic_area <= -29.3850736618042) {
                                    votes[1] = 1;
                                } else {
                                    votes[1] = 5;
                                }
                            }
                        }
                    } else {
                        votes[1] = 0;
                    }
                }
            } else {
                if (rr_std <= 0.3685138523578644) {
                    votes[1] = 4;
                } else {
                    if (rr_std <= 12.211073398590088) {
                        if (num_peaks <= 135.0) {
                            votes[1] = 1;
                        } else {
                            if (num_peaks <= 139.5) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 1;
                            }
                        }
                    } else {
                        votes[1] = 1;
                    }
                }
            }
        } else {
            if (diastolic_area <= -52.084999084472656) {
                if (diastolic_time <= 0.06129005737602711) {
                    if (diastolic_area <= -115.59413528442383) {
                        votes[1] = 1;
                    } else {
                        votes[1] = 1;
                    }
                } else {
                    if (rr_median <= 66.75) {
                        if (dist_std <= 0.04475533775985241) {
                            votes[1] = 3;
                        } else {
                            votes[1] = 1;
                        }
                    } else {
                        if (dist_std <= 0.0389828085899353) {
                            votes[1] = 5;
                        } else {
                            if (rr_std <= 61.45918273925781) {
                                if (diastolic_time <= 0.11553801596164703) {
                                    if (diastolic_time <= 0.09541750326752663) {
                                        if (num_peaks <= 128.0) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 1;
                                        }
                                    } else {
                                        votes[1] = 5;
                                    }
                                } else {
                                    votes[1] = 4;
                                }
                            } else {
                                votes[1] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 133.5) {
                    if (dist_std <= 0.11728234589099884) {
                        if (rr_median <= 130.0) {
                            if (dist_std <= 0.07927985861897469) {
                                if (rr_median <= 70.25) {
                                    votes[1] = 4;
                                } else {
                                    if (rr_median <= 78.75) {
                                        if (dist_std <= 0.03963705711066723) {
                                            votes[1] = 4;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    } else {
                                        if (diastolic_area <= -21.355290412902832) {
                                            votes[1] = 4;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_area <= -14.98607587814331) {
                                    votes[1] = 3;
                                } else {
                                    if (num_peaks <= 116.5) {
                                        votes[1] = 4;
                                    } else {
                                        votes[1] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[1] = 4;
                        }
                    } else {
                        votes[1] = 3;
                    }
                } else {
                    if (diastolic_area <= -9.017054557800293) {
                        votes[1] = 1;
                    } else {
                        votes[1] = 0;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05776873417198658) {
            if (num_peaks <= 107.5) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (dist_std <= 0.03413197211921215) {
                        if (diastolic_area <= -17.459381103515625) {
                            votes[1] = 5;
                        } else {
                            votes[1] = 5;
                        }
                    } else {
                        if (diastolic_area <= -16.13533592224121) {
                            if (rr_median <= 84.75) {
                                votes[1] = 2;
                            } else {
                                votes[1] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.38428421318531036) {
                                votes[1] = 4;
                            } else {
                                votes[1] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 97.0) {
                        votes[1] = 1;
                    } else {
                        votes[1] = 1;
                    }
                }
            } else {
                if (diastolic_area <= -18.90355396270752) {
                    if (rr_std <= 8.439831256866455) {
                        votes[1] = 5;
                    } else {
                        if (rr_median <= 56.0) {
                            votes[1] = 3;
                        } else {
                            if (rr_std <= 17.13593101501465) {
                                votes[1] = 0;
                            } else {
                                votes[1] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.012320756912231) {
                        votes[1] = 0;
                    } else {
                        if (diastolic_time <= 0.2915824204683304) {
                            votes[1] = 0;
                        } else {
                            if (rr_std <= 46.33902359008789) {
                                if (dist_std <= 0.028821819461882114) {
                                    votes[1] = 0;
                                } else {
                                    votes[1] = 0;
                                }
                            } else {
                                votes[1] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 0.6971455216407776) {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 91.0) {
                        votes[1] = 2;
                    } else {
                        if (dist_std <= 0.13413643836975098) {
                            votes[1] = 3;
                        } else {
                            votes[1] = 2;
                        }
                    }
                } else {
                    votes[1] = 5;
                }
            } else {
                if (rr_std <= 15.113056659698486) {
                    if (num_peaks <= 129.5) {
                        if (rr_std <= 1.0798233449459076) {
                            votes[1] = 5;
                        } else {
                            if (diastolic_area <= -13.103330135345459) {
                                if (diastolic_area <= -22.52067470550537) {
                                    votes[1] = 5;
                                } else {
                                    votes[1] = 5;
                                }
                            } else {
                                votes[1] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 2.5094518661499023) {
                            votes[1] = 3;
                        } else {
                            votes[1] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 33.77395439147949) {
                        if (rr_std <= 18.198996543884277) {
                            votes[1] = 1;
                        } else {
                            if (diastolic_area <= -14.466524124145508) {
                                if (num_peaks <= 93.5) {
                                    votes[1] = 2;
                                } else {
                                    votes[1] = 2;
                                }
                            } else {
                                if (diastolic_time <= 0.44784313440322876) {
                                    votes[1] = 4;
                                } else {
                                    votes[1] = 2;
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -15.74895429611206) {
                            votes[1] = 5;
                        } else {
                            votes[1] = 1;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 2
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 102.5) {
            if (rr_std <= 20.299455642700195) {
                if (rr_median <= 66.5) {
                    if (num_peaks <= 134.5) {
                        if (diastolic_area <= -23.989883422851562) {
                            if (rr_median <= 47.0) {
                                votes[2] = 1;
                            } else {
                                if (rr_median <= 52.75) {
                                    votes[2] = 3;
                                } else {
                                    if (dist_std <= 0.060124171897768974) {
                                        votes[2] = 5;
                                    } else {
                                        if (diastolic_area <= -36.817054748535156) {
                                            votes[2] = 1;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.04501418396830559) {
                                votes[2] = 4;
                            } else {
                                votes[2] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 146.5) {
                            votes[2] = 3;
                        } else {
                            votes[2] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 67.5) {
                        votes[2] = 2;
                    } else {
                        if (diastolic_time <= 0.01662295125424862) {
                            votes[2] = 0;
                        } else {
                            if (diastolic_area <= -78.90707397460938) {
                                if (num_peaks <= 134.5) {
                                    if (rr_median <= 85.5) {
                                        votes[2] = 3;
                                    } else {
                                        votes[2] = 3;
                                    }
                                } else {
                                    votes[2] = 5;
                                }
                            } else {
                                if (rr_std <= 15.973519802093506) {
                                    if (rr_median <= 81.5) {
                                        if (diastolic_time <= 0.22964705526828766) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 108.5) {
                                            votes[2] = 1;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.1384466290473938) {
                                        votes[2] = 5;
                                    } else {
                                        votes[2] = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 133.5) {
                    if (dist_std <= 0.12549446523189545) {
                        if (diastolic_area <= -52.545907974243164) {
                            if (diastolic_area <= -96.91007995605469) {
                                votes[2] = 4;
                            } else {
                                votes[2] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.20919519662857056) {
                                if (diastolic_area <= -36.4679069519043) {
                                    if (rr_std <= 23.644970893859863) {
                                        votes[2] = 4;
                                    } else {
                                        if (diastolic_time <= 0.14667320251464844) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.17222093045711517) {
                                        votes[2] = 4;
                                    } else {
                                        votes[2] = 4;
                                    }
                                }
                            } else {
                                if (rr_median <= 69.0) {
                                    votes[2] = 2;
                                } else {
                                    votes[2] = 4;
                                }
                            }
                        }
                    } else {
                        votes[2] = 3;
                    }
                } else {
                    if (diastolic_time <= 0.1173725500702858) {
                        if (diastolic_time <= 0.07370428740978241) {
                            votes[2] = 3;
                        } else {
                            votes[2] = 1;
                        }
                    } else {
                        if (rr_std <= 32.416404724121094) {
                            votes[2] = 3;
                        } else {
                            votes[2] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 107.5) {
                if (dist_std <= 0.03744726441800594) {
                    votes[2] = 4;
                } else {
                    if (diastolic_time <= 0.059040043503046036) {
                        votes[2] = 1;
                    } else {
                        if (rr_median <= 126.5) {
                            votes[2] = 4;
                        } else {
                            votes[2] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -45.34360885620117) {
                    if (diastolic_area <= -60.04884910583496) {
                        votes[2] = 1;
                    } else {
                        votes[2] = 1;
                    }
                } else {
                    if (rr_median <= 118.25) {
                        votes[2] = 5;
                    } else {
                        if (rr_median <= 131.5) {
                            votes[2] = 1;
                        } else {
                            votes[2] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_area <= -18.817914962768555) {
                if (dist_std <= 0.0967726893723011) {
                    if (rr_std <= 15.72080945968628) {
                        if (rr_median <= 68.0) {
                            votes[2] = 3;
                        } else {
                            votes[2] = 5;
                        }
                    } else {
                        votes[2] = 2;
                    }
                } else {
                    if (num_peaks <= 91.5) {
                        if (rr_median <= 68.5) {
                            votes[2] = 2;
                        } else {
                            if (diastolic_time <= 0.529442310333252) {
                                votes[2] = 2;
                            } else {
                                votes[2] = 2;
                            }
                        }
                    } else {
                        if (diastolic_area <= -22.924763679504395) {
                            votes[2] = 5;
                        } else {
                            votes[2] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8026666641235352) {
                    if (rr_std <= 10.337450981140137) {
                        if (diastolic_time <= 0.5917333364486694) {
                            votes[2] = 5;
                        } else {
                            votes[2] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.6167076826095581) {
                            if (dist_std <= 0.030160567723214626) {
                                if (diastolic_area <= -13.454446792602539) {
                                    votes[2] = 0;
                                } else {
                                    votes[2] = 0;
                                }
                            } else {
                                if (num_peaks <= 95.0) {
                                    if (rr_median <= 81.0) {
                                        votes[2] = 5;
                                    } else {
                                        if (dist_std <= 0.07144445925951004) {
                                            votes[2] = 4;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.35733333230018616) {
                                        votes[2] = 5;
                                    } else {
                                        votes[2] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[2] = 1;
                        }
                    }
                } else {
                    if (dist_std <= 0.05251546949148178) {
                        votes[2] = 1;
                    } else {
                        votes[2] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.0761127881705761) {
                if (rr_std <= 6.039847135543823) {
                    votes[2] = 5;
                } else {
                    if (num_peaks <= 151.5) {
                        if (diastolic_time <= 0.29956695437431335) {
                            votes[2] = 0;
                        } else {
                            if (rr_median <= 48.5) {
                                votes[2] = 0;
                            } else {
                                if (rr_std <= 12.955412864685059) {
                                    if (num_peaks <= 143.5) {
                                        votes[2] = 0;
                                    } else {
                                        if (num_peaks <= 146.5) {
                                            votes[2] = 0;
                                        } else {
                                            votes[2] = 0;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 133.5) {
                                        votes[2] = 0;
                                    } else {
                                        votes[2] = 0;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[2] = 0;
                    }
                }
            } else {
                if (diastolic_area <= -18.923941612243652) {
                    votes[2] = 3;
                } else {
                    votes[2] = 2;
                }
            }
        }
    }
// Decision rules for tree 3
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 76.25) {
            if (rr_std <= 15.966582298278809) {
                if (dist_std <= 0.1390446275472641) {
                    if (rr_median <= 68.75) {
                        if (rr_std <= 9.484221935272217) {
                            if (diastolic_time <= 0.16681987792253494) {
                                votes[3] = 3;
                            } else {
                                votes[3] = 3;
                            }
                        } else {
                            if (rr_std <= 10.72160291671753) {
                                if (dist_std <= 0.04862413555383682) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 1;
                                }
                            } else {
                                if (diastolic_area <= -34.19900703430176) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 1;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 129.0) {
                            if (diastolic_area <= -34.776268005371094) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 5;
                            }
                        } else {
                            votes[3] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.19720634818077087) {
                        votes[3] = 3;
                    } else {
                        if (num_peaks <= 104.0) {
                            votes[3] = 2;
                        } else {
                            votes[3] = 2;
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (num_peaks <= 111.5) {
                        if (diastolic_area <= -22.1424503326416) {
                            if (dist_std <= 0.07314909622073174) {
                                votes[3] = 3;
                            } else {
                                votes[3] = 3;
                            }
                        } else {
                            votes[3] = 4;
                        }
                    } else {
                        if (diastolic_area <= -37.531394958496094) {
                            if (diastolic_time <= 0.13566666841506958) {
                                if (rr_median <= 65.0) {
                                    votes[3] = 4;
                                } else {
                                    votes[3] = 1;
                                }
                            } else {
                                votes[3] = 4;
                            }
                        } else {
                            if (diastolic_time <= 0.15718641132116318) {
                                votes[3] = 4;
                            } else {
                                votes[3] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 63.0) {
                        votes[3] = 1;
                    } else {
                        votes[3] = 3;
                    }
                }
            }
        } else {
            if (rr_median <= 99.25) {
                if (dist_std <= 0.05856667086482048) {
                    if (num_peaks <= 135.5) {
                        if (diastolic_area <= -58.449668884277344) {
                            if (rr_std <= 27.624653816223145) {
                                votes[3] = 3;
                            } else {
                                votes[3] = 1;
                            }
                        } else {
                            if (rr_median <= 90.5) {
                                if (dist_std <= 0.03679529018700123) {
                                    votes[3] = 4;
                                } else {
                                    votes[3] = 4;
                                }
                            } else {
                                votes[3] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.03622429817914963) {
                            votes[3] = 0;
                        } else {
                            if (diastolic_area <= -49.88899803161621) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 90.75) {
                        if (rr_median <= 88.25) {
                            if (dist_std <= 0.11930079385638237) {
                                if (dist_std <= 0.10550759732723236) {
                                    if (diastolic_area <= -38.97419357299805) {
                                        if (rr_std <= 10.270214796066284) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    } else {
                                        votes[3] = 1;
                                    }
                                } else {
                                    votes[3] = 1;
                                }
                            } else {
                                votes[3] = 5;
                            }
                        } else {
                            votes[3] = 3;
                        }
                    } else {
                        if (diastolic_area <= -51.66122245788574) {
                            votes[3] = 5;
                        } else {
                            if (dist_std <= 0.10187933966517448) {
                                if (num_peaks <= 117.5) {
                                    votes[3] = 5;
                                } else {
                                    votes[3] = 5;
                                }
                            } else {
                                votes[3] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 115.5) {
                    if (dist_std <= 0.039185620844364166) {
                        votes[3] = 4;
                    } else {
                        if (diastolic_time <= 0.059040043503046036) {
                            votes[3] = 1;
                        } else {
                            if (diastolic_area <= -56.09438514709473) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.027160183526575565) {
                        votes[3] = 3;
                    } else {
                        if (rr_std <= 13.559391975402832) {
                            if (diastolic_area <= -44.1284065246582) {
                                votes[3] = 1;
                            } else {
                                votes[3] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.07540076971054077) {
                                if (rr_std <= 36.63614559173584) {
                                    votes[3] = 1;
                                } else {
                                    votes[3] = 1;
                                }
                            } else {
                                votes[3] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.09502121806144714) {
            if (num_peaks <= 125.5) {
                if (diastolic_time <= 0.8026666641235352) {
                    if (rr_std <= 8.205877542495728) {
                        if (dist_std <= 0.07824961841106415) {
                            votes[3] = 5;
                        } else {
                            votes[3] = 5;
                        }
                    } else {
                        if (num_peaks <= 105.0) {
                            if (diastolic_area <= -18.08560562133789) {
                                if (num_peaks <= 82.5) {
                                    votes[3] = 2;
                                } else {
                                    votes[3] = 2;
                                }
                            } else {
                                if (diastolic_time <= 0.4839843213558197) {
                                    if (num_peaks <= 88.5) {
                                        if (diastolic_area <= -14.034976482391357) {
                                            votes[3] = 4;
                                        } else {
                                            votes[3] = 4;
                                        }
                                    } else {
                                        votes[3] = 4;
                                    }
                                } else {
                                    votes[3] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 84.25) {
                                if (diastolic_area <= -19.048627853393555) {
                                    votes[3] = 3;
                                } else {
                                    if (num_peaks <= 120.0) {
                                        votes[3] = 0;
                                    } else {
                                        votes[3] = 0;
                                    }
                                }
                            } else {
                                votes[3] = 5;
                            }
                        }
                    }
                } else {
                    votes[3] = 1;
                }
            } else {
                if (rr_std <= 7.802156209945679) {
                    if (diastolic_time <= 0.43933333456516266) {
                        votes[3] = 3;
                    } else {
                        votes[3] = 5;
                    }
                } else {
                    if (rr_median <= 53.25) {
                        if (diastolic_time <= 0.3765619099140167) {
                            votes[3] = 3;
                        } else {
                            votes[3] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.2837619036436081) {
                            votes[3] = 0;
                        } else {
                            if (dist_std <= 0.05554366298019886) {
                                if (rr_median <= 61.25) {
                                    if (num_peaks <= 144.5) {
                                        votes[3] = 0;
                                    } else {
                                        votes[3] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 132.5) {
                                        votes[3] = 0;
                                    } else {
                                        votes[3] = 0;
                                    }
                                }
                            } else {
                                votes[3] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 0.7025162577629089) {
                if (diastolic_area <= -27.22755718231201) {
                    votes[3] = 2;
                } else {
                    if (rr_median <= 74.25) {
                        votes[3] = 2;
                    } else {
                        votes[3] = 2;
                    }
                }
            } else {
                if (diastolic_area <= -24.34884262084961) {
                    votes[3] = 5;
                } else {
                    if (rr_median <= 91.0) {
                        if (rr_std <= 13.343807697296143) {
                            votes[3] = 2;
                        } else {
                            if (num_peaks <= 85.5) {
                                votes[3] = 2;
                            } else {
                                votes[3] = 2;
                            }
                        }
                    } else {
                        votes[3] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 4
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 76.25) {
            if (rr_std <= 17.11322784423828) {
                if (num_peaks <= 86.5) {
                    votes[4] = 4;
                } else {
                    if (diastolic_area <= 0.8408026695251465) {
                        if (num_peaks <= 132.5) {
                            if (num_peaks <= 119.5) {
                                if (dist_std <= 0.13440843671560287) {
                                    if (dist_std <= 0.12247582897543907) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 3;
                                    }
                                } else {
                                    votes[4] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.09126373752951622) {
                                    votes[4] = 3;
                                } else {
                                    if (rr_median <= 54.25) {
                                        votes[4] = 1;
                                    } else {
                                        if (diastolic_time <= 0.13527586311101913) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 145.5) {
                                votes[4] = 3;
                            } else {
                                votes[4] = 3;
                            }
                        }
                    } else {
                        votes[4] = 4;
                    }
                }
            } else {
                if (num_peaks <= 133.5) {
                    if (dist_std <= 0.11350099742412567) {
                        if (diastolic_area <= -63.27723693847656) {
                            votes[4] = 3;
                        } else {
                            if (diastolic_area <= -37.531394958496094) {
                                if (diastolic_time <= 0.14703628420829773) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 4;
                                }
                            } else {
                                votes[4] = 4;
                            }
                        }
                    } else {
                        votes[4] = 3;
                    }
                } else {
                    if (num_peaks <= 139.0) {
                        votes[4] = 3;
                    } else {
                        votes[4] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.036784859374165535) {
                if (num_peaks <= 132.5) {
                    if (diastolic_area <= -50.81014442443848) {
                        votes[4] = 1;
                    } else {
                        if (num_peaks <= 126.5) {
                            votes[4] = 4;
                        } else {
                            votes[4] = 4;
                        }
                    }
                } else {
                    votes[4] = 5;
                }
            } else {
                if (rr_median <= 102.5) {
                    if (diastolic_time <= 0.01563199982047081) {
                        votes[4] = 0;
                    } else {
                        if (diastolic_time <= 0.07903263717889786) {
                            if (rr_std <= 38.044015884399414) {
                                if (diastolic_area <= -92.99190902709961) {
                                    votes[4] = 5;
                                } else {
                                    if (diastolic_time <= 0.07079632952809334) {
                                        if (diastolic_time <= 0.05316782929003239) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 1;
                                        }
                                    } else {
                                        votes[4] = 3;
                                    }
                                }
                            } else {
                                votes[4] = 1;
                            }
                        } else {
                            if (dist_std <= 0.04884741082787514) {
                                if (rr_median <= 81.5) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 5;
                                }
                            } else {
                                if (num_peaks <= 111.0) {
                                    if (diastolic_area <= -39.28941345214844) {
                                        votes[4] = 5;
                                    } else {
                                        votes[4] = 1;
                                    }
                                } else {
                                    if (num_peaks <= 138.5) {
                                        if (diastolic_time <= 0.12366250157356262) {
                                            votes[4] = 3;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    } else {
                                        votes[4] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.011158470064401627) {
                        votes[4] = 4;
                    } else {
                        if (rr_std <= 21.970693588256836) {
                            if (rr_std <= 13.066021919250488) {
                                votes[4] = 1;
                            } else {
                                votes[4] = 1;
                            }
                        } else {
                            if (diastolic_area <= -108.9361801147461) {
                                votes[4] = 1;
                            } else {
                                if (diastolic_area <= -45.10761070251465) {
                                    votes[4] = 5;
                                } else {
                                    votes[4] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.0) {
            if (diastolic_time <= 0.6167076826095581) {
                if (dist_std <= 0.09846341237425804) {
                    if (rr_std <= 14.330915927886963) {
                        if (num_peaks <= 98.5) {
                            if (dist_std <= 0.08030113950371742) {
                                votes[4] = 5;
                            } else {
                                votes[4] = 5;
                            }
                        } else {
                            votes[4] = 0;
                        }
                    } else {
                        if (rr_median <= 76.75) {
                            if (num_peaks <= 104.5) {
                                if (diastolic_time <= 0.3940861225128174) {
                                    votes[4] = 2;
                                } else {
                                    votes[4] = 2;
                                }
                            } else {
                                if (rr_median <= 65.5) {
                                    votes[4] = 3;
                                } else {
                                    votes[4] = 0;
                                }
                            }
                        } else {
                            if (diastolic_area <= -16.160560607910156) {
                                if (diastolic_area <= -18.83934497833252) {
                                    votes[4] = 2;
                                } else {
                                    votes[4] = 5;
                                }
                            } else {
                                if (num_peaks <= 88.5) {
                                    if (rr_median <= 97.25) {
                                        votes[4] = 4;
                                    } else {
                                        votes[4] = 4;
                                    }
                                } else {
                                    votes[4] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 74.25) {
                        if (rr_median <= 66.5) {
                            votes[4] = 3;
                        } else {
                            if (num_peaks <= 105.5) {
                                votes[4] = 2;
                            } else {
                                votes[4] = 2;
                            }
                        }
                    } else {
                        if (dist_std <= 0.1203274354338646) {
                            votes[4] = 2;
                        } else {
                            votes[4] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[4] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[4] = 2;
                    } else {
                        votes[4] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.059801796451210976) {
                if (rr_std <= 7.789663076400757) {
                    if (dist_std <= 0.04165208898484707) {
                        votes[4] = 0;
                    } else {
                        votes[4] = 5;
                    }
                } else {
                    if (diastolic_time <= 0.29153968393802643) {
                        if (num_peaks <= 138.5) {
                            votes[4] = 0;
                        } else {
                            votes[4] = 3;
                        }
                    } else {
                        if (dist_std <= 0.05531432293355465) {
                            if (dist_std <= 0.029578506015241146) {
                                votes[4] = 0;
                            } else {
                                if (diastolic_area <= -18.90355396270752) {
                                    if (diastolic_time <= 0.33898964524269104) {
                                        votes[4] = 0;
                                    } else {
                                        votes[4] = 0;
                                    }
                                } else {
                                    votes[4] = 0;
                                }
                            }
                        } else {
                            votes[4] = 0;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.07220600545406342) {
                    votes[4] = 5;
                } else {
                    if (diastolic_area <= -19.09066390991211) {
                        if (diastolic_area <= -25.480921745300293) {
                            votes[4] = 5;
                        } else {
                            votes[4] = 3;
                        }
                    } else {
                        votes[4] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 5
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_median <= 98.5) {
            if (rr_std <= 16.006247520446777) {
                if (num_peaks <= 131.5) {
                    if (diastolic_time <= 0.05649115517735481) {
                        if (rr_std <= 9.919236183166504) {
                            votes[5] = 4;
                        } else {
                            votes[5] = 4;
                        }
                    } else {
                        if (dist_std <= 0.06900576502084732) {
                            if (diastolic_time <= 0.16295424848794937) {
                                if (diastolic_time <= 0.08833939209580421) {
                                    votes[5] = 1;
                                } else {
                                    if (diastolic_time <= 0.13446666300296783) {
                                        votes[5] = 5;
                                    } else {
                                        votes[5] = 5;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.058451391756534576) {
                                    votes[5] = 3;
                                } else {
                                    votes[5] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 75.5) {
                                if (dist_std <= 0.14202456176280975) {
                                    if (rr_median <= 48.25) {
                                        votes[5] = 4;
                                    } else {
                                        if (rr_std <= 6.094745635986328) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    }
                                } else {
                                    votes[5] = 2;
                                }
                            } else {
                                if (diastolic_time <= 0.1596766710281372) {
                                    if (diastolic_time <= 0.13340600579977036) {
                                        if (diastolic_area <= -46.680999755859375) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    } else {
                                        votes[5] = 1;
                                    }
                                } else {
                                    votes[5] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 73.75) {
                        if (dist_std <= 0.033564917743206024) {
                            votes[5] = 3;
                        } else {
                            votes[5] = 3;
                        }
                    } else {
                        if (num_peaks <= 142.5) {
                            votes[5] = 3;
                        } else {
                            votes[5] = 0;
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (diastolic_area <= -49.25034141540527) {
                        if (diastolic_area <= -55.739646911621094) {
                            if (rr_std <= 21.516297340393066) {
                                votes[5] = 3;
                            } else {
                                votes[5] = 1;
                            }
                        } else {
                            votes[5] = 5;
                        }
                    } else {
                        if (dist_std <= 0.11760768294334412) {
                            if (rr_median <= 86.5) {
                                if (diastolic_area <= -37.255577087402344) {
                                    if (dist_std <= 0.03589186631143093) {
                                        votes[5] = 4;
                                    } else {
                                        if (diastolic_time <= 0.15494641661643982) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 4;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.1814987063407898) {
                                        votes[5] = 4;
                                    } else {
                                        votes[5] = 4;
                                    }
                                }
                            } else {
                                votes[5] = 4;
                            }
                        } else {
                            votes[5] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 76.5) {
                        if (rr_std <= 32.66958808898926) {
                            if (dist_std <= 0.07091420143842697) {
                                votes[5] = 3;
                            } else {
                                votes[5] = 3;
                            }
                        } else {
                            votes[5] = 1;
                        }
                    } else {
                        if (num_peaks <= 137.0) {
                            votes[5] = 4;
                        } else {
                            votes[5] = 5;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -37.016340255737305) {
                if (diastolic_area <= -81.4401626586914) {
                    if (rr_median <= 115.5) {
                        if (dist_std <= 0.054879751056432724) {
                            votes[5] = 1;
                        } else {
                            votes[5] = 1;
                        }
                    } else {
                        votes[5] = 1;
                    }
                } else {
                    if (rr_std <= 2.395332455635071) {
                        if (diastolic_area <= -69.96438980102539) {
                            votes[5] = 1;
                        } else {
                            votes[5] = 1;
                        }
                    } else {
                        if (rr_median <= 139.75) {
                            if (diastolic_area <= -52.1605167388916) {
                                votes[5] = 5;
                            } else {
                                votes[5] = 1;
                            }
                        } else {
                            votes[5] = 1;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.06034434586763382) {
                    if (num_peaks <= 113.0) {
                        votes[5] = 4;
                    } else {
                        votes[5] = 4;
                    }
                } else {
                    if (rr_std <= 15.28866457939148) {
                        votes[5] = 1;
                    } else {
                        votes[5] = 3;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 127.5) {
            if (diastolic_area <= -18.82423496246338) {
                if (num_peaks <= 90.5) {
                    if (rr_median <= 89.0) {
                        if (diastolic_time <= 0.5116166770458221) {
                            if (rr_std <= 27.22122859954834) {
                                if (rr_median <= 74.25) {
                                    votes[5] = 2;
                                } else {
                                    votes[5] = 2;
                                }
                            } else {
                                votes[5] = 2;
                            }
                        } else {
                            votes[5] = 5;
                        }
                    } else {
                        votes[5] = 5;
                    }
                } else {
                    if (rr_median <= 66.25) {
                        votes[5] = 3;
                    } else {
                        if (dist_std <= 0.13460960984230042) {
                            if (rr_std <= 11.71888017654419) {
                                if (rr_std <= 0.906762957572937) {
                                    if (dist_std <= 0.1248028352856636) {
                                        votes[5] = 5;
                                    } else {
                                        votes[5] = 5;
                                    }
                                } else {
                                    votes[5] = 5;
                                }
                            } else {
                                votes[5] = 2;
                            }
                        } else {
                            if (num_peaks <= 109.0) {
                                votes[5] = 2;
                            } else {
                                votes[5] = 2;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6167076826095581) {
                    if (num_peaks <= 88.5) {
                        if (rr_median <= 98.5) {
                            if (diastolic_area <= -15.823173522949219) {
                                votes[5] = 4;
                            } else {
                                votes[5] = 4;
                            }
                        } else {
                            votes[5] = 1;
                        }
                    } else {
                        if (diastolic_area <= -17.05687713623047) {
                            votes[5] = 5;
                        } else {
                            if (dist_std <= 0.06805750727653503) {
                                if (rr_median <= 75.25) {
                                    if (dist_std <= 0.037845395505428314) {
                                        votes[5] = 0;
                                    } else {
                                        votes[5] = 0;
                                    }
                                } else {
                                    votes[5] = 5;
                                }
                            } else {
                                votes[5] = 2;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -13.703922748565674) {
                        votes[5] = 5;
                    } else {
                        if (rr_median <= 79.25) {
                            votes[5] = 1;
                        } else {
                            votes[5] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06048966757953167) {
                if (diastolic_time <= 0.2809973508119583) {
                    votes[5] = 5;
                } else {
                    if (rr_std <= 8.305138111114502) {
                        votes[5] = 0;
                    } else {
                        if (rr_median <= 53.5) {
                            votes[5] = 0;
                        } else {
                            if (dist_std <= 0.05531432293355465) {
                                votes[5] = 0;
                            } else {
                                votes[5] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 87.5) {
                    votes[5] = 3;
                } else {
                    votes[5] = 2;
                }
            }
        }
    }
// Decision rules for tree 6
    if (diastolic_time <= 0.24411730468273163) {
        if (rr_std <= 16.939903259277344) {
            if (rr_median <= 85.75) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.07042357325553894) {
                        if (num_peaks <= 120.5) {
                            votes[6] = 4;
                        } else {
                            if (num_peaks <= 133.0) {
                                if (diastolic_area <= -38.53718185424805) {
                                    votes[6] = 3;
                                } else {
                                    votes[6] = 3;
                                }
                            } else {
                                votes[6] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 119.5) {
                            if (dist_std <= 0.14412496984004974) {
                                if (dist_std <= 0.1134728379547596) {
                                    votes[6] = 4;
                                } else {
                                    votes[6] = 3;
                                }
                            } else {
                                votes[6] = 2;
                            }
                        } else {
                            if (diastolic_area <= -31.070392608642578) {
                                votes[6] = 1;
                            } else {
                                votes[6] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.34977388381958) {
                        if (diastolic_time <= 0.17264023423194885) {
                            if (num_peaks <= 117.5) {
                                votes[6] = 5;
                            } else {
                                votes[6] = 5;
                            }
                        } else {
                            votes[6] = 3;
                        }
                    } else {
                        votes[6] = 3;
                    }
                }
            } else {
                if (rr_std <= 0.20786985754966736) {
                    votes[6] = 4;
                } else {
                    if (rr_median <= 101.0) {
                        if (rr_median <= 90.25) {
                            if (diastolic_area <= -38.41623878479004) {
                                votes[6] = 1;
                            } else {
                                votes[6] = 1;
                            }
                        } else {
                            if (num_peaks <= 142.5) {
                                if (diastolic_time <= 0.1563921570777893) {
                                    votes[6] = 3;
                                } else {
                                    votes[6] = 5;
                                }
                            } else {
                                votes[6] = 0;
                            }
                        }
                    } else {
                        if (dist_std <= 0.05583411082625389) {
                            votes[6] = 1;
                        } else {
                            votes[6] = 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -58.41581726074219) {
                if (diastolic_time <= 0.06129005737602711) {
                    if (dist_std <= 0.04972234182059765) {
                        votes[6] = 1;
                    } else {
                        votes[6] = 1;
                    }
                } else {
                    if (rr_std <= 20.532663345336914) {
                        votes[6] = 5;
                    } else {
                        if (rr_std <= 25.29766845703125) {
                            votes[6] = 1;
                        } else {
                            if (diastolic_time <= 0.08613719791173935) {
                                votes[6] = 1;
                            } else {
                                votes[6] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.11696609482169151) {
                        if (rr_median <= 90.25) {
                            if (diastolic_area <= -37.531394958496094) {
                                if (diastolic_time <= 0.1454830765724182) {
                                    if (dist_std <= 0.04485115967690945) {
                                        votes[6] = 5;
                                    } else {
                                        votes[6] = 4;
                                    }
                                } else {
                                    if (rr_median <= 76.5) {
                                        votes[6] = 4;
                                    } else {
                                        votes[6] = 4;
                                    }
                                }
                            } else {
                                if (rr_median <= 58.0) {
                                    votes[6] = 4;
                                } else {
                                    if (num_peaks <= 127.5) {
                                        if (rr_std <= 52.14064979553223) {
                                            votes[6] = 4;
                                        } else {
                                            votes[6] = 4;
                                        }
                                    } else {
                                        votes[6] = 4;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.06683739274740219) {
                                if (rr_std <= 49.348819732666016) {
                                    if (dist_std <= 0.03676833584904671) {
                                        votes[6] = 4;
                                    } else {
                                        votes[6] = 1;
                                    }
                                } else {
                                    if (diastolic_area <= -27.107892990112305) {
                                        votes[6] = 4;
                                    } else {
                                        votes[6] = 4;
                                    }
                                }
                            } else {
                                votes[6] = 5;
                            }
                        }
                    } else {
                        if (diastolic_area <= -32.21397113800049) {
                            votes[6] = 5;
                        } else {
                            votes[6] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.15405337512493134) {
                        if (diastolic_time <= 0.09746775776147842) {
                            votes[6] = 0;
                        } else {
                            votes[6] = 3;
                        }
                    } else {
                        votes[6] = 5;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 127.5) {
            if (diastolic_area <= -17.78892230987549) {
                if (num_peaks <= 90.5) {
                    if (rr_median <= 89.5) {
                        if (diastolic_time <= 0.5116166770458221) {
                            if (dist_std <= 0.18107539415359497) {
                                if (rr_median <= 74.25) {
                                    votes[6] = 2;
                                } else {
                                    votes[6] = 2;
                                }
                            } else {
                                votes[6] = 2;
                            }
                        } else {
                            votes[6] = 2;
                        }
                    } else {
                        votes[6] = 5;
                    }
                } else {
                    if (dist_std <= 0.13460960984230042) {
                        if (rr_median <= 66.25) {
                            if (diastolic_area <= -26.56255054473877) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        } else {
                            if (rr_std <= 14.330915927886963) {
                                if (dist_std <= 0.0967726893723011) {
                                    votes[6] = 5;
                                } else {
                                    if (diastolic_area <= -24.860212326049805) {
                                        votes[6] = 5;
                                    } else {
                                        votes[6] = 2;
                                    }
                                }
                            } else {
                                votes[6] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 113.0) {
                            votes[6] = 2;
                        } else {
                            votes[6] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6243076920509338) {
                    if (num_peaks <= 94.5) {
                        if (diastolic_area <= -15.292630195617676) {
                            votes[6] = 5;
                        } else {
                            if (rr_median <= 78.75) {
                                votes[6] = 4;
                            } else {
                                votes[6] = 4;
                            }
                        }
                    } else {
                        if (dist_std <= 0.03685133159160614) {
                            votes[6] = 0;
                        } else {
                            if (dist_std <= 0.08556459099054337) {
                                votes[6] = 5;
                            } else {
                                votes[6] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 7.973716974258423) {
                        votes[6] = 5;
                    } else {
                        if (rr_median <= 79.75) {
                            votes[6] = 1;
                        } else {
                            votes[6] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 6.039847135543823) {
                votes[6] = 5;
            } else {
                if (rr_median <= 53.5) {
                    if (diastolic_area <= -15.640919208526611) {
                        votes[6] = 3;
                    } else {
                        votes[6] = 0;
                    }
                } else {
                    if (diastolic_time <= 0.2809973508119583) {
                        votes[6] = 5;
                    } else {
                        if (dist_std <= 0.06301298178732395) {
                            if (rr_std <= 8.024813890457153) {
                                votes[6] = 0;
                            } else {
                                if (diastolic_time <= 0.8066666722297668) {
                                    if (num_peaks <= 132.5) {
                                        votes[6] = 0;
                                    } else {
                                        if (dist_std <= 0.029281525872647762) {
                                            votes[6] = 0;
                                        } else {
                                            votes[6] = 0;
                                        }
                                    }
                                } else {
                                    votes[6] = 0;
                                }
                            }
                        } else {
                            votes[6] = 2;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 7
    if (diastolic_time <= 0.27653968334198) {
        if (rr_median <= 67.75) {
            if (rr_std <= 14.666455268859863) {
                if (dist_std <= 0.1408340260386467) {
                    if (dist_std <= 0.044833263382315636) {
                        if (num_peaks <= 131.5) {
                            votes[7] = 3;
                        } else {
                            votes[7] = 3;
                        }
                    } else {
                        if (num_peaks <= 119.5) {
                            if (dist_std <= 0.1271115392446518) {
                                votes[7] = 3;
                            } else {
                                votes[7] = 3;
                            }
                        } else {
                            if (dist_std <= 0.0815422348678112) {
                                if (rr_median <= 59.25) {
                                    if (diastolic_area <= -37.30723571777344) {
                                        votes[7] = 3;
                                    } else {
                                        votes[7] = 3;
                                    }
                                } else {
                                    votes[7] = 1;
                                }
                            } else {
                                votes[7] = 1;
                            }
                        }
                    }
                } else {
                    votes[7] = 4;
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (rr_std <= 45.227582931518555) {
                        if (diastolic_area <= -48.447702407836914) {
                            votes[7] = 4;
                        } else {
                            if (diastolic_time <= 0.16064000129699707) {
                                if (dist_std <= 0.09304540604352951) {
                                    votes[7] = 4;
                                } else {
                                    votes[7] = 4;
                                }
                            } else {
                                votes[7] = 4;
                            }
                        }
                    } else {
                        votes[7] = 3;
                    }
                } else {
                    if (diastolic_time <= 0.11034199222922325) {
                        votes[7] = 3;
                    } else {
                        votes[7] = 5;
                    }
                }
            }
        } else {
            if (diastolic_area <= -80.73216247558594) {
                if (diastolic_time <= 0.06129005737602711) {
                    if (diastolic_area <= -109.35605239868164) {
                        votes[7] = 1;
                    } else {
                        votes[7] = 1;
                    }
                } else {
                    if (diastolic_area <= -97.11182022094727) {
                        if (diastolic_time <= 0.07992653176188469) {
                            votes[7] = 5;
                        } else {
                            votes[7] = 1;
                        }
                    } else {
                        if (rr_std <= 21.146717071533203) {
                            votes[7] = 1;
                        } else {
                            votes[7] = 1;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.04931507259607315) {
                    if (num_peaks <= 127.5) {
                        if (dist_std <= 0.04166753217577934) {
                            if (dist_std <= 0.03590957447886467) {
                                votes[7] = 4;
                            } else {
                                votes[7] = 4;
                            }
                        } else {
                            if (rr_std <= 32.21234607696533) {
                                votes[7] = 5;
                            } else {
                                votes[7] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.08422023802995682) {
                            votes[7] = 1;
                        } else {
                            if (num_peaks <= 135.5) {
                                if (rr_std <= 17.303704261779785) {
                                    votes[7] = 3;
                                } else {
                                    votes[7] = 4;
                                }
                            } else {
                                if (rr_std <= 23.156907081604004) {
                                    votes[7] = 5;
                                } else {
                                    votes[7] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 25.231708526611328) {
                        if (rr_median <= 101.5) {
                            if (dist_std <= 0.12222974374890327) {
                                if (num_peaks <= 110.5) {
                                    if (rr_std <= 5.5974913239479065) {
                                        if (rr_std <= 0.6840213239192963) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    } else {
                                        votes[7] = 1;
                                    }
                                } else {
                                    if (dist_std <= 0.09829488769173622) {
                                        if (dist_std <= 0.05279909446835518) {
                                            votes[7] = 0;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 86.25) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (dist_std <= 0.1374872773885727) {
                                    votes[7] = 5;
                                } else {
                                    votes[7] = 2;
                                }
                            }
                        } else {
                            if (dist_std <= 0.07434607669711113) {
                                votes[7] = 1;
                            } else {
                                votes[7] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 91.5) {
                            votes[7] = 4;
                        } else {
                            if (diastolic_time <= 0.04569128528237343) {
                                votes[7] = 4;
                            } else {
                                if (rr_std <= 33.047603607177734) {
                                    votes[7] = 3;
                                } else {
                                    if (rr_std <= 56.61812782287598) {
                                        votes[7] = 5;
                                    } else {
                                        votes[7] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_area <= -18.2442684173584) {
                if (num_peaks <= 90.5) {
                    if (rr_median <= 89.0) {
                        if (diastolic_time <= 0.5200357139110565) {
                            if (rr_median <= 74.25) {
                                votes[7] = 2;
                            } else {
                                votes[7] = 2;
                            }
                        } else {
                            votes[7] = 2;
                        }
                    } else {
                        votes[7] = 4;
                    }
                } else {
                    if (dist_std <= 0.13581082969903946) {
                        if (rr_median <= 63.5) {
                            votes[7] = 3;
                        } else {
                            if (dist_std <= 0.05451356992125511) {
                                votes[7] = 0;
                            } else {
                                if (diastolic_area <= -22.64767074584961) {
                                    votes[7] = 5;
                                } else {
                                    votes[7] = 3;
                                }
                            }
                        }
                    } else {
                        votes[7] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 0.6332587599754333) {
                    if (rr_std <= 20.463601112365723) {
                        if (dist_std <= 0.0839807391166687) {
                            if (diastolic_area <= -15.960935115814209) {
                                votes[7] = 5;
                            } else {
                                votes[7] = 0;
                            }
                        } else {
                            votes[7] = 2;
                        }
                    } else {
                        if (rr_median <= 76.0) {
                            votes[7] = 0;
                        } else {
                            if (rr_median <= 104.0) {
                                if (diastolic_area <= -15.508350372314453) {
                                    votes[7] = 4;
                                } else {
                                    if (diastolic_area <= -12.541091918945312) {
                                        votes[7] = 4;
                                    } else {
                                        votes[7] = 4;
                                    }
                                }
                            } else {
                                votes[7] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.479978561401367) {
                        votes[7] = 5;
                    } else {
                        if (rr_median <= 79.5) {
                            votes[7] = 2;
                        } else {
                            votes[7] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06707930192351341) {
                if (rr_median <= 55.75) {
                    if (diastolic_area <= -15.56245470046997) {
                        votes[7] = 3;
                    } else {
                        votes[7] = 0;
                    }
                } else {
                    if (rr_std <= 7.866401195526123) {
                        votes[7] = 0;
                    } else {
                        if (diastolic_time <= 0.7707555592060089) {
                            if (diastolic_time <= 0.29559341073036194) {
                                votes[7] = 0;
                            } else {
                                if (num_peaks <= 132.5) {
                                    votes[7] = 0;
                                } else {
                                    if (rr_median <= 61.25) {
                                        if (rr_std <= 13.028947353363037) {
                                            votes[7] = 0;
                                        } else {
                                            votes[7] = 0;
                                        }
                                    } else {
                                        votes[7] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[7] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -20.48350715637207) {
                    votes[7] = 3;
                } else {
                    votes[7] = 2;
                }
            }
        }
    }
// Decision rules for tree 8
    if (diastolic_time <= 0.24351514875888824) {
        if (rr_median <= 99.5) {
            if (rr_std <= 15.967272281646729) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.14075222611427307) {
                        if (rr_median <= 44.75) {
                            votes[8] = 1;
                        } else {
                            if (diastolic_time <= 0.19492381066083908) {
                                if (rr_std <= 10.06764030456543) {
                                    if (diastolic_time <= 0.07215966656804085) {
                                        if (diastolic_time <= 0.0636041946709156) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 1;
                                        }
                                    } else {
                                        votes[8] = 3;
                                    }
                                } else {
                                    if (rr_std <= 10.983432292938232) {
                                        votes[8] = 1;
                                    } else {
                                        if (diastolic_area <= -34.19900703430176) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[8] = 5;
                            }
                        }
                    } else {
                        votes[8] = 2;
                    }
                } else {
                    if (diastolic_time <= 0.01662295125424862) {
                        votes[8] = 0;
                    } else {
                        if (diastolic_area <= -81.3512954711914) {
                            votes[8] = 3;
                        } else {
                            if (num_peaks <= 121.0) {
                                if (rr_std <= 7.991407155990601) {
                                    if (rr_std <= 0.936164528131485) {
                                        if (diastolic_area <= -29.111421585083008) {
                                            votes[8] = 1;
                                        } else {
                                            votes[8] = 5;
                                        }
                                    } else {
                                        votes[8] = 5;
                                    }
                                } else {
                                    votes[8] = 1;
                                }
                            } else {
                                if (diastolic_time <= 0.17577239125967026) {
                                    if (num_peaks <= 130.5) {
                                        votes[8] = 5;
                                    } else {
                                        votes[8] = 5;
                                    }
                                } else {
                                    votes[8] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -51.946868896484375) {
                    if (rr_std <= 19.502196311950684) {
                        votes[8] = 3;
                    } else {
                        if (diastolic_time <= 0.07620153203606606) {
                            if (diastolic_area <= -93.82877731323242) {
                                votes[8] = 1;
                            } else {
                                votes[8] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.10395557060837746) {
                                if (num_peaks <= 131.5) {
                                    votes[8] = 5;
                                } else {
                                    votes[8] = 1;
                                }
                            } else {
                                votes[8] = 4;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 134.0) {
                        if (dist_std <= 0.1197422482073307) {
                            if (dist_std <= 0.020332484506070614) {
                                votes[8] = 5;
                            } else {
                                if (dist_std <= 0.10825156047940254) {
                                    if (rr_median <= 92.25) {
                                        if (diastolic_area <= -37.42107582092285) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    } else {
                                        votes[8] = 4;
                                    }
                                } else {
                                    votes[8] = 4;
                                }
                            }
                        } else {
                            votes[8] = 3;
                        }
                    } else {
                        if (num_peaks <= 139.5) {
                            if (rr_std <= 29.026833534240723) {
                                votes[8] = 3;
                            } else {
                                votes[8] = 3;
                            }
                        } else {
                            votes[8] = 5;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -35.72649955749512) {
                if (num_peaks <= 93.5) {
                    votes[8] = 5;
                } else {
                    if (diastolic_area <= -93.62861633300781) {
                        votes[8] = 1;
                    } else {
                        if (rr_std <= 13.071290016174316) {
                            if (diastolic_time <= 0.06974703818559647) {
                                votes[8] = 1;
                            } else {
                                votes[8] = 1;
                            }
                        } else {
                            if (rr_std <= 24.063209533691406) {
                                votes[8] = 5;
                            } else {
                                votes[8] = 1;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 128.0) {
                    if (dist_std <= 0.07312656566500664) {
                        votes[8] = 4;
                    } else {
                        votes[8] = 3;
                    }
                } else {
                    votes[8] = 1;
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_area <= -18.817914962768555) {
                if (num_peaks <= 97.5) {
                    if (rr_median <= 86.5) {
                        if (dist_std <= 0.09623928368091583) {
                            if (rr_std <= 17.568023681640625) {
                                votes[8] = 5;
                            } else {
                                votes[8] = 2;
                            }
                        } else {
                            votes[8] = 2;
                        }
                    } else {
                        votes[8] = 5;
                    }
                } else {
                    if (rr_median <= 64.0) {
                        if (dist_std <= 0.09178251400589943) {
                            votes[8] = 3;
                        } else {
                            votes[8] = 3;
                        }
                    } else {
                        if (dist_std <= 0.13581082969903946) {
                            if (rr_std <= 5.115602731704712) {
                                if (num_peaks <= 109.0) {
                                    votes[8] = 5;
                                } else {
                                    votes[8] = 5;
                                }
                            } else {
                                votes[8] = 0;
                            }
                        } else {
                            votes[8] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8026666641235352) {
                    if (num_peaks <= 88.5) {
                        if (rr_median <= 99.5) {
                            if (diastolic_time <= 0.4022941142320633) {
                                votes[8] = 4;
                            } else {
                                votes[8] = 4;
                            }
                        } else {
                            votes[8] = 5;
                        }
                    } else {
                        if (dist_std <= 0.030651387758553028) {
                            if (rr_std <= 14.582915306091309) {
                                votes[8] = 5;
                            } else {
                                votes[8] = 0;
                            }
                        } else {
                            if (diastolic_time <= 0.2949230670928955) {
                                votes[8] = 1;
                            } else {
                                if (dist_std <= 0.05601821281015873) {
                                    votes[8] = 4;
                                } else {
                                    if (dist_std <= 0.08556459099054337) {
                                        votes[8] = 5;
                                    } else {
                                        votes[8] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 38.000619888305664) {
                        votes[8] = 1;
                    } else {
                        votes[8] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06491324678063393) {
                if (rr_median <= 52.25) {
                    votes[8] = 1;
                } else {
                    if (rr_std <= 7.398756265640259) {
                        votes[8] = 5;
                    } else {
                        if (diastolic_time <= 0.29153968393802643) {
                            if (dist_std <= 0.04309912398457527) {
                                votes[8] = 3;
                            } else {
                                votes[8] = 0;
                            }
                        } else {
                            if (diastolic_area <= -6.191311836242676) {
                                if (rr_std <= 8.712254524230957) {
                                    votes[8] = 0;
                                } else {
                                    if (rr_median <= 61.25) {
                                        if (diastolic_time <= 0.43341176211833954) {
                                            votes[8] = 0;
                                        } else {
                                            votes[8] = 0;
                                        }
                                    } else {
                                        votes[8] = 0;
                                    }
                                }
                            } else {
                                votes[8] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 29.154199600219727) {
                    if (rr_median <= 75.0) {
                        votes[8] = 5;
                    } else {
                        votes[8] = 3;
                    }
                } else {
                    votes[8] = 2;
                }
            }
        }
    }
// Decision rules for tree 9
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 99.5) {
            if (rr_std <= 14.180799007415771) {
                if (rr_median <= 66.5) {
                    if (dist_std <= 0.05969591997563839) {
                        if (dist_std <= 0.032016849145293236) {
                            votes[9] = 3;
                        } else {
                            if (rr_std <= 10.076533794403076) {
                                votes[9] = 3;
                            } else {
                                if (diastolic_area <= -38.245182037353516) {
                                    votes[9] = 3;
                                } else {
                                    votes[9] = 3;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 119.0) {
                            if (rr_median <= 48.5) {
                                votes[9] = 4;
                            } else {
                                votes[9] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.06899178773164749) {
                                votes[9] = 3;
                            } else {
                                if (diastolic_time <= 0.16664527356624603) {
                                    votes[9] = 1;
                                } else {
                                    votes[9] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 130.5) {
                        if (rr_median <= 68.5) {
                            votes[9] = 2;
                        } else {
                            if (rr_std <= 0.692467451095581) {
                                if (diastolic_time <= 0.12221627682447433) {
                                    votes[9] = 3;
                                } else {
                                    if (diastolic_time <= 0.16305945068597794) {
                                        votes[9] = 1;
                                    } else {
                                        votes[9] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.0966673195362091) {
                                    if (num_peaks <= 117.5) {
                                        votes[9] = 5;
                                    } else {
                                        votes[9] = 5;
                                    }
                                } else {
                                    if (rr_median <= 83.0) {
                                        if (diastolic_area <= -31.438481330871582) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 3;
                                        }
                                    } else {
                                        votes[9] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -26.395896911621094) {
                            if (num_peaks <= 134.5) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 3;
                            }
                        } else {
                            votes[9] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -49.72542762756348) {
                    if (rr_median <= 65.75) {
                        votes[9] = 3;
                    } else {
                        if (rr_std <= 26.233665466308594) {
                            if (rr_median <= 77.5) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.07572102546691895) {
                                votes[9] = 1;
                            } else {
                                votes[9] = 5;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 135.5) {
                        if (dist_std <= 0.11760768294334412) {
                            if (diastolic_time <= 0.23484329134225845) {
                                if (rr_std <= 16.006247520446777) {
                                    votes[9] = 4;
                                } else {
                                    if (rr_median <= 90.5) {
                                        if (diastolic_area <= -37.531394958496094) {
                                            votes[9] = 4;
                                        } else {
                                            votes[9] = 4;
                                        }
                                    } else {
                                        votes[9] = 4;
                                    }
                                }
                            } else {
                                if (rr_median <= 66.5) {
                                    votes[9] = 3;
                                } else {
                                    votes[9] = 4;
                                }
                            }
                        } else {
                            votes[9] = 3;
                        }
                    } else {
                        if (rr_median <= 75.0) {
                            if (num_peaks <= 139.5) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 1;
                            }
                        } else {
                            votes[9] = 0;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 113.5) {
                if (diastolic_area <= -54.67831611633301) {
                    votes[9] = 1;
                } else {
                    if (num_peaks <= 86.0) {
                        votes[9] = 3;
                    } else {
                        votes[9] = 4;
                    }
                }
            } else {
                if (num_peaks <= 145.0) {
                    if (diastolic_area <= -16.897181034088135) {
                        if (diastolic_area <= -82.90999984741211) {
                            votes[9] = 1;
                        } else {
                            if (dist_std <= 0.06246183626353741) {
                                if (diastolic_time <= 0.08774392679333687) {
                                    votes[9] = 1;
                                } else {
                                    votes[9] = 5;
                                }
                            } else {
                                if (diastolic_area <= -48.53939437866211) {
                                    votes[9] = 1;
                                } else {
                                    votes[9] = 1;
                                }
                            }
                        }
                    } else {
                        votes[9] = 1;
                    }
                } else {
                    votes[9] = 5;
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_time <= 0.6243076920509338) {
                if (dist_std <= 0.09846341237425804) {
                    if (num_peaks <= 107.5) {
                        if (rr_std <= 14.823174476623535) {
                            if (rr_median <= 66.0) {
                                votes[9] = 3;
                            } else {
                                if (diastolic_time <= 0.42205262184143066) {
                                    votes[9] = 5;
                                } else {
                                    votes[9] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 78.25) {
                                if (dist_std <= 0.05167624354362488) {
                                    votes[9] = 2;
                                } else {
                                    votes[9] = 2;
                                }
                            } else {
                                if (diastolic_area <= -16.265578269958496) {
                                    if (rr_median <= 83.75) {
                                        votes[9] = 2;
                                    } else {
                                        votes[9] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 0.4236764758825302) {
                                        votes[9] = 4;
                                    } else {
                                        votes[9] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -13.16944408416748) {
                            votes[9] = 0;
                        } else {
                            votes[9] = 0;
                        }
                    }
                } else {
                    if (diastolic_area <= -28.482211112976074) {
                        votes[9] = 5;
                    } else {
                        if (num_peaks <= 111.5) {
                            if (num_peaks <= 91.5) {
                                votes[9] = 2;
                            } else {
                                votes[9] = 2;
                            }
                        } else {
                            votes[9] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -12.977253913879395) {
                    votes[9] = 5;
                } else {
                    votes[9] = 1;
                }
            }
        } else {
            if (dist_std <= 0.06789740547537804) {
                if (rr_median <= 52.25) {
                    votes[9] = 3;
                } else {
                    if (rr_std <= 7.789663076400757) {
                        votes[9] = 3;
                    } else {
                        if (diastolic_area <= -6.552235841751099) {
                            if (diastolic_area <= -18.90355396270752) {
                                if (num_peaks <= 140.5) {
                                    votes[9] = 0;
                                } else {
                                    votes[9] = 0;
                                }
                            } else {
                                if (diastolic_time <= 0.3612813800573349) {
                                    votes[9] = 0;
                                } else {
                                    votes[9] = 0;
                                }
                            }
                        } else {
                            votes[9] = 0;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.09142050892114639) {
                    votes[9] = 3;
                } else {
                    votes[9] = 2;
                }
            }
        }
    }
// Decision rules for tree 10
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 75.5) {
            if (rr_std <= 15.860590934753418) {
                if (num_peaks <= 131.5) {
                    if (diastolic_time <= 0.03467367962002754) {
                        votes[10] = 4;
                    } else {
                        if (num_peaks <= 127.5) {
                            if (num_peaks <= 119.5) {
                                if (rr_median <= 68.75) {
                                    if (diastolic_area <= -32.273712158203125) {
                                        votes[10] = 3;
                                    } else {
                                        votes[10] = 3;
                                    }
                                } else {
                                    votes[10] = 3;
                                }
                            } else {
                                if (dist_std <= 0.1070527732372284) {
                                    votes[10] = 3;
                                } else {
                                    votes[10] = 1;
                                }
                            }
                        } else {
                            if (dist_std <= 0.054029516875743866) {
                                votes[10] = 5;
                            } else {
                                votes[10] = 1;
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.07846580073237419) {
                        if (rr_median <= 63.5) {
                            votes[10] = 3;
                        } else {
                            votes[10] = 3;
                        }
                    } else {
                        votes[10] = 3;
                    }
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (diastolic_area <= -36.364051818847656) {
                        if (diastolic_time <= 0.13566666841506958) {
                            votes[10] = 5;
                        } else {
                            votes[10] = 4;
                        }
                    } else {
                        if (num_peaks <= 71.5) {
                            votes[10] = 4;
                        } else {
                            if (diastolic_area <= -25.865483283996582) {
                                votes[10] = 4;
                            } else {
                                votes[10] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 31.28329372406006) {
                        if (num_peaks <= 135.5) {
                            votes[10] = 3;
                        } else {
                            votes[10] = 3;
                        }
                    } else {
                        votes[10] = 1;
                    }
                }
            }
        } else {
            if (diastolic_area <= -61.550397872924805) {
                if (rr_median <= 96.5) {
                    if (diastolic_area <= -79.68040084838867) {
                        if (diastolic_area <= -97.38701248168945) {
                            votes[10] = 1;
                        } else {
                            votes[10] = 3;
                        }
                    } else {
                        votes[10] = 5;
                    }
                } else {
                    if (diastolic_time <= 0.10200454294681549) {
                        if (rr_median <= 101.0) {
                            votes[10] = 1;
                        } else {
                            if (rr_std <= 3.0510069131851196) {
                                votes[10] = 1;
                            } else {
                                votes[10] = 1;
                            }
                        }
                    } else {
                        votes[10] = 5;
                    }
                }
            } else {
                if (dist_std <= 0.06289881467819214) {
                    if (num_peaks <= 127.5) {
                        if (rr_std <= 16.551016807556152) {
                            if (dist_std <= 0.03608044423162937) {
                                votes[10] = 4;
                            } else {
                                votes[10] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.1139594204723835) {
                                if (rr_std <= 51.47124481201172) {
                                    votes[10] = 1;
                                } else {
                                    votes[10] = 4;
                                }
                            } else {
                                if (rr_std <= 32.71383285522461) {
                                    votes[10] = 4;
                                } else {
                                    votes[10] = 4;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.08617415651679039) {
                            votes[10] = 0;
                        } else {
                            if (rr_std <= 29.708641052246094) {
                                votes[10] = 5;
                            } else {
                                votes[10] = 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -3.3637715578079224) {
                        if (rr_median <= 109.75) {
                            if (diastolic_time <= 0.15559059381484985) {
                                if (diastolic_time <= 0.09809117391705513) {
                                    votes[10] = 5;
                                } else {
                                    if (diastolic_area <= -37.304786682128906) {
                                        votes[10] = 5;
                                    } else {
                                        votes[10] = 1;
                                    }
                                }
                            } else {
                                votes[10] = 5;
                            }
                        } else {
                            votes[10] = 3;
                        }
                    } else {
                        votes[10] = 1;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05419931933283806) {
            if (num_peaks <= 108.5) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (dist_std <= 0.03716392442584038) {
                        votes[10] = 5;
                    } else {
                        if (diastolic_area <= -14.09222936630249) {
                            votes[10] = 2;
                        } else {
                            votes[10] = 4;
                        }
                    }
                } else {
                    votes[10] = 1;
                }
            } else {
                if (rr_std <= 7.789663076400757) {
                    votes[10] = 3;
                } else {
                    if (diastolic_area <= -18.715136528015137) {
                        if (diastolic_area <= -20.940074920654297) {
                            if (diastolic_time <= 0.29153968393802643) {
                                votes[10] = 3;
                            } else {
                                votes[10] = 0;
                            }
                        } else {
                            votes[10] = 3;
                        }
                    } else {
                        if (dist_std <= 0.05206706002354622) {
                            if (rr_median <= 61.5) {
                                if (diastolic_area <= -13.400634765625) {
                                    if (num_peaks <= 143.5) {
                                        votes[10] = 0;
                                    } else {
                                        votes[10] = 3;
                                    }
                                } else {
                                    votes[10] = 0;
                                }
                            } else {
                                if (diastolic_time <= 0.34637071192264557) {
                                    votes[10] = 0;
                                } else {
                                    votes[10] = 0;
                                }
                            }
                        } else {
                            votes[10] = 0;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.09462481364607811) {
                if (diastolic_time <= 0.8226666748523712) {
                    if (rr_std <= 9.438535213470459) {
                        if (diastolic_area <= -19.592172622680664) {
                            if (dist_std <= 0.07877255231142044) {
                                votes[10] = 5;
                            } else {
                                votes[10] = 3;
                            }
                        } else {
                            votes[10] = 5;
                        }
                    } else {
                        if (diastolic_area <= -17.564342498779297) {
                            if (dist_std <= 0.07847540080547333) {
                                votes[10] = 2;
                            } else {
                                votes[10] = 3;
                            }
                        } else {
                            if (num_peaks <= 88.5) {
                                if (diastolic_area <= -13.1564040184021) {
                                    votes[10] = 4;
                                } else {
                                    votes[10] = 4;
                                }
                            } else {
                                if (num_peaks <= 108.0) {
                                    votes[10] = 5;
                                } else {
                                    votes[10] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 35.66527557373047) {
                        votes[10] = 2;
                    } else {
                        votes[10] = 1;
                    }
                }
            } else {
                if (rr_median <= 75.5) {
                    if (num_peaks <= 118.0) {
                        if (diastolic_area <= -23.318127632141113) {
                            if (rr_std <= 0.6590477228164673) {
                                if (dist_std <= 0.13557003438472748) {
                                    votes[10] = 2;
                                } else {
                                    votes[10] = 2;
                                }
                            } else {
                                votes[10] = 5;
                            }
                        } else {
                            votes[10] = 2;
                        }
                    } else {
                        votes[10] = 5;
                    }
                } else {
                    if (num_peaks <= 119.5) {
                        if (dist_std <= 0.1203274354338646) {
                            votes[10] = 3;
                        } else {
                            votes[10] = 5;
                        }
                    } else {
                        votes[10] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 11
    if (diastolic_time <= 0.24313978105783463) {
        if (diastolic_area <= -58.63966178894043) {
            if (rr_median <= 99.25) {
                if (rr_std <= 20.760157585144043) {
                    if (rr_median <= 67.25) {
                        if (rr_median <= 51.0) {
                            votes[11] = 3;
                        } else {
                            votes[11] = 3;
                        }
                    } else {
                        if (diastolic_area <= -80.43200302124023) {
                            if (dist_std <= 0.08008775860071182) {
                                votes[11] = 3;
                            } else {
                                votes[11] = 5;
                            }
                        } else {
                            if (diastolic_area <= -70.66893768310547) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.06718363240361214) {
                        votes[11] = 1;
                    } else {
                        if (rr_std <= 26.874876022338867) {
                            votes[11] = 1;
                        } else {
                            if (rr_median <= 87.5) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.10675333812832832) {
                    if (diastolic_area <= -81.4401626586914) {
                        if (num_peaks <= 145.0) {
                            votes[11] = 1;
                        } else {
                            votes[11] = 1;
                        }
                    } else {
                        votes[11] = 1;
                    }
                } else {
                    votes[11] = 5;
                }
            }
        } else {
            if (rr_std <= 15.860590934753418) {
                if (rr_median <= 78.25) {
                    if (dist_std <= 0.14075222611427307) {
                        if (diastolic_time <= 0.2244836539030075) {
                            if (rr_median <= 44.75) {
                                votes[11] = 1;
                            } else {
                                if (rr_std <= 14.17724084854126) {
                                    if (num_peaks <= 134.5) {
                                        if (diastolic_area <= -36.62306785583496) {
                                            votes[11] = 3;
                                        } else {
                                            votes[11] = 3;
                                        }
                                    } else {
                                        if (dist_std <= 0.06433721631765366) {
                                            votes[11] = 3;
                                        } else {
                                            votes[11] = 3;
                                        }
                                    }
                                } else {
                                    votes[11] = 3;
                                }
                            }
                        } else {
                            votes[11] = 5;
                        }
                    } else {
                        votes[11] = 2;
                    }
                } else {
                    if (rr_std <= 0.2357022613286972) {
                        votes[11] = 4;
                    } else {
                        if (rr_median <= 102.5) {
                            if (dist_std <= 0.05759862810373306) {
                                votes[11] = 0;
                            } else {
                                if (num_peaks <= 120.0) {
                                    if (rr_median <= 90.5) {
                                        votes[11] = 1;
                                    } else {
                                        votes[11] = 5;
                                    }
                                } else {
                                    votes[11] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.1411263719201088) {
                                votes[11] = 1;
                            } else {
                                votes[11] = 1;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.11696609482169151) {
                        if (diastolic_area <= -49.820228576660156) {
                            votes[11] = 3;
                        } else {
                            if (diastolic_time <= 0.00800000037997961) {
                                votes[11] = 3;
                            } else {
                                if (diastolic_area <= -35.586008071899414) {
                                    if (diastolic_area <= -38.55092811584473) {
                                        if (rr_std <= 33.68604278564453) {
                                            votes[11] = 4;
                                        } else {
                                            votes[11] = 4;
                                        }
                                    } else {
                                        votes[11] = 5;
                                    }
                                } else {
                                    if (dist_std <= 0.01679572742432356) {
                                        votes[11] = 4;
                                    } else {
                                        if (rr_median <= 109.5) {
                                            votes[11] = 4;
                                        } else {
                                            votes[11] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -22.996562004089355) {
                            votes[11] = 3;
                        } else {
                            votes[11] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.027613792568445206) {
                        votes[11] = 0;
                    } else {
                        if (diastolic_time <= 0.15543182939291) {
                            if (rr_median <= 73.5) {
                                votes[11] = 1;
                            } else {
                                votes[11] = 5;
                            }
                        } else {
                            votes[11] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_area <= -18.82423496246338) {
                if (rr_median <= 66.75) {
                    if (num_peaks <= 95.0) {
                        votes[11] = 2;
                    } else {
                        if (rr_std <= 4.454572647809982) {
                            votes[11] = 3;
                        } else {
                            votes[11] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 89.25) {
                        if (num_peaks <= 93.5) {
                            if (diastolic_time <= 0.5116166770458221) {
                                if (rr_median <= 74.25) {
                                    votes[11] = 2;
                                } else {
                                    if (diastolic_time <= 0.3233550786972046) {
                                        votes[11] = 2;
                                    } else {
                                        votes[11] = 2;
                                    }
                                }
                            } else {
                                votes[11] = 2;
                            }
                        } else {
                            if (dist_std <= 0.13326838612556458) {
                                if (rr_median <= 72.5) {
                                    votes[11] = 5;
                                } else {
                                    votes[11] = 2;
                                }
                            } else {
                                if (diastolic_area <= -31.292001724243164) {
                                    votes[11] = 2;
                                } else {
                                    votes[11] = 2;
                                }
                            }
                        }
                    } else {
                        votes[11] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.7990666627883911) {
                    if (num_peaks <= 88.5) {
                        if (rr_std <= 17.863112926483154) {
                            votes[11] = 5;
                        } else {
                            if (rr_std <= 31.861616134643555) {
                                votes[11] = 4;
                            } else {
                                votes[11] = 4;
                            }
                        }
                    } else {
                        if (dist_std <= 0.026487908326089382) {
                            votes[11] = 0;
                        } else {
                            if (diastolic_area <= -13.427341938018799) {
                                if (diastolic_time <= 0.5263999998569489) {
                                    if (diastolic_time <= 0.36568571627140045) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 2;
                                    }
                                } else {
                                    votes[11] = 5;
                                }
                            } else {
                                if (diastolic_time <= 0.4730823487043381) {
                                    votes[11] = 5;
                                } else {
                                    votes[11] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 80.5) {
                        votes[11] = 1;
                    } else {
                        votes[11] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 6.039847135543823) {
                if (diastolic_time <= 0.5119999945163727) {
                    if (diastolic_area <= -24.816213607788086) {
                        votes[11] = 5;
                    } else {
                        votes[11] = 3;
                    }
                } else {
                    votes[11] = 5;
                }
            } else {
                if (dist_std <= 0.06707930192351341) {
                    if (rr_median <= 52.25) {
                        votes[11] = 3;
                    } else {
                        if (rr_std <= 8.305138111114502) {
                            votes[11] = 0;
                        } else {
                            if (diastolic_time <= 0.2969885766506195) {
                                votes[11] = 0;
                            } else {
                                if (dist_std <= 0.029578506015241146) {
                                    votes[11] = 0;
                                } else {
                                    if (dist_std <= 0.05729674734175205) {
                                        if (diastolic_area <= -18.90355396270752) {
                                            votes[11] = 0;
                                        } else {
                                            votes[11] = 0;
                                        }
                                    } else {
                                        votes[11] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    votes[11] = 2;
                }
            }
        }
    }
// Decision rules for tree 12
    if (diastolic_time <= 0.20975074917078018) {
        if (rr_median <= 81.25) {
            if (rr_std <= 19.974384307861328) {
                if (dist_std <= 0.06666198000311852) {
                    if (rr_median <= 76.25) {
                        if (num_peaks <= 134.5) {
                            if (diastolic_area <= -29.03602409362793) {
                                if (num_peaks <= 128.5) {
                                    if (rr_median <= 56.5) {
                                        votes[12] = 3;
                                    } else {
                                        votes[12] = 3;
                                    }
                                } else {
                                    if (rr_std <= 12.597835063934326) {
                                        votes[12] = 5;
                                    } else {
                                        votes[12] = 3;
                                    }
                                }
                            } else {
                                votes[12] = 1;
                            }
                        } else {
                            votes[12] = 3;
                        }
                    } else {
                        votes[12] = 5;
                    }
                } else {
                    if (num_peaks <= 126.0) {
                        if (rr_median <= 48.25) {
                            votes[12] = 4;
                        } else {
                            if (rr_median <= 66.0) {
                                votes[12] = 3;
                            } else {
                                if (rr_std <= 10.39067816734314) {
                                    votes[12] = 5;
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        }
                    } else {
                        votes[12] = 1;
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (diastolic_area <= -52.545907974243164) {
                        votes[12] = 3;
                    } else {
                        if (dist_std <= 0.11379700526595116) {
                            if (diastolic_area <= -48.5980110168457) {
                                votes[12] = 4;
                            } else {
                                votes[12] = 4;
                            }
                        } else {
                            votes[12] = 4;
                        }
                    }
                } else {
                    votes[12] = 3;
                }
            }
        } else {
            if (diastolic_area <= -51.524330139160156) {
                if (rr_median <= 98.75) {
                    if (rr_std <= 5.312870025634766) {
                        votes[12] = 3;
                    } else {
                        if (diastolic_time <= 0.07656653225421906) {
                            if (dist_std <= 0.06014243699610233) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 1;
                            }
                        } else {
                            votes[12] = 5;
                        }
                    }
                } else {
                    if (diastolic_area <= -84.19299697875977) {
                        if (diastolic_time <= 0.07143480330705643) {
                            votes[12] = 1;
                        } else {
                            votes[12] = 1;
                        }
                    } else {
                        if (rr_median <= 116.5) {
                            votes[12] = 1;
                        } else {
                            votes[12] = 5;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.037260184064507484) {
                    if (rr_median <= 85.25) {
                        votes[12] = 5;
                    } else {
                        if (diastolic_time <= 0.03327607922255993) {
                            votes[12] = 4;
                        } else {
                            votes[12] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.011158470064401627) {
                        if (num_peaks <= 142.0) {
                            votes[12] = 2;
                        } else {
                            votes[12] = 0;
                        }
                    } else {
                        if (rr_std <= 36.543949127197266) {
                            if (rr_median <= 102.5) {
                                if (num_peaks <= 107.5) {
                                    votes[12] = 1;
                                } else {
                                    if (diastolic_time <= 0.1314893364906311) {
                                        votes[12] = 5;
                                    } else {
                                        if (diastolic_time <= 0.15534641593694687) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 1.4522400498390198) {
                                    votes[12] = 1;
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        } else {
                            if (dist_std <= 0.05745357647538185) {
                                votes[12] = 4;
                            } else {
                                votes[12] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_area <= -16.86688804626465) {
                if (rr_median <= 89.5) {
                    if (num_peaks <= 105.5) {
                        if (diastolic_time <= 0.5084166526794434) {
                            if (rr_median <= 65.5) {
                                if (num_peaks <= 90.0) {
                                    votes[12] = 2;
                                } else {
                                    votes[12] = 3;
                                }
                            } else {
                                if (dist_std <= 0.09135650470852852) {
                                    if (dist_std <= 0.07510212063789368) {
                                        votes[12] = 2;
                                    } else {
                                        votes[12] = 2;
                                    }
                                } else {
                                    votes[12] = 2;
                                }
                            }
                        } else {
                            if (diastolic_area <= -20.038636207580566) {
                                votes[12] = 5;
                            } else {
                                votes[12] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 0.6741928160190582) {
                            if (diastolic_time <= 0.3990909159183502) {
                                votes[12] = 2;
                            } else {
                                votes[12] = 2;
                            }
                        } else {
                            if (rr_median <= 55.75) {
                                votes[12] = 3;
                            } else {
                                if (dist_std <= 0.08398737013339996) {
                                    votes[12] = 5;
                                } else {
                                    votes[12] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.627672553062439) {
                        votes[12] = 5;
                    } else {
                        votes[12] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.6167076826095581) {
                    if (num_peaks <= 88.5) {
                        votes[12] = 4;
                    } else {
                        if (dist_std <= 0.03029934037476778) {
                            votes[12] = 0;
                        } else {
                            if (rr_median <= 70.0) {
                                votes[12] = 2;
                            } else {
                                votes[12] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.479978561401367) {
                        votes[12] = 5;
                    } else {
                        if (diastolic_time <= 0.7093818187713623) {
                            votes[12] = 1;
                        } else {
                            votes[12] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06491324678063393) {
                if (diastolic_time <= 0.26600000262260437) {
                    votes[12] = 5;
                } else {
                    if (rr_median <= 52.75) {
                        votes[12] = 0;
                    } else {
                        if (rr_std <= 8.07284927368164) {
                            votes[12] = 0;
                        } else {
                            if (num_peaks <= 151.5) {
                                if (rr_median <= 56.25) {
                                    if (dist_std <= 0.0438670739531517) {
                                        votes[12] = 0;
                                    } else {
                                        votes[12] = 0;
                                    }
                                } else {
                                    if (rr_median <= 61.25) {
                                        if (rr_std <= 13.016998767852783) {
                                            votes[12] = 0;
                                        } else {
                                            votes[12] = 0;
                                        }
                                    } else {
                                        votes[12] = 0;
                                    }
                                }
                            } else {
                                votes[12] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 29.154199600219727) {
                    if (rr_std <= 5.177499055862427) {
                        votes[12] = 3;
                    } else {
                        votes[12] = 3;
                    }
                } else {
                    votes[12] = 2;
                }
            }
        }
    }
// Decision rules for tree 13
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 99.25) {
            if (rr_std <= 14.140878200531006) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.1390446275472641) {
                        if (dist_std <= 0.07846580073237419) {
                            if (rr_median <= 57.25) {
                                if (rr_median <= 54.5) {
                                    votes[13] = 3;
                                } else {
                                    votes[13] = 3;
                                }
                            } else {
                                if (num_peaks <= 132.5) {
                                    votes[13] = 5;
                                } else {
                                    votes[13] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 120.5) {
                                if (rr_median <= 49.5) {
                                    votes[13] = 3;
                                } else {
                                    votes[13] = 3;
                                }
                            } else {
                                votes[13] = 1;
                            }
                        }
                    } else {
                        votes[13] = 2;
                    }
                } else {
                    if (diastolic_area <= -81.95647430419922) {
                        votes[13] = 3;
                    } else {
                        if (num_peaks <= 128.5) {
                            if (diastolic_area <= -51.66122245788574) {
                                votes[13] = 4;
                            } else {
                                if (rr_median <= 70.5) {
                                    votes[13] = 4;
                                } else {
                                    if (rr_median <= 90.5) {
                                        if (dist_std <= 0.12458433210849762) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 5;
                                        }
                                    } else {
                                        votes[13] = 5;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 135.5) {
                                if (diastolic_area <= -37.05587959289551) {
                                    votes[13] = 3;
                                } else {
                                    votes[13] = 3;
                                }
                            } else {
                                votes[13] = 5;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -52.18716621398926) {
                    if (rr_std <= 38.044015884399414) {
                        if (num_peaks <= 120.5) {
                            votes[13] = 1;
                        } else {
                            if (diastolic_time <= 0.08121969550848007) {
                                votes[13] = 3;
                            } else {
                                if (diastolic_time <= 0.10873513296246529) {
                                    votes[13] = 5;
                                } else {
                                    votes[13] = 3;
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 0.053105274215340614) {
                            votes[13] = 1;
                        } else {
                            votes[13] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 132.5) {
                        if (dist_std <= 0.10648103058338165) {
                            if (diastolic_time <= 0.23484329134225845) {
                                if (rr_median <= 86.25) {
                                    if (diastolic_area <= -37.531394958496094) {
                                        if (dist_std <= 0.05198066867887974) {
                                            votes[13] = 4;
                                        } else {
                                            votes[13] = 4;
                                        }
                                    } else {
                                        if (dist_std <= 0.02635311335325241) {
                                            votes[13] = 4;
                                        } else {
                                            votes[13] = 4;
                                        }
                                    }
                                } else {
                                    votes[13] = 4;
                                }
                            } else {
                                votes[13] = 2;
                            }
                        } else {
                            if (dist_std <= 0.1191251277923584) {
                                votes[13] = 5;
                            } else {
                                votes[13] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 20.306257247924805) {
                            votes[13] = 0;
                        } else {
                            if (diastolic_time <= 0.13562371581792831) {
                                if (diastolic_time <= 0.09499117359519005) {
                                    votes[13] = 5;
                                } else {
                                    votes[13] = 1;
                                }
                            } else {
                                votes[13] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 109.0) {
                if (diastolic_area <= -68.00655937194824) {
                    votes[13] = 1;
                } else {
                    if (dist_std <= 0.0564637016505003) {
                        votes[13] = 4;
                    } else {
                        votes[13] = 4;
                    }
                }
            } else {
                if (dist_std <= 0.036351388320326805) {
                    if (num_peaks <= 131.0) {
                        votes[13] = 1;
                    } else {
                        votes[13] = 5;
                    }
                } else {
                    if (diastolic_area <= -18.340264797210693) {
                        if (rr_median <= 134.5) {
                            if (rr_std <= 2.395332455635071) {
                                votes[13] = 1;
                            } else {
                                if (diastolic_area <= -81.4401626586914) {
                                    if (rr_median <= 110.25) {
                                        votes[13] = 1;
                                    } else {
                                        votes[13] = 1;
                                    }
                                } else {
                                    votes[13] = 5;
                                }
                            }
                        } else {
                            votes[13] = 1;
                        }
                    } else {
                        votes[13] = 1;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05776873417198658) {
            if (num_peaks <= 109.0) {
                if (diastolic_time <= 0.6389370560646057) {
                    if (diastolic_area <= -17.027191162109375) {
                        if (dist_std <= 0.03725678287446499) {
                            votes[13] = 5;
                        } else {
                            votes[13] = 2;
                        }
                    } else {
                        if (rr_median <= 78.75) {
                            votes[13] = 0;
                        } else {
                            if (diastolic_area <= -14.178826332092285) {
                                votes[13] = 4;
                            } else {
                                votes[13] = 4;
                            }
                        }
                    }
                } else {
                    votes[13] = 1;
                }
            } else {
                if (rr_std <= 5.2493979930877686) {
                    votes[13] = 5;
                } else {
                    if (rr_median <= 55.75) {
                        if (rr_std <= 13.694032192230225) {
                            votes[13] = 3;
                        } else {
                            votes[13] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.2846190482378006) {
                            votes[13] = 0;
                        } else {
                            if (diastolic_time <= 0.6746545433998108) {
                                if (diastolic_area <= -18.787699699401855) {
                                    if (diastolic_time <= 0.4030705839395523) {
                                        votes[13] = 0;
                                    } else {
                                        votes[13] = 0;
                                    }
                                } else {
                                    if (rr_median <= 61.25) {
                                        if (rr_std <= 13.016998767852783) {
                                            votes[13] = 0;
                                        } else {
                                            votes[13] = 0;
                                        }
                                    } else {
                                        votes[13] = 0;
                                    }
                                }
                            } else {
                                votes[13] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 0.6796177625656128) {
                if (dist_std <= 0.09371098503470421) {
                    votes[13] = 3;
                } else {
                    if (diastolic_time <= 0.5327999889850616) {
                        if (rr_median <= 69.5) {
                            votes[13] = 2;
                        } else {
                            votes[13] = 2;
                        }
                    } else {
                        votes[13] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 0.7995555400848389) {
                    if (rr_std <= 5.16317892074585) {
                        if (num_peaks <= 131.5) {
                            if (diastolic_area <= -22.64679718017578) {
                                votes[13] = 5;
                            } else {
                                votes[13] = 5;
                            }
                        } else {
                            votes[13] = 3;
                        }
                    } else {
                        if (rr_median <= 77.25) {
                            if (rr_std <= 20.080918312072754) {
                                if (dist_std <= 0.09334078803658485) {
                                    votes[13] = 5;
                                } else {
                                    votes[13] = 2;
                                }
                            } else {
                                if (rr_std <= 27.711008071899414) {
                                    votes[13] = 2;
                                } else {
                                    votes[13] = 1;
                                }
                            }
                        } else {
                            if (num_peaks <= 122.5) {
                                if (dist_std <= 0.08473194390535355) {
                                    if (rr_std <= 22.299434661865234) {
                                        votes[13] = 1;
                                    } else {
                                        votes[13] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 86.0) {
                                        votes[13] = 5;
                                    } else {
                                        votes[13] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 141.0) {
                                    votes[13] = 2;
                                } else {
                                    votes[13] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.06260897032916546) {
                        votes[13] = 2;
                    } else {
                        votes[13] = 1;
                    }
                }
            }
        }
    }
// Decision rules for tree 14
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 98.5) {
            if (rr_std <= 14.180799007415771) {
                if (dist_std <= 0.1390446275472641) {
                    if (rr_median <= 68.75) {
                        if (rr_median <= 53.25) {
                            if (diastolic_area <= -5.7492876052856445) {
                                votes[14] = 3;
                            } else {
                                votes[14] = 3;
                            }
                        } else {
                            if (rr_median <= 54.5) {
                                votes[14] = 1;
                            } else {
                                if (dist_std <= 0.03556342050433159) {
                                    votes[14] = 5;
                                } else {
                                    if (diastolic_time <= 0.19531868398189545) {
                                        if (diastolic_area <= -17.18095588684082) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 3;
                                        }
                                    } else {
                                        votes[14] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 129.0) {
                            if (dist_std <= 0.09937206283211708) {
                                if (dist_std <= 0.09370680525898933) {
                                    if (diastolic_area <= -45.02189064025879) {
                                        votes[14] = 4;
                                    } else {
                                        votes[14] = 5;
                                    }
                                } else {
                                    votes[14] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.24632258713245392) {
                                    if (dist_std <= 0.10854193568229675) {
                                        votes[14] = 5;
                                    } else {
                                        if (num_peaks <= 118.5) {
                                            votes[14] = 5;
                                        } else {
                                            votes[14] = 5;
                                        }
                                    }
                                } else {
                                    votes[14] = 3;
                                }
                            }
                        } else {
                            if (diastolic_area <= -26.41859722137451) {
                                if (diastolic_area <= -37.05587959289551) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 3;
                                }
                            } else {
                                votes[14] = 0;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 110.0) {
                        votes[14] = 2;
                    } else {
                        votes[14] = 4;
                    }
                }
            } else {
                if (diastolic_area <= -52.18716621398926) {
                    if (rr_std <= 33.01816940307617) {
                        if (diastolic_time <= 0.08121969550848007) {
                            votes[14] = 3;
                        } else {
                            if (diastolic_time <= 0.10742846876382828) {
                                votes[14] = 5;
                            } else {
                                votes[14] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.07572102546691895) {
                            votes[14] = 1;
                        } else {
                            votes[14] = 5;
                        }
                    }
                } else {
                    if (dist_std <= 0.11760768294334412) {
                        if (num_peaks <= 132.5) {
                            if (diastolic_time <= 0.23689216375350952) {
                                if (rr_median <= 90.5) {
                                    if (diastolic_area <= -37.531394958496094) {
                                        if (dist_std <= 0.038335224613547325) {
                                            votes[14] = 4;
                                        } else {
                                            votes[14] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.1814987063407898) {
                                            votes[14] = 4;
                                        } else {
                                            votes[14] = 4;
                                        }
                                    }
                                } else {
                                    votes[14] = 4;
                                }
                            } else {
                                if (rr_std <= 27.94385814666748) {
                                    votes[14] = 2;
                                } else {
                                    votes[14] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 78.0) {
                                if (diastolic_time <= 0.12056989222764969) {
                                    votes[14] = 1;
                                } else {
                                    votes[14] = 3;
                                }
                            } else {
                                votes[14] = 5;
                            }
                        }
                    } else {
                        votes[14] = 3;
                    }
                }
            }
        } else {
            if (diastolic_area <= -35.15495491027832) {
                if (diastolic_area <= -86.57479095458984) {
                    if (diastolic_time <= 0.06129005737602711) {
                        votes[14] = 1;
                    } else {
                        votes[14] = 1;
                    }
                } else {
                    if (rr_std <= 15.224037170410156) {
                        if (diastolic_area <= -73.50310897827148) {
                            votes[14] = 5;
                        } else {
                            if (rr_median <= 115.0) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 1;
                            }
                        }
                    } else {
                        if (diastolic_area <= -55.435869216918945) {
                            votes[14] = 5;
                        } else {
                            votes[14] = 1;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.05005978234112263) {
                    if (rr_median <= 125.75) {
                        votes[14] = 4;
                    } else {
                        votes[14] = 4;
                    }
                } else {
                    if (num_peaks <= 128.0) {
                        votes[14] = 3;
                    } else {
                        votes[14] = 0;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_time <= 0.6167076826095581) {
                if (rr_median <= 75.25) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.5116166770458221) {
                            if (rr_median <= 73.5) {
                                votes[14] = 2;
                            } else {
                                votes[14] = 2;
                            }
                        } else {
                            if (diastolic_time <= 0.572615385055542) {
                                votes[14] = 2;
                            } else {
                                votes[14] = 2;
                            }
                        }
                    } else {
                        if (dist_std <= 0.13326838612556458) {
                            if (diastolic_area <= -17.017295837402344) {
                                if (rr_std <= 0.5974740386009216) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 5;
                                }
                            } else {
                                if (dist_std <= 0.05207637697458267) {
                                    votes[14] = 0;
                                } else {
                                    votes[14] = 2;
                                }
                            }
                        } else {
                            votes[14] = 2;
                        }
                    }
                } else {
                    if (diastolic_area <= -15.292630195617676) {
                        if (rr_median <= 92.0) {
                            if (diastolic_time <= 0.4887999892234802) {
                                if (num_peaks <= 105.5) {
                                    votes[14] = 2;
                                } else {
                                    votes[14] = 0;
                                }
                            } else {
                                votes[14] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.3660952299833298) {
                                votes[14] = 5;
                            } else {
                                votes[14] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 88.5) {
                            if (dist_std <= 0.048504751175642014) {
                                votes[14] = 4;
                            } else {
                                votes[14] = 4;
                            }
                        } else {
                            votes[14] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -13.9072904586792) {
                    votes[14] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[14] = 1;
                    } else {
                        if (diastolic_area <= -12.967530250549316) {
                            votes[14] = 1;
                        } else {
                            votes[14] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06483301520347595) {
                if (rr_std <= 6.039847135543823) {
                    votes[14] = 5;
                } else {
                    if (rr_median <= 55.75) {
                        if (diastolic_area <= -15.56245470046997) {
                            votes[14] = 3;
                        } else {
                            votes[14] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.29559341073036194) {
                            votes[14] = 0;
                        } else {
                            if (num_peaks <= 151.0) {
                                if (num_peaks <= 132.5) {
                                    votes[14] = 0;
                                } else {
                                    if (rr_median <= 61.5) {
                                        if (diastolic_time <= 0.43341176211833954) {
                                            votes[14] = 0;
                                        } else {
                                            votes[14] = 0;
                                        }
                                    } else {
                                        votes[14] = 0;
                                    }
                                }
                            } else {
                                votes[14] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -18.923941612243652) {
                    votes[14] = 3;
                } else {
                    votes[14] = 2;
                }
            }
        }
    }
// Decision rules for tree 15
    if (diastolic_time <= 0.30396923422813416) {
        if (rr_std <= 18.38014793395996) {
            if (rr_median <= 99.25) {
                if (rr_median <= 53.25) {
                    if (num_peaks <= 123.5) {
                        if (diastolic_time <= 0.08456484600901604) {
                            votes[15] = 4;
                        } else {
                            votes[15] = 3;
                        }
                    } else {
                        if (rr_std <= 10.055254936218262) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 132.5) {
                        if (diastolic_time <= 0.2196696698665619) {
                            if (rr_std <= 12.098763942718506) {
                                if (diastolic_area <= -24.441637992858887) {
                                    if (dist_std <= 0.04057820700109005) {
                                        votes[15] = 5;
                                    } else {
                                        if (rr_std <= 8.593198776245117) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 6.109634876251221) {
                                        votes[15] = 5;
                                    } else {
                                        votes[15] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_area <= -44.22845649719238) {
                                    votes[15] = 3;
                                } else {
                                    if (rr_median <= 75.75) {
                                        votes[15] = 4;
                                    } else {
                                        votes[15] = 1;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 105.5) {
                                if (rr_median <= 78.25) {
                                    if (rr_std <= 0.5958648025989532) {
                                        votes[15] = 2;
                                    } else {
                                        votes[15] = 2;
                                    }
                                } else {
                                    votes[15] = 5;
                                }
                            } else {
                                if (num_peaks <= 123.0) {
                                    votes[15] = 5;
                                } else {
                                    votes[15] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 76.25) {
                            if (dist_std <= 0.0529903769493103) {
                                if (num_peaks <= 135.5) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 3;
                                }
                            } else {
                                votes[15] = 3;
                            }
                        } else {
                            if (diastolic_area <= -16.10969638824463) {
                                if (diastolic_area <= -43.5662956237793) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 5;
                                }
                            } else {
                                votes[15] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 0.3499270975589752) {
                    votes[15] = 4;
                } else {
                    if (dist_std <= 0.0470344889909029) {
                        votes[15] = 1;
                    } else {
                        if (num_peaks <= 136.5) {
                            votes[15] = 1;
                        } else {
                            votes[15] = 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -57.757301330566406) {
                if (diastolic_time <= 0.08738087862730026) {
                    if (dist_std <= 0.0603332556784153) {
                        if (rr_std <= 36.1543025970459) {
                            votes[15] = 1;
                        } else {
                            votes[15] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.07056283205747604) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 26.47059440612793) {
                        if (rr_median <= 107.5) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 1;
                        }
                    } else {
                        votes[15] = 5;
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.06608099490404129) {
                        if (rr_median <= 90.5) {
                            if (diastolic_time <= 0.1736646518111229) {
                                if (num_peaks <= 123.5) {
                                    votes[15] = 4;
                                } else {
                                    if (rr_std <= 23.644970893859863) {
                                        votes[15] = 4;
                                    } else {
                                        if (rr_std <= 28.140567779541016) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (dist_std <= 0.03957277722656727) {
                                    votes[15] = 5;
                                } else {
                                    votes[15] = 4;
                                }
                            }
                        } else {
                            if (num_peaks <= 113.5) {
                                if (rr_std <= 58.6604061126709) {
                                    votes[15] = 4;
                                } else {
                                    votes[15] = 4;
                                }
                            } else {
                                votes[15] = 1;
                            }
                        }
                    } else {
                        if (diastolic_area <= -25.99544620513916) {
                            if (rr_median <= 67.0) {
                                votes[15] = 3;
                            } else {
                                votes[15] = 5;
                            }
                        } else {
                            if (num_peaks <= 122.0) {
                                if (dist_std <= 0.11379700526595116) {
                                    if (diastolic_time <= 0.08856700733304024) {
                                        votes[15] = 4;
                                    } else {
                                        votes[15] = 4;
                                    }
                                } else {
                                    votes[15] = 4;
                                }
                            } else {
                                votes[15] = 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -32.1965217590332) {
                        votes[15] = 1;
                    } else {
                        votes[15] = 0;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 112.5) {
            if (diastolic_time <= 0.6980000138282776) {
                if (rr_median <= 89.0) {
                    if (dist_std <= 0.09452830255031586) {
                        if (rr_std <= 14.615931987762451) {
                            if (diastolic_area <= -20.01058578491211) {
                                votes[15] = 5;
                            } else {
                                votes[15] = 5;
                            }
                        } else {
                            if (dist_std <= 0.07580198347568512) {
                                if (dist_std <= 0.044748203828930855) {
                                    votes[15] = 0;
                                } else {
                                    if (diastolic_time <= 0.4008941203355789) {
                                        votes[15] = 2;
                                    } else {
                                        votes[15] = 2;
                                    }
                                }
                            } else {
                                votes[15] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.5084166526794434) {
                            if (rr_median <= 69.5) {
                                votes[15] = 2;
                            } else {
                                votes[15] = 2;
                            }
                        } else {
                            votes[15] = 2;
                        }
                    }
                } else {
                    if (diastolic_area <= -17.027191162109375) {
                        votes[15] = 5;
                    } else {
                        if (diastolic_area <= -13.918408870697021) {
                            votes[15] = 4;
                        } else {
                            votes[15] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 10.28257942199707) {
                    votes[15] = 1;
                } else {
                    if (rr_median <= 79.5) {
                        votes[15] = 1;
                    } else {
                        votes[15] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.0629428755491972) {
                if (rr_median <= 52.25) {
                    votes[15] = 3;
                } else {
                    if (rr_std <= 8.07284927368164) {
                        votes[15] = 5;
                    } else {
                        if (diastolic_time <= 0.7807555496692657) {
                            if (diastolic_area <= -18.90355396270752) {
                                if (diastolic_area <= -21.17961311340332) {
                                    votes[15] = 0;
                                } else {
                                    votes[15] = 0;
                                }
                            } else {
                                votes[15] = 0;
                            }
                        } else {
                            votes[15] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -15.599915504455566) {
                    if (rr_std <= 1.1316616833209991) {
                        votes[15] = 5;
                    } else {
                        votes[15] = 3;
                    }
                } else {
                    votes[15] = 2;
                }
            }
        }
    }
// Decision rules for tree 16
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 98.5) {
            if (rr_std <= 16.9524507522583) {
                if (rr_median <= 68.75) {
                    if (num_peaks <= 131.5) {
                        if (num_peaks <= 125.5) {
                            if (diastolic_area <= -19.912879943847656) {
                                if (diastolic_area <= -40.88657760620117) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 3;
                                }
                            } else {
                                votes[16] = 4;
                            }
                        } else {
                            if (rr_std <= 10.51915693283081) {
                                votes[16] = 1;
                            } else {
                                votes[16] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 146.0) {
                            if (num_peaks <= 134.5) {
                                votes[16] = 3;
                            } else {
                                votes[16] = 3;
                            }
                        } else {
                            votes[16] = 3;
                        }
                    }
                } else {
                    if (diastolic_area <= -39.300357818603516) {
                        if (diastolic_area <= -42.78131675720215) {
                            if (rr_median <= 85.5) {
                                if (rr_median <= 76.25) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 5;
                                }
                            } else {
                                if (rr_median <= 92.5) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 1;
                                }
                            }
                        } else {
                            votes[16] = 3;
                        }
                    } else {
                        if (dist_std <= 0.0583367645740509) {
                            if (diastolic_time <= 0.09328803420066833) {
                                votes[16] = 1;
                            } else {
                                votes[16] = 5;
                            }
                        } else {
                            if (num_peaks <= 112.5) {
                                votes[16] = 5;
                            } else {
                                votes[16] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (diastolic_area <= -53.54361343383789) {
                        if (rr_std <= 33.01816940307617) {
                            if (diastolic_time <= 0.10039827227592468) {
                                votes[16] = 3;
                            } else {
                                votes[16] = 1;
                            }
                        } else {
                            votes[16] = 1;
                        }
                    } else {
                        if (dist_std <= 0.12021594122052193) {
                            if (rr_median <= 90.5) {
                                if (diastolic_time <= 0.18245264142751694) {
                                    if (diastolic_area <= -26.006906509399414) {
                                        if (diastolic_area <= -41.16946601867676) {
                                            votes[16] = 4;
                                        } else {
                                            votes[16] = 4;
                                        }
                                    } else {
                                        votes[16] = 4;
                                    }
                                } else {
                                    votes[16] = 4;
                                }
                            } else {
                                votes[16] = 1;
                            }
                        } else {
                            votes[16] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 25.733302116394043) {
                        if (dist_std <= 0.05037596821784973) {
                            votes[16] = 3;
                        } else {
                            votes[16] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.10603076964616776) {
                            if (diastolic_area <= -38.87270164489746) {
                                votes[16] = 1;
                            } else {
                                votes[16] = 3;
                            }
                        } else {
                            votes[16] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 114.5) {
                if (diastolic_area <= -64.30151176452637) {
                    votes[16] = 1;
                } else {
                    if (dist_std <= 0.07312018051743507) {
                        if (rr_median <= 166.25) {
                            votes[16] = 4;
                        } else {
                            votes[16] = 4;
                        }
                    } else {
                        votes[16] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.08714224398136139) {
                    if (rr_median <= 107.25) {
                        if (diastolic_time <= 0.06969369202852249) {
                            votes[16] = 1;
                        } else {
                            votes[16] = 1;
                        }
                    } else {
                        votes[16] = 1;
                    }
                } else {
                    if (rr_std <= 15.652370929718018) {
                        votes[16] = 1;
                    } else {
                        votes[16] = 5;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_area <= -18.82423496246338) {
                if (rr_median <= 89.25) {
                    if (num_peaks <= 90.5) {
                        if (rr_std <= 27.415703773498535) {
                            if (rr_median <= 74.25) {
                                if (diastolic_time <= 0.5073499977588654) {
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
                        if (dist_std <= 0.13581082969903946) {
                            if (diastolic_area <= -22.52067470550537) {
                                if (num_peaks <= 105.5) {
                                    votes[16] = 2;
                                } else {
                                    if (rr_median <= 68.5) {
                                        votes[16] = 2;
                                    } else {
                                        votes[16] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.44730882346630096) {
                                    if (rr_std <= 6.958733081817627) {
                                        votes[16] = 3;
                                    } else {
                                        votes[16] = 3;
                                    }
                                } else {
                                    votes[16] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 0.6168129444122314) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.8441382050514221) {
                        votes[16] = 5;
                    } else {
                        votes[16] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 0.8026666641235352) {
                    if (rr_std <= 20.356587409973145) {
                        if (diastolic_area <= -12.897314071655273) {
                            if (rr_std <= 13.463215351104736) {
                                if (rr_std <= 0.7507157623767853) {
                                    votes[16] = 5;
                                } else {
                                    votes[16] = 5;
                                }
                            } else {
                                votes[16] = 5;
                            }
                        } else {
                            votes[16] = 1;
                        }
                    } else {
                        if (num_peaks <= 93.5) {
                            if (diastolic_time <= 0.4992605149745941) {
                                if (num_peaks <= 73.0) {
                                    votes[16] = 4;
                                } else {
                                    if (rr_median <= 86.0) {
                                        votes[16] = 4;
                                    } else {
                                        votes[16] = 4;
                                    }
                                }
                            } else {
                                votes[16] = 2;
                            }
                        } else {
                            if (dist_std <= 0.04905505292117596) {
                                votes[16] = 0;
                            } else {
                                votes[16] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 79.25) {
                        votes[16] = 1;
                    } else {
                        votes[16] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.985414028167725) {
                if (diastolic_time <= 0.5119999945163727) {
                    if (diastolic_time <= 0.3386363685131073) {
                        votes[16] = 5;
                    } else {
                        votes[16] = 3;
                    }
                } else {
                    votes[16] = 5;
                }
            } else {
                if (dist_std <= 0.06851155310869217) {
                    if (diastolic_time <= 0.2809973508119583) {
                        votes[16] = 5;
                    } else {
                        if (rr_median <= 52.25) {
                            votes[16] = 0;
                        } else {
                            if (diastolic_time <= 0.7391999959945679) {
                                if (rr_median <= 61.25) {
                                    if (rr_std <= 13.016998767852783) {
                                        votes[16] = 0;
                                    } else {
                                        votes[16] = 0;
                                    }
                                } else {
                                    votes[16] = 0;
                                }
                            } else {
                                votes[16] = 0;
                            }
                        }
                    }
                } else {
                    votes[16] = 2;
                }
            }
        }
    }
// Decision rules for tree 17
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_std <= 16.939903259277344) {
            if (rr_median <= 99.25) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.1390446275472641) {
                        if (rr_std <= 10.030611991882324) {
                            if (rr_std <= 3.234120488166809) {
                                if (num_peaks <= 119.5) {
                                    votes[17] = 3;
                                } else {
                                    votes[17] = 1;
                                }
                            } else {
                                votes[17] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.14010952413082123) {
                                if (dist_std <= 0.04628863371908665) {
                                    votes[17] = 5;
                                } else {
                                    if (num_peaks <= 124.5) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 1;
                                    }
                                }
                            } else {
                                votes[17] = 3;
                            }
                        }
                    } else {
                        if (diastolic_area <= -37.58956527709961) {
                            votes[17] = 1;
                        } else {
                            votes[17] = 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.016946058720350266) {
                        votes[17] = 0;
                    } else {
                        if (num_peaks <= 109.0) {
                            if (rr_median <= 89.5) {
                                if (rr_std <= 0.6502490937709808) {
                                    votes[17] = 2;
                                } else {
                                    votes[17] = 1;
                                }
                            } else {
                                votes[17] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.0790865384042263) {
                                votes[17] = 5;
                            } else {
                                if (num_peaks <= 137.5) {
                                    if (num_peaks <= 130.5) {
                                        if (diastolic_area <= -26.135716438293457) {
                                            votes[17] = 5;
                                        } else {
                                            votes[17] = 3;
                                        }
                                    } else {
                                        votes[17] = 3;
                                    }
                                } else {
                                    votes[17] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 0.037128616124391556) {
                    votes[17] = 4;
                } else {
                    if (num_peaks <= 136.5) {
                        votes[17] = 1;
                    } else {
                        votes[17] = 1;
                    }
                }
            }
        } else {
            if (diastolic_area <= -52.8729305267334) {
                if (rr_median <= 76.5) {
                    if (diastolic_area <= -102.3306770324707) {
                        votes[17] = 3;
                    } else {
                        votes[17] = 3;
                    }
                } else {
                    if (diastolic_time <= 0.09073016047477722) {
                        if (dist_std <= 0.07669612020254135) {
                            if (rr_median <= 101.0) {
                                votes[17] = 1;
                            } else {
                                votes[17] = 1;
                            }
                        } else {
                            votes[17] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.11116590350866318) {
                            votes[17] = 5;
                        } else {
                            votes[17] = 4;
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (dist_std <= 0.11728234589099884) {
                        if (diastolic_time <= 0.18595393002033234) {
                            if (rr_median <= 149.0) {
                                if (dist_std <= 0.06591810658574104) {
                                    if (rr_median <= 77.5) {
                                        votes[17] = 4;
                                    } else {
                                        if (num_peaks <= 125.5) {
                                            votes[17] = 4;
                                        } else {
                                            votes[17] = 4;
                                        }
                                    }
                                } else {
                                    if (diastolic_area <= -10.832031726837158) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 4;
                                    }
                                }
                            } else {
                                votes[17] = 4;
                            }
                        } else {
                            if (rr_median <= 70.75) {
                                votes[17] = 2;
                            } else {
                                votes[17] = 4;
                            }
                        }
                    } else {
                        votes[17] = 3;
                    }
                } else {
                    if (rr_median <= 77.75) {
                        if (rr_median <= 62.5) {
                            votes[17] = 1;
                        } else {
                            votes[17] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.07530481182038784) {
                            votes[17] = 0;
                        } else {
                            votes[17] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 120.5) {
            if (diastolic_time <= 0.634489506483078) {
                if (dist_std <= 0.09462481364607811) {
                    if (rr_std <= 20.463601112365723) {
                        if (diastolic_area <= -16.50817584991455) {
                            if (diastolic_time <= 0.3409275412559509) {
                                votes[17] = 3;
                            } else {
                                if (dist_std <= 0.035057563334703445) {
                                    votes[17] = 5;
                                } else {
                                    votes[17] = 5;
                                }
                            }
                        } else {
                            votes[17] = 0;
                        }
                    } else {
                        if (diastolic_area <= -17.85481071472168) {
                            if (dist_std <= 0.04727665334939957) {
                                votes[17] = 2;
                            } else {
                                if (rr_median <= 72.5) {
                                    votes[17] = 2;
                                } else {
                                    votes[17] = 2;
                                }
                            }
                        } else {
                            if (dist_std <= 0.03560692723840475) {
                                votes[17] = 0;
                            } else {
                                if (num_peaks <= 89.5) {
                                    votes[17] = 4;
                                } else {
                                    votes[17] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 74.25) {
                        if (rr_std <= 0.7849076092243195) {
                            if (num_peaks <= 91.5) {
                                votes[17] = 2;
                            } else {
                                votes[17] = 2;
                            }
                        } else {
                            if (diastolic_area <= -22.27651023864746) {
                                votes[17] = 5;
                            } else {
                                votes[17] = 2;
                            }
                        }
                    } else {
                        if (dist_std <= 0.12373790517449379) {
                            votes[17] = 2;
                        } else {
                            votes[17] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 9.425213813781738) {
                    votes[17] = 1;
                } else {
                    if (rr_median <= 79.5) {
                        votes[17] = 1;
                    } else {
                        votes[17] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06048966757953167) {
                if (rr_median <= 55.75) {
                    if (rr_std <= 11.857729434967041) {
                        votes[17] = 3;
                    } else {
                        if (num_peaks <= 141.0) {
                            votes[17] = 0;
                        } else {
                            votes[17] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 8.07284927368164) {
                        votes[17] = 0;
                    } else {
                        if (diastolic_area <= -7.519523620605469) {
                            if (rr_median <= 61.25) {
                                if (diastolic_area <= -14.043689250946045) {
                                    votes[17] = 0;
                                } else {
                                    votes[17] = 0;
                                }
                            } else {
                                if (dist_std <= 0.04599898308515549) {
                                    votes[17] = 0;
                                } else {
                                    if (dist_std <= 0.04953267239034176) {
                                        votes[17] = 0;
                                    } else {
                                        votes[17] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[17] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -14.880476474761963) {
                    if (num_peaks <= 140.5) {
                        if (diastolic_time <= 0.3602164536714554) {
                            votes[17] = 5;
                        } else {
                            votes[17] = 5;
                        }
                    } else {
                        votes[17] = 3;
                    }
                } else {
                    votes[17] = 0;
                }
            }
        }
    }
// Decision rules for tree 18
    if (diastolic_time <= 0.24305645376443863) {
        if (rr_std <= 14.367665767669678) {
            if (rr_median <= 99.25) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.14279790967702866) {
                        if (dist_std <= 0.06105446070432663) {
                            if (num_peaks <= 130.0) {
                                votes[18] = 3;
                            } else {
                                votes[18] = 3;
                            }
                        } else {
                            if (num_peaks <= 119.5) {
                                votes[18] = 3;
                            } else {
                                if (rr_std <= 8.2188401222229) {
                                    if (rr_std <= 1.61909419298172) {
                                        votes[18] = 5;
                                    } else {
                                        votes[18] = 3;
                                    }
                                } else {
                                    votes[18] = 1;
                                }
                            }
                        }
                    } else {
                        votes[18] = 2;
                    }
                } else {
                    if (rr_std <= 4.903846263885498) {
                        if (diastolic_area <= -21.602251052856445) {
                            if (rr_std <= 0.9387441277503967) {
                                if (rr_std <= 0.6673546731472015) {
                                    if (diastolic_time <= 0.15192308276891708) {
                                        votes[18] = 3;
                                    } else {
                                        votes[18] = 5;
                                    }
                                } else {
                                    votes[18] = 1;
                                }
                            } else {
                                votes[18] = 3;
                            }
                        } else {
                            votes[18] = 5;
                        }
                    } else {
                        if (rr_median <= 85.5) {
                            if (diastolic_time <= 0.1651197299361229) {
                                votes[18] = 5;
                            } else {
                                votes[18] = 5;
                            }
                        } else {
                            votes[18] = 0;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.3499270975589752) {
                    votes[18] = 4;
                } else {
                    if (dist_std <= 0.046610958874225616) {
                        votes[18] = 1;
                    } else {
                        if (num_peaks <= 114.0) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -51.34876251220703) {
                if (diastolic_time <= 0.08738087862730026) {
                    if (rr_median <= 83.0) {
                        votes[18] = 3;
                    } else {
                        if (dist_std <= 0.07013402879238129) {
                            if (rr_std <= 27.17393684387207) {
                                votes[18] = 1;
                            } else {
                                votes[18] = 1;
                            }
                        } else {
                            votes[18] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 29.708641052246094) {
                        if (rr_std <= 20.532663345336914) {
                            votes[18] = 5;
                        } else {
                            if (num_peaks <= 127.0) {
                                votes[18] = 4;
                            } else {
                                votes[18] = 1;
                            }
                        }
                    } else {
                        votes[18] = 5;
                    }
                }
            } else {
                if (dist_std <= 0.11293606087565422) {
                    if (num_peaks <= 132.5) {
                        if (rr_std <= 16.15445613861084) {
                            if (diastolic_time <= 0.08162334561347961) {
                                votes[18] = 4;
                            } else {
                                votes[18] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.182325579226017) {
                                if (rr_median <= 90.5) {
                                    if (diastolic_area <= -37.255577087402344) {
                                        if (diastolic_time <= 0.13566666841506958) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 4;
                                        }
                                    } else {
                                        votes[18] = 4;
                                    }
                                } else {
                                    if (dist_std <= 0.037260184064507484) {
                                        if (diastolic_time <= 0.03337704949080944) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 4;
                                        }
                                    } else {
                                        votes[18] = 4;
                                    }
                                }
                            } else {
                                votes[18] = 4;
                            }
                        }
                    } else {
                        if (rr_median <= 76.75) {
                            votes[18] = 3;
                        } else {
                            votes[18] = 0;
                        }
                    }
                } else {
                    if (rr_median <= 66.5) {
                        votes[18] = 3;
                    } else {
                        votes[18] = 3;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_time <= 0.6243076920509338) {
                if (rr_median <= 88.5) {
                    if (num_peaks <= 88.5) {
                        if (diastolic_area <= -17.837119102478027) {
                            if (diastolic_time <= 0.5116166770458221) {
                                votes[18] = 2;
                            } else {
                                votes[18] = 2;
                            }
                        } else {
                            votes[18] = 4;
                        }
                    } else {
                        if (rr_median <= 63.5) {
                            if (diastolic_area <= -18.029309272766113) {
                                if (rr_median <= 58.0) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 3;
                                }
                            } else {
                                votes[18] = 2;
                            }
                        } else {
                            if (dist_std <= 0.04592651128768921) {
                                if (rr_median <= 73.75) {
                                    votes[18] = 0;
                                } else {
                                    votes[18] = 0;
                                }
                            } else {
                                if (dist_std <= 0.13581082969903946) {
                                    if (rr_std <= 24.789010047912598) {
                                        if (diastolic_area <= -22.52067470550537) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 35.65742874145508) {
                                            votes[18] = 2;
                                        } else {
                                            votes[18] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 0.5866298079490662) {
                                        votes[18] = 2;
                                    } else {
                                        votes[18] = 2;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -18.653080940246582) {
                        votes[18] = 5;
                    } else {
                        if (rr_median <= 98.5) {
                            if (diastolic_time <= 0.3282399922609329) {
                                votes[18] = 4;
                            } else {
                                votes[18] = 4;
                            }
                        } else {
                            votes[18] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 4.59311056137085) {
                    votes[18] = 5;
                } else {
                    if (dist_std <= 0.08454559370875359) {
                        votes[18] = 1;
                    } else {
                        votes[18] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.789663076400757) {
                if (diastolic_time <= 0.46133333444595337) {
                    if (diastolic_area <= -22.36154556274414) {
                        votes[18] = 5;
                    } else {
                        votes[18] = 3;
                    }
                } else {
                    votes[18] = 5;
                }
            } else {
                if (dist_std <= 0.0748080238699913) {
                    if (rr_median <= 61.25) {
                        if (num_peaks <= 144.5) {
                            if (rr_std <= 15.435431957244873) {
                                votes[18] = 3;
                            } else {
                                votes[18] = 0;
                            }
                        } else {
                            votes[18] = 0;
                        }
                    } else {
                        if (dist_std <= 0.057930925861001015) {
                            votes[18] = 0;
                        } else {
                            votes[18] = 0;
                        }
                    }
                } else {
                    votes[18] = 2;
                }
            }
        }
    }
// Decision rules for tree 19
    if (diastolic_time <= 0.2280653566122055) {
        if (rr_median <= 83.25) {
            if (rr_std <= 16.939903259277344) {
                if (dist_std <= 0.06672794371843338) {
                    if (rr_median <= 73.75) {
                        if (diastolic_area <= -38.06871795654297) {
                            votes[19] = 3;
                        } else {
                            if (rr_std <= 13.245323181152344) {
                                if (rr_std <= 9.402729511260986) {
                                    votes[19] = 3;
                                } else {
                                    votes[19] = 3;
                                }
                            } else {
                                votes[19] = 4;
                            }
                        }
                    } else {
                        votes[19] = 5;
                    }
                } else {
                    if (rr_std <= 8.119514226913452) {
                        if (rr_median <= 59.5) {
                            votes[19] = 3;
                        } else {
                            if (num_peaks <= 108.0) {
                                votes[19] = 3;
                            } else {
                                if (diastolic_time <= 0.1711856871843338) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 3;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.046671802178025246) {
                            votes[19] = 4;
                        } else {
                            if (rr_std <= 10.75985860824585) {
                                votes[19] = 1;
                            } else {
                                votes[19] = 3;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.11637548729777336) {
                        if (diastolic_area <= -54.155649185180664) {
                            votes[19] = 3;
                        } else {
                            if (diastolic_area <= -48.56148910522461) {
                                votes[19] = 4;
                            } else {
                                if (rr_std <= 21.64611053466797) {
                                    if (diastolic_area <= -35.866512298583984) {
                                        votes[19] = 4;
                                    } else {
                                        if (dist_std <= 0.07472476363182068) {
                                            votes[19] = 4;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    }
                                } else {
                                    votes[19] = 4;
                                }
                            }
                        }
                    } else {
                        votes[19] = 3;
                    }
                } else {
                    if (diastolic_time <= 0.09230434894561768) {
                        votes[19] = 3;
                    } else {
                        if (rr_std <= 22.075580596923828) {
                            votes[19] = 3;
                        } else {
                            votes[19] = 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -48.19384956359863) {
                if (rr_median <= 97.75) {
                    if (rr_std <= 39.516366958618164) {
                        if (diastolic_area <= -61.808597564697266) {
                            if (diastolic_time <= 0.09073333069682121) {
                                if (diastolic_area <= -92.99190902709961) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 1;
                                }
                            } else {
                                votes[19] = 3;
                            }
                        } else {
                            votes[19] = 4;
                        }
                    } else {
                        votes[19] = 1;
                    }
                } else {
                    if (rr_std <= 13.071290016174316) {
                        votes[19] = 1;
                    } else {
                        if (diastolic_area <= -80.15116119384766) {
                            if (rr_std <= 27.17393684387207) {
                                votes[19] = 1;
                            } else {
                                votes[19] = 1;
                            }
                        } else {
                            votes[19] = 5;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.058382920920848846) {
                    if (num_peaks <= 131.0) {
                        if (rr_std <= 18.36641025543213) {
                            votes[19] = 1;
                        } else {
                            if (diastolic_time <= 0.0417485237121582) {
                                votes[19] = 4;
                            } else {
                                if (diastolic_area <= -41.36053657531738) {
                                    votes[19] = 4;
                                } else {
                                    votes[19] = 4;
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -10.825617790222168) {
                            votes[19] = 5;
                        } else {
                            votes[19] = 0;
                        }
                    }
                } else {
                    if (rr_median <= 109.5) {
                        if (rr_median <= 90.0) {
                            votes[19] = 1;
                        } else {
                            if (diastolic_time <= 0.11110714077949524) {
                                votes[19] = 5;
                            } else {
                                if (diastolic_area <= -37.54556655883789) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 132.0) {
                            votes[19] = 1;
                        } else {
                            votes[19] = 2;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_time <= 0.6154769361019135) {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.572615385055542) {
                            if (rr_median <= 64.0) {
                                votes[19] = 2;
                            } else {
                                votes[19] = 2;
                            }
                        } else {
                            votes[19] = 2;
                        }
                    } else {
                        if (dist_std <= 0.13552793115377426) {
                            if (rr_median <= 63.5) {
                                votes[19] = 3;
                            } else {
                                if (dist_std <= 0.033437104895710945) {
                                    votes[19] = 0;
                                } else {
                                    if (dist_std <= 0.11179769784212112) {
                                        if (rr_std <= 13.801342964172363) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 2;
                                        }
                                    } else {
                                        votes[19] = 3;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.14401612430810928) {
                                votes[19] = 2;
                            } else {
                                votes[19] = 2;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -15.292630195617676) {
                        if (rr_median <= 87.5) {
                            if (dist_std <= 0.10959837213158607) {
                                if (num_peaks <= 91.5) {
                                    if (rr_median <= 78.25) {
                                        votes[19] = 2;
                                    } else {
                                        votes[19] = 2;
                                    }
                                } else {
                                    votes[19] = 3;
                                }
                            } else {
                                votes[19] = 5;
                            }
                        } else {
                            if (rr_std <= 14.255730152130127) {
                                votes[19] = 5;
                            } else {
                                if (rr_std <= 41.98738098144531) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 5;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 87.5) {
                            votes[19] = 4;
                        } else {
                            votes[19] = 2;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[19] = 5;
                } else {
                    if (rr_median <= 79.75) {
                        votes[19] = 1;
                    } else {
                        votes[19] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 8.07284927368164) {
                if (diastolic_time <= 0.5011428594589233) {
                    if (diastolic_area <= -25.600329399108887) {
                        votes[19] = 5;
                    } else {
                        if (rr_median <= 75.0) {
                            votes[19] = 3;
                        } else {
                            votes[19] = 3;
                        }
                    }
                } else {
                    votes[19] = 5;
                }
            } else {
                if (dist_std <= 0.06483301520347595) {
                    if (diastolic_time <= 0.2653379291296005) {
                        votes[19] = 5;
                    } else {
                        if (rr_median <= 55.75) {
                            votes[19] = 0;
                        } else {
                            if (rr_median <= 61.25) {
                                if (diastolic_time <= 0.43341176211833954) {
                                    votes[19] = 0;
                                } else {
                                    votes[19] = 0;
                                }
                            } else {
                                votes[19] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 87.5) {
                        votes[19] = 0;
                    } else {
                        votes[19] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 20
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_median <= 99.25) {
            if (rr_std <= 15.967272281646729) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.14279790967702866) {
                        if (rr_std <= 10.030611991882324) {
                            if (diastolic_time <= 0.07215966656804085) {
                                votes[20] = 3;
                            } else {
                                if (rr_std <= 0.63893261551857) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 10.51915693283081) {
                                votes[20] = 1;
                            } else {
                                if (diastolic_area <= -37.13578224182129) {
                                    votes[20] = 3;
                                } else {
                                    if (diastolic_area <= -29.51608657836914) {
                                        votes[20] = 5;
                                    } else {
                                        votes[20] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[20] = 2;
                    }
                } else {
                    if (diastolic_area <= -34.89369010925293) {
                        if (diastolic_time <= 0.08875897526741028) {
                            votes[20] = 3;
                        } else {
                            if (diastolic_area <= -45.87825965881348) {
                                if (rr_median <= 86.5) {
                                    votes[20] = 5;
                                } else {
                                    votes[20] = 3;
                                }
                            } else {
                                if (dist_std <= 0.10254324972629547) {
                                    votes[20] = 5;
                                } else {
                                    votes[20] = 3;
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -28.612899780273438) {
                            votes[20] = 1;
                        } else {
                            if (rr_std <= 7.10058331489563) {
                                if (num_peaks <= 110.5) {
                                    votes[20] = 5;
                                } else {
                                    votes[20] = 5;
                                }
                            } else {
                                votes[20] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -52.48637771606445) {
                    if (rr_median <= 82.75) {
                        if (diastolic_time <= 0.08800478279590607) {
                            votes[20] = 3;
                        } else {
                            if (diastolic_time <= 0.11545010283589363) {
                                votes[20] = 5;
                            } else {
                                votes[20] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.07656653225421906) {
                            votes[20] = 1;
                        } else {
                            votes[20] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 132.5) {
                        if (dist_std <= 0.1172400452196598) {
                            if (rr_median <= 86.5) {
                                if (diastolic_time <= 0.1736646518111229) {
                                    if (diastolic_area <= -43.2501220703125) {
                                        votes[20] = 4;
                                    } else {
                                        if (dist_std <= 0.06608099490404129) {
                                            votes[20] = 4;
                                        } else {
                                            votes[20] = 4;
                                        }
                                    }
                                } else {
                                    votes[20] = 4;
                                }
                            } else {
                                votes[20] = 4;
                            }
                        } else {
                            votes[20] = 3;
                        }
                    } else {
                        if (rr_median <= 81.75) {
                            if (diastolic_time <= 0.10128447785973549) {
                                votes[20] = 1;
                            } else {
                                if (rr_std <= 25.068167686462402) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 4;
                                }
                            }
                        } else {
                            votes[20] = 5;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -36.63045310974121) {
                if (diastolic_time <= 0.08934249728918076) {
                    if (diastolic_time <= 0.06091477908194065) {
                        votes[20] = 1;
                    } else {
                        if (diastolic_time <= 0.068934116512537) {
                            votes[20] = 5;
                        } else {
                            votes[20] = 1;
                        }
                    }
                } else {
                    if (dist_std <= 0.07317448034882545) {
                        if (diastolic_area <= -52.1605167388916) {
                            votes[20] = 5;
                        } else {
                            votes[20] = 1;
                        }
                    } else {
                        votes[20] = 1;
                    }
                }
            } else {
                if (dist_std <= 0.04478839784860611) {
                    if (diastolic_time <= 0.033974673599004745) {
                        votes[20] = 4;
                    } else {
                        votes[20] = 4;
                    }
                } else {
                    if (rr_std <= 9.584975004196167) {
                        votes[20] = 1;
                    } else {
                        votes[20] = 3;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.055107664316892624) {
            if (num_peaks <= 107.0) {
                if (diastolic_area <= -17.027191162109375) {
                    if (dist_std <= 0.038182374089956284) {
                        votes[20] = 5;
                    } else {
                        votes[20] = 2;
                    }
                } else {
                    if (diastolic_time <= 0.5417142808437347) {
                        if (diastolic_area <= -14.178826332092285) {
                            votes[20] = 4;
                        } else {
                            votes[20] = 4;
                        }
                    } else {
                        votes[20] = 1;
                    }
                }
            } else {
                if (rr_std <= 7.789663076400757) {
                    votes[20] = 5;
                } else {
                    if (rr_median <= 52.25) {
                        votes[20] = 0;
                    } else {
                        if (diastolic_area <= -20.60036277770996) {
                            if (num_peaks <= 143.5) {
                                if (rr_std <= 13.647729873657227) {
                                    votes[20] = 0;
                                } else {
                                    votes[20] = 0;
                                }
                            } else {
                                votes[20] = 0;
                            }
                        } else {
                            if (dist_std <= 0.05206706002354622) {
                                if (diastolic_time <= 0.29486769437789917) {
                                    votes[20] = 0;
                                } else {
                                    votes[20] = 0;
                                }
                            } else {
                                votes[20] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.9014999866485596) {
                if (rr_std <= 0.6796177625656128) {
                    if (dist_std <= 0.09838484227657318) {
                        votes[20] = 5;
                    } else {
                        if (rr_median <= 74.25) {
                            votes[20] = 2;
                        } else {
                            votes[20] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 14.36455774307251) {
                        if (diastolic_area <= -12.916272640228271) {
                            if (num_peaks <= 131.5) {
                                if (rr_median <= 74.0) {
                                    if (rr_median <= 70.5) {
                                        votes[20] = 5;
                                    } else {
                                        votes[20] = 5;
                                    }
                                } else {
                                    votes[20] = 5;
                                }
                            } else {
                                votes[20] = 3;
                            }
                        } else {
                            votes[20] = 1;
                        }
                    } else {
                        if (rr_std <= 31.278350830078125) {
                            if (rr_median <= 82.5) {
                                if (rr_std <= 20.080918312072754) {
                                    votes[20] = 5;
                                } else {
                                    if (diastolic_time <= 0.31487272679805756) {
                                        votes[20] = 2;
                                    } else {
                                        votes[20] = 2;
                                    }
                                }
                            } else {
                                if (num_peaks <= 91.0) {
                                    votes[20] = 4;
                                } else {
                                    votes[20] = 2;
                                }
                            }
                        } else {
                            if (num_peaks <= 112.5) {
                                if (rr_std <= 60.81377410888672) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 5;
                                }
                            } else {
                                votes[20] = 0;
                            }
                        }
                    }
                }
            } else {
                votes[20] = 1;
            }
        }
    }
// Decision rules for tree 21
    if (diastolic_time <= 0.2355222851037979) {
        if (rr_std <= 16.939903259277344) {
            if (rr_median <= 76.25) {
                if (dist_std <= 0.07823266461491585) {
                    if (num_peaks <= 134.5) {
                        if (diastolic_time <= 0.09144239500164986) {
                            if (diastolic_area <= -17.20813751220703) {
                                if (dist_std <= 0.04578882269561291) {
                                    votes[21] = 3;
                                } else {
                                    votes[21] = 3;
                                }
                            } else {
                                votes[21] = 3;
                            }
                        } else {
                            if (dist_std <= 0.049023162573575974) {
                                votes[21] = 5;
                            } else {
                                votes[21] = 3;
                            }
                        }
                    } else {
                        if (dist_std <= 0.03219711594283581) {
                            votes[21] = 3;
                        } else {
                            votes[21] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 8.119514226913452) {
                        if (dist_std <= 0.14924569427967072) {
                            if (diastolic_time <= 0.07459308579564095) {
                                votes[21] = 5;
                            } else {
                                if (rr_std <= 0.6244782209396362) {
                                    if (num_peaks <= 110.5) {
                                        votes[21] = 3;
                                    } else {
                                        votes[21] = 1;
                                    }
                                } else {
                                    votes[21] = 3;
                                }
                            }
                        } else {
                            votes[21] = 2;
                        }
                    } else {
                        if (diastolic_time <= 0.06406931765377522) {
                            votes[21] = 4;
                        } else {
                            votes[21] = 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 99.25) {
                    if (diastolic_area <= -1.9958215951919556) {
                        if (num_peaks <= 118.5) {
                            if (rr_median <= 90.25) {
                                if (diastolic_area <= -34.40545177459717) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 1;
                                }
                            } else {
                                if (diastolic_time <= 0.11587554961442947) {
                                    votes[21] = 1;
                                } else {
                                    votes[21] = 5;
                                }
                            }
                        } else {
                            if (diastolic_area <= -39.073347091674805) {
                                if (rr_std <= 1.862454891204834) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 3;
                                }
                            } else {
                                if (dist_std <= 0.10621717572212219) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 5;
                                }
                            }
                        }
                    } else {
                        votes[21] = 0;
                    }
                } else {
                    if (rr_std <= 0.20786985754966736) {
                        votes[21] = 4;
                    } else {
                        if (rr_std <= 11.401783466339111) {
                            if (dist_std <= 0.05446111783385277) {
                                votes[21] = 1;
                            } else {
                                votes[21] = 1;
                            }
                        } else {
                            votes[21] = 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -51.94780158996582) {
                if (rr_std <= 35.557273864746094) {
                    if (rr_std <= 26.233665466308594) {
                        if (rr_median <= 99.0) {
                            if (diastolic_time <= 0.08006754517555237) {
                                votes[21] = 3;
                            } else {
                                if (diastolic_time <= 0.10817894712090492) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 3;
                                }
                            }
                        } else {
                            votes[21] = 5;
                        }
                    } else {
                        votes[21] = 5;
                    }
                } else {
                    if (diastolic_area <= -93.82877731323242) {
                        if (dist_std <= 0.05042235180735588) {
                            votes[21] = 1;
                        } else {
                            votes[21] = 1;
                        }
                    } else {
                        votes[21] = 5;
                    }
                }
            } else {
                if (num_peaks <= 133.5) {
                    if (dist_std <= 0.05745357647538185) {
                        if (rr_median <= 90.5) {
                            if (diastolic_area <= -40.42055892944336) {
                                if (diastolic_area <= -43.76260757446289) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 4;
                                }
                            } else {
                                votes[21] = 4;
                            }
                        } else {
                            if (dist_std <= 0.03716711327433586) {
                                votes[21] = 4;
                            } else {
                                votes[21] = 1;
                            }
                        }
                    } else {
                        if (diastolic_area <= -25.654117584228516) {
                            if (dist_std <= 0.11646170914173126) {
                                votes[21] = 5;
                            } else {
                                votes[21] = 3;
                            }
                        } else {
                            if (num_peaks <= 120.5) {
                                if (diastolic_time <= 0.04353921487927437) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 4;
                                }
                            } else {
                                votes[21] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 81.75) {
                        if (diastolic_time <= 0.10128447785973549) {
                            votes[21] = 1;
                        } else {
                            votes[21] = 3;
                        }
                    } else {
                        votes[21] = 5;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05554366298019886) {
            if (num_peaks <= 108.5) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (dist_std <= 0.03716392442584038) {
                        if (rr_median <= 75.75) {
                            votes[21] = 0;
                        } else {
                            votes[21] = 5;
                        }
                    } else {
                        if (num_peaks <= 88.0) {
                            votes[21] = 4;
                        } else {
                            votes[21] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 88.0) {
                        votes[21] = 1;
                    } else {
                        votes[21] = 1;
                    }
                }
            } else {
                if (rr_std <= 7.789663076400757) {
                    votes[21] = 5;
                } else {
                    if (rr_median <= 55.75) {
                        if (diastolic_area <= -14.885039329528809) {
                            votes[21] = 3;
                        } else {
                            votes[21] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.26275861263275146) {
                            votes[21] = 0;
                        } else {
                            if (rr_std <= 8.946646213531494) {
                                votes[21] = 0;
                            } else {
                                if (rr_median <= 61.25) {
                                    votes[21] = 0;
                                } else {
                                    if (rr_std <= 43.77496147155762) {
                                        if (diastolic_time <= 0.2837619036436081) {
                                            votes[21] = 0;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    } else {
                                        votes[21] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -17.67935848236084) {
                if (num_peaks <= 93.5) {
                    if (rr_median <= 84.0) {
                        if (dist_std <= 0.09422287717461586) {
                            if (dist_std <= 0.07612456008791924) {
                                votes[21] = 2;
                            } else {
                                votes[21] = 5;
                            }
                        } else {
                            if (rr_std <= 21.82407569885254) {
                                votes[21] = 2;
                            } else {
                                votes[21] = 2;
                            }
                        }
                    } else {
                        votes[21] = 5;
                    }
                } else {
                    if (dist_std <= 0.13552793115377426) {
                        if (rr_median <= 63.5) {
                            votes[21] = 3;
                        } else {
                            if (dist_std <= 0.12566610425710678) {
                                if (rr_median <= 75.5) {
                                    if (diastolic_time <= 0.2951167970895767) {
                                        votes[21] = 5;
                                    } else {
                                        votes[21] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 0.3164733350276947) {
                                        votes[21] = 5;
                                    } else {
                                        votes[21] = 2;
                                    }
                                }
                            } else {
                                votes[21] = 3;
                            }
                        }
                    } else {
                        if (dist_std <= 0.14103619009256363) {
                            votes[21] = 2;
                        } else {
                            votes[21] = 2;
                        }
                    }
                }
            } else {
                if (rr_std <= 9.64246940612793) {
                    votes[21] = 5;
                } else {
                    if (diastolic_time <= 0.652848482131958) {
                        if (num_peaks <= 89.5) {
                            votes[21] = 4;
                        } else {
                            if (diastolic_time <= 0.3584761917591095) {
                                votes[21] = 0;
                            } else {
                                votes[21] = 2;
                            }
                        }
                    } else {
                        if (num_peaks <= 130.5) {
                            votes[21] = 1;
                        } else {
                            votes[21] = 2;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 22
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_std <= 15.967272281646729) {
            if (rr_median <= 75.5) {
                if (diastolic_time <= 0.22964705526828766) {
                    if (rr_std <= 10.082536220550537) {
                        if (dist_std <= 0.1240161694586277) {
                            if (rr_std <= 1.2454505562782288) {
                                votes[22] = 3;
                            } else {
                                if (diastolic_area <= -14.251502513885498) {
                                    votes[22] = 3;
                                } else {
                                    votes[22] = 3;
                                }
                            }
                        } else {
                            if (diastolic_area <= -36.91552925109863) {
                                votes[22] = 3;
                            } else {
                                if (num_peaks <= 109.5) {
                                    votes[22] = 2;
                                } else {
                                    votes[22] = 3;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.04828491620719433) {
                            votes[22] = 4;
                        } else {
                            if (num_peaks <= 127.5) {
                                votes[22] = 3;
                            } else {
                                if (dist_std <= 0.045698381960392) {
                                    if (num_peaks <= 131.5) {
                                        votes[22] = 5;
                                    } else {
                                        votes[22] = 3;
                                    }
                                } else {
                                    votes[22] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.09086757525801659) {
                        votes[22] = 5;
                    } else {
                        votes[22] = 3;
                    }
                }
            } else {
                if (rr_median <= 99.5) {
                    if (dist_std <= 0.04949212446808815) {
                        votes[22] = 5;
                    } else {
                        if (num_peaks <= 128.5) {
                            if (diastolic_time <= 0.15492156893014908) {
                                if (dist_std <= 0.10594991222023964) {
                                    if (num_peaks <= 108.5) {
                                        votes[22] = 1;
                                    } else {
                                        votes[22] = 5;
                                    }
                                } else {
                                    votes[22] = 1;
                                }
                            } else {
                                if (rr_std <= 4.787270128726959) {
                                    votes[22] = 5;
                                } else {
                                    votes[22] = 5;
                                }
                            }
                        } else {
                            if (diastolic_area <= -28.487353324890137) {
                                votes[22] = 3;
                            } else {
                                votes[22] = 5;
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.057050397619605064) {
                        if (diastolic_area <= -27.106660842895508) {
                            votes[22] = 5;
                        } else {
                            votes[22] = 4;
                        }
                    } else {
                        if (rr_std <= 10.239500045776367) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -57.757301330566406) {
                if (diastolic_time <= 0.07656653225421906) {
                    if (rr_median <= 82.75) {
                        votes[22] = 3;
                    } else {
                        if (rr_std <= 36.05308723449707) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 18.55088710784912) {
                        votes[22] = 3;
                    } else {
                        if (rr_median <= 71.75) {
                            votes[22] = 3;
                        } else {
                            if (num_peaks <= 135.0) {
                                if (rr_std <= 26.47059440612793) {
                                    votes[22] = 1;
                                } else {
                                    votes[22] = 5;
                                }
                            } else {
                                votes[22] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.05745357647538185) {
                        if (dist_std <= 0.024248699657619) {
                            votes[22] = 4;
                        } else {
                            if (diastolic_time <= 0.09840821474790573) {
                                if (diastolic_area <= -8.407783031463623) {
                                    votes[22] = 1;
                                } else {
                                    if (rr_std <= 45.211090087890625) {
                                        votes[22] = 4;
                                    } else {
                                        votes[22] = 4;
                                    }
                                }
                            } else {
                                if (rr_median <= 64.5) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 4;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.0433704387396574) {
                            if (diastolic_time <= 0.03327607922255993) {
                                votes[22] = 2;
                            } else {
                                votes[22] = 4;
                            }
                        } else {
                            if (num_peaks <= 117.0) {
                                if (dist_std <= 0.07653305307030678) {
                                    votes[22] = 2;
                                } else {
                                    if (rr_median <= 66.0) {
                                        votes[22] = 4;
                                    } else {
                                        votes[22] = 3;
                                    }
                                }
                            } else {
                                votes[22] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 76.5) {
                        if (diastolic_area <= -34.282297134399414) {
                            votes[22] = 3;
                        } else {
                            votes[22] = 1;
                        }
                    } else {
                        if (rr_std <= 27.216991424560547) {
                            votes[22] = 0;
                        } else {
                            votes[22] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 127.5) {
            if (diastolic_time <= 0.6243076920509338) {
                if (dist_std <= 0.09846341237425804) {
                    if (num_peaks <= 92.5) {
                        if (diastolic_area <= -16.320606231689453) {
                            if (rr_std <= 16.21306800842285) {
                                votes[22] = 5;
                            } else {
                                if (num_peaks <= 81.5) {
                                    votes[22] = 2;
                                } else {
                                    votes[22] = 2;
                                }
                            }
                        } else {
                            if (rr_median <= 77.25) {
                                votes[22] = 2;
                            } else {
                                if (num_peaks <= 78.5) {
                                    votes[22] = 4;
                                } else {
                                    if (rr_median <= 92.5) {
                                        votes[22] = 4;
                                    } else {
                                        votes[22] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 0.030651387758553028) {
                            votes[22] = 0;
                        } else {
                            if (diastolic_time <= 0.48240000009536743) {
                                if (dist_std <= 0.07824835926294327) {
                                    votes[22] = 0;
                                } else {
                                    votes[22] = 5;
                                }
                            } else {
                                votes[22] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 74.5) {
                        if (num_peaks <= 111.5) {
                            if (dist_std <= 0.17900366336107254) {
                                votes[22] = 2;
                            } else {
                                votes[22] = 2;
                            }
                        } else {
                            votes[22] = 5;
                        }
                    } else {
                        votes[22] = 5;
                    }
                }
            } else {
                if (rr_std <= 8.918952226638794) {
                    votes[22] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[22] = 1;
                    } else {
                        votes[22] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06483301520347595) {
                if (rr_std <= 8.07284927368164) {
                    votes[22] = 5;
                } else {
                    if (rr_median <= 53.5) {
                        votes[22] = 0;
                    } else {
                        if (diastolic_time <= 0.7333818078041077) {
                            if (rr_median <= 61.5) {
                                if (rr_median <= 59.75) {
                                    votes[22] = 0;
                                } else {
                                    votes[22] = 0;
                                }
                            } else {
                                votes[22] = 0;
                            }
                        } else {
                            votes[22] = 0;
                        }
                    }
                }
            } else {
                if (rr_median <= 79.5) {
                    votes[22] = 3;
                } else {
                    votes[22] = 2;
                }
            }
        }
    }
// Decision rules for tree 23
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 97.5) {
            if (rr_std <= 14.878895282745361) {
                if (rr_median <= 72.5) {
                    if (rr_std <= 0.6440659463405609) {
                        if (diastolic_time <= 0.212393157184124) {
                            votes[23] = 3;
                        } else {
                            votes[23] = 2;
                        }
                    } else {
                        if (num_peaks <= 133.0) {
                            if (num_peaks <= 127.5) {
                                if (diastolic_time <= 0.04989561811089516) {
                                    votes[23] = 4;
                                } else {
                                    if (diastolic_time <= 0.17336363345384598) {
                                        if (diastolic_time <= 0.07734997943043709) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        votes[23] = 3;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.06089412607252598) {
                                    if (diastolic_area <= -38.334829330444336) {
                                        votes[23] = 3;
                                    } else {
                                        votes[23] = 5;
                                    }
                                } else {
                                    votes[23] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 146.5) {
                                votes[23] = 3;
                            } else {
                                votes[23] = 3;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.11680784821510315) {
                        if (dist_std <= 0.06884244456887245) {
                            if (diastolic_time <= 0.061443621292710304) {
                                votes[23] = 0;
                            } else {
                                votes[23] = 5;
                            }
                        } else {
                            votes[23] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.1379685401916504) {
                            votes[23] = 5;
                        } else {
                            if (dist_std <= 0.05257919616997242) {
                                votes[23] = 5;
                            } else {
                                votes[23] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (diastolic_area <= -53.837093353271484) {
                        if (rr_std <= 27.740243911743164) {
                            votes[23] = 3;
                        } else {
                            votes[23] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.18797121196985245) {
                            if (rr_std <= 15.866838455200195) {
                                votes[23] = 3;
                            } else {
                                if (dist_std <= 0.11728234589099884) {
                                    if (dist_std <= 0.042632801458239555) {
                                        if (rr_median <= 75.75) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    } else {
                                        votes[23] = 4;
                                    }
                                } else {
                                    votes[23] = 3;
                                }
                            }
                        } else {
                            if (diastolic_area <= -27.770349502563477) {
                                votes[23] = 3;
                            } else {
                                votes[23] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 82.5) {
                        if (rr_std <= 32.487464904785156) {
                            if (dist_std <= 0.07013698667287827) {
                                if (rr_median <= 67.0) {
                                    votes[23] = 3;
                                } else {
                                    votes[23] = 3;
                                }
                            } else {
                                votes[23] = 3;
                            }
                        } else {
                            votes[23] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.08592132478952408) {
                            votes[23] = 1;
                        } else {
                            votes[23] = 5;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -26.344510078430176) {
                if (diastolic_area <= -31.92300319671631) {
                    if (diastolic_time <= 0.08629557490348816) {
                        if (diastolic_time <= 0.057563865557312965) {
                            votes[23] = 1;
                        } else {
                            if (diastolic_time <= 0.06941678375005722) {
                                if (rr_std <= 9.922393798828125) {
                                    votes[23] = 1;
                                } else {
                                    votes[23] = 5;
                                }
                            } else {
                                votes[23] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 13.420379161834717) {
                            if (num_peaks <= 125.5) {
                                votes[23] = 1;
                            } else {
                                votes[23] = 1;
                            }
                        } else {
                            if (num_peaks <= 113.5) {
                                votes[23] = 4;
                            } else {
                                votes[23] = 5;
                            }
                        }
                    }
                } else {
                    votes[23] = 3;
                }
            } else {
                if (dist_std <= 0.05562424287199974) {
                    if (dist_std <= 0.03590645454823971) {
                        votes[23] = 4;
                    } else {
                        votes[23] = 4;
                    }
                } else {
                    votes[23] = 1;
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_area <= -17.818513870239258) {
                if (dist_std <= 0.09422287717461586) {
                    if (rr_std <= 15.72080945968628) {
                        if (rr_median <= 66.25) {
                            votes[23] = 3;
                        } else {
                            votes[23] = 5;
                        }
                    } else {
                        if (num_peaks <= 80.5) {
                            votes[23] = 5;
                        } else {
                            if (dist_std <= 0.0728703998029232) {
                                votes[23] = 2;
                            } else {
                                votes[23] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.6796177625656128) {
                        if (diastolic_time <= 0.5164166688919067) {
                            votes[23] = 2;
                        } else {
                            votes[23] = 2;
                        }
                    } else {
                        if (rr_std <= 6.769231557846069) {
                            votes[23] = 5;
                        } else {
                            if (diastolic_time <= 0.3565912991762161) {
                                votes[23] = 2;
                            } else {
                                votes[23] = 2;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6167076826095581) {
                    if (num_peaks <= 88.5) {
                        if (rr_median <= 102.0) {
                            if (diastolic_time <= 0.4041764736175537) {
                                votes[23] = 4;
                            } else {
                                votes[23] = 4;
                            }
                        } else {
                            votes[23] = 4;
                        }
                    } else {
                        if (dist_std <= 0.02874532714486122) {
                            if (diastolic_time <= 0.4836333245038986) {
                                votes[23] = 0;
                            } else {
                                votes[23] = 0;
                            }
                        } else {
                            if (rr_std <= 17.95286750793457) {
                                votes[23] = 5;
                            } else {
                                if (rr_median <= 75.5) {
                                    votes[23] = 2;
                                } else {
                                    votes[23] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 7.973716974258423) {
                        votes[23] = 5;
                    } else {
                        if (rr_median <= 79.75) {
                            votes[23] = 1;
                        } else {
                            votes[23] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.055655065923929214) {
                if (rr_median <= 52.25) {
                    votes[23] = 3;
                } else {
                    if (diastolic_area <= -18.787699699401855) {
                        if (diastolic_time <= 0.3638545423746109) {
                            if (diastolic_time <= 0.29153968393802643) {
                                votes[23] = 0;
                            } else {
                                votes[23] = 0;
                            }
                        } else {
                            votes[23] = 0;
                        }
                    } else {
                        if (rr_std <= 8.811953067779541) {
                            votes[23] = 0;
                        } else {
                            votes[23] = 0;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.07258879765868187) {
                    if (rr_std <= 5.285987377166748) {
                        votes[23] = 5;
                    } else {
                        votes[23] = 0;
                    }
                } else {
                    if (diastolic_area <= -19.42817497253418) {
                        votes[23] = 3;
                    } else {
                        votes[23] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 24
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_median <= 82.75) {
            if (rr_std <= 16.9524507522583) {
                if (diastolic_area <= -6.6924426555633545) {
                    if (rr_median <= 75.5) {
                        if (dist_std <= 0.14075222611427307) {
                            if (rr_median <= 46.75) {
                                votes[24] = 1;
                            } else {
                                if (rr_std <= 10.082536220550537) {
                                    if (num_peaks <= 129.5) {
                                        if (diastolic_area <= -35.490156173706055) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 3;
                                        }
                                    } else {
                                        votes[24] = 3;
                                    }
                                } else {
                                    if (rr_std <= 10.847098350524902) {
                                        votes[24] = 1;
                                    } else {
                                        if (rr_std <= 12.290056228637695) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[24] = 2;
                        }
                    } else {
                        if (num_peaks <= 119.5) {
                            votes[24] = 3;
                        } else {
                            votes[24] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.05515885911881924) {
                        if (rr_std <= 8.12723159790039) {
                            votes[24] = 3;
                        } else {
                            votes[24] = 4;
                        }
                    } else {
                        votes[24] = 1;
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (diastolic_area <= -52.31468391418457) {
                        if (rr_std <= 26.4872989654541) {
                            votes[24] = 3;
                        } else {
                            votes[24] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.18595393002033234) {
                            if (diastolic_area <= -37.72231674194336) {
                                if (rr_std <= 23.799232482910156) {
                                    votes[24] = 4;
                                } else {
                                    votes[24] = 4;
                                }
                            } else {
                                if (rr_std <= 19.428884506225586) {
                                    votes[24] = 4;
                                } else {
                                    votes[24] = 4;
                                }
                            }
                        } else {
                            votes[24] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 32.416404724121094) {
                        if (diastolic_area <= -59.308780670166016) {
                            votes[24] = 3;
                        } else {
                            votes[24] = 3;
                        }
                    } else {
                        votes[24] = 1;
                    }
                }
            }
        } else {
            if (diastolic_area <= -89.38479995727539) {
                if (diastolic_time <= 0.06739715859293938) {
                    if (diastolic_time <= 0.057563865557312965) {
                        votes[24] = 1;
                    } else {
                        votes[24] = 1;
                    }
                } else {
                    votes[24] = 1;
                }
            } else {
                if (diastolic_time <= 0.011158470064401627) {
                    if (dist_std <= 0.045231904834508896) {
                        votes[24] = 0;
                    } else {
                        votes[24] = 0;
                    }
                } else {
                    if (dist_std <= 0.03709334880113602) {
                        if (num_peaks <= 132.0) {
                            if (rr_std <= 42.892608642578125) {
                                if (dist_std <= 0.03370693884789944) {
                                    votes[24] = 4;
                                } else {
                                    votes[24] = 4;
                                }
                            } else {
                                votes[24] = 4;
                            }
                        } else {
                            votes[24] = 5;
                        }
                    } else {
                        if (num_peaks <= 91.5) {
                            if (dist_std <= 0.06884244456887245) {
                                votes[24] = 4;
                            } else {
                                votes[24] = 1;
                            }
                        } else {
                            if (rr_median <= 99.25) {
                                if (dist_std <= 0.05856667086482048) {
                                    if (rr_median <= 86.5) {
                                        votes[24] = 4;
                                    } else {
                                        votes[24] = 1;
                                    }
                                } else {
                                    if (diastolic_area <= -24.441637992858887) {
                                        if (dist_std <= 0.10658985376358032) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 1;
                                        }
                                    } else {
                                        if (num_peaks <= 119.0) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 29.82318687438965) {
                                    if (rr_std <= 4.869365692138672) {
                                        votes[24] = 1;
                                    } else {
                                        if (dist_std <= 0.05042261630296707) {
                                            votes[24] = 1;
                                        } else {
                                            votes[24] = 1;
                                        }
                                    }
                                } else {
                                    votes[24] = 5;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.0677867941558361) {
            if (num_peaks <= 108.5) {
                if (diastolic_time <= 0.6230769455432892) {
                    if (rr_median <= 89.5) {
                        if (diastolic_time <= 0.5334666669368744) {
                            if (rr_std <= 31.861740112304688) {
                                if (diastolic_time <= 0.38305455446243286) {
                                    votes[24] = 2;
                                } else {
                                    votes[24] = 2;
                                }
                            } else {
                                votes[24] = 4;
                            }
                        } else {
                            votes[24] = 5;
                        }
                    } else {
                        if (num_peaks <= 78.0) {
                            votes[24] = 1;
                        } else {
                            votes[24] = 4;
                        }
                    }
                } else {
                    if (rr_median <= 88.75) {
                        votes[24] = 1;
                    } else {
                        votes[24] = 1;
                    }
                }
            } else {
                if (rr_std <= 5.468451499938965) {
                    votes[24] = 5;
                } else {
                    if (diastolic_time <= 0.2809973508119583) {
                        if (num_peaks <= 137.0) {
                            votes[24] = 0;
                        } else {
                            votes[24] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.7691999971866608) {
                            if (diastolic_area <= -18.74553108215332) {
                                if (diastolic_area <= -20.24919605255127) {
                                    if (rr_std <= 10.184516906738281) {
                                        votes[24] = 0;
                                    } else {
                                        votes[24] = 0;
                                    }
                                } else {
                                    votes[24] = 3;
                                }
                            } else {
                                if (rr_median <= 53.5) {
                                    votes[24] = 0;
                                } else {
                                    if (rr_std <= 43.00778388977051) {
                                        if (rr_median <= 61.25) {
                                            votes[24] = 0;
                                        } else {
                                            votes[24] = 0;
                                        }
                                    } else {
                                        votes[24] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[24] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 87.5) {
                if (rr_median <= 87.5) {
                    if (diastolic_area <= -23.124701499938965) {
                        if (diastolic_time <= 0.33444203436374664) {
                            votes[24] = 2;
                        } else {
                            votes[24] = 2;
                        }
                    } else {
                        if (dist_std <= 0.09671330079436302) {
                            votes[24] = 2;
                        } else {
                            votes[24] = 2;
                        }
                    }
                } else {
                    votes[24] = 5;
                }
            } else {
                if (diastolic_time <= 0.929500013589859) {
                    if (rr_median <= 66.5) {
                        if (diastolic_area <= -19.045209884643555) {
                            if (diastolic_area <= -24.260000228881836) {
                                votes[24] = 3;
                            } else {
                                votes[24] = 3;
                            }
                        } else {
                            votes[24] = 2;
                        }
                    } else {
                        if (dist_std <= 0.1334046646952629) {
                            if (rr_std <= 25.289942741394043) {
                                if (num_peaks <= 131.5) {
                                    if (diastolic_time <= 0.6174857318401337) {
                                        if (diastolic_area <= -21.41624927520752) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    } else {
                                        votes[24] = 1;
                                    }
                                } else {
                                    votes[24] = 3;
                                }
                            } else {
                                if (rr_median <= 88.25) {
                                    votes[24] = 2;
                                } else {
                                    votes[24] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 0.6021998524665833) {
                                votes[24] = 2;
                            } else {
                                votes[24] = 2;
                            }
                        }
                    }
                } else {
                    votes[24] = 1;
                }
            }
        }
    }
// Decision rules for tree 25
    if (diastolic_time <= 0.27653968334198) {
        if (rr_median <= 99.25) {
            if (rr_std <= 15.9564790725708) {
                if (rr_median <= 66.5) {
                    if (rr_median <= 47.0) {
                        if (num_peaks <= 126.0) {
                            votes[25] = 4;
                        } else {
                            votes[25] = 3;
                        }
                    } else {
                        if (num_peaks <= 132.5) {
                            if (num_peaks <= 128.5) {
                                if (rr_std <= 12.886781215667725) {
                                    if (diastolic_area <= -40.88657760620117) {
                                        votes[25] = 3;
                                    } else {
                                        votes[25] = 3;
                                    }
                                } else {
                                    votes[25] = 3;
                                }
                            } else {
                                votes[25] = 5;
                            }
                        } else {
                            votes[25] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 108.5) {
                        if (rr_median <= 76.25) {
                            if (num_peaks <= 104.0) {
                                votes[25] = 2;
                            } else {
                                votes[25] = 2;
                            }
                        } else {
                            if (rr_std <= 0.8062522113323212) {
                                votes[25] = 5;
                            } else {
                                votes[25] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 4.248213529586792) {
                            if (num_peaks <= 128.5) {
                                if (diastolic_area <= -41.42655563354492) {
                                    if (rr_std <= 0.7013915777206421) {
                                        votes[25] = 3;
                                    } else {
                                        votes[25] = 5;
                                    }
                                } else {
                                    if (rr_std <= 0.6051430106163025) {
                                        votes[25] = 5;
                                    } else {
                                        votes[25] = 5;
                                    }
                                }
                            } else {
                                votes[25] = 3;
                            }
                        } else {
                            if (diastolic_area <= -19.31017017364502) {
                                if (rr_median <= 87.5) {
                                    if (rr_median <= 71.5) {
                                        votes[25] = 5;
                                    } else {
                                        votes[25] = 5;
                                    }
                                } else {
                                    votes[25] = 5;
                                }
                            } else {
                                votes[25] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -52.48637771606445) {
                    if (diastolic_area <= -112.21745681762695) {
                        votes[25] = 4;
                    } else {
                        if (diastolic_time <= 0.11545010283589363) {
                            if (diastolic_time <= 0.06971428543329239) {
                                votes[25] = 3;
                            } else {
                                if (rr_std <= 24.864691734313965) {
                                    votes[25] = 1;
                                } else {
                                    votes[25] = 5;
                                }
                            }
                        } else {
                            votes[25] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 133.5) {
                        if (dist_std <= 0.12036266922950745) {
                            if (diastolic_time <= 0.1736646518111229) {
                                if (diastolic_area <= -48.56148910522461) {
                                    votes[25] = 4;
                                } else {
                                    if (rr_median <= 88.0) {
                                        if (diastolic_area <= -37.531394958496094) {
                                            votes[25] = 4;
                                        } else {
                                            votes[25] = 4;
                                        }
                                    } else {
                                        votes[25] = 4;
                                    }
                                }
                            } else {
                                if (rr_median <= 64.75) {
                                    votes[25] = 3;
                                } else {
                                    if (dist_std <= 0.039597583934664726) {
                                        votes[25] = 4;
                                    } else {
                                        votes[25] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[25] = 3;
                        }
                    } else {
                        if (rr_median <= 81.75) {
                            votes[25] = 3;
                        } else {
                            votes[25] = 5;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -37.20199775695801) {
                if (num_peaks <= 107.5) {
                    votes[25] = 1;
                } else {
                    if (num_peaks <= 144.5) {
                        if (diastolic_area <= -81.4401626586914) {
                            votes[25] = 1;
                        } else {
                            if (rr_std <= 1.1022409200668335) {
                                votes[25] = 1;
                            } else {
                                votes[25] = 1;
                            }
                        }
                    } else {
                        votes[25] = 1;
                    }
                }
            } else {
                if (dist_std <= 0.05005978234112263) {
                    if (num_peaks <= 111.0) {
                        votes[25] = 4;
                    } else {
                        votes[25] = 4;
                    }
                } else {
                    if (rr_std <= 17.74962329864502) {
                        votes[25] = 1;
                    } else {
                        votes[25] = 3;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 122.5) {
            if (diastolic_area <= -18.82423496246338) {
                if (num_peaks <= 90.5) {
                    if (rr_median <= 74.25) {
                        if (diastolic_time <= 0.5302857160568237) {
                            votes[25] = 2;
                        } else {
                            votes[25] = 2;
                        }
                    } else {
                        if (diastolic_area <= -22.525029182434082) {
                            votes[25] = 2;
                        } else {
                            votes[25] = 2;
                        }
                    }
                } else {
                    if (rr_median <= 69.5) {
                        if (diastolic_area <= -22.85755157470703) {
                            votes[25] = 2;
                        } else {
                            votes[25] = 3;
                        }
                    } else {
                        if (num_peaks <= 111.5) {
                            votes[25] = 2;
                        } else {
                            votes[25] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6243076920509338) {
                    if (rr_median <= 74.75) {
                        if (dist_std <= 0.030930746346712112) {
                            votes[25] = 0;
                        } else {
                            if (rr_std <= 20.615077018737793) {
                                votes[25] = 5;
                            } else {
                                votes[25] = 2;
                            }
                        }
                    } else {
                        if (diastolic_area <= -15.292630195617676) {
                            if (diastolic_time <= 0.3844369649887085) {
                                votes[25] = 5;
                            } else {
                                votes[25] = 2;
                            }
                        } else {
                            if (num_peaks <= 88.5) {
                                votes[25] = 4;
                            } else {
                                votes[25] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 7.819546461105347) {
                        votes[25] = 5;
                    } else {
                        if (rr_median <= 79.25) {
                            votes[25] = 1;
                        } else {
                            votes[25] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.0629428755491972) {
                if (rr_std <= 7.789663076400757) {
                    votes[25] = 3;
                } else {
                    if (rr_median <= 52.25) {
                        votes[25] = 0;
                    } else {
                        if (diastolic_time <= 0.7807555496692657) {
                            if (dist_std <= 0.029994824901223183) {
                                votes[25] = 0;
                            } else {
                                if (num_peaks <= 143.5) {
                                    votes[25] = 0;
                                } else {
                                    if (rr_std <= 17.694948196411133) {
                                        if (dist_std <= 0.043402621522545815) {
                                            votes[25] = 0;
                                        } else {
                                            votes[25] = 0;
                                        }
                                    } else {
                                        votes[25] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[25] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -14.788023948669434) {
                    if (rr_median <= 84.75) {
                        votes[25] = 3;
                    } else {
                        votes[25] = 5;
                    }
                } else {
                    votes[25] = 2;
                }
            }
        }
    }
// Decision rules for tree 26
    if (diastolic_time <= 0.26275861263275146) {
        if (rr_std <= 17.313146591186523) {
            if (rr_median <= 68.75) {
                if (dist_std <= 0.1390446275472641) {
                    if (num_peaks <= 92.5) {
                        votes[26] = 4;
                    } else {
                        if (rr_median <= 45.25) {
                            votes[26] = 1;
                        } else {
                            if (diastolic_area <= -38.707454681396484) {
                                if (diastolic_area <= -96.8187370300293) {
                                    votes[26] = 3;
                                } else {
                                    votes[26] = 3;
                                }
                            } else {
                                if (num_peaks <= 127.0) {
                                    if (diastolic_time <= 0.13635065034031868) {
                                        votes[26] = 3;
                                    } else {
                                        votes[26] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 132.5) {
                                        votes[26] = 1;
                                    } else {
                                        if (num_peaks <= 143.5) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    votes[26] = 2;
                }
            } else {
                if (rr_median <= 99.25) {
                    if (rr_std <= 13.86873197555542) {
                        if (diastolic_area <= -2.646899700164795) {
                            if (diastolic_area <= -70.08413696289062) {
                                if (num_peaks <= 112.0) {
                                    votes[26] = 1;
                                } else {
                                    votes[26] = 5;
                                }
                            } else {
                                if (num_peaks <= 125.5) {
                                    if (num_peaks <= 107.5) {
                                        votes[26] = 5;
                                    } else {
                                        if (diastolic_area <= -41.42655563354492) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 74.0) {
                                        votes[26] = 3;
                                    } else {
                                        votes[26] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[26] = 0;
                        }
                    } else {
                        if (num_peaks <= 120.5) {
                            votes[26] = 3;
                        } else {
                            votes[26] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 0.20786985754966736) {
                        votes[26] = 4;
                    } else {
                        if (rr_std <= 4.495530009269714) {
                            votes[26] = 1;
                        } else {
                            if (num_peaks <= 136.5) {
                                votes[26] = 5;
                            } else {
                                votes[26] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -57.51108932495117) {
                if (rr_std <= 29.797718048095703) {
                    if (rr_median <= 99.0) {
                        if (diastolic_time <= 0.07519499957561493) {
                            votes[26] = 3;
                        } else {
                            if (rr_median <= 80.0) {
                                votes[26] = 4;
                            } else {
                                votes[26] = 3;
                            }
                        }
                    } else {
                        votes[26] = 5;
                    }
                } else {
                    if (diastolic_time <= 0.07656653225421906) {
                        if (rr_std <= 42.04206848144531) {
                            votes[26] = 1;
                        } else {
                            votes[26] = 1;
                        }
                    } else {
                        votes[26] = 1;
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.10825156047940254) {
                        if (rr_median <= 97.5) {
                            if (diastolic_time <= 0.18797121196985245) {
                                if (diastolic_time <= 0.1736646518111229) {
                                    if (diastolic_area <= -37.72231674194336) {
                                        if (num_peaks <= 126.5) {
                                            votes[26] = 4;
                                        } else {
                                            votes[26] = 4;
                                        }
                                    } else {
                                        votes[26] = 4;
                                    }
                                } else {
                                    votes[26] = 4;
                                }
                            } else {
                                if (rr_median <= 59.0) {
                                    votes[26] = 2;
                                } else {
                                    votes[26] = 4;
                                }
                            }
                        } else {
                            if (rr_std <= 45.211090087890625) {
                                votes[26] = 1;
                            } else {
                                if (diastolic_area <= -8.531745672225952) {
                                    votes[26] = 4;
                                } else {
                                    votes[26] = 4;
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 0.11826056987047195) {
                            votes[26] = 5;
                        } else {
                            if (rr_median <= 65.5) {
                                votes[26] = 4;
                            } else {
                                votes[26] = 3;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.16469410061836243) {
                        if (rr_median <= 78.75) {
                            if (diastolic_time <= 0.09866979345679283) {
                                votes[26] = 1;
                            } else {
                                votes[26] = 3;
                            }
                        } else {
                            votes[26] = 0;
                        }
                    } else {
                        votes[26] = 5;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_time <= 0.6157333254814148) {
                if (rr_median <= 82.5) {
                    if (num_peaks <= 93.5) {
                        if (diastolic_area <= -17.837119102478027) {
                            if (diastolic_time <= 0.5116166770458221) {
                                votes[26] = 2;
                            } else {
                                votes[26] = 2;
                            }
                        } else {
                            votes[26] = 4;
                        }
                    } else {
                        if (dist_std <= 0.045806657522916794) {
                            votes[26] = 0;
                        } else {
                            if (diastolic_area <= -17.63887596130371) {
                                if (dist_std <= 0.13581082969903946) {
                                    if (rr_median <= 66.0) {
                                        votes[26] = 3;
                                    } else {
                                        if (dist_std <= 0.10150306299328804) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    }
                                } else {
                                    votes[26] = 2;
                                }
                            } else {
                                votes[26] = 2;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -15.292630195617676) {
                        if (rr_std <= 3.389266312122345) {
                            votes[26] = 5;
                        } else {
                            if (rr_std <= 31.335869789123535) {
                                if (rr_median <= 87.5) {
                                    votes[26] = 2;
                                } else {
                                    votes[26] = 5;
                                }
                            } else {
                                votes[26] = 5;
                            }
                        }
                    } else {
                        if (dist_std <= 0.051400430500507355) {
                            votes[26] = 4;
                        } else {
                            votes[26] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[26] = 5;
                } else {
                    if (rr_median <= 79.25) {
                        votes[26] = 1;
                    } else {
                        votes[26] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 8.305138111114502) {
                if (diastolic_time <= 0.46133333444595337) {
                    if (rr_median <= 74.5) {
                        votes[26] = 3;
                    } else {
                        votes[26] = 3;
                    }
                } else {
                    votes[26] = 5;
                }
            } else {
                if (dist_std <= 0.0768120251595974) {
                    if (diastolic_area <= -18.90355396270752) {
                        if (rr_median <= 60.25) {
                            votes[26] = 3;
                        } else {
                            if (dist_std <= 0.04353496432304382) {
                                votes[26] = 0;
                            } else {
                                votes[26] = 0;
                            }
                        }
                    } else {
                        if (dist_std <= 0.05729674734175205) {
                            if (rr_std <= 12.967083930969238) {
                                if (num_peaks <= 143.0) {
                                    votes[26] = 0;
                                } else {
                                    if (rr_std <= 11.753343105316162) {
                                        votes[26] = 0;
                                    } else {
                                        votes[26] = 0;
                                    }
                                }
                            } else {
                                votes[26] = 0;
                            }
                        } else {
                            votes[26] = 0;
                        }
                    }
                } else {
                    votes[26] = 2;
                }
            }
        }
    }
// Decision rules for tree 27
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 86.5) {
            if (rr_std <= 14.180799007415771) {
                if (rr_median <= 70.5) {
                    if (dist_std <= 0.06672794371843338) {
                        if (rr_std <= 10.076533794403076) {
                            votes[27] = 3;
                        } else {
                            if (rr_median <= 53.5) {
                                votes[27] = 3;
                            } else {
                                votes[27] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.07230067066848278) {
                            votes[27] = 4;
                        } else {
                            if (num_peaks <= 113.0) {
                                votes[27] = 3;
                            } else {
                                if (rr_median <= 53.75) {
                                    votes[27] = 1;
                                } else {
                                    votes[27] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.15604308247566223) {
                        if (rr_std <= 9.967007637023926) {
                            votes[27] = 5;
                        } else {
                            votes[27] = 5;
                        }
                    } else {
                        votes[27] = 3;
                    }
                }
            } else {
                if (num_peaks <= 136.5) {
                    if (diastolic_area <= -51.955942153930664) {
                        if (num_peaks <= 124.5) {
                            votes[27] = 3;
                        } else {
                            if (diastolic_time <= 0.10873513296246529) {
                                votes[27] = 1;
                            } else {
                                votes[27] = 4;
                            }
                        }
                    } else {
                        if (dist_std <= 0.12658102065324783) {
                            if (rr_std <= 20.162090301513672) {
                                if (rr_std <= 15.466530323028564) {
                                    votes[27] = 4;
                                } else {
                                    if (diastolic_time <= 0.13052916526794434) {
                                        votes[27] = 3;
                                    } else {
                                        votes[27] = 4;
                                    }
                                }
                            } else {
                                if (num_peaks <= 132.5) {
                                    if (diastolic_time <= 0.1854936182498932) {
                                        if (num_peaks <= 122.5) {
                                            votes[27] = 4;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    } else {
                                        votes[27] = 4;
                                    }
                                } else {
                                    votes[27] = 1;
                                }
                            }
                        } else {
                            votes[27] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.1173725500702858) {
                        if (dist_std <= 0.043182263150811195) {
                            votes[27] = 3;
                        } else {
                            votes[27] = 1;
                        }
                    } else {
                        votes[27] = 3;
                    }
                }
            }
        } else {
            if (diastolic_area <= -64.13205909729004) {
                if (diastolic_time <= 0.10200454294681549) {
                    if (rr_median <= 99.25) {
                        if (diastolic_area <= -97.11182022094727) {
                            votes[27] = 5;
                        } else {
                            if (diastolic_area <= -85.41057205200195) {
                                votes[27] = 1;
                            } else {
                                votes[27] = 3;
                            }
                        }
                    } else {
                        votes[27] = 1;
                    }
                } else {
                    votes[27] = 5;
                }
            } else {
                if (diastolic_time <= 0.011158470064401627) {
                    votes[27] = 0;
                } else {
                    if (dist_std <= 0.0378111619502306) {
                        if (num_peaks <= 128.0) {
                            votes[27] = 4;
                        } else {
                            votes[27] = 5;
                        }
                    } else {
                        if (rr_std <= 37.85541915893555) {
                            if (rr_median <= 127.5) {
                                if (rr_median <= 89.5) {
                                    votes[27] = 1;
                                } else {
                                    if (rr_median <= 102.5) {
                                        if (diastolic_time <= 0.13618316501379013) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    } else {
                                        votes[27] = 1;
                                    }
                                }
                            } else {
                                votes[27] = 1;
                            }
                        } else {
                            if (rr_std <= 51.52536582946777) {
                                votes[27] = 4;
                            } else {
                                votes[27] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (rr_std <= 0.6796177625656128) {
                if (rr_median <= 74.25) {
                    if (rr_median <= 69.5) {
                        if (dist_std <= 0.13961991667747498) {
                            votes[27] = 2;
                        } else {
                            votes[27] = 2;
                        }
                    } else {
                        votes[27] = 2;
                    }
                } else {
                    votes[27] = 5;
                }
            } else {
                if (rr_std <= 14.157156467437744) {
                    if (diastolic_area <= -12.897314071655273) {
                        if (rr_median <= 66.25) {
                            votes[27] = 3;
                        } else {
                            if (diastolic_area <= -21.86119556427002) {
                                if (dist_std <= 0.1204538494348526) {
                                    votes[27] = 5;
                                } else {
                                    votes[27] = 5;
                                }
                            } else {
                                if (diastolic_area <= -15.095143795013428) {
                                    votes[27] = 5;
                                } else {
                                    votes[27] = 5;
                                }
                            }
                        }
                    } else {
                        votes[27] = 1;
                    }
                } else {
                    if (diastolic_time <= 0.7013818323612213) {
                        if (rr_median <= 77.0) {
                            if (num_peaks <= 104.5) {
                                if (rr_std <= 33.76094627380371) {
                                    votes[27] = 2;
                                } else {
                                    votes[27] = 1;
                                }
                            } else {
                                if (rr_median <= 67.5) {
                                    votes[27] = 3;
                                } else {
                                    if (diastolic_time <= 0.37092380225658417) {
                                        votes[27] = 0;
                                    } else {
                                        votes[27] = 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 52.389719009399414) {
                                if (num_peaks <= 85.5) {
                                    if (dist_std <= 0.04324321635067463) {
                                        votes[27] = 4;
                                    } else {
                                        votes[27] = 4;
                                    }
                                } else {
                                    if (diastolic_area <= -14.448471069335938) {
                                        votes[27] = 2;
                                    } else {
                                        votes[27] = 4;
                                    }
                                }
                            } else {
                                votes[27] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 36.49445152282715) {
                            votes[27] = 1;
                        } else {
                            votes[27] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 7.622419357299805) {
                if (diastolic_time <= 0.4606666713953018) {
                    if (diastolic_area <= -27.5295991897583) {
                        votes[27] = 5;
                    } else {
                        votes[27] = 3;
                    }
                } else {
                    votes[27] = 5;
                }
            } else {
                if (dist_std <= 0.0748080238699913) {
                    if (diastolic_time <= 0.27446305751800537) {
                        votes[27] = 0;
                    } else {
                        if (rr_median <= 51.25) {
                            votes[27] = 0;
                        } else {
                            if (dist_std <= 0.05729674734175205) {
                                if (rr_std <= 11.857729434967041) {
                                    if (num_peaks <= 143.5) {
                                        votes[27] = 0;
                                    } else {
                                        votes[27] = 0;
                                    }
                                } else {
                                    if (diastolic_area <= -18.90355396270752) {
                                        votes[27] = 0;
                                    } else {
                                        votes[27] = 0;
                                    }
                                }
                            } else {
                                votes[27] = 0;
                            }
                        }
                    }
                } else {
                    votes[27] = 2;
                }
            }
        }
    }
// Decision rules for tree 28
    if (rr_std <= 0.6296193599700928) {
        if (diastolic_time <= 0.19875451922416687) {
            if (rr_median <= 135.0) {
                if (rr_median <= 65.5) {
                    votes[28] = 3;
                } else {
                    if (diastolic_time <= 0.14471618086099625) {
                        votes[28] = 1;
                    } else {
                        votes[28] = 5;
                    }
                }
            } else {
                votes[28] = 4;
            }
        } else {
            if (dist_std <= 0.09838484227657318) {
                votes[28] = 5;
            } else {
                if (rr_median <= 74.25) {
                    if (rr_median <= 69.5) {
                        if (diastolic_area <= -28.029162406921387) {
                            votes[28] = 2;
                        } else {
                            votes[28] = 2;
                        }
                    } else {
                        votes[28] = 2;
                    }
                } else {
                    votes[28] = 5;
                }
            }
        }
    } else {
        if (diastolic_time <= 0.27752137184143066) {
            if (rr_std <= 20.299455642700195) {
                if (rr_median <= 98.5) {
                    if (rr_median <= 68.5) {
                        if (num_peaks <= 131.5) {
                            if (diastolic_time <= 0.05676368437707424) {
                                votes[28] = 4;
                            } else {
                                if (num_peaks <= 121.5) {
                                    if (dist_std <= 0.08308517932891846) {
                                        votes[28] = 3;
                                    } else {
                                        votes[28] = 3;
                                    }
                                } else {
                                    if (dist_std <= 0.08540085703134537) {
                                        if (diastolic_area <= -38.53718185424805) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    } else {
                                        votes[28] = 1;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.06308810226619244) {
                                votes[28] = 3;
                            } else {
                                votes[28] = 3;
                            }
                        }
                    } else {
                        if (dist_std <= 0.11952435970306396) {
                            if (diastolic_time <= 0.016946058720350266) {
                                votes[28] = 0;
                            } else {
                                if (num_peaks <= 138.0) {
                                    if (rr_std <= 16.15445613861084) {
                                        if (num_peaks <= 107.5) {
                                            votes[28] = 1;
                                        } else {
                                            votes[28] = 3;
                                        }
                                    } else {
                                        if (dist_std <= 0.053296977654099464) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    }
                                } else {
                                    votes[28] = 5;
                                }
                            }
                        } else {
                            votes[28] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 13.315665245056152) {
                        if (diastolic_area <= -76.04576110839844) {
                            votes[28] = 1;
                        } else {
                            if (rr_std <= 3.423721432685852) {
                                votes[28] = 1;
                            } else {
                                votes[28] = 1;
                            }
                        }
                    } else {
                        votes[28] = 5;
                    }
                }
            } else {
                if (diastolic_area <= -57.757301330566406) {
                    if (diastolic_time <= 0.06257603876292706) {
                        if (rr_std <= 46.694780349731445) {
                            votes[28] = 1;
                        } else {
                            votes[28] = 1;
                        }
                    } else {
                        if (rr_std <= 25.29766845703125) {
                            votes[28] = 1;
                        } else {
                            if (diastolic_area <= -70.34611511230469) {
                                if (dist_std <= 0.06576932035386562) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 3;
                                }
                            } else {
                                votes[28] = 5;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 135.5) {
                        if (dist_std <= 0.11847224086523056) {
                            if (dist_std <= 0.059234123677015305) {
                                if (num_peaks <= 132.5) {
                                    if (diastolic_area <= -14.946082592010498) {
                                        if (diastolic_time <= 0.09280475229024887) {
                                            votes[28] = 1;
                                        } else {
                                            votes[28] = 4;
                                        }
                                    } else {
                                        votes[28] = 4;
                                    }
                                } else {
                                    votes[28] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.0693394336849451) {
                                    if (dist_std <= 0.08532354980707169) {
                                        votes[28] = 4;
                                    } else {
                                        votes[28] = 4;
                                    }
                                } else {
                                    votes[28] = 5;
                                }
                            }
                        } else {
                            votes[28] = 3;
                        }
                    } else {
                        if (rr_median <= 79.0) {
                            votes[28] = 3;
                        } else {
                            votes[28] = 0;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 124.5) {
                if (diastolic_time <= 0.6167076826095581) {
                    if (rr_std <= 15.388967990875244) {
                        if (dist_std <= 0.15090828388929367) {
                            if (dist_std <= 0.056794289499521255) {
                                if (num_peaks <= 102.0) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 0;
                                }
                            } else {
                                if (dist_std <= 0.09850481897592545) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 5;
                                }
                            }
                        } else {
                            votes[28] = 2;
                        }
                    } else {
                        if (rr_median <= 76.75) {
                            if (num_peaks <= 105.0) {
                                if (rr_std <= 33.76094627380371) {
                                    votes[28] = 2;
                                } else {
                                    votes[28] = 1;
                                }
                            } else {
                                votes[28] = 3;
                            }
                        } else {
                            if (num_peaks <= 92.0) {
                                if (dist_std <= 0.04324321635067463) {
                                    votes[28] = 4;
                                } else {
                                    if (dist_std <= 0.07911236584186554) {
                                        votes[28] = 4;
                                    } else {
                                        votes[28] = 4;
                                    }
                                }
                            } else {
                                votes[28] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.425213813781738) {
                        votes[28] = 5;
                    } else {
                        if (rr_median <= 79.25) {
                            votes[28] = 1;
                        } else {
                            votes[28] = 1;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.06402583606541157) {
                    if (rr_std <= 8.07284927368164) {
                        if (diastolic_time <= 0.4906666576862335) {
                            votes[28] = 0;
                        } else {
                            votes[28] = 5;
                        }
                    } else {
                        if (num_peaks <= 132.5) {
                            if (dist_std <= 0.044113585725426674) {
                                votes[28] = 0;
                            } else {
                                votes[28] = 3;
                            }
                        } else {
                            if (rr_std <= 11.857729434967041) {
                                if (dist_std <= 0.037760328501462936) {
                                    votes[28] = 0;
                                } else {
                                    votes[28] = 0;
                                }
                            } else {
                                if (diastolic_time <= 0.7807555496692657) {
                                    votes[28] = 0;
                                } else {
                                    votes[28] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.3887999951839447) {
                        if (diastolic_area <= -23.083620071411133) {
                            votes[28] = 5;
                        } else {
                            votes[28] = 3;
                        }
                    } else {
                        votes[28] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 29
    if (diastolic_time <= 0.2302621826529503) {
        if (diastolic_area <= -58.94129180908203) {
            if (rr_median <= 97.75) {
                if (rr_std <= 34.41845512390137) {
                    if (diastolic_area <= -68.8874397277832) {
                        if (rr_median <= 92.75) {
                            if (diastolic_time <= 0.08075384795665741) {
                                if (num_peaks <= 118.0) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 3;
                                }
                            } else {
                                if (num_peaks <= 127.0) {
                                    votes[29] = 1;
                                } else {
                                    if (diastolic_time <= 0.10882893204689026) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[29] = 1;
                        }
                    } else {
                        votes[29] = 5;
                    }
                } else {
                    if (dist_std <= 0.043868955224752426) {
                        votes[29] = 1;
                    } else {
                        votes[29] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.09462330862879753) {
                    if (rr_median <= 106.75) {
                        if (diastolic_time <= 0.06549717858433723) {
                            votes[29] = 1;
                        } else {
                            votes[29] = 1;
                        }
                    } else {
                        votes[29] = 1;
                    }
                } else {
                    votes[29] = 1;
                }
            }
        } else {
            if (rr_std <= 15.967272281646729) {
                if (diastolic_time <= 0.03449518792331219) {
                    if (diastolic_time <= 0.028949235565960407) {
                        if (dist_std <= 0.06550060398876667) {
                            votes[29] = 0;
                        } else {
                            votes[29] = 5;
                        }
                    } else {
                        votes[29] = 4;
                    }
                } else {
                    if (rr_median <= 75.5) {
                        if (dist_std <= 0.14601688086986542) {
                            if (diastolic_area <= -14.251502513885498) {
                                if (dist_std <= 0.1229875423014164) {
                                    if (rr_std <= 10.055254936218262) {
                                        if (diastolic_time <= 0.08885972946882248) {
                                            votes[29] = 3;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 10.791455745697021) {
                                            votes[29] = 1;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 0.7346012592315674) {
                                        votes[29] = 3;
                                    } else {
                                        votes[29] = 1;
                                    }
                                }
                            } else {
                                votes[29] = 1;
                            }
                        } else {
                            votes[29] = 2;
                        }
                    } else {
                        if (rr_median <= 102.5) {
                            if (diastolic_area <= -39.073347091674805) {
                                if (dist_std <= 0.09151189029216766) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 5;
                                }
                            } else {
                                if (num_peaks <= 121.0) {
                                    votes[29] = 1;
                                } else {
                                    votes[29] = 5;
                                }
                            }
                        } else {
                            if (dist_std <= 0.07271425426006317) {
                                votes[29] = 1;
                            } else {
                                votes[29] = 1;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.12688825279474258) {
                        if (dist_std <= 0.07245555892586708) {
                            if (diastolic_area <= -37.531394958496094) {
                                if (diastolic_time <= 0.10187989100813866) {
                                    votes[29] = 1;
                                } else {
                                    if (diastolic_time <= 0.13780034333467484) {
                                        if (rr_median <= 70.25) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.1736646518111229) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 104.0) {
                                    if (rr_median <= 75.75) {
                                        votes[29] = 4;
                                    } else {
                                        votes[29] = 4;
                                    }
                                } else {
                                    votes[29] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 79.5) {
                                if (diastolic_area <= -19.75959014892578) {
                                    votes[29] = 2;
                                } else {
                                    if (num_peaks <= 116.0) {
                                        votes[29] = 4;
                                    } else {
                                        votes[29] = 4;
                                    }
                                }
                            } else {
                                votes[29] = 5;
                            }
                        }
                    } else {
                        votes[29] = 3;
                    }
                } else {
                    if (rr_median <= 77.25) {
                        votes[29] = 3;
                    } else {
                        if (diastolic_time <= 0.027963636443018913) {
                            votes[29] = 0;
                        } else {
                            votes[29] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05421454273164272) {
            if (num_peaks <= 106.5) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (dist_std <= 0.035057563334703445) {
                        votes[29] = 5;
                    } else {
                        if (diastolic_area <= -17.478663444519043) {
                            votes[29] = 2;
                        } else {
                            if (diastolic_area <= -13.38112497329712) {
                                votes[29] = 4;
                            } else {
                                votes[29] = 4;
                            }
                        }
                    }
                } else {
                    votes[29] = 1;
                }
            } else {
                if (rr_std <= 8.344743251800537) {
                    votes[29] = 5;
                } else {
                    if (diastolic_time <= 0.29898856580257416) {
                        if (rr_median <= 72.25) {
                            votes[29] = 3;
                        } else {
                            votes[29] = 0;
                        }
                    } else {
                        if (rr_median <= 53.0) {
                            votes[29] = 0;
                        } else {
                            if (dist_std <= 0.04599898308515549) {
                                if (rr_median <= 57.75) {
                                    votes[29] = 0;
                                } else {
                                    votes[29] = 0;
                                }
                            } else {
                                if (num_peaks <= 133.5) {
                                    votes[29] = 0;
                                } else {
                                    votes[29] = 0;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -14.380167007446289) {
                if (num_peaks <= 105.5) {
                    if (rr_std <= 35.36760139465332) {
                        if (rr_median <= 69.5) {
                            if (diastolic_time <= 0.3587917536497116) {
                                if (rr_median <= 64.5) {
                                    votes[29] = 2;
                                } else {
                                    votes[29] = 2;
                                }
                            } else {
                                votes[29] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.5114666819572449) {
                                if (dist_std <= 0.08889133483171463) {
                                    if (num_peaks <= 85.5) {
                                        votes[29] = 2;
                                    } else {
                                        votes[29] = 2;
                                    }
                                } else {
                                    votes[29] = 2;
                                }
                            } else {
                                votes[29] = 5;
                            }
                        }
                    } else {
                        votes[29] = 5;
                    }
                } else {
                    if (num_peaks <= 140.5) {
                        if (dist_std <= 0.08598588407039642) {
                            if (diastolic_area <= -21.87519645690918) {
                                votes[29] = 5;
                            } else {
                                votes[29] = 5;
                            }
                        } else {
                            if (diastolic_area <= -22.924763679504395) {
                                if (diastolic_time <= 0.2568104863166809) {
                                    votes[29] = 3;
                                } else {
                                    if (diastolic_area <= -28.598456382751465) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 5;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.1334046646952629) {
                                    votes[29] = 2;
                                } else {
                                    votes[29] = 2;
                                }
                            }
                        }
                    } else {
                        votes[29] = 3;
                    }
                }
            } else {
                if (num_peaks <= 129.5) {
                    if (diastolic_time <= 0.5904000103473663) {
                        if (rr_median <= 78.5) {
                            votes[29] = 1;
                        } else {
                            votes[29] = 4;
                        }
                    } else {
                        if (dist_std <= 0.06117774918675423) {
                            votes[29] = 1;
                        } else {
                            votes[29] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 30.31443500518799) {
                        votes[29] = 0;
                    } else {
                        votes[29] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 30
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_std <= 14.17724084854126) {
            if (rr_median <= 101.0) {
                if (rr_median <= 90.5) {
                    if (dist_std <= 0.07846580073237419) {
                        if (rr_median <= 54.5) {
                            if (dist_std <= 0.02690474595874548) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 3;
                            }
                        } else {
                            if (dist_std <= 0.033838361501693726) {
                                votes[30] = 5;
                            } else {
                                if (diastolic_area <= -25.121992111206055) {
                                    if (num_peaks <= 129.5) {
                                        votes[30] = 3;
                                    } else {
                                        votes[30] = 3;
                                    }
                                } else {
                                    votes[30] = 1;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.06444099359214306) {
                            if (rr_std <= 6.372097730636597) {
                                votes[30] = 5;
                            } else {
                                votes[30] = 4;
                            }
                        } else {
                            if (rr_median <= 61.0) {
                                if (diastolic_area <= -39.60665512084961) {
                                    votes[30] = 1;
                                } else {
                                    votes[30] = 3;
                                }
                            } else {
                                if (rr_median <= 75.5) {
                                    if (rr_std <= 0.6640671193599701) {
                                        votes[30] = 3;
                                    } else {
                                        votes[30] = 3;
                                    }
                                } else {
                                    votes[30] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.06231079623103142) {
                        votes[30] = 0;
                    } else {
                        if (diastolic_time <= 0.12713680043816566) {
                            votes[30] = 5;
                        } else {
                            votes[30] = 5;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.026017594151198864) {
                    votes[30] = 4;
                } else {
                    if (dist_std <= 0.05583411082625389) {
                        if (rr_median <= 153.25) {
                            votes[30] = 5;
                        } else {
                            votes[30] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.06293703801929951) {
                            votes[30] = 1;
                        } else {
                            votes[30] = 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -53.67966651916504) {
                if (diastolic_time <= 0.06117473356425762) {
                    if (dist_std <= 0.03475995548069477) {
                        votes[30] = 1;
                    } else {
                        votes[30] = 1;
                    }
                } else {
                    if (rr_std <= 61.45918273925781) {
                        if (diastolic_area <= -115.27106094360352) {
                            votes[30] = 4;
                        } else {
                            if (rr_median <= 97.75) {
                                if (dist_std <= 0.07653834670782089) {
                                    if (rr_std <= 26.909812927246094) {
                                        if (dist_std <= 0.0488446019589901) {
                                            votes[30] = 3;
                                        } else {
                                            votes[30] = 3;
                                        }
                                    } else {
                                        votes[30] = 1;
                                    }
                                } else {
                                    votes[30] = 1;
                                }
                            } else {
                                votes[30] = 5;
                            }
                        }
                    } else {
                        votes[30] = 5;
                    }
                }
            } else {
                if (dist_std <= 0.07245555892586708) {
                    if (num_peaks <= 135.5) {
                        if (rr_median <= 130.5) {
                            if (rr_std <= 16.15445613861084) {
                                votes[30] = 4;
                            } else {
                                if (rr_median <= 90.5) {
                                    if (rr_std <= 52.14064979553223) {
                                        if (diastolic_area <= -37.72231674194336) {
                                            votes[30] = 4;
                                        } else {
                                            votes[30] = 4;
                                        }
                                    } else {
                                        votes[30] = 4;
                                    }
                                } else {
                                    if (rr_median <= 97.5) {
                                        votes[30] = 4;
                                    } else {
                                        votes[30] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[30] = 4;
                        }
                    } else {
                        votes[30] = 5;
                    }
                } else {
                    if (diastolic_area <= -25.022117614746094) {
                        if (rr_std <= 30.20775318145752) {
                            votes[30] = 1;
                        } else {
                            votes[30] = 3;
                        }
                    } else {
                        if (num_peaks <= 119.5) {
                            if (diastolic_time <= 0.08350249379873276) {
                                votes[30] = 4;
                            } else {
                                votes[30] = 4;
                            }
                        } else {
                            if (rr_std <= 24.04375648498535) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.062360743060708046) {
            if (num_peaks <= 108.5) {
                if (rr_std <= 44.3339900970459) {
                    if (rr_std <= 21.47382640838623) {
                        if (rr_median <= 97.5) {
                            if (rr_std <= 14.604972839355469) {
                                votes[30] = 5;
                            } else {
                                votes[30] = 2;
                            }
                        } else {
                            votes[30] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.4935843050479889) {
                            if (diastolic_area <= -14.98520803451538) {
                                votes[30] = 2;
                            } else {
                                votes[30] = 4;
                            }
                        } else {
                            votes[30] = 2;
                        }
                    }
                } else {
                    votes[30] = 1;
                }
            } else {
                if (rr_std <= 4.8530356884002686) {
                    votes[30] = 5;
                } else {
                    if (diastolic_area <= -18.74553108215332) {
                        if (diastolic_area <= -20.511829376220703) {
                            if (rr_median <= 69.75) {
                                votes[30] = 0;
                            } else {
                                votes[30] = 0;
                            }
                        } else {
                            votes[30] = 3;
                        }
                    } else {
                        if (rr_median <= 61.75) {
                            if (rr_median <= 60.75) {
                                if (diastolic_area <= -10.774631023406982) {
                                    if (diastolic_time <= 0.5225904732942581) {
                                        votes[30] = 0;
                                    } else {
                                        votes[30] = 0;
                                    }
                                } else {
                                    votes[30] = 0;
                                }
                            } else {
                                votes[30] = 0;
                            }
                        } else {
                            if (dist_std <= 0.051400814205408096) {
                                votes[30] = 0;
                            } else {
                                votes[30] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 0.6935192346572876) {
                if (dist_std <= 0.09838484227657318) {
                    votes[30] = 5;
                } else {
                    if (rr_median <= 74.25) {
                        if (num_peaks <= 108.0) {
                            votes[30] = 2;
                        } else {
                            votes[30] = 2;
                        }
                    } else {
                        votes[30] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 0.7995555400848389) {
                    if (rr_std <= 12.2030668258667) {
                        if (num_peaks <= 128.0) {
                            if (diastolic_area <= -14.130034923553467) {
                                if (diastolic_area <= -21.92539119720459) {
                                    if (dist_std <= 0.1218843087553978) {
                                        votes[30] = 2;
                                    } else {
                                        if (num_peaks <= 107.0) {
                                            votes[30] = 5;
                                        } else {
                                            votes[30] = 5;
                                        }
                                    }
                                } else {
                                    votes[30] = 5;
                                }
                            } else {
                                votes[30] = 1;
                            }
                        } else {
                            if (rr_median <= 79.5) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 3;
                            }
                        }
                    } else {
                        if (diastolic_area <= -17.722847938537598) {
                            if (diastolic_area <= -27.554609298706055) {
                                votes[30] = 3;
                            } else {
                                if (num_peaks <= 91.5) {
                                    if (rr_median <= 81.5) {
                                        votes[30] = 2;
                                    } else {
                                        votes[30] = 2;
                                    }
                                } else {
                                    votes[30] = 2;
                                }
                            }
                        } else {
                            if (num_peaks <= 105.0) {
                                votes[30] = 1;
                            } else {
                                votes[30] = 2;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.9382142722606659) {
                        votes[30] = 1;
                    } else {
                        votes[30] = 1;
                    }
                }
            }
        }
    }
// Decision rules for tree 31
    if (diastolic_time <= 0.2298014685511589) {
        if (rr_median <= 83.25) {
            if (rr_std <= 16.939903259277344) {
                if (rr_median <= 47.75) {
                    if (num_peaks <= 125.0) {
                        votes[31] = 4;
                    } else {
                        votes[31] = 3;
                    }
                } else {
                    if (rr_median <= 68.75) {
                        if (diastolic_area <= -40.172637939453125) {
                            if (diastolic_time <= 0.13676833361387253) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 3;
                            }
                        } else {
                            if (rr_std <= 9.997251510620117) {
                                if (rr_median <= 58.5) {
                                    votes[31] = 3;
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                votes[31] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.11052196100354195) {
                            if (dist_std <= 0.04560043849050999) {
                                votes[31] = 5;
                            } else {
                                votes[31] = 5;
                            }
                        } else {
                            if (dist_std <= 0.048453280702233315) {
                                votes[31] = 5;
                            } else {
                                if (diastolic_area <= -37.99245262145996) {
                                    votes[31] = 3;
                                } else {
                                    votes[31] = 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -49.72542762756348) {
                    if (rr_median <= 61.25) {
                        votes[31] = 3;
                    } else {
                        if (rr_median <= 69.5) {
                            votes[31] = 1;
                        } else {
                            if (diastolic_area <= -79.38144302368164) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 5;
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.10456252098083496) {
                        if (num_peaks <= 135.5) {
                            if (num_peaks <= 131.5) {
                                if (diastolic_area <= -37.255577087402344) {
                                    if (diastolic_time <= 0.1454830765724182) {
                                        votes[31] = 4;
                                    } else {
                                        votes[31] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 0.17017391324043274) {
                                        votes[31] = 4;
                                    } else {
                                        votes[31] = 4;
                                    }
                                }
                            } else {
                                votes[31] = 4;
                            }
                        } else {
                            votes[31] = 1;
                        }
                    } else {
                        votes[31] = 3;
                    }
                }
            }
        } else {
            if (diastolic_area <= -61.550397872924805) {
                if (rr_median <= 98.5) {
                    if (rr_std <= 36.1543025970459) {
                        if (diastolic_area <= -89.38479995727539) {
                            votes[31] = 5;
                        } else {
                            votes[31] = 3;
                        }
                    } else {
                        votes[31] = 1;
                    }
                } else {
                    if (diastolic_time <= 0.10200454294681549) {
                        if (diastolic_area <= -82.90999984741211) {
                            if (rr_median <= 106.75) {
                                votes[31] = 1;
                            } else {
                                votes[31] = 1;
                            }
                        } else {
                            votes[31] = 1;
                        }
                    } else {
                        votes[31] = 5;
                    }
                }
            } else {
                if (dist_std <= 0.03775647655129433) {
                    if (num_peaks <= 125.5) {
                        votes[31] = 4;
                    } else {
                        votes[31] = 4;
                    }
                } else {
                    if (num_peaks <= 93.5) {
                        if (dist_std <= 0.07659665122628212) {
                            votes[31] = 4;
                        } else {
                            votes[31] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.03403491713106632) {
                            if (num_peaks <= 142.0) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 0;
                            }
                        } else {
                            if (diastolic_time <= 0.13776064664125443) {
                                if (diastolic_time <= 0.09784131869673729) {
                                    if (num_peaks <= 127.0) {
                                        votes[31] = 1;
                                    } else {
                                        votes[31] = 5;
                                    }
                                } else {
                                    if (rr_median <= 100.25) {
                                        votes[31] = 1;
                                    } else {
                                        votes[31] = 1;
                                    }
                                }
                            } else {
                                if (rr_median <= 105.0) {
                                    if (diastolic_time <= 0.16033843904733658) {
                                        votes[31] = 5;
                                    } else {
                                        votes[31] = 5;
                                    }
                                } else {
                                    votes[31] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 107.5) {
            if (diastolic_area <= -15.329522609710693) {
                if (dist_std <= 0.035057563334703445) {
                    votes[31] = 5;
                } else {
                    if (rr_median <= 89.0) {
                        if (num_peaks <= 92.5) {
                            if (rr_median <= 74.25) {
                                if (rr_median <= 68.5) {
                                    votes[31] = 2;
                                } else {
                                    if (dist_std <= 0.10264686867594719) {
                                        votes[31] = 2;
                                    } else {
                                        votes[31] = 2;
                                    }
                                }
                            } else {
                                if (rr_median <= 76.5) {
                                    votes[31] = 5;
                                } else {
                                    votes[31] = 2;
                                }
                            }
                        } else {
                            if (dist_std <= 0.13653980195522308) {
                                if (diastolic_time <= 0.4333333373069763) {
                                    if (rr_median <= 68.0) {
                                        votes[31] = 3;
                                    } else {
                                        votes[31] = 5;
                                    }
                                } else {
                                    votes[31] = 2;
                                }
                            } else {
                                votes[31] = 2;
                            }
                        }
                    } else {
                        votes[31] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.6154769361019135) {
                    if (rr_median <= 77.25) {
                        votes[31] = 5;
                    } else {
                        if (rr_std <= 28.226482391357422) {
                            votes[31] = 4;
                        } else {
                            votes[31] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.8889999985694885) {
                        votes[31] = 1;
                    } else {
                        votes[31] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.059801796451210976) {
                if (diastolic_time <= 0.2809973508119583) {
                    votes[31] = 0;
                } else {
                    if (rr_std <= 8.07284927368164) {
                        votes[31] = 5;
                    } else {
                        if (diastolic_time <= 0.690666675567627) {
                            if (rr_median <= 61.25) {
                                if (diastolic_area <= -13.400634765625) {
                                    if (dist_std <= 0.042075015604496) {
                                        votes[31] = 3;
                                    } else {
                                        votes[31] = 0;
                                    }
                                } else {
                                    votes[31] = 0;
                                }
                            } else {
                                if (dist_std <= 0.046083780005574226) {
                                    votes[31] = 0;
                                } else {
                                    if (num_peaks <= 134.5) {
                                        votes[31] = 0;
                                    } else {
                                        votes[31] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[31] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -13.779606342315674) {
                    if (dist_std <= 0.13552793115377426) {
                        if (num_peaks <= 140.0) {
                            if (diastolic_area <= -19.353843688964844) {
                                if (diastolic_area <= -22.64767074584961) {
                                    if (diastolic_time <= 0.259674996137619) {
                                        votes[31] = 3;
                                    } else {
                                        votes[31] = 5;
                                    }
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                if (dist_std <= 0.08309850469231606) {
                                    votes[31] = 5;
                                } else {
                                    votes[31] = 5;
                                }
                            }
                        } else {
                            votes[31] = 3;
                        }
                    } else {
                        votes[31] = 2;
                    }
                } else {
                    if (dist_std <= 0.09048214927315712) {
                        votes[31] = 1;
                    } else {
                        votes[31] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 32
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 98.5) {
            if (rr_std <= 14.180799007415771) {
                if (rr_median <= 68.75) {
                    if (rr_std <= 10.030611991882324) {
                        if (rr_median <= 47.0) {
                            votes[32] = 3;
                        } else {
                            votes[32] = 3;
                        }
                    } else {
                        if (rr_std <= 10.75985860824585) {
                            votes[32] = 1;
                        } else {
                            votes[32] = 3;
                        }
                    }
                } else {
                    if (diastolic_area <= -74.91526794433594) {
                        votes[32] = 3;
                    } else {
                        if (rr_median <= 75.5) {
                            votes[32] = 3;
                        } else {
                            if (diastolic_area <= -17.75135040283203) {
                                if (num_peaks <= 121.0) {
                                    if (diastolic_area <= -38.64324951171875) {
                                        votes[32] = 5;
                                    } else {
                                        votes[32] = 1;
                                    }
                                } else {
                                    if (diastolic_area <= -39.073347091674805) {
                                        votes[32] = 5;
                                    } else {
                                        votes[32] = 5;
                                    }
                                }
                            } else {
                                votes[32] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -52.25515365600586) {
                    if (rr_std <= 32.94880485534668) {
                        if (rr_std <= 26.58618450164795) {
                            if (dist_std <= 0.0488446019589901) {
                                if (rr_median <= 74.5) {
                                    votes[32] = 3;
                                } else {
                                    votes[32] = 3;
                                }
                            } else {
                                if (diastolic_area <= -78.90707397460938) {
                                    votes[32] = 3;
                                } else {
                                    votes[32] = 5;
                                }
                            }
                        } else {
                            votes[32] = 4;
                        }
                    } else {
                        if (rr_std <= 42.292510986328125) {
                            votes[32] = 5;
                        } else {
                            votes[32] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 134.5) {
                        if (dist_std <= 0.11174576357007027) {
                            if (diastolic_area <= -37.42107582092285) {
                                if (dist_std <= 0.048649828881025314) {
                                    if (diastolic_time <= 0.1454830765724182) {
                                        votes[32] = 4;
                                    } else {
                                        if (dist_std <= 0.038335224613547325) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 4;
                                        }
                                    }
                                } else {
                                    votes[32] = 5;
                                }
                            } else {
                                if (num_peaks <= 98.0) {
                                    votes[32] = 4;
                                } else {
                                    if (dist_std <= 0.03258487209677696) {
                                        votes[32] = 4;
                                    } else {
                                        votes[32] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[32] = 3;
                        }
                    } else {
                        if (rr_median <= 81.75) {
                            if (dist_std <= 0.07013698667287827) {
                                votes[32] = 3;
                            } else {
                                votes[32] = 1;
                            }
                        } else {
                            votes[32] = 5;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -35.72649955749512) {
                if (num_peaks <= 93.5) {
                    votes[32] = 4;
                } else {
                    if (rr_median <= 102.5) {
                        votes[32] = 5;
                    } else {
                        if (dist_std <= 0.03898019157350063) {
                            if (diastolic_time <= 0.08714224398136139) {
                                votes[32] = 1;
                            } else {
                                votes[32] = 5;
                            }
                        } else {
                            if (rr_median <= 132.5) {
                                votes[32] = 1;
                            } else {
                                if (dist_std <= 0.054077424108982086) {
                                    votes[32] = 1;
                                } else {
                                    votes[32] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 0.040021639317274094) {
                    if (diastolic_area <= -19.62419891357422) {
                        votes[32] = 4;
                    } else {
                        votes[32] = 4;
                    }
                } else {
                    if (rr_std <= 12.01602840423584) {
                        votes[32] = 1;
                    } else {
                        votes[32] = 3;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 127.5) {
            if (diastolic_area <= -17.818513870239258) {
                if (num_peaks <= 104.0) {
                    if (rr_median <= 89.0) {
                        if (diastolic_time <= 0.5431794822216034) {
                            if (rr_median <= 66.75) {
                                if (num_peaks <= 90.0) {
                                    votes[32] = 2;
                                } else {
                                    votes[32] = 3;
                                }
                            } else {
                                if (dist_std <= 0.09838484227657318) {
                                    if (dist_std <= 0.07316967472434044) {
                                        votes[32] = 2;
                                    } else {
                                        votes[32] = 2;
                                    }
                                } else {
                                    if (rr_median <= 69.5) {
                                        votes[32] = 2;
                                    } else {
                                        votes[32] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[32] = 5;
                        }
                    } else {
                        if (dist_std <= 0.05273100174963474) {
                            votes[32] = 5;
                        } else {
                            votes[32] = 4;
                        }
                    }
                } else {
                    if (dist_std <= 0.11774665117263794) {
                        if (rr_median <= 64.0) {
                            votes[32] = 3;
                        } else {
                            if (diastolic_area <= -21.64647674560547) {
                                votes[32] = 5;
                            } else {
                                votes[32] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 0.6617318689823151) {
                            votes[32] = 2;
                        } else {
                            votes[32] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6167076826095581) {
                    if (num_peaks <= 94.5) {
                        if (diastolic_time <= 0.5417142808437347) {
                            if (diastolic_area <= -15.292630195617676) {
                                votes[32] = 5;
                            } else {
                                if (diastolic_time <= 0.32008667290210724) {
                                    votes[32] = 4;
                                } else {
                                    votes[32] = 4;
                                }
                            }
                        } else {
                            votes[32] = 2;
                        }
                    } else {
                        if (dist_std <= 0.03730635531246662) {
                            votes[32] = 0;
                        } else {
                            if (rr_median <= 63.5) {
                                votes[32] = 1;
                            } else {
                                if (diastolic_time <= 0.4020666778087616) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.425213813781738) {
                        if (diastolic_area <= -13.805825233459473) {
                            votes[32] = 5;
                        } else {
                            votes[32] = 1;
                        }
                    } else {
                        if (rr_median <= 79.25) {
                            votes[32] = 1;
                        } else {
                            votes[32] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 8.07284927368164) {
                if (dist_std <= 0.03912107273936272) {
                    votes[32] = 3;
                } else {
                    if (dist_std <= 0.0692218467593193) {
                        votes[32] = 5;
                    } else {
                        votes[32] = 3;
                    }
                }
            } else {
                if (rr_median <= 54.75) {
                    if (diastolic_area <= -14.141838550567627) {
                        votes[32] = 3;
                    } else {
                        votes[32] = 0;
                    }
                } else {
                    if (diastolic_time <= 0.28359341621398926) {
                        votes[32] = 0;
                    } else {
                        if (dist_std <= 0.05800280533730984) {
                            votes[32] = 0;
                        } else {
                            votes[32] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 33
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 68.75) {
            if (num_peaks <= 130.5) {
                if (rr_std <= 14.295656681060791) {
                    if (rr_median <= 47.75) {
                        votes[33] = 4;
                    } else {
                        if (num_peaks <= 125.5) {
                            if (diastolic_area <= -39.433631896972656) {
                                votes[33] = 3;
                            } else {
                                if (rr_std <= 6.653094291687012) {
                                    votes[33] = 3;
                                } else {
                                    votes[33] = 3;
                                }
                            }
                        } else {
                            votes[33] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 105.5) {
                        if (dist_std <= 0.052776641212403774) {
                            votes[33] = 4;
                        } else {
                            votes[33] = 3;
                        }
                    } else {
                        if (dist_std <= 0.09057874232530594) {
                            if (dist_std <= 0.03486173413693905) {
                                votes[33] = 4;
                            } else {
                                votes[33] = 4;
                            }
                        } else {
                            votes[33] = 4;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.06404743902385235) {
                    if (num_peaks <= 132.5) {
                        votes[33] = 3;
                    } else {
                        votes[33] = 3;
                    }
                } else {
                    if (num_peaks <= 138.0) {
                        votes[33] = 3;
                    } else {
                        votes[33] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 99.5) {
                if (rr_std <= 16.15445613861084) {
                    if (num_peaks <= 103.5) {
                        if (dist_std <= 0.09999953210353851) {
                            votes[33] = 1;
                        } else {
                            votes[33] = 5;
                        }
                    } else {
                        if (dist_std <= 0.048453280702233315) {
                            if (diastolic_area <= -52.65323829650879) {
                                votes[33] = 5;
                            } else {
                                votes[33] = 5;
                            }
                        } else {
                            if (rr_std <= 1.8404717445373535) {
                                if (diastolic_area <= -50.64635467529297) {
                                    votes[33] = 1;
                                } else {
                                    if (dist_std <= 0.10152067989110947) {
                                        votes[33] = 5;
                                    } else {
                                        votes[33] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.0964166633784771) {
                                    votes[33] = 5;
                                } else {
                                    if (num_peaks <= 123.0) {
                                        votes[33] = 3;
                                    } else {
                                        votes[33] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -57.51108932495117) {
                        if (diastolic_area <= -72.76731491088867) {
                            if (rr_median <= 90.0) {
                                if (rr_std <= 32.00333118438721) {
                                    votes[33] = 3;
                                } else {
                                    votes[33] = 1;
                                }
                            } else {
                                votes[33] = 5;
                            }
                        } else {
                            votes[33] = 5;
                        }
                    } else {
                        if (num_peaks <= 135.5) {
                            if (rr_median <= 90.5) {
                                if (rr_median <= 78.75) {
                                    if (rr_std <= 26.40722370147705) {
                                        votes[33] = 4;
                                    } else {
                                        votes[33] = 4;
                                    }
                                } else {
                                    votes[33] = 4;
                                }
                            } else {
                                votes[33] = 4;
                            }
                        } else {
                            votes[33] = 5;
                        }
                    }
                }
            } else {
                if (num_peaks <= 114.5) {
                    if (diastolic_area <= -64.30151176452637) {
                        votes[33] = 1;
                    } else {
                        if (dist_std <= 0.0564637016505003) {
                            votes[33] = 4;
                        } else {
                            if (rr_std <= 42.032033920288086) {
                                votes[33] = 1;
                            } else {
                                votes[33] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -26.246512413024902) {
                        if (dist_std <= 0.032026439905166626) {
                            votes[33] = 1;
                        } else {
                            if (diastolic_time <= 0.11823563277721405) {
                                votes[33] = 1;
                            } else {
                                if (dist_std <= 0.06365662440657616) {
                                    votes[33] = 1;
                                } else {
                                    votes[33] = 1;
                                }
                            }
                        }
                    } else {
                        votes[33] = 3;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05476701445877552) {
            if (num_peaks <= 105.5) {
                if (dist_std <= 0.035057563334703445) {
                    if (rr_median <= 107.0) {
                        votes[33] = 5;
                    } else {
                        votes[33] = 1;
                    }
                } else {
                    if (diastolic_area <= -17.478663444519043) {
                        votes[33] = 2;
                    } else {
                        if (diastolic_time <= 0.5417142808437347) {
                            votes[33] = 4;
                        } else {
                            votes[33] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 10.062979221343994) {
                    if (diastolic_time <= 0.3890315741300583) {
                        votes[33] = 3;
                    } else {
                        votes[33] = 0;
                    }
                } else {
                    if (diastolic_time <= 0.28164102137088776) {
                        votes[33] = 0;
                    } else {
                        if (rr_std <= 46.571773529052734) {
                            if (diastolic_area <= -18.90355396270752) {
                                if (dist_std <= 0.04184662736952305) {
                                    votes[33] = 0;
                                } else {
                                    votes[33] = 0;
                                }
                            } else {
                                if (rr_std <= 11.827144622802734) {
                                    votes[33] = 0;
                                } else {
                                    if (diastolic_time <= 0.36720000207424164) {
                                        votes[33] = 0;
                                    } else {
                                        if (rr_std <= 12.967083930969238) {
                                            votes[33] = 0;
                                        } else {
                                            votes[33] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[33] = 0;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.13315143436193466) {
                if (diastolic_time <= 0.8262222111225128) {
                    if (num_peaks <= 87.0) {
                        if (rr_median <= 87.5) {
                            if (rr_std <= 2.763872742652893) {
                                votes[33] = 2;
                            } else {
                                if (rr_std <= 24.25889492034912) {
                                    votes[33] = 3;
                                } else {
                                    votes[33] = 2;
                                }
                            }
                        } else {
                            votes[33] = 4;
                        }
                    } else {
                        if (num_peaks <= 142.5) {
                            if (diastolic_time <= 0.25397177040576935) {
                                if (rr_median <= 82.25) {
                                    votes[33] = 3;
                                } else {
                                    votes[33] = 5;
                                }
                            } else {
                                if (rr_std <= 12.2030668258667) {
                                    if (num_peaks <= 131.5) {
                                        if (rr_median <= 63.5) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    } else {
                                        votes[33] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 131.0) {
                                        if (diastolic_area <= -12.916272640228271) {
                                            votes[33] = 2;
                                        } else {
                                            votes[33] = 1;
                                        }
                                    } else {
                                        votes[33] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[33] = 2;
                        }
                    }
                } else {
                    if (dist_std <= 0.06170284375548363) {
                        votes[33] = 2;
                    } else {
                        if (num_peaks <= 108.5) {
                            votes[33] = 1;
                        } else {
                            votes[33] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 2.139379471540451) {
                    votes[33] = 2;
                } else {
                    if (diastolic_area <= -22.806614875793457) {
                        votes[33] = 5;
                    } else {
                        if (diastolic_area <= -21.646533966064453) {
                            votes[33] = 2;
                        } else {
                            votes[33] = 2;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 34
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 85.5) {
            if (rr_std <= 17.244210243225098) {
                if (rr_median <= 75.5) {
                    if (num_peaks <= 86.0) {
                        votes[34] = 5;
                    } else {
                        if (rr_std <= 9.910547733306885) {
                            if (dist_std <= 0.12816329300403595) {
                                if (dist_std <= 0.060626208782196045) {
                                    votes[34] = 3;
                                } else {
                                    if (diastolic_area <= -31.43339443206787) {
                                        votes[34] = 3;
                                    } else {
                                        votes[34] = 3;
                                    }
                                }
                            } else {
                                votes[34] = 3;
                            }
                        } else {
                            if (diastolic_area <= -37.13578224182129) {
                                if (dist_std <= 0.07269217073917389) {
                                    if (rr_median <= 64.25) {
                                        votes[34] = 3;
                                    } else {
                                        votes[34] = 3;
                                    }
                                } else {
                                    votes[34] = 1;
                                }
                            } else {
                                if (diastolic_time <= 0.05992578715085983) {
                                    votes[34] = 4;
                                } else {
                                    votes[34] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.04949212446808815) {
                        votes[34] = 5;
                    } else {
                        votes[34] = 3;
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (diastolic_area <= -53.92442512512207) {
                        if (rr_std <= 25.63577651977539) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 1;
                        }
                    } else {
                        if (dist_std <= 0.11771373823285103) {
                            if (diastolic_time <= 0.1736646518111229) {
                                if (num_peaks <= 131.0) {
                                    if (diastolic_area <= -37.72231674194336) {
                                        if (diastolic_time <= 0.1480799987912178) {
                                            votes[34] = 4;
                                        } else {
                                            votes[34] = 4;
                                        }
                                    } else {
                                        votes[34] = 4;
                                    }
                                } else {
                                    votes[34] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.18648283928632736) {
                                    votes[34] = 4;
                                } else {
                                    votes[34] = 4;
                                }
                            }
                        } else {
                            votes[34] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 70.5) {
                        if (diastolic_area <= -54.686824798583984) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 1;
                        }
                    } else {
                        if (rr_median <= 79.5) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 5;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.034139273688197136) {
                if (num_peaks <= 125.5) {
                    votes[34] = 4;
                } else {
                    votes[34] = 5;
                }
            } else {
                if (diastolic_area <= -3.819655179977417) {
                    if (diastolic_time <= 0.11483076959848404) {
                        if (rr_median <= 99.25) {
                            if (rr_std <= 12.096921443939209) {
                                if (num_peaks <= 110.5) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 3;
                                }
                            } else {
                                votes[34] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.08757942169904709) {
                                if (diastolic_area <= -64.56463241577148) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 1;
                                }
                            } else {
                                votes[34] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 90.5) {
                            if (dist_std <= 0.10074227303266525) {
                                votes[34] = 1;
                            } else {
                                votes[34] = 1;
                            }
                        } else {
                            if (rr_median <= 115.5) {
                                if (rr_median <= 102.5) {
                                    votes[34] = 5;
                                } else {
                                    votes[34] = 5;
                                }
                            } else {
                                votes[34] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 142.0) {
                        if (dist_std <= 0.07274919748306274) {
                            votes[34] = 4;
                        } else {
                            votes[34] = 1;
                        }
                    } else {
                        votes[34] = 0;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_area <= -16.923401832580566) {
                if (rr_std <= 0.6242677867412567) {
                    if (rr_median <= 69.5) {
                        if (diastolic_area <= -29.208717346191406) {
                            votes[34] = 2;
                        } else {
                            votes[34] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.5084166526794434) {
                            votes[34] = 2;
                        } else {
                            votes[34] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 14.330915927886963) {
                        if (dist_std <= 0.14189595729112625) {
                            if (dist_std <= 0.0967726893723011) {
                                if (rr_std <= 3.179788827896118) {
                                    votes[34] = 5;
                                } else {
                                    votes[34] = 5;
                                }
                            } else {
                                if (rr_std <= 0.9221212863922119) {
                                    votes[34] = 5;
                                } else {
                                    votes[34] = 2;
                                }
                            }
                        } else {
                            votes[34] = 2;
                        }
                    } else {
                        if (rr_std <= 42.03780555725098) {
                            if (num_peaks <= 105.0) {
                                if (rr_median <= 78.25) {
                                    votes[34] = 2;
                                } else {
                                    if (dist_std <= 0.06617694348096848) {
                                        votes[34] = 5;
                                    } else {
                                        votes[34] = 2;
                                    }
                                }
                            } else {
                                votes[34] = 3;
                            }
                        } else {
                            votes[34] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6157333254814148) {
                    if (rr_median <= 74.5) {
                        if (rr_std <= 16.010982036590576) {
                            votes[34] = 0;
                        } else {
                            votes[34] = 2;
                        }
                    } else {
                        if (num_peaks <= 92.5) {
                            if (dist_std <= 0.07917521893978119) {
                                if (diastolic_area <= -14.080796718597412) {
                                    votes[34] = 4;
                                } else {
                                    votes[34] = 4;
                                }
                            } else {
                                votes[34] = 4;
                            }
                        } else {
                            votes[34] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 8.918952226638794) {
                        votes[34] = 5;
                    } else {
                        if (rr_median <= 79.5) {
                            votes[34] = 1;
                        } else {
                            votes[34] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06048966757953167) {
                if (diastolic_time <= 0.350758895277977) {
                    if (rr_median <= 62.25) {
                        votes[34] = 3;
                    } else {
                        if (diastolic_time <= 0.26275861263275146) {
                            votes[34] = 5;
                        } else {
                            votes[34] = 0;
                        }
                    }
                } else {
                    if (dist_std <= 0.05554366298019886) {
                        if (diastolic_time <= 0.3575238138437271) {
                            votes[34] = 0;
                        } else {
                            if (dist_std <= 0.028821819461882114) {
                                votes[34] = 0;
                            } else {
                                if (diastolic_area <= -18.528905868530273) {
                                    votes[34] = 0;
                                } else {
                                    votes[34] = 0;
                                }
                            }
                        }
                    } else {
                        votes[34] = 0;
                    }
                }
            } else {
                if (diastolic_area <= -18.057684898376465) {
                    if (num_peaks <= 129.5) {
                        votes[34] = 5;
                    } else {
                        votes[34] = 3;
                    }
                } else {
                    votes[34] = 2;
                }
            }
        }
    }
// Decision rules for tree 35
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_median <= 76.25) {
            if (rr_std <= 20.504555702209473) {
                if (num_peaks <= 130.5) {
                    if (diastolic_time <= 0.052984293550252914) {
                        if (rr_median <= 52.0) {
                            votes[35] = 4;
                        } else {
                            votes[35] = 5;
                        }
                    } else {
                        if (dist_std <= 0.03819615952670574) {
                            if (diastolic_area <= -45.701433181762695) {
                                votes[35] = 5;
                            } else {
                                votes[35] = 4;
                            }
                        } else {
                            if (rr_median <= 54.75) {
                                if (dist_std <= 0.07743063941597939) {
                                    votes[35] = 3;
                                } else {
                                    votes[35] = 1;
                                }
                            } else {
                                if (dist_std <= 0.06805341690778732) {
                                    votes[35] = 5;
                                } else {
                                    if (num_peaks <= 109.5) {
                                        votes[35] = 3;
                                    } else {
                                        if (num_peaks <= 123.0) {
                                            votes[35] = 3;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.0509713776409626) {
                        if (dist_std <= 0.032416658475995064) {
                            votes[35] = 3;
                        } else {
                            votes[35] = 3;
                        }
                    } else {
                        if (diastolic_area <= -41.7459774017334) {
                            votes[35] = 3;
                        } else {
                            votes[35] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.11789946630597115) {
                        if (diastolic_area <= -42.8386344909668) {
                            if (diastolic_time <= 0.13937575370073318) {
                                votes[35] = 4;
                            } else {
                                votes[35] = 4;
                            }
                        } else {
                            if (dist_std <= 0.07946079224348068) {
                                votes[35] = 4;
                            } else {
                                votes[35] = 4;
                            }
                        }
                    } else {
                        votes[35] = 3;
                    }
                } else {
                    votes[35] = 1;
                }
            }
        } else {
            if (diastolic_area <= -81.2696418762207) {
                if (rr_median <= 109.0) {
                    if (rr_std <= 20.87985134124756) {
                        if (diastolic_time <= 0.06941517814993858) {
                            votes[35] = 5;
                        } else {
                            votes[35] = 3;
                        }
                    } else {
                        if (rr_median <= 90.0) {
                            votes[35] = 1;
                        } else {
                            votes[35] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 107.0) {
                        votes[35] = 1;
                    } else {
                        votes[35] = 1;
                    }
                }
            } else {
                if (dist_std <= 0.03591105528175831) {
                    if (num_peaks <= 132.0) {
                        if (rr_std <= 82.98770141601562) {
                            votes[35] = 4;
                        } else {
                            votes[35] = 4;
                        }
                    } else {
                        votes[35] = 5;
                    }
                } else {
                    if (diastolic_time <= 0.012326284311711788) {
                        if (dist_std <= 0.06946292892098427) {
                            votes[35] = 0;
                        } else {
                            votes[35] = 2;
                        }
                    } else {
                        if (rr_median <= 81.25) {
                            if (diastolic_area <= -36.33231735229492) {
                                votes[35] = 5;
                            } else {
                                votes[35] = 5;
                            }
                        } else {
                            if (rr_median <= 101.0) {
                                if (diastolic_time <= 0.11448147520422935) {
                                    if (dist_std <= 0.059460870921611786) {
                                        votes[35] = 1;
                                    } else {
                                        if (rr_std <= 6.751335859298706) {
                                            votes[35] = 3;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 90.5) {
                                        if (diastolic_area <= -38.41623878479004) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 1;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.17926984280347824) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 13.420379161834717) {
                                    if (dist_std <= 0.05583411082625389) {
                                        votes[35] = 1;
                                    } else {
                                        votes[35] = 1;
                                    }
                                } else {
                                    if (dist_std <= 0.0659183468669653) {
                                        votes[35] = 1;
                                    } else {
                                        if (num_peaks <= 109.5) {
                                            votes[35] = 4;
                                        } else {
                                            votes[35] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05554366298019886) {
            if (num_peaks <= 108.5) {
                if (rr_std <= 45.54850769042969) {
                    if (dist_std <= 0.035057563334703445) {
                        votes[35] = 5;
                    } else {
                        if (rr_median <= 89.5) {
                            votes[35] = 2;
                        } else {
                            if (rr_std <= 29.1833553314209) {
                                votes[35] = 4;
                            } else {
                                votes[35] = 4;
                            }
                        }
                    }
                } else {
                    votes[35] = 1;
                }
            } else {
                if (rr_std <= 6.560080528259277) {
                    votes[35] = 5;
                } else {
                    if (rr_median <= 55.75) {
                        if (diastolic_time <= 0.35256750881671906) {
                            votes[35] = 3;
                        } else {
                            if (diastolic_time <= 0.43176470696926117) {
                                votes[35] = 0;
                            } else {
                                votes[35] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.2809973508119583) {
                            votes[35] = 5;
                        } else {
                            if (dist_std <= 0.03997762128710747) {
                                votes[35] = 0;
                            } else {
                                if (diastolic_area <= -18.90355396270752) {
                                    votes[35] = 0;
                                } else {
                                    if (rr_median <= 61.25) {
                                        votes[35] = 0;
                                    } else {
                                        if (diastolic_time <= 0.6096923053264618) {
                                            votes[35] = 0;
                                        } else {
                                            votes[35] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 0.6935192346572876) {
                if (dist_std <= 0.09838484227657318) {
                    votes[35] = 5;
                } else {
                    if (rr_median <= 75.5) {
                        if (dist_std <= 0.13048150390386581) {
                            if (num_peaks <= 72.5) {
                                votes[35] = 2;
                            } else {
                                votes[35] = 2;
                            }
                        } else {
                            votes[35] = 2;
                        }
                    } else {
                        votes[35] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 0.8026666641235352) {
                    if (rr_std <= 14.342952251434326) {
                        if (num_peaks <= 131.5) {
                            if (diastolic_area <= -12.977332592010498) {
                                if (diastolic_area <= -23.979641914367676) {
                                    if (diastolic_time <= 0.2702285647392273) {
                                        votes[35] = 5;
                                    } else {
                                        votes[35] = 5;
                                    }
                                } else {
                                    if (diastolic_area <= -21.04698371887207) {
                                        votes[35] = 2;
                                    } else {
                                        votes[35] = 5;
                                    }
                                }
                            } else {
                                votes[35] = 1;
                            }
                        } else {
                            if (dist_std <= 0.07209363207221031) {
                                votes[35] = 5;
                            } else {
                                votes[35] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 30.95904541015625) {
                            if (rr_median <= 87.5) {
                                if (num_peaks <= 115.5) {
                                    votes[35] = 2;
                                } else {
                                    votes[35] = 0;
                                }
                            } else {
                                votes[35] = 4;
                            }
                        } else {
                            if (num_peaks <= 87.0) {
                                votes[35] = 4;
                            } else {
                                if (num_peaks <= 126.0) {
                                    votes[35] = 5;
                                } else {
                                    votes[35] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.06117774918675423) {
                        votes[35] = 2;
                    } else {
                        if (diastolic_time <= 0.9748571515083313) {
                            votes[35] = 1;
                        } else {
                            votes[35] = 1;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 36
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 86.5) {
            if (rr_std <= 15.9564790725708) {
                if (rr_median <= 75.5) {
                    if (num_peaks <= 86.0) {
                        votes[36] = 4;
                    } else {
                        if (rr_std <= 10.030611991882324) {
                            if (dist_std <= 0.12247582897543907) {
                                if (diastolic_time <= 0.19471707195043564) {
                                    if (dist_std <= 0.09395883977413177) {
                                        votes[36] = 3;
                                    } else {
                                        votes[36] = 3;
                                    }
                                } else {
                                    votes[36] = 3;
                                }
                            } else {
                                if (num_peaks <= 113.0) {
                                    votes[36] = 3;
                                } else {
                                    votes[36] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 10.75985860824585) {
                                votes[36] = 1;
                            } else {
                                if (dist_std <= 0.035236382856965065) {
                                    votes[36] = 5;
                                } else {
                                    if (diastolic_time <= 0.09342070296406746) {
                                        votes[36] = 3;
                                    } else {
                                        votes[36] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 112.0) {
                        votes[36] = 1;
                    } else {
                        if (rr_median <= 79.25) {
                            votes[36] = 5;
                        } else {
                            votes[36] = 5;
                        }
                    }
                }
            } else {
                if (num_peaks <= 136.5) {
                    if (diastolic_area <= -48.56148910522461) {
                        if (diastolic_time <= 0.11363076791167259) {
                            if (rr_std <= 33.33151435852051) {
                                votes[36] = 3;
                            } else {
                                votes[36] = 1;
                            }
                        } else {
                            if (num_peaks <= 120.5) {
                                votes[36] = 3;
                            } else {
                                votes[36] = 4;
                            }
                        }
                    } else {
                        if (dist_std <= 0.12021594122052193) {
                            if (diastolic_time <= 0.18595393002033234) {
                                if (num_peaks <= 127.0) {
                                    if (diastolic_area <= -41.58784103393555) {
                                        votes[36] = 4;
                                    } else {
                                        votes[36] = 4;
                                    }
                                } else {
                                    votes[36] = 4;
                                }
                            } else {
                                votes[36] = 2;
                            }
                        } else {
                            votes[36] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 74.5) {
                        if (diastolic_time <= 0.11034199222922325) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        votes[36] = 5;
                    }
                }
            }
        } else {
            if (diastolic_area <= -37.20199775695801) {
                if (rr_median <= 99.5) {
                    if (diastolic_time <= 0.13065267354249954) {
                        if (diastolic_time <= 0.07268283143639565) {
                            votes[36] = 5;
                        } else {
                            if (rr_std <= 24.198899269104004) {
                                votes[36] = 1;
                            } else {
                                votes[36] = 3;
                            }
                        }
                    } else {
                        votes[36] = 5;
                    }
                } else {
                    if (num_peaks <= 145.5) {
                        if (num_peaks <= 102.5) {
                            votes[36] = 1;
                        } else {
                            if (diastolic_time <= 0.10200454294681549) {
                                if (rr_std <= 2.7739559412002563) {
                                    votes[36] = 1;
                                } else {
                                    votes[36] = 1;
                                }
                            } else {
                                if (dist_std <= 0.07317448034882545) {
                                    votes[36] = 1;
                                } else {
                                    votes[36] = 1;
                                }
                            }
                        }
                    } else {
                        votes[36] = 1;
                    }
                }
            } else {
                if (dist_std <= 0.05727600306272507) {
                    if (diastolic_time <= 0.013739130459725857) {
                        votes[36] = 0;
                    } else {
                        if (diastolic_area <= -7.352314591407776) {
                            votes[36] = 4;
                        } else {
                            votes[36] = 4;
                        }
                    }
                } else {
                    if (dist_std <= 0.07348503917455673) {
                        votes[36] = 5;
                    } else {
                        if (rr_std <= 17.74962329864502) {
                            if (dist_std <= 0.10892756655812263) {
                                votes[36] = 1;
                            } else {
                                votes[36] = 5;
                            }
                        } else {
                            votes[36] = 3;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_area <= -17.818513870239258) {
                if (num_peaks <= 105.5) {
                    if (rr_median <= 89.0) {
                        if (rr_median <= 69.5) {
                            if (diastolic_time <= 0.38250717520713806) {
                                if (dist_std <= 0.13552024215459824) {
                                    votes[36] = 2;
                                } else {
                                    votes[36] = 2;
                                }
                            } else {
                                votes[36] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.5084166526794434) {
                                if (rr_median <= 74.25) {
                                    votes[36] = 2;
                                } else {
                                    votes[36] = 2;
                                }
                            } else {
                                votes[36] = 2;
                            }
                        }
                    } else {
                        votes[36] = 5;
                    }
                } else {
                    if (rr_median <= 66.5) {
                        votes[36] = 3;
                    } else {
                        if (rr_std <= 0.6845453381538391) {
                            votes[36] = 2;
                        } else {
                            if (num_peaks <= 117.0) {
                                votes[36] = 5;
                            } else {
                                votes[36] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8226666748523712) {
                    if (rr_std <= 10.337450981140137) {
                        if (diastolic_area <= -13.671661853790283) {
                            votes[36] = 5;
                        } else {
                            votes[36] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.7023999989032745) {
                            if (num_peaks <= 90.0) {
                                if (num_peaks <= 78.0) {
                                    votes[36] = 4;
                                } else {
                                    if (rr_std <= 29.544010162353516) {
                                        votes[36] = 4;
                                    } else {
                                        votes[36] = 4;
                                    }
                                }
                            } else {
                                if (diastolic_area <= -12.481554508209229) {
                                    if (rr_median <= 74.5) {
                                        votes[36] = 2;
                                    } else {
                                        votes[36] = 5;
                                    }
                                } else {
                                    votes[36] = 0;
                                }
                            }
                        } else {
                            votes[36] = 1;
                        }
                    }
                } else {
                    if (rr_median <= 80.25) {
                        votes[36] = 1;
                    } else {
                        votes[36] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06402583606541157) {
                if (diastolic_time <= 0.27222856879234314) {
                    votes[36] = 5;
                } else {
                    if (rr_median <= 53.5) {
                        votes[36] = 0;
                    } else {
                        if (dist_std <= 0.05554366298019886) {
                            if (rr_median <= 55.75) {
                                votes[36] = 0;
                            } else {
                                if (num_peaks <= 132.5) {
                                    votes[36] = 0;
                                } else {
                                    votes[36] = 0;
                                }
                            }
                        } else {
                            votes[36] = 0;
                        }
                    }
                }
            } else {
                if (rr_std <= 32.07631587982178) {
                    if (diastolic_area <= -25.600329399108887) {
                        votes[36] = 5;
                    } else {
                        if (diastolic_time <= 0.35623636841773987) {
                            votes[36] = 3;
                        } else {
                            votes[36] = 3;
                        }
                    }
                } else {
                    votes[36] = 2;
                }
            }
        }
    }
// Decision rules for tree 37
    if (diastolic_time <= 0.2627938240766525) {
        if (rr_median <= 82.5) {
            if (rr_std <= 16.9524507522583) {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.04966096766293049) {
                        if (diastolic_time <= 0.032289618626236916) {
                            votes[37] = 3;
                        } else {
                            votes[37] = 4;
                        }
                    } else {
                        if (rr_median <= 54.25) {
                            if (dist_std <= 0.12247582897543907) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 1;
                            }
                        } else {
                            if (dist_std <= 0.13263753056526184) {
                                if (dist_std <= 0.0626232959330082) {
                                    if (diastolic_time <= 0.08290908858180046) {
                                        votes[37] = 3;
                                    } else {
                                        if (rr_std <= 11.246116638183594) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 1.360614538192749) {
                                        votes[37] = 3;
                                    } else {
                                        if (diastolic_time <= 0.11563784256577492) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (dist_std <= 0.14719640463590622) {
                                    votes[37] = 5;
                                } else {
                                    votes[37] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 10.082536220550537) {
                        votes[37] = 3;
                    } else {
                        if (rr_std <= 12.803884983062744) {
                            votes[37] = 3;
                        } else {
                            votes[37] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (diastolic_area <= -48.88382530212402) {
                        if (num_peaks <= 125.0) {
                            votes[37] = 3;
                        } else {
                            votes[37] = 1;
                        }
                    } else {
                        if (dist_std <= 0.10868000984191895) {
                            if (diastolic_time <= 0.17329207062721252) {
                                if (diastolic_time <= 0.13493333011865616) {
                                    votes[37] = 4;
                                } else {
                                    if (diastolic_time <= 0.1517735794186592) {
                                        votes[37] = 4;
                                    } else {
                                        votes[37] = 4;
                                    }
                                }
                            } else {
                                votes[37] = 2;
                            }
                        } else {
                            votes[37] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 77.0) {
                        if (rr_median <= 63.0) {
                            votes[37] = 3;
                        } else {
                            votes[37] = 3;
                        }
                    } else {
                        votes[37] = 5;
                    }
                }
            }
        } else {
            if (diastolic_area <= -66.83793640136719) {
                if (diastolic_time <= 0.08744513615965843) {
                    if (rr_median <= 97.5) {
                        if (rr_median <= 88.25) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 3;
                        }
                    } else {
                        if (diastolic_area <= -81.4401626586914) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 1;
                        }
                    }
                } else {
                    votes[37] = 3;
                }
            } else {
                if (diastolic_time <= 0.037423355504870415) {
                    if (num_peaks <= 121.5) {
                        votes[37] = 4;
                    } else {
                        if (rr_median <= 96.25) {
                            votes[37] = 0;
                        } else {
                            votes[37] = 0;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.15175999701023102) {
                        if (diastolic_area <= -58.41581726074219) {
                            votes[37] = 5;
                        } else {
                            if (rr_std <= 26.376697540283203) {
                                if (diastolic_area <= -39.22720527648926) {
                                    if (diastolic_area <= -50.22665786743164) {
                                        votes[37] = 1;
                                    } else {
                                        votes[37] = 5;
                                    }
                                } else {
                                    votes[37] = 1;
                                }
                            } else {
                                if (dist_std <= 0.05006970837712288) {
                                    votes[37] = 4;
                                } else {
                                    votes[37] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 114.5) {
                            if (rr_median <= 87.0) {
                                votes[37] = 1;
                            } else {
                                if (rr_median <= 96.5) {
                                    votes[37] = 5;
                                } else {
                                    votes[37] = 5;
                                }
                            }
                        } else {
                            votes[37] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (rr_median <= 74.25) {
                if (num_peaks <= 90.5) {
                    if (diastolic_area <= -26.9724702835083) {
                        votes[37] = 1;
                    } else {
                        if (diastolic_time <= 0.5076166689395905) {
                            votes[37] = 2;
                        } else {
                            votes[37] = 2;
                        }
                    }
                } else {
                    if (dist_std <= 0.13581082969903946) {
                        if (rr_median <= 64.5) {
                            if (num_peaks <= 109.5) {
                                votes[37] = 2;
                            } else {
                                votes[37] = 2;
                            }
                        } else {
                            if (dist_std <= 0.06060944125056267) {
                                votes[37] = 0;
                            } else {
                                if (diastolic_time <= 0.4062666594982147) {
                                    votes[37] = 5;
                                } else {
                                    votes[37] = 5;
                                }
                            }
                        }
                    } else {
                        votes[37] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 0.634489506483078) {
                    if (rr_std <= 11.572530746459961) {
                        if (num_peaks <= 101.5) {
                            votes[37] = 5;
                        } else {
                            votes[37] = 5;
                        }
                    } else {
                        if (diastolic_area <= -19.121109008789062) {
                            if (diastolic_area <= -21.925479888916016) {
                                votes[37] = 2;
                            } else {
                                votes[37] = 2;
                            }
                        } else {
                            if (dist_std <= 0.037376743741333485) {
                                votes[37] = 1;
                            } else {
                                if (num_peaks <= 96.0) {
                                    if (rr_std <= 33.52391242980957) {
                                        votes[37] = 4;
                                    } else {
                                        votes[37] = 4;
                                    }
                                } else {
                                    votes[37] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.425213813781738) {
                        votes[37] = 5;
                    } else {
                        if (rr_median <= 81.25) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06402583606541157) {
                if (rr_std <= 6.039847135543823) {
                    votes[37] = 5;
                } else {
                    if (rr_median <= 54.75) {
                        if (diastolic_time <= 0.4156000018119812) {
                            votes[37] = 0;
                        } else {
                            votes[37] = 0;
                        }
                    } else {
                        if (num_peaks <= 143.5) {
                            votes[37] = 0;
                        } else {
                            if (num_peaks <= 144.5) {
                                votes[37] = 0;
                            } else {
                                if (num_peaks <= 151.0) {
                                    votes[37] = 0;
                                } else {
                                    votes[37] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 97.5) {
                    if (num_peaks <= 141.0) {
                        if (diastolic_time <= 0.37116190791130066) {
                            votes[37] = 5;
                        } else {
                            votes[37] = 3;
                        }
                    } else {
                        votes[37] = 3;
                    }
                } else {
                    votes[37] = 2;
                }
            }
        }
    }
// Decision rules for tree 38
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 72.25) {
            if (rr_std <= 20.21463394165039) {
                if (rr_std <= 9.526742935180664) {
                    if (rr_median <= 68.75) {
                        if (diastolic_time <= 0.1577892154455185) {
                            if (dist_std <= 0.03688783571124077) {
                                votes[38] = 3;
                            } else {
                                if (dist_std <= 0.09395883977413177) {
                                    votes[38] = 3;
                                } else {
                                    votes[38] = 3;
                                }
                            }
                        } else {
                            votes[38] = 3;
                        }
                    } else {
                        votes[38] = 3;
                    }
                } else {
                    if (num_peaks <= 132.5) {
                        if (diastolic_area <= -51.58812713623047) {
                            votes[38] = 3;
                        } else {
                            if (rr_std <= 13.915556907653809) {
                                if (rr_std <= 10.213472843170166) {
                                    votes[38] = 1;
                                } else {
                                    votes[38] = 5;
                                }
                            } else {
                                if (diastolic_area <= -18.28909206390381) {
                                    votes[38] = 4;
                                } else {
                                    votes[38] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 10.60757064819336) {
                            votes[38] = 1;
                        } else {
                            if (rr_median <= 53.5) {
                                votes[38] = 3;
                            } else {
                                votes[38] = 3;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (rr_std <= 41.56219482421875) {
                        if (rr_median <= 48.0) {
                            votes[38] = 4;
                        } else {
                            if (rr_median <= 67.75) {
                                votes[38] = 4;
                            } else {
                                votes[38] = 4;
                            }
                        }
                    } else {
                        votes[38] = 4;
                    }
                } else {
                    if (diastolic_time <= 0.09195434674620628) {
                        votes[38] = 3;
                    } else {
                        votes[38] = 1;
                    }
                }
            }
        } else {
            if (diastolic_area <= -61.563720703125) {
                if (rr_median <= 99.25) {
                    if (rr_std <= 36.1543025970459) {
                        if (diastolic_area <= -78.8017692565918) {
                            if (diastolic_area <= -87.69939422607422) {
                                if (diastolic_time <= 0.0740186907351017) {
                                    votes[38] = 5;
                                } else {
                                    votes[38] = 1;
                                }
                            } else {
                                votes[38] = 3;
                            }
                        } else {
                            if (rr_median <= 82.75) {
                                votes[38] = 5;
                            } else {
                                votes[38] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 83.75) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.10675333812832832) {
                        if (dist_std <= 0.03561203554272652) {
                            votes[38] = 1;
                        } else {
                            if (rr_std <= 2.7739559412002563) {
                                votes[38] = 1;
                            } else {
                                votes[38] = 1;
                            }
                        }
                    } else {
                        votes[38] = 5;
                    }
                }
            } else {
                if (dist_std <= 0.04823794402182102) {
                    if (num_peaks <= 127.5) {
                        if (rr_median <= 78.5) {
                            votes[38] = 4;
                        } else {
                            if (diastolic_area <= -21.355290412902832) {
                                votes[38] = 4;
                            } else {
                                votes[38] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.0717090293765068) {
                            votes[38] = 0;
                        } else {
                            votes[38] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.03403491713106632) {
                        if (num_peaks <= 119.5) {
                            votes[38] = 4;
                        } else {
                            votes[38] = 0;
                        }
                    } else {
                        if (num_peaks <= 91.5) {
                            votes[38] = 3;
                        } else {
                            if (rr_median <= 79.5) {
                                votes[38] = 3;
                            } else {
                                if (rr_median <= 105.5) {
                                    if (rr_median <= 90.5) {
                                        if (rr_median <= 86.5) {
                                            votes[38] = 5;
                                        } else {
                                            votes[38] = 1;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.11110714077949524) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.224037170410156) {
                                        votes[38] = 1;
                                    } else {
                                        votes[38] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 126.5) {
            if (diastolic_area <= -17.818513870239258) {
                if (rr_median <= 89.0) {
                    if (num_peaks <= 120.5) {
                        if (rr_median <= 69.5) {
                            if (dist_std <= 0.13696152716875076) {
                                if (num_peaks <= 90.0) {
                                    votes[38] = 2;
                                } else {
                                    if (rr_median <= 64.0) {
                                        votes[38] = 3;
                                    } else {
                                        if (dist_std <= 0.12446804344654083) {
                                            votes[38] = 5;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[38] = 2;
                            }
                        } else {
                            if (diastolic_time <= 0.545025646686554) {
                                if (num_peaks <= 105.5) {
                                    if (diastolic_time <= 0.2736825495958328) {
                                        votes[38] = 2;
                                    } else {
                                        votes[38] = 2;
                                    }
                                } else {
                                    votes[38] = 2;
                                }
                            } else {
                                votes[38] = 2;
                            }
                        }
                    } else {
                        votes[38] = 5;
                    }
                } else {
                    votes[38] = 5;
                }
            } else {
                if (diastolic_time <= 0.6167076826095581) {
                    if (num_peaks <= 88.5) {
                        if (dist_std <= 0.042125092819333076) {
                            votes[38] = 1;
                        } else {
                            if (rr_std <= 22.299434661865234) {
                                votes[38] = 4;
                            } else {
                                votes[38] = 4;
                            }
                        }
                    } else {
                        if (rr_median <= 75.25) {
                            if (dist_std <= 0.03926119580864906) {
                                votes[38] = 0;
                            } else {
                                votes[38] = 2;
                            }
                        } else {
                            if (diastolic_area <= -15.240659713745117) {
                                votes[38] = 5;
                            } else {
                                votes[38] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 3.5386011004447937) {
                        votes[38] = 5;
                    } else {
                        if (rr_median <= 79.5) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06491324678063393) {
                if (diastolic_area <= -18.629676818847656) {
                    if (diastolic_area <= -20.24919605255127) {
                        if (diastolic_time <= 0.27453333139419556) {
                            votes[38] = 5;
                        } else {
                            if (num_peaks <= 142.0) {
                                votes[38] = 0;
                            } else {
                                votes[38] = 0;
                            }
                        }
                    } else {
                        votes[38] = 3;
                    }
                } else {
                    if (rr_std <= 8.024813890457153) {
                        votes[38] = 0;
                    } else {
                        if (rr_median <= 52.75) {
                            votes[38] = 0;
                        } else {
                            if (diastolic_time <= 0.30958041548728943) {
                                votes[38] = 0;
                            } else {
                                if (dist_std <= 0.02918310835957527) {
                                    votes[38] = 0;
                                } else {
                                    if (dist_std <= 0.05702180042862892) {
                                        if (rr_median <= 61.25) {
                                            votes[38] = 0;
                                        } else {
                                            votes[38] = 0;
                                        }
                                    } else {
                                        votes[38] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -20.14599609375) {
                    votes[38] = 3;
                } else {
                    if (dist_std <= 0.07747263088822365) {
                        votes[38] = 2;
                    } else {
                        votes[38] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 39
    if (diastolic_time <= 0.2648129016160965) {
        if (rr_median <= 99.25) {
            if (rr_std <= 16.006247520446777) {
                if (rr_median <= 76.25) {
                    if (dist_std <= 0.1390446275472641) {
                        if (num_peaks <= 86.5) {
                            votes[39] = 4;
                        } else {
                            if (rr_median <= 68.75) {
                                if (rr_std <= 10.017529010772705) {
                                    if (rr_std <= 3.3240960836410522) {
                                        if (num_peaks <= 119.5) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 1;
                                        }
                                    } else {
                                        votes[39] = 3;
                                    }
                                } else {
                                    if (rr_std <= 10.75985860824585) {
                                        if (diastolic_area <= -38.030561447143555) {
                                            votes[39] = 1;
                                        } else {
                                            votes[39] = 1;
                                        }
                                    } else {
                                        if (diastolic_area <= -35.24384689331055) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 70.5) {
                                    votes[39] = 5;
                                } else {
                                    if (dist_std <= 0.05077286250889301) {
                                        votes[39] = 3;
                                    } else {
                                        votes[39] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 1.917849987745285) {
                            votes[39] = 2;
                        } else {
                            votes[39] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.034256696701049805) {
                        votes[39] = 0;
                    } else {
                        if (num_peaks <= 107.5) {
                            if (rr_median <= 89.0) {
                                votes[39] = 1;
                            } else {
                                votes[39] = 5;
                            }
                        } else {
                            if (dist_std <= 0.0652606338262558) {
                                if (rr_median <= 86.75) {
                                    votes[39] = 5;
                                } else {
                                    votes[39] = 5;
                                }
                            } else {
                                if (diastolic_time <= 0.12577217817306519) {
                                    if (diastolic_time <= 0.08130636438727379) {
                                        votes[39] = 5;
                                    } else {
                                        votes[39] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 0.15081480890512466) {
                                        votes[39] = 1;
                                    } else {
                                        votes[39] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -52.545907974243164) {
                    if (rr_std <= 34.670345306396484) {
                        if (dist_std <= 0.04783378541469574) {
                            votes[39] = 3;
                        } else {
                            if (num_peaks <= 125.5) {
                                votes[39] = 3;
                            } else {
                                votes[39] = 5;
                            }
                        }
                    } else {
                        if (diastolic_area <= -93.82877731323242) {
                            votes[39] = 1;
                        } else {
                            votes[39] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 135.5) {
                        if (dist_std <= 0.11728234589099884) {
                            if (dist_std <= 0.028520784340798855) {
                                votes[39] = 3;
                            } else {
                                if (rr_median <= 90.5) {
                                    if (num_peaks <= 125.5) {
                                        if (diastolic_time <= 0.20899999886751175) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 4;
                                        }
                                    } else {
                                        if (rr_median <= 77.5) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 4;
                                        }
                                    }
                                } else {
                                    if (dist_std <= 0.04794277250766754) {
                                        votes[39] = 4;
                                    } else {
                                        votes[39] = 5;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.13133442401885986) {
                                votes[39] = 3;
                            } else {
                                votes[39] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 77.0) {
                            if (diastolic_time <= 0.10128447785973549) {
                                votes[39] = 1;
                            } else {
                                votes[39] = 3;
                            }
                        } else {
                            votes[39] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 104.0) {
                if (diastolic_area <= -51.22932052612305) {
                    votes[39] = 5;
                } else {
                    if (dist_std <= 0.054282259196043015) {
                        votes[39] = 4;
                    } else {
                        votes[39] = 4;
                    }
                }
            } else {
                if (dist_std <= 0.03813740611076355) {
                    if (diastolic_area <= -71.72549629211426) {
                        votes[39] = 1;
                    } else {
                        votes[39] = 5;
                    }
                } else {
                    if (diastolic_area <= -0.921453595161438) {
                        if (num_peaks <= 114.5) {
                            votes[39] = 1;
                        } else {
                            if (num_peaks <= 136.5) {
                                votes[39] = 1;
                            } else {
                                if (rr_median <= 133.5) {
                                    votes[39] = 1;
                                } else {
                                    votes[39] = 1;
                                }
                            }
                        }
                    } else {
                        votes[39] = 1;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_area <= -17.881261825561523) {
                if (num_peaks <= 90.5) {
                    if (rr_median <= 92.0) {
                        if (dist_std <= 0.1790822669863701) {
                            if (rr_median <= 74.25) {
                                votes[39] = 2;
                            } else {
                                if (rr_std <= 26.10076332092285) {
                                    votes[39] = 2;
                                } else {
                                    votes[39] = 2;
                                }
                            }
                        } else {
                            votes[39] = 2;
                        }
                    } else {
                        votes[39] = 5;
                    }
                } else {
                    if (dist_std <= 0.13326838612556458) {
                        if (rr_median <= 63.5) {
                            votes[39] = 3;
                        } else {
                            if (dist_std <= 0.05451356992125511) {
                                votes[39] = 0;
                            } else {
                                if (diastolic_time <= 0.317973330616951) {
                                    votes[39] = 5;
                                } else {
                                    if (rr_std <= 0.8974283635616302) {
                                        votes[39] = 5;
                                    } else {
                                        votes[39] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 0.5183548480272293) {
                            votes[39] = 2;
                        } else {
                            votes[39] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6167076826095581) {
                    if (rr_median <= 73.0) {
                        if (dist_std <= 0.0337439589202404) {
                            votes[39] = 0;
                        } else {
                            votes[39] = 2;
                        }
                    } else {
                        if (rr_std <= 43.795976638793945) {
                            if (rr_std <= 19.975529670715332) {
                                votes[39] = 5;
                            } else {
                                if (diastolic_area <= -13.398206233978271) {
                                    if (dist_std <= 0.04941491037607193) {
                                        votes[39] = 4;
                                    } else {
                                        votes[39] = 4;
                                    }
                                } else {
                                    votes[39] = 5;
                                }
                            }
                        } else {
                            votes[39] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 7.973716974258423) {
                        votes[39] = 5;
                    } else {
                        if (diastolic_time <= 0.7093818187713623) {
                            votes[39] = 1;
                        } else {
                            votes[39] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06483301520347595) {
                if (rr_std <= 7.789663076400757) {
                    votes[39] = 3;
                } else {
                    if (dist_std <= 0.028821819461882114) {
                        votes[39] = 0;
                    } else {
                        if (rr_median <= 52.75) {
                            votes[39] = 0;
                        } else {
                            if (diastolic_time <= 0.7707555592060089) {
                                if (rr_median <= 61.5) {
                                    if (rr_median <= 59.75) {
                                        votes[39] = 0;
                                    } else {
                                        votes[39] = 0;
                                    }
                                } else {
                                    votes[39] = 0;
                                }
                            } else {
                                votes[39] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -15.95395278930664) {
                    if (rr_median <= 73.0) {
                        votes[39] = 5;
                    } else {
                        votes[39] = 3;
                    }
                } else {
                    votes[39] = 2;
                }
            }
        }
    }
// Decision rules for tree 40
    if (diastolic_time <= 0.20981507748365402) {
        if (num_peaks <= 130.5) {
            if (diastolic_area <= -37.0882682800293) {
                if (rr_median <= 99.25) {
                    if (dist_std <= 0.04975360259413719) {
                        if (diastolic_area <= -54.44717979431152) {
                            votes[40] = 3;
                        } else {
                            if (rr_median <= 74.25) {
                                votes[40] = 4;
                            } else {
                                votes[40] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 0.7582071721553802) {
                            if (dist_std <= 0.11652161553502083) {
                                votes[40] = 5;
                            } else {
                                votes[40] = 3;
                            }
                        } else {
                            if (diastolic_area <= -52.70913314819336) {
                                if (dist_std <= 0.0921614058315754) {
                                    if (num_peaks <= 114.5) {
                                        votes[40] = 1;
                                    } else {
                                        votes[40] = 5;
                                    }
                                } else {
                                    votes[40] = 5;
                                }
                            } else {
                                if (dist_std <= 0.06996317207813263) {
                                    votes[40] = 4;
                                } else {
                                    if (diastolic_time <= 0.12948592007160187) {
                                        votes[40] = 1;
                                    } else {
                                        votes[40] = 1;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 104.5) {
                        votes[40] = 1;
                    } else {
                        votes[40] = 1;
                    }
                }
            } else {
                if (dist_std <= 0.055601319298148155) {
                    if (rr_std <= 16.551016807556152) {
                        if (diastolic_time <= 0.0786910355091095) {
                            votes[40] = 4;
                        } else {
                            votes[40] = 5;
                        }
                    } else {
                        votes[40] = 4;
                    }
                } else {
                    if (rr_std <= 8.392322778701782) {
                        if (rr_median <= 60.5) {
                            votes[40] = 1;
                        } else {
                            if (diastolic_time <= 0.16417177021503448) {
                                votes[40] = 1;
                            } else {
                                votes[40] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 73.75) {
                            if (diastolic_time <= 0.1015753410756588) {
                                if (num_peaks <= 120.5) {
                                    votes[40] = 4;
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                votes[40] = 4;
                            }
                        } else {
                            if (rr_std <= 25.997955322265625) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 94.75) {
                if (rr_median <= 76.5) {
                    if (num_peaks <= 135.5) {
                        if (rr_median <= 53.5) {
                            votes[40] = 3;
                        } else {
                            if (diastolic_time <= 0.09754189103841782) {
                                votes[40] = 1;
                            } else {
                                votes[40] = 5;
                            }
                        }
                    } else {
                        if (dist_std <= 0.086443942040205) {
                            if (rr_std <= 21.49569606781006) {
                                if (dist_std <= 0.03400067985057831) {
                                    votes[40] = 3;
                                } else {
                                    votes[40] = 3;
                                }
                            } else {
                                votes[40] = 3;
                            }
                        } else {
                            votes[40] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 138.5) {
                        if (rr_median <= 87.0) {
                            votes[40] = 4;
                        } else {
                            votes[40] = 3;
                        }
                    } else {
                        if (diastolic_area <= -35.84589958190918) {
                            votes[40] = 5;
                        } else {
                            votes[40] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -20.405065536499023) {
                    if (num_peaks <= 145.5) {
                        if (diastolic_area <= -66.61108207702637) {
                            if (dist_std <= 0.06506417505443096) {
                                votes[40] = 1;
                            } else {
                                votes[40] = 1;
                            }
                        } else {
                            if (dist_std <= 0.05441791005432606) {
                                votes[40] = 5;
                            } else {
                                votes[40] = 1;
                            }
                        }
                    } else {
                        votes[40] = 1;
                    }
                } else {
                    votes[40] = 0;
                }
            }
        }
    } else {
        if (num_peaks <= 126.5) {
            if (diastolic_area <= -17.983936309814453) {
                if (num_peaks <= 93.5) {
                    if (rr_median <= 89.0) {
                        if (diastolic_time <= 0.5200357139110565) {
                            if (rr_median <= 68.5) {
                                votes[40] = 2;
                            } else {
                                if (dist_std <= 0.08889133483171463) {
                                    if (diastolic_time <= 0.3353939354419708) {
                                        votes[40] = 2;
                                    } else {
                                        votes[40] = 2;
                                    }
                                } else {
                                    votes[40] = 2;
                                }
                            }
                        } else {
                            votes[40] = 5;
                        }
                    } else {
                        votes[40] = 5;
                    }
                } else {
                    if (dist_std <= 0.13581082969903946) {
                        if (rr_median <= 66.5) {
                            if (dist_std <= 0.094605702906847) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 3;
                            }
                        } else {
                            if (diastolic_area <= -22.243581771850586) {
                                if (rr_median <= 72.5) {
                                    votes[40] = 5;
                                } else {
                                    votes[40] = 5;
                                }
                            } else {
                                if (diastolic_area <= -21.151813507080078) {
                                    votes[40] = 3;
                                } else {
                                    votes[40] = 0;
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 0.1450410559773445) {
                            votes[40] = 2;
                        } else {
                            votes[40] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6263999938964844) {
                    if (num_peaks <= 92.5) {
                        if (rr_median <= 76.5) {
                            votes[40] = 5;
                        } else {
                            if (rr_median <= 107.5) {
                                votes[40] = 4;
                            } else {
                                votes[40] = 4;
                            }
                        }
                    } else {
                        if (dist_std <= 0.05257284455001354) {
                            if (num_peaks <= 102.5) {
                                votes[40] = 5;
                            } else {
                                votes[40] = 0;
                            }
                        } else {
                            if (rr_std <= 14.811382293701172) {
                                votes[40] = 5;
                            } else {
                                votes[40] = 2;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -13.9072904586792) {
                        votes[40] = 5;
                    } else {
                        if (diastolic_area <= -13.061090469360352) {
                            votes[40] = 1;
                        } else {
                            votes[40] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 7.789663076400757) {
                if (diastolic_area <= -22.391467094421387) {
                    votes[40] = 5;
                } else {
                    votes[40] = 3;
                }
            } else {
                if (dist_std <= 0.06707930192351341) {
                    if (diastolic_time <= 0.2653379291296005) {
                        votes[40] = 5;
                    } else {
                        if (rr_median <= 53.5) {
                            votes[40] = 0;
                        } else {
                            if (rr_std <= 8.807342529296875) {
                                votes[40] = 0;
                            } else {
                                if (rr_median <= 61.25) {
                                    if (rr_median <= 59.75) {
                                        if (dist_std <= 0.04208463616669178) {
                                            votes[40] = 0;
                                        } else {
                                            votes[40] = 0;
                                        }
                                    } else {
                                        votes[40] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 132.5) {
                                        votes[40] = 0;
                                    } else {
                                        votes[40] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    votes[40] = 2;
                }
            }
        }
    }
// Decision rules for tree 41
    if (rr_std <= 0.6296193599700928) {
        if (diastolic_time <= 0.21495725959539413) {
            if (rr_median <= 65.5) {
                votes[41] = 3;
            } else {
                if (dist_std <= 0.1244364082813263) {
                    if (rr_median <= 98.0) {
                        votes[41] = 1;
                    } else {
                        votes[41] = 5;
                    }
                } else {
                    votes[41] = 5;
                }
            }
        } else {
            if (dist_std <= 0.09066179394721985) {
                votes[41] = 5;
            } else {
                if (rr_median <= 73.5) {
                    if (rr_median <= 69.5) {
                        if (diastolic_area <= -25.52000331878662) {
                            votes[41] = 2;
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        votes[41] = 2;
                    }
                } else {
                    if (dist_std <= 0.10807351022958755) {
                        votes[41] = 2;
                    } else {
                        votes[41] = 5;
                    }
                }
            }
        }
    } else {
        if (diastolic_time <= 0.2768571376800537) {
            if (rr_std <= 20.21463394165039) {
                if (rr_median <= 69.5) {
                    if (num_peaks <= 131.5) {
                        if (diastolic_time <= 0.052984293550252914) {
                            if (rr_std <= 11.489429950714111) {
                                votes[41] = 4;
                            } else {
                                votes[41] = 4;
                            }
                        } else {
                            if (num_peaks <= 125.5) {
                                if (rr_std <= 14.569594383239746) {
                                    if (diastolic_time <= 0.1711721494793892) {
                                        if (diastolic_area <= -33.86406898498535) {
                                            votes[41] = 3;
                                        } else {
                                            votes[41] = 3;
                                        }
                                    } else {
                                        votes[41] = 3;
                                    }
                                } else {
                                    votes[41] = 2;
                                }
                            } else {
                                if (dist_std <= 0.07660556212067604) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 63.5) {
                            if (dist_std <= 0.06500189006328583) {
                                votes[41] = 3;
                            } else {
                                votes[41] = 3;
                            }
                        } else {
                            votes[41] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 98.5) {
                        if (rr_std <= 13.86873197555542) {
                            if (num_peaks <= 141.5) {
                                if (dist_std <= 0.0833161324262619) {
                                    if (diastolic_area <= -23.01154899597168) {
                                        votes[41] = 5;
                                    } else {
                                        votes[41] = 5;
                                    }
                                } else {
                                    if (dist_std <= 0.10984077677130699) {
                                        if (num_peaks <= 111.5) {
                                            votes[41] = 1;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    } else {
                                        if (dist_std <= 0.12220516800880432) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    }
                                }
                            } else {
                                votes[41] = 0;
                            }
                        } else {
                            if (diastolic_area <= -14.809914588928223) {
                                if (dist_std <= 0.053296977654099464) {
                                    if (num_peaks <= 127.5) {
                                        votes[41] = 4;
                                    } else {
                                        votes[41] = 3;
                                    }
                                } else {
                                    if (diastolic_area <= -43.995513916015625) {
                                        votes[41] = 3;
                                    } else {
                                        votes[41] = 5;
                                    }
                                }
                            } else {
                                votes[41] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 11.401783466339111) {
                            if (num_peaks <= 123.5) {
                                votes[41] = 1;
                            } else {
                                if (rr_std <= 2.223792552947998) {
                                    votes[41] = 1;
                                } else {
                                    votes[41] = 1;
                                }
                            }
                        } else {
                            votes[41] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -61.550397872924805) {
                    if (diastolic_time <= 0.08613719791173935) {
                        if (dist_std <= 0.06935002654790878) {
                            if (rr_std <= 33.051177978515625) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 1;
                            }
                        } else {
                            votes[41] = 1;
                        }
                    } else {
                        if (dist_std <= 0.052069125697016716) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 133.5) {
                        if (dist_std <= 0.12036266922950745) {
                            if (rr_median <= 130.0) {
                                if (diastolic_time <= 0.26175200939178467) {
                                    if (diastolic_area <= -29.993038177490234) {
                                        if (dist_std <= 0.058215346187353134) {
                                            votes[41] = 4;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 82.5) {
                                            votes[41] = 4;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    }
                                } else {
                                    votes[41] = 2;
                                }
                            } else {
                                votes[41] = 4;
                            }
                        } else {
                            votes[41] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.1385263130068779) {
                            if (rr_median <= 77.25) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 0;
                            }
                        } else {
                            votes[41] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 129.5) {
                if (rr_std <= 38.051652908325195) {
                    if (rr_median <= 90.5) {
                        if (num_peaks <= 104.0) {
                            if (diastolic_area <= -18.399507522583008) {
                                if (rr_std <= 13.001946926116943) {
                                    votes[41] = 2;
                                } else {
                                    votes[41] = 2;
                                }
                            } else {
                                if (rr_std <= 24.789010047912598) {
                                    votes[41] = 5;
                                } else {
                                    if (dist_std <= 0.055183351039886475) {
                                        votes[41] = 4;
                                    } else {
                                        votes[41] = 2;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.05451356992125511) {
                                votes[41] = 0;
                            } else {
                                if (rr_std <= 0.9095041155815125) {
                                    votes[41] = 5;
                                } else {
                                    if (diastolic_time <= 0.3655523806810379) {
                                        votes[41] = 2;
                                    } else {
                                        votes[41] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.531956195831299) {
                            votes[41] = 5;
                        } else {
                            if (rr_median <= 97.75) {
                                votes[41] = 4;
                            } else {
                                votes[41] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -13.323095798492432) {
                        votes[41] = 5;
                    } else {
                        votes[41] = 1;
                    }
                }
            } else {
                if (dist_std <= 0.05533363297581673) {
                    if (rr_median <= 55.75) {
                        if (diastolic_area <= -16.479910850524902) {
                            votes[41] = 3;
                        } else {
                            if (diastolic_area <= -13.339514255523682) {
                                votes[41] = 0;
                            } else {
                                votes[41] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.3016711175441742) {
                            votes[41] = 0;
                        } else {
                            if (rr_std <= 8.84694766998291) {
                                votes[41] = 0;
                            } else {
                                votes[41] = 0;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -20.22659683227539) {
                        votes[41] = 3;
                    } else {
                        votes[41] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 42
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_std <= 17.227191925048828) {
            if (rr_median <= 98.5) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.07846580073237419) {
                        if (num_peaks <= 133.0) {
                            if (rr_median <= 53.5) {
                                votes[42] = 3;
                            } else {
                                votes[42] = 5;
                            }
                        } else {
                            votes[42] = 3;
                        }
                    } else {
                        if (num_peaks <= 113.5) {
                            votes[42] = 3;
                        } else {
                            if (diastolic_time <= 0.12122423946857452) {
                                votes[42] = 1;
                            } else {
                                votes[42] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.5434723347425461) {
                        votes[42] = 1;
                    } else {
                        if (diastolic_area <= -1.9958215951919556) {
                            if (num_peaks <= 114.0) {
                                if (rr_median <= 90.5) {
                                    if (rr_median <= 83.5) {
                                        votes[42] = 3;
                                    } else {
                                        votes[42] = 1;
                                    }
                                } else {
                                    votes[42] = 5;
                                }
                            } else {
                                if (num_peaks <= 130.5) {
                                    if (rr_std <= 0.9874900281429291) {
                                        votes[42] = 5;
                                    } else {
                                        votes[42] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 135.5) {
                                        votes[42] = 3;
                                    } else {
                                        votes[42] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[42] = 0;
                        }
                    }
                }
            } else {
                if (rr_median <= 260.5) {
                    if (diastolic_time <= 0.11359436437487602) {
                        if (dist_std <= 0.044405313208699226) {
                            votes[42] = 1;
                        } else {
                            if (dist_std <= 0.05583411082625389) {
                                votes[42] = 1;
                            } else {
                                votes[42] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.14583589881658554) {
                            votes[42] = 5;
                        } else {
                            votes[42] = 1;
                        }
                    }
                } else {
                    votes[42] = 4;
                }
            }
        } else {
            if (diastolic_area <= -48.88382530212402) {
                if (diastolic_time <= 0.06129005737602711) {
                    votes[42] = 1;
                } else {
                    if (diastolic_time <= 0.12942373007535934) {
                        if (rr_median <= 63.75) {
                            votes[42] = 1;
                        } else {
                            if (diastolic_time <= 0.07656653225421906) {
                                if (dist_std <= 0.061689941212534904) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 3;
                                }
                            } else {
                                if (diastolic_area <= -57.757301330566406) {
                                    if (rr_std <= 26.47059440612793) {
                                        if (dist_std <= 0.05419367924332619) {
                                            votes[42] = 1;
                                        } else {
                                            votes[42] = 5;
                                        }
                                    } else {
                                        votes[42] = 5;
                                    }
                                } else {
                                    votes[42] = 4;
                                }
                            }
                        }
                    } else {
                        votes[42] = 3;
                    }
                }
            } else {
                if (num_peaks <= 133.5) {
                    if (dist_std <= 0.11728234589099884) {
                        if (rr_median <= 90.5) {
                            if (num_peaks <= 124.5) {
                                if (rr_std <= 45.62289619445801) {
                                    if (diastolic_area <= -37.42107582092285) {
                                        votes[42] = 4;
                                    } else {
                                        votes[42] = 4;
                                    }
                                } else {
                                    votes[42] = 4;
                                }
                            } else {
                                if (num_peaks <= 128.5) {
                                    if (dist_std <= 0.03871213272213936) {
                                        votes[42] = 5;
                                    } else {
                                        votes[42] = 4;
                                    }
                                } else {
                                    votes[42] = 4;
                                }
                            }
                        } else {
                            if (num_peaks <= 114.5) {
                                if (dist_std <= 0.037260184064507484) {
                                    votes[42] = 4;
                                } else {
                                    votes[42] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.10206250101327896) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 4;
                                }
                            }
                        }
                    } else {
                        votes[42] = 3;
                    }
                } else {
                    if (diastolic_time <= 0.1620170995593071) {
                        if (rr_std <= 31.94041633605957) {
                            votes[42] = 3;
                        } else {
                            votes[42] = 1;
                        }
                    } else {
                        votes[42] = 5;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.055107664316892624) {
            if (num_peaks <= 108.5) {
                if (dist_std <= 0.03752924129366875) {
                    if (rr_median <= 108.0) {
                        if (num_peaks <= 91.5) {
                            votes[42] = 5;
                        } else {
                            votes[42] = 5;
                        }
                    } else {
                        votes[42] = 1;
                    }
                } else {
                    if (rr_median <= 88.75) {
                        if (diastolic_area <= -15.329947471618652) {
                            votes[42] = 2;
                        } else {
                            votes[42] = 1;
                        }
                    } else {
                        if (num_peaks <= 82.5) {
                            votes[42] = 4;
                        } else {
                            votes[42] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 7.789663076400757) {
                    votes[42] = 3;
                } else {
                    if (rr_median <= 54.75) {
                        votes[42] = 3;
                    } else {
                        if (diastolic_time <= 0.27347125113010406) {
                            votes[42] = 0;
                        } else {
                            if (diastolic_time <= 0.6281211972236633) {
                                if (rr_median <= 61.5) {
                                    if (num_peaks <= 144.5) {
                                        votes[42] = 0;
                                    } else {
                                        votes[42] = 0;
                                    }
                                } else {
                                    if (diastolic_area <= -18.64962387084961) {
                                        if (diastolic_time <= 0.3374244272708893) {
                                            votes[42] = 0;
                                        } else {
                                            votes[42] = 0;
                                        }
                                    } else {
                                        votes[42] = 0;
                                    }
                                }
                            } else {
                                votes[42] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.652848482131958) {
                if (rr_std <= 0.6971455216407776) {
                    if (dist_std <= 0.1334046646952629) {
                        if (num_peaks <= 89.5) {
                            if (rr_median <= 73.5) {
                                votes[42] = 2;
                            } else {
                                votes[42] = 2;
                            }
                        } else {
                            if (rr_median <= 71.5) {
                                votes[42] = 3;
                            } else {
                                votes[42] = 2;
                            }
                        }
                    } else {
                        votes[42] = 2;
                    }
                } else {
                    if (rr_std <= 14.36455774307251) {
                        if (num_peaks <= 128.0) {
                            if (diastolic_time <= 0.257935494184494) {
                                votes[42] = 3;
                            } else {
                                if (num_peaks <= 111.0) {
                                    votes[42] = 5;
                                } else {
                                    votes[42] = 5;
                                }
                            }
                        } else {
                            if (dist_std <= 0.07985696941614151) {
                                votes[42] = 5;
                            } else {
                                votes[42] = 3;
                            }
                        }
                    } else {
                        if (diastolic_area <= -27.043569564819336) {
                            votes[42] = 3;
                        } else {
                            if (diastolic_area <= -18.817914962768555) {
                                if (rr_median <= 77.0) {
                                    if (num_peaks <= 84.5) {
                                        votes[42] = 2;
                                    } else {
                                        votes[42] = 2;
                                    }
                                } else {
                                    votes[42] = 2;
                                }
                            } else {
                                if (num_peaks <= 87.5) {
                                    votes[42] = 4;
                                } else {
                                    if (rr_median <= 74.0) {
                                        votes[42] = 0;
                                    } else {
                                        votes[42] = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[42] = 5;
                } else {
                    if (dist_std <= 0.05906448885798454) {
                        votes[42] = 2;
                    } else {
                        if (num_peaks <= 114.0) {
                            votes[42] = 1;
                        } else {
                            votes[42] = 1;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 43
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 98.5) {
            if (num_peaks <= 129.5) {
                if (rr_std <= 14.367665767669678) {
                    if (rr_median <= 54.75) {
                        if (diastolic_time <= 0.15659704059362411) {
                            if (rr_median <= 47.75) {
                                votes[43] = 4;
                            } else {
                                votes[43] = 3;
                            }
                        } else {
                            votes[43] = 1;
                        }
                    } else {
                        if (diastolic_area <= -59.073673248291016) {
                            votes[43] = 3;
                        } else {
                            if (rr_median <= 68.75) {
                                votes[43] = 3;
                            } else {
                                if (dist_std <= 0.12104457244277) {
                                    if (rr_median <= 90.0) {
                                        if (rr_median <= 86.25) {
                                            votes[43] = 5;
                                        } else {
                                            votes[43] = 1;
                                        }
                                    } else {
                                        votes[43] = 5;
                                    }
                                } else {
                                    votes[43] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -49.951263427734375) {
                        if (dist_std <= 0.048543501645326614) {
                            votes[43] = 3;
                        } else {
                            if (rr_median <= 81.75) {
                                votes[43] = 5;
                            } else {
                                votes[43] = 1;
                            }
                        }
                    } else {
                        if (dist_std <= 0.11728234589099884) {
                            if (rr_std <= 15.973519802093506) {
                                votes[43] = 4;
                            } else {
                                if (rr_median <= 90.5) {
                                    if (diastolic_area <= -37.531394958496094) {
                                        if (diastolic_time <= 0.14878641068935394) {
                                            votes[43] = 4;
                                        } else {
                                            votes[43] = 4;
                                        }
                                    } else {
                                        votes[43] = 4;
                                    }
                                } else {
                                    votes[43] = 4;
                                }
                            }
                        } else {
                            votes[43] = 3;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.00800000037997961) {
                    votes[43] = 0;
                } else {
                    if (rr_std <= 19.300649642944336) {
                        if (dist_std <= 0.07837564870715141) {
                            if (rr_median <= 69.5) {
                                if (num_peaks <= 132.5) {
                                    votes[43] = 3;
                                } else {
                                    if (diastolic_area <= -16.402823448181152) {
                                        votes[43] = 3;
                                    } else {
                                        votes[43] = 3;
                                    }
                                }
                            } else {
                                if (diastolic_area <= -62.08736801147461) {
                                    if (dist_std <= 0.04882203973829746) {
                                        votes[43] = 5;
                                    } else {
                                        votes[43] = 3;
                                    }
                                } else {
                                    votes[43] = 3;
                                }
                            }
                        } else {
                            votes[43] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.11569743603467941) {
                            if (diastolic_time <= 0.09499117359519005) {
                                if (rr_median <= 82.0) {
                                    votes[43] = 3;
                                } else {
                                    votes[43] = 1;
                                }
                            } else {
                                votes[43] = 1;
                            }
                        } else {
                            if (rr_median <= 81.5) {
                                if (dist_std <= 0.044678064063191414) {
                                    votes[43] = 4;
                                } else {
                                    votes[43] = 3;
                                }
                            } else {
                                votes[43] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -40.87240028381348) {
                if (num_peaks <= 97.5) {
                    votes[43] = 4;
                } else {
                    if (num_peaks <= 145.5) {
                        if (dist_std <= 0.04973757825791836) {
                            votes[43] = 1;
                        } else {
                            if (dist_std <= 0.06964496150612831) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 1;
                            }
                        }
                    } else {
                        votes[43] = 1;
                    }
                }
            } else {
                if (dist_std <= 0.03803890570998192) {
                    votes[43] = 4;
                } else {
                    if (diastolic_time <= 0.053685858845710754) {
                        votes[43] = 3;
                    } else {
                        if (diastolic_area <= -29.30009937286377) {
                            votes[43] = 5;
                        } else {
                            votes[43] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 127.0) {
            if (diastolic_area <= -17.818513870239258) {
                if (num_peaks <= 90.0) {
                    if (rr_median <= 91.0) {
                        if (diastolic_time <= 0.5116166770458221) {
                            if (diastolic_area <= -28.482211112976074) {
                                votes[43] = 2;
                            } else {
                                if (diastolic_time <= 0.26790477335453033) {
                                    votes[43] = 2;
                                } else {
                                    if (rr_median <= 74.25) {
                                        votes[43] = 2;
                                    } else {
                                        votes[43] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[43] = 2;
                        }
                    } else {
                        votes[43] = 5;
                    }
                } else {
                    if (dist_std <= 0.13552793115377426) {
                        if (rr_median <= 64.5) {
                            votes[43] = 3;
                        } else {
                            if (rr_std <= 14.369081497192383) {
                                if (dist_std <= 0.1248028352856636) {
                                    if (num_peaks <= 117.5) {
                                        votes[43] = 5;
                                    } else {
                                        votes[43] = 5;
                                    }
                                } else {
                                    votes[43] = 5;
                                }
                            } else {
                                votes[43] = 2;
                            }
                        }
                    } else {
                        if (num_peaks <= 113.0) {
                            votes[43] = 2;
                        } else {
                            votes[43] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6243076920509338) {
                    if (num_peaks <= 89.5) {
                        if (rr_median <= 77.25) {
                            votes[43] = 5;
                        } else {
                            if (diastolic_area <= -15.292630195617676) {
                                votes[43] = 5;
                            } else {
                                votes[43] = 4;
                            }
                        }
                    } else {
                        if (dist_std <= 0.029798838309943676) {
                            votes[43] = 0;
                        } else {
                            if (diastolic_area <= -16.441627502441406) {
                                votes[43] = 5;
                            } else {
                                if (diastolic_time <= 0.3584761917591095) {
                                    votes[43] = 1;
                                } else {
                                    votes[43] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 7.973716974258423) {
                        votes[43] = 5;
                    } else {
                        if (rr_median <= 79.5) {
                            votes[43] = 1;
                        } else {
                            votes[43] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 7.802156209945679) {
                if (diastolic_time <= 0.3386363685131073) {
                    votes[43] = 5;
                } else {
                    votes[43] = 3;
                }
            } else {
                if (dist_std <= 0.0748080238699913) {
                    if (diastolic_time <= 0.2591056674718857) {
                        votes[43] = 5;
                    } else {
                        if (rr_median <= 61.25) {
                            if (rr_std <= 14.96319580078125) {
                                if (diastolic_area <= -12.692572593688965) {
                                    votes[43] = 3;
                                } else {
                                    votes[43] = 0;
                                }
                            } else {
                                if (diastolic_area <= -11.43566608428955) {
                                    votes[43] = 0;
                                } else {
                                    votes[43] = 0;
                                }
                            }
                        } else {
                            if (dist_std <= 0.046083780005574226) {
                                votes[43] = 0;
                            } else {
                                if (diastolic_time <= 0.48939286172389984) {
                                    votes[43] = 0;
                                } else {
                                    votes[43] = 0;
                                }
                            }
                        }
                    }
                } else {
                    votes[43] = 2;
                }
            }
        }
    }
// Decision rules for tree 44
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 99.25) {
            if (rr_std <= 14.180799007415771) {
                if (rr_median <= 68.5) {
                    if (dist_std <= 0.13897265493869781) {
                        if (rr_std <= 9.50971794128418) {
                            if (rr_median <= 45.0) {
                                votes[44] = 1;
                            } else {
                                if (rr_std <= 1.673791229724884) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 10.51915693283081) {
                                if (diastolic_area <= -35.18578910827637) {
                                    votes[44] = 1;
                                } else {
                                    votes[44] = 1;
                                }
                            } else {
                                if (diastolic_area <= -36.75631904602051) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 5;
                                }
                            }
                        }
                    } else {
                        votes[44] = 2;
                    }
                } else {
                    if (diastolic_time <= 0.016946058720350266) {
                        votes[44] = 0;
                    } else {
                        if (diastolic_time <= 0.15037254989147186) {
                            if (diastolic_time <= 0.12295714393258095) {
                                if (diastolic_time <= 0.07537814602255821) {
                                    votes[44] = 5;
                                } else {
                                    if (diastolic_time <= 0.09323809295892715) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 5;
                                    }
                                }
                            } else {
                                votes[44] = 1;
                            }
                        } else {
                            if (num_peaks <= 107.5) {
                                votes[44] = 2;
                            } else {
                                if (num_peaks <= 127.5) {
                                    if (rr_std <= 0.5637657642364502) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 134.5) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -51.58812713623047) {
                    if (rr_median <= 82.75) {
                        if (diastolic_time <= 0.07887222990393639) {
                            votes[44] = 3;
                        } else {
                            if (diastolic_time <= 0.1077297292649746) {
                                votes[44] = 5;
                            } else {
                                votes[44] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.07056283205747604) {
                            votes[44] = 1;
                        } else {
                            votes[44] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 135.5) {
                        if (dist_std <= 0.11728234589099884) {
                            if (rr_std <= 16.855323791503906) {
                                if (rr_median <= 69.0) {
                                    votes[44] = 4;
                                } else {
                                    votes[44] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.1884315237402916) {
                                    if (diastolic_area <= -37.61199760437012) {
                                        if (diastolic_time <= 0.14667320251464844) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    } else {
                                        if (rr_median <= 87.25) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 70.75) {
                                        votes[44] = 2;
                                    } else {
                                        if (diastolic_time <= 0.26416774094104767) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.12140913680195808) {
                                votes[44] = 3;
                            } else {
                                votes[44] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 82.25) {
                            votes[44] = 1;
                        } else {
                            votes[44] = 0;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -31.92300319671631) {
                if (num_peaks <= 93.5) {
                    votes[44] = 4;
                } else {
                    if (rr_std <= 13.908481121063232) {
                        if (rr_std <= 6.331238031387329) {
                            votes[44] = 1;
                        } else {
                            votes[44] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.08774392679333687) {
                            if (rr_std <= 30.621580123901367) {
                                votes[44] = 1;
                            } else {
                                votes[44] = 1;
                            }
                        } else {
                            if (rr_std <= 24.75541114807129) {
                                votes[44] = 5;
                            } else {
                                votes[44] = 1;
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 0.07274919748306274) {
                    if (num_peaks <= 107.5) {
                        votes[44] = 4;
                    } else {
                        votes[44] = 4;
                    }
                } else {
                    if (rr_std <= 24.577356338500977) {
                        votes[44] = 1;
                    } else {
                        votes[44] = 3;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 112.5) {
            if (diastolic_area <= -14.550369262695312) {
                if (rr_median <= 89.5) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.5076166689395905) {
                            votes[44] = 2;
                        } else {
                            votes[44] = 5;
                        }
                    } else {
                        if (dist_std <= 0.13581082969903946) {
                            if (diastolic_area <= -17.167494773864746) {
                                if (rr_std <= 2.8135609924793243) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 5;
                                }
                            } else {
                                votes[44] = 2;
                            }
                        } else {
                            votes[44] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 14.255730152130127) {
                        votes[44] = 5;
                    } else {
                        votes[44] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 0.5058823674917221) {
                    if (diastolic_time <= 0.3479090929031372) {
                        votes[44] = 4;
                    } else {
                        if (dist_std <= 0.05018000304698944) {
                            votes[44] = 4;
                        } else {
                            votes[44] = 4;
                        }
                    }
                } else {
                    if (dist_std <= 0.04865911044180393) {
                        votes[44] = 2;
                    } else {
                        if (rr_std <= 12.08653736114502) {
                            votes[44] = 5;
                        } else {
                            votes[44] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.0761127881705761) {
                if (rr_std <= 6.039847135543823) {
                    votes[44] = 5;
                } else {
                    if (rr_median <= 55.75) {
                        if (rr_std <= 11.857729434967041) {
                            votes[44] = 3;
                        } else {
                            if (num_peaks <= 138.0) {
                                votes[44] = 1;
                            } else {
                                votes[44] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.6481212079524994) {
                            if (diastolic_area <= -18.90355396270752) {
                                if (dist_std <= 0.04332951083779335) {
                                    votes[44] = 0;
                                } else {
                                    votes[44] = 0;
                                }
                            } else {
                                votes[44] = 0;
                            }
                        } else {
                            votes[44] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -19.493274688720703) {
                    votes[44] = 5;
                } else {
                    if (dist_std <= 0.09048214927315712) {
                        votes[44] = 1;
                    } else {
                        if (diastolic_time <= 0.46666666865348816) {
                            votes[44] = 2;
                        } else {
                            votes[44] = 2;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 45
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_std <= 16.190052032470703) {
            if (rr_median <= 75.5) {
                if (dist_std <= 0.1390446275472641) {
                    if (num_peaks <= 95.0) {
                        votes[45] = 4;
                    } else {
                        if (dist_std <= 0.05969591997563839) {
                            if (rr_std <= 10.082536220550537) {
                                votes[45] = 3;
                            } else {
                                if (diastolic_time <= 0.10311384871602058) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 121.5) {
                                if (rr_median <= 68.75) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 3;
                                }
                            } else {
                                if (diastolic_area <= -30.816439628601074) {
                                    if (num_peaks <= 128.0) {
                                        votes[45] = 1;
                                    } else {
                                        votes[45] = 1;
                                    }
                                } else {
                                    votes[45] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.19720634818077087) {
                        votes[45] = 4;
                    } else {
                        if (diastolic_time <= 0.22695424407720566) {
                            votes[45] = 2;
                        } else {
                            votes[45] = 2;
                        }
                    }
                }
            } else {
                if (rr_median <= 99.25) {
                    if (diastolic_time <= 0.12970967590808868) {
                        if (rr_median <= 85.0) {
                            votes[45] = 5;
                        } else {
                            if (diastolic_area <= -38.701297760009766) {
                                if (rr_std <= 1.7382908463478088) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 3;
                                }
                            } else {
                                votes[45] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 128.0) {
                            if (num_peaks <= 108.0) {
                                votes[45] = 5;
                            } else {
                                if (diastolic_time <= 0.1513725444674492) {
                                    votes[45] = 5;
                                } else {
                                    votes[45] = 5;
                                }
                            }
                        } else {
                            votes[45] = 5;
                        }
                    }
                } else {
                    if (diastolic_area <= -1.684092402458191) {
                        if (dist_std <= 0.05583411082625389) {
                            if (diastolic_time <= 0.049564121291041374) {
                                votes[45] = 1;
                            } else {
                                votes[45] = 1;
                            }
                        } else {
                            votes[45] = 1;
                        }
                    } else {
                        votes[45] = 4;
                    }
                }
            }
        } else {
            if (diastolic_area <= -52.8729305267334) {
                if (diastolic_area <= -115.91572952270508) {
                    if (dist_std <= 0.04551501013338566) {
                        votes[45] = 1;
                    } else {
                        votes[45] = 1;
                    }
                } else {
                    if (rr_median <= 67.0) {
                        votes[45] = 3;
                    } else {
                        if (dist_std <= 0.05995388887822628) {
                            if (diastolic_time <= 0.09444639086723328) {
                                votes[45] = 1;
                            } else {
                                votes[45] = 5;
                            }
                        } else {
                            if (num_peaks <= 109.0) {
                                votes[45] = 5;
                            } else {
                                if (rr_std <= 19.99256706237793) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (dist_std <= 0.07091160118579865) {
                        if (diastolic_area <= -36.83173179626465) {
                            if (diastolic_area <= -38.75846862792969) {
                                if (dist_std <= 0.038335224613547325) {
                                    if (num_peaks <= 124.5) {
                                        votes[45] = 4;
                                    } else {
                                        votes[45] = 4;
                                    }
                                } else {
                                    if (dist_std <= 0.04753559269011021) {
                                        votes[45] = 5;
                                    } else {
                                        if (diastolic_area <= -42.95298385620117) {
                                            votes[45] = 4;
                                        } else {
                                            votes[45] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[45] = 5;
                            }
                        } else {
                            if (num_peaks <= 125.0) {
                                votes[45] = 4;
                            } else {
                                votes[45] = 4;
                            }
                        }
                    } else {
                        if (diastolic_area <= -25.772611618041992) {
                            votes[45] = 3;
                        } else {
                            if (num_peaks <= 118.5) {
                                if (rr_std <= 23.08088207244873) {
                                    votes[45] = 4;
                                } else {
                                    votes[45] = 4;
                                }
                            } else {
                                votes[45] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 83.5) {
                        if (rr_median <= 67.5) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 3;
                        }
                    } else {
                        votes[45] = 5;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_area <= -18.82423496246338) {
                if (dist_std <= 0.09462481364607811) {
                    if (rr_std <= 15.72080945968628) {
                        if (rr_median <= 66.75) {
                            votes[45] = 3;
                        } else {
                            votes[45] = 5;
                        }
                    } else {
                        if (rr_std <= 27.08300495147705) {
                            votes[45] = 2;
                        } else {
                            votes[45] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 111.5) {
                        if (diastolic_time <= 0.5396923124790192) {
                            if (diastolic_area <= -26.989721298217773) {
                                if (diastolic_time <= 0.28886812925338745) {
                                    votes[45] = 2;
                                } else {
                                    votes[45] = 2;
                                }
                            } else {
                                votes[45] = 2;
                            }
                        } else {
                            votes[45] = 2;
                        }
                    } else {
                        if (diastolic_area <= -22.924763679504395) {
                            votes[45] = 5;
                        } else {
                            votes[45] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8191111087799072) {
                    if (rr_std <= 20.463601112365723) {
                        if (diastolic_area <= -12.916272640228271) {
                            if (num_peaks <= 111.0) {
                                if (rr_std <= 12.158707618713379) {
                                    votes[45] = 5;
                                } else {
                                    votes[45] = 5;
                                }
                            } else {
                                votes[45] = 5;
                            }
                        } else {
                            if (dist_std <= 0.06051310710608959) {
                                votes[45] = 0;
                            } else {
                                votes[45] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 76.0) {
                            votes[45] = 2;
                        } else {
                            if (dist_std <= 0.03514838591217995) {
                                votes[45] = 1;
                            } else {
                                if (rr_median <= 98.5) {
                                    if (rr_median <= 81.0) {
                                        votes[45] = 4;
                                    } else {
                                        if (diastolic_time <= 0.42568421363830566) {
                                            votes[45] = 4;
                                        } else {
                                            votes[45] = 4;
                                        }
                                    }
                                } else {
                                    votes[45] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.049252284690737724) {
                        votes[45] = 1;
                    } else {
                        votes[45] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06483301520347595) {
                if (rr_median <= 52.25) {
                    votes[45] = 3;
                } else {
                    if (rr_std <= 7.609926223754883) {
                        votes[45] = 5;
                    } else {
                        if (rr_median <= 61.25) {
                            if (rr_median <= 60.75) {
                                if (diastolic_area <= -15.56245470046997) {
                                    votes[45] = 0;
                                } else {
                                    votes[45] = 0;
                                }
                            } else {
                                votes[45] = 3;
                            }
                        } else {
                            if (diastolic_area <= -18.90355396270752) {
                                if (diastolic_area <= -23.27642822265625) {
                                    votes[45] = 0;
                                } else {
                                    votes[45] = 0;
                                }
                            } else {
                                votes[45] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 28.499895095825195) {
                    if (diastolic_area <= -23.981306076049805) {
                        votes[45] = 5;
                    } else {
                        votes[45] = 3;
                    }
                } else {
                    votes[45] = 2;
                }
            }
        }
    }
// Decision rules for tree 46
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 99.25) {
            if (rr_std <= 14.500072002410889) {
                if (rr_median <= 68.75) {
                    if (rr_std <= 9.526742935180664) {
                        if (rr_std <= 4.588097810745239) {
                            if (num_peaks <= 119.5) {
                                votes[46] = 3;
                            } else {
                                if (dist_std <= 0.06326158531010151) {
                                    votes[46] = 3;
                                } else {
                                    votes[46] = 1;
                                }
                            }
                        } else {
                            votes[46] = 3;
                        }
                    } else {
                        if (dist_std <= 0.049619847908616066) {
                            if (num_peaks <= 136.0) {
                                votes[46] = 3;
                            } else {
                                votes[46] = 3;
                            }
                        } else {
                            if (rr_median <= 52.75) {
                                votes[46] = 3;
                            } else {
                                votes[46] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 139.5) {
                        if (dist_std <= 0.04949212446808815) {
                            votes[46] = 5;
                        } else {
                            if (num_peaks <= 129.0) {
                                if (rr_std <= 8.673605918884277) {
                                    if (rr_std <= 0.9186051487922668) {
                                        if (rr_std <= 0.6495611071586609) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 6.54577898979187) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    }
                                } else {
                                    votes[46] = 1;
                                }
                            } else {
                                votes[46] = 3;
                            }
                        }
                    } else {
                        votes[46] = 0;
                    }
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (diastolic_area <= -49.188669204711914) {
                        if (diastolic_time <= 0.13662712275981903) {
                            if (rr_std <= 19.7650728225708) {
                                votes[46] = 3;
                            } else {
                                if (diastolic_area <= -73.86984252929688) {
                                    votes[46] = 1;
                                } else {
                                    votes[46] = 5;
                                }
                            }
                        } else {
                            votes[46] = 4;
                        }
                    } else {
                        if (dist_std <= 0.11894593387842178) {
                            if (rr_std <= 16.15445613861084) {
                                votes[46] = 1;
                            } else {
                                if (rr_median <= 90.5) {
                                    if (diastolic_area <= -37.531394958496094) {
                                        if (rr_median <= 71.25) {
                                            votes[46] = 4;
                                        } else {
                                            votes[46] = 4;
                                        }
                                    } else {
                                        votes[46] = 4;
                                    }
                                } else {
                                    votes[46] = 4;
                                }
                            }
                        } else {
                            votes[46] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 25.69298267364502) {
                        if (rr_median <= 76.0) {
                            if (rr_median <= 64.25) {
                                votes[46] = 3;
                            } else {
                                votes[46] = 3;
                            }
                        } else {
                            votes[46] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.11569743603467941) {
                            if (rr_median <= 84.5) {
                                if (num_peaks <= 140.0) {
                                    votes[46] = 3;
                                } else {
                                    votes[46] = 1;
                                }
                            } else {
                                votes[46] = 5;
                            }
                        } else {
                            if (rr_std <= 33.459238052368164) {
                                votes[46] = 4;
                            } else {
                                votes[46] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 109.0) {
                if (diastolic_area <= -64.30151176452637) {
                    votes[46] = 1;
                } else {
                    if (dist_std <= 0.07312018051743507) {
                        if (diastolic_area <= -29.28345775604248) {
                            votes[46] = 4;
                        } else {
                            votes[46] = 4;
                        }
                    } else {
                        votes[46] = 1;
                    }
                }
            } else {
                if (diastolic_area <= -1.684092402458191) {
                    if (rr_std <= 13.559391975402832) {
                        if (diastolic_time <= 0.06173854321241379) {
                            votes[46] = 1;
                        } else {
                            votes[46] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.0939403809607029) {
                            if (rr_median <= 123.25) {
                                votes[46] = 1;
                            } else {
                                votes[46] = 1;
                            }
                        } else {
                            votes[46] = 5;
                        }
                    }
                } else {
                    votes[46] = 0;
                }
            }
        }
    } else {
        if (num_peaks <= 128.0) {
            if (diastolic_area <= -18.82423496246338) {
                if (num_peaks <= 111.5) {
                    if (rr_median <= 88.75) {
                        if (diastolic_time <= 0.4794999957084656) {
                            if (rr_median <= 66.0) {
                                if (rr_std <= 6.487696409225464) {
                                    votes[46] = 3;
                                } else {
                                    votes[46] = 2;
                                }
                            } else {
                                if (dist_std <= 0.09838484227657318) {
                                    if (dist_std <= 0.07316967472434044) {
                                        votes[46] = 2;
                                    } else {
                                        votes[46] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 105.5) {
                                        if (rr_std <= 24.003560066223145) {
                                            votes[46] = 2;
                                        } else {
                                            votes[46] = 2;
                                        }
                                    } else {
                                        votes[46] = 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 3.5881196558475494) {
                                if (diastolic_time <= 0.5084166526794434) {
                                    votes[46] = 2;
                                } else {
                                    votes[46] = 2;
                                }
                            } else {
                                votes[46] = 5;
                            }
                        }
                    } else {
                        votes[46] = 5;
                    }
                } else {
                    if (diastolic_area <= -25.19062614440918) {
                        votes[46] = 5;
                    } else {
                        votes[46] = 3;
                    }
                }
            } else {
                if (diastolic_time <= 0.6157333254814148) {
                    if (num_peaks <= 92.0) {
                        if (rr_median <= 98.5) {
                            if (rr_median <= 77.75) {
                                votes[46] = 4;
                            } else {
                                votes[46] = 4;
                            }
                        } else {
                            votes[46] = 5;
                        }
                    } else {
                        if (dist_std <= 0.030651387758553028) {
                            votes[46] = 0;
                        } else {
                            if (rr_median <= 78.25) {
                                if (dist_std <= 0.08446173369884491) {
                                    votes[46] = 5;
                                } else {
                                    votes[46] = 2;
                                }
                            } else {
                                votes[46] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 10.283936500549316) {
                        votes[46] = 5;
                    } else {
                        if (rr_median <= 79.25) {
                            votes[46] = 2;
                        } else {
                            votes[46] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06483301520347595) {
                if (rr_std <= 8.305138111114502) {
                    if (diastolic_time <= 0.5518095195293427) {
                        votes[46] = 3;
                    } else {
                        votes[46] = 5;
                    }
                } else {
                    if (rr_median <= 52.25) {
                        votes[46] = 3;
                    } else {
                        if (diastolic_time <= 0.2809973508119583) {
                            votes[46] = 0;
                        } else {
                            if (diastolic_area <= -6.552235841751099) {
                                if (rr_median <= 55.75) {
                                    votes[46] = 0;
                                } else {
                                    votes[46] = 0;
                                }
                            } else {
                                votes[46] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -13.68181037902832) {
                    if (dist_std <= 0.08288009464740753) {
                        votes[46] = 5;
                    } else {
                        votes[46] = 3;
                    }
                } else {
                    votes[46] = 2;
                }
            }
        }
    }
// Decision rules for tree 47
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 85.75) {
            if (rr_std <= 15.967272281646729) {
                if (rr_median <= 68.75) {
                    if (rr_std <= 9.636830806732178) {
                        if (diastolic_area <= -38.16653823852539) {
                            if (rr_median <= 54.75) {
                                votes[47] = 3;
                            } else {
                                votes[47] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.15614502131938934) {
                                if (dist_std <= 0.03679417446255684) {
                                    votes[47] = 3;
                                } else {
                                    votes[47] = 3;
                                }
                            } else {
                                votes[47] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.08396660536527634) {
                            votes[47] = 4;
                        } else {
                            if (rr_std <= 10.75985860824585) {
                                votes[47] = 1;
                            } else {
                                if (diastolic_area <= -37.13578224182129) {
                                    votes[47] = 3;
                                } else {
                                    votes[47] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.16392824053764343) {
                        if (rr_std <= 13.34977388381958) {
                            if (rr_std <= 1.0714037418365479) {
                                votes[47] = 5;
                            } else {
                                if (rr_std <= 9.702898502349854) {
                                    votes[47] = 5;
                                } else {
                                    votes[47] = 5;
                                }
                            }
                        } else {
                            votes[47] = 3;
                        }
                    } else {
                        votes[47] = 3;
                    }
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (diastolic_area <= -49.25034141540527) {
                        if (num_peaks <= 123.0) {
                            if (rr_std <= 23.46286964416504) {
                                votes[47] = 3;
                            } else {
                                votes[47] = 3;
                            }
                        } else {
                            votes[47] = 4;
                        }
                    } else {
                        if (dist_std <= 0.11728234589099884) {
                            if (diastolic_time <= 0.1736646518111229) {
                                if (diastolic_time <= 0.13493333011865616) {
                                    if (rr_std <= 19.8973331451416) {
                                        votes[47] = 4;
                                    } else {
                                        votes[47] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 0.14847024530172348) {
                                        votes[47] = 5;
                                    } else {
                                        votes[47] = 4;
                                    }
                                }
                            } else {
                                votes[47] = 4;
                            }
                        } else {
                            votes[47] = 3;
                        }
                    }
                } else {
                    if (dist_std <= 0.03988886997103691) {
                        votes[47] = 3;
                    } else {
                        if (dist_std <= 0.07921623066067696) {
                            if (rr_median <= 65.5) {
                                votes[47] = 1;
                            } else {
                                votes[47] = 1;
                            }
                        } else {
                            votes[47] = 3;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -100.42283248901367) {
                votes[47] = 1;
            } else {
                if (diastolic_time <= 0.034256696701049805) {
                    if (num_peaks <= 120.5) {
                        if (rr_std <= 51.00967216491699) {
                            votes[47] = 4;
                        } else {
                            votes[47] = 4;
                        }
                    } else {
                        if (num_peaks <= 142.0) {
                            votes[47] = 3;
                        } else {
                            votes[47] = 0;
                        }
                    }
                } else {
                    if (dist_std <= 0.0342775397002697) {
                        if (diastolic_area <= -42.078773498535156) {
                            votes[47] = 5;
                        } else {
                            votes[47] = 4;
                        }
                    } else {
                        if (rr_median <= 99.25) {
                            if (diastolic_time <= 0.1596766710281372) {
                                if (rr_median <= 92.5) {
                                    if (diastolic_area <= -41.42291450500488) {
                                        votes[47] = 3;
                                    } else {
                                        votes[47] = 1;
                                    }
                                } else {
                                    if (diastolic_time <= 0.07199889421463013) {
                                        votes[47] = 5;
                                    } else {
                                        votes[47] = 5;
                                    }
                                }
                            } else {
                                votes[47] = 5;
                            }
                        } else {
                            if (rr_std <= 29.82318687438965) {
                                if (num_peaks <= 114.5) {
                                    votes[47] = 5;
                                } else {
                                    if (dist_std <= 0.05682751350104809) {
                                        if (rr_median <= 124.5) {
                                            votes[47] = 1;
                                        } else {
                                            votes[47] = 1;
                                        }
                                    } else {
                                        votes[47] = 1;
                                    }
                                }
                            } else {
                                if (rr_median <= 124.25) {
                                    votes[47] = 5;
                                } else {
                                    votes[47] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_area <= -18.817914962768555) {
                if (num_peaks <= 93.5) {
                    if (rr_median <= 89.0) {
                        if (diastolic_time <= 0.5114666819572449) {
                            if (rr_median <= 74.25) {
                                if (diastolic_time <= 0.2892649620771408) {
                                    votes[47] = 2;
                                } else {
                                    votes[47] = 2;
                                }
                            } else {
                                if (dist_std <= 0.0708250142633915) {
                                    votes[47] = 2;
                                } else {
                                    votes[47] = 2;
                                }
                            }
                        } else {
                            votes[47] = 2;
                        }
                    } else {
                        votes[47] = 5;
                    }
                } else {
                    if (dist_std <= 0.13581082969903946) {
                        if (rr_median <= 64.0) {
                            if (rr_median <= 58.0) {
                                votes[47] = 3;
                            } else {
                                votes[47] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.271017849445343) {
                                votes[47] = 3;
                            } else {
                                if (diastolic_area <= -22.011574745178223) {
                                    votes[47] = 5;
                                } else {
                                    votes[47] = 5;
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -33.232930183410645) {
                            votes[47] = 2;
                        } else {
                            votes[47] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6263999938964844) {
                    if (rr_std <= 20.463601112365723) {
                        if (diastolic_area <= -12.70021915435791) {
                            if (dist_std <= 0.029917645268142223) {
                                votes[47] = 0;
                            } else {
                                if (diastolic_time <= 0.414535716176033) {
                                    votes[47] = 5;
                                } else {
                                    votes[47] = 5;
                                }
                            }
                        } else {
                            votes[47] = 0;
                        }
                    } else {
                        if (rr_median <= 75.5) {
                            votes[47] = 2;
                        } else {
                            if (num_peaks <= 96.0) {
                                if (dist_std <= 0.042125092819333076) {
                                    votes[47] = 4;
                                } else {
                                    if (rr_median <= 96.25) {
                                        votes[47] = 4;
                                    } else {
                                        votes[47] = 4;
                                    }
                                }
                            } else {
                                votes[47] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 10.283936500549316) {
                        votes[47] = 5;
                    } else {
                        if (rr_std <= 33.64248180389404) {
                            votes[47] = 1;
                        } else {
                            votes[47] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06709022633731365) {
                if (rr_std <= 7.493313550949097) {
                    votes[47] = 5;
                } else {
                    if (rr_median <= 53.5) {
                        votes[47] = 0;
                    } else {
                        if (diastolic_time <= 0.2726285755634308) {
                            votes[47] = 5;
                        } else {
                            if (rr_median <= 61.5) {
                                if (diastolic_time <= 0.4270588159561157) {
                                    votes[47] = 0;
                                } else {
                                    if (dist_std <= 0.04343053512275219) {
                                        votes[47] = 3;
                                    } else {
                                        votes[47] = 0;
                                    }
                                }
                            } else {
                                if (num_peaks <= 132.5) {
                                    if (num_peaks <= 129.5) {
                                        votes[47] = 0;
                                    } else {
                                        votes[47] = 0;
                                    }
                                } else {
                                    votes[47] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -19.42817497253418) {
                    if (diastolic_area <= -23.86189842224121) {
                        votes[47] = 3;
                    } else {
                        votes[47] = 3;
                    }
                } else {
                    if (num_peaks <= 141.0) {
                        votes[47] = 0;
                    } else {
                        votes[47] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 48
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 83.25) {
            if (rr_std <= 16.939903259277344) {
                if (num_peaks <= 86.5) {
                    votes[48] = 4;
                } else {
                    if (rr_median <= 68.5) {
                        if (dist_std <= 0.07042357325553894) {
                            if (num_peaks <= 134.5) {
                                if (num_peaks <= 127.5) {
                                    votes[48] = 3;
                                } else {
                                    if (diastolic_area <= -38.91835594177246) {
                                        votes[48] = 3;
                                    } else {
                                        votes[48] = 5;
                                    }
                                }
                            } else {
                                votes[48] = 3;
                            }
                        } else {
                            if (rr_std <= 7.635181665420532) {
                                if (num_peaks <= 113.5) {
                                    votes[48] = 3;
                                } else {
                                    votes[48] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.1190432757139206) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 1;
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -65.29113388061523) {
                            votes[48] = 5;
                        } else {
                            if (num_peaks <= 113.5) {
                                votes[48] = 3;
                            } else {
                                if (dist_std <= 0.12055886164307594) {
                                    votes[48] = 3;
                                } else {
                                    votes[48] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 134.0) {
                    if (diastolic_area <= -39.709882736206055) {
                        if (dist_std <= 0.0397397018969059) {
                            if (rr_median <= 71.5) {
                                votes[48] = 4;
                            } else {
                                votes[48] = 4;
                            }
                        } else {
                            if (rr_median <= 72.25) {
                                if (rr_std <= 23.578018188476562) {
                                    votes[48] = 1;
                                } else {
                                    votes[48] = 3;
                                }
                            } else {
                                votes[48] = 5;
                            }
                        }
                    } else {
                        votes[48] = 4;
                    }
                } else {
                    if (rr_std <= 33.164541244506836) {
                        if (diastolic_time <= 0.10405194759368896) {
                            votes[48] = 3;
                        } else {
                            votes[48] = 3;
                        }
                    } else {
                        votes[48] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.030693981796503067) {
                if (rr_median <= 118.5) {
                    votes[48] = 4;
                } else {
                    votes[48] = 4;
                }
            } else {
                if (diastolic_time <= 0.08716500550508499) {
                    if (diastolic_area <= -10.557027578353882) {
                        if (rr_median <= 101.5) {
                            if (rr_median <= 96.25) {
                                if (dist_std <= 0.06932387501001358) {
                                    votes[48] = 1;
                                } else {
                                    votes[48] = 3;
                                }
                            } else {
                                votes[48] = 5;
                            }
                        } else {
                            if (rr_median <= 112.75) {
                                votes[48] = 1;
                            } else {
                                votes[48] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 134.0) {
                            if (dist_std <= 0.06720578111708164) {
                                votes[48] = 4;
                            } else {
                                votes[48] = 1;
                            }
                        } else {
                            votes[48] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 13.420379161834717) {
                        if (rr_median <= 101.5) {
                            if (diastolic_time <= 0.16305945068597794) {
                                if (dist_std <= 0.10594991222023964) {
                                    if (diastolic_time <= 0.11680784821510315) {
                                        votes[48] = 3;
                                    } else {
                                        votes[48] = 5;
                                    }
                                } else {
                                    votes[48] = 1;
                                }
                            } else {
                                votes[48] = 5;
                            }
                        } else {
                            if (dist_std <= 0.06276390329003334) {
                                votes[48] = 1;
                            } else {
                                votes[48] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 129.5) {
                            if (dist_std <= 0.05745357647538185) {
                                votes[48] = 4;
                            } else {
                                votes[48] = 5;
                            }
                        } else {
                            if (diastolic_area <= -57.757301330566406) {
                                votes[48] = 5;
                            } else {
                                votes[48] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 107.5) {
            if (diastolic_area <= -18.01252269744873) {
                if (rr_median <= 88.5) {
                    if (num_peaks <= 87.5) {
                        if (rr_median <= 74.25) {
                            votes[48] = 2;
                        } else {
                            votes[48] = 2;
                        }
                    } else {
                        if (dist_std <= 0.1324090212583542) {
                            if (rr_std <= 14.139047622680664) {
                                votes[48] = 5;
                            } else {
                                votes[48] = 2;
                            }
                        } else {
                            votes[48] = 2;
                        }
                    }
                } else {
                    votes[48] = 3;
                }
            } else {
                if (diastolic_time <= 0.6167076826095581) {
                    if (rr_std <= 20.9439640045166) {
                        votes[48] = 5;
                    } else {
                        if (rr_median <= 77.25) {
                            votes[48] = 2;
                        } else {
                            if (diastolic_area <= -14.080796718597412) {
                                votes[48] = 4;
                            } else {
                                if (dist_std <= 0.06097693182528019) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 10.28257942199707) {
                        votes[48] = 5;
                    } else {
                        if (rr_median <= 81.0) {
                            votes[48] = 1;
                        } else {
                            votes[48] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.05457903817296028) {
                if (diastolic_time <= 0.29956695437431335) {
                    if (rr_std <= 11.084541320800781) {
                        votes[48] = 3;
                    } else {
                        votes[48] = 0;
                    }
                } else {
                    if (rr_median <= 55.75) {
                        if (diastolic_area <= -13.405765533447266) {
                            votes[48] = 3;
                        } else {
                            votes[48] = 0;
                        }
                    } else {
                        if (rr_std <= 8.946646213531494) {
                            votes[48] = 0;
                        } else {
                            if (rr_median <= 61.5) {
                                if (diastolic_area <= -15.209608554840088) {
                                    votes[48] = 0;
                                } else {
                                    votes[48] = 0;
                                }
                            } else {
                                votes[48] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -19.493274688720703) {
                    if (dist_std <= 0.06902924180030823) {
                        votes[48] = 5;
                    } else {
                        if (diastolic_area <= -25.608405113220215) {
                            votes[48] = 5;
                        } else {
                            votes[48] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 8.927549123764038) {
                        if (dist_std <= 0.08555467054247856) {
                            votes[48] = 5;
                        } else {
                            votes[48] = 2;
                        }
                    } else {
                        if (num_peaks <= 140.0) {
                            votes[48] = 1;
                        } else {
                            votes[48] = 2;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 49
    if (diastolic_time <= 0.2631056606769562) {
        if (rr_std <= 17.313146591186523) {
            if (rr_median <= 98.5) {
                if (rr_median <= 72.5) {
                    if (dist_std <= 0.13897265493869781) {
                        if (rr_std <= 10.06764030456543) {
                            if (dist_std <= 0.12247582897543907) {
                                if (diastolic_time <= 0.19919487088918686) {
                                    if (rr_median <= 47.5) {
                                        votes[49] = 3;
                                    } else {
                                        votes[49] = 3;
                                    }
                                } else {
                                    votes[49] = 3;
                                }
                            } else {
                                if (diastolic_area <= -30.265101432800293) {
                                    votes[49] = 3;
                                } else {
                                    votes[49] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 10.75985860824585) {
                                votes[49] = 1;
                            } else {
                                if (diastolic_area <= -37.79817581176758) {
                                    if (dist_std <= 0.03734745271503925) {
                                        votes[49] = 3;
                                    } else {
                                        votes[49] = 3;
                                    }
                                } else {
                                    if (diastolic_area <= -27.851624488830566) {
                                        votes[49] = 1;
                                    } else {
                                        votes[49] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 104.0) {
                            votes[49] = 2;
                        } else {
                            votes[49] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.01731063798069954) {
                        votes[49] = 0;
                    } else {
                        if (rr_std <= 12.727213382720947) {
                            if (diastolic_time <= 0.12970967590808868) {
                                if (diastolic_time <= 0.0740186907351017) {
                                    votes[49] = 5;
                                } else {
                                    if (num_peaks <= 120.0) {
                                        votes[49] = 1;
                                    } else {
                                        votes[49] = 3;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.21768421679735184) {
                                    if (diastolic_area <= -39.5732536315918) {
                                        if (diastolic_area <= -46.80499267578125) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.1705043464899063) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    }
                                } else {
                                    votes[49] = 5;
                                }
                            }
                        } else {
                            votes[49] = 3;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.20786985754966736) {
                    votes[49] = 4;
                } else {
                    if (rr_median <= 143.25) {
                        if (dist_std <= 0.05583411082625389) {
                            votes[49] = 5;
                        } else {
                            if (rr_median <= 102.75) {
                                votes[49] = 1;
                            } else {
                                votes[49] = 1;
                            }
                        }
                    } else {
                        votes[49] = 1;
                    }
                }
            }
        } else {
            if (diastolic_area <= -51.94780158996582) {
                if (diastolic_time <= 0.08774392679333687) {
                    if (dist_std <= 0.06660943478345871) {
                        if (rr_std <= 26.696024894714355) {
                            votes[49] = 3;
                        } else {
                            votes[49] = 1;
                        }
                    } else {
                        votes[49] = 3;
                    }
                } else {
                    if (rr_std <= 27.740243911743164) {
                        if (diastolic_area <= -76.12142562866211) {
                            votes[49] = 4;
                        } else {
                            votes[49] = 3;
                        }
                    } else {
                        votes[49] = 5;
                    }
                }
            } else {
                if (num_peaks <= 133.5) {
                    if (rr_median <= 93.75) {
                        if (dist_std <= 0.11728234589099884) {
                            if (diastolic_time <= 0.18797121196985245) {
                                if (num_peaks <= 125.5) {
                                    votes[49] = 4;
                                } else {
                                    if (rr_median <= 78.75) {
                                        if (rr_median <= 68.75) {
                                            votes[49] = 4;
                                        } else {
                                            votes[49] = 4;
                                        }
                                    } else {
                                        votes[49] = 4;
                                    }
                                }
                            } else {
                                votes[49] = 4;
                            }
                        } else {
                            votes[49] = 4;
                        }
                    } else {
                        if (dist_std <= 0.07271716743707657) {
                            if (rr_std <= 39.67925834655762) {
                                votes[49] = 1;
                            } else {
                                if (rr_std <= 82.98770141601562) {
                                    votes[49] = 4;
                                } else {
                                    votes[49] = 4;
                                }
                            }
                        } else {
                            votes[49] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 83.5) {
                        if (diastolic_time <= 0.13133785873651505) {
                            votes[49] = 1;
                        } else {
                            votes[49] = 3;
                        }
                    } else {
                        votes[49] = 5;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05374464951455593) {
            if (num_peaks <= 106.5) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (dist_std <= 0.03413197211921215) {
                        votes[49] = 5;
                    } else {
                        if (rr_median <= 81.75) {
                            votes[49] = 2;
                        } else {
                            if (diastolic_time <= 0.30890461802482605) {
                                votes[49] = 4;
                            } else {
                                votes[49] = 4;
                            }
                        }
                    }
                } else {
                    votes[49] = 1;
                }
            } else {
                if (rr_std <= 8.344743251800537) {
                    votes[49] = 5;
                } else {
                    if (rr_median <= 55.75) {
                        if (diastolic_area <= -15.56245470046997) {
                            votes[49] = 3;
                        } else {
                            votes[49] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.28780077397823334) {
                            votes[49] = 0;
                        } else {
                            if (dist_std <= 0.05172596126794815) {
                                if (rr_median <= 61.5) {
                                    if (diastolic_time <= 0.43341176211833954) {
                                        votes[49] = 0;
                                    } else {
                                        votes[49] = 0;
                                    }
                                } else {
                                    votes[49] = 0;
                                }
                            } else {
                                votes[49] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.09462481364607811) {
                if (rr_std <= 10.328854084014893) {
                    if (diastolic_time <= 0.3409275412559509) {
                        if (dist_std <= 0.07721121236681938) {
                            votes[49] = 5;
                        } else {
                            votes[49] = 3;
                        }
                    } else {
                        votes[49] = 5;
                    }
                } else {
                    if (diastolic_time <= 0.7160444557666779) {
                        if (diastolic_area <= -17.564342498779297) {
                            if (num_peaks <= 98.5) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 2;
                            }
                        } else {
                            if (num_peaks <= 85.5) {
                                votes[49] = 4;
                            } else {
                                if (diastolic_time <= 0.6148615479469299) {
                                    if (num_peaks <= 112.5) {
                                        votes[49] = 5;
                                    } else {
                                        votes[49] = 0;
                                    }
                                } else {
                                    votes[49] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 42.12432670593262) {
                            votes[49] = 1;
                        } else {
                            votes[49] = 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 111.5) {
                        if (rr_std <= 25.340004920959473) {
                            votes[49] = 2;
                        } else {
                            votes[49] = 2;
                        }
                    } else {
                        votes[49] = 5;
                    }
                } else {
                    if (dist_std <= 0.11922686919569969) {
                        votes[49] = 3;
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
