#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

int random_forest_predict(float diastolic_time, float rr_std, float rr_median, float dist_std, float num_peaks, float num_valleys) {
    int votes[50] = {0};
// Decision rules for tree 0
    if (diastolic_time <= 0.2538427412509918) {
        if (rr_std <= 16.939903259277344) {
            if (rr_median <= 99.5) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.07823266461491585) {
                        if (num_peaks <= 134.5) {
                            if (diastolic_time <= 0.08290908858180046) {
                                if (diastolic_time <= 0.06482581794261932) {
                                    votes[0] = 3;
                                } else {
                                    votes[0] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.13974253088235855) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 3;
                                }
                            }
                        } else {
                            votes[0] = 3;
                        }
                    } else {
                        if (num_peaks <= 121.5) {
                            if (rr_std <= 8.048603534698486) {
                                if (diastolic_time <= 0.17288583517074585) {
                                    votes[0] = 3;
                                } else {
                                    votes[0] = 3;
                                }
                            } else {
                                votes[0] = 4;
                            }
                        } else {
                            if (num_valleys <= 73.0) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 1;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 65.5) {
                        if (dist_std <= 0.06624849885702133) {
                            votes[0] = 4;
                        } else {
                            if (dist_std <= 0.10892756655812263) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 13.34977388381958) {
                            if (rr_std <= 5.382164716720581) {
                                if (num_peaks <= 128.0) {
                                    if (diastolic_time <= 0.1597033366560936) {
                                        votes[0] = 3;
                                    } else {
                                        votes[0] = 5;
                                    }
                                } else {
                                    votes[0] = 3;
                                }
                            } else {
                                if (rr_median <= 85.75) {
                                    if (rr_std <= 7.765414237976074) {
                                        votes[0] = 5;
                                    } else {
                                        votes[0] = 5;
                                    }
                                } else {
                                    votes[0] = 5;
                                }
                            }
                        } else {
                            votes[0] = 3;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.20786985754966736) {
                    votes[0] = 4;
                } else {
                    if (dist_std <= 0.05804380029439926) {
                        if (rr_median <= 175.75) {
                            votes[0] = 1;
                        } else {
                            votes[0] = 1;
                        }
                    } else {
                        votes[0] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 132.5) {
                if (dist_std <= 0.11826056987047195) {
                    if (rr_median <= 98.5) {
                        if (diastolic_time <= 0.22696450352668762) {
                            if (num_valleys <= 72.5) {
                                if (diastolic_time <= 0.0495035108178854) {
                                    votes[0] = 4;
                                } else {
                                    if (diastolic_time <= 0.09909114241600037) {
                                        votes[0] = 3;
                                    } else {
                                        if (dist_std <= 0.0591447688639164) {
                                            votes[0] = 4;
                                        } else {
                                            votes[0] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 33.89896583557129) {
                                    if (num_peaks <= 124.5) {
                                        votes[0] = 4;
                                    } else {
                                        votes[0] = 4;
                                    }
                                } else {
                                    votes[0] = 1;
                                }
                            }
                        } else {
                            votes[0] = 3;
                        }
                    } else {
                        if (num_valleys <= 57.5) {
                            votes[0] = 4;
                        } else {
                            if (diastolic_time <= 0.06079673953354359) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 73.5) {
                        votes[0] = 3;
                    } else {
                        votes[0] = 3;
                    }
                }
            } else {
                if (rr_std <= 20.775863647460938) {
                    if (diastolic_time <= 0.10405194759368896) {
                        votes[0] = 5;
                    } else {
                        votes[0] = 3;
                    }
                } else {
                    if (diastolic_time <= 0.11569743603467941) {
                        if (rr_std <= 32.47277641296387) {
                            if (rr_std <= 28.17280673980713) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 5;
                            }
                        } else {
                            if (num_peaks <= 137.5) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 1;
                            }
                        }
                    } else {
                        votes[0] = 5;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05402151122689247) {
            if (num_peaks <= 106.0) {
                if (dist_std <= 0.033361793495714664) {
                    votes[0] = 5;
                } else {
                    if (dist_std <= 0.04324321635067463) {
                        votes[0] = 2;
                    } else {
                        if (rr_std <= 34.297916412353516) {
                            votes[0] = 4;
                        } else {
                            votes[0] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.344743251800537) {
                    votes[0] = 0;
                } else {
                    if (rr_median <= 51.25) {
                        votes[0] = 0;
                    } else {
                        if (rr_median <= 55.75) {
                            votes[0] = 0;
                        } else {
                            if (dist_std <= 0.046083780005574226) {
                                if (rr_median <= 61.5) {
                                    if (diastolic_time <= 0.43341176211833954) {
                                        votes[0] = 0;
                                    } else {
                                        votes[0] = 0;
                                    }
                                } else {
                                    votes[0] = 0;
                                }
                            } else {
                                if (num_peaks <= 132.5) {
                                    votes[0] = 0;
                                } else {
                                    votes[0] = 0;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.09462481364607811) {
                if (rr_std <= 14.36455774307251) {
                    if (diastolic_time <= 0.433302640914917) {
                        if (rr_std <= 1.7036650776863098) {
                            votes[0] = 3;
                        } else {
                            votes[0] = 5;
                        }
                    } else {
                        if (num_valleys <= 54.0) {
                            votes[0] = 1;
                        } else {
                            votes[0] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.6148615479469299) {
                        if (num_peaks <= 88.5) {
                            if (rr_median <= 83.5) {
                                votes[0] = 2;
                            } else {
                                votes[0] = 4;
                            }
                        } else {
                            if (dist_std <= 0.06289250776171684) {
                                votes[0] = 0;
                            } else {
                                votes[0] = 2;
                            }
                        }
                    } else {
                        if (num_peaks <= 131.0) {
                            if (dist_std <= 0.06247203052043915) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 1;
                            }
                        } else {
                            votes[0] = 0;
                        }
                    }
                }
            } else {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 111.5) {
                        if (rr_median <= 69.5) {
                            votes[0] = 2;
                        } else {
                            if (rr_std <= 1.0644650161266327) {
                                votes[0] = 2;
                            } else {
                                if (rr_std <= 20.462517738342285) {
                                    votes[0] = 2;
                                } else {
                                    votes[0] = 2;
                                }
                            }
                        }
                    } else {
                        votes[0] = 5;
                    }
                } else {
                    if (num_peaks <= 118.0) {
                        if (num_valleys <= 52.5) {
                            votes[0] = 5;
                        } else {
                            if (num_valleys <= 57.5) {
                                votes[0] = 2;
                            } else {
                                votes[0] = 5;
                            }
                        }
                    } else {
                        votes[0] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 1
    if (diastolic_time <= 0.2302621826529503) {
        if (rr_median <= 82.5) {
            if (rr_std <= 14.17724084854126) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.07846580073237419) {
                        if (num_peaks <= 133.0) {
                            if (rr_median <= 53.5) {
                                votes[1] = 3;
                            } else {
                                votes[1] = 5;
                            }
                        } else {
                            votes[1] = 3;
                        }
                    } else {
                        if (num_peaks <= 120.5) {
                            if (dist_std <= 0.14090599864721298) {
                                if (rr_median <= 48.75) {
                                    votes[1] = 4;
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                votes[1] = 2;
                            }
                        } else {
                            votes[1] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.17264023423194885) {
                        if (rr_std <= 0.8869863152503967) {
                            votes[1] = 3;
                        } else {
                            if (rr_std <= 11.911319255828857) {
                                votes[1] = 5;
                            } else {
                                votes[1] = 3;
                            }
                        }
                    } else {
                        votes[1] = 3;
                    }
                }
            } else {
                if (num_peaks <= 134.0) {
                    if (dist_std <= 0.11696609482169151) {
                        if (rr_std <= 20.299455642700195) {
                            if (num_valleys <= 66.0) {
                                if (num_peaks <= 109.0) {
                                    votes[1] = 4;
                                } else {
                                    votes[1] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.12473463267087936) {
                                    if (rr_median <= 63.5) {
                                        votes[1] = 4;
                                    } else {
                                        votes[1] = 3;
                                    }
                                } else {
                                    votes[1] = 4;
                                }
                            }
                        } else {
                            if (num_valleys <= 73.5) {
                                if (dist_std <= 0.09288914874196053) {
                                    if (num_valleys <= 70.5) {
                                        if (rr_std <= 54.19476890563965) {
                                            votes[1] = 4;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    } else {
                                        votes[1] = 4;
                                    }
                                } else {
                                    votes[1] = 4;
                                }
                            } else {
                                votes[1] = 4;
                            }
                        }
                    } else {
                        votes[1] = 3;
                    }
                } else {
                    if (num_valleys <= 73.5) {
                        if (diastolic_time <= 0.12260910868644714) {
                            votes[1] = 3;
                        } else {
                            votes[1] = 3;
                        }
                    } else {
                        if (rr_median <= 65.0) {
                            votes[1] = 3;
                        } else {
                            votes[1] = 5;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.0879238098859787) {
                if (diastolic_time <= 0.03483176417648792) {
                    if (num_peaks <= 136.5) {
                        if (diastolic_time <= 0.03305843472480774) {
                            votes[1] = 1;
                        } else {
                            votes[1] = 4;
                        }
                    } else {
                        votes[1] = 0;
                    }
                } else {
                    if (num_valleys <= 64.5) {
                        if (rr_std <= 26.000494956970215) {
                            if (rr_std <= 1.6796241402626038) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 1;
                            }
                        } else {
                            votes[1] = 5;
                        }
                    } else {
                        if (num_peaks <= 145.5) {
                            if (rr_std <= 2.7739559412002563) {
                                votes[1] = 1;
                            } else {
                                if (dist_std <= 0.0775267668068409) {
                                    votes[1] = 1;
                                } else {
                                    votes[1] = 1;
                                }
                            }
                        } else {
                            votes[1] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 15.633971214294434) {
                    if (diastolic_time <= 0.15559059381484985) {
                        if (rr_std <= 1.0821502804756165) {
                            votes[1] = 3;
                        } else {
                            if (diastolic_time <= 0.12295714393258095) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 1;
                            }
                        }
                    } else {
                        votes[1] = 5;
                    }
                } else {
                    if (num_peaks <= 129.5) {
                        if (dist_std <= 0.058215346187353134) {
                            if (dist_std <= 0.042157070711255074) {
                                votes[1] = 4;
                            } else {
                                votes[1] = 4;
                            }
                        } else {
                            votes[1] = 3;
                        }
                    } else {
                        if (rr_median <= 123.5) {
                            if (rr_median <= 94.5) {
                                votes[1] = 5;
                            } else {
                                votes[1] = 5;
                            }
                        } else {
                            votes[1] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05293425917625427) {
            if (num_peaks <= 108.5) {
                if (dist_std <= 0.04014609754085541) {
                    if (rr_median <= 99.5) {
                        if (num_valleys <= 49.5) {
                            votes[1] = 5;
                        } else {
                            votes[1] = 5;
                        }
                    } else {
                        votes[1] = 1;
                    }
                } else {
                    if (rr_median <= 92.0) {
                        if (rr_std <= 30.55311393737793) {
                            votes[1] = 2;
                        } else {
                            votes[1] = 1;
                        }
                    } else {
                        votes[1] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 0.27446305751800537) {
                    votes[1] = 3;
                } else {
                    if (rr_median <= 51.25) {
                        votes[1] = 3;
                    } else {
                        if (rr_std <= 7.789663076400757) {
                            votes[1] = 3;
                        } else {
                            if (rr_median <= 55.75) {
                                if (num_valleys <= 76.5) {
                                    votes[1] = 0;
                                } else {
                                    votes[1] = 0;
                                }
                            } else {
                                if (dist_std <= 0.046083780005574226) {
                                    votes[1] = 0;
                                } else {
                                    if (dist_std <= 0.04785481095314026) {
                                        votes[1] = 0;
                                    } else {
                                        votes[1] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.6350666582584381) {
                if (dist_std <= 0.09452830255031586) {
                    if (rr_std <= 15.96958303451538) {
                        if (rr_median <= 64.0) {
                            votes[1] = 3;
                        } else {
                            if (num_peaks <= 124.5) {
                                votes[1] = 5;
                            } else {
                                votes[1] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 80.5) {
                            votes[1] = 4;
                        } else {
                            if (diastolic_time <= 0.3523238003253937) {
                                if (num_peaks <= 90.5) {
                                    votes[1] = 2;
                                } else {
                                    votes[1] = 2;
                                }
                            } else {
                                votes[1] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 74.25) {
                        if (rr_median <= 69.5) {
                            if (dist_std <= 0.13735250383615494) {
                                if (dist_std <= 0.12204401567578316) {
                                    votes[1] = 2;
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                if (dist_std <= 0.1483166441321373) {
                                    votes[1] = 2;
                                } else {
                                    votes[1] = 2;
                                }
                            }
                        } else {
                            if (num_peaks <= 101.0) {
                                if (diastolic_time <= 0.5073499977588654) {
                                    votes[1] = 2;
                                } else {
                                    votes[1] = 2;
                                }
                            } else {
                                votes[1] = 2;
                            }
                        }
                    } else {
                        if (num_peaks <= 124.5) {
                            if (rr_median <= 88.5) {
                                votes[1] = 5;
                            } else {
                                votes[1] = 5;
                            }
                        } else {
                            votes[1] = 2;
                        }
                    }
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (rr_std <= 29.105377197265625) {
                        if (num_peaks <= 88.5) {
                            votes[1] = 1;
                        } else {
                            votes[1] = 5;
                        }
                    } else {
                        votes[1] = 1;
                    }
                } else {
                    votes[1] = 2;
                }
            }
        }
    }
// Decision rules for tree 2
    if (diastolic_time <= 0.2538642883300781) {
        if (num_peaks <= 131.5) {
            if (rr_std <= 14.500072002410889) {
                if (rr_median <= 102.5) {
                    if (dist_std <= 0.1408340260386467) {
                        if (dist_std <= 0.05397593043744564) {
                            if (diastolic_time <= 0.1455479860305786) {
                                votes[2] = 5;
                            } else {
                                votes[2] = 5;
                            }
                        } else {
                            if (rr_std <= 8.145707130432129) {
                                if (rr_median <= 75.0) {
                                    if (num_peaks <= 126.5) {
                                        if (rr_median <= 50.75) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    } else {
                                        votes[2] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 0.16641546040773392) {
                                        if (num_valleys <= 64.0) {
                                            votes[2] = 1;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    } else {
                                        votes[2] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.0995325893163681) {
                                    votes[2] = 1;
                                } else {
                                    votes[2] = 1;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.21177777647972107) {
                            votes[2] = 4;
                        } else {
                            votes[2] = 2;
                        }
                    }
                } else {
                    if (dist_std <= 0.04046546667814255) {
                        votes[2] = 4;
                    } else {
                        if (rr_std <= 3.1455299854278564) {
                            votes[2] = 1;
                        } else {
                            votes[2] = 1;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.1197422482073307) {
                    if (rr_median <= 75.5) {
                        if (rr_std <= 19.443531036376953) {
                            if (rr_median <= 65.75) {
                                if (rr_median <= 56.5) {
                                    votes[2] = 4;
                                } else {
                                    votes[2] = 3;
                                }
                            } else {
                                votes[2] = 4;
                            }
                        } else {
                            if (num_valleys <= 72.5) {
                                if (rr_median <= 55.75) {
                                    votes[2] = 4;
                                } else {
                                    votes[2] = 4;
                                }
                            } else {
                                votes[2] = 4;
                            }
                        }
                    } else {
                        if (dist_std <= 0.07033837959170341) {
                            if (num_valleys <= 73.5) {
                                if (rr_median <= 79.5) {
                                    votes[2] = 3;
                                } else {
                                    if (dist_std <= 0.0488481055945158) {
                                        if (num_valleys <= 65.5) {
                                            votes[2] = 4;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 48.33365058898926) {
                                            votes[2] = 1;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 113.25) {
                                    votes[2] = 3;
                                } else {
                                    votes[2] = 1;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.06911489740014076) {
                                votes[2] = 3;
                            } else {
                                if (num_valleys <= 69.5) {
                                    votes[2] = 5;
                                } else {
                                    votes[2] = 5;
                                }
                            }
                        }
                    }
                } else {
                    votes[2] = 3;
                }
            }
        } else {
            if (rr_median <= 65.75) {
                if (rr_std <= 21.548239707946777) {
                    if (num_peaks <= 146.5) {
                        votes[2] = 3;
                    } else {
                        votes[2] = 3;
                    }
                } else {
                    votes[2] = 1;
                }
            } else {
                if (rr_median <= 102.5) {
                    if (diastolic_time <= 0.020783504471182823) {
                        votes[2] = 0;
                    } else {
                        if (rr_std <= 34.81846046447754) {
                            if (num_valleys <= 66.5) {
                                votes[2] = 3;
                            } else {
                                if (rr_std <= 11.389528751373291) {
                                    votes[2] = 3;
                                } else {
                                    if (num_valleys <= 80.5) {
                                        if (diastolic_time <= 0.10083608329296112) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    } else {
                                        votes[2] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[2] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.11196472495794296) {
                        if (rr_std <= 30.45345401763916) {
                            votes[2] = 1;
                        } else {
                            votes[2] = 1;
                        }
                    } else {
                        votes[2] = 1;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 88.25) {
                if (dist_std <= 0.09462481364607811) {
                    if (rr_std <= 16.663230895996094) {
                        if (rr_std <= 13.463215351104736) {
                            if (rr_std <= 4.401926040649414) {
                                votes[2] = 5;
                            } else {
                                votes[2] = 5;
                            }
                        } else {
                            votes[2] = 0;
                        }
                    } else {
                        if (rr_std <= 39.5175838470459) {
                            if (diastolic_time <= 0.32668840885162354) {
                                if (rr_median <= 81.75) {
                                    votes[2] = 4;
                                } else {
                                    votes[2] = 2;
                                }
                            } else {
                                if (rr_median <= 78.25) {
                                    if (diastolic_time <= 0.5384761989116669) {
                                        votes[2] = 2;
                                    } else {
                                        votes[2] = 2;
                                    }
                                } else {
                                    votes[2] = 2;
                                }
                            }
                        } else {
                            votes[2] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 117.5) {
                        if (diastolic_time <= 0.5116166770458221) {
                            if (rr_median <= 69.5) {
                                if (diastolic_time <= 0.32323913276195526) {
                                    votes[2] = 2;
                                } else {
                                    votes[2] = 2;
                                }
                            } else {
                                if (diastolic_time <= 0.31036923825740814) {
                                    votes[2] = 2;
                                } else {
                                    votes[2] = 2;
                                }
                            }
                        } else {
                            votes[2] = 2;
                        }
                    } else {
                        votes[2] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.6350666582584381) {
                    if (rr_median <= 98.5) {
                        if (rr_std <= 19.750720977783203) {
                            votes[2] = 4;
                        } else {
                            votes[2] = 4;
                        }
                    } else {
                        if (num_valleys <= 51.0) {
                            votes[2] = 5;
                        } else {
                            votes[2] = 4;
                        }
                    }
                } else {
                    if (num_peaks <= 99.0) {
                        votes[2] = 1;
                    } else {
                        votes[2] = 5;
                    }
                }
            }
        } else {
            if (dist_std <= 0.060476282611489296) {
                if (rr_median <= 54.75) {
                    if (rr_std <= 15.92094373703003) {
                        votes[2] = 3;
                    } else {
                        votes[2] = 0;
                    }
                } else {
                    if (diastolic_time <= 0.6487272679805756) {
                        if (num_valleys <= 85.5) {
                            if (dist_std <= 0.02537122182548046) {
                                votes[2] = 0;
                            } else {
                                votes[2] = 0;
                            }
                        } else {
                            votes[2] = 0;
                        }
                    } else {
                        votes[2] = 0;
                    }
                }
            } else {
                if (diastolic_time <= 0.8351111114025116) {
                    if (rr_median <= 84.75) {
                        if (rr_median <= 72.0) {
                            if (num_peaks <= 136.0) {
                                votes[2] = 5;
                            } else {
                                votes[2] = 0;
                            }
                        } else {
                            votes[2] = 3;
                        }
                    } else {
                        votes[2] = 5;
                    }
                } else {
                    votes[2] = 1;
                }
            }
        }
    }
// Decision rules for tree 3
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 86.25) {
            if (num_peaks <= 135.5) {
                if (rr_std <= 16.006247520446777) {
                    if (diastolic_time <= 0.04966096766293049) {
                        if (num_peaks <= 116.5) {
                            votes[3] = 5;
                        } else {
                            votes[3] = 4;
                        }
                    } else {
                        if (rr_median <= 68.75) {
                            if (rr_std <= 0.63893261551857) {
                                votes[3] = 1;
                            } else {
                                if (dist_std <= 0.03625083900988102) {
                                    votes[3] = 3;
                                } else {
                                    if (num_peaks <= 121.5) {
                                        votes[3] = 3;
                                    } else {
                                        if (num_peaks <= 126.0) {
                                            votes[3] = 1;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.09974442049860954) {
                                votes[3] = 3;
                            } else {
                                if (diastolic_time <= 0.12667540460824966) {
                                    votes[3] = 5;
                                } else {
                                    votes[3] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.11605015024542809) {
                        if (num_valleys <= 73.0) {
                            if (rr_std <= 20.305954933166504) {
                                if (rr_std <= 19.521360397338867) {
                                    votes[3] = 4;
                                } else {
                                    votes[3] = 3;
                                }
                            } else {
                                if (num_peaks <= 124.5) {
                                    votes[3] = 4;
                                } else {
                                    if (diastolic_time <= 0.1248704381287098) {
                                        votes[3] = 4;
                                    } else {
                                        if (rr_median <= 77.5) {
                                            votes[3] = 4;
                                        } else {
                                            votes[3] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 22.55976390838623) {
                                votes[3] = 4;
                            } else {
                                votes[3] = 1;
                            }
                        }
                    } else {
                        votes[3] = 3;
                    }
                }
            } else {
                if (rr_median <= 76.25) {
                    if (dist_std <= 0.07013698667287827) {
                        if (dist_std <= 0.0316521842032671) {
                            votes[3] = 3;
                        } else {
                            votes[3] = 3;
                        }
                    } else {
                        votes[3] = 1;
                    }
                } else {
                    votes[3] = 5;
                }
            }
        } else {
            if (dist_std <= 0.03593516908586025) {
                if (num_peaks <= 128.0) {
                    if (num_peaks <= 104.5) {
                        votes[3] = 4;
                    } else {
                        votes[3] = 4;
                    }
                } else {
                    if (rr_median <= 124.0) {
                        votes[3] = 5;
                    } else {
                        votes[3] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.012326284311711788) {
                    votes[3] = 0;
                } else {
                    if (rr_median <= 99.5) {
                        if (rr_median <= 90.25) {
                            if (num_peaks <= 112.5) {
                                votes[3] = 1;
                            } else {
                                if (dist_std <= 0.09891689941287041) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 1;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.12221627682447433) {
                                if (diastolic_time <= 0.07384704425930977) {
                                    votes[3] = 1;
                                } else {
                                    votes[3] = 3;
                                }
                            } else {
                                if (num_peaks <= 119.0) {
                                    votes[3] = 5;
                                } else {
                                    votes[3] = 5;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 48.5) {
                            votes[3] = 3;
                        } else {
                            if (diastolic_time <= 0.06032452918589115) {
                                if (num_valleys <= 69.5) {
                                    votes[3] = 1;
                                } else {
                                    votes[3] = 1;
                                }
                            } else {
                                if (rr_std <= 2.395332455635071) {
                                    votes[3] = 1;
                                } else {
                                    if (dist_std <= 0.04204036109149456) {
                                        votes[3] = 1;
                                    } else {
                                        if (num_valleys <= 76.5) {
                                            votes[3] = 1;
                                        } else {
                                            votes[3] = 5;
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
        if (num_valleys <= 69.5) {
            if (rr_median <= 87.5) {
                if (rr_std <= 38.04090881347656) {
                    if (dist_std <= 0.13552793115377426) {
                        if (rr_median <= 71.0) {
                            if (rr_std <= 20.615077018737793) {
                                if (diastolic_time <= 0.43966665863990784) {
                                    if (dist_std <= 0.12446804344654083) {
                                        if (num_peaks <= 110.5) {
                                            votes[3] = 2;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    } else {
                                        votes[3] = 3;
                                    }
                                } else {
                                    if (rr_std <= 13.463215351104736) {
                                        votes[3] = 5;
                                    } else {
                                        votes[3] = 0;
                                    }
                                }
                            } else {
                                votes[3] = 2;
                            }
                        } else {
                            if (dist_std <= 0.04591881297528744) {
                                votes[3] = 5;
                            } else {
                                if (num_valleys <= 54.5) {
                                    if (diastolic_time <= 0.5076166689395905) {
                                        if (num_valleys <= 46.5) {
                                            votes[3] = 2;
                                        } else {
                                            votes[3] = 2;
                                        }
                                    } else {
                                        votes[3] = 2;
                                    }
                                } else {
                                    if (num_valleys <= 56.0) {
                                        votes[3] = 4;
                                    } else {
                                        if (rr_median <= 77.5) {
                                            votes[3] = 2;
                                        } else {
                                            votes[3] = 2;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 40.0) {
                            votes[3] = 2;
                        } else {
                            votes[3] = 2;
                        }
                    }
                } else {
                    if (dist_std <= 0.07402665540575981) {
                        votes[3] = 1;
                    } else {
                        votes[3] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.6350666582584381) {
                    if (rr_std <= 2.3321927189826965) {
                        votes[3] = 5;
                    } else {
                        if (dist_std <= 0.07078893855214119) {
                            if (rr_median <= 98.0) {
                                votes[3] = 4;
                            } else {
                                votes[3] = 4;
                            }
                        } else {
                            votes[3] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 4.59311056137085) {
                        votes[3] = 5;
                    } else {
                        if (num_valleys <= 61.5) {
                            votes[3] = 1;
                        } else {
                            votes[3] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06048966757953167) {
                if (diastolic_time <= 0.24830107390880585) {
                    votes[3] = 5;
                } else {
                    if (rr_std <= 7.789663076400757) {
                        votes[3] = 3;
                    } else {
                        if (rr_median <= 55.75) {
                            if (num_peaks <= 142.5) {
                                votes[3] = 0;
                            } else {
                                votes[3] = 3;
                            }
                        } else {
                            if (rr_std <= 47.62920570373535) {
                                if (rr_std <= 8.98346996307373) {
                                    votes[3] = 0;
                                } else {
                                    if (diastolic_time <= 0.28202298283576965) {
                                        votes[3] = 0;
                                    } else {
                                        if (num_valleys <= 74.5) {
                                            votes[3] = 0;
                                        } else {
                                            votes[3] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[3] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8351111114025116) {
                    if (num_peaks <= 129.5) {
                        if (rr_median <= 83.5) {
                            if (dist_std <= 0.08398737013339996) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 1;
                            }
                        } else {
                            votes[3] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.4815833419561386) {
                            if (num_peaks <= 141.0) {
                                votes[3] = 3;
                            } else {
                                votes[3] = 3;
                            }
                        } else {
                            votes[3] = 0;
                        }
                    }
                } else {
                    votes[3] = 1;
                }
            }
        }
    }
// Decision rules for tree 4
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 65.5) {
            if (rr_std <= 14.17724084854126) {
                if (dist_std <= 0.05727092735469341) {
                    if (num_valleys <= 75.5) {
                        votes[4] = 3;
                    } else {
                        votes[4] = 3;
                    }
                } else {
                    if (num_peaks <= 113.5) {
                        votes[4] = 3;
                    } else {
                        if (diastolic_time <= 0.06667304039001465) {
                            votes[4] = 3;
                        } else {
                            if (rr_median <= 55.25) {
                                votes[4] = 1;
                            } else {
                                votes[4] = 3;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (diastolic_time <= 0.06394447572529316) {
                        votes[4] = 4;
                    } else {
                        if (num_peaks <= 79.5) {
                            votes[4] = 4;
                        } else {
                            if (num_valleys <= 68.5) {
                                votes[4] = 3;
                            } else {
                                if (num_valleys <= 71.5) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.06404743902385235) {
                        votes[4] = 3;
                    } else {
                        votes[4] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 99.25) {
                if (rr_std <= 18.38014793395996) {
                    if (rr_median <= 67.5) {
                        votes[4] = 2;
                    } else {
                        if (rr_std <= 11.810743808746338) {
                            if (rr_std <= 0.713621199131012) {
                                if (diastolic_time <= 0.1533936709165573) {
                                    votes[4] = 3;
                                } else {
                                    if (diastolic_time <= 0.20379486680030823) {
                                        votes[4] = 5;
                                    } else {
                                        votes[4] = 2;
                                    }
                                }
                            } else {
                                if (num_valleys <= 72.5) {
                                    if (diastolic_time <= 0.11409588903188705) {
                                        if (diastolic_time <= 0.06667561829090118) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 1;
                                        }
                                    } else {
                                        votes[4] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 0.16728520393371582) {
                                        if (rr_median <= 88.0) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    } else {
                                        votes[4] = 3;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 74.5) {
                                if (rr_median <= 82.5) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 3;
                                }
                            } else {
                                if (dist_std <= 0.03361162543296814) {
                                    votes[4] = 5;
                                } else {
                                    votes[4] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.11432542279362679) {
                        if (diastolic_time <= 0.03811683692038059) {
                            if (rr_median <= 73.5) {
                                votes[4] = 4;
                            } else {
                                votes[4] = 2;
                            }
                        } else {
                            if (dist_std <= 0.07669612020254135) {
                                if (rr_std <= 38.044015884399414) {
                                    if (num_peaks <= 124.5) {
                                        votes[4] = 1;
                                    } else {
                                        votes[4] = 5;
                                    }
                                } else {
                                    votes[4] = 1;
                                }
                            } else {
                                votes[4] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 131.5) {
                            if (dist_std <= 0.04994434490799904) {
                                if (num_valleys <= 66.0) {
                                    votes[4] = 4;
                                } else {
                                    if (num_peaks <= 121.5) {
                                        votes[4] = 4;
                                    } else {
                                        votes[4] = 4;
                                    }
                                }
                            } else {
                                votes[4] = 4;
                            }
                        } else {
                            votes[4] = 5;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.031201216392219067) {
                    if (rr_std <= 47.5949764251709) {
                        votes[4] = 4;
                    } else {
                        votes[4] = 4;
                    }
                } else {
                    if (num_valleys <= 62.0) {
                        if (dist_std <= 0.0564637016505003) {
                            votes[4] = 4;
                        } else {
                            if (num_valleys <= 46.5) {
                                votes[4] = 3;
                            } else {
                                votes[4] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.10176902636885643) {
                            if (diastolic_time <= 0.03210863471031189) {
                                votes[4] = 1;
                            } else {
                                if (rr_std <= 2.8436498641967773) {
                                    votes[4] = 1;
                                } else {
                                    if (num_valleys <= 69.5) {
                                        votes[4] = 1;
                                    } else {
                                        votes[4] = 1;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 11.547998428344727) {
                                votes[4] = 1;
                            } else {
                                votes[4] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.6426666676998138) {
                if (rr_std <= 0.6796177625656128) {
                    if (dist_std <= 0.09838484227657318) {
                        votes[4] = 3;
                    } else {
                        if (dist_std <= 0.17221015691757202) {
                            votes[4] = 2;
                        } else {
                            votes[4] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 11.769414901733398) {
                        if (rr_std <= 1.0798233449459076) {
                            votes[4] = 5;
                        } else {
                            if (num_peaks <= 105.5) {
                                votes[4] = 5;
                            } else {
                                votes[4] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 16.135165691375732) {
                            votes[4] = 0;
                        } else {
                            if (rr_median <= 87.5) {
                                if (dist_std <= 0.04098360240459442) {
                                    votes[4] = 5;
                                } else {
                                    if (num_peaks <= 105.0) {
                                        if (num_valleys <= 52.0) {
                                            votes[4] = 2;
                                        } else {
                                            votes[4] = 2;
                                        }
                                    } else {
                                        votes[4] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 44.53691482543945) {
                                    if (rr_median <= 108.0) {
                                        if (rr_median <= 96.25) {
                                            votes[4] = 4;
                                        } else {
                                            votes[4] = 4;
                                        }
                                    } else {
                                        votes[4] = 2;
                                    }
                                } else {
                                    votes[4] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    votes[4] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[4] = 1;
                    } else {
                        votes[4] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.059773705899715424) {
                if (rr_median <= 56.25) {
                    if (rr_std <= 12.114569664001465) {
                        votes[4] = 3;
                    } else {
                        votes[4] = 0;
                    }
                } else {
                    if (rr_std <= 8.712254524230957) {
                        votes[4] = 0;
                    } else {
                        if (num_valleys <= 85.5) {
                            if (diastolic_time <= 0.629666656255722) {
                                if (num_peaks <= 132.5) {
                                    if (diastolic_time <= 0.45096732676029205) {
                                        votes[4] = 0;
                                    } else {
                                        votes[4] = 0;
                                    }
                                } else {
                                    votes[4] = 0;
                                }
                            } else {
                                votes[4] = 0;
                            }
                        } else {
                            votes[4] = 0;
                        }
                    }
                }
            } else {
                if (rr_std <= 31.53644847869873) {
                    if (dist_std <= 0.07209363207221031) {
                        votes[4] = 5;
                    } else {
                        votes[4] = 3;
                    }
                } else {
                    votes[4] = 1;
                }
            }
        }
    }
// Decision rules for tree 5
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 99.5) {
            if (rr_std <= 14.180799007415771) {
                if (rr_median <= 75.5) {
                    if (dist_std <= 0.13722970336675644) {
                        if (num_peaks <= 132.5) {
                            if (rr_std <= 9.031359672546387) {
                                if (dist_std <= 0.12136818468570709) {
                                    if (diastolic_time <= 0.07219212129712105) {
                                        votes[5] = 3;
                                    } else {
                                        if (num_peaks <= 127.5) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 66.5) {
                                        votes[5] = 3;
                                    } else {
                                        votes[5] = 5;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.054029516875743866) {
                                    votes[5] = 5;
                                } else {
                                    votes[5] = 1;
                                }
                            }
                        } else {
                            if (dist_std <= 0.07175744697451591) {
                                if (rr_median <= 63.25) {
                                    votes[5] = 3;
                                } else {
                                    votes[5] = 3;
                                }
                            } else {
                                votes[5] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 1.917849987745285) {
                            votes[5] = 2;
                        } else {
                            votes[5] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.034256696701049805) {
                        votes[5] = 0;
                    } else {
                        if (diastolic_time <= 0.12970967590808868) {
                            if (num_valleys <= 66.0) {
                                votes[5] = 5;
                            } else {
                                if (num_peaks <= 135.5) {
                                    votes[5] = 3;
                                } else {
                                    votes[5] = 5;
                                }
                            }
                        } else {
                            if (num_valleys <= 59.5) {
                                votes[5] = 1;
                            } else {
                                if (num_peaks <= 130.5) {
                                    if (dist_std <= 0.06114581413567066) {
                                        votes[5] = 5;
                                    } else {
                                        votes[5] = 5;
                                    }
                                } else {
                                    votes[5] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.03923880495131016) {
                    if (num_valleys <= 70.5) {
                        votes[5] = 4;
                    } else {
                        votes[5] = 0;
                    }
                } else {
                    if (diastolic_time <= 0.12177366390824318) {
                        if (rr_std <= 20.760157585144043) {
                            if (num_valleys <= 61.5) {
                                votes[5] = 1;
                            } else {
                                if (num_valleys <= 73.0) {
                                    votes[5] = 3;
                                } else {
                                    votes[5] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 110.5) {
                                votes[5] = 5;
                            } else {
                                if (num_peaks <= 137.0) {
                                    if (dist_std <= 0.08146258816123009) {
                                        if (dist_std <= 0.04643829166889191) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 1;
                                        }
                                    } else {
                                        votes[5] = 3;
                                    }
                                } else {
                                    if (rr_std <= 30.256528854370117) {
                                        votes[5] = 1;
                                    } else {
                                        votes[5] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 55.5) {
                            votes[5] = 3;
                        } else {
                            if (num_peaks <= 135.5) {
                                if (dist_std <= 0.06025453843176365) {
                                    if (diastolic_time <= 0.21317608654499054) {
                                        if (num_valleys <= 72.5) {
                                            votes[5] = 4;
                                        } else {
                                            votes[5] = 4;
                                        }
                                    } else {
                                        votes[5] = 4;
                                    }
                                } else {
                                    if (num_valleys <= 70.5) {
                                        votes[5] = 3;
                                    } else {
                                        votes[5] = 5;
                                    }
                                }
                            } else {
                                votes[5] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 114.5) {
                if (dist_std <= 0.03879619762301445) {
                    votes[5] = 4;
                } else {
                    if (rr_std <= 39.50735664367676) {
                        if (diastolic_time <= 0.04123798385262489) {
                            votes[5] = 1;
                        } else {
                            votes[5] = 1;
                        }
                    } else {
                        if (rr_median <= 128.0) {
                            votes[5] = 4;
                        } else {
                            votes[5] = 3;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.027160183526575565) {
                    votes[5] = 3;
                } else {
                    if (dist_std <= 0.031196491792798042) {
                        votes[5] = 5;
                    } else {
                        if (dist_std <= 0.054077424108982086) {
                            if (num_peaks <= 144.5) {
                                votes[5] = 1;
                            } else {
                                votes[5] = 1;
                            }
                        } else {
                            if (dist_std <= 0.07379064708948135) {
                                votes[5] = 5;
                            } else {
                                if (rr_median <= 115.5) {
                                    votes[5] = 1;
                                } else {
                                    votes[5] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_time <= 0.8301111161708832) {
                if (rr_median <= 88.5) {
                    if (dist_std <= 0.09422287717461586) {
                        if (rr_std <= 16.663230895996094) {
                            if (rr_std <= 11.753142356872559) {
                                if (rr_median <= 67.75) {
                                    votes[5] = 3;
                                } else {
                                    votes[5] = 5;
                                }
                            } else {
                                votes[5] = 0;
                            }
                        } else {
                            if (rr_std <= 33.76094627380371) {
                                if (num_peaks <= 88.5) {
                                    votes[5] = 2;
                                } else {
                                    if (diastolic_time <= 0.3664069324731827) {
                                        votes[5] = 2;
                                    } else {
                                        votes[5] = 2;
                                    }
                                }
                            } else {
                                votes[5] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 0.6986072361469269) {
                            if (diastolic_time <= 0.5084166526794434) {
                                if (rr_median <= 69.5) {
                                    votes[5] = 2;
                                } else {
                                    votes[5] = 2;
                                }
                            } else {
                                votes[5] = 2;
                            }
                        } else {
                            if (rr_std <= 13.263487339019775) {
                                votes[5] = 5;
                            } else {
                                if (diastolic_time <= 0.3565912991762161) {
                                    votes[5] = 2;
                                } else {
                                    votes[5] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.918952226638794) {
                        if (rr_std <= 1.4705603122711182) {
                            votes[5] = 5;
                        } else {
                            votes[5] = 5;
                        }
                    } else {
                        if (num_valleys <= 45.5) {
                            votes[5] = 5;
                        } else {
                            if (rr_median <= 98.5) {
                                votes[5] = 4;
                            } else {
                                votes[5] = 2;
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 0.055323489010334015) {
                    votes[5] = 1;
                } else {
                    votes[5] = 1;
                }
            }
        } else {
            if (dist_std <= 0.060476282611489296) {
                if (rr_std <= 8.07284927368164) {
                    votes[5] = 5;
                } else {
                    if (rr_median <= 55.75) {
                        if (rr_std <= 11.857729434967041) {
                            votes[5] = 3;
                        } else {
                            if (dist_std <= 0.04515806585550308) {
                                votes[5] = 0;
                            } else {
                                votes[5] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.6642000079154968) {
                            if (diastolic_time <= 0.2994188070297241) {
                                votes[5] = 0;
                            } else {
                                votes[5] = 0;
                            }
                        } else {
                            votes[5] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8351111114025116) {
                    if (diastolic_time <= 0.4815833419561386) {
                        if (dist_std <= 0.07258879765868187) {
                            votes[5] = 5;
                        } else {
                            votes[5] = 3;
                        }
                    } else {
                        votes[5] = 0;
                    }
                } else {
                    votes[5] = 1;
                }
            }
        }
    }
// Decision rules for tree 6
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 82.75) {
            if (rr_std <= 14.17724084854126) {
                if (rr_median <= 68.75) {
                    if (rr_std <= 9.526742935180664) {
                        if (diastolic_time <= 0.15031540393829346) {
                            votes[6] = 3;
                        } else {
                            votes[6] = 3;
                        }
                    } else {
                        if (rr_std <= 10.665387630462646) {
                            if (rr_median <= 52.5) {
                                votes[6] = 4;
                            } else {
                                votes[6] = 1;
                            }
                        } else {
                            if (rr_median <= 55.25) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 113.5) {
                        votes[6] = 3;
                    } else {
                        if (num_peaks <= 130.5) {
                            votes[6] = 5;
                        } else {
                            votes[6] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (diastolic_time <= 0.0625236164778471) {
                        if (num_valleys <= 55.5) {
                            votes[6] = 4;
                        } else {
                            votes[6] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.11674128845334053) {
                            if (diastolic_time <= 0.08831110969185829) {
                                if (num_valleys <= 70.0) {
                                    votes[6] = 3;
                                } else {
                                    votes[6] = 3;
                                }
                            } else {
                                votes[6] = 5;
                            }
                        } else {
                            if (dist_std <= 0.06439715251326561) {
                                if (num_valleys <= 72.5) {
                                    if (dist_std <= 0.02985049318522215) {
                                        votes[6] = 4;
                                    } else {
                                        votes[6] = 4;
                                    }
                                } else {
                                    votes[6] = 4;
                                }
                            } else {
                                votes[6] = 3;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 73.5) {
                        votes[6] = 3;
                    } else {
                        if (rr_std <= 21.49569606781006) {
                            votes[6] = 3;
                        } else {
                            votes[6] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.034115033224225044) {
                if (num_peaks <= 127.5) {
                    if (rr_std <= 43.21678924560547) {
                        votes[6] = 4;
                    } else {
                        votes[6] = 4;
                    }
                } else {
                    votes[6] = 5;
                }
            } else {
                if (rr_median <= 98.5) {
                    if (diastolic_time <= 0.1596766710281372) {
                        if (num_peaks <= 142.5) {
                            if (rr_std <= 38.044015884399414) {
                                if (dist_std <= 0.10594991222023964) {
                                    if (rr_median <= 86.25) {
                                        if (num_valleys <= 70.5) {
                                            votes[6] = 4;
                                        } else {
                                            votes[6] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 1.862454891204834) {
                                            votes[6] = 5;
                                        } else {
                                            votes[6] = 1;
                                        }
                                    }
                                } else {
                                    votes[6] = 1;
                                }
                            } else {
                                votes[6] = 1;
                            }
                        } else {
                            votes[6] = 0;
                        }
                    } else {
                        if (rr_median <= 91.75) {
                            votes[6] = 5;
                        } else {
                            votes[6] = 5;
                        }
                    }
                } else {
                    if (num_valleys <= 59.0) {
                        if (dist_std <= 0.07312018051743507) {
                            if (diastolic_time <= 0.10307272896170616) {
                                votes[6] = 4;
                            } else {
                                votes[6] = 4;
                            }
                        } else {
                            votes[6] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.03138450346887112) {
                            votes[6] = 3;
                        } else {
                            if (diastolic_time <= 0.08774392679333687) {
                                votes[6] = 1;
                            } else {
                                if (rr_std <= 13.420379161834717) {
                                    if (rr_std <= 1.0594131350517273) {
                                        votes[6] = 1;
                                    } else {
                                        votes[6] = 1;
                                    }
                                } else {
                                    votes[6] = 5;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 70.5) {
            if (rr_median <= 88.5) {
                if (num_peaks <= 105.5) {
                    if (diastolic_time <= 0.5076166689395905) {
                        if (dist_std <= 0.09838484227657318) {
                            if (rr_std <= 14.139047622680664) {
                                votes[6] = 5;
                            } else {
                                if (num_peaks <= 80.5) {
                                    votes[6] = 4;
                                } else {
                                    if (num_valleys <= 48.0) {
                                        votes[6] = 4;
                                    } else {
                                        votes[6] = 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 67.5) {
                                if (diastolic_time <= 0.24907836318016052) {
                                    votes[6] = 2;
                                } else {
                                    votes[6] = 2;
                                }
                            } else {
                                votes[6] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 21.091126441955566) {
                            if (rr_std <= 6.708921432495117) {
                                votes[6] = 5;
                            } else {
                                votes[6] = 5;
                            }
                        } else {
                            if (rr_std <= 38.265153884887695) {
                                votes[6] = 2;
                            } else {
                                votes[6] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.48377497494220734) {
                        votes[6] = 2;
                    } else {
                        if (dist_std <= 0.057350100949406624) {
                            if (rr_median <= 68.75) {
                                votes[6] = 0;
                            } else {
                                votes[6] = 0;
                            }
                        } else {
                            if (rr_std <= 0.9221212863922119) {
                                if (rr_std <= 0.6633186936378479) {
                                    votes[6] = 2;
                                } else {
                                    votes[6] = 5;
                                }
                            } else {
                                votes[6] = 3;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.5857142806053162) {
                    if (rr_std <= 11.627455711364746) {
                        votes[6] = 5;
                    } else {
                        if (rr_median <= 98.5) {
                            if (num_valleys <= 51.0) {
                                votes[6] = 4;
                            } else {
                                votes[6] = 4;
                            }
                        } else {
                            votes[6] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 8.918952226638794) {
                        votes[6] = 1;
                    } else {
                        if (num_valleys <= 52.0) {
                            votes[6] = 1;
                        } else {
                            votes[6] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.05531284213066101) {
                if (rr_std <= 7.789663076400757) {
                    votes[6] = 3;
                } else {
                    if (diastolic_time <= 0.2757241427898407) {
                        votes[6] = 0;
                    } else {
                        if (rr_median <= 55.75) {
                            if (num_valleys <= 77.5) {
                                votes[6] = 0;
                            } else {
                                votes[6] = 0;
                            }
                        } else {
                            if (num_peaks <= 132.5) {
                                if (num_peaks <= 127.5) {
                                    votes[6] = 0;
                                } else {
                                    votes[6] = 0;
                                }
                            } else {
                                votes[6] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 4.844754219055176) {
                    votes[6] = 5;
                } else {
                    if (num_peaks <= 133.0) {
                        votes[6] = 1;
                    } else {
                        if (dist_std <= 0.0748080238699913) {
                            votes[6] = 0;
                        } else {
                            votes[6] = 2;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 7
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 98.5) {
            if (rr_std <= 15.967272281646729) {
                if (rr_median <= 66.5) {
                    if (num_peaks <= 131.5) {
                        if (num_peaks <= 128.5) {
                            if (rr_std <= 9.1414475440979) {
                                if (rr_median <= 49.25) {
                                    votes[7] = 3;
                                } else {
                                    votes[7] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.08765942975878716) {
                                    votes[7] = 4;
                                } else {
                                    if (rr_std <= 10.665387630462646) {
                                        votes[7] = 1;
                                    } else {
                                        votes[7] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[7] = 5;
                        }
                    } else {
                        if (rr_std <= 10.076533794403076) {
                            votes[7] = 3;
                        } else {
                            votes[7] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 67.5) {
                        votes[7] = 2;
                    } else {
                        if (diastolic_time <= 0.033569009974598885) {
                            votes[7] = 0;
                        } else {
                            if (num_peaks <= 107.5) {
                                if (rr_median <= 89.5) {
                                    if (dist_std <= 0.12845226377248764) {
                                        votes[7] = 1;
                                    } else {
                                        votes[7] = 2;
                                    }
                                } else {
                                    votes[7] = 5;
                                }
                            } else {
                                if (num_peaks <= 137.0) {
                                    if (num_peaks <= 128.5) {
                                        if (diastolic_time <= 0.1379685401916504) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 8.72032880783081) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    }
                                } else {
                                    votes[7] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (dist_std <= 0.024614712223410606) {
                        votes[7] = 3;
                    } else {
                        if (dist_std <= 0.058215346187353134) {
                            if (num_valleys <= 73.5) {
                                if (rr_std <= 28.429798126220703) {
                                    if (rr_median <= 75.25) {
                                        if (rr_median <= 66.25) {
                                            votes[7] = 4;
                                        } else {
                                            votes[7] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.13158470392227173) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 4;
                                        }
                                    }
                                } else {
                                    votes[7] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.13532797992229462) {
                                    votes[7] = 1;
                                } else {
                                    votes[7] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 74.25) {
                                if (diastolic_time <= 0.11093442142009735) {
                                    if (rr_median <= 70.5) {
                                        votes[7] = 4;
                                    } else {
                                        votes[7] = 4;
                                    }
                                } else {
                                    votes[7] = 2;
                                }
                            } else {
                                if (num_peaks <= 119.5) {
                                    votes[7] = 5;
                                } else {
                                    votes[7] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 67.5) {
                        if (dist_std <= 0.07013698667287827) {
                            votes[7] = 3;
                        } else {
                            votes[7] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.08224999904632568) {
                            votes[7] = 1;
                        } else {
                            if (num_valleys <= 71.0) {
                                votes[7] = 5;
                            } else {
                                votes[7] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 93.5) {
                if (num_peaks <= 86.5) {
                    votes[7] = 3;
                } else {
                    votes[7] = 4;
                }
            } else {
                if (diastolic_time <= 0.013421053066849709) {
                    votes[7] = 3;
                } else {
                    if (dist_std <= 0.030709315091371536) {
                        votes[7] = 4;
                    } else {
                        if (rr_std <= 89.32001495361328) {
                            if (diastolic_time <= 0.10200454294681549) {
                                if (num_peaks <= 114.0) {
                                    votes[7] = 1;
                                } else {
                                    votes[7] = 1;
                                }
                            } else {
                                if (rr_median <= 115.0) {
                                    votes[7] = 5;
                                } else {
                                    if (num_peaks <= 124.0) {
                                        votes[7] = 1;
                                    } else {
                                        votes[7] = 1;
                                    }
                                }
                            }
                        } else {
                            votes[7] = 4;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 81.75) {
                if (rr_std <= 0.6796177625656128) {
                    if (diastolic_time <= 0.5084166526794434) {
                        if (rr_std <= 0.3910631388425827) {
                            votes[7] = 2;
                        } else {
                            votes[7] = 2;
                        }
                    } else {
                        votes[7] = 2;
                    }
                } else {
                    if (rr_std <= 20.421506881713867) {
                        if (dist_std <= 0.04910394549369812) {
                            if (num_valleys <= 51.0) {
                                votes[7] = 5;
                            } else {
                                votes[7] = 0;
                            }
                        } else {
                            if (rr_median <= 68.75) {
                                votes[7] = 5;
                            } else {
                                votes[7] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 38.04090881347656) {
                            if (dist_std <= 0.048179714009165764) {
                                votes[7] = 2;
                            } else {
                                if (dist_std <= 0.05556496046483517) {
                                    votes[7] = 2;
                                } else {
                                    votes[7] = 2;
                                }
                            }
                        } else {
                            votes[7] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6002857089042664) {
                    if (diastolic_time <= 0.3742285817861557) {
                        if (num_peaks <= 93.5) {
                            if (num_valleys <= 48.0) {
                                if (num_valleys <= 43.5) {
                                    votes[7] = 5;
                                } else {
                                    votes[7] = 2;
                                }
                            } else {
                                votes[7] = 4;
                            }
                        } else {
                            votes[7] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.45313236117362976) {
                            votes[7] = 4;
                        } else {
                            votes[7] = 4;
                        }
                    }
                } else {
                    if (num_peaks <= 114.5) {
                        votes[7] = 1;
                    } else {
                        votes[7] = 5;
                    }
                }
            }
        } else {
            if (dist_std <= 0.060476282611489296) {
                if (rr_median <= 55.0) {
                    if (rr_std <= 11.745954990386963) {
                        votes[7] = 3;
                    } else {
                        votes[7] = 0;
                    }
                } else {
                    if (rr_std <= 8.07284927368164) {
                        votes[7] = 5;
                    } else {
                        if (rr_median <= 61.25) {
                            if (dist_std <= 0.04043050296604633) {
                                votes[7] = 0;
                            } else {
                                votes[7] = 0;
                            }
                        } else {
                            if (dist_std <= 0.046083780005574226) {
                                votes[7] = 0;
                            } else {
                                if (dist_std <= 0.0480680912733078) {
                                    votes[7] = 0;
                                } else {
                                    votes[7] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8248888850212097) {
                    if (num_peaks <= 131.0) {
                        if (dist_std <= 0.09959884732961655) {
                            votes[7] = 5;
                        } else {
                            votes[7] = 2;
                        }
                    } else {
                        votes[7] = 3;
                    }
                } else {
                    votes[7] = 1;
                }
            }
        }
    }
// Decision rules for tree 8
    if (diastolic_time <= 0.23638258129358292) {
        if (rr_median <= 98.5) {
            if (rr_std <= 18.039653778076172) {
                if (rr_median <= 69.5) {
                    if (dist_std <= 0.14334432035684586) {
                        if (num_peaks <= 79.5) {
                            votes[8] = 4;
                        } else {
                            if (num_peaks <= 134.5) {
                                if (num_peaks <= 128.5) {
                                    if (rr_median <= 49.5) {
                                        votes[8] = 3;
                                    } else {
                                        if (rr_std <= 6.159150838851929) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 3;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.09573458880186081) {
                                        votes[8] = 3;
                                    } else {
                                        votes[8] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 146.5) {
                                    votes[8] = 3;
                                } else {
                                    votes[8] = 3;
                                }
                            }
                        }
                    } else {
                        votes[8] = 2;
                    }
                } else {
                    if (diastolic_time <= 0.09984588995575905) {
                        if (rr_median <= 85.25) {
                            if (rr_median <= 77.25) {
                                votes[8] = 5;
                            } else {
                                votes[8] = 5;
                            }
                        } else {
                            if (rr_std <= 0.8765880763530731) {
                                votes[8] = 4;
                            } else {
                                votes[8] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 15.727570056915283) {
                            if (rr_std <= 0.936164528131485) {
                                if (dist_std <= 0.111899733543396) {
                                    votes[8] = 3;
                                } else {
                                    votes[8] = 3;
                                }
                            } else {
                                if (num_peaks <= 123.0) {
                                    if (num_valleys <= 69.0) {
                                        votes[8] = 5;
                                    } else {
                                        votes[8] = 5;
                                    }
                                } else {
                                    if (rr_std <= 4.914615869522095) {
                                        votes[8] = 3;
                                    } else {
                                        votes[8] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[8] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (dist_std <= 0.12021594122052193) {
                        if (num_valleys <= 74.5) {
                            if (diastolic_time <= 0.041866665706038475) {
                                votes[8] = 4;
                            } else {
                                if (diastolic_time <= 0.07716333866119385) {
                                    votes[8] = 1;
                                } else {
                                    if (dist_std <= 0.038401057943701744) {
                                        votes[8] = 4;
                                    } else {
                                        if (num_peaks <= 94.0) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 78.75) {
                                votes[8] = 4;
                            } else {
                                votes[8] = 5;
                            }
                        }
                    } else {
                        votes[8] = 3;
                    }
                } else {
                    if (rr_median <= 78.5) {
                        if (num_valleys <= 66.5) {
                            votes[8] = 3;
                        } else {
                            if (diastolic_time <= 0.09195434674620628) {
                                votes[8] = 3;
                            } else {
                                votes[8] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.08224999904632568) {
                            votes[8] = 1;
                        } else {
                            votes[8] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 64.5) {
                if (dist_std <= 0.04829500988125801) {
                    if (rr_median <= 170.5) {
                        votes[8] = 4;
                    } else {
                        votes[8] = 4;
                    }
                } else {
                    if (rr_std <= 39.50735664367676) {
                        votes[8] = 1;
                    } else {
                        votes[8] = 4;
                    }
                }
            } else {
                if (dist_std <= 0.03203116450458765) {
                    votes[8] = 5;
                } else {
                    if (dist_std <= 0.08994891494512558) {
                        if (diastolic_time <= 0.03210863471031189) {
                            votes[8] = 1;
                        } else {
                            if (rr_std <= 25.231708526611328) {
                                votes[8] = 1;
                            } else {
                                if (diastolic_time <= 0.0566201563924551) {
                                    votes[8] = 1;
                                } else {
                                    votes[8] = 1;
                                }
                            }
                        }
                    } else {
                        votes[8] = 1;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_time <= 0.6233333349227905) {
                if (rr_median <= 87.5) {
                    if (dist_std <= 0.03840460255742073) {
                        votes[8] = 0;
                    } else {
                        if (num_valleys <= 61.5) {
                            if (rr_std <= 34.10318946838379) {
                                if (dist_std <= 0.09422287717461586) {
                                    if (rr_std <= 15.449340343475342) {
                                        votes[8] = 5;
                                    } else {
                                        if (num_valleys <= 50.5) {
                                            votes[8] = 2;
                                        } else {
                                            votes[8] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 73.5) {
                                        if (num_valleys <= 56.5) {
                                            votes[8] = 2;
                                        } else {
                                            votes[8] = 2;
                                        }
                                    } else {
                                        if (dist_std <= 0.10959837213158607) {
                                            votes[8] = 2;
                                        } else {
                                            votes[8] = 5;
                                        }
                                    }
                                }
                            } else {
                                votes[8] = 1;
                            }
                        } else {
                            if (rr_std <= 0.6188721358776093) {
                                votes[8] = 2;
                            } else {
                                if (dist_std <= 0.07709457725286484) {
                                    votes[8] = 0;
                                } else {
                                    if (rr_std <= 20.356587409973145) {
                                        if (num_valleys <= 68.0) {
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
                    if (rr_std <= 12.738136291503906) {
                        votes[8] = 5;
                    } else {
                        if (rr_median <= 98.5) {
                            votes[8] = 4;
                        } else {
                            votes[8] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[8] = 5;
                } else {
                    if (rr_median <= 79.25) {
                        votes[8] = 1;
                    } else {
                        votes[8] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.802156209945679) {
                if (num_valleys <= 70.0) {
                    votes[8] = 5;
                } else {
                    if (dist_std <= 0.0691094733774662) {
                        votes[8] = 5;
                    } else {
                        votes[8] = 3;
                    }
                }
            } else {
                if (diastolic_time <= 0.28164102137088776) {
                    votes[8] = 0;
                } else {
                    if (dist_std <= 0.06707930192351341) {
                        if (rr_median <= 52.25) {
                            votes[8] = 3;
                        } else {
                            if (num_valleys <= 70.5) {
                                votes[8] = 0;
                            } else {
                                if (num_peaks <= 133.0) {
                                    votes[8] = 0;
                                } else {
                                    if (dist_std <= 0.05280950851738453) {
                                        if (num_valleys <= 74.5) {
                                            votes[8] = 0;
                                        } else {
                                            votes[8] = 0;
                                        }
                                    } else {
                                        votes[8] = 0;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[8] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 9
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 82.75) {
            if (rr_std <= 20.272157669067383) {
                if (rr_median <= 65.5) {
                    if (dist_std <= 0.0833105593919754) {
                        if (rr_median <= 62.75) {
                            if (num_peaks <= 123.5) {
                                votes[9] = 3;
                            } else {
                                if (dist_std <= 0.033090539276599884) {
                                    votes[9] = 3;
                                } else {
                                    votes[9] = 3;
                                }
                            }
                        } else {
                            votes[9] = 3;
                        }
                    } else {
                        if (rr_median <= 47.0) {
                            votes[9] = 4;
                        } else {
                            if (num_peaks <= 121.5) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 14.299430847167969) {
                        if (diastolic_time <= 0.15009258687496185) {
                            if (rr_std <= 11.911319255828857) {
                                votes[9] = 5;
                            } else {
                                votes[9] = 4;
                            }
                        } else {
                            if (num_valleys <= 76.5) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.1520664095878601) {
                            if (dist_std <= 0.04673001170158386) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 4;
                            }
                        } else {
                            votes[9] = 4;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.12549446523189545) {
                    if (num_peaks <= 135.5) {
                        if (rr_median <= 72.25) {
                            if (num_peaks <= 131.0) {
                                if (rr_median <= 48.0) {
                                    votes[9] = 4;
                                } else {
                                    if (rr_median <= 69.75) {
                                        votes[9] = 4;
                                    } else {
                                        votes[9] = 4;
                                    }
                                }
                            } else {
                                votes[9] = 4;
                            }
                        } else {
                            if (dist_std <= 0.044336505234241486) {
                                votes[9] = 4;
                            } else {
                                votes[9] = 3;
                            }
                        }
                    } else {
                        votes[9] = 1;
                    }
                } else {
                    votes[9] = 3;
                }
            }
        } else {
            if (diastolic_time <= 0.08889523893594742) {
                if (diastolic_time <= 0.013421053066849709) {
                    if (dist_std <= 0.05368414334952831) {
                        votes[9] = 0;
                    } else {
                        votes[9] = 0;
                    }
                } else {
                    if (num_valleys <= 63.0) {
                        if (rr_median <= 106.75) {
                            if (rr_std <= 7.651505410671234) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 1;
                            }
                        } else {
                            if (dist_std <= 0.027577348053455353) {
                                votes[9] = 4;
                            } else {
                                votes[9] = 4;
                            }
                        }
                    } else {
                        if (dist_std <= 0.08031154796481133) {
                            if (dist_std <= 0.034542929381132126) {
                                votes[9] = 1;
                            } else {
                                votes[9] = 1;
                            }
                        } else {
                            votes[9] = 1;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.04884631372988224) {
                    if (num_peaks <= 130.0) {
                        if (rr_std <= 18.988520622253418) {
                            votes[9] = 4;
                        } else {
                            votes[9] = 4;
                        }
                    } else {
                        votes[9] = 5;
                    }
                } else {
                    if (num_valleys <= 63.5) {
                        if (num_peaks <= 100.0) {
                            votes[9] = 3;
                        } else {
                            votes[9] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.12016359344124794) {
                            if (rr_median <= 92.75) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 5;
                            }
                        } else {
                            if (rr_median <= 98.5) {
                                if (num_valleys <= 71.5) {
                                    votes[9] = 5;
                                } else {
                                    votes[9] = 5;
                                }
                            } else {
                                votes[9] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (rr_median <= 75.25) {
                if (dist_std <= 0.0922045148909092) {
                    if (rr_std <= 16.663230895996094) {
                        if (num_peaks <= 107.0) {
                            votes[9] = 5;
                        } else {
                            votes[9] = 0;
                        }
                    } else {
                        if (rr_std <= 38.04090881347656) {
                            if (diastolic_time <= 0.3664069324731827) {
                                votes[9] = 2;
                            } else {
                                votes[9] = 2;
                            }
                        } else {
                            votes[9] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 0.7004843354225159) {
                        if (rr_median <= 69.5) {
                            if (num_peaks <= 97.5) {
                                votes[9] = 2;
                            } else {
                                votes[9] = 2;
                            }
                        } else {
                            votes[9] = 2;
                        }
                    } else {
                        if (rr_std <= 6.487696409225464) {
                            votes[9] = 5;
                        } else {
                            if (dist_std <= 0.11752402409911156) {
                                votes[9] = 2;
                            } else {
                                votes[9] = 2;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6350666582584381) {
                    if (rr_std <= 13.48249101638794) {
                        if (num_peaks <= 112.0) {
                            if (rr_median <= 87.0) {
                                votes[9] = 5;
                            } else {
                                votes[9] = 5;
                            }
                        } else {
                            votes[9] = 2;
                        }
                    } else {
                        if (rr_std <= 44.53691482543945) {
                            if (rr_median <= 88.5) {
                                if (rr_median <= 79.5) {
                                    votes[9] = 4;
                                } else {
                                    votes[9] = 2;
                                }
                            } else {
                                if (rr_median <= 98.5) {
                                    votes[9] = 4;
                                } else {
                                    votes[9] = 1;
                                }
                            }
                        } else {
                            votes[9] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 8.918952226638794) {
                        votes[9] = 5;
                    } else {
                        if (diastolic_time <= 0.7160444557666779) {
                            votes[9] = 1;
                        } else {
                            votes[9] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06456683948636055) {
                if (rr_std <= 5.8573830127716064) {
                    votes[9] = 5;
                } else {
                    if (diastolic_time <= 0.27636781334877014) {
                        votes[9] = 3;
                    } else {
                        if (diastolic_time <= 0.7301818132400513) {
                            if (rr_median <= 55.75) {
                                if (rr_std <= 12.114569664001465) {
                                    votes[9] = 3;
                                } else {
                                    votes[9] = 0;
                                }
                            } else {
                                if (num_valleys <= 74.5) {
                                    if (num_valleys <= 73.5) {
                                        votes[9] = 0;
                                    } else {
                                        votes[9] = 0;
                                    }
                                } else {
                                    votes[9] = 0;
                                }
                            }
                        } else {
                            votes[9] = 1;
                        }
                    }
                }
            } else {
                if (num_peaks <= 125.0) {
                    if (num_valleys <= 74.5) {
                        votes[9] = 5;
                    } else {
                        votes[9] = 1;
                    }
                } else {
                    if (rr_median <= 88.75) {
                        if (num_valleys <= 78.0) {
                            votes[9] = 3;
                        } else {
                            votes[9] = 3;
                        }
                    } else {
                        votes[9] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 10
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 83.25) {
            if (rr_std <= 16.939903259277344) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.0509713776409626) {
                        if (num_peaks <= 132.5) {
                            if (diastolic_time <= 0.09065189212560654) {
                                votes[10] = 3;
                            } else {
                                votes[10] = 3;
                            }
                        } else {
                            votes[10] = 3;
                        }
                    } else {
                        if (num_peaks <= 119.5) {
                            if (dist_std <= 0.14090599864721298) {
                                if (dist_std <= 0.10380961000919342) {
                                    votes[10] = 3;
                                } else {
                                    if (num_valleys <= 61.5) {
                                        votes[10] = 3;
                                    } else {
                                        votes[10] = 3;
                                    }
                                }
                            } else {
                                votes[10] = 2;
                            }
                        } else {
                            if (dist_std <= 0.0717102438211441) {
                                votes[10] = 3;
                            } else {
                                if (diastolic_time <= 0.12548035010695457) {
                                    votes[10] = 1;
                                } else {
                                    votes[10] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.14065152406692505) {
                        if (dist_std <= 0.12397100031375885) {
                            if (dist_std <= 0.048453280702233315) {
                                if (rr_median <= 76.25) {
                                    votes[10] = 3;
                                } else {
                                    votes[10] = 5;
                                }
                            } else {
                                if (num_peaks <= 125.5) {
                                    votes[10] = 3;
                                } else {
                                    votes[10] = 3;
                                }
                            }
                        } else {
                            votes[10] = 5;
                        }
                    } else {
                        votes[10] = 3;
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (diastolic_time <= 0.06037834659218788) {
                        votes[10] = 4;
                    } else {
                        if (dist_std <= 0.05832604505121708) {
                            if (dist_std <= 0.02905892487615347) {
                                votes[10] = 3;
                            } else {
                                if (diastolic_time <= 0.10749129951000214) {
                                    votes[10] = 4;
                                } else {
                                    votes[10] = 4;
                                }
                            }
                        } else {
                            if (num_peaks <= 86.0) {
                                votes[10] = 4;
                            } else {
                                if (rr_median <= 66.5) {
                                    votes[10] = 3;
                                } else {
                                    votes[10] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.17023255676031113) {
                        if (rr_std <= 25.69298267364502) {
                            if (rr_std <= 19.91061305999756) {
                                votes[10] = 5;
                            } else {
                                votes[10] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.1216730959713459) {
                                votes[10] = 1;
                            } else {
                                votes[10] = 4;
                            }
                        }
                    } else {
                        votes[10] = 5;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.12533333152532578) {
                if (diastolic_time <= 0.034525828436017036) {
                    if (num_peaks <= 136.0) {
                        if (num_peaks <= 111.0) {
                            if (dist_std <= 0.03928404860198498) {
                                votes[10] = 4;
                            } else {
                                votes[10] = 4;
                            }
                        } else {
                            votes[10] = 1;
                        }
                    } else {
                        votes[10] = 0;
                    }
                } else {
                    if (num_valleys <= 62.5) {
                        if (dist_std <= 0.07533709332346916) {
                            if (dist_std <= 0.05747124366462231) {
                                votes[10] = 4;
                            } else {
                                votes[10] = 5;
                            }
                        } else {
                            votes[10] = 3;
                        }
                    } else {
                        if (rr_median <= 123.25) {
                            if (dist_std <= 0.04541650600731373) {
                                votes[10] = 5;
                            } else {
                                if (dist_std <= 0.07780678942799568) {
                                    votes[10] = 1;
                                } else {
                                    if (num_peaks <= 121.5) {
                                        votes[10] = 1;
                                    } else {
                                        votes[10] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[10] = 1;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.034878626465797424) {
                    votes[10] = 4;
                } else {
                    if (rr_median <= 119.5) {
                        if (num_valleys <= 64.5) {
                            if (rr_median <= 88.5) {
                                votes[10] = 1;
                            } else {
                                votes[10] = 5;
                            }
                        } else {
                            if (rr_median <= 90.0) {
                                votes[10] = 5;
                            } else {
                                votes[10] = 5;
                            }
                        }
                    } else {
                        votes[10] = 1;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_time <= 0.6350666582584381) {
                if (rr_median <= 76.75) {
                    if (num_peaks <= 87.0) {
                        if (diastolic_time <= 0.5177499949932098) {
                            if (rr_median <= 68.5) {
                                votes[10] = 2;
                            } else {
                                if (rr_median <= 73.5) {
                                    votes[10] = 2;
                                } else {
                                    votes[10] = 2;
                                }
                            }
                        } else {
                            votes[10] = 5;
                        }
                    } else {
                        if (dist_std <= 0.13581082969903946) {
                            if (rr_std <= 14.375516891479492) {
                                if (rr_median <= 65.75) {
                                    votes[10] = 3;
                                } else {
                                    if (num_peaks <= 102.0) {
                                        votes[10] = 5;
                                    } else {
                                        votes[10] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 105.5) {
                                    votes[10] = 2;
                                } else {
                                    if (rr_median <= 67.5) {
                                        votes[10] = 2;
                                    } else {
                                        votes[10] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[10] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 7.001793265342712) {
                        votes[10] = 5;
                    } else {
                        if (rr_std <= 43.61960983276367) {
                            if (rr_median <= 88.5) {
                                if (rr_median <= 80.0) {
                                    votes[10] = 4;
                                } else {
                                    votes[10] = 2;
                                }
                            } else {
                                if (rr_median <= 104.0) {
                                    if (rr_std <= 21.569390296936035) {
                                        votes[10] = 4;
                                    } else {
                                        votes[10] = 4;
                                    }
                                } else {
                                    votes[10] = 4;
                                }
                            }
                        } else {
                            votes[10] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    votes[10] = 1;
                } else {
                    if (rr_median <= 79.5) {
                        votes[10] = 1;
                    } else {
                        votes[10] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06272310577332973) {
                if (rr_std <= 5.8573830127716064) {
                    votes[10] = 5;
                } else {
                    if (rr_median <= 51.25) {
                        votes[10] = 0;
                    } else {
                        if (rr_std <= 9.708416938781738) {
                            if (rr_median <= 58.25) {
                                votes[10] = 0;
                            } else {
                                votes[10] = 0;
                            }
                        } else {
                            if (num_peaks <= 151.0) {
                                if (rr_std <= 18.984259605407715) {
                                    if (rr_std <= 16.0400390625) {
                                        if (num_peaks <= 143.5) {
                                            votes[10] = 0;
                                        } else {
                                            votes[10] = 0;
                                        }
                                    } else {
                                        votes[10] = 0;
                                    }
                                } else {
                                    votes[10] = 0;
                                }
                            } else {
                                votes[10] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 128.5) {
                    if (diastolic_time <= 0.8248888850212097) {
                        votes[10] = 5;
                    } else {
                        votes[10] = 1;
                    }
                } else {
                    votes[10] = 2;
                }
            }
        }
    }
// Decision rules for tree 11
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_std <= 16.190052032470703) {
            if (rr_median <= 72.5) {
                if (num_valleys <= 55.0) {
                    votes[11] = 4;
                } else {
                    if (dist_std <= 0.06672794371843338) {
                        if (rr_std <= 10.082536220550537) {
                            votes[11] = 3;
                        } else {
                            if (num_valleys <= 77.5) {
                                if (dist_std <= 0.04520855471491814) {
                                    votes[11] = 3;
                                } else {
                                    votes[11] = 3;
                                }
                            } else {
                                votes[11] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 113.0) {
                            votes[11] = 3;
                        } else {
                            if (rr_median <= 61.5) {
                                if (dist_std <= 0.11420978605747223) {
                                    votes[11] = 1;
                                } else {
                                    votes[11] = 1;
                                }
                            } else {
                                votes[11] = 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 99.5) {
                    if (diastolic_time <= 0.01731063798069954) {
                        votes[11] = 0;
                    } else {
                        if (num_peaks <= 108.5) {
                            if (num_peaks <= 100.5) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 1;
                            }
                        } else {
                            if (num_peaks <= 116.0) {
                                votes[11] = 3;
                            } else {
                                if (num_peaks <= 130.5) {
                                    if (num_peaks <= 121.0) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 5;
                                    }
                                } else {
                                    votes[11] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.3685138523578644) {
                        votes[11] = 4;
                    } else {
                        if (diastolic_time <= 0.11359436437487602) {
                            if (num_peaks <= 134.5) {
                                votes[11] = 1;
                            } else {
                                if (diastolic_time <= 0.07444944977760315) {
                                    votes[11] = 1;
                                } else {
                                    votes[11] = 1;
                                }
                            }
                        } else {
                            votes[11] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 132.5) {
                if (rr_median <= 74.25) {
                    if (dist_std <= 0.11760768294334412) {
                        if (num_valleys <= 72.5) {
                            if (num_peaks <= 125.5) {
                                if (rr_std <= 54.40053176879883) {
                                    votes[11] = 4;
                                } else {
                                    votes[11] = 4;
                                }
                            } else {
                                votes[11] = 4;
                            }
                        } else {
                            if (num_valleys <= 74.5) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 4;
                            }
                        }
                    } else {
                        votes[11] = 3;
                    }
                } else {
                    if (diastolic_time <= 0.11986895278096199) {
                        if (num_valleys <= 62.5) {
                            if (diastolic_time <= 0.0417485237121582) {
                                votes[11] = 4;
                            } else {
                                votes[11] = 5;
                            }
                        } else {
                            if (rr_std <= 30.508243560791016) {
                                if (num_peaks <= 124.5) {
                                    votes[11] = 3;
                                } else {
                                    votes[11] = 5;
                                }
                            } else {
                                if (rr_median <= 112.0) {
                                    votes[11] = 1;
                                } else {
                                    votes[11] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 80.5) {
                            votes[11] = 4;
                        } else {
                            if (num_peaks <= 118.0) {
                                votes[11] = 4;
                            } else {
                                votes[11] = 4;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.10128447785973549) {
                    if (num_peaks <= 137.5) {
                        if (diastolic_time <= 0.07370428740978241) {
                            votes[11] = 3;
                        } else {
                            votes[11] = 1;
                        }
                    } else {
                        if (rr_std <= 28.822540283203125) {
                            if (diastolic_time <= 0.0688343495130539) {
                                votes[11] = 0;
                            } else {
                                votes[11] = 1;
                            }
                        } else {
                            votes[11] = 1;
                        }
                    }
                } else {
                    if (rr_median <= 90.0) {
                        if (num_peaks <= 137.0) {
                            votes[11] = 4;
                        } else {
                            votes[11] = 3;
                        }
                    } else {
                        votes[11] = 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (dist_std <= 0.094605702906847) {
                if (diastolic_time <= 0.6167076826095581) {
                    if (rr_std <= 14.36455774307251) {
                        if (rr_median <= 64.5) {
                            votes[11] = 3;
                        } else {
                            if (rr_median <= 70.5) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 88.5) {
                            if (num_valleys <= 61.5) {
                                if (rr_std <= 31.861740112304688) {
                                    if (diastolic_time <= 0.40847058594226837) {
                                        votes[11] = 2;
                                    } else {
                                        votes[11] = 2;
                                    }
                                } else {
                                    votes[11] = 4;
                                }
                            } else {
                                if (rr_median <= 68.25) {
                                    votes[11] = 3;
                                } else {
                                    votes[11] = 0;
                                }
                            }
                        } else {
                            if (num_peaks <= 76.0) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 80.5) {
                        votes[11] = 2;
                    } else {
                        if (rr_std <= 9.547560691833496) {
                            votes[11] = 1;
                        } else {
                            votes[11] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.6796177625656128) {
                    if (num_peaks <= 108.5) {
                        if (rr_median <= 73.5) {
                            if (diastolic_time <= 0.4211929738521576) {
                                votes[11] = 2;
                            } else {
                                if (num_peaks <= 83.0) {
                                    votes[11] = 2;
                                } else {
                                    votes[11] = 2;
                                }
                            }
                        } else {
                            votes[11] = 2;
                        }
                    } else {
                        votes[11] = 2;
                    }
                } else {
                    if (rr_std <= 5.276341915130615) {
                        if (num_peaks <= 107.0) {
                            votes[11] = 5;
                        } else {
                            votes[11] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.2908681333065033) {
                            votes[11] = 2;
                        } else {
                            if (rr_median <= 91.5) {
                                if (diastolic_time <= 0.3565912991762161) {
                                    votes[11] = 2;
                                } else {
                                    votes[11] = 2;
                                }
                            } else {
                                votes[11] = 2;
                            }
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06456683948636055) {
                if (diastolic_time <= 1.143200010061264) {
                    if (diastolic_time <= 0.26275861263275146) {
                        votes[11] = 5;
                    } else {
                        if (rr_median <= 55.75) {
                            if (rr_std <= 15.110318660736084) {
                                votes[11] = 3;
                            } else {
                                votes[11] = 0;
                            }
                        } else {
                            if (rr_std <= 6.560080528259277) {
                                votes[11] = 0;
                            } else {
                                if (num_peaks <= 147.5) {
                                    if (rr_median <= 61.25) {
                                        votes[11] = 0;
                                    } else {
                                        votes[11] = 0;
                                    }
                                } else {
                                    if (dist_std <= 0.042017364874482155) {
                                        votes[11] = 0;
                                    } else {
                                        votes[11] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    votes[11] = 1;
                }
            } else {
                if (rr_std <= 10.435474395751953) {
                    if (rr_median <= 77.5) {
                        votes[11] = 3;
                    } else {
                        votes[11] = 3;
                    }
                } else {
                    if (num_peaks <= 132.5) {
                        if (diastolic_time <= 0.4050119072198868) {
                            votes[11] = 5;
                        } else {
                            votes[11] = 1;
                        }
                    } else {
                        votes[11] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 12
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_std <= 20.21463394165039) {
            if (rr_median <= 85.75) {
                if (rr_median <= 68.5) {
                    if (rr_std <= 9.712274551391602) {
                        if (rr_std <= 1.0854631960391998) {
                            votes[12] = 3;
                        } else {
                            votes[12] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.037305234000086784) {
                            votes[12] = 4;
                        } else {
                            if (rr_median <= 53.25) {
                                if (num_peaks <= 138.5) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 3;
                                }
                            } else {
                                if (dist_std <= 0.049619847908616066) {
                                    if (num_peaks <= 133.5) {
                                        if (diastolic_time <= 0.09316461905837059) {
                                            votes[12] = 3;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    } else {
                                        votes[12] = 3;
                                    }
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.10666429251432419) {
                        if (rr_std <= 8.691058158874512) {
                            votes[12] = 5;
                        } else {
                            if (diastolic_time <= 0.08170833438634872) {
                                votes[12] = 3;
                            } else {
                                votes[12] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 17.313146591186523) {
                            if (dist_std <= 0.048453280702233315) {
                                votes[12] = 5;
                            } else {
                                votes[12] = 3;
                            }
                        } else {
                            votes[12] = 4;
                        }
                    }
                }
            } else {
                if (rr_median <= 103.5) {
                    if (diastolic_time <= 0.016946058720350266) {
                        votes[12] = 0;
                    } else {
                        if (diastolic_time <= 0.13032258301973343) {
                            if (diastolic_time <= 0.08031513914465904) {
                                if (rr_median <= 93.5) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 5;
                                }
                            } else {
                                votes[12] = 1;
                            }
                        } else {
                            if (rr_median <= 90.5) {
                                votes[12] = 5;
                            } else {
                                votes[12] = 5;
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.03728712722659111) {
                        votes[12] = 4;
                    } else {
                        if (num_valleys <= 74.5) {
                            if (dist_std <= 0.04878314957022667) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 1;
                            }
                        } else {
                            if (rr_median <= 134.5) {
                                votes[12] = 5;
                            } else {
                                votes[12] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 132.5) {
                if (dist_std <= 0.12140913680195808) {
                    if (num_valleys <= 72.5) {
                        if (rr_median <= 88.0) {
                            if (diastolic_time <= 0.1736646518111229) {
                                if (dist_std <= 0.1116466298699379) {
                                    if (num_valleys <= 70.5) {
                                        if (dist_std <= 0.035997528582811356) {
                                            votes[12] = 4;
                                        } else {
                                            votes[12] = 4;
                                        }
                                    } else {
                                        votes[12] = 4;
                                    }
                                } else {
                                    votes[12] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.1960592046380043) {
                                    votes[12] = 4;
                                } else {
                                    votes[12] = 4;
                                }
                            }
                        } else {
                            if (num_peaks <= 112.5) {
                                if (dist_std <= 0.0457980502396822) {
                                    votes[12] = 4;
                                } else {
                                    votes[12] = 4;
                                }
                            } else {
                                if (rr_std <= 29.898712158203125) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.14492350816726685) {
                            if (diastolic_time <= 0.11669565364718437) {
                                if (rr_median <= 93.0) {
                                    votes[12] = 1;
                                } else {
                                    votes[12] = 1;
                                }
                            } else {
                                votes[12] = 5;
                            }
                        } else {
                            votes[12] = 4;
                        }
                    }
                } else {
                    votes[12] = 3;
                }
            } else {
                if (diastolic_time <= 0.10815735161304474) {
                    if (diastolic_time <= 0.020783504471182823) {
                        votes[12] = 0;
                    } else {
                        if (diastolic_time <= 0.08716500550508499) {
                            if (diastolic_time <= 0.0489276647567749) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 1;
                            }
                        } else {
                            if (rr_median <= 73.75) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 5;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 135.5) {
                        votes[12] = 4;
                    } else {
                        votes[12] = 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 70.5) {
            if (diastolic_time <= 0.7064000070095062) {
                if (rr_std <= 0.6242677867412567) {
                    if (dist_std <= 0.09671330079436302) {
                        votes[12] = 3;
                    } else {
                        if (rr_median <= 73.5) {
                            votes[12] = 2;
                        } else {
                            votes[12] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 12.420084476470947) {
                        if (rr_median <= 65.75) {
                            votes[12] = 3;
                        } else {
                            if (rr_std <= 0.6821505725383759) {
                                votes[12] = 2;
                            } else {
                                if (diastolic_time <= 0.31231333315372467) {
                                    votes[12] = 5;
                                } else {
                                    if (dist_std <= 0.0967726893723011) {
                                        if (diastolic_time <= 0.4953666776418686) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    } else {
                                        votes[12] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.572783946990967) {
                            votes[12] = 0;
                        } else {
                            if (rr_median <= 87.5) {
                                if (num_valleys <= 59.5) {
                                    if (rr_std <= 34.10318946838379) {
                                        if (rr_median <= 76.75) {
                                            votes[12] = 2;
                                        } else {
                                            votes[12] = 2;
                                        }
                                    } else {
                                        votes[12] = 1;
                                    }
                                } else {
                                    if (rr_median <= 61.0) {
                                        votes[12] = 3;
                                    } else {
                                        votes[12] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 47.85641670227051) {
                                    if (rr_median <= 97.75) {
                                        if (num_valleys <= 50.0) {
                                            votes[12] = 4;
                                        } else {
                                            votes[12] = 4;
                                        }
                                    } else {
                                        votes[12] = 4;
                                    }
                                } else {
                                    votes[12] = 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 79.5) {
                    votes[12] = 1;
                } else {
                    if (rr_std <= 19.610782623291016) {
                        votes[12] = 1;
                    } else {
                        votes[12] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.058648062869906425) {
                if (diastolic_time <= 0.2809973508119583) {
                    votes[12] = 5;
                } else {
                    if (diastolic_time <= 0.7435999810695648) {
                        if (rr_median <= 54.5) {
                            votes[12] = 0;
                        } else {
                            if (diastolic_time <= 0.3024592697620392) {
                                votes[12] = 0;
                            } else {
                                if (num_peaks <= 133.0) {
                                    if (dist_std <= 0.045557742938399315) {
                                        votes[12] = 0;
                                    } else {
                                        votes[12] = 0;
                                    }
                                } else {
                                    votes[12] = 0;
                                }
                            }
                        }
                    } else {
                        votes[12] = 0;
                    }
                }
            } else {
                if (diastolic_time <= 0.5026500076055527) {
                    if (num_valleys <= 76.0) {
                        votes[12] = 5;
                    } else {
                        votes[12] = 3;
                    }
                } else {
                    if (num_peaks <= 125.5) {
                        votes[12] = 5;
                    } else {
                        votes[12] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 13
    if (diastolic_time <= 0.23638258129358292) {
        if (rr_median <= 85.75) {
            if (rr_std <= 20.21463394165039) {
                if (rr_median <= 69.5) {
                    if (num_peaks <= 131.5) {
                        if (diastolic_time <= 0.05195081792771816) {
                            if (rr_std <= 10.00896692276001) {
                                votes[13] = 3;
                            } else {
                                votes[13] = 4;
                            }
                        } else {
                            if (dist_std <= 0.14256633073091507) {
                                if (num_peaks <= 127.5) {
                                    if (rr_median <= 48.25) {
                                        votes[13] = 1;
                                    } else {
                                        if (num_peaks <= 120.5) {
                                            votes[13] = 3;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    }
                                } else {
                                    if (dist_std <= 0.04836117662489414) {
                                        votes[13] = 3;
                                    } else {
                                        votes[13] = 1;
                                    }
                                }
                            } else {
                                votes[13] = 2;
                            }
                        }
                    } else {
                        if (dist_std <= 0.07269217073917389) {
                            votes[13] = 3;
                        } else {
                            votes[13] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.16392824053764343) {
                        if (rr_std <= 13.34977388381958) {
                            votes[13] = 5;
                        } else {
                            if (num_valleys <= 72.5) {
                                votes[13] = 3;
                            } else {
                                if (dist_std <= 0.04787367768585682) {
                                    votes[13] = 0;
                                } else {
                                    votes[13] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 6.78466796875) {
                            votes[13] = 3;
                        } else {
                            votes[13] = 4;
                        }
                    }
                }
            } else {
                if (num_peaks <= 134.0) {
                    if (num_valleys <= 74.0) {
                        if (rr_median <= 76.0) {
                            if (num_valleys <= 71.5) {
                                if (rr_median <= 69.75) {
                                    if (rr_std <= 51.30268669128418) {
                                        votes[13] = 4;
                                    } else {
                                        votes[13] = 4;
                                    }
                                } else {
                                    votes[13] = 4;
                                }
                            } else {
                                votes[13] = 4;
                            }
                        } else {
                            if (rr_median <= 78.5) {
                                votes[13] = 5;
                            } else {
                                if (num_valleys <= 63.0) {
                                    votes[13] = 4;
                                } else {
                                    votes[13] = 4;
                                }
                            }
                        }
                    } else {
                        votes[13] = 3;
                    }
                } else {
                    if (num_valleys <= 72.5) {
                        votes[13] = 3;
                    } else {
                        votes[13] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.024858159013092518) {
                votes[13] = 4;
            } else {
                if (diastolic_time <= 0.011158470064401627) {
                    if (rr_std <= 13.293808460235596) {
                        votes[13] = 0;
                    } else {
                        votes[13] = 0;
                    }
                } else {
                    if (diastolic_time <= 0.10200454294681549) {
                        if (num_valleys <= 62.5) {
                            if (rr_std <= 48.00251770019531) {
                                if (dist_std <= 0.0583367645740509) {
                                    votes[13] = 1;
                                } else {
                                    if (rr_std <= 0.9506001174449921) {
                                        votes[13] = 1;
                                    } else {
                                        votes[13] = 3;
                                    }
                                }
                            } else {
                                votes[13] = 4;
                            }
                        } else {
                            if (rr_median <= 98.75) {
                                if (diastolic_time <= 0.07251999899744987) {
                                    votes[13] = 1;
                                } else {
                                    votes[13] = 3;
                                }
                            } else {
                                if (num_valleys <= 78.5) {
                                    if (num_peaks <= 114.5) {
                                        votes[13] = 1;
                                    } else {
                                        if (rr_std <= 2.7739559412002563) {
                                            votes[13] = 1;
                                        } else {
                                            votes[13] = 1;
                                        }
                                    }
                                } else {
                                    votes[13] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 13.420379161834717) {
                            if (diastolic_time <= 0.1607535481452942) {
                                if (num_valleys <= 73.5) {
                                    votes[13] = 1;
                                } else {
                                    votes[13] = 5;
                                }
                            } else {
                                if (rr_median <= 94.5) {
                                    votes[13] = 5;
                                } else {
                                    votes[13] = 1;
                                }
                            }
                        } else {
                            if (dist_std <= 0.08899154514074326) {
                                if (num_peaks <= 133.0) {
                                    if (rr_median <= 114.0) {
                                        votes[13] = 4;
                                    } else {
                                        votes[13] = 5;
                                    }
                                } else {
                                    votes[13] = 5;
                                }
                            } else {
                                votes[13] = 3;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 126.5) {
            if (diastolic_time <= 0.6167076826095581) {
                if (rr_std <= 0.6796177625656128) {
                    if (dist_std <= 0.09838484227657318) {
                        votes[13] = 3;
                    } else {
                        if (diastolic_time <= 0.5084166526794434) {
                            votes[13] = 2;
                        } else {
                            votes[13] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 14.330915927886963) {
                        if (rr_median <= 66.25) {
                            votes[13] = 3;
                        } else {
                            if (rr_std <= 10.876260757446289) {
                                if (dist_std <= 0.11316466331481934) {
                                    if (dist_std <= 0.08376122266054153) {
                                        votes[13] = 5;
                                    } else {
                                        votes[13] = 5;
                                    }
                                } else {
                                    votes[13] = 5;
                                }
                            } else {
                                votes[13] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 103.0) {
                            if (rr_median <= 88.5) {
                                if (rr_std <= 30.697158813476562) {
                                    if (dist_std <= 0.048311276361346245) {
                                        votes[13] = 2;
                                    } else {
                                        if (rr_median <= 82.5) {
                                            votes[13] = 2;
                                        } else {
                                            votes[13] = 2;
                                        }
                                    }
                                } else {
                                    votes[13] = 4;
                                }
                            } else {
                                if (rr_median <= 102.0) {
                                    votes[13] = 4;
                                } else {
                                    votes[13] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 83.5) {
                                if (rr_median <= 67.5) {
                                    votes[13] = 3;
                                } else {
                                    if (num_peaks <= 116.0) {
                                        votes[13] = 0;
                                    } else {
                                        votes[13] = 0;
                                    }
                                }
                            } else {
                                votes[13] = 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[13] = 5;
                } else {
                    if (rr_median <= 79.25) {
                        votes[13] = 1;
                    } else {
                        votes[13] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06491324678063393) {
                if (rr_std <= 7.805677175521851) {
                    votes[13] = 3;
                } else {
                    if (diastolic_time <= 0.27636781334877014) {
                        votes[13] = 3;
                    } else {
                        if (dist_std <= 0.028821819461882114) {
                            votes[13] = 0;
                        } else {
                            if (rr_median <= 53.0) {
                                votes[13] = 0;
                            } else {
                                if (rr_std <= 12.923108100891113) {
                                    if (rr_std <= 12.450470447540283) {
                                        votes[13] = 0;
                                    } else {
                                        votes[13] = 0;
                                    }
                                } else {
                                    votes[13] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 88.75) {
                    if (num_valleys <= 78.5) {
                        votes[13] = 3;
                    } else {
                        votes[13] = 2;
                    }
                } else {
                    votes[13] = 2;
                }
            }
        }
    }
// Decision rules for tree 14
    if (diastolic_time <= 0.20975074917078018) {
        if (rr_std <= 19.729626655578613) {
            if (rr_median <= 99.25) {
                if (rr_median <= 68.25) {
                    if (dist_std <= 0.07042357325553894) {
                        if (num_peaks <= 134.5) {
                            if (rr_median <= 53.5) {
                                votes[14] = 3;
                            } else {
                                if (rr_median <= 60.25) {
                                    votes[14] = 5;
                                } else {
                                    votes[14] = 3;
                                }
                            }
                        } else {
                            votes[14] = 3;
                        }
                    } else {
                        if (rr_median <= 47.75) {
                            votes[14] = 4;
                        } else {
                            if (num_peaks <= 121.5) {
                                if (rr_std <= 11.739551067352295) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 3;
                                }
                            } else {
                                votes[14] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.016946058720350266) {
                        votes[14] = 0;
                    } else {
                        if (num_peaks <= 138.0) {
                            if (dist_std <= 0.035849399864673615) {
                                votes[14] = 4;
                            } else {
                                if (num_peaks <= 129.0) {
                                    if (num_valleys <= 75.5) {
                                        if (rr_std <= 0.7582071721553802) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 5;
                                        }
                                    } else {
                                        votes[14] = 5;
                                    }
                                } else {
                                    if (rr_std <= 9.079483032226562) {
                                        votes[14] = 3;
                                    } else {
                                        votes[14] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[14] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.3499270975589752) {
                    votes[14] = 4;
                } else {
                    if (rr_std <= 13.315665245056152) {
                        if (rr_median <= 105.0) {
                            votes[14] = 1;
                        } else {
                            votes[14] = 1;
                        }
                    } else {
                        votes[14] = 5;
                    }
                }
            }
        } else {
            if (num_peaks <= 130.5) {
                if (dist_std <= 0.12036266922950745) {
                    if (rr_median <= 88.0) {
                        if (rr_median <= 75.0) {
                            if (num_valleys <= 72.5) {
                                if (num_peaks <= 125.5) {
                                    votes[14] = 4;
                                } else {
                                    votes[14] = 4;
                                }
                            } else {
                                votes[14] = 4;
                            }
                        } else {
                            if (rr_median <= 78.5) {
                                votes[14] = 5;
                            } else {
                                if (diastolic_time <= 0.14758355915546417) {
                                    votes[14] = 4;
                                } else {
                                    votes[14] = 4;
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 0.04839995689690113) {
                            if (diastolic_time <= 0.08155233785510063) {
                                if (num_valleys <= 67.5) {
                                    votes[14] = 4;
                                } else {
                                    votes[14] = 1;
                                }
                            } else {
                                votes[14] = 4;
                            }
                        } else {
                            if (num_valleys <= 63.0) {
                                votes[14] = 5;
                            } else {
                                votes[14] = 1;
                            }
                        }
                    }
                } else {
                    votes[14] = 3;
                }
            } else {
                if (diastolic_time <= 0.1215471513569355) {
                    if (diastolic_time <= 0.04609233699738979) {
                        votes[14] = 3;
                    } else {
                        if (dist_std <= 0.0814862921833992) {
                            if (dist_std <= 0.03903730772435665) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 1;
                            }
                        } else {
                            votes[14] = 1;
                        }
                    }
                } else {
                    votes[14] = 5;
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_std <= 0.6467249393463135) {
                if (dist_std <= 0.09838484227657318) {
                    votes[14] = 5;
                } else {
                    if (rr_median <= 73.5) {
                        if (dist_std <= 0.13074292987585068) {
                            if (rr_std <= 0.4925113916397095) {
                                votes[14] = 2;
                            } else {
                                votes[14] = 2;
                            }
                        } else {
                            votes[14] = 2;
                        }
                    } else {
                        votes[14] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 0.6167076826095581) {
                    if (rr_std <= 14.808050632476807) {
                        if (diastolic_time <= 0.2643251121044159) {
                            votes[14] = 3;
                        } else {
                            if (dist_std <= 0.10455923527479172) {
                                if (dist_std <= 0.03068782389163971) {
                                    votes[14] = 5;
                                } else {
                                    votes[14] = 5;
                                }
                            } else {
                                votes[14] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 81.75) {
                            if (dist_std <= 0.04137372598052025) {
                                votes[14] = 0;
                            } else {
                                if (rr_std <= 33.634138107299805) {
                                    if (num_valleys <= 50.5) {
                                        votes[14] = 2;
                                    } else {
                                        if (dist_std <= 0.09136510267853737) {
                                            votes[14] = 2;
                                        } else {
                                            votes[14] = 2;
                                        }
                                    }
                                } else {
                                    votes[14] = 1;
                                }
                            }
                        } else {
                            if (num_valleys <= 44.5) {
                                votes[14] = 5;
                            } else {
                                if (num_peaks <= 86.5) {
                                    if (diastolic_time <= 0.32100000977516174) {
                                        votes[14] = 2;
                                    } else {
                                        if (diastolic_time <= 0.4041764736175537) {
                                            votes[14] = 4;
                                        } else {
                                            votes[14] = 4;
                                        }
                                    }
                                } else {
                                    votes[14] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 4.59311056137085) {
                        votes[14] = 5;
                    } else {
                        if (num_peaks <= 114.5) {
                            if (rr_median <= 79.5) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 1;
                            }
                        } else {
                            votes[14] = 2;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06048966757953167) {
                if (diastolic_time <= 0.2809973508119583) {
                    if (num_valleys <= 77.5) {
                        votes[14] = 3;
                    } else {
                        votes[14] = 5;
                    }
                } else {
                    if (rr_std <= 8.07284927368164) {
                        votes[14] = 0;
                    } else {
                        if (rr_median <= 61.5) {
                            if (num_valleys <= 76.5) {
                                if (num_peaks <= 145.0) {
                                    votes[14] = 0;
                                } else {
                                    votes[14] = 0;
                                }
                            } else {
                                if (rr_median <= 56.0) {
                                    votes[14] = 0;
                                } else {
                                    votes[14] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.6193333268165588) {
                                votes[14] = 0;
                            } else {
                                votes[14] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8351111114025116) {
                    if (dist_std <= 0.07220600545406342) {
                        if (rr_std <= 4.677663087844849) {
                            votes[14] = 5;
                        } else {
                            votes[14] = 0;
                        }
                    } else {
                        if (num_peaks <= 128.5) {
                            if (rr_std <= 1.1199988424777985) {
                                votes[14] = 3;
                            } else {
                                votes[14] = 5;
                            }
                        } else {
                            if (num_peaks <= 140.5) {
                                votes[14] = 3;
                            } else {
                                votes[14] = 3;
                            }
                        }
                    }
                } else {
                    votes[14] = 1;
                }
            }
        }
    }
// Decision rules for tree 15
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 98.5) {
            if (rr_std <= 14.14066219329834) {
                if (rr_median <= 68.75) {
                    if (rr_std <= 9.526742935180664) {
                        if (diastolic_time <= 0.15031540393829346) {
                            if (dist_std <= 0.11481241509318352) {
                                votes[15] = 3;
                            } else {
                                votes[15] = 3;
                            }
                        } else {
                            votes[15] = 3;
                        }
                    } else {
                        if (dist_std <= 0.05820121616125107) {
                            if (num_peaks <= 134.5) {
                                votes[15] = 5;
                            } else {
                                votes[15] = 3;
                            }
                        } else {
                            if (num_peaks <= 122.5) {
                                votes[15] = 4;
                            } else {
                                votes[15] = 1;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 73.5) {
                        if (rr_std <= 1.2909269332885742) {
                            if (rr_median <= 90.0) {
                                votes[15] = 3;
                            } else {
                                votes[15] = 5;
                            }
                        } else {
                            if (rr_std <= 9.702898502349854) {
                                votes[15] = 5;
                            } else {
                                votes[15] = 5;
                            }
                        }
                    } else {
                        if (dist_std <= 0.12057916447520256) {
                            if (rr_std <= 8.873440265655518) {
                                if (rr_median <= 90.25) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 3;
                                }
                            } else {
                                votes[15] = 1;
                            }
                        } else {
                            votes[15] = 5;
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (diastolic_time <= 0.03923880495131016) {
                        if (rr_median <= 70.5) {
                            votes[15] = 4;
                        } else {
                            votes[15] = 4;
                        }
                    } else {
                        if (dist_std <= 0.05747124366462231) {
                            if (diastolic_time <= 0.09909114241600037) {
                                votes[15] = 3;
                            } else {
                                if (rr_std <= 17.628786087036133) {
                                    votes[15] = 4;
                                } else {
                                    if (dist_std <= 0.04201292805373669) {
                                        votes[15] = 4;
                                    } else {
                                        votes[15] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 66.0) {
                                votes[15] = 4;
                            } else {
                                if (rr_std <= 19.523197174072266) {
                                    votes[15] = 1;
                                } else {
                                    if (diastolic_time <= 0.07471449300646782) {
                                        votes[15] = 3;
                                    } else {
                                        votes[15] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 80.25) {
                        if (diastolic_time <= 0.12056989222764969) {
                            if (rr_std <= 20.73285961151123) {
                                votes[15] = 3;
                            } else {
                                if (diastolic_time <= 0.09195434674620628) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 1;
                                }
                            }
                        } else {
                            votes[15] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.08006754517555237) {
                            if (diastolic_time <= 0.04982944391667843) {
                                votes[15] = 0;
                            } else {
                                votes[15] = 1;
                            }
                        } else {
                            if (dist_std <= 0.04942111670970917) {
                                votes[15] = 5;
                            } else {
                                votes[15] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 115.5) {
                if (dist_std <= 0.03928404860198498) {
                    votes[15] = 4;
                } else {
                    if (diastolic_time <= 0.0979182980954647) {
                        if (rr_std <= 45.61656379699707) {
                            if (dist_std <= 0.06613194569945335) {
                                votes[15] = 1;
                            } else {
                                votes[15] = 1;
                            }
                        } else {
                            votes[15] = 4;
                        }
                    } else {
                        votes[15] = 5;
                    }
                }
            } else {
                if (rr_median <= 104.5) {
                    votes[15] = 1;
                } else {
                    if (dist_std <= 0.03261198103427887) {
                        votes[15] = 1;
                    } else {
                        if (diastolic_time <= 0.04358590766787529) {
                            votes[15] = 1;
                        } else {
                            if (rr_std <= 29.901960372924805) {
                                if (diastolic_time <= 0.06173854321241379) {
                                    votes[15] = 1;
                                } else {
                                    votes[15] = 1;
                                }
                            } else {
                                votes[15] = 1;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 88.25) {
                if (dist_std <= 0.09450919181108475) {
                    if (rr_std <= 16.209908962249756) {
                        if (num_peaks <= 97.5) {
                            votes[15] = 5;
                        } else {
                            votes[15] = 0;
                        }
                    } else {
                        if (rr_std <= 33.76094627380371) {
                            if (num_valleys <= 53.5) {
                                if (rr_median <= 77.5) {
                                    if (diastolic_time <= 0.43636490404605865) {
                                        votes[15] = 2;
                                    } else {
                                        votes[15] = 2;
                                    }
                                } else {
                                    votes[15] = 2;
                                }
                            } else {
                                if (rr_std <= 25.25302219390869) {
                                    votes[15] = 5;
                                } else {
                                    votes[15] = 2;
                                }
                            }
                        } else {
                            if (dist_std <= 0.05893878825008869) {
                                votes[15] = 5;
                            } else {
                                votes[15] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 118.0) {
                        if (rr_median <= 74.5) {
                            if (rr_std <= 0.6896102130413055) {
                                if (num_peaks <= 109.0) {
                                    votes[15] = 2;
                                } else {
                                    votes[15] = 2;
                                }
                            } else {
                                if (rr_std <= 10.58621621131897) {
                                    votes[15] = 5;
                                } else {
                                    if (rr_median <= 70.0) {
                                        votes[15] = 2;
                                    } else {
                                        votes[15] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[15] = 5;
                        }
                    } else {
                        votes[15] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.5926856994628906) {
                    if (rr_std <= 11.306460857391357) {
                        votes[15] = 5;
                    } else {
                        if (rr_median <= 104.5) {
                            if (rr_median <= 96.25) {
                                votes[15] = 0;
                            } else {
                                votes[15] = 4;
                            }
                        } else {
                            votes[15] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 11.227814674377441) {
                        votes[15] = 5;
                    } else {
                        if (num_valleys <= 58.5) {
                            votes[15] = 1;
                        } else {
                            votes[15] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.05915673449635506) {
                if (diastolic_time <= 0.2601677477359772) {
                    votes[15] = 5;
                } else {
                    if (rr_median <= 61.25) {
                        if (diastolic_time <= 0.3575238138437271) {
                            votes[15] = 3;
                        } else {
                            if (num_valleys <= 75.5) {
                                votes[15] = 0;
                            } else {
                                if (rr_median <= 56.5) {
                                    votes[15] = 0;
                                } else {
                                    votes[15] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 8.439831256866455) {
                            votes[15] = 0;
                        } else {
                            if (num_valleys <= 85.5) {
                                if (dist_std <= 0.04599898308515549) {
                                    votes[15] = 0;
                                } else {
                                    if (rr_median <= 78.5) {
                                        votes[15] = 0;
                                    } else {
                                        votes[15] = 0;
                                    }
                                }
                            } else {
                                votes[15] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 129.5) {
                    if (num_valleys <= 76.5) {
                        if (num_valleys <= 71.5) {
                            votes[15] = 5;
                        } else {
                            votes[15] = 5;
                        }
                    } else {
                        votes[15] = 5;
                    }
                } else {
                    if (rr_std <= 13.306037425994873) {
                        votes[15] = 3;
                    } else {
                        votes[15] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 16
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 83.25) {
            if (rr_std <= 14.638309955596924) {
                if (rr_median <= 68.75) {
                    if (rr_std <= 9.526742935180664) {
                        if (num_peaks <= 109.0) {
                            votes[16] = 3;
                        } else {
                            if (diastolic_time <= 0.15438522398471832) {
                                votes[16] = 3;
                            } else {
                                votes[16] = 3;
                            }
                        }
                    } else {
                        if (dist_std <= 0.05371026508510113) {
                            if (diastolic_time <= 0.10709189251065254) {
                                votes[16] = 3;
                            } else {
                                votes[16] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.08062698319554329) {
                                votes[16] = 4;
                            } else {
                                votes[16] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.17264023423194885) {
                        if (rr_std <= 9.702898502349854) {
                            if (dist_std <= 0.13133349269628525) {
                                votes[16] = 5;
                            } else {
                                votes[16] = 5;
                            }
                        } else {
                            votes[16] = 3;
                        }
                    } else {
                        votes[16] = 3;
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.048507245257496834) {
                        votes[16] = 4;
                    } else {
                        if (diastolic_time <= 0.09131110832095146) {
                            if (rr_median <= 62.25) {
                                votes[16] = 4;
                            } else {
                                if (rr_std <= 26.651769638061523) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 1;
                                }
                            }
                        } else {
                            if (dist_std <= 0.0713135115802288) {
                                if (diastolic_time <= 0.1454830765724182) {
                                    if (diastolic_time <= 0.13133879750967026) {
                                        votes[16] = 4;
                                    } else {
                                        votes[16] = 4;
                                    }
                                } else {
                                    if (num_valleys <= 64.5) {
                                        votes[16] = 4;
                                    } else {
                                        votes[16] = 4;
                                    }
                                }
                            } else {
                                votes[16] = 3;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 66.5) {
                        votes[16] = 3;
                    } else {
                        if (rr_std <= 20.68031597137451) {
                            votes[16] = 3;
                        } else {
                            if (num_valleys <= 75.5) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.024858159013092518) {
                if (rr_median <= 145.5) {
                    votes[16] = 4;
                } else {
                    votes[16] = 4;
                }
            } else {
                if (diastolic_time <= 0.011158470064401627) {
                    if (rr_std <= 19.98945140838623) {
                        votes[16] = 0;
                    } else {
                        votes[16] = 0;
                    }
                } else {
                    if (rr_median <= 109.25) {
                        if (diastolic_time <= 0.034525828436017036) {
                            votes[16] = 4;
                        } else {
                            if (diastolic_time <= 0.08753475174307823) {
                                if (diastolic_time <= 0.06549717858433723) {
                                    if (rr_std <= 7.271890461444855) {
                                        votes[16] = 5;
                                    } else {
                                        votes[16] = 1;
                                    }
                                } else {
                                    if (dist_std <= 0.08904615417122841) {
                                        if (num_peaks <= 125.5) {
                                            votes[16] = 1;
                                        } else {
                                            votes[16] = 1;
                                        }
                                    } else {
                                        votes[16] = 1;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.04942111670970917) {
                                    votes[16] = 4;
                                } else {
                                    if (rr_std <= 1.8942058682441711) {
                                        if (num_valleys <= 71.5) {
                                            votes[16] = 1;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 94.75) {
                                            votes[16] = 3;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 99.22379302978516) {
                            if (num_peaks <= 93.5) {
                                votes[16] = 4;
                            } else {
                                if (rr_median <= 123.25) {
                                    votes[16] = 1;
                                } else {
                                    if (rr_std <= 2.7739559412002563) {
                                        votes[16] = 1;
                                    } else {
                                        votes[16] = 1;
                                    }
                                }
                            }
                        } else {
                            votes[16] = 4;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.7160444557666779) {
                if (dist_std <= 0.09452830255031586) {
                    if (rr_std <= 16.663230895996094) {
                        if (dist_std <= 0.05828857980668545) {
                            if (num_peaks <= 95.5) {
                                votes[16] = 5;
                            } else {
                                votes[16] = 0;
                            }
                        } else {
                            if (rr_median <= 64.75) {
                                votes[16] = 3;
                            } else {
                                votes[16] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 87.0) {
                            if (num_valleys <= 62.0) {
                                if (rr_median <= 75.5) {
                                    votes[16] = 2;
                                } else {
                                    if (num_peaks <= 89.5) {
                                        votes[16] = 2;
                                    } else {
                                        votes[16] = 2;
                                    }
                                }
                            } else {
                                votes[16] = 0;
                            }
                        } else {
                            if (rr_median <= 97.75) {
                                if (dist_std <= 0.05415351688861847) {
                                    votes[16] = 4;
                                } else {
                                    votes[16] = 4;
                                }
                            } else {
                                votes[16] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.6896102130413055) {
                        if (diastolic_time <= 0.5084166526794434) {
                            votes[16] = 2;
                        } else {
                            votes[16] = 2;
                        }
                    } else {
                        if (rr_std <= 13.059131145477295) {
                            if (rr_median <= 70.5) {
                                votes[16] = 3;
                            } else {
                                if (diastolic_time <= 0.3140452206134796) {
                                    votes[16] = 5;
                                } else {
                                    votes[16] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 30.65805435180664) {
                                if (num_valleys <= 55.0) {
                                    votes[16] = 2;
                                } else {
                                    votes[16] = 2;
                                }
                            } else {
                                votes[16] = 4;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 10.406283378601074) {
                    votes[16] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[16] = 1;
                    } else {
                        votes[16] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.059801796451210976) {
                if (diastolic_time <= 0.28359341621398926) {
                    votes[16] = 5;
                } else {
                    if (rr_std <= 7.789663076400757) {
                        votes[16] = 0;
                    } else {
                        if (rr_median <= 55.75) {
                            if (rr_std <= 11.857729434967041) {
                                votes[16] = 3;
                            } else {
                                votes[16] = 0;
                            }
                        } else {
                            if (num_peaks <= 116.0) {
                                votes[16] = 0;
                            } else {
                                votes[16] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 129.5) {
                    if (rr_std <= 34.36345958709717) {
                        if (dist_std <= 0.08174080029129982) {
                            votes[16] = 5;
                        } else {
                            votes[16] = 5;
                        }
                    } else {
                        votes[16] = 1;
                    }
                } else {
                    if (num_peaks <= 145.0) {
                        if (diastolic_time <= 0.3887999951839447) {
                            votes[16] = 3;
                        } else {
                            votes[16] = 0;
                        }
                    } else {
                        votes[16] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 17
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 68.5) {
            if (rr_std <= 14.17724084854126) {
                if (dist_std <= 0.0815422348678112) {
                    if (rr_std <= 10.076533794403076) {
                        if (rr_std <= 1.61909419298172) {
                            votes[17] = 3;
                        } else {
                            votes[17] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.13432539999485016) {
                            votes[17] = 5;
                        } else {
                            votes[17] = 3;
                        }
                    }
                } else {
                    if (num_valleys <= 63.5) {
                        if (rr_median <= 51.0) {
                            votes[17] = 3;
                        } else {
                            votes[17] = 3;
                        }
                    } else {
                        if (dist_std <= 0.12510612607002258) {
                            votes[17] = 1;
                        } else {
                            votes[17] = 1;
                        }
                    }
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (num_valleys <= 61.5) {
                        if (num_valleys <= 42.5) {
                            votes[17] = 4;
                        } else {
                            votes[17] = 3;
                        }
                    } else {
                        if (num_valleys <= 71.5) {
                            if (rr_std <= 20.045766830444336) {
                                votes[17] = 4;
                            } else {
                                votes[17] = 4;
                            }
                        } else {
                            votes[17] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 26.347627639770508) {
                        if (num_peaks <= 140.0) {
                            votes[17] = 3;
                        } else {
                            votes[17] = 3;
                        }
                    } else {
                        votes[17] = 3;
                    }
                }
            }
        } else {
            if (rr_median <= 110.75) {
                if (rr_std <= 15.716776847839355) {
                    if (rr_median <= 85.5) {
                        if (diastolic_time <= 0.16392824053764343) {
                            if (rr_std <= 12.83818006515503) {
                                if (rr_median <= 74.5) {
                                    votes[17] = 5;
                                } else {
                                    votes[17] = 5;
                                }
                            } else {
                                votes[17] = 3;
                            }
                        } else {
                            votes[17] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.11675150692462921) {
                            if (dist_std <= 0.05600583739578724) {
                                votes[17] = 0;
                            } else {
                                if (rr_median <= 99.25) {
                                    if (diastolic_time <= 0.0713537149131298) {
                                        votes[17] = 1;
                                    } else {
                                        votes[17] = 3;
                                    }
                                } else {
                                    votes[17] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 90.5) {
                                votes[17] = 1;
                            } else {
                                if (dist_std <= 0.08638226240873337) {
                                    votes[17] = 5;
                                } else {
                                    votes[17] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.1395789459347725) {
                        if (diastolic_time <= 0.03473631665110588) {
                            if (diastolic_time <= 0.03305843472480774) {
                                votes[17] = 0;
                            } else {
                                votes[17] = 4;
                            }
                        } else {
                            if (diastolic_time <= 0.08795887231826782) {
                                if (rr_median <= 93.0) {
                                    if (dist_std <= 0.06827743351459503) {
                                        if (dist_std <= 0.046651339158415794) {
                                            votes[17] = 1;
                                        } else {
                                            votes[17] = 1;
                                        }
                                    } else {
                                        votes[17] = 1;
                                    }
                                } else {
                                    if (diastolic_time <= 0.06479718536138535) {
                                        votes[17] = 1;
                                    } else {
                                        votes[17] = 5;
                                    }
                                }
                            } else {
                                if (num_valleys <= 67.5) {
                                    votes[17] = 3;
                                } else {
                                    if (num_valleys <= 72.5) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 133.5) {
                            if (num_peaks <= 118.0) {
                                votes[17] = 5;
                            } else {
                                if (rr_std <= 25.92537212371826) {
                                    votes[17] = 4;
                                } else {
                                    votes[17] = 4;
                                }
                            }
                        } else {
                            votes[17] = 3;
                        }
                    }
                }
            } else {
                if (num_valleys <= 62.5) {
                    if (num_valleys <= 45.5) {
                        votes[17] = 4;
                    } else {
                        if (dist_std <= 0.05481194145977497) {
                            votes[17] = 4;
                        } else {
                            votes[17] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.08757942169904709) {
                        if (rr_std <= 2.7739559412002563) {
                            votes[17] = 1;
                        } else {
                            if (num_valleys <= 69.5) {
                                votes[17] = 1;
                            } else {
                                votes[17] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 15.224037170410156) {
                            votes[17] = 1;
                        } else {
                            votes[17] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 74.25) {
                if (dist_std <= 0.09462481364607811) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.3760545402765274) {
                            votes[17] = 2;
                        } else {
                            votes[17] = 2;
                        }
                    } else {
                        if (rr_median <= 65.25) {
                            votes[17] = 3;
                        } else {
                            if (rr_median <= 67.5) {
                                votes[17] = 5;
                            } else {
                                votes[17] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 59.0) {
                        votes[17] = 3;
                    } else {
                        if (num_peaks <= 112.5) {
                            if (dist_std <= 0.10264686867594719) {
                                votes[17] = 2;
                            } else {
                                votes[17] = 2;
                            }
                        } else {
                            votes[17] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6350666582584381) {
                    if (rr_std <= 12.053974628448486) {
                        if (num_peaks <= 114.5) {
                            if (diastolic_time <= 0.32823188602924347) {
                                votes[17] = 5;
                            } else {
                                votes[17] = 5;
                            }
                        } else {
                            votes[17] = 2;
                        }
                    } else {
                        if (dist_std <= 0.03350056614726782) {
                            votes[17] = 1;
                        } else {
                            if (num_peaks <= 92.5) {
                                if (rr_median <= 88.5) {
                                    if (num_valleys <= 50.0) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 2;
                                    }
                                } else {
                                    if (rr_median <= 97.5) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 4;
                                    }
                                }
                            } else {
                                if (num_valleys <= 62.5) {
                                    votes[17] = 2;
                                } else {
                                    votes[17] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 1.9654526114463806) {
                        votes[17] = 5;
                    } else {
                        if (num_peaks <= 112.5) {
                            if (rr_median <= 92.5) {
                                votes[17] = 1;
                            } else {
                                votes[17] = 1;
                            }
                        } else {
                            votes[17] = 2;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06272310577332973) {
                if (diastolic_time <= 0.27446305751800537) {
                    votes[17] = 3;
                } else {
                    if (diastolic_time <= 0.8177777826786041) {
                        if (rr_std <= 8.07284927368164) {
                            votes[17] = 0;
                        } else {
                            if (rr_median <= 53.25) {
                                votes[17] = 0;
                            } else {
                                if (num_valleys <= 74.5) {
                                    if (num_valleys <= 73.5) {
                                        votes[17] = 0;
                                    } else {
                                        votes[17] = 0;
                                    }
                                } else {
                                    votes[17] = 0;
                                }
                            }
                        }
                    } else {
                        votes[17] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.8248888850212097) {
                    if (num_peaks <= 129.5) {
                        if (dist_std <= 0.09643012657761574) {
                            votes[17] = 5;
                        } else {
                            votes[17] = 3;
                        }
                    } else {
                        if (rr_std <= 2.213301360607147) {
                            votes[17] = 3;
                        } else {
                            votes[17] = 2;
                        }
                    }
                } else {
                    votes[17] = 1;
                }
            }
        }
    }
// Decision rules for tree 18
    if (diastolic_time <= 0.2355222851037979) {
        if (rr_std <= 14.367665767669678) {
            if (rr_median <= 72.5) {
                if (dist_std <= 0.12247582897543907) {
                    if (rr_std <= 10.171841144561768) {
                        if (num_peaks <= 131.5) {
                            if (num_peaks <= 128.5) {
                                if (dist_std <= 0.08434281498193741) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 3;
                                }
                            } else {
                                votes[18] = 3;
                            }
                        } else {
                            votes[18] = 3;
                        }
                    } else {
                        if (dist_std <= 0.04102793522179127) {
                            votes[18] = 5;
                        } else {
                            votes[18] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.06489072553813457) {
                        votes[18] = 4;
                    } else {
                        if (num_peaks <= 120.5) {
                            if (diastolic_time <= 0.1672251746058464) {
                                votes[18] = 3;
                            } else {
                                votes[18] = 2;
                            }
                        } else {
                            votes[18] = 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 99.25) {
                    if (diastolic_time <= 0.034256696701049805) {
                        votes[18] = 0;
                    } else {
                        if (rr_median <= 83.0) {
                            if (num_peaks <= 115.0) {
                                votes[18] = 3;
                            } else {
                                votes[18] = 5;
                            }
                        } else {
                            if (rr_median <= 90.0) {
                                if (num_valleys <= 64.0) {
                                    votes[18] = 1;
                                } else {
                                    votes[18] = 1;
                                }
                            } else {
                                if (dist_std <= 0.0947006493806839) {
                                    if (rr_median <= 95.75) {
                                        votes[18] = 5;
                                    } else {
                                        votes[18] = 5;
                                    }
                                } else {
                                    votes[18] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.20786985754966736) {
                        votes[18] = 4;
                    } else {
                        if (dist_std <= 0.04878314957022667) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 132.5) {
                if (dist_std <= 0.11573389917612076) {
                    if (diastolic_time <= 0.11842244863510132) {
                        if (diastolic_time <= 0.03485445864498615) {
                            if (diastolic_time <= 0.03305843472480774) {
                                votes[18] = 1;
                            } else {
                                votes[18] = 4;
                            }
                        } else {
                            if (rr_median <= 70.0) {
                                if (rr_std <= 17.657776832580566) {
                                    votes[18] = 4;
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.07572102546691895) {
                                    if (rr_median <= 88.75) {
                                        votes[18] = 3;
                                    } else {
                                        if (num_valleys <= 71.0) {
                                            votes[18] = 1;
                                        } else {
                                            votes[18] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 49.8645133972168) {
                                        if (diastolic_time <= 0.10326851531863213) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    } else {
                                        votes[18] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 59.75) {
                            votes[18] = 3;
                        } else {
                            if (diastolic_time <= 0.15222641080617905) {
                                if (rr_std <= 26.71805477142334) {
                                    votes[18] = 4;
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                votes[18] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 87.0) {
                        if (dist_std <= 0.12688825279474258) {
                            votes[18] = 4;
                        } else {
                            votes[18] = 3;
                        }
                    } else {
                        votes[18] = 3;
                    }
                }
            } else {
                if (diastolic_time <= 0.08716500550508499) {
                    if (dist_std <= 0.062291236594319344) {
                        if (rr_std <= 25.13917064666748) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 1;
                        }
                    } else {
                        votes[18] = 3;
                    }
                } else {
                    if (rr_median <= 83.0) {
                        if (num_peaks <= 140.0) {
                            votes[18] = 5;
                        } else {
                            votes[18] = 3;
                        }
                    } else {
                        votes[18] = 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (dist_std <= 0.0967726893723011) {
                if (diastolic_time <= 0.6350666582584381) {
                    if (rr_std <= 14.375516891479492) {
                        if (rr_median <= 65.75) {
                            votes[18] = 3;
                        } else {
                            if (num_peaks <= 108.0) {
                                votes[18] = 5;
                            } else {
                                votes[18] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 75.5) {
                            if (diastolic_time <= 0.5009666532278061) {
                                if (rr_median <= 57.5) {
                                    votes[18] = 1;
                                } else {
                                    votes[18] = 0;
                                }
                            } else {
                                votes[18] = 2;
                            }
                        } else {
                            if (rr_std <= 33.76094627380371) {
                                if (diastolic_time <= 0.31241999566555023) {
                                    votes[18] = 2;
                                } else {
                                    if (rr_median <= 97.75) {
                                        if (rr_median <= 81.0) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 4;
                                        }
                                    } else {
                                        votes[18] = 5;
                                    }
                                }
                            } else {
                                votes[18] = 5;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 48.0) {
                        votes[18] = 1;
                    } else {
                        if (rr_std <= 41.50863838195801) {
                            votes[18] = 2;
                        } else {
                            votes[18] = 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 116.5) {
                        if (rr_median <= 69.5) {
                            if (dist_std <= 0.13696152716875076) {
                                votes[18] = 3;
                            } else {
                                votes[18] = 2;
                            }
                        } else {
                            if (dist_std <= 0.17900366336107254) {
                                votes[18] = 2;
                            } else {
                                votes[18] = 2;
                            }
                        }
                    } else {
                        votes[18] = 5;
                    }
                } else {
                    if (diastolic_time <= 0.3188985586166382) {
                        votes[18] = 5;
                    } else {
                        if (dist_std <= 0.10959837213158607) {
                            votes[18] = 2;
                        } else {
                            votes[18] = 5;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06063430570065975) {
                if (diastolic_time <= 0.43341176211833954) {
                    if (rr_std <= 14.74038553237915) {
                        if (rr_median <= 61.5) {
                            votes[18] = 3;
                        } else {
                            if (dist_std <= 0.03495701774954796) {
                                votes[18] = 0;
                            } else {
                                votes[18] = 0;
                            }
                        }
                    } else {
                        votes[18] = 0;
                    }
                } else {
                    if (diastolic_time <= 0.7403999865055084) {
                        votes[18] = 0;
                    } else {
                        votes[18] = 0;
                    }
                }
            } else {
                if (num_peaks <= 136.0) {
                    if (diastolic_time <= 0.7812888920307159) {
                        if (num_valleys <= 76.5) {
                            votes[18] = 5;
                        } else {
                            votes[18] = 5;
                        }
                    } else {
                        votes[18] = 1;
                    }
                } else {
                    if (rr_median <= 80.75) {
                        votes[18] = 3;
                    } else {
                        votes[18] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 19
    if (num_peaks <= 135.5) {
        if (diastolic_time <= 0.20975074917078018) {
            if (rr_std <= 17.313146591186523) {
                if (rr_median <= 85.0) {
                    if (num_valleys <= 51.5) {
                        votes[19] = 4;
                    } else {
                        if (dist_std <= 0.1229875423014164) {
                            if (rr_median <= 72.5) {
                                if (rr_std <= 9.031359672546387) {
                                    if (diastolic_time <= 0.1856585368514061) {
                                        votes[19] = 3;
                                    } else {
                                        votes[19] = 3;
                                    }
                                } else {
                                    if (dist_std <= 0.05820121616125107) {
                                        if (rr_std <= 12.83354139328003) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        votes[19] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.173417568206787) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 120.5) {
                                if (rr_median <= 62.0) {
                                    votes[19] = 3;
                                } else {
                                    votes[19] = 5;
                                }
                            } else {
                                votes[19] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.22268088161945343) {
                        votes[19] = 4;
                    } else {
                        if (rr_median <= 96.5) {
                            if (rr_median <= 90.5) {
                                if (dist_std <= 0.0901741273701191) {
                                    votes[19] = 3;
                                } else {
                                    votes[19] = 1;
                                }
                            } else {
                                votes[19] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.11164726689457893) {
                                votes[19] = 1;
                            } else {
                                votes[19] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 88.0) {
                    if (dist_std <= 0.0662178322672844) {
                        if (num_valleys <= 72.5) {
                            if (num_peaks <= 125.5) {
                                votes[19] = 4;
                            } else {
                                if (num_valleys <= 66.0) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.1378421038389206) {
                                votes[19] = 1;
                            } else {
                                votes[19] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.06391502730548382) {
                            if (diastolic_time <= 0.03336065448820591) {
                                votes[19] = 4;
                            } else {
                                votes[19] = 4;
                            }
                        } else {
                            if (num_valleys <= 47.5) {
                                votes[19] = 4;
                            } else {
                                if (num_valleys <= 71.0) {
                                    votes[19] = 3;
                                } else {
                                    votes[19] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.07109695672988892) {
                        if (num_valleys <= 67.5) {
                            if (dist_std <= 0.037260184064507484) {
                                if (diastolic_time <= 0.0351265724748373) {
                                    votes[19] = 4;
                                } else {
                                    votes[19] = 4;
                                }
                            } else {
                                votes[19] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.08868881687521935) {
                                if (rr_median <= 117.0) {
                                    votes[19] = 1;
                                } else {
                                    votes[19] = 1;
                                }
                            } else {
                                votes[19] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 29.898712158203125) {
                            votes[19] = 3;
                        } else {
                            if (rr_std <= 37.36598777770996) {
                                votes[19] = 5;
                            } else {
                                votes[19] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.6263999938964844) {
                if (dist_std <= 0.0936918742954731) {
                    if (num_peaks <= 94.0) {
                        if (rr_median <= 88.0) {
                            if (rr_std <= 15.449340343475342) {
                                votes[19] = 5;
                            } else {
                                if (rr_std <= 33.76094627380371) {
                                    if (num_valleys <= 50.0) {
                                        if (diastolic_time <= 0.38519999384880066) {
                                            votes[19] = 2;
                                        } else {
                                            votes[19] = 2;
                                        }
                                    } else {
                                        votes[19] = 2;
                                    }
                                } else {
                                    votes[19] = 4;
                                }
                            }
                        } else {
                            if (dist_std <= 0.04315647855401039) {
                                votes[19] = 5;
                            } else {
                                votes[19] = 4;
                            }
                        }
                    } else {
                        if (dist_std <= 0.059801796451210976) {
                            if (rr_median <= 67.5) {
                                votes[19] = 5;
                            } else {
                                if (dist_std <= 0.05206706002354622) {
                                    if (dist_std <= 0.045557742938399315) {
                                        votes[19] = 0;
                                    } else {
                                        votes[19] = 0;
                                    }
                                } else {
                                    votes[19] = 0;
                                }
                            }
                        } else {
                            if (dist_std <= 0.06776775419712067) {
                                votes[19] = 5;
                            } else {
                                if (rr_std <= 3.8086243867874146) {
                                    votes[19] = 3;
                                } else {
                                    votes[19] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.6796177625656128) {
                        if (num_valleys <= 63.0) {
                            if (rr_median <= 69.5) {
                                if (num_valleys <= 59.5) {
                                    votes[19] = 2;
                                } else {
                                    votes[19] = 2;
                                }
                            } else {
                                votes[19] = 2;
                            }
                        } else {
                            votes[19] = 2;
                        }
                    } else {
                        if (num_valleys <= 65.0) {
                            if (rr_median <= 88.5) {
                                if (rr_std <= 20.080918312072754) {
                                    if (dist_std <= 0.12623434141278267) {
                                        votes[19] = 2;
                                    } else {
                                        votes[19] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 0.39072464406490326) {
                                        votes[19] = 2;
                                    } else {
                                        votes[19] = 2;
                                    }
                                }
                            } else {
                                votes[19] = 5;
                            }
                        } else {
                            if (dist_std <= 0.11625838652253151) {
                                votes[19] = 3;
                            } else {
                                votes[19] = 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    if (diastolic_time <= 0.7547999918460846) {
                        votes[19] = 1;
                    } else {
                        votes[19] = 5;
                    }
                } else {
                    votes[19] = 1;
                }
            }
        }
    } else {
        if (diastolic_time <= 0.2809973508119583) {
            if (rr_median <= 76.25) {
                if (dist_std <= 0.06529655307531357) {
                    if (rr_std <= 19.744558334350586) {
                        votes[19] = 3;
                    } else {
                        votes[19] = 3;
                    }
                } else {
                    if (num_peaks <= 144.0) {
                        votes[19] = 3;
                    } else {
                        votes[19] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.024444444105029106) {
                    if (rr_std <= 12.055727481842041) {
                        votes[19] = 0;
                    } else {
                        votes[19] = 0;
                    }
                } else {
                    if (rr_median <= 98.5) {
                        if (dist_std <= 0.05036349594593048) {
                            if (rr_median <= 81.0) {
                                votes[19] = 5;
                            } else {
                                votes[19] = 5;
                            }
                        } else {
                            votes[19] = 5;
                        }
                    } else {
                        if (dist_std <= 0.03644312545657158) {
                            votes[19] = 1;
                        } else {
                            if (rr_median <= 133.5) {
                                votes[19] = 1;
                            } else {
                                votes[19] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.07744227349758148) {
                if (rr_std <= 8.07284927368164) {
                    votes[19] = 3;
                } else {
                    if (dist_std <= 0.057930925861001015) {
                        if (rr_median <= 61.25) {
                            if (num_valleys <= 74.5) {
                                votes[19] = 0;
                            } else {
                                if (rr_std <= 11.014620304107666) {
                                    votes[19] = 0;
                                } else {
                                    votes[19] = 0;
                                }
                            }
                        } else {
                            votes[19] = 0;
                        }
                    } else {
                        votes[19] = 0;
                    }
                }
            } else {
                votes[19] = 2;
            }
        }
    }
// Decision rules for tree 20
    if (diastolic_time <= 0.2995384633541107) {
        if (rr_std <= 20.21463394165039) {
            if (rr_median <= 66.5) {
                if (num_peaks <= 87.0) {
                    votes[20] = 4;
                } else {
                    if (dist_std <= 0.04573480784893036) {
                        votes[20] = 3;
                    } else {
                        if (rr_std <= 7.389639377593994) {
                            if (diastolic_time <= 0.1577892154455185) {
                                if (dist_std <= 0.08593229949474335) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 3;
                                }
                            } else {
                                votes[20] = 3;
                            }
                        } else {
                            if (rr_std <= 11.905226230621338) {
                                if (diastolic_time <= 0.1203688308596611) {
                                    votes[20] = 4;
                                } else {
                                    votes[20] = 1;
                                }
                            } else {
                                if (dist_std <= 0.07660346105694771) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 101.0) {
                    if (diastolic_time <= 0.017164556309580803) {
                        votes[20] = 0;
                    } else {
                        if (rr_median <= 67.5) {
                            votes[20] = 2;
                        } else {
                            if (num_peaks <= 108.5) {
                                if (diastolic_time <= 0.1436040848493576) {
                                    votes[20] = 1;
                                } else {
                                    if (rr_std <= 0.5951652526855469) {
                                        votes[20] = 2;
                                    } else {
                                        votes[20] = 5;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.12163136154413223) {
                                    if (dist_std <= 0.10552358627319336) {
                                        if (num_valleys <= 71.5) {
                                            votes[20] = 3;
                                        } else {
                                            votes[20] = 5;
                                        }
                                    } else {
                                        votes[20] = 3;
                                    }
                                } else {
                                    if (dist_std <= 0.1296977624297142) {
                                        votes[20] = 5;
                                    } else {
                                        votes[20] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.20786985754966736) {
                        votes[20] = 4;
                    } else {
                        if (rr_std <= 13.559391975402832) {
                            if (dist_std <= 0.05804380029439926) {
                                votes[20] = 1;
                            } else {
                                votes[20] = 1;
                            }
                        } else {
                            votes[20] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 126.5) {
                if (rr_median <= 113.5) {
                    if (dist_std <= 0.10489846393465996) {
                        if (dist_std <= 0.07024845853447914) {
                            if (num_peaks <= 124.5) {
                                if (rr_std <= 26.014333724975586) {
                                    if (rr_std <= 22.53893756866455) {
                                        votes[20] = 4;
                                    } else {
                                        votes[20] = 4;
                                    }
                                } else {
                                    votes[20] = 4;
                                }
                            } else {
                                votes[20] = 4;
                            }
                        } else {
                            if (diastolic_time <= 0.0453086793422699) {
                                votes[20] = 4;
                            } else {
                                if (num_valleys <= 59.5) {
                                    votes[20] = 4;
                                } else {
                                    votes[20] = 3;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 24.853933334350586) {
                            votes[20] = 4;
                        } else {
                            votes[20] = 5;
                        }
                    }
                } else {
                    if (num_valleys <= 62.5) {
                        if (dist_std <= 0.056363362818956375) {
                            votes[20] = 4;
                        } else {
                            votes[20] = 5;
                        }
                    } else {
                        votes[20] = 1;
                    }
                }
            } else {
                if (rr_median <= 123.5) {
                    if (diastolic_time <= 0.07620153203606606) {
                        if (num_peaks <= 138.5) {
                            votes[20] = 3;
                        } else {
                            votes[20] = 1;
                        }
                    } else {
                        if (rr_median <= 80.75) {
                            if (diastolic_time <= 0.15434353053569794) {
                                if (dist_std <= 0.037983762100338936) {
                                    votes[20] = 4;
                                } else {
                                    votes[20] = 3;
                                }
                            } else {
                                votes[20] = 5;
                            }
                        } else {
                            if (num_valleys <= 72.5) {
                                votes[20] = 5;
                            } else {
                                votes[20] = 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.05308840051293373) {
                        votes[20] = 1;
                    } else {
                        votes[20] = 1;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (dist_std <= 0.09462481364607811) {
                if (diastolic_time <= 0.6167076826095581) {
                    if (rr_median <= 77.5) {
                        if (rr_std <= 13.463215351104736) {
                            if (rr_std <= 2.800943821668625) {
                                votes[20] = 3;
                            } else {
                                votes[20] = 5;
                            }
                        } else {
                            if (num_valleys <= 51.5) {
                                votes[20] = 2;
                            } else {
                                if (rr_median <= 65.5) {
                                    votes[20] = 1;
                                } else {
                                    votes[20] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 98.5) {
                            if (num_peaks <= 96.0) {
                                if (rr_median <= 90.0) {
                                    votes[20] = 4;
                                } else {
                                    votes[20] = 4;
                                }
                            } else {
                                votes[20] = 2;
                            }
                        } else {
                            votes[20] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 81.25) {
                        votes[20] = 1;
                    } else {
                        if (num_peaks <= 99.0) {
                            votes[20] = 1;
                        } else {
                            votes[20] = 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 112.5) {
                        if (rr_median <= 69.5) {
                            if (diastolic_time <= 0.32323913276195526) {
                                votes[20] = 2;
                            } else {
                                votes[20] = 2;
                            }
                        } else {
                            votes[20] = 2;
                        }
                    } else {
                        votes[20] = 5;
                    }
                } else {
                    if (rr_std <= 17.336353302001953) {
                        if (diastolic_time <= 0.5205333530902863) {
                            votes[20] = 5;
                        } else {
                            votes[20] = 2;
                        }
                    } else {
                        votes[20] = 2;
                    }
                }
            }
        } else {
            if (dist_std <= 0.05531284213066101) {
                if (dist_std <= 0.029118799604475498) {
                    votes[20] = 0;
                } else {
                    if (num_valleys <= 74.5) {
                        if (num_valleys <= 73.5) {
                            votes[20] = 0;
                        } else {
                            votes[20] = 0;
                        }
                    } else {
                        votes[20] = 0;
                    }
                }
            } else {
                if (num_peaks <= 123.5) {
                    votes[20] = 5;
                } else {
                    if (rr_std <= 3.702457070350647) {
                        votes[20] = 3;
                    } else {
                        if (num_peaks <= 138.0) {
                            votes[20] = 0;
                        } else {
                            votes[20] = 2;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 21
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_median <= 85.75) {
            if (rr_std <= 14.295656681060791) {
                if (rr_median <= 45.5) {
                    votes[21] = 1;
                } else {
                    if (rr_median <= 66.5) {
                        if (rr_std <= 9.50971794128418) {
                            if (rr_median <= 62.0) {
                                if (num_valleys <= 60.0) {
                                    votes[21] = 3;
                                } else {
                                    votes[21] = 3;
                                }
                            } else {
                                votes[21] = 3;
                            }
                        } else {
                            if (dist_std <= 0.036177609115839005) {
                                votes[21] = 5;
                            } else {
                                if (rr_std <= 10.75985860824585) {
                                    if (num_peaks <= 134.0) {
                                        votes[21] = 1;
                                    } else {
                                        votes[21] = 3;
                                    }
                                } else {
                                    votes[21] = 3;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.20603418350219727) {
                            if (diastolic_time <= 0.16392824053764343) {
                                if (rr_std <= 8.951667785644531) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 3;
                                }
                            } else {
                                votes[21] = 3;
                            }
                        } else {
                            votes[21] = 2;
                        }
                    }
                }
            } else {
                if (num_peaks <= 129.5) {
                    if (num_valleys <= 71.5) {
                        if (dist_std <= 0.12549446523189545) {
                            if (rr_median <= 74.25) {
                                if (rr_median <= 52.25) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.13158470392227173) {
                                    votes[21] = 3;
                                } else {
                                    if (rr_median <= 78.5) {
                                        votes[21] = 4;
                                    } else {
                                        votes[21] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[21] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.08904029428958893) {
                            votes[21] = 3;
                        } else {
                            votes[21] = 4;
                        }
                    }
                } else {
                    if (num_valleys <= 73.5) {
                        if (num_peaks <= 135.5) {
                            if (dist_std <= 0.041402965784072876) {
                                votes[21] = 4;
                            } else {
                                votes[21] = 3;
                            }
                        } else {
                            votes[21] = 3;
                        }
                    } else {
                        if (rr_std <= 31.35435390472412) {
                            if (num_valleys <= 79.5) {
                                votes[21] = 0;
                            } else {
                                votes[21] = 3;
                            }
                        } else {
                            votes[21] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.035933688282966614) {
                if (num_peaks <= 128.5) {
                    if (rr_std <= 94.22083282470703) {
                        votes[21] = 4;
                    } else {
                        votes[21] = 4;
                    }
                } else {
                    votes[21] = 1;
                }
            } else {
                if (diastolic_time <= 0.011158470064401627) {
                    votes[21] = 0;
                } else {
                    if (rr_median <= 101.5) {
                        if (rr_median <= 90.25) {
                            if (dist_std <= 0.06519025191664696) {
                                votes[21] = 4;
                            } else {
                                if (num_valleys <= 66.5) {
                                    votes[21] = 1;
                                } else {
                                    votes[21] = 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 131.5) {
                                if (diastolic_time <= 0.11849939823150635) {
                                    votes[21] = 1;
                                } else {
                                    votes[21] = 5;
                                }
                            } else {
                                votes[21] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 116.0) {
                            if (diastolic_time <= 0.06501374393701553) {
                                if (rr_std <= 45.61656379699707) {
                                    votes[21] = 1;
                                } else {
                                    votes[21] = 4;
                                }
                            } else {
                                votes[21] = 5;
                            }
                        } else {
                            if (rr_std <= 56.21688652038574) {
                                if (diastolic_time <= 0.06173854321241379) {
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
            }
        }
    } else {
        if (num_peaks <= 117.5) {
            if (diastolic_time <= 0.6230769455432892) {
                if (dist_std <= 0.09846341237425804) {
                    if (rr_std <= 11.5888032913208) {
                        if (num_peaks <= 98.0) {
                            votes[21] = 5;
                        } else {
                            votes[21] = 5;
                        }
                    } else {
                        if (dist_std <= 0.03597224410623312) {
                            if (rr_median <= 74.5) {
                                if (rr_std <= 16.010982036590576) {
                                    votes[21] = 0;
                                } else {
                                    votes[21] = 0;
                                }
                            } else {
                                votes[21] = 5;
                            }
                        } else {
                            if (rr_median <= 88.5) {
                                if (num_valleys <= 52.0) {
                                    if (num_valleys <= 48.5) {
                                        votes[21] = 2;
                                    } else {
                                        votes[21] = 2;
                                    }
                                } else {
                                    if (num_peaks <= 86.5) {
                                        votes[21] = 4;
                                    } else {
                                        votes[21] = 2;
                                    }
                                }
                            } else {
                                if (num_peaks <= 84.5) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 74.5) {
                        if (dist_std <= 0.17900366336107254) {
                            if (num_peaks <= 91.5) {
                                votes[21] = 2;
                            } else {
                                if (diastolic_time <= 0.36669090390205383) {
                                    votes[21] = 2;
                                } else {
                                    votes[21] = 2;
                                }
                            }
                        } else {
                            votes[21] = 2;
                        }
                    } else {
                        if (dist_std <= 0.11887858062982559) {
                            votes[21] = 5;
                        } else {
                            votes[21] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 79.5) {
                    votes[21] = 1;
                } else {
                    if (rr_std <= 3.573148488998413) {
                        votes[21] = 1;
                    } else {
                        votes[21] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06048966757953167) {
                if (diastolic_time <= 0.2513815388083458) {
                    votes[21] = 5;
                } else {
                    if (rr_std <= 6.039847135543823) {
                        votes[21] = 5;
                    } else {
                        if (rr_median <= 55.75) {
                            if (rr_std <= 11.857729434967041) {
                                votes[21] = 3;
                            } else {
                                if (num_valleys <= 76.0) {
                                    votes[21] = 0;
                                } else {
                                    votes[21] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.6487272679805756) {
                                if (num_valleys <= 85.5) {
                                    if (rr_std <= 8.84694766998291) {
                                        votes[21] = 0;
                                    } else {
                                        if (rr_median <= 61.5) {
                                            votes[21] = 0;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    }
                                } else {
                                    votes[21] = 0;
                                }
                            } else {
                                votes[21] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 141.0) {
                    if (rr_std <= 5.16317892074585) {
                        if (diastolic_time <= 0.35605454444885254) {
                            votes[21] = 5;
                        } else {
                            votes[21] = 5;
                        }
                    } else {
                        if (rr_median <= 75.25) {
                            votes[21] = 5;
                        } else {
                            votes[21] = 2;
                        }
                    }
                } else {
                    votes[21] = 2;
                }
            }
        }
    }
// Decision rules for tree 22
    if (diastolic_time <= 0.27653968334198) {
        if (rr_median <= 97.75) {
            if (rr_std <= 16.9524507522583) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.1390446275472641) {
                        if (num_valleys <= 80.5) {
                            if (rr_std <= 14.130724906921387) {
                                if (diastolic_time <= 0.19531868398189545) {
                                    if (rr_median <= 49.25) {
                                        votes[22] = 3;
                                    } else {
                                        if (rr_std <= 9.862521648406982) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    }
                                } else {
                                    votes[22] = 3;
                                }
                            } else {
                                if (rr_std <= 15.563547134399414) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 3;
                                }
                            }
                        } else {
                            if (dist_std <= 0.0429041963070631) {
                                votes[22] = 3;
                            } else {
                                votes[22] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 109.0) {
                            votes[22] = 2;
                        } else {
                            votes[22] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.01662295125424862) {
                        votes[22] = 0;
                    } else {
                        if (rr_std <= 0.5734450221061707) {
                            if (rr_std <= 0.4964006245136261) {
                                votes[22] = 5;
                            } else {
                                votes[22] = 2;
                            }
                        } else {
                            if (dist_std <= 0.12081002444028854) {
                                if (dist_std <= 0.05950426869094372) {
                                    if (num_valleys <= 75.5) {
                                        if (dist_std <= 0.04112817719578743) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        votes[22] = 3;
                                    }
                                } else {
                                    if (num_valleys <= 65.5) {
                                        if (dist_std <= 0.0921614058315754) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        if (dist_std <= 0.09824010357260704) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[22] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (dist_std <= 0.11573389917612076) {
                        if (dist_std <= 0.05884071625769138) {
                            if (num_valleys <= 72.5) {
                                if (rr_median <= 88.5) {
                                    if (num_peaks <= 124.5) {
                                        if (dist_std <= 0.02855992130935192) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.1481071636080742) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 4;
                                        }
                                    }
                                } else {
                                    votes[22] = 4;
                                }
                            } else {
                                if (dist_std <= 0.03977583907544613) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.06391502730548382) {
                                votes[22] = 4;
                            } else {
                                if (num_valleys <= 59.0) {
                                    votes[22] = 4;
                                } else {
                                    if (rr_median <= 88.75) {
                                        if (rr_median <= 75.25) {
                                            votes[22] = 3;
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
                        if (num_valleys <= 59.0) {
                            votes[22] = 3;
                        } else {
                            votes[22] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 25.69298267364502) {
                        if (diastolic_time <= 0.15030153840780258) {
                            if (diastolic_time <= 0.0995263159275055) {
                                votes[22] = 3;
                            } else {
                                votes[22] = 3;
                            }
                        } else {
                            votes[22] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.11569743603467941) {
                            if (diastolic_time <= 0.07518095150589943) {
                                votes[22] = 3;
                            } else {
                                votes[22] = 1;
                            }
                        } else {
                            votes[22] = 4;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (dist_std <= 0.048564210534095764) {
                    votes[22] = 4;
                } else {
                    if (rr_std <= 39.50735664367676) {
                        votes[22] = 1;
                    } else {
                        votes[22] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.08774392679333687) {
                    if (diastolic_time <= 0.035074153915047646) {
                        votes[22] = 2;
                    } else {
                        if (num_valleys <= 69.5) {
                            votes[22] = 1;
                        } else {
                            if (rr_std <= 18.396760940551758) {
                                if (diastolic_time <= 0.062113821506500244) {
                                    votes[22] = 1;
                                } else {
                                    votes[22] = 1;
                                }
                            } else {
                                votes[22] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 15.224037170410156) {
                        if (rr_std <= 1.1022409200668335) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 1;
                        }
                    } else {
                        if (rr_std <= 27.729812622070312) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (dist_std <= 0.09846341237425804) {
                if (diastolic_time <= 0.6350666582584381) {
                    if (rr_std <= 15.560819149017334) {
                        if (rr_std <= 11.769414901733398) {
                            if (rr_median <= 65.75) {
                                votes[22] = 3;
                            } else {
                                if (diastolic_time <= 0.4953666776418686) {
                                    votes[22] = 5;
                                } else {
                                    votes[22] = 5;
                                }
                            }
                        } else {
                            votes[22] = 0;
                        }
                    } else {
                        if (rr_median <= 78.25) {
                            if (num_peaks <= 105.0) {
                                if (num_valleys <= 48.5) {
                                    votes[22] = 2;
                                } else {
                                    votes[22] = 2;
                                }
                            } else {
                                votes[22] = 0;
                            }
                        } else {
                            if (rr_median <= 98.5) {
                                if (rr_median <= 88.5) {
                                    if (num_peaks <= 88.5) {
                                        votes[22] = 4;
                                    } else {
                                        votes[22] = 5;
                                    }
                                } else {
                                    votes[22] = 4;
                                }
                            } else {
                                votes[22] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 119.0) {
                        if (rr_median <= 81.0) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 1;
                        }
                    } else {
                        votes[22] = 5;
                    }
                }
            } else {
                if (rr_median <= 74.5) {
                    if (num_peaks <= 111.5) {
                        if (num_valleys <= 39.5) {
                            votes[22] = 2;
                        } else {
                            if (num_valleys <= 56.0) {
                                votes[22] = 2;
                            } else {
                                votes[22] = 2;
                            }
                        }
                    } else {
                        votes[22] = 2;
                    }
                } else {
                    if (rr_std <= 5.5586313009262085) {
                        votes[22] = 5;
                    } else {
                        votes[22] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06456683948636055) {
                if (rr_std <= 8.07284927368164) {
                    votes[22] = 0;
                } else {
                    if (diastolic_time <= 0.8066666722297668) {
                        if (rr_median <= 61.5) {
                            if (num_valleys <= 74.5) {
                                votes[22] = 0;
                            } else {
                                votes[22] = 0;
                            }
                        } else {
                            if (dist_std <= 0.046083780005574226) {
                                votes[22] = 0;
                            } else {
                                if (num_peaks <= 137.5) {
                                    votes[22] = 0;
                                } else {
                                    votes[22] = 0;
                                }
                            }
                        }
                    } else {
                        votes[22] = 0;
                    }
                }
            } else {
                if (num_peaks <= 142.5) {
                    if (rr_median <= 84.0) {
                        if (rr_median <= 70.5) {
                            votes[22] = 5;
                        } else {
                            votes[22] = 3;
                        }
                    } else {
                        votes[22] = 5;
                    }
                } else {
                    votes[22] = 2;
                }
            }
        }
    }
// Decision rules for tree 23
    if (diastolic_time <= 0.2538642883300781) {
        if (rr_median <= 99.25) {
            if (rr_std <= 17.313146591186523) {
                if (rr_median <= 75.5) {
                    if (dist_std <= 0.14075222611427307) {
                        if (num_valleys <= 57.0) {
                            votes[23] = 4;
                        } else {
                            if (num_valleys <= 84.0) {
                                if (diastolic_time <= 0.04347204975783825) {
                                    if (diastolic_time <= 0.027314051054418087) {
                                        votes[23] = 3;
                                    } else {
                                        votes[23] = 4;
                                    }
                                } else {
                                    if (rr_std <= 1.673791229724884) {
                                        if (rr_median <= 64.5) {
                                            votes[23] = 1;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 9.269154071807861) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[23] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.19720634818077087) {
                            votes[23] = 4;
                        } else {
                            votes[23] = 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.046086907386779785) {
                        votes[23] = 0;
                    } else {
                        if (rr_std <= 13.34977388381958) {
                            if (dist_std <= 0.09889554977416992) {
                                if (dist_std <= 0.04949212446808815) {
                                    votes[23] = 5;
                                } else {
                                    if (num_peaks <= 112.0) {
                                        votes[23] = 1;
                                    } else {
                                        votes[23] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 0.6694315373897552) {
                                    votes[23] = 1;
                                } else {
                                    votes[23] = 5;
                                }
                            }
                        } else {
                            votes[23] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.05884071625769138) {
                        if (num_valleys <= 77.0) {
                            if (num_peaks <= 124.5) {
                                if (diastolic_time <= 0.17384927719831467) {
                                    votes[23] = 4;
                                } else {
                                    votes[23] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.11110234633088112) {
                                    votes[23] = 4;
                                } else {
                                    if (num_valleys <= 68.0) {
                                        votes[23] = 4;
                                    } else {
                                        if (dist_std <= 0.037983762100338936) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[23] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.04293016158044338) {
                            votes[23] = 4;
                        } else {
                            if (num_peaks <= 105.5) {
                                votes[23] = 4;
                            } else {
                                if (dist_std <= 0.10745267197489738) {
                                    if (diastolic_time <= 0.09715233743190765) {
                                        votes[23] = 3;
                                    } else {
                                        votes[23] = 3;
                                    }
                                } else {
                                    votes[23] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 77.0) {
                        if (num_valleys <= 75.0) {
                            votes[23] = 3;
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
            if (num_valleys <= 64.5) {
                if (dist_std <= 0.056363362818956375) {
                    if (diastolic_time <= 0.04960543476045132) {
                        votes[23] = 4;
                    } else {
                        votes[23] = 4;
                    }
                } else {
                    votes[23] = 1;
                }
            } else {
                if (diastolic_time <= 0.027160183526575565) {
                    votes[23] = 2;
                } else {
                    if (dist_std <= 0.035870665684342384) {
                        votes[23] = 1;
                    } else {
                        if (rr_std <= 31.160731315612793) {
                            if (num_valleys <= 80.5) {
                                votes[23] = 1;
                            } else {
                                votes[23] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.05057394132018089) {
                                votes[23] = 1;
                            } else {
                                votes[23] = 1;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_time <= 0.705381840467453) {
                if (dist_std <= 0.09462481364607811) {
                    if (rr_std <= 16.005825519561768) {
                        if (rr_median <= 64.0) {
                            votes[23] = 3;
                        } else {
                            if (rr_std <= 9.704524993896484) {
                                votes[23] = 5;
                            } else {
                                votes[23] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 88.5) {
                            if (num_peaks <= 101.0) {
                                if (num_peaks <= 80.5) {
                                    votes[23] = 4;
                                } else {
                                    if (rr_median <= 75.5) {
                                        votes[23] = 2;
                                    } else {
                                        if (rr_median <= 79.5) {
                                            votes[23] = 2;
                                        } else {
                                            votes[23] = 2;
                                        }
                                    }
                                }
                            } else {
                                votes[23] = 3;
                            }
                        } else {
                            if (rr_std <= 34.23288917541504) {
                                votes[23] = 4;
                            } else {
                                votes[23] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.6796177625656128) {
                        if (diastolic_time <= 0.5084166526794434) {
                            votes[23] = 2;
                        } else {
                            votes[23] = 2;
                        }
                    } else {
                        if (rr_std <= 4.574725866317749) {
                            votes[23] = 5;
                        } else {
                            if (dist_std <= 0.10485673323273659) {
                                votes[23] = 4;
                            } else {
                                if (num_valleys <= 40.0) {
                                    votes[23] = 2;
                                } else {
                                    if (num_valleys <= 49.0) {
                                        votes[23] = 2;
                                    } else {
                                        votes[23] = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    votes[23] = 5;
                } else {
                    if (rr_median <= 81.0) {
                        votes[23] = 1;
                    } else {
                        votes[23] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06026074476540089) {
                if (rr_median <= 53.5) {
                    votes[23] = 3;
                } else {
                    if (rr_std <= 6.560080528259277) {
                        votes[23] = 0;
                    } else {
                        if (diastolic_time <= 0.2967362552881241) {
                            votes[23] = 0;
                        } else {
                            if (rr_median <= 61.5) {
                                if (num_valleys <= 75.5) {
                                    votes[23] = 0;
                                } else {
                                    votes[23] = 0;
                                }
                            } else {
                                votes[23] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 111.5) {
                    votes[23] = 1;
                } else {
                    if (num_peaks <= 131.0) {
                        votes[23] = 5;
                    } else {
                        if (dist_std <= 0.07209363207221031) {
                            votes[23] = 0;
                        } else {
                            votes[23] = 3;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 24
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 72.25) {
            if (rr_std <= 17.53319549560547) {
                if (num_peaks <= 130.5) {
                    if (diastolic_time <= 0.05676368437707424) {
                        votes[24] = 4;
                    } else {
                        if (rr_median <= 47.0) {
                            votes[24] = 1;
                        } else {
                            if (rr_median <= 55.5) {
                                votes[24] = 3;
                            } else {
                                if (diastolic_time <= 0.08639360591769218) {
                                    votes[24] = 3;
                                } else {
                                    if (diastolic_time <= 0.15533974766731262) {
                                        votes[24] = 5;
                                    } else {
                                        votes[24] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.05037383548915386) {
                        if (dist_std <= 0.035628315061330795) {
                            if (num_peaks <= 141.0) {
                                votes[24] = 5;
                            } else {
                                votes[24] = 3;
                            }
                        } else {
                            votes[24] = 3;
                        }
                    } else {
                        if (rr_std <= 9.269154071807861) {
                            votes[24] = 3;
                        } else {
                            votes[24] = 1;
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (rr_std <= 20.045766830444336) {
                        votes[24] = 4;
                    } else {
                        if (num_valleys <= 72.5) {
                            if (diastolic_time <= 0.15053261816501617) {
                                if (rr_median <= 67.5) {
                                    votes[24] = 4;
                                } else {
                                    votes[24] = 4;
                                }
                            } else {
                                votes[24] = 4;
                            }
                        } else {
                            votes[24] = 4;
                        }
                    }
                } else {
                    if (rr_median <= 61.75) {
                        votes[24] = 1;
                    } else {
                        votes[24] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 101.0) {
                if (diastolic_time <= 0.01563199982047081) {
                    votes[24] = 0;
                } else {
                    if (dist_std <= 0.03710787184536457) {
                        if (rr_std <= 16.85991859436035) {
                            votes[24] = 5;
                        } else {
                            if (num_peaks <= 129.5) {
                                votes[24] = 4;
                            } else {
                                votes[24] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.15904156863689423) {
                            if (dist_std <= 0.1236787810921669) {
                                if (num_peaks <= 139.0) {
                                    if (rr_std <= 36.99228858947754) {
                                        if (num_peaks <= 108.5) {
                                            votes[24] = 1;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.07139449566602707) {
                                            votes[24] = 1;
                                        } else {
                                            votes[24] = 1;
                                        }
                                    }
                                } else {
                                    votes[24] = 5;
                                }
                            } else {
                                votes[24] = 5;
                            }
                        } else {
                            if (rr_median <= 83.5) {
                                votes[24] = 5;
                            } else {
                                votes[24] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_valleys <= 62.5) {
                    if (rr_median <= 119.5) {
                        votes[24] = 1;
                    } else {
                        if (diastolic_time <= 0.039659688249230385) {
                            votes[24] = 4;
                        } else {
                            votes[24] = 4;
                        }
                    }
                } else {
                    if (rr_median <= 194.5) {
                        if (num_valleys <= 83.0) {
                            if (num_peaks <= 114.5) {
                                votes[24] = 1;
                            } else {
                                if (rr_median <= 110.75) {
                                    if (rr_median <= 107.75) {
                                        votes[24] = 1;
                                    } else {
                                        votes[24] = 5;
                                    }
                                } else {
                                    if (dist_std <= 0.054077424108982086) {
                                        votes[24] = 1;
                                    } else {
                                        if (diastolic_time <= 0.11331782117486) {
                                            votes[24] = 1;
                                        } else {
                                            votes[24] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[24] = 5;
                        }
                    } else {
                        votes[24] = 4;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.06007683090865612) {
            if (num_peaks <= 108.5) {
                if (diastolic_time <= 0.6223333477973938) {
                    if (dist_std <= 0.03413197211921215) {
                        votes[24] = 5;
                    } else {
                        if (rr_median <= 76.0) {
                            votes[24] = 2;
                        } else {
                            if (diastolic_time <= 0.3307272642850876) {
                                votes[24] = 2;
                            } else {
                                votes[24] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.9034999907016754) {
                        votes[24] = 1;
                    } else {
                        votes[24] = 1;
                    }
                }
            } else {
                if (rr_std <= 8.07284927368164) {
                    if (num_valleys <= 75.0) {
                        votes[24] = 5;
                    } else {
                        votes[24] = 3;
                    }
                } else {
                    if (rr_median <= 55.75) {
                        if (diastolic_time <= 0.35592982172966003) {
                            votes[24] = 3;
                        } else {
                            votes[24] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.2726285755634308) {
                            votes[24] = 0;
                        } else {
                            if (diastolic_time <= 0.7523999810218811) {
                                votes[24] = 0;
                            } else {
                                votes[24] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.6350666582584381) {
                if (rr_std <= 0.6935192346572876) {
                    if (rr_median <= 74.25) {
                        if (rr_std <= 0.3970015197992325) {
                            votes[24] = 2;
                        } else {
                            if (num_peaks <= 113.0) {
                                votes[24] = 2;
                            } else {
                                votes[24] = 2;
                            }
                        }
                    } else {
                        votes[24] = 5;
                    }
                } else {
                    if (rr_std <= 14.812215328216553) {
                        if (num_valleys <= 65.5) {
                            if (diastolic_time <= 0.2973542809486389) {
                                votes[24] = 5;
                            } else {
                                if (num_valleys <= 59.5) {
                                    votes[24] = 5;
                                } else {
                                    votes[24] = 5;
                                }
                            }
                        } else {
                            if (dist_std <= 0.07232498750090599) {
                                votes[24] = 5;
                            } else {
                                if (rr_std <= 2.1556674242019653) {
                                    votes[24] = 3;
                                } else {
                                    votes[24] = 3;
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 0.06973947957158089) {
                            votes[24] = 4;
                        } else {
                            if (rr_median <= 82.5) {
                                if (rr_std <= 20.462517738342285) {
                                    votes[24] = 2;
                                } else {
                                    votes[24] = 2;
                                }
                            } else {
                                if (rr_median <= 85.75) {
                                    votes[24] = 5;
                                } else {
                                    if (diastolic_time <= 0.38920000195503235) {
                                        votes[24] = 2;
                                    } else {
                                        votes[24] = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 120.0) {
                    if (diastolic_time <= 0.8155111074447632) {
                        votes[24] = 1;
                    } else {
                        votes[24] = 1;
                    }
                } else {
                    votes[24] = 0;
                }
            }
        }
    }
// Decision rules for tree 25
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 82.75) {
            if (rr_std <= 16.9524507522583) {
                if (rr_median <= 68.75) {
                    if (num_peaks <= 86.5) {
                        votes[25] = 4;
                    } else {
                        if (rr_std <= 9.526742935180664) {
                            if (dist_std <= 0.1229875423014164) {
                                votes[25] = 3;
                            } else {
                                votes[25] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.06639344245195389) {
                                votes[25] = 4;
                            } else {
                                if (rr_std <= 10.669270515441895) {
                                    if (rr_std <= 10.06764030456543) {
                                        votes[25] = 3;
                                    } else {
                                        votes[25] = 1;
                                    }
                                } else {
                                    if (dist_std <= 0.035987868905067444) {
                                        votes[25] = 3;
                                    } else {
                                        votes[25] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.34977388381958) {
                        if (rr_median <= 72.25) {
                            if (rr_median <= 70.5) {
                                votes[25] = 5;
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
                if (num_peaks <= 130.5) {
                    if (diastolic_time <= 0.04520588181912899) {
                        votes[25] = 4;
                    } else {
                        if (diastolic_time <= 0.11842244863510132) {
                            if (diastolic_time <= 0.07599236816167831) {
                                votes[25] = 3;
                            } else {
                                if (num_valleys <= 67.0) {
                                    votes[25] = 4;
                                } else {
                                    votes[25] = 5;
                                }
                            }
                        } else {
                            if (dist_std <= 0.05077305994927883) {
                                if (dist_std <= 0.038335224613547325) {
                                    votes[25] = 4;
                                } else {
                                    if (dist_std <= 0.045141974464058876) {
                                        votes[25] = 4;
                                    } else {
                                        votes[25] = 4;
                                    }
                                }
                            } else {
                                votes[25] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 75.5) {
                        if (rr_std <= 32.416404724121094) {
                            if (num_peaks <= 142.0) {
                                votes[25] = 3;
                            } else {
                                votes[25] = 3;
                            }
                        } else {
                            votes[25] = 1;
                        }
                    } else {
                        votes[25] = 4;
                    }
                }
            }
        } else {
            if (dist_std <= 0.03074848558753729) {
                if (num_valleys <= 66.0) {
                    votes[25] = 4;
                } else {
                    votes[25] = 5;
                }
            } else {
                if (diastolic_time <= 0.13776064664125443) {
                    if (diastolic_time <= 0.011158470064401627) {
                        if (num_peaks <= 141.0) {
                            votes[25] = 2;
                        } else {
                            votes[25] = 0;
                        }
                    } else {
                        if (rr_median <= 98.5) {
                            if (rr_median <= 88.25) {
                                if (rr_median <= 85.75) {
                                    if (rr_std <= 26.587416648864746) {
                                        votes[25] = 5;
                                    } else {
                                        votes[25] = 1;
                                    }
                                } else {
                                    votes[25] = 1;
                                }
                            } else {
                                if (diastolic_time <= 0.07635921239852905) {
                                    votes[25] = 1;
                                } else {
                                    votes[25] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 78.55426025390625) {
                                if (num_valleys <= 54.5) {
                                    votes[25] = 1;
                                } else {
                                    if (rr_median <= 135.5) {
                                        if (rr_median <= 109.25) {
                                            votes[25] = 1;
                                        } else {
                                            votes[25] = 1;
                                        }
                                    } else {
                                        votes[25] = 1;
                                    }
                                }
                            } else {
                                votes[25] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 16.262849807739258) {
                        if (diastolic_time <= 0.1513962224125862) {
                            votes[25] = 1;
                        } else {
                            if (diastolic_time <= 0.16641546040773392) {
                                votes[25] = 5;
                            } else {
                                votes[25] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 125.5) {
                            votes[25] = 4;
                        } else {
                            votes[25] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 126.5) {
            if (dist_std <= 0.12470399960875511) {
                if (diastolic_time <= 0.6335151493549347) {
                    if (rr_std <= 14.413682460784912) {
                        if (dist_std <= 0.0967726893723011) {
                            if (rr_median <= 65.5) {
                                votes[25] = 3;
                            } else {
                                if (rr_std <= 7.923735857009888) {
                                    votes[25] = 5;
                                } else {
                                    if (rr_median <= 67.75) {
                                        votes[25] = 5;
                                    } else {
                                        votes[25] = 0;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 64.5) {
                                if (rr_std <= 0.7733432352542877) {
                                    votes[25] = 2;
                                } else {
                                    votes[25] = 2;
                                }
                            } else {
                                votes[25] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 87.5) {
                            if (num_peaks <= 103.0) {
                                if (dist_std <= 0.07610125839710236) {
                                    if (dist_std <= 0.05539041943848133) {
                                        votes[25] = 2;
                                    } else {
                                        if (diastolic_time <= 0.3233550786972046) {
                                            votes[25] = 2;
                                        } else {
                                            votes[25] = 2;
                                        }
                                    }
                                } else {
                                    votes[25] = 4;
                                }
                            } else {
                                if (rr_median <= 65.5) {
                                    votes[25] = 2;
                                } else {
                                    if (rr_median <= 72.0) {
                                        votes[25] = 0;
                                    } else {
                                        votes[25] = 0;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 94.5) {
                                if (dist_std <= 0.04465480521321297) {
                                    votes[25] = 1;
                                } else {
                                    votes[25] = 4;
                                }
                            } else {
                                votes[25] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.479978561401367) {
                        votes[25] = 5;
                    } else {
                        if (rr_median <= 79.25) {
                            votes[25] = 1;
                        } else {
                            votes[25] = 1;
                        }
                    }
                }
            } else {
                if (num_valleys <= 38.5) {
                    votes[25] = 5;
                } else {
                    if (num_peaks <= 108.5) {
                        if (diastolic_time <= 0.27072401344776154) {
                            votes[25] = 2;
                        } else {
                            votes[25] = 2;
                        }
                    } else {
                        if (dist_std <= 0.13486284017562866) {
                            votes[25] = 5;
                        } else {
                            votes[25] = 2;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06402583606541157) {
                if (diastolic_time <= 0.27636781334877014) {
                    if (rr_std <= 14.586450099945068) {
                        votes[25] = 3;
                    } else {
                        votes[25] = 0;
                    }
                } else {
                    if (rr_std <= 6.039847135543823) {
                        votes[25] = 5;
                    } else {
                        if (num_peaks <= 132.5) {
                            votes[25] = 0;
                        } else {
                            if (diastolic_time <= 0.3118327260017395) {
                                votes[25] = 0;
                            } else {
                                if (rr_std <= 8.07284927368164) {
                                    votes[25] = 0;
                                } else {
                                    if (dist_std <= 0.029578506015241146) {
                                        votes[25] = 0;
                                    } else {
                                        votes[25] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 19.262314796447754) {
                    votes[25] = 3;
                } else {
                    votes[25] = 2;
                }
            }
        }
    }
// Decision rules for tree 26
    if (diastolic_time <= 0.20815245807170868) {
        if (rr_median <= 82.75) {
            if (rr_std <= 20.299455642700195) {
                if (rr_median <= 66.25) {
                    if (num_valleys <= 55.0) {
                        votes[26] = 4;
                    } else {
                        if (dist_std <= 0.07846580073237419) {
                            if (rr_std <= 10.076533794403076) {
                                if (dist_std <= 0.06589098647236824) {
                                    votes[26] = 3;
                                } else {
                                    votes[26] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.12640519812703133) {
                                    if (diastolic_time <= 0.08107966184616089) {
                                        votes[26] = 3;
                                    } else {
                                        votes[26] = 5;
                                    }
                                } else {
                                    votes[26] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 121.5) {
                                if (rr_median <= 48.0) {
                                    votes[26] = 4;
                                } else {
                                    votes[26] = 3;
                                }
                            } else {
                                votes[26] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 11.911319255828857) {
                        if (diastolic_time <= 0.15604308247566223) {
                            if (num_valleys <= 66.0) {
                                votes[26] = 5;
                            } else {
                                votes[26] = 5;
                            }
                        } else {
                            votes[26] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.12473463267087936) {
                            if (rr_median <= 72.75) {
                                votes[26] = 5;
                            } else {
                                votes[26] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.1520664095878601) {
                                votes[26] = 4;
                            } else {
                                votes[26] = 4;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.11350099742412567) {
                        if (num_valleys <= 72.5) {
                            if (diastolic_time <= 0.16104000061750412) {
                                votes[26] = 4;
                            } else {
                                votes[26] = 4;
                            }
                        } else {
                            votes[26] = 4;
                        }
                    } else {
                        votes[26] = 5;
                    }
                } else {
                    if (num_peaks <= 139.5) {
                        votes[26] = 3;
                    } else {
                        votes[26] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.036853354424238205) {
                if (num_peaks <= 129.5) {
                    if (num_valleys <= 67.5) {
                        votes[26] = 4;
                    } else {
                        votes[26] = 4;
                    }
                } else {
                    votes[26] = 1;
                }
            } else {
                if (rr_median <= 99.25) {
                    if (diastolic_time <= 0.01563199982047081) {
                        votes[26] = 0;
                    } else {
                        if (rr_std <= 36.76111030578613) {
                            if (diastolic_time <= 0.16641546040773392) {
                                if (dist_std <= 0.10523688420653343) {
                                    if (rr_median <= 92.5) {
                                        if (rr_median <= 85.25) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 3;
                                        }
                                    } else {
                                        if (num_valleys <= 63.0) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 63.5) {
                                        votes[26] = 1;
                                    } else {
                                        votes[26] = 1;
                                    }
                                }
                            } else {
                                votes[26] = 5;
                            }
                        } else {
                            votes[26] = 1;
                        }
                    }
                } else {
                    if (num_valleys <= 59.0) {
                        if (dist_std <= 0.07312018051743507) {
                            votes[26] = 4;
                        } else {
                            votes[26] = 3;
                        }
                    } else {
                        if (rr_median <= 125.25) {
                            if (rr_std <= 10.493690490722656) {
                                if (dist_std <= 0.07734792307019234) {
                                    votes[26] = 1;
                                } else {
                                    votes[26] = 1;
                                }
                            } else {
                                if (diastolic_time <= 0.059579504653811455) {
                                    votes[26] = 1;
                                } else {
                                    votes[26] = 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 111.0) {
                                votes[26] = 1;
                            } else {
                                if (rr_std <= 1.9345224499702454) {
                                    votes[26] = 1;
                                } else {
                                    votes[26] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05554366298019886) {
            if (num_peaks <= 104.0) {
                if (diastolic_time <= 0.4613676518201828) {
                    if (dist_std <= 0.03350056614726782) {
                        votes[26] = 5;
                    } else {
                        if (rr_median <= 88.5) {
                            votes[26] = 2;
                        } else {
                            votes[26] = 4;
                        }
                    }
                } else {
                    if (rr_median <= 81.0) {
                        votes[26] = 5;
                    } else {
                        votes[26] = 1;
                    }
                }
            } else {
                if (rr_median <= 55.75) {
                    if (rr_std <= 11.857729434967041) {
                        votes[26] = 3;
                    } else {
                        votes[26] = 0;
                    }
                } else {
                    if (diastolic_time <= 0.2534712553024292) {
                        votes[26] = 5;
                    } else {
                        if (rr_std <= 8.84694766998291) {
                            votes[26] = 0;
                        } else {
                            if (dist_std <= 0.04599898308515549) {
                                if (rr_median <= 61.5) {
                                    votes[26] = 0;
                                } else {
                                    votes[26] = 0;
                                }
                            } else {
                                if (num_peaks <= 135.0) {
                                    votes[26] = 0;
                                } else {
                                    votes[26] = 0;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.8262222111225128) {
                if (rr_std <= 0.6896102130413055) {
                    if (rr_median <= 74.25) {
                        if (dist_std <= 0.09838484227657318) {
                            votes[26] = 3;
                        } else {
                            if (rr_median <= 69.5) {
                                if (rr_std <= 0.5734450221061707) {
                                    votes[26] = 2;
                                } else {
                                    votes[26] = 2;
                                }
                            } else {
                                votes[26] = 2;
                            }
                        }
                    } else {
                        votes[26] = 5;
                    }
                } else {
                    if (rr_std <= 14.812215328216553) {
                        if (rr_median <= 60.0) {
                            votes[26] = 3;
                        } else {
                            if (num_peaks <= 129.5) {
                                if (num_peaks <= 88.5) {
                                    votes[26] = 1;
                                } else {
                                    if (diastolic_time <= 0.3215000033378601) {
                                        votes[26] = 5;
                                    } else {
                                        if (diastolic_time <= 0.45930883288383484) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 1.7413411736488342) {
                                    votes[26] = 3;
                                } else {
                                    votes[26] = 5;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 62.0) {
                            if (rr_median <= 90.5) {
                                if (rr_median <= 77.25) {
                                    if (num_peaks <= 77.0) {
                                        votes[26] = 2;
                                    } else {
                                        votes[26] = 2;
                                    }
                                } else {
                                    votes[26] = 2;
                                }
                            } else {
                                votes[26] = 4;
                            }
                        } else {
                            if (dist_std <= 0.06507794186472893) {
                                votes[26] = 0;
                            } else {
                                if (num_peaks <= 126.5) {
                                    votes[26] = 5;
                                } else {
                                    votes[26] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 82.75) {
                    votes[26] = 2;
                } else {
                    votes[26] = 1;
                }
            }
        }
    }
// Decision rules for tree 27
    if (diastolic_time <= 0.24313978105783463) {
        if (rr_median <= 76.25) {
            if (rr_std <= 17.94282627105713) {
                if (dist_std <= 0.13722970336675644) {
                    if (dist_std <= 0.027107800357043743) {
                        votes[27] = 5;
                    } else {
                        if (num_peaks <= 131.5) {
                            if (num_peaks <= 119.5) {
                                if (rr_median <= 66.0) {
                                    votes[27] = 3;
                                } else {
                                    votes[27] = 3;
                                }
                            } else {
                                if (dist_std <= 0.060626208782196045) {
                                    if (dist_std <= 0.03819615952670574) {
                                        votes[27] = 3;
                                    } else {
                                        votes[27] = 3;
                                    }
                                } else {
                                    if (rr_median <= 61.5) {
                                        votes[27] = 1;
                                    } else {
                                        votes[27] = 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 11.424262523651123) {
                                votes[27] = 3;
                            } else {
                                votes[27] = 3;
                            }
                        }
                    }
                } else {
                    votes[27] = 4;
                }
            } else {
                if (num_peaks <= 131.0) {
                    if (rr_std <= 20.299455642700195) {
                        if (rr_std <= 19.035634994506836) {
                            votes[27] = 4;
                        } else {
                            votes[27] = 3;
                        }
                    } else {
                        if (rr_median <= 57.25) {
                            votes[27] = 4;
                        } else {
                            if (num_valleys <= 72.0) {
                                votes[27] = 4;
                            } else {
                                votes[27] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.1173725500702858) {
                        if (diastolic_time <= 0.09195434674620628) {
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
            if (diastolic_time <= 0.10212662070989609) {
                if (diastolic_time <= 0.011158470064401627) {
                    votes[27] = 0;
                } else {
                    if (rr_median <= 99.25) {
                        if (dist_std <= 0.0921614058315754) {
                            if (rr_std <= 20.87985134124756) {
                                if (num_peaks <= 108.5) {
                                    votes[27] = 1;
                                } else {
                                    if (num_peaks <= 134.5) {
                                        votes[27] = 3;
                                    } else {
                                        votes[27] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 54.01214408874512) {
                                    if (diastolic_time <= 0.07526949420571327) {
                                        votes[27] = 1;
                                    } else {
                                        votes[27] = 1;
                                    }
                                } else {
                                    votes[27] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 86.25) {
                                votes[27] = 5;
                            } else {
                                votes[27] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 204.0) {
                            if (rr_std <= 50.15341758728027) {
                                if (num_peaks <= 135.5) {
                                    votes[27] = 1;
                                } else {
                                    if (rr_median <= 154.0) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 1;
                                    }
                                }
                            } else {
                                votes[27] = 1;
                            }
                        } else {
                            votes[27] = 4;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.06097831204533577) {
                    if (rr_std <= 15.88022756576538) {
                        votes[27] = 5;
                    } else {
                        if (num_peaks <= 133.5) {
                            if (rr_median <= 78.5) {
                                votes[27] = 5;
                            } else {
                                if (num_peaks <= 107.5) {
                                    votes[27] = 4;
                                } else {
                                    if (num_valleys <= 72.5) {
                                        votes[27] = 4;
                                    } else {
                                        votes[27] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[27] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 103.5) {
                        if (rr_median <= 90.25) {
                            if (num_valleys <= 63.5) {
                                votes[27] = 1;
                            } else {
                                if (dist_std <= 0.11293897777795792) {
                                    votes[27] = 1;
                                } else {
                                    votes[27] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 96.5) {
                                votes[27] = 5;
                            } else {
                                votes[27] = 5;
                            }
                        }
                    } else {
                        votes[27] = 1;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05554366298019886) {
            if (num_peaks <= 108.5) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (dist_std <= 0.03725678287446499) {
                        votes[27] = 5;
                    } else {
                        if (dist_std <= 0.04626391641795635) {
                            votes[27] = 2;
                        } else {
                            votes[27] = 4;
                        }
                    }
                } else {
                    votes[27] = 1;
                }
            } else {
                if (rr_std <= 7.802156209945679) {
                    votes[27] = 3;
                } else {
                    if (num_valleys <= 74.5) {
                        if (rr_median <= 61.5) {
                            votes[27] = 3;
                        } else {
                            if (dist_std <= 0.045648472383618355) {
                                votes[27] = 0;
                            } else {
                                votes[27] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.28273627161979675) {
                            votes[27] = 0;
                        } else {
                            if (dist_std <= 0.029118799604475498) {
                                votes[27] = 0;
                            } else {
                                votes[27] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.8869999945163727) {
                if (num_peaks <= 87.5) {
                    if (rr_median <= 87.5) {
                        if (diastolic_time <= 0.5116166770458221) {
                            if (rr_std <= 27.415703773498535) {
                                votes[27] = 2;
                            } else {
                                votes[27] = 2;
                            }
                        } else {
                            votes[27] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.3864285796880722) {
                            votes[27] = 5;
                        } else {
                            votes[27] = 4;
                        }
                    }
                } else {
                    if (dist_std <= 0.13375024497509003) {
                        if (rr_std <= 14.223504066467285) {
                            if (rr_median <= 66.5) {
                                votes[27] = 3;
                            } else {
                                if (num_peaks <= 126.5) {
                                    if (dist_std <= 0.0967726893723011) {
                                        votes[27] = 5;
                                    } else {
                                        if (dist_std <= 0.12446804344654083) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    }
                                } else {
                                    if (dist_std <= 0.07626809552311897) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 3;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.06707509979605675) {
                                if (num_peaks <= 131.0) {
                                    votes[27] = 5;
                                } else {
                                    votes[27] = 0;
                                }
                            } else {
                                if (rr_median <= 85.5) {
                                    if (rr_std <= 26.99196434020996) {
                                        votes[27] = 2;
                                    } else {
                                        votes[27] = 3;
                                    }
                                } else {
                                    votes[27] = 2;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 110.5) {
                            votes[27] = 2;
                        } else {
                            votes[27] = 2;
                        }
                    }
                }
            } else {
                if (rr_std <= 33.777727127075195) {
                    votes[27] = 1;
                } else {
                    votes[27] = 1;
                }
            }
        }
    }
// Decision rules for tree 28
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 82.75) {
            if (rr_std <= 15.79201078414917) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.06682077422738075) {
                        if (dist_std <= 0.03002930898219347) {
                            votes[28] = 3;
                        } else {
                            if (diastolic_time <= 0.05896500311791897) {
                                votes[28] = 3;
                            } else {
                                votes[28] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 120.5) {
                            if (rr_median <= 49.25) {
                                votes[28] = 3;
                            } else {
                                votes[28] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.17270129919052124) {
                                votes[28] = 1;
                            } else {
                                votes[28] = 1;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 65.5) {
                        votes[28] = 5;
                    } else {
                        if (num_valleys <= 78.5) {
                            if (rr_std <= 8.579071044921875) {
                                votes[28] = 3;
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
                    if (diastolic_time <= 0.04520588181912899) {
                        votes[28] = 4;
                    } else {
                        if (diastolic_time <= 0.11432542279362679) {
                            if (diastolic_time <= 0.07599236816167831) {
                                votes[28] = 3;
                            } else {
                                if (rr_median <= 70.25) {
                                    votes[28] = 4;
                                } else {
                                    votes[28] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 64.5) {
                                if (dist_std <= 0.04281758330762386) {
                                    votes[28] = 4;
                                } else {
                                    votes[28] = 3;
                                }
                            } else {
                                if (dist_std <= 0.03589186631143093) {
                                    votes[28] = 4;
                                } else {
                                    if (dist_std <= 0.042632801458239555) {
                                        if (rr_std <= 22.27242374420166) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 4;
                                        }
                                    } else {
                                        votes[28] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.11560952290892601) {
                        if (diastolic_time <= 0.09230434894561768) {
                            votes[28] = 3;
                        } else {
                            votes[28] = 1;
                        }
                    } else {
                        votes[28] = 3;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.1139594204723835) {
                if (diastolic_time <= 0.011158470064401627) {
                    if (num_peaks <= 143.5) {
                        votes[28] = 0;
                    } else {
                        votes[28] = 0;
                    }
                } else {
                    if (num_valleys <= 62.5) {
                        if (diastolic_time <= 0.037453996017575264) {
                            if (rr_median <= 122.5) {
                                votes[28] = 4;
                            } else {
                                votes[28] = 4;
                            }
                        } else {
                            if (dist_std <= 0.0674609262496233) {
                                votes[28] = 1;
                            } else {
                                votes[28] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.07720153778791428) {
                            if (dist_std <= 0.08740253001451492) {
                                if (rr_std <= 3.0510069131851196) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 1;
                                }
                            } else {
                                votes[28] = 1;
                            }
                        } else {
                            if (rr_median <= 100.5) {
                                if (dist_std <= 0.08056633546948433) {
                                    votes[28] = 3;
                                } else {
                                    votes[28] = 1;
                                }
                            } else {
                                if (rr_std <= 17.234919548034668) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 0.05020909383893013) {
                    if (num_valleys <= 72.5) {
                        if (num_peaks <= 118.0) {
                            votes[28] = 4;
                        } else {
                            votes[28] = 4;
                        }
                    } else {
                        votes[28] = 5;
                    }
                } else {
                    if (rr_std <= 13.420379161834717) {
                        if (diastolic_time <= 0.1607535481452942) {
                            if (num_valleys <= 75.5) {
                                if (dist_std <= 0.1014070212841034) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 1;
                                }
                            } else {
                                votes[28] = 5;
                            }
                        } else {
                            if (num_peaks <= 127.5) {
                                votes[28] = 5;
                            } else {
                                votes[28] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.13768921792507172) {
                            votes[28] = 4;
                        } else {
                            votes[28] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.055107664316892624) {
            if (num_peaks <= 106.5) {
                if (diastolic_time <= 0.4613676518201828) {
                    if (num_valleys <= 50.0) {
                        if (num_valleys <= 45.5) {
                            votes[28] = 4;
                        } else {
                            votes[28] = 4;
                        }
                    } else {
                        if (num_peaks <= 85.5) {
                            votes[28] = 4;
                        } else {
                            votes[28] = 2;
                        }
                    }
                } else {
                    if (rr_median <= 81.0) {
                        votes[28] = 5;
                    } else {
                        votes[28] = 1;
                    }
                }
            } else {
                if (rr_median <= 56.25) {
                    if (diastolic_time <= 0.35256750881671906) {
                        votes[28] = 3;
                    } else {
                        if (dist_std <= 0.045502277091145515) {
                            votes[28] = 0;
                        } else {
                            votes[28] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 7.921353340148926) {
                        votes[28] = 5;
                    } else {
                        if (diastolic_time <= 0.26382069289684296) {
                            votes[28] = 0;
                        } else {
                            if (dist_std <= 0.0458106342703104) {
                                if (diastolic_time <= 0.29473626613616943) {
                                    votes[28] = 0;
                                } else {
                                    if (rr_median <= 61.25) {
                                        if (dist_std <= 0.037277787923812866) {
                                            votes[28] = 0;
                                        } else {
                                            votes[28] = 0;
                                        }
                                    } else {
                                        votes[28] = 0;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.04763207584619522) {
                                    votes[28] = 0;
                                } else {
                                    votes[28] = 0;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 0.6796177625656128) {
                if (dist_std <= 0.09371098503470421) {
                    votes[28] = 3;
                } else {
                    if (rr_median <= 74.25) {
                        if (dist_std <= 0.13068565726280212) {
                            if (rr_std <= 0.49925926327705383) {
                                if (diastolic_time <= 0.4400526285171509) {
                                    votes[28] = 2;
                                } else {
                                    votes[28] = 2;
                                }
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
            } else {
                if (rr_std <= 14.812215328216553) {
                    if (num_peaks <= 125.0) {
                        if (num_valleys <= 55.5) {
                            votes[28] = 5;
                        } else {
                            votes[28] = 5;
                        }
                    } else {
                        if (num_valleys <= 73.0) {
                            votes[28] = 1;
                        } else {
                            if (dist_std <= 0.09736103564500809) {
                                votes[28] = 3;
                            } else {
                                votes[28] = 3;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.7982222139835358) {
                        if (rr_median <= 58.0) {
                            votes[28] = 0;
                        } else {
                            if (rr_median <= 83.5) {
                                if (num_valleys <= 50.5) {
                                    if (rr_std <= 28.37512969970703) {
                                        votes[28] = 2;
                                    } else {
                                        votes[28] = 2;
                                    }
                                } else {
                                    votes[28] = 2;
                                }
                            } else {
                                if (num_peaks <= 141.0) {
                                    if (diastolic_time <= 0.3919764757156372) {
                                        votes[28] = 5;
                                    } else {
                                        votes[28] = 4;
                                    }
                                } else {
                                    votes[28] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 79.75) {
                            votes[28] = 1;
                        } else {
                            votes[28] = 1;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 29
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 99.25) {
            if (rr_std <= 15.9564790725708) {
                if (rr_median <= 66.5) {
                    if (num_peaks <= 86.5) {
                        votes[29] = 4;
                    } else {
                        if (rr_std <= 10.113515377044678) {
                            if (rr_median <= 62.5) {
                                if (dist_std <= 0.11389963328838348) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 3;
                                }
                            } else {
                                votes[29] = 3;
                            }
                        } else {
                            if (rr_std <= 10.75985860824585) {
                                votes[29] = 1;
                            } else {
                                if (dist_std <= 0.03645964525640011) {
                                    votes[29] = 3;
                                } else {
                                    if (rr_median <= 56.25) {
                                        votes[29] = 3;
                                    } else {
                                        votes[29] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 68.5) {
                        if (dist_std <= 0.14323380589485168) {
                            votes[29] = 3;
                        } else {
                            votes[29] = 2;
                        }
                    } else {
                        if (num_peaks <= 141.5) {
                            if (num_valleys <= 64.5) {
                                if (dist_std <= 0.12195088341832161) {
                                    if (num_peaks <= 111.0) {
                                        if (rr_std <= 0.7657397091388702) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 1;
                                        }
                                    } else {
                                        votes[29] = 3;
                                    }
                                } else {
                                    votes[29] = 5;
                                }
                            } else {
                                if (diastolic_time <= 0.21829189360141754) {
                                    if (num_valleys <= 82.5) {
                                        if (num_peaks <= 130.5) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 9.908222198486328) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 5;
                                        }
                                    }
                                } else {
                                    votes[29] = 3;
                                }
                            }
                        } else {
                            votes[29] = 0;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.05832652002573013) {
                    if (num_peaks <= 136.5) {
                        if (num_valleys <= 77.5) {
                            if (dist_std <= 0.02526924479752779) {
                                votes[29] = 4;
                            } else {
                                if (diastolic_time <= 0.08921530842781067) {
                                    if (diastolic_time <= 0.03814115561544895) {
                                        votes[29] = 4;
                                    } else {
                                        votes[29] = 3;
                                    }
                                } else {
                                    if (dist_std <= 0.03590022027492523) {
                                        votes[29] = 4;
                                    } else {
                                        if (dist_std <= 0.042632801458239555) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[29] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.09581785649061203) {
                            votes[29] = 1;
                        } else {
                            votes[29] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.03965217247605324) {
                        if (num_valleys <= 66.0) {
                            votes[29] = 4;
                        } else {
                            votes[29] = 4;
                        }
                    } else {
                        if (dist_std <= 0.0815117247402668) {
                            if (diastolic_time <= 0.10069068521261215) {
                                if (dist_std <= 0.07184911891818047) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 1;
                                }
                            } else {
                                if (rr_std <= 19.44614601135254) {
                                    votes[29] = 1;
                                } else {
                                    votes[29] = 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 79.5) {
                                votes[29] = 4;
                            } else {
                                if (rr_median <= 72.25) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 3;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (dist_std <= 0.041274964809417725) {
                    votes[29] = 4;
                } else {
                    if (rr_std <= 16.382503032684326) {
                        votes[29] = 1;
                    } else {
                        votes[29] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 0.027160183526575565) {
                    votes[29] = 0;
                } else {
                    if (diastolic_time <= 0.08757942169904709) {
                        if (dist_std <= 0.03880075179040432) {
                            if (dist_std <= 0.034596119076013565) {
                                votes[29] = 1;
                            } else {
                                votes[29] = 1;
                            }
                        } else {
                            if (dist_std <= 0.08031154796481133) {
                                votes[29] = 1;
                            } else {
                                votes[29] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 28.281306266784668) {
                            if (rr_std <= 5.369727373123169) {
                                votes[29] = 1;
                            } else {
                                votes[29] = 1;
                            }
                        } else {
                            votes[29] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 70.5) {
            if (dist_std <= 0.09846341237425804) {
                if (diastolic_time <= 0.8336666822433472) {
                    if (rr_std <= 11.695367813110352) {
                        if (rr_median <= 65.75) {
                            votes[29] = 3;
                        } else {
                            if (rr_std <= 4.798900604248047) {
                                votes[29] = 5;
                            } else {
                                votes[29] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.44688235223293304) {
                            if (num_peaks <= 88.5) {
                                if (dist_std <= 0.04350750148296356) {
                                    votes[29] = 5;
                                } else {
                                    if (rr_median <= 91.5) {
                                        votes[29] = 4;
                                    } else {
                                        votes[29] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 21.655051231384277) {
                                    votes[29] = 2;
                                } else {
                                    if (dist_std <= 0.06487473286688328) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 5;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.6980000138282776) {
                                if (num_peaks <= 107.5) {
                                    if (diastolic_time <= 0.553025633096695) {
                                        votes[29] = 2;
                                    } else {
                                        votes[29] = 5;
                                    }
                                } else {
                                    votes[29] = 0;
                                }
                            } else {
                                votes[29] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.9559285938739777) {
                        votes[29] = 1;
                    } else {
                        votes[29] = 1;
                    }
                }
            } else {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 102.0) {
                        if (num_valleys <= 56.0) {
                            votes[29] = 2;
                        } else {
                            votes[29] = 2;
                        }
                    } else {
                        if (rr_std <= 0.6633186936378479) {
                            votes[29] = 2;
                        } else {
                            votes[29] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.4294666647911072) {
                        votes[29] = 5;
                    } else {
                        votes[29] = 5;
                    }
                }
            }
        } else {
            if (dist_std <= 0.05531284213066101) {
                if (rr_std <= 7.789663076400757) {
                    votes[29] = 3;
                } else {
                    if (diastolic_time <= 0.2846190482378006) {
                        votes[29] = 0;
                    } else {
                        if (rr_median <= 52.75) {
                            votes[29] = 0;
                        } else {
                            if (num_peaks <= 133.0) {
                                if (diastolic_time <= 0.4744117707014084) {
                                    votes[29] = 0;
                                } else {
                                    votes[29] = 0;
                                }
                            } else {
                                if (dist_std <= 0.028821819461882114) {
                                    votes[29] = 0;
                                } else {
                                    votes[29] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 123.0) {
                    votes[29] = 5;
                } else {
                    if (rr_median <= 60.25) {
                        votes[29] = 0;
                    } else {
                        if (diastolic_time <= 0.4815833419561386) {
                            if (dist_std <= 0.07904914766550064) {
                                votes[29] = 2;
                            } else {
                                votes[29] = 3;
                            }
                        } else {
                            votes[29] = 2;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 30
    if (diastolic_time <= 0.20975074917078018) {
        if (rr_median <= 99.5) {
            if (rr_std <= 16.826666831970215) {
                if (rr_median <= 68.75) {
                    if (num_peaks <= 86.5) {
                        votes[30] = 4;
                    } else {
                        if (dist_std <= 0.07846580073237419) {
                            if (num_peaks <= 131.5) {
                                if (num_peaks <= 126.0) {
                                    votes[30] = 3;
                                } else {
                                    votes[30] = 3;
                                }
                            } else {
                                if (num_peaks <= 134.5) {
                                    votes[30] = 3;
                                } else {
                                    votes[30] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 119.5) {
                                if (diastolic_time <= 0.1169678345322609) {
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
                    if (diastolic_time <= 0.01662295125424862) {
                        votes[30] = 0;
                    } else {
                        if (num_valleys <= 66.0) {
                            if (rr_median <= 85.0) {
                                votes[30] = 5;
                            } else {
                                if (num_valleys <= 52.5) {
                                    votes[30] = 5;
                                } else {
                                    if (dist_std <= 0.09370680525898933) {
                                        votes[30] = 1;
                                    } else {
                                        votes[30] = 1;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.04560043849050999) {
                                votes[30] = 5;
                            } else {
                                if (rr_median <= 91.5) {
                                    if (dist_std <= 0.061297932639718056) {
                                        votes[30] = 3;
                                    } else {
                                        if (rr_median <= 82.75) {
                                            votes[30] = 3;
                                        } else {
                                            votes[30] = 1;
                                        }
                                    }
                                } else {
                                    votes[30] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (rr_median <= 75.5) {
                        if (dist_std <= 0.11894593387842178) {
                            if (rr_std <= 20.045766830444336) {
                                if (rr_std <= 19.284515380859375) {
                                    votes[30] = 4;
                                } else {
                                    votes[30] = 2;
                                }
                            } else {
                                votes[30] = 4;
                            }
                        } else {
                            votes[30] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.1395789459347725) {
                            if (rr_std <= 26.233665466308594) {
                                votes[30] = 3;
                            } else {
                                if (num_valleys <= 70.5) {
                                    votes[30] = 4;
                                } else {
                                    if (rr_std <= 37.55487251281738) {
                                        votes[30] = 3;
                                    } else {
                                        votes[30] = 1;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 82.75) {
                                votes[30] = 4;
                            } else {
                                votes[30] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 80.25) {
                        if (diastolic_time <= 0.09970110654830933) {
                            votes[30] = 1;
                        } else {
                            if (num_peaks <= 135.5) {
                                votes[30] = 4;
                            } else {
                                votes[30] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.08744513615965843) {
                            votes[30] = 1;
                        } else {
                            votes[30] = 5;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.030982067808508873) {
                if (dist_std <= 0.021819213405251503) {
                    votes[30] = 4;
                } else {
                    votes[30] = 4;
                }
            } else {
                if (diastolic_time <= 0.011158470064401627) {
                    votes[30] = 0;
                } else {
                    if (num_valleys <= 56.0) {
                        votes[30] = 1;
                    } else {
                        if (dist_std <= 0.05042261630296707) {
                            if (dist_std <= 0.03813740611076355) {
                                votes[30] = 1;
                            } else {
                                votes[30] = 1;
                            }
                        } else {
                            if (rr_std <= 13.908481121063232) {
                                if (dist_std <= 0.07271425426006317) {
                                    votes[30] = 1;
                                } else {
                                    votes[30] = 1;
                                }
                            } else {
                                votes[30] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.6157333254814148) {
                if (rr_median <= 88.5) {
                    if (dist_std <= 0.04137372598052025) {
                        if (num_peaks <= 102.0) {
                            votes[30] = 4;
                        } else {
                            votes[30] = 0;
                        }
                    } else {
                        if (num_peaks <= 90.5) {
                            if (diastolic_time <= 0.275111123919487) {
                                votes[30] = 4;
                            } else {
                                if (diastolic_time <= 0.5076166689395905) {
                                    if (rr_median <= 82.5) {
                                        votes[30] = 2;
                                    } else {
                                        votes[30] = 2;
                                    }
                                } else {
                                    votes[30] = 2;
                                }
                            }
                        } else {
                            if (dist_std <= 0.13581082969903946) {
                                if (rr_std <= 5.115602731704712) {
                                    if (num_valleys <= 59.5) {
                                        votes[30] = 5;
                                    } else {
                                        votes[30] = 2;
                                    }
                                } else {
                                    if (num_valleys <= 61.5) {
                                        votes[30] = 2;
                                    } else {
                                        if (dist_std <= 0.08602741733193398) {
                                            votes[30] = 0;
                                        } else {
                                            votes[30] = 2;
                                        }
                                    }
                                }
                            } else {
                                votes[30] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.059131145477295) {
                        votes[30] = 5;
                    } else {
                        if (diastolic_time <= 0.3338913023471832) {
                            if (num_peaks <= 82.0) {
                                votes[30] = 5;
                            } else {
                                votes[30] = 4;
                            }
                        } else {
                            votes[30] = 4;
                        }
                    }
                }
            } else {
                if (num_peaks <= 114.5) {
                    if (rr_median <= 84.25) {
                        votes[30] = 1;
                    } else {
                        if (dist_std <= 0.07723910361528397) {
                            votes[30] = 1;
                        } else {
                            votes[30] = 1;
                        }
                    }
                } else {
                    votes[30] = 5;
                }
            }
        } else {
            if (dist_std <= 0.06272310577332973) {
                if (diastolic_time <= 0.2534712553024292) {
                    votes[30] = 5;
                } else {
                    if (rr_std <= 8.07284927368164) {
                        votes[30] = 3;
                    } else {
                        if (rr_median <= 53.0) {
                            votes[30] = 0;
                        } else {
                            if (diastolic_time <= 0.7204000055789948) {
                                if (num_valleys <= 74.5) {
                                    if (num_valleys <= 73.5) {
                                        votes[30] = 0;
                                    } else {
                                        votes[30] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 0.31822073459625244) {
                                        votes[30] = 0;
                                    } else {
                                        votes[30] = 0;
                                    }
                                }
                            } else {
                                votes[30] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 125.0) {
                    if (diastolic_time <= 0.7812888920307159) {
                        votes[30] = 5;
                    } else {
                        votes[30] = 1;
                    }
                } else {
                    if (rr_std <= 29.455190658569336) {
                        if (num_valleys <= 79.5) {
                            votes[30] = 3;
                        } else {
                            votes[30] = 2;
                        }
                    } else {
                        votes[30] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 31
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 99.25) {
            if (rr_std <= 15.967272281646729) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.07846580073237419) {
                        if (num_peaks <= 132.5) {
                            if (num_peaks <= 127.5) {
                                votes[31] = 3;
                            } else {
                                if (rr_median <= 56.75) {
                                    votes[31] = 5;
                                } else {
                                    votes[31] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 62.0) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 121.5) {
                            if (rr_median <= 57.0) {
                                votes[31] = 4;
                            } else {
                                votes[31] = 3;
                            }
                        } else {
                            if (num_valleys <= 67.5) {
                                votes[31] = 1;
                            } else {
                                votes[31] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.01662295125424862) {
                        votes[31] = 0;
                    } else {
                        if (num_valleys <= 63.5) {
                            if (dist_std <= 0.08192242309451103) {
                                votes[31] = 5;
                            } else {
                                votes[31] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.12606249749660492) {
                                if (rr_median <= 85.0) {
                                    votes[31] = 5;
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                if (rr_median <= 74.0) {
                                    votes[31] = 5;
                                } else {
                                    if (rr_median <= 95.0) {
                                        votes[31] = 5;
                                    } else {
                                        votes[31] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (diastolic_time <= 0.1407606527209282) {
                        if (diastolic_time <= 0.04353921487927437) {
                            if (dist_std <= 0.051472339779138565) {
                                votes[31] = 4;
                            } else {
                                votes[31] = 4;
                            }
                        } else {
                            if (rr_std <= 26.233665466308594) {
                                if (num_valleys <= 73.0) {
                                    if (rr_std <= 18.330153465270996) {
                                        votes[31] = 4;
                                    } else {
                                        if (rr_std <= 20.794764518737793) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 3;
                                        }
                                    }
                                } else {
                                    votes[31] = 1;
                                }
                            } else {
                                if (dist_std <= 0.044336505234241486) {
                                    votes[31] = 4;
                                } else {
                                    if (rr_median <= 78.5) {
                                        votes[31] = 4;
                                    } else {
                                        if (num_valleys <= 67.0) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 116.5) {
                            votes[31] = 4;
                        } else {
                            if (num_valleys <= 66.0) {
                                if (num_peaks <= 125.0) {
                                    votes[31] = 4;
                                } else {
                                    votes[31] = 4;
                                }
                            } else {
                                votes[31] = 4;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 76.5) {
                        if (num_valleys <= 71.5) {
                            if (rr_median <= 82.75) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 5;
                            }
                        } else {
                            votes[31] = 5;
                        }
                    } else {
                        if (num_valleys <= 78.5) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (dist_std <= 0.0564637016505003) {
                    if (dist_std <= 0.041274964809417725) {
                        votes[31] = 4;
                    } else {
                        votes[31] = 4;
                    }
                } else {
                    votes[31] = 1;
                }
            } else {
                if (dist_std <= 0.03900445066392422) {
                    if (num_valleys <= 74.5) {
                        votes[31] = 1;
                    } else {
                        votes[31] = 5;
                    }
                } else {
                    if (diastolic_time <= 0.030622171238064766) {
                        votes[31] = 1;
                    } else {
                        if (diastolic_time <= 0.10200454294681549) {
                            if (num_peaks <= 135.5) {
                                votes[31] = 1;
                            } else {
                                votes[31] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.13872183859348297) {
                                votes[31] = 1;
                            } else {
                                votes[31] = 1;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (dist_std <= 0.09462481364607811) {
                if (diastolic_time <= 0.9034999907016754) {
                    if (rr_std <= 14.157156467437744) {
                        if (num_valleys <= 46.5) {
                            votes[31] = 1;
                        } else {
                            if (rr_median <= 65.75) {
                                votes[31] = 3;
                            } else {
                                if (rr_std <= 9.438535213470459) {
                                    votes[31] = 5;
                                } else {
                                    votes[31] = 0;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 88.5) {
                            if (rr_median <= 80.5) {
                                votes[31] = 2;
                            } else {
                                if (diastolic_time <= 0.4613676518201828) {
                                    if (num_peaks <= 77.5) {
                                        votes[31] = 4;
                                    } else {
                                        votes[31] = 4;
                                    }
                                } else {
                                    votes[31] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 44.28853225708008) {
                                if (dist_std <= 0.031609476543962955) {
                                    votes[31] = 5;
                                } else {
                                    if (num_peaks <= 91.5) {
                                        votes[31] = 2;
                                    } else {
                                        votes[31] = 2;
                                    }
                                }
                            } else {
                                votes[31] = 1;
                            }
                        }
                    }
                } else {
                    votes[31] = 1;
                }
            } else {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 105.5) {
                        if (rr_std <= 2.135470449924469) {
                            if (dist_std <= 0.10264686867594719) {
                                votes[31] = 2;
                            } else {
                                votes[31] = 2;
                            }
                        } else {
                            if (num_peaks <= 81.0) {
                                votes[31] = 2;
                            } else {
                                votes[31] = 2;
                            }
                        }
                    } else {
                        if (dist_std <= 0.13581082969903946) {
                            if (rr_median <= 68.0) {
                                votes[31] = 2;
                            } else {
                                votes[31] = 5;
                            }
                        } else {
                            votes[31] = 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.46119216084480286) {
                        votes[31] = 5;
                    } else {
                        votes[31] = 5;
                    }
                }
            }
        } else {
            if (dist_std <= 0.059801796451210976) {
                if (diastolic_time <= 0.26275861263275146) {
                    votes[31] = 5;
                } else {
                    if (rr_std <= 8.305138111114502) {
                        votes[31] = 0;
                    } else {
                        if (rr_median <= 54.75) {
                            votes[31] = 0;
                        } else {
                            if (rr_std <= 47.62920570373535) {
                                if (diastolic_time <= 0.2837619036436081) {
                                    votes[31] = 0;
                                } else {
                                    if (num_peaks <= 133.0) {
                                        if (num_peaks <= 127.0) {
                                            votes[31] = 0;
                                        } else {
                                            votes[31] = 0;
                                        }
                                    } else {
                                        votes[31] = 0;
                                    }
                                }
                            } else {
                                votes[31] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 129.5) {
                    if (rr_std <= 24.55561637878418) {
                        votes[31] = 5;
                    } else {
                        votes[31] = 1;
                    }
                } else {
                    if (diastolic_time <= 0.4815833419561386) {
                        votes[31] = 3;
                    } else {
                        votes[31] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 32
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_std <= 16.190052032470703) {
            if (rr_median <= 82.75) {
                if (rr_median <= 69.5) {
                    if (rr_median <= 45.25) {
                        votes[32] = 1;
                    } else {
                        if (rr_std <= 14.666455268859863) {
                            if (dist_std <= 0.1338786482810974) {
                                if (rr_median <= 53.25) {
                                    if (rr_std <= 11.33200454711914) {
                                        votes[32] = 3;
                                    } else {
                                        votes[32] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 0.07242517918348312) {
                                        votes[32] = 1;
                                    } else {
                                        if (rr_median <= 55.5) {
                                            votes[32] = 1;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[32] = 4;
                            }
                        } else {
                            votes[32] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 13.34977388381958) {
                        if (rr_std <= 4.705788612365723) {
                            votes[32] = 3;
                        } else {
                            if (rr_std <= 9.14556074142456) {
                                votes[32] = 5;
                            } else {
                                votes[32] = 5;
                            }
                        }
                    } else {
                        votes[32] = 3;
                    }
                }
            } else {
                if (diastolic_time <= 0.011158470064401627) {
                    votes[32] = 0;
                } else {
                    if (rr_std <= 0.6673546731472015) {
                        if (dist_std <= 0.06884244456887245) {
                            votes[32] = 4;
                        } else {
                            votes[32] = 3;
                        }
                    } else {
                        if (rr_median <= 98.25) {
                            if (num_peaks <= 111.0) {
                                votes[32] = 1;
                            } else {
                                if (num_valleys <= 70.0) {
                                    votes[32] = 1;
                                } else {
                                    votes[32] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 2.395332455635071) {
                                votes[32] = 1;
                            } else {
                                if (rr_median <= 141.0) {
                                    votes[32] = 1;
                                } else {
                                    votes[32] = 1;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 130.5) {
                if (rr_median <= 72.25) {
                    if (rr_median <= 67.75) {
                        if (rr_std <= 36.712772369384766) {
                            if (diastolic_time <= 0.15053261816501617) {
                                votes[32] = 4;
                            } else {
                                votes[32] = 4;
                            }
                        } else {
                            votes[32] = 4;
                        }
                    } else {
                        if (rr_std <= 24.360875129699707) {
                            votes[32] = 4;
                        } else {
                            votes[32] = 4;
                        }
                    }
                } else {
                    if (dist_std <= 0.03775647655129433) {
                        if (num_valleys <= 73.5) {
                            if (dist_std <= 0.033867888152599335) {
                                votes[32] = 4;
                            } else {
                                votes[32] = 4;
                            }
                        } else {
                            votes[32] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.07657096534967422) {
                            if (num_valleys <= 64.0) {
                                votes[32] = 4;
                            } else {
                                if (dist_std <= 0.07843663170933723) {
                                    votes[32] = 1;
                                } else {
                                    votes[32] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 18.57268714904785) {
                                votes[32] = 4;
                            } else {
                                if (num_valleys <= 50.0) {
                                    votes[32] = 4;
                                } else {
                                    if (rr_std <= 31.669468879699707) {
                                        if (rr_median <= 78.5) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    } else {
                                        votes[32] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 82.25) {
                    if (diastolic_time <= 0.1216730959713459) {
                        if (rr_median <= 63.0) {
                            votes[32] = 1;
                        } else {
                            votes[32] = 3;
                        }
                    } else {
                        votes[32] = 4;
                    }
                } else {
                    if (diastolic_time <= 0.08716500550508499) {
                        if (rr_median <= 104.75) {
                            votes[32] = 0;
                        } else {
                            votes[32] = 1;
                        }
                    } else {
                        if (rr_median <= 116.75) {
                            votes[32] = 5;
                        } else {
                            votes[32] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.6350666582584381) {
                if (dist_std <= 0.09462481364607811) {
                    if (rr_std <= 16.209908962249756) {
                        if (rr_std <= 9.760232925415039) {
                            if (rr_median <= 66.0) {
                                votes[32] = 3;
                            } else {
                                if (rr_std <= 1.202699989080429) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 5;
                                }
                            }
                        } else {
                            if (dist_std <= 0.0400617066770792) {
                                votes[32] = 0;
                            } else {
                                votes[32] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 88.5) {
                            if (dist_std <= 0.03981556370854378) {
                                votes[32] = 5;
                            } else {
                                if (rr_std <= 33.77395439147949) {
                                    if (rr_median <= 76.75) {
                                        votes[32] = 2;
                                    } else {
                                        if (num_peaks <= 85.5) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 2;
                                        }
                                    }
                                } else {
                                    votes[32] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 97.75) {
                                votes[32] = 4;
                            } else {
                                votes[32] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.6796177625656128) {
                        if (rr_median <= 73.5) {
                            if (dist_std <= 0.13048150390386581) {
                                votes[32] = 2;
                            } else {
                                votes[32] = 2;
                            }
                        } else {
                            votes[32] = 2;
                        }
                    } else {
                        if (rr_std <= 13.059131145477295) {
                            if (rr_median <= 72.5) {
                                votes[32] = 3;
                            } else {
                                if (dist_std <= 0.11758781597018242) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 41.193034172058105) {
                                if (num_valleys <= 55.0) {
                                    votes[32] = 2;
                                } else {
                                    votes[32] = 2;
                                }
                            } else {
                                votes[32] = 3;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    votes[32] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[32] = 1;
                    } else {
                        votes[32] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06048966757953167) {
                if (rr_std <= 8.305138111114502) {
                    votes[32] = 5;
                } else {
                    if (diastolic_time <= 0.2967362552881241) {
                        votes[32] = 0;
                    } else {
                        if (rr_median <= 61.25) {
                            if (rr_std <= 11.857729434967041) {
                                votes[32] = 0;
                            } else {
                                if (rr_median <= 58.0) {
                                    votes[32] = 0;
                                } else {
                                    votes[32] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.6376666724681854) {
                                votes[32] = 0;
                            } else {
                                votes[32] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 125.0) {
                    if (diastolic_time <= 0.8248888850212097) {
                        votes[32] = 5;
                    } else {
                        votes[32] = 1;
                    }
                } else {
                    if (dist_std <= 0.07209363207221031) {
                        votes[32] = 0;
                    } else {
                        if (diastolic_time <= 0.35623636841773987) {
                            votes[32] = 3;
                        } else {
                            votes[32] = 3;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 33
    if (diastolic_time <= 0.2538642883300781) {
        if (rr_median <= 99.25) {
            if (rr_std <= 14.178498268127441) {
                if (rr_median <= 75.75) {
                    if (dist_std <= 0.07435420528054237) {
                        if (num_peaks <= 132.5) {
                            if (rr_std <= 8.660866260528564) {
                                votes[33] = 3;
                            } else {
                                votes[33] = 5;
                            }
                        } else {
                            if (rr_median <= 63.5) {
                                votes[33] = 3;
                            } else {
                                votes[33] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 119.5) {
                            if (dist_std <= 0.13652102649211884) {
                                if (rr_median <= 67.5) {
                                    votes[33] = 3;
                                } else {
                                    votes[33] = 3;
                                }
                            } else {
                                votes[33] = 2;
                            }
                        } else {
                            if (diastolic_time <= 0.17270129919052124) {
                                if (diastolic_time <= 0.08262405917048454) {
                                    votes[33] = 1;
                                } else {
                                    votes[33] = 1;
                                }
                            } else {
                                votes[33] = 3;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.046999527141451836) {
                        votes[33] = 0;
                    } else {
                        if (diastolic_time <= 0.15559059381484985) {
                            if (rr_median <= 86.5) {
                                if (num_peaks <= 123.5) {
                                    votes[33] = 5;
                                } else {
                                    votes[33] = 5;
                                }
                            } else {
                                if (rr_median <= 90.25) {
                                    votes[33] = 1;
                                } else {
                                    if (num_valleys <= 69.5) {
                                        votes[33] = 5;
                                    } else {
                                        votes[33] = 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 91.5) {
                                votes[33] = 5;
                            } else {
                                votes[33] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (dist_std <= 0.03940396383404732) {
                        if (num_valleys <= 75.0) {
                            if (dist_std <= 0.02594202756881714) {
                                votes[33] = 4;
                            } else {
                                votes[33] = 4;
                            }
                        } else {
                            votes[33] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.037572138011455536) {
                            if (dist_std <= 0.05542868562042713) {
                                votes[33] = 4;
                            } else {
                                votes[33] = 4;
                            }
                        } else {
                            if (dist_std <= 0.05879455991089344) {
                                if (diastolic_time <= 0.0934075191617012) {
                                    votes[33] = 3;
                                } else {
                                    if (rr_median <= 69.25) {
                                        votes[33] = 1;
                                    } else {
                                        if (rr_std <= 22.89170551300049) {
                                            votes[33] = 4;
                                        } else {
                                            votes[33] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 66.0) {
                                    if (diastolic_time <= 0.11651337146759033) {
                                        votes[33] = 4;
                                    } else {
                                        votes[33] = 3;
                                    }
                                } else {
                                    if (num_valleys <= 64.5) {
                                        if (dist_std <= 0.09742394089698792) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    } else {
                                        if (num_valleys <= 73.0) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.1675555557012558) {
                        if (rr_std <= 32.416404724121094) {
                            if (rr_median <= 75.75) {
                                if (num_valleys <= 76.5) {
                                    votes[33] = 3;
                                } else {
                                    votes[33] = 3;
                                }
                            } else {
                                votes[33] = 0;
                            }
                        } else {
                            if (diastolic_time <= 0.11963387951254845) {
                                if (dist_std <= 0.05107506550848484) {
                                    votes[33] = 1;
                                } else {
                                    votes[33] = 1;
                                }
                            } else {
                                votes[33] = 4;
                            }
                        }
                    } else {
                        votes[33] = 5;
                    }
                }
            }
        } else {
            if (num_valleys <= 59.0) {
                if (rr_median <= 114.0) {
                    votes[33] = 1;
                } else {
                    if (diastolic_time <= 0.06546850502490997) {
                        votes[33] = 4;
                    } else {
                        votes[33] = 4;
                    }
                }
            } else {
                if (num_peaks <= 145.5) {
                    if (num_peaks <= 107.5) {
                        votes[33] = 1;
                    } else {
                        if (rr_median <= 112.75) {
                            if (rr_std <= 16.206239700317383) {
                                votes[33] = 1;
                            } else {
                                votes[33] = 1;
                            }
                        } else {
                            if (rr_median <= 123.5) {
                                votes[33] = 1;
                            } else {
                                votes[33] = 1;
                            }
                        }
                    }
                } else {
                    votes[33] = 1;
                }
            }
        }
    } else {
        if (num_valleys <= 70.5) {
            if (dist_std <= 0.09846341237425804) {
                if (diastolic_time <= 0.6167076826095581) {
                    if (rr_std <= 14.36455774307251) {
                        if (rr_median <= 64.0) {
                            votes[33] = 3;
                        } else {
                            if (num_peaks <= 121.0) {
                                votes[33] = 5;
                            } else {
                                votes[33] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 105.0) {
                            if (rr_median <= 88.5) {
                                if (rr_median <= 70.5) {
                                    votes[33] = 2;
                                } else {
                                    if (num_peaks <= 88.5) {
                                        if (rr_std <= 27.550633430480957) {
                                            votes[33] = 2;
                                        } else {
                                            votes[33] = 4;
                                        }
                                    } else {
                                        votes[33] = 2;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.045408833771944046) {
                                    votes[33] = 4;
                                } else {
                                    votes[33] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 66.0) {
                                votes[33] = 3;
                            } else {
                                if (rr_median <= 74.75) {
                                    votes[33] = 0;
                                } else {
                                    votes[33] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 119.0) {
                        if (diastolic_time <= 0.7990666627883911) {
                            if (num_valleys <= 49.5) {
                                votes[33] = 1;
                            } else {
                                votes[33] = 1;
                            }
                        } else {
                            votes[33] = 1;
                        }
                    } else {
                        votes[33] = 5;
                    }
                }
            } else {
                if (rr_median <= 90.0) {
                    if (rr_std <= 0.6986072361469269) {
                        if (diastolic_time <= 0.5225499868392944) {
                            if (rr_median <= 69.5) {
                                if (num_peaks <= 91.5) {
                                    votes[33] = 2;
                                } else {
                                    votes[33] = 2;
                                }
                            } else {
                                votes[33] = 2;
                            }
                        } else {
                            votes[33] = 2;
                        }
                    } else {
                        if (rr_std <= 4.467189818620682) {
                            votes[33] = 5;
                        } else {
                            if (diastolic_time <= 0.3565912991762161) {
                                votes[33] = 2;
                            } else {
                                votes[33] = 2;
                            }
                        }
                    }
                } else {
                    votes[33] = 5;
                }
            }
        } else {
            if (dist_std <= 0.06456683948636055) {
                if (diastolic_time <= 0.28164102137088776) {
                    votes[33] = 5;
                } else {
                    if (num_peaks <= 132.5) {
                        if (dist_std <= 0.045880015939474106) {
                            votes[33] = 0;
                        } else {
                            votes[33] = 3;
                        }
                    } else {
                        if (rr_median <= 61.5) {
                            if (rr_median <= 59.75) {
                                if (rr_std <= 11.40000581741333) {
                                    votes[33] = 0;
                                } else {
                                    votes[33] = 0;
                                }
                            } else {
                                votes[33] = 0;
                            }
                        } else {
                            if (rr_std <= 9.779163360595703) {
                                votes[33] = 0;
                            } else {
                                votes[33] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 14.680538654327393) {
                    if (rr_std <= 3.5357052087783813) {
                        votes[33] = 3;
                    } else {
                        votes[33] = 5;
                    }
                } else {
                    if (dist_std <= 0.07810287922620773) {
                        votes[33] = 2;
                    } else {
                        votes[33] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 34
    if (diastolic_time <= 0.24313978105783463) {
        if (rr_median <= 98.5) {
            if (rr_std <= 15.967272281646729) {
                if (rr_median <= 63.5) {
                    if (num_peaks <= 123.5) {
                        if (diastolic_time <= 0.08456484600901604) {
                            if (diastolic_time <= 0.04046592675149441) {
                                votes[34] = 4;
                            } else {
                                votes[34] = 4;
                            }
                        } else {
                            if (num_peaks <= 117.0) {
                                votes[34] = 3;
                            } else {
                                votes[34] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 131.0) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.01662295125424862) {
                        votes[34] = 0;
                    } else {
                        if (rr_median <= 67.75) {
                            votes[34] = 2;
                        } else {
                            if (dist_std <= 0.04560043849050999) {
                                votes[34] = 5;
                            } else {
                                if (dist_std <= 0.12433048337697983) {
                                    if (num_valleys <= 61.0) {
                                        votes[34] = 1;
                                    } else {
                                        if (diastolic_time <= 0.12366250157356262) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 3;
                                        }
                                    }
                                } else {
                                    if (dist_std <= 0.1380796656012535) {
                                        votes[34] = 5;
                                    } else {
                                        votes[34] = 3;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (dist_std <= 0.11728234589099884) {
                        if (diastolic_time <= 0.04169788956642151) {
                            if (dist_std <= 0.051472339779138565) {
                                votes[34] = 4;
                            } else {
                                votes[34] = 4;
                            }
                        } else {
                            if (diastolic_time <= 0.09909114241600037) {
                                if (num_peaks <= 118.0) {
                                    votes[34] = 1;
                                } else {
                                    if (num_valleys <= 70.0) {
                                        votes[34] = 3;
                                    } else {
                                        votes[34] = 1;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.0591447688639164) {
                                    if (dist_std <= 0.02414910215884447) {
                                        votes[34] = 5;
                                    } else {
                                        if (num_valleys <= 72.5) {
                                            votes[34] = 4;
                                        } else {
                                            votes[34] = 4;
                                        }
                                    }
                                } else {
                                    votes[34] = 5;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.10162360966205597) {
                            votes[34] = 5;
                        } else {
                            votes[34] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 64.75) {
                        if (rr_median <= 53.75) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.07672421261668205) {
                            votes[34] = 1;
                        } else {
                            if (num_peaks <= 137.5) {
                                votes[34] = 4;
                            } else {
                                votes[34] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.03680383414030075) {
                if (num_peaks <= 127.0) {
                    votes[34] = 4;
                } else {
                    votes[34] = 5;
                }
            } else {
                if (diastolic_time <= 0.011158470064401627) {
                    votes[34] = 2;
                } else {
                    if (num_valleys <= 48.0) {
                        votes[34] = 3;
                    } else {
                        if (diastolic_time <= 0.09277376160025597) {
                            if (rr_median <= 101.5) {
                                votes[34] = 1;
                            } else {
                                if (dist_std <= 0.08031154796481133) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 13.420379161834717) {
                                if (num_valleys <= 75.0) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 1;
                                }
                            } else {
                                votes[34] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (rr_median <= 74.25) {
                if (num_peaks <= 90.5) {
                    if (diastolic_time <= 0.5074666738510132) {
                        votes[34] = 2;
                    } else {
                        votes[34] = 2;
                    }
                } else {
                    if (dist_std <= 0.13581082969903946) {
                        if (rr_median <= 64.5) {
                            if (num_peaks <= 116.0) {
                                votes[34] = 3;
                            } else {
                                votes[34] = 1;
                            }
                        } else {
                            if (dist_std <= 0.06453035958111286) {
                                votes[34] = 0;
                            } else {
                                if (diastolic_time <= 0.36265453696250916) {
                                    votes[34] = 5;
                                } else {
                                    votes[34] = 5;
                                }
                            }
                        }
                    } else {
                        votes[34] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 0.6980000138282776) {
                    if (rr_std <= 20.9439640045166) {
                        if (rr_median <= 97.5) {
                            if (dist_std <= 0.06588063389062881) {
                                votes[34] = 5;
                            } else {
                                if (diastolic_time <= 0.41908571124076843) {
                                    votes[34] = 5;
                                } else {
                                    votes[34] = 2;
                                }
                            }
                        } else {
                            votes[34] = 1;
                        }
                    } else {
                        if (rr_std <= 53.300798416137695) {
                            if (diastolic_time <= 0.463294118642807) {
                                if (num_peaks <= 88.5) {
                                    if (num_peaks <= 75.5) {
                                        votes[34] = 4;
                                    } else {
                                        votes[34] = 4;
                                    }
                                } else {
                                    votes[34] = 4;
                                }
                            } else {
                                votes[34] = 2;
                            }
                        } else {
                            votes[34] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 12.638467788696289) {
                        votes[34] = 1;
                    } else {
                        votes[34] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06063430570065975) {
                if (rr_std <= 8.07284927368164) {
                    votes[34] = 0;
                } else {
                    if (rr_std <= 14.891403675079346) {
                        if (rr_median <= 55.75) {
                            if (num_valleys <= 76.5) {
                                votes[34] = 3;
                            } else {
                                votes[34] = 0;
                            }
                        } else {
                            if (rr_std <= 12.834783554077148) {
                                votes[34] = 0;
                            } else {
                                if (diastolic_time <= 0.44985294342041016) {
                                    votes[34] = 0;
                                } else {
                                    votes[34] = 0;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.7523999810218811) {
                            if (diastolic_time <= 0.29559341073036194) {
                                votes[34] = 0;
                            } else {
                                if (num_peaks <= 133.0) {
                                    votes[34] = 0;
                                } else {
                                    votes[34] = 0;
                                }
                            }
                        } else {
                            votes[34] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.872253954410553) {
                    if (num_peaks <= 135.5) {
                        if (dist_std <= 0.08174080029129982) {
                            votes[34] = 5;
                        } else {
                            votes[34] = 5;
                        }
                    } else {
                        if (rr_std <= 19.262314796447754) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 2;
                        }
                    }
                } else {
                    votes[34] = 1;
                }
            }
        }
    }
// Decision rules for tree 35
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_std <= 16.939903259277344) {
            if (rr_median <= 99.25) {
                if (rr_median <= 68.5) {
                    if (dist_std <= 0.07042357325553894) {
                        if (num_peaks <= 133.0) {
                            if (rr_std <= 9.031359672546387) {
                                if (dist_std <= 0.050992293283343315) {
                                    votes[35] = 3;
                                } else {
                                    votes[35] = 3;
                                }
                            } else {
                                if (rr_std <= 11.891860485076904) {
                                    votes[35] = 5;
                                } else {
                                    votes[35] = 3;
                                }
                            }
                        } else {
                            votes[35] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.08759864047169685) {
                            votes[35] = 4;
                        } else {
                            if (rr_std <= 7.919014930725098) {
                                votes[35] = 3;
                            } else {
                                votes[35] = 1;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 54.5) {
                        votes[35] = 1;
                    } else {
                        if (num_peaks <= 130.5) {
                            if (rr_std <= 0.7582071721553802) {
                                if (num_valleys <= 73.0) {
                                    votes[35] = 3;
                                } else {
                                    votes[35] = 5;
                                }
                            } else {
                                if (diastolic_time <= 0.1749209314584732) {
                                    if (rr_median <= 85.75) {
                                        votes[35] = 5;
                                    } else {
                                        if (rr_median <= 95.25) {
                                            votes[35] = 1;
                                        } else {
                                            votes[35] = 5;
                                        }
                                    }
                                } else {
                                    votes[35] = 3;
                                }
                            }
                        } else {
                            if (rr_median <= 89.0) {
                                votes[35] = 5;
                            } else {
                                if (rr_std <= 7.930788516998291) {
                                    votes[35] = 3;
                                } else {
                                    votes[35] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 0.792542576789856) {
                    votes[35] = 4;
                } else {
                    if (num_peaks <= 134.0) {
                        votes[35] = 1;
                    } else {
                        if (dist_std <= 0.057050397619605064) {
                            votes[35] = 1;
                        } else {
                            votes[35] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 74.5) {
                if (dist_std <= 0.12826765328645706) {
                    if (rr_median <= 85.75) {
                        if (num_peaks <= 136.5) {
                            if (diastolic_time <= 0.09756410121917725) {
                                if (dist_std <= 0.10569735243916512) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 4;
                                }
                            } else {
                                if (num_valleys <= 62.5) {
                                    if (dist_std <= 0.043676355853676796) {
                                        votes[35] = 3;
                                    } else {
                                        votes[35] = 3;
                                    }
                                } else {
                                    if (rr_std <= 34.607791900634766) {
                                        if (diastolic_time <= 0.14667320251464844) {
                                            votes[35] = 4;
                                        } else {
                                            votes[35] = 4;
                                        }
                                    } else {
                                        votes[35] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[35] = 3;
                        }
                    } else {
                        if (num_valleys <= 62.5) {
                            if (dist_std <= 0.049010567367076874) {
                                if (rr_std <= 66.1013298034668) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 4;
                                }
                            } else {
                                if (num_valleys <= 59.0) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.07354429736733437) {
                                votes[35] = 1;
                            } else {
                                votes[35] = 4;
                            }
                        }
                    }
                } else {
                    votes[35] = 3;
                }
            } else {
                if (diastolic_time <= 0.1395789459347725) {
                    if (rr_std <= 39.516366958618164) {
                        if (dist_std <= 0.03900445066392422) {
                            votes[35] = 5;
                        } else {
                            if (rr_median <= 113.25) {
                                if (diastolic_time <= 0.0761309526860714) {
                                    votes[35] = 3;
                                } else {
                                    if (rr_median <= 66.25) {
                                        votes[35] = 1;
                                    } else {
                                        votes[35] = 5;
                                    }
                                }
                            } else {
                                votes[35] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 50.64741516113281) {
                            votes[35] = 1;
                        } else {
                            votes[35] = 1;
                        }
                    }
                } else {
                    votes[35] = 4;
                }
            }
        }
    } else {
        if (dist_std <= 0.06346116214990616) {
            if (num_peaks <= 108.5) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (dist_std <= 0.035057563334703445) {
                        if (rr_std <= 12.716137409210205) {
                            votes[35] = 5;
                        } else {
                            votes[35] = 5;
                        }
                    } else {
                        if (rr_median <= 75.5) {
                            votes[35] = 2;
                        } else {
                            if (diastolic_time <= 0.3307272642850876) {
                                votes[35] = 4;
                            } else {
                                votes[35] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 89.75) {
                        votes[35] = 2;
                    } else {
                        if (dist_std <= 0.053463272750377655) {
                            votes[35] = 1;
                        } else {
                            votes[35] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 4.967562675476074) {
                    votes[35] = 5;
                } else {
                    if (diastolic_time <= 0.38019999861717224) {
                        if (rr_std <= 10.196926593780518) {
                            if (num_peaks <= 140.5) {
                                votes[35] = 0;
                            } else {
                                votes[35] = 3;
                            }
                        } else {
                            if (num_valleys <= 69.5) {
                                votes[35] = 1;
                            } else {
                                if (num_peaks <= 135.5) {
                                    votes[35] = 0;
                                } else {
                                    votes[35] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 55.75) {
                            if (num_valleys <= 76.5) {
                                votes[35] = 0;
                            } else {
                                votes[35] = 0;
                            }
                        } else {
                            if (diastolic_time <= 0.6487272679805756) {
                                if (num_peaks <= 133.0) {
                                    if (rr_std <= 18.354873657226562) {
                                        votes[35] = 0;
                                    } else {
                                        votes[35] = 0;
                                    }
                                } else {
                                    votes[35] = 0;
                                }
                            } else {
                                votes[35] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 0.6932365000247955) {
                if (diastolic_time <= 0.31368666887283325) {
                    if (dist_std <= 0.13068565726280212) {
                        votes[35] = 3;
                    } else {
                        if (num_peaks <= 104.0) {
                            votes[35] = 2;
                        } else {
                            votes[35] = 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.5396923124790192) {
                        if (rr_median <= 73.5) {
                            votes[35] = 2;
                        } else {
                            votes[35] = 2;
                        }
                    } else {
                        votes[35] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 0.8159999847412109) {
                    if (rr_std <= 18.65784740447998) {
                        if (num_peaks <= 128.0) {
                            if (diastolic_time <= 0.257935494184494) {
                                votes[35] = 3;
                            } else {
                                if (dist_std <= 0.0967726893723011) {
                                    votes[35] = 5;
                                } else {
                                    if (rr_std <= 3.389266312122345) {
                                        votes[35] = 5;
                                    } else {
                                        votes[35] = 5;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.08368770405650139) {
                                votes[35] = 5;
                            } else {
                                votes[35] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 33.77395439147949) {
                            if (rr_median <= 77.25) {
                                if (num_valleys <= 56.0) {
                                    votes[35] = 2;
                                } else {
                                    votes[35] = 2;
                                }
                            } else {
                                if (num_peaks <= 86.5) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 2;
                                }
                            }
                        } else {
                            if (rr_median <= 81.5) {
                                votes[35] = 3;
                            } else {
                                votes[35] = 5;
                            }
                        }
                    }
                } else {
                    votes[35] = 1;
                }
            }
        }
    }
// Decision rules for tree 36
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_median <= 98.5) {
            if (rr_std <= 16.006247520446777) {
                if (dist_std <= 0.14391647279262543) {
                    if (rr_median <= 75.5) {
                        if (rr_std <= 9.9332857131958) {
                            if (dist_std <= 0.12247582897543907) {
                                if (num_valleys <= 69.5) {
                                    if (diastolic_time <= 0.07602956518530846) {
                                        votes[36] = 3;
                                    } else {
                                        votes[36] = 3;
                                    }
                                } else {
                                    if (num_valleys <= 75.5) {
                                        votes[36] = 3;
                                    } else {
                                        votes[36] = 3;
                                    }
                                }
                            } else {
                                votes[36] = 3;
                            }
                        } else {
                            if (dist_std <= 0.05037383548915386) {
                                if (diastolic_time <= 0.14212121069431305) {
                                    if (diastolic_time <= 0.09103408083319664) {
                                        votes[36] = 3;
                                    } else {
                                        votes[36] = 5;
                                    }
                                } else {
                                    votes[36] = 3;
                                }
                            } else {
                                if (rr_std <= 11.905226230621338) {
                                    votes[36] = 1;
                                } else {
                                    votes[36] = 3;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 64.5) {
                            if (rr_median <= 88.75) {
                                votes[36] = 1;
                            } else {
                                votes[36] = 1;
                            }
                        } else {
                            if (num_peaks <= 140.5) {
                                if (num_peaks <= 115.5) {
                                    votes[36] = 3;
                                } else {
                                    if (rr_median <= 87.0) {
                                        votes[36] = 5;
                                    } else {
                                        votes[36] = 3;
                                    }
                                }
                            } else {
                                votes[36] = 0;
                            }
                        }
                    }
                } else {
                    votes[36] = 2;
                }
            } else {
                if (num_peaks <= 137.0) {
                    if (dist_std <= 0.11696609482169151) {
                        if (num_valleys <= 78.5) {
                            if (diastolic_time <= 0.04169788956642151) {
                                if (diastolic_time <= 0.03325968608260155) {
                                    votes[36] = 4;
                                } else {
                                    votes[36] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.10395557060837746) {
                                    if (diastolic_time <= 0.09751219674944878) {
                                        if (rr_std <= 24.64580535888672) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 1;
                                        }
                                    } else {
                                        votes[36] = 5;
                                    }
                                } else {
                                    if (dist_std <= 0.0688408613204956) {
                                        if (rr_median <= 76.0) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    } else {
                                        votes[36] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        votes[36] = 3;
                    }
                } else {
                    if (rr_std <= 32.487464904785156) {
                        if (diastolic_time <= 0.10280190780758858) {
                            votes[36] = 3;
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        votes[36] = 1;
                    }
                }
            }
        } else {
            if (num_valleys <= 64.5) {
                if (dist_std <= 0.0576188787817955) {
                    if (rr_median <= 116.75) {
                        votes[36] = 4;
                    } else {
                        votes[36] = 4;
                    }
                } else {
                    if (rr_median <= 128.0) {
                        votes[36] = 1;
                    } else {
                        votes[36] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.08757942169904709) {
                    if (diastolic_time <= 0.027160183526575565) {
                        votes[36] = 0;
                    } else {
                        if (dist_std <= 0.03406997397542) {
                            votes[36] = 1;
                        } else {
                            if (rr_std <= 56.21688652038574) {
                                if (diastolic_time <= 0.06173854321241379) {
                                    if (diastolic_time <= 0.057634519413113594) {
                                        votes[36] = 1;
                                    } else {
                                        votes[36] = 1;
                                    }
                                } else {
                                    votes[36] = 1;
                                }
                            } else {
                                votes[36] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.420379161834717) {
                        if (num_valleys <= 75.0) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 1;
                        }
                    } else {
                        if (rr_std <= 24.063209533691406) {
                            votes[36] = 5;
                        } else {
                            votes[36] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_time <= 0.6426666676998138) {
                if (dist_std <= 0.09462481364607811) {
                    if (rr_std <= 14.68005657196045) {
                        if (rr_std <= 0.4882010966539383) {
                            votes[36] = 3;
                        } else {
                            if (dist_std <= 0.03011399321258068) {
                                votes[36] = 5;
                            } else {
                                votes[36] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 87.5) {
                            if (num_peaks <= 105.0) {
                                if (rr_median <= 75.5) {
                                    votes[36] = 2;
                                } else {
                                    if (rr_median <= 80.0) {
                                        votes[36] = 4;
                                    } else {
                                        if (diastolic_time <= 0.3138466626405716) {
                                            votes[36] = 2;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 67.25) {
                                    votes[36] = 3;
                                } else {
                                    votes[36] = 0;
                                }
                            }
                        } else {
                            if (rr_std <= 42.878671646118164) {
                                if (num_valleys <= 47.5) {
                                    votes[36] = 4;
                                } else {
                                    votes[36] = 4;
                                }
                            } else {
                                votes[36] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 74.5) {
                        if (num_peaks <= 91.5) {
                            if (dist_std <= 0.17900366336107254) {
                                votes[36] = 2;
                            } else {
                                votes[36] = 2;
                            }
                        } else {
                            if (dist_std <= 0.13581082969903946) {
                                votes[36] = 3;
                            } else {
                                votes[36] = 2;
                            }
                        }
                    } else {
                        if (num_peaks <= 112.5) {
                            votes[36] = 5;
                        } else {
                            votes[36] = 2;
                        }
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    if (num_peaks <= 96.5) {
                        votes[36] = 1;
                    } else {
                        votes[36] = 5;
                    }
                } else {
                    if (rr_median <= 79.5) {
                        votes[36] = 1;
                    } else {
                        if (num_peaks <= 98.0) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06063430570065975) {
                if (rr_std <= 8.07284927368164) {
                    votes[36] = 5;
                } else {
                    if (rr_median <= 53.5) {
                        votes[36] = 0;
                    } else {
                        if (diastolic_time <= 0.2809973508119583) {
                            votes[36] = 0;
                        } else {
                            if (diastolic_time <= 0.7523999810218811) {
                                if (rr_median <= 55.75) {
                                    votes[36] = 0;
                                } else {
                                    if (num_peaks <= 132.5) {
                                        if (num_peaks <= 129.0) {
                                            votes[36] = 0;
                                        } else {
                                            votes[36] = 0;
                                        }
                                    } else {
                                        votes[36] = 0;
                                    }
                                }
                            } else {
                                votes[36] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8248888850212097) {
                    if (num_peaks <= 117.0) {
                        votes[36] = 5;
                    } else {
                        if (rr_median <= 87.5) {
                            if (rr_median <= 70.0) {
                                votes[36] = 5;
                            } else {
                                votes[36] = 3;
                            }
                        } else {
                            votes[36] = 2;
                        }
                    }
                } else {
                    votes[36] = 1;
                }
            }
        }
    }
// Decision rules for tree 37
    if (diastolic_time <= 0.23638258129358292) {
        if (rr_median <= 97.75) {
            if (rr_std <= 16.939903259277344) {
                if (rr_median <= 66.5) {
                    if (dist_std <= 0.06866870820522308) {
                        if (num_peaks <= 134.5) {
                            if (diastolic_time <= 0.09065189212560654) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 5;
                            }
                        } else {
                            votes[37] = 3;
                        }
                    } else {
                        if (num_peaks <= 113.5) {
                            if (rr_median <= 50.0) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.059082431718707085) {
                                votes[37] = 4;
                            } else {
                                if (rr_std <= 7.919014930725098) {
                                    votes[37] = 1;
                                } else {
                                    votes[37] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 67.5) {
                        if (dist_std <= 0.1367066279053688) {
                            if (rr_std <= 8.961504936218262) {
                                if (diastolic_time <= 0.1757882758975029) {
                                    if (rr_median <= 85.0) {
                                        votes[37] = 5;
                                    } else {
                                        if (num_valleys <= 55.0) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 1;
                                        }
                                    }
                                } else {
                                    votes[37] = 4;
                                }
                            } else {
                                votes[37] = 1;
                            }
                        } else {
                            votes[37] = 2;
                        }
                    } else {
                        if (rr_median <= 82.5) {
                            if (num_valleys <= 80.5) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 5;
                            }
                        } else {
                            if (num_peaks <= 129.0) {
                                if (rr_median <= 90.0) {
                                    votes[37] = 5;
                                } else {
                                    votes[37] = 5;
                                }
                            } else {
                                votes[37] = 3;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (dist_std <= 0.10294237360358238) {
                        if (num_valleys <= 72.5) {
                            if (rr_median <= 74.0) {
                                if (diastolic_time <= 0.1747785583138466) {
                                    if (rr_median <= 69.75) {
                                        votes[37] = 4;
                                    } else {
                                        votes[37] = 4;
                                    }
                                } else {
                                    votes[37] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.14878641068935394) {
                                    if (rr_median <= 80.0) {
                                        votes[37] = 5;
                                    } else {
                                        votes[37] = 4;
                                    }
                                } else {
                                    if (rr_median <= 78.5) {
                                        votes[37] = 4;
                                    } else {
                                        votes[37] = 4;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.04688517563045025) {
                                if (diastolic_time <= 0.14506593346595764) {
                                    votes[37] = 5;
                                } else {
                                    votes[37] = 4;
                                }
                            } else {
                                votes[37] = 1;
                            }
                        }
                    } else {
                        if (num_valleys <= 56.5) {
                            votes[37] = 3;
                        } else {
                            if (rr_median <= 76.25) {
                                votes[37] = 4;
                            } else {
                                votes[37] = 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.1620170995593071) {
                        if (rr_std <= 25.69298267364502) {
                            if (num_valleys <= 74.0) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.11569743603467941) {
                                if (dist_std <= 0.06596888229250908) {
                                    votes[37] = 1;
                                } else {
                                    votes[37] = 1;
                                }
                            } else {
                                votes[37] = 4;
                            }
                        }
                    } else {
                        votes[37] = 5;
                    }
                }
            }
        } else {
            if (num_valleys <= 63.0) {
                if (dist_std <= 0.04088554158806801) {
                    votes[37] = 4;
                } else {
                    if (rr_median <= 112.75) {
                        votes[37] = 1;
                    } else {
                        if (rr_median <= 139.0) {
                            votes[37] = 4;
                        } else {
                            votes[37] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.027697463519871235) {
                    votes[37] = 0;
                } else {
                    if (rr_median <= 101.0) {
                        votes[37] = 5;
                    } else {
                        if (dist_std <= 0.03165045194327831) {
                            votes[37] = 5;
                        } else {
                            if (num_valleys <= 67.5) {
                                votes[37] = 1;
                            } else {
                                if (rr_median <= 115.0) {
                                    if (diastolic_time <= 0.11912769451737404) {
                                        if (dist_std <= 0.07607006654143333) {
                                            votes[37] = 1;
                                        } else {
                                            votes[37] = 1;
                                        }
                                    } else {
                                        votes[37] = 5;
                                    }
                                } else {
                                    if (dist_std <= 0.051838817074894905) {
                                        votes[37] = 1;
                                    } else {
                                        if (rr_std <= 2.2007532715797424) {
                                            votes[37] = 1;
                                        } else {
                                            votes[37] = 1;
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
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.7013818323612213) {
                if (dist_std <= 0.09462481364607811) {
                    if (num_peaks <= 104.0) {
                        if (rr_std <= 15.460299491882324) {
                            if (dist_std <= 0.07338304817676544) {
                                votes[37] = 5;
                            } else {
                                votes[37] = 5;
                            }
                        } else {
                            if (rr_median <= 87.5) {
                                if (rr_median <= 74.5) {
                                    votes[37] = 2;
                                } else {
                                    if (diastolic_time <= 0.41380804777145386) {
                                        if (rr_median <= 79.5) {
                                            votes[37] = 4;
                                        } else {
                                            votes[37] = 2;
                                        }
                                    } else {
                                        votes[37] = 2;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.045408833771944046) {
                                    votes[37] = 4;
                                } else {
                                    votes[37] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 65.0) {
                            votes[37] = 3;
                        } else {
                            if (dist_std <= 0.05447432026267052) {
                                votes[37] = 0;
                            } else {
                                votes[37] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.6796177625656128) {
                        if (num_peaks <= 91.0) {
                            votes[37] = 2;
                        } else {
                            if (dist_std <= 0.13413643836975098) {
                                votes[37] = 2;
                            } else {
                                votes[37] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 13.300518035888672) {
                            if (rr_std <= 0.906762957572937) {
                                votes[37] = 5;
                            } else {
                                votes[37] = 5;
                            }
                        } else {
                            if (rr_median <= 71.5) {
                                votes[37] = 2;
                            } else {
                                if (dist_std <= 0.12807977199554443) {
                                    votes[37] = 2;
                                } else {
                                    votes[37] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 10.406283378601074) {
                    votes[37] = 5;
                } else {
                    if (rr_std <= 40.75847053527832) {
                        if (rr_std <= 25.028389930725098) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 2;
                        }
                    } else {
                        votes[37] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06048966757953167) {
                if (rr_median <= 55.75) {
                    if (rr_std <= 12.079430103302002) {
                        votes[37] = 3;
                    } else {
                        votes[37] = 0;
                    }
                } else {
                    if (diastolic_time <= 0.6746545433998108) {
                        if (diastolic_time <= 0.2809973508119583) {
                            votes[37] = 0;
                        } else {
                            if (num_valleys <= 74.5) {
                                if (num_valleys <= 73.5) {
                                    if (rr_std <= 10.483709812164307) {
                                        votes[37] = 0;
                                    } else {
                                        votes[37] = 0;
                                    }
                                } else {
                                    votes[37] = 0;
                                }
                            } else {
                                votes[37] = 0;
                            }
                        }
                    } else {
                        votes[37] = 0;
                    }
                }
            } else {
                if (num_peaks <= 140.5) {
                    if (dist_std <= 0.08174080029129982) {
                        votes[37] = 5;
                    } else {
                        votes[37] = 5;
                    }
                } else {
                    votes[37] = 3;
                }
            }
        }
    }
// Decision rules for tree 38
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 99.5) {
            if (rr_std <= 14.666455268859863) {
                if (rr_median <= 75.5) {
                    if (rr_std <= 10.030611991882324) {
                        if (dist_std <= 0.1240161694586277) {
                            if (dist_std <= 0.06105446070432663) {
                                votes[38] = 3;
                            } else {
                                if (dist_std <= 0.09260249137878418) {
                                    votes[38] = 3;
                                } else {
                                    votes[38] = 3;
                                }
                            }
                        } else {
                            votes[38] = 3;
                        }
                    } else {
                        if (dist_std <= 0.05037383548915386) {
                            if (num_peaks <= 132.5) {
                                votes[38] = 5;
                            } else {
                                votes[38] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.09748261049389839) {
                                votes[38] = 4;
                            } else {
                                votes[38] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 90.75) {
                        if (rr_median <= 85.25) {
                            if (dist_std <= 0.04949212446808815) {
                                votes[38] = 5;
                            } else {
                                votes[38] = 5;
                            }
                        } else {
                            if (rr_std <= 0.9506001174449921) {
                                votes[38] = 1;
                            } else {
                                votes[38] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 2.766421616077423) {
                            votes[38] = 5;
                        } else {
                            votes[38] = 0;
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (dist_std <= 0.11696609482169151) {
                        if (rr_median <= 94.25) {
                            if (num_valleys <= 72.5) {
                                if (rr_std <= 20.103290557861328) {
                                    if (dist_std <= 0.05757667124271393) {
                                        if (num_peaks <= 117.0) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 4;
                                        }
                                    } else {
                                        votes[38] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 0.1736646518111229) {
                                        if (rr_median <= 75.25) {
                                            votes[38] = 4;
                                        } else {
                                            votes[38] = 4;
                                        }
                                    } else {
                                        votes[38] = 4;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.09715233743190765) {
                                    votes[38] = 3;
                                } else {
                                    votes[38] = 4;
                                }
                            }
                        } else {
                            votes[38] = 5;
                        }
                    } else {
                        votes[38] = 3;
                    }
                } else {
                    if (rr_median <= 77.0) {
                        if (num_valleys <= 76.5) {
                            votes[38] = 3;
                        } else {
                            votes[38] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.08031029999256134) {
                            votes[38] = 0;
                        } else {
                            votes[38] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 114.5) {
                if (dist_std <= 0.03783520683646202) {
                    votes[38] = 4;
                } else {
                    if (diastolic_time <= 0.1139594204723835) {
                        if (rr_std <= 49.69587516784668) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 4;
                        }
                    } else {
                        votes[38] = 5;
                    }
                }
            } else {
                if (num_valleys <= 75.5) {
                    if (diastolic_time <= 0.09073241800069809) {
                        if (rr_median <= 111.75) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 1;
                        }
                    } else {
                        votes[38] = 1;
                    }
                } else {
                    if (rr_std <= 26.857949256896973) {
                        if (num_valleys <= 80.0) {
                            if (diastolic_time <= 0.07212940603494644) {
                                votes[38] = 1;
                            } else {
                                votes[38] = 1;
                            }
                        } else {
                            votes[38] = 1;
                        }
                    } else {
                        votes[38] = 5;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_time <= 0.634489506483078) {
                if (dist_std <= 0.09569816291332245) {
                    if (num_peaks <= 94.5) {
                        if (rr_std <= 15.449340343475342) {
                            votes[38] = 5;
                        } else {
                            if (rr_median <= 89.5) {
                                if (rr_std <= 31.861740112304688) {
                                    if (diastolic_time <= 0.32100000977516174) {
                                        votes[38] = 2;
                                    } else {
                                        votes[38] = 2;
                                    }
                                } else {
                                    votes[38] = 4;
                                }
                            } else {
                                if (dist_std <= 0.046247655525803566) {
                                    votes[38] = 4;
                                } else {
                                    votes[38] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 63.5) {
                            votes[38] = 3;
                        } else {
                            if (dist_std <= 0.05451356992125511) {
                                if (num_valleys <= 59.5) {
                                    votes[38] = 0;
                                } else {
                                    votes[38] = 0;
                                }
                            } else {
                                if (rr_std <= 19.80893039703369) {
                                    if (rr_std <= 6.732735633850098) {
                                        votes[38] = 5;
                                    } else {
                                        votes[38] = 5;
                                    }
                                } else {
                                    votes[38] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 74.25) {
                        if (num_peaks <= 111.5) {
                            if (rr_median <= 69.5) {
                                if (dist_std <= 0.13552024215459824) {
                                    votes[38] = 3;
                                } else {
                                    votes[38] = 2;
                                }
                            } else {
                                if (num_valleys <= 62.5) {
                                    votes[38] = 2;
                                } else {
                                    votes[38] = 2;
                                }
                            }
                        } else {
                            votes[38] = 5;
                        }
                    } else {
                        if (rr_std <= 0.851062536239624) {
                            votes[38] = 5;
                        } else {
                            votes[38] = 3;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[38] = 5;
                } else {
                    if (rr_median <= 79.75) {
                        votes[38] = 1;
                    } else {
                        votes[38] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06483301520347595) {
                if (diastolic_time <= 0.29153968393802643) {
                    votes[38] = 0;
                } else {
                    if (rr_std <= 8.07284927368164) {
                        votes[38] = 0;
                    } else {
                        if (rr_median <= 55.75) {
                            if (num_valleys <= 76.5) {
                                votes[38] = 0;
                            } else {
                                votes[38] = 0;
                            }
                        } else {
                            if (num_valleys <= 74.5) {
                                if (num_valleys <= 73.5) {
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
            } else {
                if (num_peaks <= 146.5) {
                    if (dist_std <= 0.079088494181633) {
                        votes[38] = 1;
                    } else {
                        votes[38] = 3;
                    }
                } else {
                    votes[38] = 2;
                }
            }
        }
    }
// Decision rules for tree 39
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 98.5) {
            if (rr_std <= 16.839214324951172) {
                if (rr_median <= 76.5) {
                    if (dist_std <= 0.1390446275472641) {
                        if (num_valleys <= 84.5) {
                            if (num_peaks <= 132.5) {
                                if (num_peaks <= 128.5) {
                                    if (num_peaks <= 85.5) {
                                        votes[39] = 5;
                                    } else {
                                        if (diastolic_time <= 0.04989561811089516) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 3;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.15554416179656982) {
                                        votes[39] = 1;
                                    } else {
                                        votes[39] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 13.629336833953857) {
                                    votes[39] = 3;
                                } else {
                                    votes[39] = 3;
                                }
                            }
                        } else {
                            votes[39] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.19720634818077087) {
                            votes[39] = 3;
                        } else {
                            votes[39] = 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.016946058720350266) {
                        votes[39] = 0;
                    } else {
                        if (num_peaks <= 134.5) {
                            if (diastolic_time <= 0.1596766710281372) {
                                if (diastolic_time <= 0.12032372131943703) {
                                    if (rr_median <= 88.5) {
                                        votes[39] = 5;
                                    } else {
                                        votes[39] = 3;
                                    }
                                } else {
                                    if (num_valleys <= 63.5) {
                                        votes[39] = 1;
                                    } else {
                                        votes[39] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 117.5) {
                                    votes[39] = 5;
                                } else {
                                    votes[39] = 3;
                                }
                            }
                        } else {
                            votes[39] = 5;
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (dist_std <= 0.05884071625769138) {
                        if (dist_std <= 0.027630125172436237) {
                            votes[39] = 3;
                        } else {
                            if (diastolic_time <= 0.10082798451185226) {
                                if (diastolic_time <= 0.04122185707092285) {
                                    if (diastolic_time <= 0.03329240530729294) {
                                        votes[39] = 4;
                                    } else {
                                        votes[39] = 4;
                                    }
                                } else {
                                    votes[39] = 1;
                                }
                            } else {
                                if (diastolic_time <= 0.11842244863510132) {
                                    votes[39] = 4;
                                } else {
                                    if (rr_std <= 18.833104133605957) {
                                        votes[39] = 4;
                                    } else {
                                        votes[39] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.052752064540982246) {
                            votes[39] = 4;
                        } else {
                            if (num_peaks <= 86.0) {
                                votes[39] = 4;
                            } else {
                                if (num_valleys <= 64.0) {
                                    votes[39] = 5;
                                } else {
                                    if (diastolic_time <= 0.09715233743190765) {
                                        votes[39] = 3;
                                    } else {
                                        votes[39] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 32.416404724121094) {
                        if (dist_std <= 0.07595354318618774) {
                            if (rr_median <= 76.0) {
                                votes[39] = 3;
                            } else {
                                votes[39] = 0;
                            }
                        } else {
                            votes[39] = 3;
                        }
                    } else {
                        if (dist_std <= 0.04261184297502041) {
                            votes[39] = 1;
                        } else {
                            votes[39] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (dist_std <= 0.03818050026893616) {
                    votes[39] = 4;
                } else {
                    if (diastolic_time <= 0.06703441590070724) {
                        votes[39] = 1;
                    } else {
                        votes[39] = 5;
                    }
                }
            } else {
                if (dist_std <= 0.08837750926613808) {
                    if (rr_std <= 12.01602840423584) {
                        if (num_peaks <= 136.0) {
                            votes[39] = 1;
                        } else {
                            votes[39] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.08774392679333687) {
                            if (rr_median <= 110.5) {
                                votes[39] = 1;
                            } else {
                                if (num_valleys <= 69.5) {
                                    votes[39] = 1;
                                } else {
                                    votes[39] = 1;
                                }
                            }
                        } else {
                            votes[39] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 126.5) {
                        votes[39] = 5;
                    } else {
                        votes[39] = 1;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (dist_std <= 0.09846341237425804) {
                if (diastolic_time <= 0.6154769361019135) {
                    if (rr_std <= 14.615931987762451) {
                        if (rr_median <= 64.0) {
                            votes[39] = 3;
                        } else {
                            if (num_peaks <= 108.0) {
                                votes[39] = 5;
                            } else {
                                votes[39] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 91.5) {
                            if (num_peaks <= 101.0) {
                                if (rr_median <= 77.25) {
                                    votes[39] = 2;
                                } else {
                                    if (diastolic_time <= 0.33343082666397095) {
                                        votes[39] = 2;
                                    } else {
                                        votes[39] = 4;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.4560000002384186) {
                                    votes[39] = 1;
                                } else {
                                    votes[39] = 0;
                                }
                            }
                        } else {
                            if (num_peaks <= 77.5) {
                                votes[39] = 4;
                            } else {
                                votes[39] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 4.59311056137085) {
                        votes[39] = 1;
                    } else {
                        if (rr_median <= 85.75) {
                            votes[39] = 1;
                        } else {
                            if (dist_std <= 0.07663389295339584) {
                                votes[39] = 1;
                            } else {
                                votes[39] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 109.0) {
                        if (dist_std <= 0.17900366336107254) {
                            if (rr_median <= 73.5) {
                                votes[39] = 2;
                            } else {
                                votes[39] = 2;
                            }
                        } else {
                            votes[39] = 2;
                        }
                    } else {
                        votes[39] = 2;
                    }
                } else {
                    votes[39] = 5;
                }
            }
        } else {
            if (dist_std <= 0.05531284213066101) {
                if (rr_std <= 8.305138111114502) {
                    votes[39] = 0;
                } else {
                    if (rr_median <= 54.75) {
                        if (rr_std <= 12.185123920440674) {
                            votes[39] = 3;
                        } else {
                            votes[39] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.28202298283576965) {
                            votes[39] = 0;
                        } else {
                            if (diastolic_time <= 0.6267878711223602) {
                                if (num_valleys <= 74.5) {
                                    if (num_valleys <= 73.5) {
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
                if (num_peaks <= 135.5) {
                    if (diastolic_time <= 0.8248888850212097) {
                        if (rr_median <= 81.0) {
                            votes[39] = 5;
                        } else {
                            votes[39] = 5;
                        }
                    } else {
                        votes[39] = 1;
                    }
                } else {
                    votes[39] = 0;
                }
            }
        }
    }
// Decision rules for tree 40
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_std <= 15.967272281646729) {
            if (rr_median <= 98.5) {
                if (rr_median <= 66.5) {
                    if (dist_std <= 0.07846580073237419) {
                        if (diastolic_time <= 0.1153142862021923) {
                            if (rr_std <= 10.076533794403076) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 3;
                            }
                        } else {
                            if (num_peaks <= 133.0) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 3;
                            }
                        }
                    } else {
                        if (num_valleys <= 79.5) {
                            if (num_peaks <= 113.5) {
                                votes[40] = 3;
                            } else {
                                if (diastolic_time <= 0.16480112075805664) {
                                    votes[40] = 1;
                                } else {
                                    votes[40] = 3;
                                }
                            }
                        } else {
                            votes[40] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.033569009974598885) {
                        votes[40] = 0;
                    } else {
                        if (rr_std <= 0.6694315373897552) {
                            if (diastolic_time <= 0.12322971969842911) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 5;
                            }
                        } else {
                            if (rr_std <= 13.6130952835083) {
                                if (num_peaks <= 128.5) {
                                    if (rr_std <= 0.9758365750312805) {
                                        votes[40] = 5;
                                    } else {
                                        votes[40] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 135.5) {
                                        votes[40] = 3;
                                    } else {
                                        votes[40] = 5;
                                    }
                                }
                            } else {
                                votes[40] = 3;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 0.5948760658502579) {
                    votes[40] = 4;
                } else {
                    if (num_valleys <= 83.0) {
                        votes[40] = 1;
                    } else {
                        votes[40] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 132.5) {
                if (rr_median <= 76.0) {
                    if (dist_std <= 0.11760768294334412) {
                        if (diastolic_time <= 0.17410390824079514) {
                            if (dist_std <= 0.028565441258251667) {
                                votes[40] = 4;
                            } else {
                                if (num_valleys <= 72.5) {
                                    votes[40] = 4;
                                } else {
                                    votes[40] = 4;
                                }
                            }
                        } else {
                            votes[40] = 4;
                        }
                    } else {
                        votes[40] = 3;
                    }
                } else {
                    if (dist_std <= 0.049010567367076874) {
                        if (diastolic_time <= 0.08032653108239174) {
                            if (num_peaks <= 111.5) {
                                votes[40] = 4;
                            } else {
                                if (diastolic_time <= 0.056196313351392746) {
                                    votes[40] = 1;
                                } else {
                                    votes[40] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 79.5) {
                                votes[40] = 5;
                            } else {
                                if (diastolic_time <= 0.1315999999642372) {
                                    votes[40] = 4;
                                } else {
                                    votes[40] = 4;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.07657096534967422) {
                            if (num_valleys <= 63.5) {
                                votes[40] = 5;
                            } else {
                                if (rr_std <= 29.898712158203125) {
                                    votes[40] = 3;
                                } else {
                                    votes[40] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 93.5) {
                                votes[40] = 5;
                            } else {
                                votes[40] = 5;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.11560952290892601) {
                    if (rr_std <= 21.386966705322266) {
                        votes[40] = 3;
                    } else {
                        if (num_peaks <= 137.0) {
                            votes[40] = 3;
                        } else {
                            if (num_peaks <= 144.5) {
                                votes[40] = 1;
                            } else {
                                votes[40] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 80.75) {
                        if (num_peaks <= 137.0) {
                            votes[40] = 4;
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
        if (num_valleys <= 70.5) {
            if (dist_std <= 0.13068565726280212) {
                if (diastolic_time <= 0.8301111161708832) {
                    if (rr_std <= 11.695367813110352) {
                        if (rr_std <= 0.628690779209137) {
                            if (dist_std <= 0.09572739154100418) {
                                votes[40] = 3;
                            } else {
                                if (dist_std <= 0.12431932240724564) {
                                    votes[40] = 2;
                                } else {
                                    votes[40] = 2;
                                }
                            }
                        } else {
                            if (rr_median <= 65.75) {
                                votes[40] = 3;
                            } else {
                                if (diastolic_time <= 0.3329855054616928) {
                                    votes[40] = 5;
                                } else {
                                    if (num_valleys <= 66.0) {
                                        votes[40] = 5;
                                    } else {
                                        votes[40] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 92.5) {
                            if (rr_median <= 89.0) {
                                if (rr_std <= 33.76094627380371) {
                                    if (rr_median <= 76.75) {
                                        votes[40] = 2;
                                    } else {
                                        votes[40] = 2;
                                    }
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                if (rr_median <= 97.75) {
                                    if (rr_std <= 23.45696449279785) {
                                        votes[40] = 4;
                                    } else {
                                        votes[40] = 4;
                                    }
                                } else {
                                    if (rr_std <= 29.83998966217041) {
                                        votes[40] = 1;
                                    } else {
                                        votes[40] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 16.58848762512207) {
                                votes[40] = 0;
                            } else {
                                if (rr_std <= 56.23882293701172) {
                                    if (dist_std <= 0.04244883358478546) {
                                        votes[40] = 0;
                                    } else {
                                        if (dist_std <= 0.08654814213514328) {
                                            votes[40] = 2;
                                        } else {
                                            votes[40] = 2;
                                        }
                                    }
                                } else {
                                    votes[40] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 81.0) {
                        votes[40] = 2;
                    } else {
                        votes[40] = 1;
                    }
                }
            } else {
                if (num_peaks <= 105.5) {
                    if (num_valleys <= 40.0) {
                        votes[40] = 2;
                    } else {
                        votes[40] = 2;
                    }
                } else {
                    votes[40] = 2;
                }
            }
        } else {
            if (dist_std <= 0.05531284213066101) {
                if (rr_std <= 10.062979221343994) {
                    if (diastolic_time <= 0.4458823502063751) {
                        votes[40] = 3;
                    } else {
                        votes[40] = 0;
                    }
                } else {
                    if (num_peaks <= 133.5) {
                        if (num_peaks <= 129.5) {
                            votes[40] = 0;
                        } else {
                            votes[40] = 3;
                        }
                    } else {
                        if (rr_median <= 61.25) {
                            if (num_peaks <= 143.5) {
                                votes[40] = 0;
                            } else {
                                votes[40] = 0;
                            }
                        } else {
                            if (diastolic_time <= 0.3206886351108551) {
                                votes[40] = 0;
                            } else {
                                votes[40] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 125.0) {
                    if (rr_std <= 19.856319904327393) {
                        votes[40] = 5;
                    } else {
                        votes[40] = 1;
                    }
                } else {
                    if (dist_std <= 0.07209363207221031) {
                        if (rr_std <= 14.842283964157104) {
                            votes[40] = 5;
                        } else {
                            votes[40] = 0;
                        }
                    } else {
                        if (num_peaks <= 138.0) {
                            votes[40] = 3;
                        } else {
                            votes[40] = 2;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 41
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 66.25) {
            if (rr_std <= 14.878895282745361) {
                if (rr_median <= 44.5) {
                    votes[41] = 4;
                } else {
                    if (rr_median <= 53.25) {
                        votes[41] = 3;
                    } else {
                        if (rr_std <= 10.076533794403076) {
                            if (num_valleys <= 73.5) {
                                votes[41] = 3;
                            } else {
                                votes[41] = 3;
                            }
                        } else {
                            if (dist_std <= 0.04812432453036308) {
                                votes[41] = 3;
                            } else {
                                votes[41] = 1;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 129.5) {
                    if (diastolic_time <= 0.1757219061255455) {
                        if (rr_std <= 16.599160194396973) {
                            votes[41] = 4;
                        } else {
                            if (num_peaks <= 106.5) {
                                votes[41] = 4;
                            } else {
                                votes[41] = 4;
                            }
                        }
                    } else {
                        votes[41] = 3;
                    }
                } else {
                    if (diastolic_time <= 0.0928475596010685) {
                        votes[41] = 3;
                    } else {
                        votes[41] = 3;
                    }
                }
            }
        } else {
            if (rr_median <= 99.25) {
                if (rr_std <= 15.716776847839355) {
                    if (rr_std <= 0.5734450221061707) {
                        if (diastolic_time <= 0.2183559536933899) {
                            votes[41] = 5;
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        if (diastolic_time <= 0.034256696701049805) {
                            votes[41] = 0;
                        } else {
                            if (num_peaks <= 129.5) {
                                if (rr_std <= 0.8516296148300171) {
                                    if (rr_std <= 0.6495611071586609) {
                                        votes[41] = 5;
                                    } else {
                                        votes[41] = 1;
                                    }
                                } else {
                                    if (rr_std <= 10.121206283569336) {
                                        if (dist_std <= 0.10594991222023964) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    } else {
                                        votes[41] = 0;
                                    }
                                }
                            } else {
                                if (num_peaks <= 137.0) {
                                    if (num_valleys <= 73.0) {
                                        votes[41] = 5;
                                    } else {
                                        if (rr_median <= 73.5) {
                                            votes[41] = 3;
                                        } else {
                                            votes[41] = 3;
                                        }
                                    }
                                } else {
                                    votes[41] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 74.5) {
                        if (dist_std <= 0.10398780927062035) {
                            if (rr_std <= 28.44734001159668) {
                                if (num_peaks <= 123.5) {
                                    if (rr_std <= 21.867565155029297) {
                                        votes[41] = 3;
                                    } else {
                                        votes[41] = 4;
                                    }
                                } else {
                                    if (rr_std <= 21.370245933532715) {
                                        votes[41] = 4;
                                    } else {
                                        if (num_valleys <= 68.5) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 41.89360427856445) {
                                    if (dist_std <= 0.048230577260255814) {
                                        votes[41] = 4;
                                    } else {
                                        votes[41] = 4;
                                    }
                                } else {
                                    votes[41] = 4;
                                }
                            }
                        } else {
                            votes[41] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.07620153203606606) {
                            votes[41] = 1;
                        } else {
                            if (rr_median <= 91.0) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_valleys <= 62.5) {
                    if (num_valleys <= 53.5) {
                        if (num_valleys <= 46.0) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 1;
                        }
                    } else {
                        votes[41] = 4;
                    }
                } else {
                    if (rr_std <= 13.908481121063232) {
                        if (diastolic_time <= 0.054697077721357346) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.06129005737602711) {
                            if (rr_median <= 112.75) {
                                votes[41] = 3;
                            } else {
                                votes[41] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.09277376160025597) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.06242981739342213) {
            if (num_peaks <= 107.5) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (dist_std <= 0.03690878488123417) {
                        votes[41] = 5;
                    } else {
                        if (rr_median <= 92.0) {
                            if (num_peaks <= 90.5) {
                                votes[41] = 2;
                            } else {
                                votes[41] = 2;
                            }
                        } else {
                            votes[41] = 4;
                        }
                    }
                } else {
                    if (dist_std <= 0.052209703251719475) {
                        votes[41] = 1;
                    } else {
                        votes[41] = 1;
                    }
                }
            } else {
                if (rr_std <= 4.967562675476074) {
                    votes[41] = 5;
                } else {
                    if (rr_median <= 55.75) {
                        if (rr_std <= 12.079430103302002) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.7691999971866608) {
                            if (num_valleys <= 74.5) {
                                if (num_valleys <= 73.5) {
                                    votes[41] = 0;
                                } else {
                                    votes[41] = 0;
                                }
                            } else {
                                votes[41] = 0;
                            }
                        } else {
                            votes[41] = 0;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.09510686621069908) {
                if (diastolic_time <= 0.5948615372180939) {
                    if (rr_std <= 16.175762176513672) {
                        if (rr_median <= 64.0) {
                            votes[41] = 3;
                        } else {
                            if (num_valleys <= 71.5) {
                                votes[41] = 5;
                            } else {
                                votes[41] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 88.5) {
                            votes[41] = 2;
                        } else {
                            if (rr_median <= 83.75) {
                                votes[41] = 2;
                            } else {
                                votes[41] = 2;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 122.5) {
                        if (num_peaks <= 101.0) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 1;
                        }
                    } else {
                        votes[41] = 0;
                    }
                }
            } else {
                if (num_peaks <= 111.5) {
                    if (rr_median <= 74.25) {
                        if (rr_median <= 73.5) {
                            if (dist_std <= 0.1790822669863701) {
                                votes[41] = 2;
                            } else {
                                votes[41] = 2;
                            }
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        votes[41] = 5;
                    }
                } else {
                    if (diastolic_time <= 0.41120000183582306) {
                        if (rr_std <= 0.9035466313362122) {
                            votes[41] = 5;
                        } else {
                            votes[41] = 3;
                        }
                    } else {
                        votes[41] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 42
    if (diastolic_time <= 0.2302621826529503) {
        if (rr_median <= 98.5) {
            if (rr_std <= 16.939903259277344) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.07042357325553894) {
                        if (num_valleys <= 67.5) {
                            votes[42] = 3;
                        } else {
                            if (dist_std <= 0.03233727067708969) {
                                votes[42] = 3;
                            } else {
                                votes[42] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.059082431718707085) {
                            votes[42] = 4;
                        } else {
                            if (num_valleys <= 63.0) {
                                if (num_peaks <= 106.5) {
                                    votes[42] = 3;
                                } else {
                                    votes[42] = 3;
                                }
                            } else {
                                votes[42] = 1;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 58.5) {
                        if (dist_std <= 0.10945514589548111) {
                            votes[42] = 1;
                        } else {
                            votes[42] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.2031794860959053) {
                            if (num_valleys <= 82.5) {
                                if (diastolic_time <= 0.06748328171670437) {
                                    votes[42] = 5;
                                } else {
                                    if (dist_std <= 0.10567919909954071) {
                                        if (num_peaks <= 137.5) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 5;
                                        }
                                    } else {
                                        votes[42] = 1;
                                    }
                                }
                            } else {
                                votes[42] = 5;
                            }
                        } else {
                            votes[42] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (dist_std <= 0.044336505234241486) {
                        if (diastolic_time <= 0.08367644250392914) {
                            votes[42] = 4;
                        } else {
                            if (rr_std <= 18.86812686920166) {
                                votes[42] = 4;
                            } else {
                                if (dist_std <= 0.04201292805373669) {
                                    votes[42] = 4;
                                } else {
                                    votes[42] = 4;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.04334873892366886) {
                            if (rr_std <= 58.432565689086914) {
                                votes[42] = 4;
                            } else {
                                votes[42] = 4;
                            }
                        } else {
                            if (diastolic_time <= 0.14351671189069748) {
                                if (diastolic_time <= 0.06994782760739326) {
                                    votes[42] = 3;
                                } else {
                                    if (diastolic_time <= 0.08786363527178764) {
                                        votes[42] = 1;
                                    } else {
                                        if (num_valleys <= 70.0) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 64.0) {
                                    votes[42] = 2;
                                } else {
                                    votes[42] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 63.0) {
                        votes[42] = 1;
                    } else {
                        if (rr_median <= 77.0) {
                            votes[42] = 3;
                        } else {
                            if (diastolic_time <= 0.08744513615965843) {
                                votes[42] = 1;
                            } else {
                                votes[42] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (dist_std <= 0.041274964809417725) {
                    votes[42] = 4;
                } else {
                    if (rr_std <= 57.86333656311035) {
                        if (rr_std <= 14.94193148612976) {
                            votes[42] = 1;
                        } else {
                            votes[42] = 4;
                        }
                    } else {
                        votes[42] = 5;
                    }
                }
            } else {
                if (rr_median <= 123.25) {
                    if (diastolic_time <= 0.08714224398136139) {
                        if (diastolic_time <= 0.058016976341605186) {
                            votes[42] = 1;
                        } else {
                            if (dist_std <= 0.07565439864993095) {
                                votes[42] = 1;
                            } else {
                                votes[42] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 10.277205467224121) {
                            votes[42] = 1;
                        } else {
                            votes[42] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 193.0) {
                        if (dist_std <= 0.054012808948755264) {
                            votes[42] = 1;
                        } else {
                            votes[42] = 1;
                        }
                    } else {
                        votes[42] = 2;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05776873417198658) {
            if (num_peaks <= 107.5) {
                if (diastolic_time <= 0.6120000183582306) {
                    if (dist_std <= 0.03716392442584038) {
                        votes[42] = 5;
                    } else {
                        if (rr_median <= 81.75) {
                            votes[42] = 2;
                        } else {
                            if (rr_std <= 28.440722465515137) {
                                votes[42] = 4;
                            } else {
                                votes[42] = 4;
                            }
                        }
                    }
                } else {
                    votes[42] = 1;
                }
            } else {
                if (rr_median <= 52.25) {
                    votes[42] = 1;
                } else {
                    if (rr_std <= 7.802156209945679) {
                        votes[42] = 5;
                    } else {
                        if (diastolic_time <= 0.29153968393802643) {
                            if (rr_std <= 14.586450099945068) {
                                votes[42] = 3;
                            } else {
                                votes[42] = 0;
                            }
                        } else {
                            if (rr_std <= 43.77496147155762) {
                                if (rr_median <= 55.75) {
                                    votes[42] = 0;
                                } else {
                                    if (num_valleys <= 74.5) {
                                        if (num_valleys <= 73.5) {
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
            if (diastolic_time <= 0.7995555400848389) {
                if (dist_std <= 0.12341707199811935) {
                    if (rr_std <= 14.812215328216553) {
                        if (num_peaks <= 64.5) {
                            votes[42] = 2;
                        } else {
                            if (dist_std <= 0.11179769784212112) {
                                if (diastolic_time <= 0.4564705938100815) {
                                    if (rr_median <= 75.75) {
                                        if (rr_std <= 0.49325212836265564) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 5;
                                        }
                                    } else {
                                        votes[42] = 3;
                                    }
                                } else {
                                    if (rr_median <= 97.5) {
                                        votes[42] = 5;
                                    } else {
                                        votes[42] = 5;
                                    }
                                }
                            } else {
                                votes[42] = 2;
                            }
                        }
                    } else {
                        if (dist_std <= 0.06684161722660065) {
                            votes[42] = 1;
                        } else {
                            if (num_peaks <= 86.0) {
                                if (num_valleys <= 51.0) {
                                    votes[42] = 2;
                                } else {
                                    votes[42] = 4;
                                }
                            } else {
                                if (rr_median <= 85.5) {
                                    if (rr_std <= 26.544848442077637) {
                                        votes[42] = 2;
                                    } else {
                                        votes[42] = 3;
                                    }
                                } else {
                                    votes[42] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 83.0) {
                        if (num_valleys <= 65.5) {
                            if (num_peaks <= 105.5) {
                                votes[42] = 2;
                            } else {
                                votes[42] = 2;
                            }
                        } else {
                            votes[42] = 2;
                        }
                    } else {
                        votes[42] = 5;
                    }
                }
            } else {
                if (rr_median <= 78.75) {
                    votes[42] = 2;
                } else {
                    votes[42] = 1;
                }
            }
        }
    }
// Decision rules for tree 43
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_std <= 16.190052032470703) {
            if (rr_median <= 99.5) {
                if (rr_median <= 66.5) {
                    if (dist_std <= 0.0815422348678112) {
                        if (num_peaks <= 132.5) {
                            if (diastolic_time <= 0.10198525339365005) {
                                votes[43] = 3;
                            } else {
                                votes[43] = 5;
                            }
                        } else {
                            if (rr_median <= 60.5) {
                                votes[43] = 3;
                            } else {
                                votes[43] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 121.5) {
                            if (rr_median <= 50.5) {
                                votes[43] = 3;
                            } else {
                                votes[43] = 3;
                            }
                        } else {
                            if (rr_median <= 53.25) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 68.25) {
                        votes[43] = 2;
                    } else {
                        if (num_valleys <= 64.5) {
                            if (num_valleys <= 49.5) {
                                votes[43] = 5;
                            } else {
                                if (rr_median <= 76.25) {
                                    votes[43] = 4;
                                } else {
                                    if (rr_std <= 8.673605918884277) {
                                        if (diastolic_time <= 0.0793943926692009) {
                                            votes[43] = 1;
                                        } else {
                                            votes[43] = 1;
                                        }
                                    } else {
                                        votes[43] = 1;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 128.5) {
                                if (num_valleys <= 71.5) {
                                    if (num_valleys <= 66.5) {
                                        votes[43] = 5;
                                    } else {
                                        if (rr_median <= 86.75) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 0.8312629461288452) {
                                        votes[43] = 5;
                                    } else {
                                        votes[43] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 136.5) {
                                    if (dist_std <= 0.059383947402238846) {
                                        votes[43] = 3;
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
                if (rr_std <= 0.20786985754966736) {
                    votes[43] = 4;
                } else {
                    if (dist_std <= 0.057050397619605064) {
                        votes[43] = 1;
                    } else {
                        if (rr_std <= 9.34821081161499) {
                            votes[43] = 1;
                        } else {
                            votes[43] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 128.5) {
                if (dist_std <= 0.06538360193371773) {
                    if (rr_median <= 113.5) {
                        if (diastolic_time <= 0.13717609643936157) {
                            if (rr_median <= 67.5) {
                                votes[43] = 4;
                            } else {
                                if (dist_std <= 0.03686140663921833) {
                                    votes[43] = 4;
                                } else {
                                    if (num_valleys <= 68.5) {
                                        votes[43] = 4;
                                    } else {
                                        votes[43] = 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 42.94256401062012) {
                                votes[43] = 4;
                            } else {
                                votes[43] = 4;
                            }
                        }
                    } else {
                        if (num_valleys <= 61.0) {
                            votes[43] = 4;
                        } else {
                            votes[43] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.04520588181912899) {
                        if (num_peaks <= 113.5) {
                            votes[43] = 4;
                        } else {
                            votes[43] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.2575760930776596) {
                            if (num_peaks <= 93.0) {
                                if (dist_std <= 0.09651194140315056) {
                                    votes[43] = 4;
                                } else {
                                    votes[43] = 3;
                                }
                            } else {
                                if (num_valleys <= 73.0) {
                                    if (num_valleys <= 65.5) {
                                        votes[43] = 1;
                                    } else {
                                        votes[43] = 3;
                                    }
                                } else {
                                    votes[43] = 5;
                                }
                            }
                        } else {
                            votes[43] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.0858260877430439) {
                    if (diastolic_time <= 0.04143567755818367) {
                        votes[43] = 3;
                    } else {
                        if (dist_std <= 0.053183918818831444) {
                            if (dist_std <= 0.03601684793829918) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 1;
                            }
                        } else {
                            votes[43] = 1;
                        }
                    }
                } else {
                    if (rr_median <= 93.75) {
                        if (diastolic_time <= 0.11597362533211708) {
                            if (rr_median <= 62.75) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.18739837408065796) {
                                if (num_peaks <= 133.5) {
                                    votes[43] = 4;
                                } else {
                                    votes[43] = 3;
                                }
                            } else {
                                votes[43] = 5;
                            }
                        }
                    } else {
                        if (dist_std <= 0.04540272802114487) {
                            votes[43] = 5;
                        } else {
                            votes[43] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_time <= 0.6154769361019135) {
                if (dist_std <= 0.09452830255031586) {
                    if (rr_std <= 14.31995677947998) {
                        if (num_valleys <= 69.5) {
                            if (num_peaks <= 98.5) {
                                votes[43] = 5;
                            } else {
                                votes[43] = 3;
                            }
                        } else {
                            votes[43] = 0;
                        }
                    } else {
                        if (rr_median <= 75.5) {
                            if (dist_std <= 0.0353142861276865) {
                                votes[43] = 0;
                            } else {
                                if (rr_median <= 71.5) {
                                    votes[43] = 2;
                                } else {
                                    votes[43] = 2;
                                }
                            }
                        } else {
                            if (num_peaks <= 88.5) {
                                if (num_valleys <= 47.0) {
                                    votes[43] = 4;
                                } else {
                                    votes[43] = 4;
                                }
                            } else {
                                if (rr_std <= 32.50613784790039) {
                                    votes[43] = 2;
                                } else {
                                    votes[43] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 111.5) {
                        if (rr_median <= 74.5) {
                            if (rr_median <= 69.5) {
                                votes[43] = 2;
                            } else {
                                votes[43] = 2;
                            }
                        } else {
                            votes[43] = 5;
                        }
                    } else {
                        votes[43] = 5;
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[43] = 1;
                } else {
                    votes[43] = 1;
                }
            }
        } else {
            if (dist_std <= 0.06627212278544903) {
                if (rr_median <= 52.25) {
                    votes[43] = 3;
                } else {
                    if (diastolic_time <= 0.29956695437431335) {
                        votes[43] = 0;
                    } else {
                        if (dist_std <= 0.028821819461882114) {
                            votes[43] = 0;
                        } else {
                            if (rr_std <= 7.8290629386901855) {
                                votes[43] = 0;
                            } else {
                                votes[43] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 83.25) {
                    votes[43] = 3;
                } else {
                    votes[43] = 2;
                }
            }
        }
    }
// Decision rules for tree 44
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 81.5) {
            if (rr_std <= 20.21463394165039) {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.04966096766293049) {
                        if (rr_std <= 8.194443702697754) {
                            votes[44] = 3;
                        } else {
                            votes[44] = 4;
                        }
                    } else {
                        if (num_peaks <= 113.5) {
                            if (num_peaks <= 100.0) {
                                votes[44] = 4;
                            } else {
                                votes[44] = 3;
                            }
                        } else {
                            if (dist_std <= 0.1207314021885395) {
                                if (diastolic_time <= 0.09144239500164986) {
                                    votes[44] = 3;
                                } else {
                                    if (diastolic_time <= 0.13809090852737427) {
                                        votes[44] = 5;
                                    } else {
                                        if (rr_std <= 14.23733139038086) {
                                            votes[44] = 3;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 64.0) {
                                    votes[44] = 1;
                                } else {
                                    votes[44] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.07846580073237419) {
                        if (rr_median <= 69.0) {
                            if (rr_median <= 62.75) {
                                votes[44] = 3;
                            } else {
                                votes[44] = 3;
                            }
                        } else {
                            votes[44] = 3;
                        }
                    } else {
                        votes[44] = 1;
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (dist_std <= 0.11696609482169151) {
                        if (rr_median <= 75.5) {
                            if (num_peaks <= 125.5) {
                                votes[44] = 4;
                            } else {
                                if (dist_std <= 0.03986596129834652) {
                                    votes[44] = 4;
                                } else {
                                    votes[44] = 4;
                                }
                            }
                        } else {
                            votes[44] = 5;
                        }
                    } else {
                        votes[44] = 3;
                    }
                } else {
                    votes[44] = 3;
                }
            }
        } else {
            if (dist_std <= 0.03676856681704521) {
                if (num_peaks <= 132.0) {
                    if (num_valleys <= 66.5) {
                        if (num_peaks <= 112.5) {
                            votes[44] = 4;
                        } else {
                            votes[44] = 4;
                        }
                    } else {
                        votes[44] = 4;
                    }
                } else {
                    votes[44] = 5;
                }
            } else {
                if (diastolic_time <= 0.011158470064401627) {
                    votes[44] = 0;
                } else {
                    if (diastolic_time <= 0.08850273117423058) {
                        if (rr_median <= 111.75) {
                            if (dist_std <= 0.090927854180336) {
                                if (rr_std <= 28.68026065826416) {
                                    if (dist_std <= 0.05950426869094372) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 1;
                                    }
                                } else {
                                    if (num_peaks <= 122.0) {
                                        votes[44] = 1;
                                    } else {
                                        votes[44] = 1;
                                    }
                                }
                            } else {
                                votes[44] = 5;
                            }
                        } else {
                            if (num_valleys <= 59.0) {
                                votes[44] = 1;
                            } else {
                                votes[44] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 12.975345611572266) {
                            if (rr_median <= 101.5) {
                                if (diastolic_time <= 0.15412000566720963) {
                                    if (dist_std <= 0.09402196481823921) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 1;
                                    }
                                } else {
                                    votes[44] = 5;
                                }
                            } else {
                                if (diastolic_time <= 0.14583589881658554) {
                                    votes[44] = 1;
                                } else {
                                    votes[44] = 1;
                                }
                            }
                        } else {
                            if (num_valleys <= 72.5) {
                                if (dist_std <= 0.06302878633141518) {
                                    votes[44] = 4;
                                } else {
                                    votes[44] = 4;
                                }
                            } else {
                                if (rr_median <= 116.75) {
                                    votes[44] = 5;
                                } else {
                                    votes[44] = 5;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_time <= 0.705381840467453) {
                if (dist_std <= 0.11415177583694458) {
                    if (num_peaks <= 99.0) {
                        if (rr_median <= 88.5) {
                            if (rr_std <= 15.460299491882324) {
                                if (num_peaks <= 81.0) {
                                    votes[44] = 2;
                                } else {
                                    if (rr_median <= 67.75) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 5;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.07610125839710236) {
                                    if (dist_std <= 0.054936494678258896) {
                                        if (rr_median <= 78.25) {
                                            votes[44] = 2;
                                        } else {
                                            votes[44] = 2;
                                        }
                                    } else {
                                        if (num_peaks <= 85.0) {
                                            votes[44] = 2;
                                        } else {
                                            votes[44] = 2;
                                        }
                                    }
                                } else {
                                    votes[44] = 4;
                                }
                            }
                        } else {
                            if (dist_std <= 0.03468536026775837) {
                                votes[44] = 5;
                            } else {
                                if (num_valleys <= 45.0) {
                                    votes[44] = 4;
                                } else {
                                    votes[44] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 64.0) {
                            votes[44] = 3;
                        } else {
                            if (dist_std <= 0.05706220865249634) {
                                votes[44] = 0;
                            } else {
                                if (diastolic_time <= 0.4116588234901428) {
                                    if (rr_std <= 11.392733573913574) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 5;
                                    }
                                } else {
                                    votes[44] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 81.0) {
                        if (num_valleys <= 66.0) {
                            if (rr_median <= 69.5) {
                                if (dist_std <= 0.13961991667747498) {
                                    votes[44] = 3;
                                } else {
                                    if (num_valleys <= 56.5) {
                                        votes[44] = 2;
                                    } else {
                                        votes[44] = 2;
                                    }
                                }
                            } else {
                                votes[44] = 2;
                            }
                        } else {
                            votes[44] = 2;
                        }
                    } else {
                        votes[44] = 5;
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    votes[44] = 5;
                } else {
                    if (rr_median <= 79.25) {
                        votes[44] = 1;
                    } else {
                        votes[44] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06483301520347595) {
                if (diastolic_time <= 0.350758895277977) {
                    if (rr_median <= 64.5) {
                        votes[44] = 3;
                    } else {
                        if (dist_std <= 0.03626403212547302) {
                            votes[44] = 5;
                        } else {
                            votes[44] = 0;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.7435999810695648) {
                        if (num_valleys <= 74.5) {
                            if (num_valleys <= 73.5) {
                                if (rr_std <= 36.54012489318848) {
                                    votes[44] = 0;
                                } else {
                                    votes[44] = 0;
                                }
                            } else {
                                votes[44] = 0;
                            }
                        } else {
                            if (rr_std <= 9.311739921569824) {
                                votes[44] = 0;
                            } else {
                                votes[44] = 0;
                            }
                        }
                    } else {
                        votes[44] = 5;
                    }
                }
            } else {
                if (rr_std <= 32.07631587982178) {
                    if (dist_std <= 0.07282015308737755) {
                        votes[44] = 5;
                    } else {
                        if (dist_std <= 0.09411387890577316) {
                            votes[44] = 3;
                        } else {
                            votes[44] = 2;
                        }
                    }
                } else {
                    votes[44] = 2;
                }
            }
        }
    }
// Decision rules for tree 45
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_std <= 16.190052032470703) {
            if (rr_median <= 98.5) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.1390446275472641) {
                        if (rr_std <= 10.030611991882324) {
                            if (diastolic_time <= 0.15352638065814972) {
                                if (rr_std <= 7.94415020942688) {
                                    if (num_peaks <= 117.0) {
                                        votes[45] = 3;
                                    } else {
                                        votes[45] = 3;
                                    }
                                } else {
                                    votes[45] = 3;
                                }
                            } else {
                                if (rr_std <= 5.016893625259399) {
                                    if (rr_median <= 60.5) {
                                        votes[45] = 3;
                                    } else {
                                        votes[45] = 5;
                                    }
                                } else {
                                    votes[45] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 10.89619255065918) {
                                if (rr_std <= 10.309037685394287) {
                                    votes[45] = 1;
                                } else {
                                    votes[45] = 1;
                                }
                            } else {
                                if (num_valleys <= 71.5) {
                                    votes[45] = 4;
                                } else {
                                    if (dist_std <= 0.03564738109707832) {
                                        votes[45] = 3;
                                    } else {
                                        votes[45] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 61.75) {
                            votes[45] = 4;
                        } else {
                            votes[45] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 107.5) {
                        if (rr_median <= 82.5) {
                            if (num_valleys <= 62.5) {
                                votes[45] = 2;
                            } else {
                                votes[45] = 5;
                            }
                        } else {
                            if (rr_median <= 89.75) {
                                votes[45] = 1;
                            } else {
                                votes[45] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.034643569961190224) {
                            votes[45] = 0;
                        } else {
                            if (rr_std <= 13.34977388381958) {
                                if (rr_std <= 6.411717414855957) {
                                    if (rr_std <= 1.8404717445373535) {
                                        if (rr_std <= 0.6836167573928833) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    } else {
                                        votes[45] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 0.15976469963788986) {
                                        if (diastolic_time <= 0.0970308892428875) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    } else {
                                        votes[45] = 5;
                                    }
                                }
                            } else {
                                if (num_valleys <= 77.5) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 0.20786985754966736) {
                    votes[45] = 4;
                } else {
                    if (rr_median <= 103.5) {
                        votes[45] = 1;
                    } else {
                        if (diastolic_time <= 0.11359436437487602) {
                            votes[45] = 1;
                        } else {
                            if (diastolic_time <= 0.14583589881658554) {
                                votes[45] = 1;
                            } else {
                                votes[45] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 133.5) {
                if (rr_median <= 97.75) {
                    if (num_valleys <= 72.5) {
                        if (dist_std <= 0.11539726331830025) {
                            if (rr_std <= 20.299455642700195) {
                                if (rr_std <= 18.97059154510498) {
                                    if (num_peaks <= 120.5) {
                                        votes[45] = 4;
                                    } else {
                                        votes[45] = 4;
                                    }
                                } else {
                                    votes[45] = 3;
                                }
                            } else {
                                if (rr_median <= 46.5) {
                                    votes[45] = 4;
                                } else {
                                    if (rr_median <= 94.5) {
                                        if (num_peaks <= 125.5) {
                                            votes[45] = 4;
                                        } else {
                                            votes[45] = 4;
                                        }
                                    } else {
                                        votes[45] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[45] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.14232658594846725) {
                            votes[45] = 3;
                        } else {
                            votes[45] = 4;
                        }
                    }
                } else {
                    if (num_valleys <= 64.5) {
                        if (dist_std <= 0.05089575797319412) {
                            votes[45] = 4;
                        } else {
                            if (rr_std <= 57.86333656311035) {
                                votes[45] = 4;
                            } else {
                                votes[45] = 5;
                            }
                        }
                    } else {
                        if (dist_std <= 0.06798169761896133) {
                            if (num_valleys <= 71.5) {
                                votes[45] = 1;
                            } else {
                                votes[45] = 1;
                            }
                        } else {
                            votes[45] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 77.0) {
                    if (num_valleys <= 75.0) {
                        votes[45] = 3;
                    } else {
                        if (num_peaks <= 139.0) {
                            votes[45] = 3;
                        } else {
                            votes[45] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.10695238038897514) {
                        if (diastolic_time <= 0.047569639980793) {
                            votes[45] = 0;
                        } else {
                            if (diastolic_time <= 0.07611500099301338) {
                                votes[45] = 1;
                            } else {
                                votes[45] = 1;
                            }
                        }
                    } else {
                        votes[45] = 5;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05733044631779194) {
            if (num_valleys <= 60.5) {
                if (diastolic_time <= 0.4994509816169739) {
                    if (dist_std <= 0.03560692723840475) {
                        votes[45] = 5;
                    } else {
                        if (rr_median <= 97.25) {
                            if (dist_std <= 0.046992843970656395) {
                                votes[45] = 4;
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
                if (rr_std <= 8.305138111114502) {
                    votes[45] = 5;
                } else {
                    if (rr_median <= 52.75) {
                        votes[45] = 3;
                    } else {
                        if (diastolic_time <= 0.7818666696548462) {
                            if (diastolic_time <= 0.29926496744155884) {
                                votes[45] = 0;
                            } else {
                                if (rr_median <= 55.75) {
                                    votes[45] = 0;
                                } else {
                                    if (rr_median <= 61.5) {
                                        if (diastolic_time <= 0.43341176211833954) {
                                            votes[45] = 0;
                                        } else {
                                            votes[45] = 0;
                                        }
                                    } else {
                                        votes[45] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[45] = 0;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.8026666641235352) {
                if (rr_std <= 0.6896102130413055) {
                    if (diastolic_time <= 0.5365128219127655) {
                        if (dist_std <= 0.10264686867594719) {
                            votes[45] = 2;
                        } else {
                            if (num_valleys <= 56.5) {
                                votes[45] = 2;
                            } else {
                                if (rr_std <= 0.5240087509155273) {
                                    votes[45] = 2;
                                } else {
                                    votes[45] = 2;
                                }
                            }
                        }
                    } else {
                        votes[45] = 2;
                    }
                } else {
                    if (rr_std <= 14.812215328216553) {
                        if (num_peaks <= 132.0) {
                            if (diastolic_time <= 0.5056000053882599) {
                                if (rr_std <= 0.8974283635616302) {
                                    votes[45] = 5;
                                } else {
                                    if (num_valleys <= 66.5) {
                                        votes[45] = 2;
                                    } else {
                                        votes[45] = 5;
                                    }
                                }
                            } else {
                                votes[45] = 5;
                            }
                        } else {
                            votes[45] = 3;
                        }
                    } else {
                        if (rr_std <= 43.48970985412598) {
                            if (rr_median <= 82.5) {
                                if (num_peaks <= 105.5) {
                                    votes[45] = 2;
                                } else {
                                    votes[45] = 0;
                                }
                            } else {
                                if (num_valleys <= 59.5) {
                                    votes[45] = 4;
                                } else {
                                    votes[45] = 2;
                                }
                            }
                        } else {
                            votes[45] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.9000000059604645) {
                    votes[45] = 1;
                } else {
                    votes[45] = 1;
                }
            }
        }
    }
// Decision rules for tree 46
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 76.25) {
            if (rr_std <= 16.006247520446777) {
                if (dist_std <= 0.1390446275472641) {
                    if (num_valleys <= 51.5) {
                        votes[46] = 4;
                    } else {
                        if (rr_median <= 65.5) {
                            if (rr_std <= 9.750722408294678) {
                                if (rr_std <= 3.474081873893738) {
                                    if (num_peaks <= 117.5) {
                                        votes[46] = 3;
                                    } else {
                                        votes[46] = 1;
                                    }
                                } else {
                                    votes[46] = 3;
                                }
                            } else {
                                if (dist_std <= 0.056886252015829086) {
                                    if (num_peaks <= 134.5) {
                                        votes[46] = 3;
                                    } else {
                                        votes[46] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 122.5) {
                                        votes[46] = 4;
                                    } else {
                                        votes[46] = 1;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.0931844674050808) {
                                votes[46] = 3;
                            } else {
                                if (rr_median <= 70.5) {
                                    votes[46] = 5;
                                } else {
                                    if (num_valleys <= 72.5) {
                                        votes[46] = 5;
                                    } else {
                                        votes[46] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    votes[46] = 2;
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (diastolic_time <= 0.1854936182498932) {
                        if (dist_std <= 0.11539726331830025) {
                            if (rr_std <= 20.299455642700195) {
                                if (rr_std <= 19.035634994506836) {
                                    votes[46] = 4;
                                } else {
                                    votes[46] = 3;
                                }
                            } else {
                                if (num_peaks <= 123.5) {
                                    votes[46] = 4;
                                } else {
                                    if (rr_median <= 67.0) {
                                        votes[46] = 4;
                                    } else {
                                        votes[46] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[46] = 1;
                        }
                    } else {
                        votes[46] = 2;
                    }
                } else {
                    if (num_valleys <= 75.0) {
                        if (dist_std <= 0.03816194646060467) {
                            votes[46] = 4;
                        } else {
                            votes[46] = 3;
                        }
                    } else {
                        if (rr_median <= 63.5) {
                            votes[46] = 1;
                        } else {
                            votes[46] = 0;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.12814420461654663) {
                if (diastolic_time <= 0.011158470064401627) {
                    if (num_peaks <= 141.0) {
                        votes[46] = 3;
                    } else {
                        votes[46] = 0;
                    }
                } else {
                    if (num_valleys <= 62.5) {
                        if (rr_std <= 42.12406349182129) {
                            if (rr_median <= 91.5) {
                                votes[46] = 1;
                            } else {
                                if (diastolic_time <= 0.054222222417593) {
                                    votes[46] = 1;
                                } else {
                                    votes[46] = 5;
                                }
                            }
                        } else {
                            votes[46] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.06091477908194065) {
                            if (rr_std <= 27.325082778930664) {
                                votes[46] = 1;
                            } else {
                                if (num_peaks <= 117.5) {
                                    votes[46] = 1;
                                } else {
                                    votes[46] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 87.25) {
                                votes[46] = 5;
                            } else {
                                if (rr_median <= 109.25) {
                                    if (rr_median <= 97.5) {
                                        if (diastolic_time <= 0.08628571406006813) {
                                            votes[46] = 1;
                                        } else {
                                            votes[46] = 1;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.0803377628326416) {
                                            votes[46] = 1;
                                        } else {
                                            votes[46] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 133.5) {
                                        votes[46] = 5;
                                    } else {
                                        votes[46] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 16.58222484588623) {
                    if (rr_median <= 105.0) {
                        if (rr_std <= 0.936164528131485) {
                            if (rr_median <= 92.0) {
                                votes[46] = 1;
                            } else {
                                votes[46] = 5;
                            }
                        } else {
                            if (num_peaks <= 111.5) {
                                votes[46] = 5;
                            } else {
                                if (diastolic_time <= 0.1559215635061264) {
                                    votes[46] = 5;
                                } else {
                                    votes[46] = 5;
                                }
                            }
                        }
                    } else {
                        votes[46] = 1;
                    }
                } else {
                    if (num_peaks <= 132.5) {
                        if (dist_std <= 0.05112960562109947) {
                            if (rr_median <= 83.75) {
                                votes[46] = 4;
                            } else {
                                votes[46] = 4;
                            }
                        } else {
                            votes[46] = 5;
                        }
                    } else {
                        if (rr_std <= 28.280869483947754) {
                            votes[46] = 5;
                        } else {
                            votes[46] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (dist_std <= 0.09452830255031586) {
                if (rr_std <= 44.26643753051758) {
                    if (rr_std <= 14.36455774307251) {
                        if (rr_median <= 67.5) {
                            votes[46] = 3;
                        } else {
                            if (rr_std <= 7.691575288772583) {
                                if (rr_std <= 0.5662277638912201) {
                                    votes[46] = 5;
                                } else {
                                    votes[46] = 5;
                                }
                            } else {
                                votes[46] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 81.5) {
                            if (num_peaks <= 106.0) {
                                if (diastolic_time <= 0.36025454103946686) {
                                    votes[46] = 2;
                                } else {
                                    if (dist_std <= 0.058024026453495026) {
                                        votes[46] = 2;
                                    } else {
                                        votes[46] = 2;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.05010703206062317) {
                                    votes[46] = 0;
                                } else {
                                    votes[46] = 2;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.5299999713897705) {
                                if (diastolic_time <= 0.3183533400297165) {
                                    votes[46] = 2;
                                } else {
                                    if (diastolic_time <= 0.3556181788444519) {
                                        votes[46] = 4;
                                    } else {
                                        if (num_peaks <= 87.0) {
                                            votes[46] = 4;
                                        } else {
                                            votes[46] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[46] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.6441367566585541) {
                        votes[46] = 1;
                    } else {
                        votes[46] = 1;
                    }
                }
            } else {
                if (rr_std <= 0.6896102130413055) {
                    if (rr_median <= 69.5) {
                        votes[46] = 2;
                    } else {
                        if (diastolic_time <= 0.5073499977588654) {
                            votes[46] = 2;
                        } else {
                            votes[46] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 13.059131145477295) {
                        if (rr_std <= 0.851062536239624) {
                            votes[46] = 5;
                        } else {
                            votes[46] = 5;
                        }
                    } else {
                        if (rr_std <= 30.65805435180664) {
                            if (rr_std <= 19.7670841217041) {
                                votes[46] = 2;
                            } else {
                                votes[46] = 2;
                            }
                        } else {
                            votes[46] = 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.0629428755491972) {
                if (diastolic_time <= 0.725600004196167) {
                    if (rr_median <= 53.75) {
                        votes[46] = 0;
                    } else {
                        if (diastolic_time <= 0.29956695437431335) {
                            votes[46] = 0;
                        } else {
                            if (num_valleys <= 76.5) {
                                if (num_peaks <= 143.5) {
                                    if (rr_median <= 80.25) {
                                        votes[46] = 0;
                                    } else {
                                        votes[46] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 144.5) {
                                        votes[46] = 3;
                                    } else {
                                        votes[46] = 0;
                                    }
                                }
                            } else {
                                votes[46] = 0;
                            }
                        }
                    }
                } else {
                    votes[46] = 1;
                }
            } else {
                if (num_peaks <= 132.5) {
                    votes[46] = 5;
                } else {
                    if (dist_std <= 0.0748080238699913) {
                        votes[46] = 3;
                    } else {
                        votes[46] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 47
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 99.5) {
            if (rr_std <= 14.180799007415771) {
                if (rr_median <= 76.25) {
                    if (num_valleys <= 51.5) {
                        votes[47] = 4;
                    } else {
                        if (rr_std <= 10.030611991882324) {
                            if (diastolic_time <= 0.19471707195043564) {
                                if (diastolic_time <= 0.1584925502538681) {
                                    if (rr_median <= 48.25) {
                                        votes[47] = 3;
                                    } else {
                                        votes[47] = 3;
                                    }
                                } else {
                                    votes[47] = 3;
                                }
                            } else {
                                votes[47] = 5;
                            }
                        } else {
                            if (rr_std <= 10.75985860824585) {
                                if (diastolic_time <= 0.11695299670100212) {
                                    votes[47] = 5;
                                } else {
                                    votes[47] = 1;
                                }
                            } else {
                                if (dist_std <= 0.04102793522179127) {
                                    votes[47] = 3;
                                } else {
                                    if (dist_std <= 0.07927387580275536) {
                                        votes[47] = 3;
                                    } else {
                                        votes[47] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.13032258301973343) {
                        if (diastolic_time <= 0.034256696701049805) {
                            votes[47] = 0;
                        } else {
                            if (num_valleys <= 66.0) {
                                votes[47] = 1;
                            } else {
                                votes[47] = 3;
                            }
                        }
                    } else {
                        if (num_valleys <= 75.5) {
                            if (num_valleys <= 69.5) {
                                votes[47] = 5;
                            } else {
                                votes[47] = 3;
                            }
                        } else {
                            votes[47] = 5;
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.03923880495131016) {
                        votes[47] = 4;
                    } else {
                        if (diastolic_time <= 0.1480799987912178) {
                            if (rr_std <= 25.995902061462402) {
                                if (num_peaks <= 109.5) {
                                    votes[47] = 1;
                                } else {
                                    if (num_valleys <= 69.5) {
                                        if (rr_std <= 22.81794834136963) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    } else {
                                        if (num_valleys <= 72.5) {
                                            votes[47] = 4;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 125.5) {
                                    if (diastolic_time <= 0.0961671806871891) {
                                        votes[47] = 3;
                                    } else {
                                        votes[47] = 4;
                                    }
                                } else {
                                    votes[47] = 5;
                                }
                            }
                        } else {
                            if (dist_std <= 0.06452308222651482) {
                                votes[47] = 4;
                            } else {
                                votes[47] = 2;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 73.5) {
                        if (rr_std <= 24.872224807739258) {
                            votes[47] = 3;
                        } else {
                            votes[47] = 1;
                        }
                    } else {
                        if (rr_median <= 69.5) {
                            votes[47] = 1;
                        } else {
                            if (diastolic_time <= 0.08224999904632568) {
                                votes[47] = 1;
                            } else {
                                votes[47] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (dist_std <= 0.056363362818956375) {
                    if (dist_std <= 0.036295877769589424) {
                        votes[47] = 4;
                    } else {
                        votes[47] = 4;
                    }
                } else {
                    if (rr_std <= 45.55488204956055) {
                        votes[47] = 1;
                    } else {
                        votes[47] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 0.03259609825909138) {
                    votes[47] = 2;
                } else {
                    if (dist_std <= 0.08880380541086197) {
                        if (diastolic_time <= 0.06091477908194065) {
                            votes[47] = 1;
                        } else {
                            if (dist_std <= 0.05682751350104809) {
                                if (num_valleys <= 76.5) {
                                    votes[47] = 1;
                                } else {
                                    if (num_peaks <= 137.5) {
                                        votes[47] = 5;
                                    } else {
                                        votes[47] = 1;
                                    }
                                }
                            } else {
                                votes[47] = 1;
                            }
                        }
                    } else {
                        votes[47] = 1;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 70.5) {
            if (dist_std <= 0.09496207535266876) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (rr_std <= 14.615931987762451) {
                        if (rr_median <= 66.75) {
                            votes[47] = 3;
                        } else {
                            if (rr_std <= 9.438535213470459) {
                                votes[47] = 5;
                            } else {
                                votes[47] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 105.5) {
                            if (rr_median <= 89.5) {
                                if (num_peaks <= 82.5) {
                                    votes[47] = 4;
                                } else {
                                    if (diastolic_time <= 0.3800545483827591) {
                                        votes[47] = 2;
                                    } else {
                                        if (rr_median <= 76.75) {
                                            votes[47] = 2;
                                        } else {
                                            votes[47] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (num_valleys <= 47.0) {
                                    votes[47] = 1;
                                } else {
                                    votes[47] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 67.5) {
                                votes[47] = 1;
                            } else {
                                votes[47] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 4.59311056137085) {
                        votes[47] = 5;
                    } else {
                        if (rr_std <= 40.75847053527832) {
                            if (rr_std <= 25.239484786987305) {
                                votes[47] = 1;
                            } else {
                                votes[47] = 2;
                            }
                        } else {
                            votes[47] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.6796177625656128) {
                    if (num_valleys <= 63.0) {
                        if (dist_std <= 0.13048150390386581) {
                            if (dist_std <= 0.12431932240724564) {
                                votes[47] = 2;
                            } else {
                                votes[47] = 2;
                            }
                        } else {
                            votes[47] = 2;
                        }
                    } else {
                        votes[47] = 2;
                    }
                } else {
                    if (rr_std <= 15.876784324645996) {
                        if (num_peaks <= 108.0) {
                            votes[47] = 5;
                        } else {
                            votes[47] = 5;
                        }
                    } else {
                        if (rr_std <= 28.33331298828125) {
                            if (diastolic_time <= 0.3269913047552109) {
                                votes[47] = 2;
                            } else {
                                votes[47] = 2;
                            }
                        } else {
                            votes[47] = 2;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.06048966757953167) {
                if (diastolic_time <= 0.2653379291296005) {
                    votes[47] = 5;
                } else {
                    if (rr_median <= 55.75) {
                        if (rr_std <= 15.110318660736084) {
                            votes[47] = 3;
                        } else {
                            votes[47] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.629666656255722) {
                            if (rr_std <= 8.712254524230957) {
                                votes[47] = 0;
                            } else {
                                if (diastolic_time <= 0.2846190482378006) {
                                    votes[47] = 0;
                                } else {
                                    if (num_valleys <= 74.5) {
                                        if (num_valleys <= 73.5) {
                                            votes[47] = 0;
                                        } else {
                                            votes[47] = 0;
                                        }
                                    } else {
                                        votes[47] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[47] = 0;
                        }
                    }
                }
            } else {
                if (num_peaks <= 138.5) {
                    if (num_valleys <= 84.5) {
                        if (diastolic_time <= 0.5766136348247528) {
                            votes[47] = 5;
                        } else {
                            votes[47] = 0;
                        }
                    } else {
                        votes[47] = 3;
                    }
                } else {
                    votes[47] = 2;
                }
            }
        }
    }
// Decision rules for tree 48
    if (rr_std <= 0.6296193599700928) {
        if (diastolic_time <= 0.21495725959539413) {
            if (rr_std <= 0.15713484585285187) {
                votes[48] = 4;
            } else {
                if (num_peaks <= 113.5) {
                    votes[48] = 3;
                } else {
                    votes[48] = 5;
                }
            }
        } else {
            if (dist_std <= 0.09371098503470421) {
                votes[48] = 5;
            } else {
                if (rr_median <= 75.5) {
                    if (dist_std <= 0.10264686867594719) {
                        votes[48] = 2;
                    } else {
                        if (diastolic_time <= 0.22964705526828766) {
                            votes[48] = 2;
                        } else {
                            votes[48] = 2;
                        }
                    }
                } else {
                    votes[48] = 5;
                }
            }
        }
    } else {
        if (diastolic_time <= 0.3309130519628525) {
            if (rr_median <= 68.75) {
                if (rr_std <= 14.878895282745361) {
                    if (dist_std <= 0.1364743933081627) {
                        if (num_valleys <= 83.5) {
                            if (diastolic_time <= 0.18706759810447693) {
                                if (num_peaks <= 117.5) {
                                    votes[48] = 3;
                                } else {
                                    if (rr_std <= 11.424262523651123) {
                                        votes[48] = 3;
                                    } else {
                                        if (rr_std <= 13.168696403503418) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 6.220321416854858) {
                                    votes[48] = 3;
                                } else {
                                    votes[48] = 3;
                                }
                            }
                        } else {
                            votes[48] = 1;
                        }
                    } else {
                        votes[48] = 1;
                    }
                } else {
                    if (num_peaks <= 130.5) {
                        if (diastolic_time <= 0.2058960497379303) {
                            if (num_peaks <= 110.5) {
                                if (diastolic_time <= 0.12338269874453545) {
                                    if (rr_median <= 62.5) {
                                        votes[48] = 4;
                                    } else {
                                        votes[48] = 4;
                                    }
                                } else {
                                    votes[48] = 3;
                                }
                            } else {
                                if (num_valleys <= 71.5) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 4;
                                }
                            }
                        } else {
                            votes[48] = 3;
                        }
                    } else {
                        if (rr_std <= 20.473337173461914) {
                            votes[48] = 3;
                        } else {
                            votes[48] = 3;
                        }
                    }
                }
            } else {
                if (rr_median <= 99.25) {
                    if (rr_std <= 15.801494121551514) {
                        if (num_peaks <= 128.5) {
                            if (rr_std <= 0.6923945546150208) {
                                votes[48] = 3;
                            } else {
                                if (rr_std <= 8.961504936218262) {
                                    if (num_valleys <= 74.5) {
                                        if (rr_median <= 85.75) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 5;
                                        }
                                    } else {
                                        votes[48] = 5;
                                    }
                                } else {
                                    votes[48] = 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 137.5) {
                                if (rr_std <= 10.758873462677002) {
                                    if (rr_median <= 72.5) {
                                        votes[48] = 3;
                                    } else {
                                        votes[48] = 5;
                                    }
                                } else {
                                    votes[48] = 0;
                                }
                            } else {
                                votes[48] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 131.5) {
                            if (dist_std <= 0.09620620310306549) {
                                if (diastolic_time <= 0.13158470392227173) {
                                    if (rr_std <= 30.02094554901123) {
                                        if (num_peaks <= 122.5) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    } else {
                                        if (num_valleys <= 68.5) {
                                            votes[48] = 4;
                                        } else {
                                            votes[48] = 1;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.279458686709404) {
                                        if (diastolic_time <= 0.23807234317064285) {
                                            votes[48] = 4;
                                        } else {
                                            votes[48] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 26.0638427734375) {
                                            votes[48] = 4;
                                        } else {
                                            votes[48] = 2;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 75.5) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.08592132478952408) {
                                if (num_valleys <= 75.0) {
                                    votes[48] = 3;
                                } else {
                                    votes[48] = 1;
                                }
                            } else {
                                if (rr_median <= 81.5) {
                                    votes[48] = 0;
                                } else {
                                    votes[48] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 62.5) {
                        if (rr_std <= 34.62006759643555) {
                            votes[48] = 1;
                        } else {
                            if (dist_std <= 0.06486232951283455) {
                                if (rr_median <= 116.0) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 4;
                                }
                            } else {
                                votes[48] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.027160183526575565) {
                            votes[48] = 3;
                        } else {
                            if (diastolic_time <= 0.08349999785423279) {
                                if (dist_std <= 0.03931468725204468) {
                                    votes[48] = 1;
                                } else {
                                    votes[48] = 1;
                                }
                            } else {
                                if (rr_std <= 13.420379161834717) {
                                    if (diastolic_time <= 0.14816545695066452) {
                                        votes[48] = 1;
                                    } else {
                                        votes[48] = 1;
                                    }
                                } else {
                                    if (rr_std <= 34.95950508117676) {
                                        votes[48] = 5;
                                    } else {
                                        votes[48] = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 69.5) {
                if (diastolic_time <= 0.6157333254814148) {
                    if (rr_std <= 14.604972839355469) {
                        if (dist_std <= 0.11179769784212112) {
                            if (diastolic_time <= 0.4564705938100815) {
                                votes[48] = 5;
                            } else {
                                votes[48] = 5;
                            }
                        } else {
                            votes[48] = 2;
                        }
                    } else {
                        if (rr_median <= 76.0) {
                            if (num_peaks <= 105.5) {
                                if (num_peaks <= 84.5) {
                                    votes[48] = 2;
                                } else {
                                    votes[48] = 2;
                                }
                            } else {
                                votes[48] = 0;
                            }
                        } else {
                            if (num_peaks <= 92.0) {
                                if (diastolic_time <= 0.4385000020265579) {
                                    if (diastolic_time <= 0.3655324727296829) {
                                        votes[48] = 4;
                                    } else {
                                        votes[48] = 4;
                                    }
                                } else {
                                    votes[48] = 4;
                                }
                            } else {
                                votes[48] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 6.874311208724976) {
                        votes[48] = 5;
                    } else {
                        if (diastolic_time <= 0.7264444530010223) {
                            votes[48] = 1;
                        } else {
                            if (rr_median <= 82.5) {
                                votes[48] = 1;
                            } else {
                                votes[48] = 1;
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 0.06272310577332973) {
                    if (rr_median <= 53.5) {
                        votes[48] = 3;
                    } else {
                        if (diastolic_time <= 0.725600004196167) {
                            if (rr_median <= 55.75) {
                                votes[48] = 0;
                            } else {
                                if (rr_median <= 61.25) {
                                    if (rr_std <= 12.196779727935791) {
                                        votes[48] = 0;
                                    } else {
                                        votes[48] = 0;
                                    }
                                } else {
                                    votes[48] = 0;
                                }
                            }
                        } else {
                            votes[48] = 0;
                        }
                    }
                } else {
                    if (num_peaks <= 132.5) {
                        if (diastolic_time <= 0.7812888920307159) {
                            votes[48] = 5;
                        } else {
                            votes[48] = 1;
                        }
                    } else {
                        votes[48] = 3;
                    }
                }
            }
        }
    }
// Decision rules for tree 49
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 98.5) {
            if (rr_std <= 16.9524507522583) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.1390446275472641) {
                        if (num_valleys <= 57.0) {
                            votes[49] = 4;
                        } else {
                            if (rr_std <= 9.402729511260986) {
                                if (diastolic_time <= 0.1547185555100441) {
                                    if (dist_std <= 0.08593229949474335) {
                                        votes[49] = 3;
                                    } else {
                                        votes[49] = 3;
                                    }
                                } else {
                                    votes[49] = 3;
                                }
                            } else {
                                if (rr_std <= 10.75985860824585) {
                                    if (dist_std <= 0.04862413555383682) {
                                        votes[49] = 3;
                                    } else {
                                        votes[49] = 1;
                                    }
                                } else {
                                    if (diastolic_time <= 0.06639344245195389) {
                                        votes[49] = 3;
                                    } else {
                                        if (dist_std <= 0.03625083900988102) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        votes[49] = 2;
                    }
                } else {
                    if (diastolic_time <= 0.016946058720350266) {
                        votes[49] = 0;
                    } else {
                        if (dist_std <= 0.12161240726709366) {
                            if (dist_std <= 0.08446097373962402) {
                                if (rr_median <= 90.75) {
                                    if (rr_median <= 85.5) {
                                        if (num_valleys <= 72.5) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    } else {
                                        votes[49] = 3;
                                    }
                                } else {
                                    votes[49] = 5;
                                }
                            } else {
                                if (num_peaks <= 108.0) {
                                    votes[49] = 1;
                                } else {
                                    if (dist_std <= 0.10269861295819283) {
                                        votes[49] = 3;
                                    } else {
                                        votes[49] = 3;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.14124391227960587) {
                                votes[49] = 5;
                            } else {
                                votes[49] = 2;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (dist_std <= 0.11696609482169151) {
                        if (rr_median <= 87.25) {
                            if (diastolic_time <= 0.20297297090291977) {
                                if (rr_std <= 20.03190803527832) {
                                    if (diastolic_time <= 0.10187989100813866) {
                                        votes[49] = 3;
                                    } else {
                                        votes[49] = 4;
                                    }
                                } else {
                                    if (num_valleys <= 72.5) {
                                        if (num_peaks <= 124.5) {
                                            votes[49] = 4;
                                        } else {
                                            votes[49] = 4;
                                        }
                                    } else {
                                        if (dist_std <= 0.0436551570892334) {
                                            votes[49] = 4;
                                        } else {
                                            votes[49] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 70.75) {
                                    votes[49] = 2;
                                } else {
                                    votes[49] = 4;
                                }
                            }
                        } else {
                            if (dist_std <= 0.03686140663921833) {
                                votes[49] = 4;
                            } else {
                                if (diastolic_time <= 0.07471449300646782) {
                                    votes[49] = 1;
                                } else {
                                    votes[49] = 3;
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 0.12140913680195808) {
                            votes[49] = 3;
                        } else {
                            votes[49] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.16197065263986588) {
                        if (num_peaks <= 135.5) {
                            if (diastolic_time <= 0.099026620388031) {
                                votes[49] = 1;
                            } else {
                                votes[49] = 4;
                            }
                        } else {
                            if (rr_median <= 78.5) {
                                if (num_valleys <= 75.0) {
                                    votes[49] = 3;
                                } else {
                                    votes[49] = 1;
                                }
                            } else {
                                votes[49] = 5;
                            }
                        }
                    } else {
                        votes[49] = 5;
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (dist_std <= 0.041274964809417725) {
                    votes[49] = 4;
                } else {
                    if (diastolic_time <= 0.05555339902639389) {
                        votes[49] = 4;
                    } else {
                        votes[49] = 5;
                    }
                }
            } else {
                if (dist_std <= 0.031201216392219067) {
                    votes[49] = 5;
                } else {
                    if (dist_std <= 0.08837750926613808) {
                        if (num_peaks <= 135.5) {
                            votes[49] = 1;
                        } else {
                            if (dist_std <= 0.05158577300608158) {
                                if (rr_median <= 116.5) {
                                    votes[49] = 1;
                                } else {
                                    votes[49] = 1;
                                }
                            } else {
                                votes[49] = 1;
                            }
                        }
                    } else {
                        if (num_valleys <= 73.5) {
                            votes[49] = 1;
                        } else {
                            votes[49] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 107.5) {
            if (rr_median <= 87.5) {
                if (rr_std <= 46.62442398071289) {
                    if (diastolic_time <= 0.5076166689395905) {
                        if (num_peaks <= 90.0) {
                            if (rr_median <= 81.0) {
                                if (num_valleys <= 53.5) {
                                    votes[49] = 2;
                                } else {
                                    votes[49] = 2;
                                }
                            } else {
                                votes[49] = 4;
                            }
                        } else {
                            if (rr_median <= 69.5) {
                                votes[49] = 3;
                            } else {
                                votes[49] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 21.091126441955566) {
                            if (rr_std <= 0.49925926327705383) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 5;
                            }
                        } else {
                            votes[49] = 2;
                        }
                    }
                } else {
                    votes[49] = 1;
                }
            } else {
                if (diastolic_time <= 0.6230857074260712) {
                    if (dist_std <= 0.02818447072058916) {
                        votes[49] = 5;
                    } else {
                        if (num_valleys <= 44.5) {
                            votes[49] = 4;
                        } else {
                            votes[49] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 15.504499435424805) {
                        votes[49] = 1;
                    } else {
                        votes[49] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06048966757953167) {
                if (rr_median <= 55.25) {
                    if (diastolic_time <= 0.3539710193872452) {
                        votes[49] = 3;
                    } else {
                        if (num_valleys <= 77.5) {
                            votes[49] = 0;
                        } else {
                            votes[49] = 0;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.7435999810695648) {
                        if (rr_std <= 43.00778388977051) {
                            if (rr_std <= 8.07284927368164) {
                                votes[49] = 0;
                            } else {
                                if (dist_std <= 0.04558301903307438) {
                                    votes[49] = 0;
                                } else {
                                    if (rr_std <= 17.23157787322998) {
                                        votes[49] = 0;
                                    } else {
                                        votes[49] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[49] = 0;
                        }
                    } else {
                        votes[49] = 0;
                    }
                }
            } else {
                if (dist_std <= 0.07509376853704453) {
                    if (rr_std <= 11.798112154006958) {
                        votes[49] = 5;
                    } else {
                        votes[49] = 0;
                    }
                } else {
                    if (num_peaks <= 130.0) {
                        if (rr_std <= 0.7164905965328217) {
                            votes[49] = 2;
                        } else {
                            if (rr_median <= 67.5) {
                                votes[49] = 1;
                            } else {
                                if (dist_std <= 0.0978667177259922) {
                                    votes[49] = 5;
                                } else {
                                    votes[49] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 8.41454553604126) {
                            votes[49] = 3;
                        } else {
                            votes[49] = 2;
                        }
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

string trim(const string &str) {
    size_t first = str.find_first_not_of(" \t");
    if (first == string::npos) return "";
    size_t last = str.find_last_not_of(" \t");
    return str.substr(first, last - first + 1);
}

string class_idx_to_str(int idx){
    if(idx==0){
        return "Atrial_Fibrillation";
    }
    else if(idx==1){
        return "Bradycardia";
    }
    else if(idx==2){
        return "Healthy";
    }
    else if(idx==3){
        return "Tachycardia";
    }
    else if(idx==4){
        return "Ventricular_Flutter_Fib";
    }
    else{
        return "Ventricular_Tachycardia";
    }
    return "";
}

int main() {
    std::ifstream file("Important_Features_Data.csv");
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    bool first_row = true; // Used to skip the header
    int correct = 0, total = 0;

    while (getline(file, line)) {
        if (first_row) { 
            first_row = false;
            continue; // Skip the first row
        }

        stringstream ss(line);
        vector<float> features;
        string value;
        float num;
        
        // Read the first 6 columns (features)
        for (int i = 0; i < 7; i++) {
            if (!getline(ss, value, ',')) {
                cerr << "Error: Missing feature value in row." << endl;
                continue;
            }
            value = trim(value);
            try {
                num = stof(value);
            } catch (const invalid_argument &) {
                cerr << "Error: Non-numeric feature value in row." << endl;
                continue;
            }
            if(i!=0){
                features.push_back(num);
            }
        }

        // Ensure we have all six features
        if (features.size() != 6) continue;

        // Read the last column (actual output as a string)
        string actual_label;
        if (getline(ss, actual_label, ',')) {
            actual_label = trim(actual_label);
        } else {
            cerr << "Error: Missing output value in row." << endl;
            continue;
        }

        // Predict using the function
        string predicted_label = class_idx_to_str(random_forest_predict(features[0], features[1], features[2],
                                                       features[3], features[4], features[5]));
        cout<<features[0]<<", "<<features[1]<<", "<<features[2]<<", "<<
            features[3]<<", "<< features[4]<<", "<< features[5]<<endl;
    
        // Compare prediction with actual value
        if (predicted_label == actual_label) {
            correct++;
        }
        total++;
    }

    file.close();

    if (total > 0) {
        cout << "Accuracy: " << (correct * 100.0 / total) << "%" << endl;
    } else {
        cout << "No valid data to process." << endl;
    }

    return 0;
}