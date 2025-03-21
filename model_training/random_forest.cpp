#include <vector>
using namespace std;

int random_forest_predict(vector<float>& features) {
    int votes[50] = {0};
    float dist_std = features[0];
    float fwhm = features[1];
    float dist_median = features[2];
    float ss_median = features[3];
    float systolic_area = features[4];
    float diastolic_time = features[5];
    float systolic_time = features[6];
    float diastolic_area = features[7];
    float diastolic_amp = features[8];
    float diff_median = features[9];
    float systolic_amp = features[10];
    float ss_std = features[11];
    float rr_median = features[12];
    float pulse_interval = features[13];
    float rr_std = features[14];
    float num_valleys = features[15];
    float pp_interval = features[16];
    float first_peak_freq = features[17];
    float num_peaks = features[18];
    float second_peak_freq = features[19];


// Decision rules for tree 0
    if (dist_std <= 0.019624496810138226) {
        if (fwhm <= 7.868000030517578) {
            if (dist_std <= 0.007808023598045111) {
                votes[0] = 0;
            } else {
                votes[0] = 2;
            }
        } else {
            if (dist_median <= -0.0004190291074337438) {
                votes[0] = 0;
            } else {
                votes[0] = 0;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1034149.6875) {
                if (systolic_area <= 50711.3515625) {
                    if (diastolic_time <= 0.7599999904632568) {
                        if (systolic_time <= 0.37700000405311584) {
                            if (diastolic_area <= -20425.583984375) {
                                if (diastolic_area <= -25849.1767578125) {
                                    if (diastolic_amp <= -2534.387451171875) {
                                        votes[0] = 2;
                                    } else {
                                        votes[0] = 4;
                                    }
                                } else {
                                    votes[0] = 5;
                                }
                            } else {
                                if (dist_std <= 45.63142967224121) {
                                    if (dist_median <= -0.012344480026513338) {
                                        votes[0] = 4;
                                    } else {
                                        votes[0] = 4;
                                    }
                                } else {
                                    if (diff_median <= 10.451563835144043) {
                                        votes[0] = 4;
                                    } else {
                                        votes[0] = 3;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_area <= -14534.5771484375) {
                                if (diastolic_amp <= -2948.925537109375) {
                                    votes[0] = 5;
                                } else {
                                    if (diastolic_amp <= -2378.052734375) {
                                        if (systolic_amp <= 5462.964599609375) {
                                            votes[0] = 2;
                                        } else {
                                            votes[0] = 2;
                                        }
                                    } else {
                                        if (dist_std <= 68.76419448852539) {
                                            votes[0] = 1;
                                        } else {
                                            votes[0] = 2;
                                        }
                                    }
                                }
                            } else {
                                if (ss_std <= 15.317924499511719) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 1;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 58.0) {
                            votes[0] = 1;
                        } else {
                            votes[0] = 1;
                        }
                    }
                } else {
                    if (systolic_time <= 0.08813483268022537) {
                        if (rr_median <= 42.5) {
                            if (diff_median <= 9.791659832000732) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 3;
                            }
                        } else {
                            if (systolic_area <= 382406.96875) {
                                if (diff_median <= 5.274299621582031) {
                                    votes[0] = 1;
                                } else {
                                    if (rr_median <= 44.25) {
                                        votes[0] = 1;
                                    } else {
                                        votes[0] = 1;
                                    }
                                }
                            } else {
                                if (pulse_interval <= 0.040099576115608215) {
                                    if (ss_std <= 16.719297409057617) {
                                        votes[0] = 1;
                                    } else {
                                        votes[0] = 1;
                                    }
                                } else {
                                    if (rr_median <= 50.5) {
                                        if (fwhm <= 7.888000011444092) {
                                            votes[0] = 1;
                                        } else {
                                            votes[0] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 12.418959140777588) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 12.263254642486572) {
                            if (rr_std <= 1.498128592967987) {
                                if (dist_std <= 133.4997329711914) {
                                    votes[0] = 3;
                                } else {
                                    if (systolic_time <= 0.13828325271606445) {
                                        votes[0] = 1;
                                    } else {
                                        votes[0] = 1;
                                    }
                                }
                            } else {
                                if (num_valleys <= 88.5) {
                                    if (rr_std <= 10.38792896270752) {
                                        if (diff_median <= 8.864981651306152) {
                                            votes[0] = 5;
                                        } else {
                                            votes[0] = 3;
                                        }
                                    } else {
                                        if (dist_std <= 100.11434555053711) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 1;
                                        }
                                    }
                                } else {
                                    votes[0] = 5;
                                }
                            }
                        } else {
                            if (num_valleys <= 56.5) {
                                votes[0] = 3;
                            } else {
                                if (rr_std <= 24.69559669494629) {
                                    if (ss_std <= 14.607735633850098) {
                                        if (dist_std <= 47.82381820678711) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 5;
                                        }
                                    } else {
                                        votes[0] = 1;
                                    }
                                } else {
                                    votes[0] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 15.75866413116455) {
                    if (ss_std <= 9.144131660461426) {
                        if (pp_interval <= 0.0570392981171608) {
                            if (rr_std <= 8.665194988250732) {
                                votes[0] = 3;
                            } else {
                                votes[0] = 4;
                            }
                        } else {
                            votes[0] = 5;
                        }
                    } else {
                        if (ss_std <= 14.226819038391113) {
                            if (rr_std <= 20.503769874572754) {
                                if (rr_median <= 45.75) {
                                    votes[0] = 4;
                                } else {
                                    votes[0] = 4;
                                }
                            } else {
                                votes[0] = 4;
                            }
                        } else {
                            if (first_peak_freq <= 0.54931640625) {
                                if (ss_std <= 14.77688217163086) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 4;
                                }
                            } else {
                                votes[0] = 3;
                            }
                        }
                    }
                } else {
                    if (dist_std <= 62.353689193725586) {
                        if (ss_median <= 51.25) {
                            votes[0] = 3;
                        } else {
                            votes[0] = 3;
                        }
                    } else {
                        if (pp_interval <= 0.06297202780842781) {
                            votes[0] = 1;
                        } else {
                            votes[0] = 4;
                        }
                    }
                }
            }
        } else {
            if (systolic_area <= 180689.3984375) {
                if (diastolic_area <= -5978.19075012207) {
                    if (rr_std <= 19.76227569580078) {
                        votes[0] = 5;
                    } else {
                        votes[0] = 4;
                    }
                } else {
                    if (dist_std <= 105.24596786499023) {
                        if (dist_std <= 50.62249946594238) {
                            votes[0] = 2;
                        } else {
                            votes[0] = 5;
                        }
                    } else {
                        if (num_peaks <= 122.0) {
                            if (rr_median <= 69.5) {
                                if (rr_std <= 0.5958648025989532) {
                                    votes[0] = 2;
                                } else {
                                    votes[0] = 2;
                                }
                            } else {
                                votes[0] = 2;
                            }
                        } else {
                            if (rr_median <= 71.0) {
                                votes[0] = 2;
                            } else {
                                votes[0] = 2;
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 148.50035095214844) {
                    votes[0] = 3;
                } else {
                    if (num_valleys <= 70.5) {
                        votes[0] = 5;
                    } else {
                        votes[0] = 3;
                    }
                }
            }
        }
    }
    
// Decision rules for tree 1
    if (ss_median <= 66.5) {
        if (diastolic_time <= 0.7599999904632568) {
            if (diastolic_area <= -27.915393829345703) {
                if (pp_interval <= 0.2684873640537262) {
                    if (diastolic_amp <= -2994.162353515625) {
                        votes[1] = 5;
                    } else {
                        if (systolic_amp <= 4376.86181640625) {
                            votes[1] = 4;
                        } else {
                            if (num_peaks <= 145.0) {
                                votes[1] = 4;
                            } else {
                                votes[1] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 14.158766269683838) {
                        if (systolic_time <= 0.4028105288743973) {
                            votes[1] = 2;
                        } else {
                            votes[1] = 5;
                        }
                    } else {
                        if (diff_median <= 2.648856282234192) {
                            votes[1] = 1;
                        } else {
                            if (rr_median <= 58.75) {
                                votes[1] = 2;
                            } else {
                                votes[1] = 2;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 10.379262447357178) {
                    if (fwhm <= 8.116000175476074) {
                        if (pp_interval <= 0.20358536392450333) {
                            if (diastolic_area <= -5.224197149276733) {
                                votes[1] = 3;
                            } else {
                                if (rr_median <= 42.75) {
                                    votes[1] = 5;
                                } else {
                                    if (ss_median <= 48.75) {
                                        if (second_peak_freq <= 0.79345703125) {
                                            votes[1] = 1;
                                        } else {
                                            votes[1] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 16.059373378753662) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[1] = 5;
                        }
                    } else {
                        if (systolic_area <= 3728599.875) {
                            if (rr_median <= 44.25) {
                                if (dist_std <= 133.9367561340332) {
                                    if (dist_median <= -0.15049968659877777) {
                                        votes[1] = 5;
                                    } else {
                                        votes[1] = 1;
                                    }
                                } else {
                                    votes[1] = 1;
                                }
                            } else {
                                if (first_peak_freq <= 0.18310546875) {
                                    votes[1] = 4;
                                } else {
                                    if (pulse_interval <= 0.04528428614139557) {
                                        if (systolic_area <= 1850762.75) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 3;
                                        }
                                    } else {
                                        if (ss_std <= 2.295650362968445) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[1] = 4;
                        }
                    }
                } else {
                    if (pulse_interval <= 0.1089828573167324) {
                        if (fwhm <= 8.148000240325928) {
                            if (fwhm <= 2.759999990463257) {
                                votes[1] = 4;
                            } else {
                                if (pulse_interval <= 0.08739349991083145) {
                                    if (num_valleys <= 74.5) {
                                        votes[1] = 1;
                                    } else {
                                        if (rr_median <= 55.0) {
                                            votes[1] = 1;
                                        } else {
                                            votes[1] = 1;
                                        }
                                    }
                                } else {
                                    votes[1] = 5;
                                }
                            }
                        } else {
                            if (dist_std <= 56.839338302612305) {
                                if (dist_median <= -0.4423890560865402) {
                                    votes[1] = 3;
                                } else {
                                    if (systolic_area <= 841324.84375) {
                                        votes[1] = 3;
                                    } else {
                                        if (ss_median <= 51.25) {
                                            votes[1] = 4;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 1128021.125) {
                                    if (pp_interval <= 0.07687931880354881) {
                                        if (systolic_area <= 570264.5) {
                                            votes[1] = 1;
                                        } else {
                                            votes[1] = 1;
                                        }
                                    } else {
                                        if (first_peak_freq <= 0.54931640625) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    }
                                } else {
                                    if (pp_interval <= 0.06647910177707672) {
                                        if (systolic_area <= 3043444.625) {
                                            votes[1] = 1;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    } else {
                                        if (diff_median <= 11.827250480651855) {
                                            votes[1] = 4;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_amp <= 0.09628543257713318) {
                            if (pp_interval <= 0.8985396921634674) {
                                if (ss_median <= 53.25) {
                                    if (rr_std <= 12.578646659851074) {
                                        if (rr_median <= 44.75) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 211267.8515625) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 57.75) {
                                        if (rr_std <= 12.00888204574585) {
                                            votes[1] = 1;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    } else {
                                        votes[1] = 0;
                                    }
                                }
                            } else {
                                votes[1] = 1;
                            }
                        } else {
                            votes[1] = 0;
                        }
                    }
                }
            }
        } else {
            if (systolic_amp <= 6107.47802734375) {
                votes[1] = 1;
            } else {
                votes[1] = 1;
            }
        }
    } else {
        if (dist_std <= 0.01656888611614704) {
            if (rr_std <= 111.71968460083008) {
                votes[1] = 0;
            } else {
                votes[1] = 0;
            }
        } else {
            if (dist_std <= 124.409423828125) {
                if (systolic_area <= 85026.6875) {
                    if (rr_median <= 72.75) {
                        votes[1] = 5;
                    } else {
                        votes[1] = 2;
                    }
                } else {
                    if (diff_median <= 7.826878786087036) {
                        votes[1] = 3;
                    } else {
                        votes[1] = 3;
                    }
                }
            } else {
                if (systolic_area <= 215872.359375) {
                    if (rr_std <= 9.098971843719482) {
                        if (second_peak_freq <= 0.67138671875) {
                            if (diastolic_time <= 0.13777777552604675) {
                                votes[1] = 2;
                            } else {
                                votes[1] = 2;
                            }
                        } else {
                            if (num_valleys <= 65.5) {
                                if (pulse_interval <= 0.46347059309482574) {
                                    votes[1] = 2;
                                } else {
                                    votes[1] = 2;
                                }
                            } else {
                                votes[1] = 2;
                            }
                        }
                    } else {
                        votes[1] = 2;
                    }
                } else {
                    if (pp_interval <= 0.13944324851036072) {
                        votes[1] = 3;
                    } else {
                        votes[1] = 5;
                    }
                }
            }
        }
    }
    
// Decision rules for tree 2
    if (diff_median <= 0.06967576686292887) {
        if (num_peaks <= 72.5) {
            votes[2] = 2;
        } else {
            if (diastolic_area <= 5.115530967712402) {
                if (diff_median <= 0.004611298209056258) {
                    votes[2] = 0;
                } else {
                    votes[2] = 0;
                }
            } else {
                if (diastolic_amp <= 0.2701684832572937) {
                    votes[2] = 0;
                } else {
                    if (pulse_interval <= 0.5009499937295914) {
                        votes[2] = 0;
                    } else {
                        votes[2] = 0;
                    }
                }
            }
        }
    } else {
        if (pp_interval <= 0.2401290312409401) {
            if (dist_std <= 83.04684448242188) {
                if (rr_std <= 9.657931804656982) {
                    if (ss_std <= 12.319832801818848) {
                        if (diff_median <= 7.106488227844238) {
                            votes[2] = 4;
                        } else {
                            if (rr_median <= 44.5) {
                                votes[2] = 5;
                            } else {
                                if (diff_median <= 12.159972667694092) {
                                    if (systolic_area <= 366424.59375) {
                                        votes[2] = 3;
                                    } else {
                                        votes[2] = 4;
                                    }
                                } else {
                                    if (pulse_interval <= 0.054788852110505104) {
                                        votes[2] = 3;
                                    } else {
                                        votes[2] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 74.5) {
                            votes[2] = 4;
                        } else {
                            votes[2] = 5;
                        }
                    }
                } else {
                    if (diff_median <= 17.71690082550049) {
                        if (fwhm <= 7.851999998092651) {
                            if (systolic_area <= 46409.548828125) {
                                if (ss_median <= 49.75) {
                                    votes[2] = 4;
                                } else {
                                    if (dist_std <= 44.486711502075195) {
                                        votes[2] = 4;
                                    } else {
                                        votes[2] = 4;
                                    }
                                }
                            } else {
                                if (systolic_area <= 299906.9375) {
                                    if (second_peak_freq <= 0.91552734375) {
                                        votes[2] = 5;
                                    } else {
                                        votes[2] = 1;
                                    }
                                } else {
                                    if (num_valleys <= 76.5) {
                                        votes[2] = 3;
                                    } else {
                                        votes[2] = 1;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 11.200204849243164) {
                                if (ss_std <= 9.83611011505127) {
                                    votes[2] = 4;
                                } else {
                                    if (systolic_area <= 1360471.625) {
                                        votes[2] = 4;
                                    } else {
                                        votes[2] = 4;
                                    }
                                }
                            } else {
                                if (ss_std <= 15.858460903167725) {
                                    if (fwhm <= 8.064000129699707) {
                                        votes[2] = 5;
                                    } else {
                                        if (systolic_area <= 871298.71875) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    }
                                } else {
                                    if (fwhm <= 8.092000007629395) {
                                        votes[2] = 4;
                                    } else {
                                        votes[2] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 12.17084789276123) {
                            if (dist_std <= 56.706491470336914) {
                                if (ss_std <= 10.837650775909424) {
                                    votes[2] = 3;
                                } else {
                                    votes[2] = 3;
                                }
                            } else {
                                votes[2] = 3;
                            }
                        } else {
                            if (pp_interval <= 0.07408403232693672) {
                                votes[2] = 1;
                            } else {
                                votes[2] = 5;
                            }
                        }
                    }
                }
            } else {
                if (systolic_area <= 3104699.875) {
                    if (ss_std <= 2.4786949157714844) {
                        if (ss_median <= 66.5) {
                            if (ss_median <= 48.5) {
                                votes[2] = 2;
                            } else {
                                votes[2] = 3;
                            }
                        } else {
                            votes[2] = 2;
                        }
                    } else {
                        if (fwhm <= 8.067999839782715) {
                            if (diastolic_area <= -14.341341495513916) {
                                votes[2] = 4;
                            } else {
                                if (rr_median <= 41.75) {
                                    votes[2] = 3;
                                } else {
                                    if (ss_std <= 14.448837757110596) {
                                        if (diff_median <= 23.31813144683838) {
                                            votes[2] = 1;
                                        } else {
                                            votes[2] = 1;
                                        }
                                    } else {
                                        votes[2] = 5;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 140.5) {
                                if (systolic_time <= 0.04006493277847767) {
                                    votes[2] = 3;
                                } else {
                                    if (num_valleys <= 68.5) {
                                        if (rr_median <= 62.5) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    } else {
                                        if (systolic_time <= 0.1533076912164688) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 6.727100849151611) {
                                    votes[2] = 3;
                                } else {
                                    if (systolic_time <= 0.10387187451124191) {
                                        if (num_peaks <= 149.5) {
                                            votes[2] = 1;
                                        } else {
                                            votes[2] = 1;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.13751515001058578) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 143.5) {
                        votes[2] = 4;
                    } else {
                        votes[2] = 4;
                    }
                }
            }
        } else {
            if (rr_std <= 22.032867431640625) {
                if (ss_median <= 49.25) {
                    if (systolic_time <= 0.6506666541099548) {
                        if (fwhm <= 7.148000001907349) {
                            votes[2] = 2;
                        } else {
                            if (num_valleys <= 73.5) {
                                votes[2] = 5;
                            } else {
                                votes[2] = 5;
                            }
                        }
                    } else {
                        votes[2] = 1;
                    }
                } else {
                    if (dist_std <= 164.31732940673828) {
                        if (diastolic_amp <= -6.421989440917969) {
                            if (dist_std <= 52.02701759338379) {
                                if (systolic_time <= 0.48303572833538055) {
                                    votes[2] = 5;
                                } else {
                                    votes[2] = 2;
                                }
                            } else {
                                if (rr_median <= 60.5) {
                                    if (pulse_interval <= 0.3735523819923401) {
                                        votes[2] = 2;
                                    } else {
                                        votes[2] = 2;
                                    }
                                } else {
                                    votes[2] = 5;
                                }
                            }
                        } else {
                            if (num_valleys <= 53.0) {
                                votes[2] = 2;
                            } else {
                                if (systolic_area <= 83566.34375) {
                                    if (ss_median <= 61.25) {
                                        votes[2] = 1;
                                    } else {
                                        votes[2] = 5;
                                    }
                                } else {
                                    if (rr_std <= 5.590152740478516) {
                                        votes[2] = 3;
                                    } else {
                                        votes[2] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 69.5) {
                            if (systolic_amp <= 2821.166259765625) {
                                votes[2] = 3;
                            } else {
                                votes[2] = 2;
                            }
                        } else {
                            votes[2] = 2;
                        }
                    }
                }
            } else {
                if (pulse_interval <= 0.3253747522830963) {
                    votes[2] = 4;
                } else {
                    if (systolic_time <= 0.5105714350938797) {
                        votes[2] = 1;
                    } else {
                        if (diastolic_area <= -17757.2080078125) {
                            votes[2] = 1;
                        } else {
                            votes[2] = 1;
                        }
                    }
                }
            }
        }
    }
  
// Decision rules for tree 3
    if (dist_std <= 0.9519686251878738) {
        if (num_peaks <= 72.5) {
            votes[3] = 0;
        } else {
            if (rr_std <= 1.25) {
                if (num_peaks <= 124.0) {
                    votes[3] = 0;
                } else {
                    votes[3] = 0;
                }
            } else {
                votes[3] = 0;
            }
        }
    } else {
        if (pp_interval <= 0.2401290312409401) {
            if (systolic_area <= 1235908.4375) {
                if (systolic_area <= 46610.884765625) {
                    if (fwhm <= 8.139999866485596) {
                        if (rr_std <= 37.98040199279785) {
                            if (second_peak_freq <= 1.28173828125) {
                                votes[3] = 4;
                            } else {
                                votes[3] = 4;
                            }
                        } else {
                            votes[3] = 4;
                        }
                    } else {
                        votes[3] = 3;
                    }
                } else {
                    if (pp_interval <= 0.08748837187886238) {
                        if (diastolic_amp <= -4.193706035614014) {
                            votes[3] = 4;
                        } else {
                            if (systolic_time <= 0.06563934311270714) {
                                if (systolic_area <= 544842.53125) {
                                    votes[3] = 1;
                                } else {
                                    if (systolic_time <= 0.04973896965384483) {
                                        if (rr_std <= 10.033522129058838) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 1;
                                        }
                                    } else {
                                        if (dist_std <= 73.95907211303711) {
                                            votes[3] = 3;
                                        } else {
                                            votes[3] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 12.852660655975342) {
                                    if (fwhm <= 7.552000045776367) {
                                        votes[3] = 1;
                                    } else {
                                        if (pulse_interval <= 0.06739648431539536) {
                                            votes[3] = 4;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 141.5) {
                                        if (num_peaks <= 133.0) {
                                            votes[3] = 1;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    } else {
                                        if (dist_std <= 74.86075592041016) {
                                            votes[3] = 1;
                                        } else {
                                            votes[3] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 47.24875831604004) {
                            if (rr_median <= 56.0) {
                                if (num_peaks <= 142.5) {
                                    votes[3] = 3;
                                } else {
                                    if (dist_std <= 44.97626304626465) {
                                        votes[3] = 3;
                                    } else {
                                        votes[3] = 3;
                                    }
                                }
                            } else {
                                votes[3] = 3;
                            }
                        } else {
                            if (rr_median <= 94.75) {
                                if (ss_std <= 5.0556724071502686) {
                                    if (diastolic_area <= -3.267768144607544) {
                                        votes[3] = 2;
                                    } else {
                                        if (num_valleys <= 80.5) {
                                            votes[3] = 3;
                                        } else {
                                            votes[3] = 5;
                                        }
                                    }
                                } else {
                                    if (second_peak_freq <= 1.15966796875) {
                                        if (rr_std <= 12.295054912567139) {
                                            votes[3] = 3;
                                        } else {
                                            votes[3] = 5;
                                        }
                                    } else {
                                        if (fwhm <= 8.056000232696533) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 5;
                                        }
                                    }
                                }
                            } else {
                                votes[3] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.382537364959717) {
                    if (rr_std <= 7.962765455245972) {
                        if (systolic_area <= 1937123.8125) {
                            votes[3] = 3;
                        } else {
                            votes[3] = 3;
                        }
                    } else {
                        if (systolic_time <= 0.045545293018221855) {
                            votes[3] = 4;
                        } else {
                            votes[3] = 5;
                        }
                    }
                } else {
                    if (diff_median <= 17.99236297607422) {
                        if (ss_median <= 64.75) {
                            if (rr_std <= 24.544503211975098) {
                                if (num_peaks <= 140.5) {
                                    if (systolic_time <= 0.03851133957505226) {
                                        votes[3] = 4;
                                    } else {
                                        votes[3] = 4;
                                    }
                                } else {
                                    if (second_peak_freq <= 1.15966796875) {
                                        votes[3] = 4;
                                    } else {
                                        votes[3] = 4;
                                    }
                                }
                            } else {
                                votes[3] = 1;
                            }
                        } else {
                            votes[3] = 3;
                        }
                    } else {
                        votes[3] = 3;
                    }
                }
            }
        } else {
            if (ss_median <= 66.25) {
                if (rr_std <= 22.748177528381348) {
                    if (systolic_area <= 32708.9345703125) {
                        if (rr_std <= 14.029324531555176) {
                            if (systolic_area <= 23359.3759765625) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 2;
                            }
                        } else {
                            if (diastolic_area <= -12670.6171875) {
                                if (dist_std <= 46.01664733886719) {
                                    votes[3] = 2;
                                } else {
                                    if (diff_median <= 3.3124730587005615) {
                                        votes[3] = 2;
                                    } else {
                                        votes[3] = 2;
                                    }
                                }
                            } else {
                                votes[3] = 1;
                            }
                        }
                    } else {
                        if (diff_median <= 4.7903265953063965) {
                            votes[3] = 4;
                        } else {
                            if (systolic_area <= 113916.87890625) {
                                if (dist_std <= 88.40539932250977) {
                                    if (systolic_time <= 0.41081053018569946) {
                                        votes[3] = 5;
                                    } else {
                                        votes[3] = 5;
                                    }
                                } else {
                                    votes[3] = 5;
                                }
                            } else {
                                if (ss_std <= 9.614326000213623) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 0.4077647030353546) {
                        votes[3] = 4;
                    } else {
                        votes[3] = 1;
                    }
                }
            } else {
                if (dist_std <= 110.8818130493164) {
                    if (pulse_interval <= 0.4197777807712555) {
                        votes[3] = 4;
                    } else {
                        votes[3] = 5;
                    }
                } else {
                    if (dist_std <= 161.142822265625) {
                        if (num_peaks <= 101.5) {
                            votes[3] = 2;
                        } else {
                            votes[3] = 2;
                        }
                    } else {
                        if (second_peak_freq <= 0.67138671875) {
                            if (rr_std <= 6.832335472106934) {
                                votes[3] = 2;
                            } else {
                                votes[3] = 2;
                            }
                        } else {
                            votes[3] = 2;
                        }
                    }
                }
            }
        }
    }
    
// Decision rules for tree 4
    if (diastolic_area <= 1.0362745523452759) {
        if (pp_interval <= 0.24066080152988434) {
            if (rr_std <= 9.50919771194458) {
                if (diastolic_time <= 0.23953333497047424) {
                    if (dist_std <= 72.28046417236328) {
                        if (systolic_time <= 0.21178947389125824) {
                            if (diff_median <= 8.455976963043213) {
                                if (ss_median <= 53.25) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 3;
                                }
                            } else {
                                if (systolic_area <= 376800.4375) {
                                    if (second_peak_freq <= 0.79345703125) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 3;
                                    }
                                } else {
                                    votes[4] = 3;
                                }
                            }
                        } else {
                            votes[4] = 5;
                        }
                    } else {
                        if (first_peak_freq <= 0.30517578125) {
                            if (pp_interval <= 0.13177339732646942) {
                                if (rr_std <= 7.396438121795654) {
                                    if (dist_median <= -0.25340378284454346) {
                                        votes[4] = 1;
                                    } else {
                                        votes[4] = 1;
                                    }
                                } else {
                                    votes[4] = 5;
                                }
                            } else {
                                votes[4] = 2;
                            }
                        } else {
                            if (ss_std <= 3.0085530281066895) {
                                if (num_peaks <= 130.5) {
                                    if (diff_median <= 8.337510585784912) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 3;
                                    }
                                } else {
                                    votes[4] = 3;
                                }
                            } else {
                                if (rr_median <= 54.5) {
                                    if (fwhm <= 8.124000072479248) {
                                        if (pp_interval <= 0.08738616108894348) {
                                            votes[4] = 1;
                                        } else {
                                            votes[4] = 3;
                                        }
                                    } else {
                                        if (ss_std <= 11.482179641723633) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 1;
                                        }
                                    }
                                } else {
                                    if (pp_interval <= 0.1454789787530899) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (fwhm <= 7.940000057220459) {
                        votes[4] = 2;
                    } else {
                        votes[4] = 2;
                    }
                }
            } else {
                if (systolic_area <= 1154539.375) {
                    if (systolic_area <= 47963.76171875) {
                        if (diastolic_time <= 0.00800000037997961) {
                            votes[4] = 0;
                        } else {
                            if (pp_interval <= 0.1719999983906746) {
                                if (first_peak_freq <= 0.54931640625) {
                                    if (rr_std <= 19.816646575927734) {
                                        votes[4] = 4;
                                    } else {
                                        votes[4] = 4;
                                    }
                                } else {
                                    votes[4] = 1;
                                }
                            } else {
                                if (fwhm <= 6.424000024795532) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 4;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.08506304770708084) {
                            if (ss_median <= 49.25) {
                                if (first_peak_freq <= 0.54931640625) {
                                    votes[4] = 5;
                                } else {
                                    votes[4] = 1;
                                }
                            } else {
                                if (fwhm <= 7.796000003814697) {
                                    if (num_valleys <= 76.0) {
                                        votes[4] = 1;
                                    } else {
                                        votes[4] = 1;
                                    }
                                } else {
                                    if (systolic_area <= 680957.125) {
                                        if (num_valleys <= 77.0) {
                                            votes[4] = 1;
                                        } else {
                                            votes[4] = 1;
                                        }
                                    } else {
                                        if (dist_std <= 72.95708847045898) {
                                            votes[4] = 3;
                                        } else {
                                            votes[4] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 55.03824424743652) {
                                if (pulse_interval <= 0.12371477112174034) {
                                    if (rr_std <= 13.186063289642334) {
                                        if (rr_median <= 52.0) {
                                            votes[4] = 3;
                                        } else {
                                            votes[4] = 3;
                                        }
                                    } else {
                                        votes[4] = 5;
                                    }
                                } else {
                                    votes[4] = 4;
                                }
                            } else {
                                if (ss_median <= 44.5) {
                                    if (rr_std <= 15.907735824584961) {
                                        if (pp_interval <= 0.11749890074133873) {
                                            votes[4] = 3;
                                        } else {
                                            votes[4] = 3;
                                        }
                                    } else {
                                        votes[4] = 5;
                                    }
                                } else {
                                    if (rr_median <= 53.75) {
                                        if (rr_std <= 11.310133457183838) {
                                            votes[4] = 1;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= 172267.921875) {
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
                    if (ss_median <= 44.75) {
                        votes[4] = 1;
                    } else {
                        if (num_valleys <= 70.5) {
                            votes[4] = 3;
                        } else {
                            if (rr_std <= 21.210119247436523) {
                                if (ss_std <= 13.360895156860352) {
                                    if (dist_median <= -0.5316585302352905) {
                                        votes[4] = 4;
                                    } else {
                                        if (ss_median <= 61.5) {
                                            votes[4] = 4;
                                        } else {
                                            votes[4] = 4;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.09026161581277847) {
                                        if (second_peak_freq <= 0.9765625) {
                                            votes[4] = 4;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    } else {
                                        votes[4] = 4;
                                    }
                                }
                            } else {
                                votes[4] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (systolic_area <= 5209.386268615723) {
                votes[4] = 0;
            } else {
                if (pp_interval <= 0.5045333504676819) {
                    if (rr_std <= 9.548772811889648) {
                        if (num_peaks <= 136.5) {
                            if (ss_median <= 52.0) {
                                votes[4] = 5;
                            } else {
                                if (rr_median <= 69.5) {
                                    if (systolic_amp <= 2777.30322265625) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 2;
                                    }
                                } else {
                                    if (pulse_interval <= 0.2709907740354538) {
                                        votes[4] = 2;
                                    } else {
                                        votes[4] = 2;
                                    }
                                }
                            }
                        } else {
                            if (ss_std <= 8.104116201400757) {
                                votes[4] = 4;
                            } else {
                                votes[4] = 5;
                            }
                        }
                    } else {
                        if (diastolic_amp <= -1791.785888671875) {
                            if (systolic_time <= 0.3253747522830963) {
                                votes[4] = 4;
                            } else {
                                if (dist_std <= 44.0440559387207) {
                                    votes[4] = 5;
                                } else {
                                    if (ss_median <= 49.25) {
                                        votes[4] = 2;
                                    } else {
                                        votes[4] = 2;
                                    }
                                }
                            }
                        } else {
                            if (dist_median <= -0.04273704066872597) {
                                if (systolic_time <= 0.3178662210702896) {
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
                    if (ss_median <= 65.5) {
                        if (rr_std <= 21.953694343566895) {
                            if (fwhm <= 7.296000003814697) {
                                if (fwhm <= 7.068000078201294) {
                                    votes[4] = 2;
                                } else {
                                    votes[4] = 2;
                                }
                            } else {
                                if (systolic_time <= 0.8644999861717224) {
                                    if (ss_std <= 12.454349040985107) {
                                        votes[4] = 5;
                                    } else {
                                        votes[4] = 1;
                                    }
                                } else {
                                    votes[4] = 1;
                                }
                            }
                        } else {
                            votes[4] = 1;
                        }
                    } else {
                        votes[4] = 5;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.010297069326043129) {
            votes[4] = 0;
        } else {
            votes[4] = 2;
        }
    }

// Decision rules for tree 5
    if (diff_median <= 0.08578255493193865) {
        if (dist_median <= -0.00045735017920378596) {
            if (rr_median <= 75.5) {
                votes[5] = 0;
            } else {
                votes[5] = 2;
            }
        } else {
            if (dist_std <= 0.01615579053759575) {
                if (fwhm <= 7.864000082015991) {
                    if (systolic_amp <= 0.5784313976764679) {
                        votes[5] = 0;
                    } else {
                        votes[5] = 0;
                    }
                } else {
                    votes[5] = 0;
                }
            } else {
                votes[5] = 0;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1572373.5625) {
                if (systolic_area <= 58423.337890625) {
                    if (systolic_time <= 0.26899106800556183) {
                        if (systolic_area <= 44868.013671875) {
                            if (diff_median <= 11.917215347290039) {
                                if (dist_std <= 33.85311508178711) {
                                    votes[5] = 4;
                                } else {
                                    if (systolic_time <= 0.22503378987312317) {
                                        if (rr_median <= 73.75) {
                                            votes[5] = 4;
                                        } else {
                                            votes[5] = 4;
                                        }
                                    } else {
                                        votes[5] = 4;
                                    }
                                }
                            } else {
                                votes[5] = 3;
                            }
                        } else {
                            votes[5] = 1;
                        }
                    } else {
                        if (systolic_amp <= 5336.135498046875) {
                            if (ss_std <= 14.012547016143799) {
                                if (ss_median <= 53.0) {
                                    if (rr_std <= 21.042841911315918) {
                                        votes[5] = 4;
                                    } else {
                                        votes[5] = 1;
                                    }
                                } else {
                                    if (rr_median <= 53.25) {
                                        votes[5] = 2;
                                    } else {
                                        votes[5] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_area <= -15137.83203125) {
                                    votes[5] = 1;
                                } else {
                                    votes[5] = 1;
                                }
                            }
                        } else {
                            if (diff_median <= 2.8012421131134033) {
                                votes[5] = 1;
                            } else {
                                if (ss_median <= 58.0) {
                                    if (dist_std <= 53.0882625579834) {
                                        votes[5] = 2;
                                    } else {
                                        votes[5] = 2;
                                    }
                                } else {
                                    votes[5] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08705358952283859) {
                        if (ss_std <= 3.021398425102234) {
                            votes[5] = 3;
                        } else {
                            if (fwhm <= 7.835999965667725) {
                                if (fwhm <= 6.932000160217285) {
                                    if (dist_std <= 57.237335205078125) {
                                        votes[5] = 1;
                                    } else {
                                        votes[5] = 5;
                                    }
                                } else {
                                    if (pp_interval <= 0.04580818489193916) {
                                        votes[5] = 1;
                                    } else {
                                        votes[5] = 1;
                                    }
                                }
                            } else {
                                if (systolic_area <= 387515.28125) {
                                    if (rr_std <= 10.735832214355469) {
                                        votes[5] = 1;
                                    } else {
                                        votes[5] = 1;
                                    }
                                } else {
                                    if (rr_median <= 51.75) {
                                        if (first_peak_freq <= 0.30517578125) {
                                            votes[5] = 4;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 13.223270416259766) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 61.58267784118652) {
                            if (systolic_area <= 874592.0) {
                                if (rr_std <= 13.186063289642334) {
                                    if (rr_median <= 47.5) {
                                        votes[5] = 3;
                                    } else {
                                        if (rr_median <= 59.25) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_amp <= 2308.382568359375) {
                                        votes[5] = 5;
                                    } else {
                                        votes[5] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 10.631078243255615) {
                                    votes[5] = 3;
                                } else {
                                    if (diff_median <= 13.35151195526123) {
                                        votes[5] = 4;
                                    } else {
                                        votes[5] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 12.355101585388184) {
                                if (second_peak_freq <= 1.03759765625) {
                                    if (ss_std <= 4.535851955413818) {
                                        if (dist_std <= 135.1435775756836) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 27.83189105987549) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 13.82785415649414) {
                                        if (first_peak_freq <= 0.42724609375) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 5;
                                        }
                                    } else {
                                        if (dist_std <= 105.25617980957031) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (dist_std <= 194.01435089111328) {
                                    if (dist_median <= -0.1900280937552452) {
                                        if (pp_interval <= 0.11976119130849838) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 8.322473764419556) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 1;
                                        }
                                    }
                                } else {
                                    votes[5] = 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (dist_median <= -0.6007809638977051) {
                    votes[5] = 3;
                } else {
                    if (num_peaks <= 138.5) {
                        votes[5] = 5;
                    } else {
                        if (diff_median <= 14.222452163696289) {
                            if (dist_std <= 43.15781784057617) {
                                votes[5] = 4;
                            } else {
                                votes[5] = 4;
                            }
                        } else {
                            votes[5] = 4;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (num_valleys <= 71.5) {
                    if (dist_std <= 123.29075241088867) {
                        if (diff_median <= 3.666672945022583) {
                            votes[5] = 2;
                        } else {
                            votes[5] = 5;
                        }
                    } else {
                        if (pp_interval <= 0.1660711094737053) {
                            votes[5] = 2;
                        } else {
                            if (pp_interval <= 0.47474999725818634) {
                                if (systolic_time <= 0.23607969284057617) {
                                    if (second_peak_freq <= 0.91552734375) {
                                        votes[5] = 2;
                                    } else {
                                        votes[5] = 2;
                                    }
                                } else {
                                    if (ss_median <= 69.5) {
                                        votes[5] = 2;
                                    } else {
                                        votes[5] = 2;
                                    }
                                }
                            } else {
                                votes[5] = 2;
                            }
                        }
                    }
                } else {
                    votes[5] = 5;
                }
            } else {
                if (fwhm <= 8.044000148773193) {
                    if (ss_std <= 14.057734489440918) {
                        votes[5] = 5;
                    } else {
                        votes[5] = 4;
                    }
                } else {
                    votes[5] = 3;
                }
            }
        }
    }

// Decision rules for tree 6
    if (systolic_area <= 1416.9786911010742) {
        if (dist_std <= 0.019624496810138226) {
            if (dist_median <= -0.00045735017920378596) {
                votes[6] = 0;
            } else {
                votes[6] = 0;
            }
        } else {
            if (diff_median <= 6.468070983886719) {
                if (first_peak_freq <= 0.48828125) {
                    votes[6] = 4;
                } else {
                    votes[6] = 4;
                }
            } else {
                votes[6] = 3;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (fwhm <= 8.124000072479248) {
                if (pulse_interval <= 0.07793070748448372) {
                    if (diastolic_area <= -6.631386756896973) {
                        if (diastolic_amp <= -12.057973623275757) {
                            votes[6] = 4;
                        } else {
                            votes[6] = 3;
                        }
                    } else {
                        if (systolic_area <= 970766.0) {
                            if (pp_interval <= 0.07019469141960144) {
                                if (diff_median <= 6.050875902175903) {
                                    if (num_valleys <= 75.5) {
                                        votes[6] = 1;
                                    } else {
                                        votes[6] = 1;
                                    }
                                } else {
                                    votes[6] = 1;
                                }
                            } else {
                                votes[6] = 1;
                            }
                        } else {
                            votes[6] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.8797142803668976) {
                        if (diastolic_amp <= -27.808807373046875) {
                            if (pp_interval <= 0.26899106800556183) {
                                if (systolic_area <= 34556.5078125) {
                                    if (diastolic_amp <= -2534.49267578125) {
                                        votes[6] = 5;
                                    } else {
                                        votes[6] = 4;
                                    }
                                } else {
                                    if (num_valleys <= 70.5) {
                                        votes[6] = 4;
                                    } else {
                                        votes[6] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 24.512396812438965) {
                                    if (rr_median <= 55.75) {
                                        if (diff_median <= 4.4297192096710205) {
                                            votes[6] = 2;
                                        } else {
                                            votes[6] = 2;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.47192858159542084) {
                                            votes[6] = 2;
                                        } else {
                                            votes[6] = 5;
                                        }
                                    }
                                } else {
                                    votes[6] = 1;
                                }
                            }
                        } else {
                            if (pulse_interval <= 0.8754285871982574) {
                                if (diff_median <= 15.360813617706299) {
                                    if (rr_std <= 4.84208083152771) {
                                        votes[6] = 1;
                                    } else {
                                        if (dist_std <= 43.40361976623535) {
                                            votes[6] = 3;
                                        } else {
                                            votes[6] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 9.161759376525879) {
                                        if (dist_std <= 157.33173370361328) {
                                            votes[6] = 3;
                                        } else {
                                            votes[6] = 1;
                                        }
                                    } else {
                                        if (ss_std <= 10.49281120300293) {
                                            votes[6] = 1;
                                        } else {
                                            votes[6] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[6] = 1;
                            }
                        }
                    } else {
                        votes[6] = 1;
                    }
                }
            } else {
                if (diff_median <= 15.543817520141602) {
                    if (pulse_interval <= 0.0347394235432148) {
                        if (systolic_time <= 0.032265618443489075) {
                            votes[6] = 4;
                        } else {
                            votes[6] = 4;
                        }
                    } else {
                        if (ss_median <= 51.25) {
                            if (num_valleys <= 74.5) {
                                if (dist_median <= -0.08707262203097343) {
                                    if (ss_std <= 3.1833566427230835) {
                                        votes[6] = 3;
                                    } else {
                                        if (dist_median <= -0.203960120677948) {
                                            votes[6] = 5;
                                        } else {
                                            votes[6] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 365020.421875) {
                                        votes[6] = 3;
                                    } else {
                                        votes[6] = 5;
                                    }
                                }
                            } else {
                                if (ss_std <= 13.03126859664917) {
                                    if (dist_median <= -0.0790700651705265) {
                                        if (systolic_time <= 0.07425054162740707) {
                                            votes[6] = 1;
                                        } else {
                                            votes[6] = 3;
                                        }
                                    } else {
                                        votes[6] = 3;
                                    }
                                } else {
                                    votes[6] = 1;
                                }
                            }
                        } else {
                            if (dist_std <= 101.99187850952148) {
                                if (rr_std <= 9.440449237823486) {
                                    if (systolic_area <= 189878.890625) {
                                        votes[6] = 4;
                                    } else {
                                        votes[6] = 3;
                                    }
                                } else {
                                    if (ss_std <= 9.46019983291626) {
                                        votes[6] = 5;
                                    } else {
                                        if (pp_interval <= 0.12789516150951385) {
                                            votes[6] = 4;
                                        } else {
                                            votes[6] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (second_peak_freq <= 1.15966796875) {
                                    votes[6] = 3;
                                } else {
                                    votes[6] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 60.68863487243652) {
                        if (ss_median <= 56.0) {
                            if (num_peaks <= 149.0) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        } else {
                            votes[6] = 3;
                        }
                    } else {
                        if (rr_std <= 7.607019424438477) {
                            if (diff_median <= 23.17641544342041) {
                                if (rr_std <= 3.496211290359497) {
                                    votes[6] = 3;
                                } else {
                                    votes[6] = 3;
                                }
                            } else {
                                votes[6] = 5;
                            }
                        } else {
                            if (systolic_area <= 325520.3125) {
                                votes[6] = 5;
                            } else {
                                if (diff_median <= 22.026921272277832) {
                                    votes[6] = 4;
                                } else {
                                    if (ss_std <= 10.355365753173828) {
                                        if (pulse_interval <= 0.06897354498505592) {
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
            if (diastolic_amp <= -806.4077014923096) {
                if (pp_interval <= 0.4482777714729309) {
                    votes[6] = 4;
                } else {
                    votes[6] = 5;
                }
            } else {
                if (num_peaks <= 121.5) {
                    if (dist_std <= 122.80508041381836) {
                        votes[6] = 3;
                    } else {
                        if (systolic_area <= 175571.1875) {
                            if (pulse_interval <= 0.457882359623909) {
                                if (ss_median <= 69.5) {
                                    if (diastolic_amp <= -15.476004958152771) {
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
                            votes[6] = 2;
                        }
                    }
                } else {
                    if (first_peak_freq <= 1.220703125) {
                        if (systolic_area <= 899870.40625) {
                            if (num_peaks <= 123.5) {
                                votes[6] = 3;
                            } else {
                                if (ss_median <= 69.25) {
                                    votes[6] = 5;
                                } else {
                                    votes[6] = 5;
                                }
                            }
                        } else {
                            votes[6] = 3;
                        }
                    } else {
                        votes[6] = 2;
                    }
                }
            }
        }
    }

// Decision rules for tree 7
    if (diff_median <= 0.06368640158325434) {
        if (dist_median <= -5.336155118129682e-05) {
            if (rr_std <= 2.4665063470602036) {
                if (ss_median <= 115.75) {
                    votes[7] = 0;
                } else {
                    votes[7] = 0;
                }
            } else {
                if (systolic_amp <= 0.7450980544090271) {
                    votes[7] = 0;
                } else {
                    votes[7] = 0;
                }
            }
        } else {
            if (dist_median <= -4.430366607266478e-05) {
                votes[7] = 2;
            } else {
                if (fwhm <= 7.93999981880188) {
                    votes[7] = 0;
                } else {
                    votes[7] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_time <= 0.39559999108314514) {
                if (rr_std <= 9.36126708984375) {
                    if (diff_median <= 6.756301164627075) {
                        if (systolic_area <= 793716.4375) {
                            if (first_peak_freq <= 0.54931640625) {
                                if (num_valleys <= 77.0) {
                                    if (fwhm <= 7.919999837875366) {
                                        votes[7] = 5;
                                    } else {
                                        votes[7] = 5;
                                    }
                                } else {
                                    votes[7] = 4;
                                }
                            } else {
                                if (dist_std <= 73.66278457641602) {
                                    votes[7] = 4;
                                } else {
                                    votes[7] = 2;
                                }
                            }
                        } else {
                            votes[7] = 3;
                        }
                    } else {
                        if (rr_median <= 89.25) {
                            if (pulse_interval <= 0.08826716616749763) {
                                if (rr_median <= 51.75) {
                                    if (ss_std <= 12.491194248199463) {
                                        if (systolic_area <= 520692.703125) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    } else {
                                        votes[7] = 1;
                                    }
                                } else {
                                    if (systolic_time <= 0.07313761115074158) {
                                        if (pulse_interval <= 0.0570392981171608) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 3;
                                        }
                                    } else {
                                        votes[7] = 3;
                                    }
                                }
                            } else {
                                if (diff_median <= 13.27898645401001) {
                                    if (systolic_area <= 584784.875) {
                                        if (rr_median <= 50.5) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 3;
                                        }
                                    } else {
                                        votes[7] = 2;
                                    }
                                } else {
                                    if (ss_std <= 10.315548419952393) {
                                        if (dist_median <= 0.3006097078323364) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 3;
                                        }
                                    } else {
                                        votes[7] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[7] = 1;
                        }
                    }
                } else {
                    if (systolic_time <= 0.03444942086935043) {
                        if (pulse_interval <= 0.03318944573402405) {
                            if (dist_median <= -0.2549091801047325) {
                                votes[7] = 1;
                            } else {
                                if (num_valleys <= 83.5) {
                                    if (num_valleys <= 74.5) {
                                        votes[7] = 4;
                                    } else {
                                        votes[7] = 4;
                                    }
                                } else {
                                    votes[7] = 1;
                                }
                            }
                        } else {
                            if (dist_median <= -0.15807049721479416) {
                                votes[7] = 4;
                            } else {
                                votes[7] = 4;
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.07071345299482346) {
                            if (systolic_area <= 1053968.9375) {
                                if (rr_median <= 43.25) {
                                    votes[7] = 4;
                                } else {
                                    if (second_peak_freq <= 0.79345703125) {
                                        votes[7] = 1;
                                    } else {
                                        if (dist_std <= 58.89089012145996) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (dist_std <= 67.85647583007812) {
                                    votes[7] = 3;
                                } else {
                                    if (rr_median <= 52.75) {
                                        votes[7] = 5;
                                    } else {
                                        votes[7] = 1;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 1022902.84375) {
                                if (rr_std <= 17.288787841796875) {
                                    if (rr_std <= 12.305617809295654) {
                                        if (diastolic_time <= 0.017799999564886093) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 4;
                                        }
                                    } else {
                                        if (rr_median <= 65.0) {
                                            votes[7] = 5;
                                        } else {
                                            votes[7] = 3;
                                        }
                                    }
                                } else {
                                    if (ss_std <= 6.557816505432129) {
                                        votes[7] = 5;
                                    } else {
                                        if (num_peaks <= 143.5) {
                                            votes[7] = 4;
                                        } else {
                                            votes[7] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 51.75) {
                                    votes[7] = 3;
                                } else {
                                    if (systolic_area <= 1514501.9375) {
                                        votes[7] = 4;
                                    } else {
                                        if (pp_interval <= 0.08421694487333298) {
                                            votes[7] = 4;
                                        } else {
                                            votes[7] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -22559.8681640625) {
                    if (rr_std <= 15.249126434326172) {
                        votes[7] = 2;
                    } else {
                        votes[7] = 2;
                    }
                } else {
                    if (rr_std <= 21.953694343566895) {
                        if (pp_interval <= 1.0582857131958008) {
                            if (rr_std <= 15.049350261688232) {
                                if (systolic_area <= 25212.98046875) {
                                    votes[7] = 1;
                                } else {
                                    votes[7] = 5;
                                }
                            } else {
                                if (num_peaks <= 138.5) {
                                    votes[7] = 2;
                                } else {
                                    votes[7] = 2;
                                }
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
            if (dist_std <= 162.07796478271484) {
                if (num_peaks <= 104.5) {
                    votes[7] = 2;
                } else {
                    if (rr_std <= 19.66770648956299) {
                        if (diastolic_time <= 0.05255555547773838) {
                            if (systolic_time <= 0.2530793622136116) {
                                votes[7] = 3;
                            } else {
                                votes[7] = 5;
                            }
                        } else {
                            votes[7] = 5;
                        }
                    } else {
                        votes[7] = 4;
                    }
                }
            } else {
                if (diff_median <= 5.356308460235596) {
                    if (diastolic_amp <= -9.970857620239258) {
                        votes[7] = 2;
                    } else {
                        votes[7] = 2;
                    }
                } else {
                    if (diff_median <= 18.279601573944092) {
                        if (pp_interval <= 0.4224444329738617) {
                            votes[7] = 2;
                        } else {
                            if (ss_median <= 72.75) {
                                votes[7] = 2;
                            } else {
                                votes[7] = 2;
                            }
                        }
                    } else {
                        votes[7] = 2;
                    }
                }
            }
        }
    }

// Decision rules for tree 8
    if (systolic_area <= 496.6349067687988) {
        if (diff_median <= 0.22260189522057772) {
            if (diastolic_time <= 0.5474285781383514) {
                if (rr_std <= 4.952584683895111) {
                    votes[8] = 0;
                } else {
                    if (diff_median <= 0.004493687301874161) {
                        votes[8] = 0;
                    } else {
                        if (num_valleys <= 44.5) {
                            votes[8] = 0;
                        } else {
                            votes[8] = 0;
                        }
                    }
                }
            } else {
                votes[8] = 0;
            }
        } else {
            if (num_valleys <= 75.0) {
                if (rr_std <= 11.576841354370117) {
                    votes[8] = 4;
                } else {
                    votes[8] = 4;
                }
            } else {
                votes[8] = 3;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_time <= 0.37700000405311584) {
                if (diastolic_amp <= -13.689396381378174) {
                    if (dist_std <= 51.985239028930664) {
                        if (fwhm <= 4.5279998779296875) {
                            votes[8] = 4;
                        } else {
                            if (diff_median <= 9.132901668548584) {
                                votes[8] = 4;
                            } else {
                                votes[8] = 4;
                            }
                        }
                    } else {
                        if (ss_median <= 47.0) {
                            votes[8] = 4;
                        } else {
                            if (dist_std <= 60.048091888427734) {
                                votes[8] = 5;
                            } else {
                                if (diastolic_time <= 0.3282391279935837) {
                                    votes[8] = 4;
                                } else {
                                    votes[8] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 0.08722750097513199) {
                        if (fwhm <= 8.056000232696533) {
                            if (dist_median <= -0.21486655622720718) {
                                if (dist_median <= -0.808205783367157) {
                                    if (pp_interval <= 0.06340167857706547) {
                                        votes[8] = 1;
                                    } else {
                                        votes[8] = 1;
                                    }
                                } else {
                                    votes[8] = 1;
                                }
                            } else {
                                if (num_peaks <= 141.5) {
                                    if (rr_median <= 52.5) {
                                        votes[8] = 1;
                                    } else {
                                        votes[8] = 3;
                                    }
                                } else {
                                    votes[8] = 1;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.0347394235432148) {
                                if (systolic_time <= 0.03258827142417431) {
                                    if (systolic_area <= 1367593.0) {
                                        votes[8] = 4;
                                    } else {
                                        votes[8] = 3;
                                    }
                                } else {
                                    if (systolic_area <= 4025378.25) {
                                        votes[8] = 4;
                                    } else {
                                        votes[8] = 4;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.07171396538615227) {
                                    if (dist_std <= 71.7851676940918) {
                                        if (ss_std <= 11.217653274536133) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 1;
                                        }
                                    } else {
                                        if (rr_std <= 10.91473913192749) {
                                            votes[8] = 5;
                                        } else {
                                            votes[8] = 1;
                                        }
                                    }
                                } else {
                                    if (dist_std <= 81.18706512451172) {
                                        if (systolic_area <= 1541404.3125) {
                                            votes[8] = 5;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    } else {
                                        votes[8] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_std <= 1.1557872295379639) {
                            votes[8] = 3;
                        } else {
                            if (diff_median <= 14.172435283660889) {
                                if (ss_median <= 56.5) {
                                    if (dist_std <= 61.58267784118652) {
                                        if (dist_std <= 46.35262107849121) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 4.9589526653289795) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 5;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 138.5) {
                                        votes[8] = 3;
                                    } else {
                                        if (ss_median <= 61.5) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 14.276381492614746) {
                                    if (rr_median <= 96.5) {
                                        if (rr_std <= 9.862783432006836) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 3;
                                        }
                                    } else {
                                        votes[8] = 1;
                                    }
                                } else {
                                    if (dist_std <= 100.02446365356445) {
                                        votes[8] = 5;
                                    } else {
                                        votes[8] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -22559.8681640625) {
                    if (ss_median <= 54.5) {
                        votes[8] = 2;
                    } else {
                        if (pp_interval <= 0.4340350925922394) {
                            votes[8] = 2;
                        } else {
                            votes[8] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 21.953694343566895) {
                        if (rr_std <= 18.839003562927246) {
                            if (pulse_interval <= 0.709090918302536) {
                                if (dist_std <= 36.23887825012207) {
                                    votes[8] = 3;
                                } else {
                                    if (rr_median <= 53.25) {
                                        votes[8] = 5;
                                    } else {
                                        votes[8] = 5;
                                    }
                                }
                            } else {
                                votes[8] = 1;
                            }
                        } else {
                            if (systolic_time <= 0.9832857251167297) {
                                if (pp_interval <= 0.6905454695224762) {
                                    votes[8] = 2;
                                } else {
                                    votes[8] = 2;
                                }
                            } else {
                                votes[8] = 1;
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.5581428408622742) {
                            votes[8] = 1;
                        } else {
                            votes[8] = 1;
                        }
                    }
                }
            }
        } else {
            if (ss_std <= 9.343906879425049) {
                if (diff_median <= 22.985140800476074) {
                    if (systolic_area <= 195823.515625) {
                        if (pp_interval <= 0.47474999725818634) {
                            if (systolic_area <= 79976.65625) {
                                votes[8] = 2;
                            } else {
                                if (rr_std <= 9.098971843719482) {
                                    if (ss_std <= 0.46647149324417114) {
                                        votes[8] = 2;
                                    } else {
                                        votes[8] = 2;
                                    }
                                } else {
                                    votes[8] = 2;
                                }
                            }
                        } else {
                            votes[8] = 2;
                        }
                    } else {
                        votes[8] = 3;
                    }
                } else {
                    votes[8] = 5;
                }
            } else {
                if (diastolic_time <= 0.018083333037793636) {
                    if (rr_std <= 7.8482277393341064) {
                        votes[8] = 2;
                    } else {
                        if (dist_std <= 141.29035186767578) {
                            votes[8] = 3;
                        } else {
                            votes[8] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 19.55678653717041) {
                        votes[8] = 5;
                    } else {
                        votes[8] = 4;
                    }
                }
            }
        }
    }

// Decision rules for tree 9
    if (diastolic_amp <= 0.025490196654573083) {
        if (systolic_time <= 0.24066080152988434) {
            if (systolic_area <= 3728599.875) {
                if (diastolic_amp <= -9.611653566360474) {
                    if (dist_std <= 187.55841827392578) {
                        if (diastolic_time <= 0.7338181734085083) {
                            if (pulse_interval <= 0.10197075828909874) {
                                votes[9] = 1;
                            } else {
                                if (rr_std <= 39.741899490356445) {
                                    if (ss_std <= 11.917273998260498) {
                                        votes[9] = 4;
                                    } else {
                                        votes[9] = 4;
                                    }
                                } else {
                                    votes[9] = 4;
                                }
                            }
                        } else {
                            votes[9] = 1;
                        }
                    } else {
                        votes[9] = 2;
                    }
                } else {
                    if (rr_std <= 13.040757179260254) {
                        if (fwhm <= 8.131999969482422) {
                            if (fwhm <= 3.3440000414848328) {
                                votes[9] = 4;
                            } else {
                                if (dist_std <= 50.453508377075195) {
                                    if (second_peak_freq <= 1.03759765625) {
                                        votes[9] = 3;
                                    } else {
                                        votes[9] = 3;
                                    }
                                } else {
                                    if (rr_median <= 50.75) {
                                        if (num_peaks <= 126.5) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 1;
                                        }
                                    } else {
                                        if (systolic_time <= 0.059782328084111214) {
                                            votes[9] = 1;
                                        } else {
                                            votes[9] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 9.515190601348877) {
                                if (ss_median <= 49.75) {
                                    if (first_peak_freq <= 0.54931640625) {
                                        if (dist_median <= -0.3495716005563736) {
                                            votes[9] = 3;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    } else {
                                        if (pp_interval <= 0.08827221766114235) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 2;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 26.244333267211914) {
                                        if (ss_std <= 11.067871570587158) {
                                            votes[9] = 3;
                                        } else {
                                            votes[9] = 3;
                                        }
                                    } else {
                                        votes[9] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= 1027442.65625) {
                                    if (systolic_time <= 0.08290306106209755) {
                                        if (num_peaks <= 141.5) {
                                            votes[9] = 3;
                                        } else {
                                            votes[9] = 1;
                                        }
                                    } else {
                                        if (rr_std <= 11.878373146057129) {
                                            votes[9] = 3;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    }
                                } else {
                                    if (pulse_interval <= 0.06938030570745468) {
                                        votes[9] = 3;
                                    } else {
                                        if (ss_std <= 13.261905670166016) {
                                            votes[9] = 4;
                                        } else {
                                            votes[9] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 130.5) {
                            if (pp_interval <= 0.10117149353027344) {
                                votes[9] = 1;
                            } else {
                                if (num_peaks <= 104.5) {
                                    votes[9] = 5;
                                } else {
                                    votes[9] = 5;
                                }
                            }
                        } else {
                            if (pp_interval <= 0.07277832180261612) {
                                if (dist_median <= -0.34715812653303146) {
                                    votes[9] = 1;
                                } else {
                                    if (systolic_time <= 0.03863782808184624) {
                                        votes[9] = 4;
                                    } else {
                                        votes[9] = 1;
                                    }
                                }
                            } else {
                                if (ss_std <= 13.817476749420166) {
                                    if (num_valleys <= 75.0) {
                                        votes[9] = 5;
                                    } else {
                                        if (rr_std <= 14.12193250656128) {
                                            votes[9] = 1;
                                        } else {
                                            votes[9] = 4;
                                        }
                                    }
                                } else {
                                    if (dist_median <= -0.32973673939704895) {
                                        votes[9] = 5;
                                    } else {
                                        votes[9] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_valleys <= 71.5) {
                    votes[9] = 4;
                } else {
                    votes[9] = 4;
                }
            }
        } else {
            if (dist_std <= 0.018805175088346004) {
                if (diff_median <= 0.005108252400532365) {
                    votes[9] = 0;
                } else {
                    votes[9] = 0;
                }
            } else {
                if (dist_std <= 183.92933654785156) {
                    if (rr_std <= 22.68282699584961) {
                        if (systolic_area <= 126603.7421875) {
                            if (diff_median <= 16.81295394897461) {
                                if (diff_median <= 3.1950796842575073) {
                                    if (pp_interval <= 0.35038959980010986) {
                                        votes[9] = 4;
                                    } else {
                                        if (num_peaks <= 124.0) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_amp <= 5466.011962890625) {
                                        if (systolic_time <= 0.9330714344978333) {
                                            votes[9] = 2;
                                        } else {
                                            votes[9] = 1;
                                        }
                                    } else {
                                        if (diastolic_amp <= -2887.447265625) {
                                            votes[9] = 2;
                                        } else {
                                            votes[9] = 2;
                                        }
                                    }
                                }
                            } else {
                                if (dist_median <= -0.5180815756320953) {
                                    votes[9] = 5;
                                } else {
                                    votes[9] = 5;
                                }
                            }
                        } else {
                            if (ss_std <= 10.499551773071289) {
                                if (systolic_time <= 0.2788301408290863) {
                                    votes[9] = 3;
                                } else {
                                    votes[9] = 3;
                                }
                            } else {
                                votes[9] = 5;
                            }
                        }
                    } else {
                        if (ss_std <= 18.285343170166016) {
                            if (pp_interval <= 0.42588235437870026) {
                                votes[9] = 5;
                            } else {
                                votes[9] = 1;
                            }
                        } else {
                            votes[9] = 4;
                        }
                    }
                } else {
                    if (num_peaks <= 127.0) {
                        if (rr_std <= 3.781278967857361) {
                            if (second_peak_freq <= 1.15966796875) {
                                votes[9] = 2;
                            } else {
                                votes[9] = 2;
                            }
                        } else {
                            if (dist_median <= -0.24531427770853043) {
                                if (num_peaks <= 102.5) {
                                    votes[9] = 2;
                                } else {
                                    votes[9] = 2;
                                }
                            } else {
                                votes[9] = 2;
                            }
                        }
                    } else {
                        votes[9] = 2;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.012064928654581308) {
            if (dist_median <= -0.0003232629387639463) {
                votes[9] = 0;
            } else {
                votes[9] = 0;
            }
        } else {
            votes[9] = 2;
        }
    }

// Decision rules for tree 10
    if (dist_std <= 0.01942328829318285) {
        if (num_valleys <= 79.5) {
            if (dist_std <= 0.014435903169214725) {
                if (diff_median <= 0.004611298209056258) {
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
        if (pulse_interval <= 0.24066080152988434) {
            if (rr_std <= 10.379262447357178) {
                if (rr_median <= 49.75) {
                    if (systolic_time <= 0.03618017956614494) {
                        if (num_valleys <= 77.5) {
                            votes[10] = 4;
                        } else {
                            votes[10] = 4;
                        }
                    } else {
                        if (num_peaks <= 141.5) {
                            if (diastolic_amp <= -1.8878300189971924) {
                                votes[10] = 4;
                            } else {
                                if (ss_median <= 48.25) {
                                    if (num_valleys <= 81.5) {
                                        if (pulse_interval <= 0.1268196739256382) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 3;
                                        }
                                    } else {
                                        if (second_peak_freq <= 0.8544921875) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 48.5) {
                                        votes[10] = 1;
                                    } else {
                                        votes[10] = 5;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 86.25168228149414) {
                                if (num_valleys <= 75.5) {
                                    votes[10] = 5;
                                } else {
                                    if (rr_std <= 8.168522596359253) {
                                        votes[10] = 3;
                                    } else {
                                        votes[10] = 3;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.08968130871653557) {
                                    votes[10] = 1;
                                } else {
                                    votes[10] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 184.39801788330078) {
                        if (rr_median <= 94.75) {
                            if (ss_std <= 12.302674293518066) {
                                if (ss_median <= 46.5) {
                                    votes[10] = 5;
                                } else {
                                    if (first_peak_freq <= 0.18310546875) {
                                        votes[10] = 3;
                                    } else {
                                        if (rr_std <= 0.7495293021202087) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 1095489.1875) {
                                    votes[10] = 3;
                                } else {
                                    votes[10] = 4;
                                }
                            }
                        } else {
                            votes[10] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.008799999952316284) {
                            if (num_peaks <= 126.0) {
                                votes[10] = 3;
                            } else {
                                votes[10] = 5;
                            }
                        } else {
                            votes[10] = 2;
                        }
                    }
                }
            } else {
                if (systolic_area <= 1050937.0) {
                    if (pp_interval <= 0.08675836026668549) {
                        if (num_valleys <= 69.0) {
                            if (num_peaks <= 137.5) {
                                votes[10] = 4;
                            } else {
                                votes[10] = 4;
                            }
                        } else {
                            if (dist_std <= 45.4640998840332) {
                                votes[10] = 1;
                            } else {
                                if (pp_interval <= 0.07737565413117409) {
                                    if (rr_std <= 12.218151569366455) {
                                        if (second_peak_freq <= 0.91552734375) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 1;
                                        }
                                    } else {
                                        votes[10] = 1;
                                    }
                                } else {
                                    if (fwhm <= 8.07200002670288) {
                                        votes[10] = 1;
                                    } else {
                                        votes[10] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_amp <= -11.83148717880249) {
                            if (fwhm <= 5.759999990463257) {
                                votes[10] = 5;
                            } else {
                                if (num_valleys <= 75.5) {
                                    if (diastolic_time <= 0.6306573450565338) {
                                        if (num_peaks <= 141.0) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    } else {
                                        votes[10] = 1;
                                    }
                                } else {
                                    if (fwhm <= 6.727999925613403) {
                                        votes[10] = 4;
                                    } else {
                                        votes[10] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 12.417933464050293) {
                                if (fwhm <= 8.17199993133545) {
                                    if (num_peaks <= 142.5) {
                                        votes[10] = 3;
                                    } else {
                                        votes[10] = 1;
                                    }
                                } else {
                                    if (second_peak_freq <= 1.15966796875) {
                                        votes[10] = 3;
                                    } else {
                                        votes[10] = 5;
                                    }
                                }
                            } else {
                                if (rr_median <= 51.75) {
                                    if (systolic_area <= 243675.3203125) {
                                        votes[10] = 5;
                                    } else {
                                        if (rr_std <= 15.542040824890137) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    }
                                } else {
                                    if (ss_std <= 12.815149784088135) {
                                        votes[10] = 5;
                                    } else {
                                        if (second_peak_freq <= 0.91552734375) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diff_median <= 18.43701171875) {
                        if (rr_std <= 17.359844207763672) {
                            if (num_valleys <= 84.5) {
                                if (num_peaks <= 137.0) {
                                    votes[10] = 4;
                                } else {
                                    if (ss_median <= 48.25) {
                                        votes[10] = 4;
                                    } else {
                                        if (ss_median <= 62.0) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[10] = 1;
                            }
                        } else {
                            if (dist_median <= -0.45660069584846497) {
                                votes[10] = 1;
                            } else {
                                votes[10] = 4;
                            }
                        }
                    } else {
                        votes[10] = 3;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.7599999904632568) {
                if (dist_std <= 183.92933654785156) {
                    if (systolic_time <= 1.0582857131958008) {
                        if (diastolic_time <= 0.25675131380558014) {
                            if (diff_median <= 6.4970574378967285) {
                                if (rr_median <= 69.0) {
                                    if (rr_std <= 14.969661712646484) {
                                        votes[10] = 3;
                                    } else {
                                        votes[10] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 106.0) {
                                        votes[10] = 2;
                                    } else {
                                        votes[10] = 2;
                                    }
                                }
                            } else {
                                if (systolic_area <= 110387.625) {
                                    votes[10] = 5;
                                } else {
                                    if (ss_std <= 9.614326000213623) {
                                        if (dist_std <= 117.88979721069336) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        if (dist_median <= -0.19387837499380112) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 54.75) {
                                if (dist_median <= -0.005575357237830758) {
                                    votes[10] = 2;
                                } else {
                                    votes[10] = 1;
                                }
                            } else {
                                if (diastolic_time <= 0.4988333284854889) {
                                    if (ss_std <= 12.766424655914307) {
                                        votes[10] = 5;
                                    } else {
                                        votes[10] = 2;
                                    }
                                } else {
                                    if (diastolic_area <= -18891.9765625) {
                                        votes[10] = 5;
                                    } else {
                                        votes[10] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[10] = 1;
                    }
                } else {
                    if (num_valleys <= 66.5) {
                        if (rr_median <= 69.5) {
                            votes[10] = 2;
                        } else {
                            votes[10] = 2;
                        }
                    } else {
                        votes[10] = 2;
                    }
                }
            } else {
                if (rr_std <= 16.92195224761963) {
                    votes[10] = 1;
                } else {
                    votes[10] = 1;
                }
            }
        }
    }

// Decision rules for tree 11
    if (diastolic_area <= 0.9431372284889221) {
        if (pulse_interval <= 0.24066080152988434) {
            if (rr_std <= 9.610781192779541) {
                if (rr_std <= 0.6357192695140839) {
                    if (diastolic_area <= -3.267768144607544) {
                        votes[11] = 2;
                    } else {
                        if (ss_std <= 8.858213901519775) {
                            votes[11] = 3;
                        } else {
                            votes[11] = 4;
                        }
                    }
                } else {
                    if (ss_std <= 10.135508060455322) {
                        if (ss_median <= 47.25) {
                            if (ss_std <= 7.8647682666778564) {
                                if (dist_median <= -0.1967339962720871) {
                                    if (systolic_area <= 477864.140625) {
                                        votes[11] = 3;
                                    } else {
                                        votes[11] = 3;
                                    }
                                } else {
                                    if (systolic_time <= 0.05393706448376179) {
                                        votes[11] = 4;
                                    } else {
                                        votes[11] = 5;
                                    }
                                }
                            } else {
                                if (diff_median <= 7.771624803543091) {
                                    votes[11] = 5;
                                } else {
                                    if (systolic_area <= 401282.65625) {
                                        votes[11] = 1;
                                    } else {
                                        votes[11] = 5;
                                    }
                                }
                            }
                        } else {
                            if (first_peak_freq <= 0.30517578125) {
                                if (pp_interval <= 0.10150487348437309) {
                                    if (dist_std <= 107.05314254760742) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 1;
                                    }
                                } else {
                                    if (fwhm <= 8.176000118255615) {
                                        votes[11] = 3;
                                    } else {
                                        votes[11] = 3;
                                    }
                                }
                            } else {
                                if (dist_std <= 68.64170455932617) {
                                    votes[11] = 3;
                                } else {
                                    if (num_valleys <= 66.5) {
                                        votes[11] = 3;
                                    } else {
                                        if (fwhm <= 8.067999839782715) {
                                            votes[11] = 3;
                                        } else {
                                            votes[11] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (pp_interval <= 0.09065534546971321) {
                            if (systolic_area <= 2181636.125) {
                                if (num_valleys <= 74.5) {
                                    if (systolic_time <= 0.07666558772325516) {
                                        votes[11] = 3;
                                    } else {
                                        votes[11] = 3;
                                    }
                                } else {
                                    if (dist_median <= -0.2277086079120636) {
                                        if (dist_median <= -1.2568343877792358) {
                                            votes[11] = 1;
                                        } else {
                                            votes[11] = 1;
                                        }
                                    } else {
                                        votes[11] = 1;
                                    }
                                }
                            } else {
                                votes[11] = 4;
                            }
                        } else {
                            if (rr_median <= 91.0) {
                                if (second_peak_freq <= 1.03759765625) {
                                    if (rr_median <= 49.5) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 3;
                                    }
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
                if (systolic_area <= 1154539.375) {
                    if (systolic_area <= 47936.537109375) {
                        if (dist_median <= -0.004019806860014796) {
                            if (diastolic_amp <= -2099.5906982421875) {
                                votes[11] = 4;
                            } else {
                                if (diastolic_area <= -8248.002197265625) {
                                    votes[11] = 1;
                                } else {
                                    votes[11] = 4;
                                }
                            }
                        } else {
                            votes[11] = 0;
                        }
                    } else {
                        if (fwhm <= 7.5920000076293945) {
                            if (pulse_interval <= 0.10723623633384705) {
                                if (fwhm <= 6.624000072479248) {
                                    votes[11] = 1;
                                } else {
                                    votes[11] = 1;
                                }
                            } else {
                                votes[11] = 1;
                            }
                        } else {
                            if (diastolic_amp <= -11.9156813621521) {
                                votes[11] = 4;
                            } else {
                                if (pp_interval <= 0.08722750097513199) {
                                    if (pulse_interval <= 0.045757174491882324) {
                                        votes[11] = 4;
                                    } else {
                                        if (num_peaks <= 140.5) {
                                            votes[11] = 1;
                                        } else {
                                            votes[11] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 12.283388614654541) {
                                        if (dist_std <= 95.1554946899414) {
                                            votes[11] = 3;
                                        } else {
                                            votes[11] = 1;
                                        }
                                    } else {
                                        if (dist_median <= -0.3396407961845398) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 28.96026611328125) {
                        if (ss_median <= 64.75) {
                            if (ss_std <= 8.775665283203125) {
                                votes[11] = 4;
                            } else {
                                if (systolic_time <= 0.03975859843194485) {
                                    votes[11] = 4;
                                } else {
                                    if (ss_median <= 51.25) {
                                        votes[11] = 5;
                                    } else {
                                        if (diff_median <= 16.633703231811523) {
                                            votes[11] = 4;
                                        } else {
                                            votes[11] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[11] = 3;
                        }
                    } else {
                        votes[11] = 1;
                    }
                }
            }
        } else {
            if (dist_std <= 3.344452042132616) {
                votes[11] = 0;
            } else {
                if (pulse_interval <= 0.5045333504676819) {
                    if (rr_std <= 10.887945652008057) {
                        if (rr_median <= 69.5) {
                            if (diastolic_area <= -43.8207893371582) {
                                if (pulse_interval <= 0.3323809504508972) {
                                    votes[11] = 2;
                                } else {
                                    votes[11] = 2;
                                }
                            } else {
                                if (dist_median <= -0.2006348818540573) {
                                    if (ss_std <= 10.199416160583496) {
                                        votes[11] = 3;
                                    } else {
                                        votes[11] = 5;
                                    }
                                } else {
                                    if (dist_std <= 128.45780181884766) {
                                        votes[11] = 3;
                                    } else {
                                        votes[11] = 2;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 133474.80859375) {
                                if (rr_median <= 73.25) {
                                    votes[11] = 2;
                                } else {
                                    votes[11] = 2;
                                }
                            } else {
                                votes[11] = 2;
                            }
                        }
                    } else {
                        if (diastolic_area <= -26066.9033203125) {
                            if (systolic_time <= 0.45332352817058563) {
                                votes[11] = 2;
                            } else {
                                votes[11] = 2;
                            }
                        } else {
                            if (diastolic_time <= 0.7064000070095062) {
                                if (ss_std <= 16.975622177124023) {
                                    if (dist_std <= 59.851383209228516) {
                                        if (systolic_amp <= 1643.5341796875) {
                                            votes[11] = 3;
                                        } else {
                                            votes[11] = 5;
                                        }
                                    } else {
                                        if (dist_median <= -0.20627178251743317) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 5;
                                        }
                                    }
                                } else {
                                    votes[11] = 4;
                                }
                            } else {
                                votes[11] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 41465.041015625) {
                        if (rr_std <= 22.68282699584961) {
                            if (rr_std <= 18.592101097106934) {
                                if (pulse_interval <= 0.749777764081955) {
                                    votes[11] = 5;
                                } else {
                                    votes[11] = 1;
                                }
                            } else {
                                if (dist_std <= 82.57720565795898) {
                                    if (diff_median <= 8.459051609039307) {
                                        votes[11] = 2;
                                    } else {
                                        votes[11] = 2;
                                    }
                                } else {
                                    votes[11] = 2;
                                }
                            }
                        } else {
                            votes[11] = 1;
                        }
                    } else {
                        if (rr_std <= 3.5630035400390625) {
                            votes[11] = 2;
                        } else {
                            if (dist_std <= 90.93955612182617) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (ss_std <= 3.5) {
            votes[11] = 0;
        } else {
            if (second_peak_freq <= 1.28173828125) {
                votes[11] = 0;
            } else {
                if (num_peaks <= 104.5) {
                    votes[11] = 0;
                } else {
                    votes[11] = 0;
                }
            }
        }
    }

// Decision rules for tree 12
    if (dist_std <= 0.020607572980225086) {
        if (dist_median <= -0.0002428464504191652) {
            if (diff_median <= 0.006856046384200454) {
                votes[12] = 2;
            } else {
                votes[12] = 0;
            }
        } else {
            if (diastolic_time <= 0.397136852145195) {
                if (systolic_amp <= 0.32600194215774536) {
                    votes[12] = 0;
                } else {
                    votes[12] = 0;
                }
            } else {
                votes[12] = 0;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (fwhm <= 8.139999866485596) {
                if (systolic_area <= 46342.359375) {
                    if (fwhm <= 7.055999994277954) {
                        if (pulse_interval <= 0.3439999967813492) {
                            if (diastolic_area <= -30802.31640625) {
                                votes[12] = 4;
                            } else {
                                if (systolic_time <= 0.23362499475479126) {
                                    if (dist_median <= -0.02034392673522234) {
                                        votes[12] = 4;
                                    } else {
                                        votes[12] = 4;
                                    }
                                } else {
                                    votes[12] = 4;
                                }
                            }
                        } else {
                            if (pulse_interval <= 0.4284313768148422) {
                                if (ss_std <= 12.949449062347412) {
                                    votes[12] = 2;
                                } else {
                                    votes[12] = 2;
                                }
                            } else {
                                votes[12] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 22.34885025024414) {
                            if (dist_median <= -0.007097124354913831) {
                                if (pulse_interval <= 0.9882857203483582) {
                                    if (rr_median <= 54.75) {
                                        votes[12] = 2;
                                    } else {
                                        votes[12] = 2;
                                    }
                                } else {
                                    votes[12] = 1;
                                }
                            } else {
                                if (ss_std <= 14.034114837646484) {
                                    votes[12] = 5;
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        } else {
                            if (ss_std <= 18.00535488128662) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 4;
                            }
                        }
                    }
                } else {
                    if (pp_interval <= 0.08796415477991104) {
                        if (rr_median <= 43.75) {
                            if (ss_std <= 8.202977418899536) {
                                votes[12] = 4;
                            } else {
                                votes[12] = 5;
                            }
                        } else {
                            if (diastolic_area <= -10.723103046417236) {
                                votes[12] = 3;
                            } else {
                                if (systolic_area <= 972478.75) {
                                    if (dist_median <= 0.35458697378635406) {
                                        if (rr_std <= 8.172518730163574) {
                                            votes[12] = 1;
                                        } else {
                                            votes[12] = 1;
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
                        if (first_peak_freq <= 0.42724609375) {
                            if (rr_std <= 12.022918224334717) {
                                if (dist_std <= 140.42134857177734) {
                                    if (rr_std <= 8.064809560775757) {
                                        if (rr_median <= 49.5) {
                                            votes[12] = 3;
                                        } else {
                                            votes[12] = 3;
                                        }
                                    } else {
                                        votes[12] = 1;
                                    }
                                } else {
                                    if (rr_median <= 50.75) {
                                        votes[12] = 5;
                                    } else {
                                        votes[12] = 1;
                                    }
                                }
                            } else {
                                if (diastolic_area <= -8.528092861175537) {
                                    votes[12] = 1;
                                } else {
                                    if (dist_std <= 80.89888381958008) {
                                        votes[12] = 5;
                                    } else {
                                        votes[12] = 5;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 156898.8125) {
                                votes[12] = 5;
                            } else {
                                if (systolic_amp <= 7599.97705078125) {
                                    if (second_peak_freq <= 1.03759765625) {
                                        votes[12] = 3;
                                    } else {
                                        if (num_peaks <= 126.0) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 3;
                                        }
                                    }
                                } else {
                                    votes[12] = 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 99.19024276733398) {
                    if (systolic_area <= 1022902.84375) {
                        if (diff_median <= 11.274486064910889) {
                            if (diastolic_area <= -7.687138259410858) {
                                votes[12] = 4;
                            } else {
                                if (ss_std <= 9.095486640930176) {
                                    if (num_peaks <= 142.0) {
                                        votes[12] = 4;
                                    } else {
                                        votes[12] = 3;
                                    }
                                } else {
                                    if (systolic_time <= 0.08869705721735954) {
                                        votes[12] = 3;
                                    } else {
                                        if (num_valleys <= 79.5) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (ss_std <= 12.360318183898926) {
                                if (num_peaks <= 151.5) {
                                    if (rr_std <= 13.025819301605225) {
                                        if (dist_std <= 71.89826965332031) {
                                            votes[12] = 3;
                                        } else {
                                            votes[12] = 3;
                                        }
                                    } else {
                                        votes[12] = 5;
                                    }
                                } else {
                                    votes[12] = 5;
                                }
                            } else {
                                if (ss_median <= 51.75) {
                                    votes[12] = 1;
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 9.491891860961914) {
                            if (diff_median <= 9.502836227416992) {
                                votes[12] = 1;
                            } else {
                                if (rr_std <= 8.457296371459961) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 3;
                                }
                            }
                        } else {
                            if (pp_interval <= 0.06938030570745468) {
                                if (pulse_interval <= 0.03851133957505226) {
                                    if (ss_median <= 56.5) {
                                        if (pulse_interval <= 0.028681937605142593) {
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
                            } else {
                                if (ss_std <= 14.453513145446777) {
                                    if (rr_std <= 14.350314140319824) {
                                        if (dist_std <= 47.99507141113281) {
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
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 138.5) {
                        if (ss_std <= 3.415665864944458) {
                            if (ss_std <= 0.9326288402080536) {
                                votes[12] = 3;
                            } else {
                                votes[12] = 3;
                            }
                        } else {
                            if (diff_median <= 7.9631171226501465) {
                                if (pp_interval <= 0.06942804902791977) {
                                    votes[12] = 5;
                                } else {
                                    votes[12] = 5;
                                }
                            } else {
                                if (systolic_time <= 0.09793945029377937) {
                                    if (second_peak_freq <= 1.03759765625) {
                                        votes[12] = 3;
                                    } else {
                                        votes[12] = 4;
                                    }
                                } else {
                                    if (pp_interval <= 0.13645130395889282) {
                                        votes[12] = 5;
                                    } else {
                                        if (dist_std <= 171.0365447998047) {
                                            votes[12] = 3;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 2577430.625) {
                            if (diff_median <= 8.280756950378418) {
                                votes[12] = 3;
                            } else {
                                if (systolic_time <= 0.0997101478278637) {
                                    if (num_peaks <= 149.5) {
                                        votes[12] = 1;
                                    } else {
                                        votes[12] = 1;
                                    }
                                } else {
                                    if (rr_median <= 46.25) {
                                        votes[12] = 1;
                                    } else {
                                        votes[12] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[12] = 4;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (num_valleys <= 71.5) {
                    if (systolic_area <= 176205.3984375) {
                        if (rr_median <= 73.75) {
                            if (ss_median <= 69.5) {
                                if (systolic_amp <= 5775.66796875) {
                                    votes[12] = 2;
                                } else {
                                    votes[12] = 2;
                                }
                            } else {
                                votes[12] = 2;
                            }
                        } else {
                            votes[12] = 5;
                        }
                    } else {
                        votes[12] = 5;
                    }
                } else {
                    votes[12] = 5;
                }
            } else {
                if (pulse_interval <= 0.09809523820877075) {
                    votes[12] = 3;
                } else {
                    if (num_valleys <= 75.5) {
                        if (first_peak_freq <= 0.42724609375) {
                            if (ss_std <= 14.057734489440918) {
                                votes[12] = 3;
                            } else {
                                votes[12] = 4;
                            }
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

// Decision rules for tree 13
    if (diff_median <= 0.06967576686292887) {
        if (dist_std <= 0.018142221495509148) {
            if (rr_std <= 1.4665063470602036) {
                if (systolic_time <= 0.8709999918937683) {
                    votes[13] = 0;
                } else {
                    votes[13] = 0;
                }
            } else {
                if (rr_std <= 111.41612243652344) {
                    votes[13] = 0;
                } else {
                    if (first_peak_freq <= 0.54931640625) {
                        votes[13] = 0;
                    } else {
                        votes[13] = 0;
                    }
                }
            }
        } else {
            votes[13] = 2;
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1154539.375) {
                if (diastolic_area <= -20486.0380859375) {
                    if (pp_interval <= 0.2684873640537262) {
                        if (rr_median <= 60.5) {
                            votes[13] = 1;
                        } else {
                            votes[13] = 4;
                        }
                    } else {
                        if (systolic_time <= 0.45332352817058563) {
                            votes[13] = 2;
                        } else {
                            if (ss_median <= 54.0) {
                                votes[13] = 2;
                            } else {
                                votes[13] = 5;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08813483268022537) {
                        if (fwhm <= 2.9719999879598618) {
                            votes[13] = 4;
                        } else {
                            if (dist_median <= -0.3158617615699768) {
                                if (rr_median <= 44.25) {
                                    if (systolic_area <= 699009.3125) {
                                        votes[13] = 1;
                                    } else {
                                        votes[13] = 3;
                                    }
                                } else {
                                    if (dist_std <= 56.954166412353516) {
                                        votes[13] = 3;
                                    } else {
                                        if (fwhm <= 8.07200002670288) {
                                            votes[13] = 1;
                                        } else {
                                            votes[13] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 7.7782580852508545) {
                                    if (ss_median <= 48.25) {
                                        votes[13] = 3;
                                    } else {
                                        votes[13] = 3;
                                    }
                                } else {
                                    if (num_valleys <= 85.5) {
                                        if (first_peak_freq <= 0.18310546875) {
                                            votes[13] = 4;
                                        } else {
                                            votes[13] = 1;
                                        }
                                    } else {
                                        votes[13] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.5486813187599182) {
                            if (rr_std <= 12.283388614654541) {
                                if (systolic_area <= 112944.68359375) {
                                    if (num_valleys <= 69.0) {
                                        votes[13] = 5;
                                    } else {
                                        votes[13] = 5;
                                    }
                                } else {
                                    if (dist_std <= 157.02164459228516) {
                                        if (ss_std <= 10.141570568084717) {
                                            votes[13] = 3;
                                        } else {
                                            votes[13] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 43.75) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_amp <= -11.83148717880249) {
                                    if (dist_std <= 43.87499237060547) {
                                        if (systolic_area <= 27648.2451171875) {
                                            votes[13] = 1;
                                        } else {
                                            votes[13] = 4;
                                        }
                                    } else {
                                        votes[13] = 1;
                                    }
                                } else {
                                    if (dist_std <= 61.58267784118652) {
                                        if (num_peaks <= 143.5) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 54.75) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 41465.041015625) {
                                if (systolic_area <= 16362.955078125) {
                                    if (num_valleys <= 72.5) {
                                        votes[13] = 2;
                                    } else {
                                        votes[13] = 1;
                                    }
                                } else {
                                    if (fwhm <= 7.51200008392334) {
                                        votes[13] = 1;
                                    } else {
                                        votes[13] = 1;
                                    }
                                }
                            } else {
                                votes[13] = 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.491891860961914) {
                    if (ss_std <= 11.699163913726807) {
                        if (pulse_interval <= 0.056236155331134796) {
                            if (systolic_area <= 2684961.5) {
                                votes[13] = 3;
                            } else {
                                votes[13] = 3;
                            }
                        } else {
                            votes[13] = 5;
                        }
                    } else {
                        votes[13] = 4;
                    }
                } else {
                    if (num_peaks <= 134.5) {
                        votes[13] = 1;
                    } else {
                        if (num_valleys <= 88.5) {
                            if (ss_std <= 9.266630172729492) {
                                votes[13] = 4;
                            } else {
                                if (rr_median <= 67.25) {
                                    if (ss_median <= 46.25) {
                                        votes[13] = 4;
                                    } else {
                                        if (first_peak_freq <= 0.54931640625) {
                                            votes[13] = 4;
                                        } else {
                                            votes[13] = 4;
                                        }
                                    }
                                } else {
                                    votes[13] = 4;
                                }
                            }
                        } else {
                            votes[13] = 4;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.300655841827393) {
                if (systolic_area <= 176205.3984375) {
                    if (systolic_area <= 74045.859375) {
                        votes[13] = 5;
                    } else {
                        if (systolic_time <= 0.47474999725818634) {
                            if (num_peaks <= 121.5) {
                                if (dist_median <= -0.3607042282819748) {
                                    if (first_peak_freq <= 0.54931640625) {
                                        votes[13] = 2;
                                    } else {
                                        votes[13] = 2;
                                    }
                                } else {
                                    votes[13] = 2;
                                }
                            } else {
                                if (dist_std <= 202.3615951538086) {
                                    votes[13] = 2;
                                } else {
                                    votes[13] = 2;
                                }
                            }
                        } else {
                            votes[13] = 2;
                        }
                    }
                } else {
                    if (diff_median <= 20.87038803100586) {
                        votes[13] = 3;
                    } else {
                        votes[13] = 5;
                    }
                }
            } else {
                if (rr_std <= 18.97255229949951) {
                    if (ss_std <= 13.922203540802002) {
                        if (systolic_area <= 122868.1328125) {
                            votes[13] = 5;
                        } else {
                            votes[13] = 3;
                        }
                    } else {
                        if (dist_std <= 136.2768325805664) {
                            votes[13] = 4;
                        } else {
                            votes[13] = 5;
                        }
                    }
                } else {
                    if (dist_median <= -0.006716296775266528) {
                        votes[13] = 4;
                    } else {
                        votes[13] = 4;
                    }
                }
            }
        }
    }

// Decision rules for tree 14
    if (pp_interval <= 0.2401290312409401) {
        if (rr_std <= 9.503406524658203) {
            if (rr_median <= 49.75) {
                if (ss_std <= 8.535457611083984) {
                    if (dist_median <= -0.32964199781417847) {
                        if (systolic_time <= 0.07983304932713509) {
                            votes[14] = 3;
                        } else {
                            votes[14] = 3;
                        }
                    } else {
                        if (pp_interval <= 0.09735880047082901) {
                            if (systolic_area <= 545785.34375) {
                                votes[14] = 4;
                            } else {
                                votes[14] = 4;
                            }
                        } else {
                            if (ss_std <= 5.531889915466309) {
                                votes[14] = 5;
                            } else {
                                votes[14] = 1;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 23.55784320831299) {
                        if (systolic_time <= 0.04487598314881325) {
                            votes[14] = 1;
                        } else {
                            if (rr_std <= 1.645962417125702) {
                                votes[14] = 1;
                            } else {
                                if (num_valleys <= 81.5) {
                                    if (first_peak_freq <= 0.42724609375) {
                                        votes[14] = 5;
                                    } else {
                                        votes[14] = 5;
                                    }
                                } else {
                                    votes[14] = 3;
                                }
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.08469121530652046) {
                            if (dist_std <= 105.62704849243164) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 1;
                            }
                        } else {
                            votes[14] = 1;
                        }
                    }
                }
            } else {
                if (dist_std <= 154.48657989501953) {
                    if (dist_std <= 37.95266532897949) {
                        votes[14] = 3;
                    } else {
                        if (dist_median <= 0.0399693138897419) {
                            if (first_peak_freq <= 0.30517578125) {
                                if (num_peaks <= 139.5) {
                                    votes[14] = 1;
                                } else {
                                    votes[14] = 3;
                                }
                            } else {
                                if (rr_std <= 8.101469039916992) {
                                    if (diff_median <= 6.28363037109375) {
                                        votes[14] = 3;
                                    } else {
                                        votes[14] = 3;
                                    }
                                } else {
                                    if (ss_std <= 11.095423221588135) {
                                        votes[14] = 3;
                                    } else {
                                        votes[14] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[14] = 3;
                        }
                    }
                } else {
                    if (diastolic_amp <= -2.7136294841766357) {
                        votes[14] = 2;
                    } else {
                        if (fwhm <= 7.9679999351501465) {
                            votes[14] = 1;
                        } else {
                            if (ss_std <= 4.916943073272705) {
                                votes[14] = 3;
                            } else {
                                if (second_peak_freq <= 0.91552734375) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 5;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 84.99086380004883) {
                if (first_peak_freq <= 0.67138671875) {
                    if (dist_median <= -0.22486791014671326) {
                        if (pulse_interval <= 0.07171598449349403) {
                            if (fwhm <= 7.944000005722046) {
                                votes[14] = 1;
                            } else {
                                if (rr_std <= 12.17084789276123) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 1;
                                }
                            }
                        } else {
                            if (first_peak_freq <= 0.42724609375) {
                                if (systolic_area <= 1123514.65625) {
                                    if (rr_std <= 12.45444917678833) {
                                        votes[14] = 5;
                                    } else {
                                        votes[14] = 5;
                                    }
                                } else {
                                    votes[14] = 4;
                                }
                            } else {
                                if (diff_median <= 11.190546989440918) {
                                    votes[14] = 3;
                                } else {
                                    if (rr_median <= 50.5) {
                                        votes[14] = 4;
                                    } else {
                                        votes[14] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 1108417.5625) {
                            if (systolic_amp <= 1234.62451171875) {
                                if (rr_std <= 15.480857372283936) {
                                    if (rr_median <= 58.5) {
                                        if (fwhm <= 7.7240002155303955) {
                                            votes[14] = 1;
                                        } else {
                                            votes[14] = 3;
                                        }
                                    } else {
                                        votes[14] = 5;
                                    }
                                } else {
                                    votes[14] = 4;
                                }
                            } else {
                                if (systolic_area <= 46409.548828125) {
                                    if (num_valleys <= 67.0) {
                                        votes[14] = 4;
                                    } else {
                                        if (systolic_area <= 29706.73046875) {
                                            votes[14] = 4;
                                        } else {
                                            votes[14] = 4;
                                        }
                                    }
                                } else {
                                    votes[14] = 1;
                                }
                            }
                        } else {
                            if (second_peak_freq <= 1.03759765625) {
                                votes[14] = 4;
                            } else {
                                if (ss_std <= 12.639886856079102) {
                                    votes[14] = 4;
                                } else {
                                    votes[14] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (fwhm <= 7.76800012588501) {
                        if (dist_std <= 49.372039794921875) {
                            votes[14] = 1;
                        } else {
                            votes[14] = 1;
                        }
                    } else {
                        if (systolic_area <= 363088.921875) {
                            votes[14] = 3;
                        } else {
                            votes[14] = 3;
                        }
                    }
                }
            } else {
                if (pp_interval <= 0.034542566165328026) {
                    if (num_peaks <= 138.5) {
                        votes[14] = 3;
                    } else {
                        votes[14] = 4;
                    }
                } else {
                    if (num_peaks <= 145.5) {
                        if (rr_std <= 21.60118579864502) {
                            if (fwhm <= 8.047999858856201) {
                                if (systolic_time <= 0.08791991323232651) {
                                    votes[14] = 1;
                                } else {
                                    if (fwhm <= 7.96399998664856) {
                                        votes[14] = 5;
                                    } else {
                                        votes[14] = 1;
                                    }
                                }
                            } else {
                                if (dist_median <= -0.30568166077136993) {
                                    if (first_peak_freq <= 0.42724609375) {
                                        votes[14] = 5;
                                    } else {
                                        votes[14] = 5;
                                    }
                                } else {
                                    if (pp_interval <= 0.12012138590216637) {
                                        if (ss_std <= 7.586827039718628) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 3;
                                        }
                                    } else {
                                        votes[14] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[14] = 4;
                        }
                    } else {
                        if (pulse_interval <= 0.10131076723337173) {
                            votes[14] = 1;
                        } else {
                            votes[14] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.019624496810138226) {
            if (num_valleys <= 41.5) {
                votes[14] = 0;
            } else {
                if (rr_std <= 111.71968460083008) {
                    if (rr_std <= 1.25) {
                        if (ss_std <= 20.878042221069336) {
                            votes[14] = 0;
                        } else {
                            votes[14] = 0;
                        }
                    } else {
                        votes[14] = 0;
                    }
                } else {
                    votes[14] = 0;
                }
            }
        } else {
            if (pp_interval <= 0.965499997138977) {
                if (ss_median <= 66.25) {
                    if (systolic_area <= 32708.9345703125) {
                        if (dist_median <= -0.007119604619219899) {
                            if (rr_std <= 24.353246688842773) {
                                if (dist_std <= 51.39231872558594) {
                                    votes[14] = 1;
                                } else {
                                    if (systolic_time <= 0.37907619774341583) {
                                        votes[14] = 2;
                                    } else {
                                        votes[14] = 2;
                                    }
                                }
                            } else {
                                votes[14] = 1;
                            }
                        } else {
                            if (ss_std <= 14.57586145401001) {
                                if (ss_median <= 51.75) {
                                    if (rr_std <= 25.769413948059082) {
                                        votes[14] = 1;
                                    } else {
                                        votes[14] = 1;
                                    }
                                } else {
                                    votes[14] = 5;
                                }
                            } else {
                                votes[14] = 2;
                            }
                        }
                    } else {
                        if (dist_std <= 61.286216735839844) {
                            if (fwhm <= 7.7159998416900635) {
                                votes[14] = 5;
                            } else {
                                if (num_valleys <= 80.5) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 3;
                                }
                            }
                        } else {
                            if (ss_std <= 2.295127272605896) {
                                votes[14] = 3;
                            } else {
                                if (rr_std <= 4.8463804721832275) {
                                    votes[14] = 3;
                                } else {
                                    if (num_peaks <= 122.5) {
                                        votes[14] = 5;
                                    } else {
                                        votes[14] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 10.000322818756104) {
                        if (dist_std <= 123.29075241088867) {
                            votes[14] = 5;
                        } else {
                            if (dist_std <= 161.142822265625) {
                                votes[14] = 2;
                            } else {
                                if (pp_interval <= 0.46441176533699036) {
                                    votes[14] = 2;
                                } else {
                                    votes[14] = 2;
                                }
                            }
                        }
                    } else {
                        if (systolic_amp <= 0.30694037675857544) {
                            votes[14] = 3;
                        } else {
                            votes[14] = 4;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -16206.1513671875) {
                    votes[14] = 1;
                } else {
                    if (rr_std <= 22.13473606109619) {
                        votes[14] = 1;
                    } else {
                        votes[14] = 1;
                    }
                }
            }
        }
    }

// Decision rules for tree 15
    if (diff_median <= 0.16734469402581453) {
        if (dist_std <= 0.01743974443525076) {
            if (rr_std <= 2.496503323316574) {
                if (rr_median <= 177.0) {
                    votes[15] = 2;
                } else {
                    votes[15] = 0;
                }
            } else {
                if (dist_std <= 0.012069156859070063) {
                    votes[15] = 0;
                } else {
                    if (pulse_interval <= 0.31421539187431335) {
                        votes[15] = 0;
                    } else {
                        votes[15] = 0;
                    }
                }
            }
        } else {
            votes[15] = 1;
        }
    } else {
        if (pulse_interval <= 0.24066080152988434) {
            if (dist_std <= 59.126007080078125) {
                if (diff_median <= 17.183536529541016) {
                    if (fwhm <= 8.144000053405762) {
                        if (diastolic_area <= -14173.97802734375) {
                            if (dist_std <= 50.28053665161133) {
                                if (fwhm <= 6.460000038146973) {
                                    votes[15] = 4;
                                } else {
                                    votes[15] = 4;
                                }
                            } else {
                                votes[15] = 4;
                            }
                        } else {
                            if (systolic_area <= 16270.5390625) {
                                votes[15] = 4;
                            } else {
                                if (systolic_time <= 0.0750986784696579) {
                                    if (fwhm <= 7.516000032424927) {
                                        votes[15] = 1;
                                    } else {
                                        votes[15] = 1;
                                    }
                                } else {
                                    if (ss_std <= 9.96978759765625) {
                                        votes[15] = 3;
                                    } else {
                                        votes[15] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 1027442.65625) {
                            if (rr_std <= 9.688333511352539) {
                                votes[15] = 3;
                            } else {
                                if (pulse_interval <= 0.09576036036014557) {
                                    votes[15] = 4;
                                } else {
                                    votes[15] = 4;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.029841274954378605) {
                                votes[15] = 3;
                            } else {
                                if (ss_std <= 9.370867729187012) {
                                    votes[15] = 4;
                                } else {
                                    if (second_peak_freq <= 1.52587890625) {
                                        if (ss_std <= 14.964862823486328) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 4;
                                        }
                                    } else {
                                        votes[15] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 49.95504188537598) {
                        if (systolic_area <= 384092.9375) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 3;
                        }
                    } else {
                        if (pulse_interval <= 0.08309377729892731) {
                            votes[15] = 1;
                        } else {
                            votes[15] = 3;
                        }
                    }
                }
            } else {
                if (systolic_time <= 0.0347394235432148) {
                    if (systolic_area <= 3035287.625) {
                        if (ss_median <= 44.5) {
                            votes[15] = 4;
                        } else {
                            if (num_valleys <= 67.5) {
                                votes[15] = 3;
                            } else {
                                votes[15] = 3;
                            }
                        }
                    } else {
                        if (dist_std <= 134.9077606201172) {
                            votes[15] = 4;
                        } else {
                            votes[15] = 4;
                        }
                    }
                } else {
                    if (first_peak_freq <= 0.18310546875) {
                        if (rr_std <= 19.968554496765137) {
                            if (num_valleys <= 77.5) {
                                votes[15] = 4;
                            } else {
                                votes[15] = 4;
                            }
                        } else {
                            votes[15] = 1;
                        }
                    } else {
                        if (ss_std <= 3.165468215942383) {
                            if (rr_median <= 66.5) {
                                if (ss_std <= 1.4482600688934326) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 3;
                                }
                            } else {
                                if (systolic_amp <= 3198.416259765625) {
                                    votes[15] = 5;
                                } else {
                                    votes[15] = 2;
                                }
                            }
                        } else {
                            if (rr_median <= 42.75) {
                                if (dist_median <= 0.25291284173727036) {
                                    if (num_peaks <= 126.0) {
                                        votes[15] = 5;
                                    } else {
                                        if (num_peaks <= 132.5) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    }
                                } else {
                                    votes[15] = 1;
                                }
                            } else {
                                if (systolic_time <= 0.0883086808025837) {
                                    if (rr_std <= 6.6340296268463135) {
                                        if (dist_median <= -0.3172322139143944) {
                                            votes[15] = 1;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 682965.1875) {
                                            votes[15] = 1;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 1135892.3125) {
                                        if (fwhm <= 8.116000175476074) {
                                            votes[15] = 1;
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
                }
            }
        } else {
            if (num_peaks <= 113.0) {
                if (rr_median <= 73.25) {
                    if (ss_median <= 69.0) {
                        votes[15] = 2;
                    } else {
                        votes[15] = 2;
                    }
                } else {
                    votes[15] = 2;
                }
            } else {
                if (diastolic_time <= 0.8788333237171173) {
                    if (systolic_time <= 0.9817143082618713) {
                        if (diastolic_time <= 0.01669936068356037) {
                            if (ss_std <= 2.931438446044922) {
                                if (ss_median <= 68.5) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 2;
                                }
                            } else {
                                if (first_peak_freq <= 1.15966796875) {
                                    if (dist_std <= 59.851383209228516) {
                                        votes[15] = 3;
                                    } else {
                                        if (first_peak_freq <= 0.67138671875) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    }
                                } else {
                                    votes[15] = 2;
                                }
                            }
                        } else {
                            if (dist_std <= 48.26797676086426) {
                                if (pulse_interval <= 0.40667492151260376) {
                                    votes[15] = 4;
                                } else {
                                    votes[15] = 5;
                                }
                            } else {
                                if (rr_std <= 21.82677173614502) {
                                    if (ss_median <= 56.75) {
                                        votes[15] = 2;
                                    } else {
                                        if (diff_median <= 5.274356365203857) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 2;
                                        }
                                    }
                                } else {
                                    votes[15] = 1;
                                }
                            }
                        }
                    } else {
                        if (second_peak_freq <= 0.79345703125) {
                            votes[15] = 1;
                        } else {
                            votes[15] = 1;
                        }
                    }
                } else {
                    votes[15] = 1;
                }
            }
        }
    }

// Decision rules for tree 16
    if (systolic_area <= 494.8396987915039) {
        if (pp_interval <= 0.1236250028014183) {
            if (fwhm <= 4.0920000076293945) {
                votes[16] = 4;
            } else {
                votes[16] = 3;
            }
        } else {
            if (diff_median <= 0.004068237729370594) {
                votes[16] = 2;
            } else {
                if (dist_std <= 0.016956154257059097) {
                    if (num_valleys <= 78.5) {
                        votes[16] = 0;
                    } else {
                        votes[16] = 0;
                    }
                } else {
                    votes[16] = 0;
                }
            }
        }
    } else {
        if (num_peaks <= 116.5) {
            if (ss_median <= 66.5) {
                if (rr_std <= 7.849528551101685) {
                    votes[16] = 3;
                } else {
                    if (second_peak_freq <= 1.220703125) {
                        votes[16] = 5;
                    } else {
                        votes[16] = 5;
                    }
                }
            } else {
                if (rr_std <= 10.801885604858398) {
                    if (pulse_interval <= 0.22674038261175156) {
                        votes[16] = 2;
                    } else {
                        if (rr_std <= 0.4691291004419327) {
                            if (systolic_time <= 0.4117770940065384) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 2;
                            }
                        } else {
                            votes[16] = 2;
                        }
                    }
                } else {
                    votes[16] = 3;
                }
            }
        } else {
            if (pp_interval <= 0.5422197878360748) {
                if (diff_median <= 16.146031379699707) {
                    if (pp_interval <= 0.284575492143631) {
                        if (rr_std <= 9.373091220855713) {
                            if (ss_median <= 49.25) {
                                if (systolic_area <= 779883.84375) {
                                    if (diastolic_amp <= -1.0957538485527039) {
                                        votes[16] = 5;
                                    } else {
                                        if (diff_median <= 9.603060722351074) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 1635115.375) {
                                        votes[16] = 3;
                                    } else {
                                        votes[16] = 4;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.00800000037997961) {
                                    if (ss_std <= 12.109060764312744) {
                                        if (systolic_area <= 301746.4375) {
                                            votes[16] = 3;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    } else {
                                        votes[16] = 5;
                                    }
                                } else {
                                    if (pp_interval <= 0.17206821590662003) {
                                        votes[16] = 1;
                                    } else {
                                        votes[16] = 2;
                                    }
                                }
                            }
                        } else {
                            if (pp_interval <= 0.034542566165328026) {
                                if (pulse_interval <= 0.03318944573402405) {
                                    if (ss_std <= 12.552591800689697) {
                                        votes[16] = 4;
                                    } else {
                                        votes[16] = 1;
                                    }
                                } else {
                                    if (diff_median <= 8.556147575378418) {
                                        votes[16] = 4;
                                    } else {
                                        votes[16] = 4;
                                    }
                                }
                            } else {
                                if (dist_std <= 78.57471466064453) {
                                    if (pulse_interval <= 0.06308232806622982) {
                                        if (systolic_area <= 929282.5) {
                                            votes[16] = 1;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    } else {
                                        if (ss_std <= 10.028268814086914) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 4;
                                        }
                                    }
                                } else {
                                    if (pp_interval <= 0.08437766134738922) {
                                        if (rr_std <= 13.409107685089111) {
                                            votes[16] = 1;
                                        } else {
                                            votes[16] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 13.03529691696167) {
                                            votes[16] = 1;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.3135652244091034) {
                            if (diff_median <= 7.067925930023193) {
                                votes[16] = 5;
                            } else {
                                votes[16] = 5;
                            }
                        } else {
                            if (diff_median <= 2.5921826362609863) {
                                if (second_peak_freq <= 0.91552734375) {
                                    votes[16] = 1;
                                } else {
                                    votes[16] = 4;
                                }
                            } else {
                                if (pulse_interval <= 0.4712499976158142) {
                                    if (num_valleys <= 79.5) {
                                        if (diastolic_area <= -22281.421875) {
                                            votes[16] = 2;
                                        } else {
                                            votes[16] = 2;
                                        }
                                    } else {
                                        votes[16] = 3;
                                    }
                                } else {
                                    if (rr_median <= 59.0) {
                                        votes[16] = 2;
                                    } else {
                                        votes[16] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (fwhm <= 8.059999942779541) {
                        if (systolic_area <= 495757.328125) {
                            if (systolic_time <= 0.09207357093691826) {
                                if (rr_std <= 12.504767894744873) {
                                    votes[16] = 1;
                                } else {
                                    votes[16] = 1;
                                }
                            } else {
                                if (dist_std <= 111.51261138916016) {
                                    if (num_valleys <= 71.5) {
                                        votes[16] = 3;
                                    } else {
                                        if (systolic_amp <= 5831.664794921875) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 4;
                                        }
                                    }
                                } else {
                                    if (ss_std <= 10.283120155334473) {
                                        votes[16] = 1;
                                    } else {
                                        votes[16] = 1;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 54.25) {
                                votes[16] = 3;
                            } else {
                                votes[16] = 3;
                            }
                        }
                    } else {
                        if (dist_std <= 55.823917388916016) {
                            if (ss_median <= 50.75) {
                                votes[16] = 3;
                            } else {
                                votes[16] = 3;
                            }
                        } else {
                            if (systolic_time <= 0.1134553998708725) {
                                if (ss_median <= 46.25) {
                                    votes[16] = 3;
                                } else {
                                    if (dist_std <= 92.32190704345703) {
                                        if (rr_median <= 50.75) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 50.5) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (dist_std <= 210.39772033691406) {
                                    if (pp_interval <= 0.13163059949874878) {
                                        votes[16] = 5;
                                    } else {
                                        if (dist_std <= 126.05505752563477) {
                                            votes[16] = 3;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    }
                                } else {
                                    votes[16] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 21.953694343566895) {
                    if (systolic_area <= 41465.041015625) {
                        if (num_peaks <= 138.5) {
                            votes[16] = 1;
                        } else {
                            if (dist_std <= 72.7588996887207) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 2;
                            }
                        }
                    } else {
                        votes[16] = 5;
                    }
                } else {
                    votes[16] = 1;
                }
            }
        }
    }

// Decision rules for tree 17
    if (dist_std <= 0.018805175088346004) {
        if (diff_median <= 0.004352765856310725) {
            votes[17] = 0;
        } else {
            if (num_valleys <= 79.5) {
                if (dist_median <= -0.000518692540936172) {
                    votes[17] = 0;
                } else {
                    votes[17] = 0;
                }
            } else {
                votes[17] = 0;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (pp_interval <= 0.3418181836605072) {
                if (systolic_area <= 3728599.875) {
                    if (ss_std <= 12.276032447814941) {
                        if (rr_std <= 12.42160940170288) {
                            if (ss_median <= 48.75) {
                                if (fwhm <= 4.587999939918518) {
                                    votes[17] = 4;
                                } else {
                                    if (rr_std <= 10.179472923278809) {
                                        if (dist_std <= 70.70566940307617) {
                                            votes[17] = 3;
                                        } else {
                                            votes[17] = 5;
                                        }
                                    } else {
                                        if (systolic_time <= 0.06885978952050209) {
                                            votes[17] = 1;
                                        } else {
                                            votes[17] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 145.5) {
                                    if (diff_median <= 6.90557336807251) {
                                        if (num_peaks <= 122.0) {
                                            votes[17] = 3;
                                        } else {
                                            votes[17] = 1;
                                        }
                                    } else {
                                        if (ss_std <= 10.854745864868164) {
                                            votes[17] = 3;
                                        } else {
                                            votes[17] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 9.442267417907715) {
                                        if (pp_interval <= 0.061074063181877136) {
                                            votes[17] = 3;
                                        } else {
                                            votes[17] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 1082260.90625) {
                                            votes[17] = 1;
                                        } else {
                                            votes[17] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 67.5) {
                                if (diastolic_time <= 0.0240433132275939) {
                                    if (num_valleys <= 61.5) {
                                        votes[17] = 5;
                                    } else {
                                        votes[17] = 5;
                                    }
                                } else {
                                    votes[17] = 4;
                                }
                            } else {
                                if (dist_std <= 82.40507888793945) {
                                    if (pp_interval <= 0.10627561435103416) {
                                        if (second_peak_freq <= 0.91552734375) {
                                            votes[17] = 4;
                                        } else {
                                            votes[17] = 1;
                                        }
                                    } else {
                                        if (first_peak_freq <= 0.42724609375) {
                                            votes[17] = 5;
                                        } else {
                                            votes[17] = 4;
                                        }
                                    }
                                } else {
                                    if (pp_interval <= 0.08502373471856117) {
                                        votes[17] = 1;
                                    } else {
                                        votes[17] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 50579.451171875) {
                            if (first_peak_freq <= 0.18310546875) {
                                votes[17] = 5;
                            } else {
                                if (num_peaks <= 126.5) {
                                    votes[17] = 3;
                                } else {
                                    if (second_peak_freq <= 1.28173828125) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 4;
                                    }
                                }
                            }
                        } else {
                            if (pp_interval <= 0.07069841399788857) {
                                if (num_peaks <= 141.0) {
                                    if (pp_interval <= 0.05758022144436836) {
                                        votes[17] = 5;
                                    } else {
                                        votes[17] = 1;
                                    }
                                } else {
                                    if (pulse_interval <= 0.048476191237568855) {
                                        votes[17] = 1;
                                    } else {
                                        votes[17] = 1;
                                    }
                                }
                            } else {
                                if (systolic_amp <= 1923.079345703125) {
                                    if (pulse_interval <= 0.08645883575081825) {
                                        if (dist_std <= 58.242441177368164) {
                                            votes[17] = 5;
                                        } else {
                                            votes[17] = 4;
                                        }
                                    } else {
                                        if (systolic_area <= 1022902.84375) {
                                            votes[17] = 5;
                                        } else {
                                            votes[17] = 4;
                                        }
                                    }
                                } else {
                                    if (pp_interval <= 0.0943663939833641) {
                                        votes[17] = 3;
                                    } else {
                                        votes[17] = 1;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (dist_median <= 0.015872728545218706) {
                        votes[17] = 4;
                    } else {
                        votes[17] = 4;
                    }
                }
            } else {
                if (rr_std <= 22.68282699584961) {
                    if (diastolic_area <= -10360.52001953125) {
                        if (diff_median <= 2.5389775037765503) {
                            votes[17] = 1;
                        } else {
                            if (rr_std <= 14.308252334594727) {
                                if (systolic_area <= 26756.2138671875) {
                                    votes[17] = 5;
                                } else {
                                    votes[17] = 2;
                                }
                            } else {
                                if (systolic_amp <= 5790.764892578125) {
                                    votes[17] = 2;
                                } else {
                                    votes[17] = 2;
                                }
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.9631111025810242) {
                            if (rr_std <= 6.493090629577637) {
                                votes[17] = 3;
                            } else {
                                if (first_peak_freq <= 0.67138671875) {
                                    votes[17] = 5;
                                } else {
                                    votes[17] = 3;
                                }
                            }
                        } else {
                            votes[17] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 147.5) {
                        votes[17] = 1;
                    } else {
                        votes[17] = 1;
                    }
                }
            }
        } else {
            if (num_valleys <= 66.5) {
                if (systolic_area <= 193115.7578125) {
                    if (ss_median <= 74.5) {
                        if (rr_std <= 7.914649248123169) {
                            if (systolic_time <= 0.47474999725818634) {
                                votes[17] = 2;
                            } else {
                                votes[17] = 2;
                            }
                        } else {
                            votes[17] = 5;
                        }
                    } else {
                        votes[17] = 3;
                    }
                } else {
                    votes[17] = 5;
                }
            } else {
                if (rr_std <= 18.861632347106934) {
                    if (systolic_time <= 0.1594102531671524) {
                        votes[17] = 3;
                    } else {
                        if (diff_median <= 11.922633171081543) {
                            votes[17] = 2;
                        } else {
                            if (ss_median <= 68.5) {
                                votes[17] = 5;
                            } else {
                                votes[17] = 5;
                            }
                        }
                    }
                } else {
                    votes[17] = 4;
                }
            }
        }
    }

// Decision rules for tree 18
    if (diff_median <= 0.08531049452722073) {
        if (dist_std <= 0.015315115451812744) {
            if (first_peak_freq <= 0.30517578125) {
                if (num_peaks <= 79.0) {
                    votes[18] = 0;
                } else {
                    if (num_peaks <= 129.5) {
                        votes[18] = 0;
                    } else {
                        votes[18] = 0;
                    }
                }
            } else {
                votes[18] = 0;
            }
        } else {
            votes[18] = 2;
        }
    } else {
        if (pp_interval <= 0.24066080152988434) {
            if (pulse_interval <= 0.03443697467446327) {
                if (dist_median <= -0.20191220194101334) {
                    if (rr_std <= 8.67802906036377) {
                        votes[18] = 3;
                    } else {
                        if (systolic_time <= 0.028769074007868767) {
                            votes[18] = 3;
                        } else {
                            votes[18] = 1;
                        }
                    }
                } else {
                    if (dist_median <= 0.039708275347948074) {
                        if (pulse_interval <= 0.030429097823798656) {
                            if (fwhm <= 3.6080000400543213) {
                                if (ss_median <= 46.0) {
                                    votes[18] = 4;
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                votes[18] = 1;
                            }
                        } else {
                            if (systolic_time <= 0.03351136855781078) {
                                if (ss_median <= 58.5) {
                                    votes[18] = 4;
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                votes[18] = 4;
                            }
                        }
                    } else {
                        votes[18] = 3;
                    }
                }
            } else {
                if (systolic_area <= 1175284.875) {
                    if (systolic_time <= 0.08722750097513199) {
                        if (systolic_area <= 496075.890625) {
                            if (ss_median <= 46.75) {
                                if (num_valleys <= 72.0) {
                                    votes[18] = 3;
                                } else {
                                    if (num_valleys <= 80.5) {
                                        votes[18] = 1;
                                    } else {
                                        votes[18] = 1;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.07055612653493881) {
                                    if (systolic_time <= 0.05430755019187927) {
                                        votes[18] = 1;
                                    } else {
                                        votes[18] = 1;
                                    }
                                } else {
                                    if (rr_median <= 51.5) {
                                        if (pp_interval <= 0.07487902045249939) {
                                            votes[18] = 3;
                                        } else {
                                            votes[18] = 1;
                                        }
                                    } else {
                                        votes[18] = 1;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 138.5) {
                                if (diastolic_amp <= -1.8845221996307373) {
                                    votes[18] = 3;
                                } else {
                                    if (first_peak_freq <= 0.42724609375) {
                                        votes[18] = 5;
                                    } else {
                                        votes[18] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.502556324005127) {
                                    if (pp_interval <= 0.052590299397706985) {
                                        if (pp_interval <= 0.043018657714128494) {
                                            votes[18] = 1;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    } else {
                                        if (dist_std <= 84.83049774169922) {
                                            votes[18] = 3;
                                        } else {
                                            votes[18] = 1;
                                        }
                                    }
                                } else {
                                    votes[18] = 1;
                                }
                            }
                        }
                    } else {
                        if (diastolic_amp <= -3.741064667701721) {
                            if (diastolic_amp <= -18.216943740844727) {
                                if (diastolic_amp <= -2896.1260986328125) {
                                    votes[18] = 1;
                                } else {
                                    if (pp_interval <= 0.23301471024751663) {
                                        if (systolic_amp <= 4676.929931640625) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 4;
                                        }
                                    } else {
                                        votes[18] = 4;
                                    }
                                }
                            } else {
                                if (ss_std <= 8.597248554229736) {
                                    votes[18] = 2;
                                } else {
                                    votes[18] = 2;
                                }
                            }
                        } else {
                            if (rr_median <= 94.75) {
                                if (dist_median <= -0.13788526505231857) {
                                    if (num_peaks <= 108.5) {
                                        votes[18] = 5;
                                    } else {
                                        if (rr_std <= 11.425381183624268) {
                                            votes[18] = 3;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 70.5) {
                                        if (systolic_area <= 318878.359375) {
                                            votes[18] = 3;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 49.25) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[18] = 1;
                            }
                        }
                    }
                } else {
                    if (pp_interval <= 0.07050442323088646) {
                        if (dist_std <= 51.054962158203125) {
                            votes[18] = 3;
                        } else {
                            if (dist_std <= 119.90011596679688) {
                                if (systolic_time <= 0.04758228920400143) {
                                    votes[18] = 1;
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                votes[18] = 5;
                            }
                        }
                    } else {
                        if (ss_median <= 51.25) {
                            votes[18] = 3;
                        } else {
                            if (ss_std <= 9.676770210266113) {
                                votes[18] = 4;
                            } else {
                                votes[18] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (pp_interval <= 0.9811428785324097) {
                if (dist_std <= 160.27716064453125) {
                    if (diastolic_time <= 0.7599999904632568) {
                        if (diastolic_area <= -25764.9775390625) {
                            if (second_peak_freq <= 0.91552734375) {
                                votes[18] = 2;
                            } else {
                                votes[18] = 2;
                            }
                        } else {
                            if (num_valleys <= 57.5) {
                                if (first_peak_freq <= 0.79345703125) {
                                    votes[18] = 2;
                                } else {
                                    votes[18] = 2;
                                }
                            } else {
                                if (diastolic_amp <= -1649.4222412109375) {
                                    if (rr_std <= 14.103809833526611) {
                                        votes[18] = 5;
                                    } else {
                                        if (pulse_interval <= 0.3258095383644104) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 2;
                                        }
                                    }
                                } else {
                                    if (dist_std <= 61.153635025024414) {
                                        if (num_valleys <= 72.0) {
                                            votes[18] = 3;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.3806602954864502) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 22.111138343811035) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 9.809761047363281) {
                        if (diff_median <= 18.279601573944092) {
                            if (second_peak_freq <= 0.732421875) {
                                if (diff_median <= 9.436315298080444) {
                                    votes[18] = 2;
                                } else {
                                    votes[18] = 2;
                                }
                            } else {
                                votes[18] = 2;
                            }
                        } else {
                            votes[18] = 2;
                        }
                    } else {
                        votes[18] = 5;
                    }
                }
            } else {
                if (pulse_interval <= 1.0020000040531158) {
                    votes[18] = 1;
                } else {
                    votes[18] = 1;
                }
            }
        }
    }

// Decision rules for tree 19
    if (diff_median <= 0.08578255493193865) {
        if (num_peaks <= 72.5) {
            votes[19] = 2;
        } else {
            if (systolic_area <= 59.41935348510742) {
                if (fwhm <= 7.851999998092651) {
                    if (diff_median <= 0.004988220054656267) {
                        votes[19] = 0;
                    } else {
                        votes[19] = 0;
                    }
                } else {
                    votes[19] = 0;
                }
            } else {
                votes[19] = 0;
            }
        }
    } else {
        if (dist_std <= 184.41896057128906) {
            if (systolic_time <= 0.3187199980020523) {
                if (rr_std <= 9.525873184204102) {
                    if (ss_median <= 48.75) {
                        if (dist_std <= 71.89266204833984) {
                            if (pulse_interval <= 0.05997886694967747) {
                                votes[19] = 1;
                            } else {
                                if (num_valleys <= 79.5) {
                                    votes[19] = 3;
                                } else {
                                    votes[19] = 3;
                                }
                            }
                        } else {
                            if (systolic_area <= 495443.921875) {
                                if (pp_interval <= 0.08826716616749763) {
                                    if (diff_median <= 19.7908034324646) {
                                        votes[19] = 1;
                                    } else {
                                        votes[19] = 1;
                                    }
                                } else {
                                    if (dist_std <= 158.33113861083984) {
                                        if (diff_median <= 7.5142576694488525) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        votes[19] = 1;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.05261286906898022) {
                                    votes[19] = 4;
                                } else {
                                    if (pp_interval <= 0.08055952563881874) {
                                        votes[19] = 5;
                                    } else {
                                        votes[19] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (dist_median <= 0.081184022128582) {
                            if (systolic_time <= 0.06580788642168045) {
                                if (second_peak_freq <= 0.67138671875) {
                                    votes[19] = 1;
                                } else {
                                    if (dist_std <= 91.02520370483398) {
                                        votes[19] = 3;
                                    } else {
                                        votes[19] = 1;
                                    }
                                }
                            } else {
                                if (ss_std <= 11.016857624053955) {
                                    if (diff_median <= 12.112629413604736) {
                                        if (dist_std <= 104.9828872680664) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 3.0571969747543335) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    }
                                } else {
                                    if (pp_interval <= 0.15574990957975388) {
                                        if (ss_median <= 58.0) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        votes[19] = 5;
                                    }
                                }
                            }
                        } else {
                            if (pp_interval <= 0.053154509514570236) {
                                votes[19] = 3;
                            } else {
                                votes[19] = 3;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 1154539.375) {
                        if (systolic_area <= 46610.884765625) {
                            if (rr_std <= 39.38268852233887) {
                                if (rr_median <= 87.5) {
                                    if (first_peak_freq <= 0.732421875) {
                                        if (dist_std <= 60.35353088378906) {
                                            votes[19] = 4;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    } else {
                                        votes[19] = 4;
                                    }
                                } else {
                                    votes[19] = 4;
                                }
                            } else {
                                votes[19] = 4;
                            }
                        } else {
                            if (pulse_interval <= 0.08757825940847397) {
                                if (num_peaks <= 146.5) {
                                    if (first_peak_freq <= 0.30517578125) {
                                        votes[19] = 4;
                                    } else {
                                        if (num_valleys <= 70.0) {
                                            votes[19] = 4;
                                        } else {
                                            votes[19] = 1;
                                        }
                                    }
                                } else {
                                    if (dist_median <= -0.42316801846027374) {
                                        votes[19] = 1;
                                    } else {
                                        votes[19] = 1;
                                    }
                                }
                            } else {
                                if (dist_std <= 51.281240463256836) {
                                    if (rr_std <= 13.193036079406738) {
                                        if (dist_median <= -0.07832872495055199) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        if (dist_std <= 28.585166931152344) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_area <= -11.235929012298584) {
                                        votes[19] = 4;
                                    } else {
                                        if (dist_median <= 0.5937372148036957) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 30.009788513183594) {
                            if (diff_median <= 17.532899856567383) {
                                if (rr_median <= 63.5) {
                                    if (dist_median <= 0.016980218701064587) {
                                        if (ss_median <= 48.25) {
                                            votes[19] = 4;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    } else {
                                        votes[19] = 4;
                                    }
                                } else {
                                    votes[19] = 3;
                                }
                            } else {
                                votes[19] = 3;
                            }
                        } else {
                            votes[19] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 22.415552139282227) {
                    if (pp_interval <= 0.9832857251167297) {
                        if (diff_median <= 14.851454734802246) {
                            if (systolic_area <= 117654.77734375) {
                                if (dist_std <= 49.17379951477051) {
                                    if (diastolic_time <= 0.42571429908275604) {
                                        votes[19] = 3;
                                    } else {
                                        if (fwhm <= 7.383999824523926) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 73.75) {
                                        if (systolic_time <= 0.5230769217014313) {
                                            votes[19] = 2;
                                        } else {
                                            votes[19] = 2;
                                        }
                                    } else {
                                        votes[19] = 5;
                                    }
                                }
                            } else {
                                votes[19] = 3;
                            }
                        } else {
                            if (dist_std <= 66.41777420043945) {
                                votes[19] = 2;
                            } else {
                                votes[19] = 5;
                            }
                        }
                    } else {
                        votes[19] = 1;
                    }
                } else {
                    if (pp_interval <= 0.49196191132068634) {
                        votes[19] = 1;
                    } else {
                        votes[19] = 1;
                    }
                }
            }
        } else {
            if (systolic_area <= 176205.3984375) {
                if (ss_median <= 69.5) {
                    if (pp_interval <= 0.31650835275650024) {
                        votes[19] = 2;
                    } else {
                        votes[19] = 3;
                    }
                } else {
                    votes[19] = 2;
                }
            } else {
                if (ss_std <= 7.804567337036133) {
                    votes[19] = 5;
                } else {
                    if (rr_std <= 8.991838455200195) {
                        votes[19] = 3;
                    } else {
                        if (rr_median <= 49.75) {
                            votes[19] = 3;
                        } else {
                            votes[19] = 5;
                        }
                    }
                }
            }
        }
    }

// Decision rules for tree 20
    if (dist_std <= 0.021426894702017307) {
        if (rr_std <= 111.71968460083008) {
            if (num_valleys <= 41.5) {
                votes[20] = 0;
            } else {
                votes[20] = 0;
            }
        } else {
            if (pp_interval <= 0.7706666588783264) {
                votes[20] = 2;
            } else {
                votes[20] = 0;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (pulse_interval <= 0.9210000038146973) {
                if (rr_std <= 9.598783493041992) {
                    if (diff_median <= 7.567258596420288) {
                        if (diastolic_time <= 0.3703809529542923) {
                            if (systolic_time <= 0.07880432158708572) {
                                if (pulse_interval <= 0.035870105028152466) {
                                    votes[20] = 4;
                                } else {
                                    if (rr_median <= 45.0) {
                                        votes[20] = 1;
                                    } else {
                                        votes[20] = 3;
                                    }
                                }
                            } else {
                                if (num_valleys <= 60.5) {
                                    votes[20] = 3;
                                } else {
                                    if (rr_std <= 4.7533862590789795) {
                                        if (num_peaks <= 130.0) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 1;
                                        }
                                    } else {
                                        if (fwhm <= 8.016000032424927) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[20] = 2;
                        }
                    } else {
                        if (rr_median <= 89.25) {
                            if (rr_median <= 47.5) {
                                if (pp_interval <= 0.0872112326323986) {
                                    if (diff_median <= 28.280805587768555) {
                                        if (rr_std <= 6.3789215087890625) {
                                            votes[20] = 3;
                                        } else {
                                            votes[20] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 7.412064552307129) {
                                            votes[20] = 1;
                                        } else {
                                            votes[20] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.11241904646158218) {
                                        votes[20] = 3;
                                    } else {
                                        if (rr_median <= 43.5) {
                                            votes[20] = 3;
                                        } else {
                                            votes[20] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (second_peak_freq <= 0.54931640625) {
                                    votes[20] = 4;
                                } else {
                                    if (ss_median <= 48.75) {
                                        if (rr_std <= 8.42703628540039) {
                                            votes[20] = 3;
                                        } else {
                                            votes[20] = 5;
                                        }
                                    } else {
                                        if (ss_std <= 8.488479137420654) {
                                            votes[20] = 3;
                                        } else {
                                            votes[20] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[20] = 1;
                        }
                    }
                } else {
                    if (pulse_interval <= 0.10057530924677849) {
                        if (systolic_time <= 0.0347394235432148) {
                            if (systolic_time <= 0.03318944573402405) {
                                if (num_valleys <= 83.0) {
                                    if (rr_std <= 12.762332916259766) {
                                        votes[20] = 3;
                                    } else {
                                        votes[20] = 4;
                                    }
                                } else {
                                    votes[20] = 1;
                                }
                            } else {
                                if (num_valleys <= 80.5) {
                                    votes[20] = 4;
                                } else {
                                    votes[20] = 4;
                                }
                            }
                        } else {
                            if (systolic_area <= 1347120.8125) {
                                if (pp_interval <= 0.08722750097513199) {
                                    if (systolic_area <= 581381.59375) {
                                        if (num_valleys <= 69.0) {
                                            votes[20] = 4;
                                        } else {
                                            votes[20] = 1;
                                        }
                                    } else {
                                        if (rr_std <= 13.336527347564697) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 1;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 54.25) {
                                        votes[20] = 3;
                                    } else {
                                        votes[20] = 1;
                                    }
                                }
                            } else {
                                if (first_peak_freq <= 0.54931640625) {
                                    if (ss_median <= 50.25) {
                                        votes[20] = 5;
                                    } else {
                                        if (dist_median <= -0.32269787788391113) {
                                            votes[20] = 4;
                                        } else {
                                            votes[20] = 4;
                                        }
                                    }
                                } else {
                                    votes[20] = 1;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.016500000841915607) {
                            if (rr_std <= 13.879098892211914) {
                                if (rr_std <= 11.008593082427979) {
                                    if (fwhm <= 8.092000007629395) {
                                        votes[20] = 1;
                                    } else {
                                        votes[20] = 5;
                                    }
                                } else {
                                    if (dist_median <= 0.012441604398190975) {
                                        if (fwhm <= 7.988000154495239) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 3;
                                        }
                                    } else {
                                        votes[20] = 3;
                                    }
                                }
                            } else {
                                if (num_valleys <= 75.5) {
                                    if (dist_median <= -0.19481536746025085) {
                                        votes[20] = 5;
                                    } else {
                                        votes[20] = 5;
                                    }
                                } else {
                                    votes[20] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.7338181734085083) {
                                if (pulse_interval <= 0.33339130878448486) {
                                    if (num_valleys <= 80.5) {
                                        if (diff_median <= 2.935376763343811) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 4;
                                        }
                                    } else {
                                        votes[20] = 4;
                                    }
                                } else {
                                    if (rr_std <= 21.608168601989746) {
                                        if (first_peak_freq <= 0.42724609375) {
                                            votes[20] = 2;
                                        } else {
                                            votes[20] = 2;
                                        }
                                    } else {
                                        votes[20] = 1;
                                    }
                                }
                            } else {
                                if (fwhm <= 7.776000022888184) {
                                    votes[20] = 1;
                                } else {
                                    votes[20] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (systolic_area <= 13334.47119140625) {
                    votes[20] = 1;
                } else {
                    votes[20] = 1;
                }
            }
        } else {
            if (systolic_time <= 0.1437000036239624) {
                if (diff_median <= 11.946111679077148) {
                    votes[20] = 3;
                } else {
                    votes[20] = 3;
                }
            } else {
                if (num_peaks <= 130.0) {
                    if (rr_median <= 73.75) {
                        if (diastolic_amp <= -28.891292572021484) {
                            votes[20] = 2;
                        } else {
                            if (dist_median <= 0.37429025769233704) {
                                if (diff_median <= 14.437601566314697) {
                                    if (ss_median <= 69.5) {
                                        if (fwhm <= 8.019999980926514) {
                                            votes[20] = 2;
                                        } else {
                                            votes[20] = 2;
                                        }
                                    } else {
                                        votes[20] = 2;
                                    }
                                } else {
                                    votes[20] = 2;
                                }
                            } else {
                                votes[20] = 2;
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.21211696416139603) {
                            votes[20] = 5;
                        } else {
                            votes[20] = 3;
                        }
                    }
                } else {
                    if (fwhm <= 7.640000104904175) {
                        votes[20] = 4;
                    } else {
                        votes[20] = 5;
                    }
                }
            }
        }
    }

// Decision rules for tree 21
    if (diff_median <= 0.06967576686292887) {
        if (dist_std <= 0.01825906615704298) {
            if (rr_std <= 2.496503323316574) {
                if (dist_std <= 0.008146290201693773) {
                    votes[21] = 0;
                } else {
                    votes[21] = 2;
                }
            } else {
                if (dist_median <= -0.00024222406500484794) {
                    if (ss_std <= 96.32986450195312) {
                        votes[21] = 0;
                    } else {
                        votes[21] = 0;
                    }
                } else {
                    votes[21] = 0;
                }
            }
        } else {
            votes[21] = 1;
        }
    } else {
        if (dist_std <= 182.60868072509766) {
            if (rr_std <= 10.33591890335083) {
                if (ss_median <= 71.25) {
                    if (systolic_time <= 0.21589189767837524) {
                        if (dist_std <= 72.40703582763672) {
                            if (ss_std <= 11.032469749450684) {
                                if (fwhm <= 7.072000026702881) {
                                    votes[21] = 4;
                                } else {
                                    if (num_peaks <= 145.5) {
                                        if (ss_std <= 6.16783332824707) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    } else {
                                        if (num_valleys <= 77.5) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 6.030330419540405) {
                                    votes[21] = 1;
                                } else {
                                    if (systolic_area <= 754668.0625) {
                                        votes[21] = 5;
                                    } else {
                                        votes[21] = 4;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 379996.90625) {
                                if (pp_interval <= 0.08903317898511887) {
                                    if (systolic_area <= 274379.578125) {
                                        votes[21] = 1;
                                    } else {
                                        votes[21] = 1;
                                    }
                                } else {
                                    if (rr_std <= 3.41420841217041) {
                                        votes[21] = 1;
                                    } else {
                                        if (num_valleys <= 76.0) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (pp_interval <= 0.06622950732707977) {
                                    if (pp_interval <= 0.052284713834524155) {
                                        votes[21] = 3;
                                    } else {
                                        if (dist_std <= 101.42794036865234) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    }
                                } else {
                                    if (pp_interval <= 0.09265188872814178) {
                                        if (rr_median <= 58.0) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 51.5) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.3785809427499771) {
                            if (ss_std <= 1.1688682436943054) {
                                votes[21] = 3;
                            } else {
                                if (rr_median <= 47.75) {
                                    votes[21] = 3;
                                } else {
                                    if (systolic_area <= 129369.125) {
                                        votes[21] = 5;
                                    } else {
                                        votes[21] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[21] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 112.0) {
                        votes[21] = 2;
                    } else {
                        votes[21] = 3;
                    }
                }
            } else {
                if (pulse_interval <= 0.3334466367959976) {
                    if (dist_median <= -0.24303410947322845) {
                        if (systolic_time <= 0.07160234078764915) {
                            if (pp_interval <= 0.06492513790726662) {
                                if (rr_median <= 55.5) {
                                    if (fwhm <= 8.059999942779541) {
                                        votes[21] = 1;
                                    } else {
                                        votes[21] = 1;
                                    }
                                } else {
                                    votes[21] = 1;
                                }
                            } else {
                                votes[21] = 1;
                            }
                        } else {
                            if (pulse_interval <= 0.11156651005148888) {
                                if (dist_std <= 83.42708587646484) {
                                    if (dist_median <= -0.4019313305616379) {
                                        if (ss_std <= 11.495730876922607) {
                                            votes[21] = 4;
                                        } else {
                                            votes[21] = 4;
                                        }
                                    } else {
                                        if (systolic_area <= 952769.03125) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 4;
                                        }
                                    }
                                } else {
                                    votes[21] = 5;
                                }
                            } else {
                                if (rr_std <= 12.46487283706665) {
                                    votes[21] = 5;
                                } else {
                                    if (num_peaks <= 111.5) {
                                        votes[21] = 5;
                                    } else {
                                        if (systolic_time <= 0.16633333265781403) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.0347394235432148) {
                            if (fwhm <= 7.880000114440918) {
                                if (diff_median <= 3.669283390045166) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 1;
                                }
                            } else {
                                if (ss_std <= 9.580780029296875) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.7338181734085083) {
                                if (systolic_area <= 52980.42578125) {
                                    if (num_peaks <= 138.5) {
                                        if (fwhm <= 6.424000024795532) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 4;
                                        }
                                    } else {
                                        votes[21] = 4;
                                    }
                                } else {
                                    if (diff_median <= 7.72661566734314) {
                                        if (dist_std <= 86.95815658569336) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    } else {
                                        if (dist_median <= -0.012953824363648891) {
                                            votes[21] = 4;
                                        } else {
                                            votes[21] = 1;
                                        }
                                    }
                                }
                            } else {
                                votes[21] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 32753.6533203125) {
                        if (ss_median <= 64.25) {
                            if (rr_std <= 22.68282699584961) {
                                if (systolic_amp <= 3683.73876953125) {
                                    votes[21] = 1;
                                } else {
                                    if (ss_std <= 15.199066162109375) {
                                        if (fwhm <= 6.9679999351501465) {
                                            votes[21] = 2;
                                        } else {
                                            votes[21] = 2;
                                        }
                                    } else {
                                        votes[21] = 2;
                                    }
                                }
                            } else {
                                votes[21] = 1;
                            }
                        } else {
                            votes[21] = 5;
                        }
                    } else {
                        if (diff_median <= 12.01397705078125) {
                            votes[21] = 3;
                        } else {
                            votes[21] = 5;
                        }
                    }
                }
            }
        } else {
            if (pulse_interval <= 0.17389371991157532) {
                if (ss_std <= 10.441540241241455) {
                    if (rr_median <= 48.5) {
                        votes[21] = 1;
                    } else {
                        votes[21] = 3;
                    }
                } else {
                    votes[21] = 5;
                }
            } else {
                if (rr_median <= 69.5) {
                    if (dist_median <= -0.3607042282819748) {
                        votes[21] = 5;
                    } else {
                        if (fwhm <= 8.151999950408936) {
                            votes[21] = 2;
                        } else {
                            votes[21] = 2;
                        }
                    }
                } else {
                    if (dist_std <= 234.84213256835938) {
                        votes[21] = 2;
                    } else {
                        votes[21] = 2;
                    }
                }
            }
        }
    }

// Decision rules for tree 22
    if (dist_std <= 0.020726200193166733) {
        if (rr_std <= 2.246503323316574) {
            if (systolic_area <= 6.021878957748413) {
                votes[22] = 0;
            } else {
                votes[22] = 0;
            }
        } else {
            if (rr_std <= 105.61270523071289) {
                votes[22] = 0;
            } else {
                votes[22] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.24066080152988434) {
            if (rr_std <= 9.382537364959717) {
                if (rr_std <= 0.6211358308792114) {
                    if (diastolic_time <= 0.016800000332295895) {
                        if (diff_median <= 6.176685810089111) {
                            votes[22] = 4;
                        } else {
                            votes[22] = 3;
                        }
                    } else {
                        votes[22] = 2;
                    }
                } else {
                    if (ss_std <= 12.635339736938477) {
                        if (dist_std <= 181.78992462158203) {
                            if (first_peak_freq <= 0.30517578125) {
                                if (dist_std <= 114.69548034667969) {
                                    if (diff_median <= 15.312530517578125) {
                                        if (dist_median <= -0.1717134267091751) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    } else {
                                        if (fwhm <= 8.068000078201294) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    }
                                } else {
                                    if (ss_std <= 7.381972312927246) {
                                        votes[22] = 1;
                                    } else {
                                        votes[22] = 1;
                                    }
                                }
                            } else {
                                if (ss_std <= 8.579493522644043) {
                                    if (ss_median <= 48.75) {
                                        if (num_peaks <= 140.5) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    } else {
                                        if (fwhm <= 7.936000108718872) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 49.5) {
                                        if (first_peak_freq <= 0.54931640625) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 1;
                                        }
                                    } else {
                                        if (pp_interval <= 0.15903139859437943) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (pp_interval <= 0.16574261337518692) {
                                votes[22] = 5;
                            } else {
                                if (systolic_area <= 214117.859375) {
                                    votes[22] = 5;
                                } else {
                                    votes[22] = 5;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 142.0) {
                            if (systolic_area <= 353764.765625) {
                                if (diff_median <= 10.064242362976074) {
                                    votes[22] = 1;
                                } else {
                                    votes[22] = 1;
                                }
                            } else {
                                votes[22] = 3;
                            }
                        } else {
                            votes[22] = 1;
                        }
                    }
                }
            } else {
                if (dist_std <= 43.844791412353516) {
                    if (rr_std <= 10.520447731018066) {
                        votes[22] = 3;
                    } else {
                        if (num_valleys <= 84.5) {
                            if (systolic_area <= 412708.15625) {
                                if (diastolic_time <= 0.6190209984779358) {
                                    if (num_peaks <= 130.0) {
                                        votes[22] = 4;
                                    } else {
                                        votes[22] = 4;
                                    }
                                } else {
                                    votes[22] = 4;
                                }
                            } else {
                                if (systolic_time <= 0.03532412275671959) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 4;
                                }
                            }
                        } else {
                            votes[22] = 3;
                        }
                    }
                } else {
                    if (systolic_time <= 0.08502094075083733) {
                        if (fwhm <= 8.17199993133545) {
                            if (second_peak_freq <= 0.79345703125) {
                                votes[22] = 5;
                            } else {
                                if (dist_median <= -0.7519696056842804) {
                                    votes[22] = 1;
                                } else {
                                    if (rr_std <= 18.312231063842773) {
                                        votes[22] = 1;
                                    } else {
                                        votes[22] = 1;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 14.265233039855957) {
                                if (dist_median <= -0.4023747146129608) {
                                    votes[22] = 1;
                                } else {
                                    if (systolic_time <= 0.0347394235432148) {
                                        if (pulse_interval <= 0.032236265018582344) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 4;
                                        }
                                    } else {
                                        if (rr_median <= 53.5) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (pulse_interval <= 0.07112186029553413) {
                                    if (rr_median <= 51.5) {
                                        votes[22] = 1;
                                    } else {
                                        if (rr_median <= 55.75) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 1;
                                        }
                                    }
                                } else {
                                    votes[22] = 4;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 51.25) {
                            if (ss_std <= 15.533271312713623) {
                                if (systolic_area <= 285649.71875) {
                                    if (num_valleys <= 69.5) {
                                        if (rr_std <= 11.887516975402832) {
                                            votes[22] = 1;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    } else {
                                        if (rr_median <= 49.75) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    }
                                } else {
                                    if (pp_interval <= 0.10611111298203468) {
                                        if (pulse_interval <= 0.09455038607120514) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    } else {
                                        votes[22] = 5;
                                    }
                                }
                            } else {
                                votes[22] = 4;
                            }
                        } else {
                            if (fwhm <= 8.116000175476074) {
                                if (fwhm <= 7.46399998664856) {
                                    votes[22] = 4;
                                } else {
                                    if (systolic_area <= 157621.234375) {
                                        votes[22] = 1;
                                    } else {
                                        votes[22] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= 1105828.625) {
                                    if (dist_std <= 84.91184616088867) {
                                        votes[22] = 5;
                                    } else {
                                        votes[22] = 1;
                                    }
                                } else {
                                    if (pp_interval <= 0.08927272632718086) {
                                        votes[22] = 4;
                                    } else {
                                        votes[22] = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (pp_interval <= 0.9811428785324097) {
                if (diastolic_time <= 0.9009999930858612) {
                    if (ss_median <= 66.25) {
                        if (diastolic_area <= -13637.087890625) {
                            if (rr_median <= 54.75) {
                                if (diastolic_amp <= -2903.721923828125) {
                                    votes[22] = 2;
                                } else {
                                    if (dist_median <= -0.006061621941626072) {
                                        votes[22] = 2;
                                    } else {
                                        votes[22] = 2;
                                    }
                                }
                            } else {
                                if (ss_median <= 51.75) {
                                    if (pp_interval <= 0.40970759093761444) {
                                        votes[22] = 4;
                                    } else {
                                        votes[22] = 1;
                                    }
                                } else {
                                    if (rr_std <= 15.410396575927734) {
                                        votes[22] = 5;
                                    } else {
                                        votes[22] = 2;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 64.79132461547852) {
                                if (diff_median <= 4.337820768356323) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 3;
                                }
                            } else {
                                if (ss_std <= 2.295127272605896) {
                                    votes[22] = 3;
                                } else {
                                    if (diff_median <= 8.334684610366821) {
                                        votes[22] = 5;
                                    } else {
                                        votes[22] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_amp <= -806.4077014923096) {
                            votes[22] = 5;
                        } else {
                            if (rr_std <= 12.02743911743164) {
                                if (num_peaks <= 121.5) {
                                    if (diff_median <= 4.585268020629883) {
                                        if (diff_median <= 3.9372342824935913) {
                                            votes[22] = 2;
                                        } else {
                                            votes[22] = 2;
                                        }
                                    } else {
                                        votes[22] = 2;
                                    }
                                } else {
                                    if (systolic_area <= 98864.640625) {
                                        votes[22] = 2;
                                    } else {
                                        votes[22] = 3;
                                    }
                                }
                            } else {
                                votes[22] = 3;
                            }
                        }
                    }
                } else {
                    votes[22] = 1;
                }
            } else {
                if (systolic_area <= 14835.91162109375) {
                    votes[22] = 1;
                } else {
                    votes[22] = 1;
                }
            }
        }
    }

// Decision rules for tree 23
    if (diastolic_area <= 1.0362745523452759) {
        if (ss_median <= 66.5) {
            if (pp_interval <= 0.3475731164216995) {
                if (diff_median <= 15.285072326660156) {
                    if (num_peaks <= 137.5) {
                        if (rr_std <= 7.407480716705322) {
                            if (diastolic_amp <= -2.2764068841934204) {
                                votes[23] = 1;
                            } else {
                                if (ss_std <= 1.374157965183258) {
                                    votes[23] = 3;
                                } else {
                                    if (ss_median <= 49.25) {
                                        if (diff_median <= 7.6722869873046875) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 9.145910263061523) {
                                            votes[23] = 1;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 121.5) {
                                if (ss_std <= 9.393086910247803) {
                                    votes[23] = 5;
                                } else {
                                    if (dist_median <= -0.35088441520929337) {
                                        votes[23] = 5;
                                    } else {
                                        votes[23] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.00800000037997961) {
                                    if (rr_median <= 44.5) {
                                        if (systolic_area <= 288450.375) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    } else {
                                        if (ss_std <= 12.228944301605225) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_amp <= -2797.2694091796875) {
                                        votes[23] = 1;
                                    } else {
                                        if (dist_median <= -0.008359624305739999) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 1154539.375) {
                            if (dist_median <= -0.17160730808973312) {
                                if (systolic_time <= 0.08782901614904404) {
                                    if (pulse_interval <= 0.05943283438682556) {
                                        votes[23] = 1;
                                    } else {
                                        if (systolic_area <= 510077.234375) {
                                            votes[23] = 1;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 82.5) {
                                        if (diff_median <= 7.599649429321289) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    } else {
                                        votes[23] = 4;
                                    }
                                }
                            } else {
                                if (systolic_area <= 136716.6328125) {
                                    if (diastolic_amp <= -2579.834716796875) {
                                        if (systolic_area <= 35403.384765625) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 56.25) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    }
                                } else {
                                    if (pulse_interval <= 0.06228663772344589) {
                                        if (second_peak_freq <= 0.79345703125) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 1;
                                        }
                                    } else {
                                        if (ss_std <= 12.319832801818848) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (ss_std <= 8.421903133392334) {
                                votes[23] = 3;
                            } else {
                                if (rr_median <= 46.5) {
                                    votes[23] = 4;
                                } else {
                                    if (diff_median <= 7.579447984695435) {
                                        if (pp_interval <= 0.0334590170532465) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    } else {
                                        votes[23] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 65.4709701538086) {
                        if (fwhm <= 7.54800009727478) {
                            votes[23] = 1;
                        } else {
                            if (ss_median <= 54.25) {
                                if (fwhm <= 8.14799976348877) {
                                    votes[23] = 3;
                                } else {
                                    if (dist_std <= 50.63764953613281) {
                                        votes[23] = 3;
                                    } else {
                                        if (num_peaks <= 143.0) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 10.467907905578613) {
                                    votes[23] = 3;
                                } else {
                                    votes[23] = 4;
                                }
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.1867087483406067) {
                            if (ss_std <= 8.747654438018799) {
                                if (rr_std <= 12.625026226043701) {
                                    if (dist_median <= 1.1773319989442825) {
                                        if (dist_median <= -0.954126238822937) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        votes[23] = 1;
                                    }
                                } else {
                                    votes[23] = 5;
                                }
                            } else {
                                if (num_valleys <= 72.5) {
                                    if (num_peaks <= 144.0) {
                                        votes[23] = 3;
                                    } else {
                                        votes[23] = 1;
                                    }
                                } else {
                                    if (second_peak_freq <= 0.732421875) {
                                        votes[23] = 1;
                                    } else {
                                        if (num_valleys <= 77.5) {
                                            votes[23] = 1;
                                        } else {
                                            votes[23] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (second_peak_freq <= 1.15966796875) {
                                votes[23] = 5;
                            } else {
                                votes[23] = 5;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.887499988079071) {
                    if (diastolic_time <= 0.18840846046805382) {
                        if (pp_interval <= 0.9357777833938599) {
                            if (diff_median <= 15.61120080947876) {
                                if (num_valleys <= 71.5) {
                                    votes[23] = 4;
                                } else {
                                    votes[23] = 3;
                                }
                            } else {
                                votes[23] = 5;
                            }
                        } else {
                            votes[23] = 1;
                        }
                    } else {
                        if (dist_std <= 48.26797676086426) {
                            if (diastolic_time <= 0.47192858159542084) {
                                votes[23] = 2;
                            } else {
                                votes[23] = 5;
                            }
                        } else {
                            if (dist_median <= -0.006229056976735592) {
                                votes[23] = 2;
                            } else {
                                votes[23] = 2;
                            }
                        }
                    }
                } else {
                    votes[23] = 1;
                }
            }
        } else {
            if (dist_std <= 113.69047546386719) {
                if (diff_median <= 0.16734469402581453) {
                    votes[23] = 0;
                } else {
                    if (diastolic_time <= 0.02500000037252903) {
                        if (diff_median <= 7.55595588684082) {
                            votes[23] = 3;
                        } else {
                            votes[23] = 3;
                        }
                    } else {
                        if (diff_median <= 3.652631402015686) {
                            votes[23] = 4;
                        } else {
                            votes[23] = 4;
                        }
                    }
                }
            } else {
                if (systolic_area <= 176205.3984375) {
                    if (ss_std <= 0.456646203994751) {
                        votes[23] = 2;
                    } else {
                        if (pulse_interval <= 0.47474999725818634) {
                            if (num_peaks <= 120.5) {
                                votes[23] = 2;
                            } else {
                                if (num_valleys <= 62.5) {
                                    votes[23] = 2;
                                } else {
                                    if (ss_median <= 67.5) {
                                        votes[23] = 2;
                                    } else {
                                        votes[23] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[23] = 2;
                        }
                    }
                } else {
                    if (second_peak_freq <= 0.79345703125) {
                        votes[23] = 3;
                    } else {
                        votes[23] = 5;
                    }
                }
            }
        }
    } else {
        if (systolic_amp <= 0.5080789029598236) {
            if (dist_std <= 0.009415179025381804) {
                votes[23] = 0;
            } else {
                votes[23] = 0;
            }
        } else {
            if (diff_median <= 0.0041704068426042795) {
                votes[23] = 2;
            } else {
                if (systolic_area <= 8.530628204345703) {
                    votes[23] = 0;
                } else {
                    votes[23] = 0;
                }
            }
        }
    }

// Decision rules for tree 24
    if (pulse_interval <= 0.2829153537750244) {
        if (systolic_time <= 0.08813483268022537) {
            if (systolic_area <= 1541972.4375) {
                if (diastolic_amp <= -13.139641761779785) {
                    votes[24] = 4;
                } else {
                    if (rr_std <= 10.378312587738037) {
                        if (systolic_area <= 536910.09375) {
                            if (num_peaks <= 139.5) {
                                if (ss_median <= 47.25) {
                                    votes[24] = 4;
                                } else {
                                    if (dist_median <= -0.2869223281741142) {
                                        votes[24] = 1;
                                    } else {
                                        votes[24] = 3;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.07898395881056786) {
                                    votes[24] = 1;
                                } else {
                                    votes[24] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 45.5) {
                                votes[24] = 5;
                            } else {
                                if (systolic_area <= 619247.375) {
                                    votes[24] = 3;
                                } else {
                                    if (rr_std <= 6.808859348297119) {
                                        votes[24] = 3;
                                    } else {
                                        if (systolic_area <= 1224828.375) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 71.5) {
                            if (rr_std <= 13.54630994796753) {
                                votes[24] = 1;
                            } else {
                                votes[24] = 4;
                            }
                        } else {
                            if (first_peak_freq <= 0.54931640625) {
                                if (num_peaks <= 146.0) {
                                    if (rr_std <= 12.517114162445068) {
                                        votes[24] = 3;
                                    } else {
                                        if (num_peaks <= 137.5) {
                                            votes[24] = 1;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 12.818482398986816) {
                                        votes[24] = 1;
                                    } else {
                                        votes[24] = 1;
                                    }
                                }
                            } else {
                                if (dist_std <= 89.50127029418945) {
                                    votes[24] = 1;
                                } else {
                                    votes[24] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.446590900421143) {
                    if (dist_std <= 106.90311050415039) {
                        votes[24] = 3;
                    } else {
                        votes[24] = 5;
                    }
                } else {
                    if (ss_median <= 61.25) {
                        if (dist_median <= -0.5316585302352905) {
                            votes[24] = 4;
                        } else {
                            if (dist_std <= 38.80862617492676) {
                                votes[24] = 4;
                            } else {
                                votes[24] = 4;
                            }
                        }
                    } else {
                        votes[24] = 3;
                    }
                }
            }
        } else {
            if (systolic_area <= 46610.884765625) {
                if (systolic_amp <= 2914.81298828125) {
                    votes[24] = 0;
                } else {
                    if (diastolic_amp <= -2828.235107421875) {
                        votes[24] = 1;
                    } else {
                        if (ss_std <= 13.06853723526001) {
                            votes[24] = 4;
                        } else {
                            if (ss_median <= 46.5) {
                                votes[24] = 4;
                            } else {
                                votes[24] = 4;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_amp <= -3.6267582178115845) {
                    if (rr_median <= 64.5) {
                        if (systolic_area <= 202670.8203125) {
                            votes[24] = 1;
                        } else {
                            votes[24] = 4;
                        }
                    } else {
                        if (diastolic_amp <= -28.891292572021484) {
                            votes[24] = 2;
                        } else {
                            votes[24] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 1022902.84375) {
                        if (dist_median <= -0.13318407535552979) {
                            if (rr_std <= 11.313362121582031) {
                                if (first_peak_freq <= 0.18310546875) {
                                    votes[24] = 2;
                                } else {
                                    if (rr_median <= 94.75) {
                                        if (diff_median <= 19.57131004333496) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 3;
                                        }
                                    } else {
                                        votes[24] = 1;
                                    }
                                }
                            } else {
                                if (num_valleys <= 57.5) {
                                    votes[24] = 3;
                                } else {
                                    if (diff_median <= 7.235367298126221) {
                                        votes[24] = 5;
                                    } else {
                                        if (systolic_time <= 0.1074666678905487) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 61.5) {
                                votes[24] = 3;
                            } else {
                                if (num_peaks <= 142.5) {
                                    if (ss_std <= 3.0300265550613403) {
                                        votes[24] = 3;
                                    } else {
                                        if (systolic_area <= 356688.984375) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_std <= 11.785912990570068) {
                                        if (rr_std <= 10.759921550750732) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 3;
                                        }
                                    } else {
                                        votes[24] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_std <= 10.809421062469482) {
                            votes[24] = 3;
                        } else {
                            if (pulse_interval <= 0.09190909191966057) {
                                votes[24] = 4;
                            } else {
                                votes[24] = 4;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (diff_median <= 0.25343640614300966) {
            if (dist_std <= 0.016389522701501846) {
                if (dist_std <= 0.012069156859070063) {
                    if (dist_std <= 0.010297069326043129) {
                        votes[24] = 0;
                    } else {
                        votes[24] = 0;
                    }
                } else {
                    if (diff_median <= 0.012842257507145405) {
                        votes[24] = 0;
                    } else {
                        votes[24] = 0;
                    }
                }
            } else {
                votes[24] = 2;
            }
        } else {
            if (rr_std <= 22.748177528381348) {
                if (dist_std <= 159.97726440429688) {
                    if (fwhm <= 7.5320000648498535) {
                        if (dist_std <= 40.788429260253906) {
                            votes[24] = 1;
                        } else {
                            if (dist_std <= 79.00160598754883) {
                                if (fwhm <= 7.108000040054321) {
                                    votes[24] = 2;
                                } else {
                                    votes[24] = 2;
                                }
                            } else {
                                votes[24] = 2;
                            }
                        }
                    } else {
                        if (num_valleys <= 75.5) {
                            if (pulse_interval <= 0.4590735286474228) {
                                if (systolic_amp <= 4207.88525390625) {
                                    if (num_valleys <= 58.0) {
                                        votes[24] = 2;
                                    } else {
                                        if (ss_std <= 5.542795419692993) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                } else {
                                    votes[24] = 2;
                                }
                            } else {
                                if (pp_interval <= 0.6506666541099548) {
                                    if (num_valleys <= 63.5) {
                                        votes[24] = 3;
                                    } else {
                                        if (ss_median <= 55.5) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                } else {
                                    votes[24] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 54.5) {
                                votes[24] = 3;
                            } else {
                                votes[24] = 5;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 66.5) {
                        if (num_valleys <= 64.5) {
                            votes[24] = 2;
                        } else {
                            votes[24] = 2;
                        }
                    } else {
                        votes[24] = 5;
                    }
                }
            } else {
                if (pp_interval <= 0.4077647030353546) {
                    votes[24] = 1;
                } else {
                    votes[24] = 1;
                }
            }
        }
    }

// Decision rules for tree 25
    if (dist_std <= 0.019624496810138226) {
        if (dist_std <= 0.01010250486433506) {
            votes[25] = 0;
        } else {
            if (diastolic_area <= 5.170588254928589) {
                votes[25] = 0;
            } else {
                votes[25] = 2;
            }
        }
    } else {
        if (pulse_interval <= 0.24066080152988434) {
            if (dist_std <= 72.55313491821289) {
                if (rr_std <= 9.598783493041992) {
                    if (systolic_time <= 0.21105263382196426) {
                        if (dist_std <= 30.962125778198242) {
                            votes[25] = 4;
                        } else {
                            if (diff_median <= 8.465407371520996) {
                                if (dist_std <= 51.478776931762695) {
                                    votes[25] = 1;
                                } else {
                                    votes[25] = 3;
                                }
                            } else {
                                if (ss_std <= 11.4345703125) {
                                    if (rr_median <= 45.75) {
                                        votes[25] = 3;
                                    } else {
                                        if (rr_median <= 57.25) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 3;
                                        }
                                    }
                                } else {
                                    votes[25] = 3;
                                }
                            }
                        }
                    } else {
                        votes[25] = 5;
                    }
                } else {
                    if (systolic_time <= 0.07066231966018677) {
                        if (num_valleys <= 77.5) {
                            if (rr_std <= 12.347809791564941) {
                                if (rr_median <= 49.75) {
                                    votes[25] = 4;
                                } else {
                                    votes[25] = 3;
                                }
                            } else {
                                if (pulse_interval <= 0.039091357961297035) {
                                    votes[25] = 4;
                                } else {
                                    votes[25] = 4;
                                }
                            }
                        } else {
                            if (systolic_area <= 1122032.875) {
                                if (first_peak_freq <= 0.42724609375) {
                                    votes[25] = 1;
                                } else {
                                    if (pp_interval <= 0.04775085672736168) {
                                        votes[25] = 1;
                                    } else {
                                        votes[25] = 1;
                                    }
                                }
                            } else {
                                votes[25] = 4;
                            }
                        }
                    } else {
                        if (dist_median <= 0.035647622658871114) {
                            if (diff_median <= 18.829445838928223) {
                                if (systolic_area <= 871298.71875) {
                                    if (ss_std <= 16.856794357299805) {
                                        if (dist_median <= -0.00998145155608654) {
                                            votes[25] = 5;
                                        } else {
                                            votes[25] = 1;
                                        }
                                    } else {
                                        votes[25] = 4;
                                    }
                                } else {
                                    if (systolic_area <= 1524545.625) {
                                        votes[25] = 4;
                                    } else {
                                        if (systolic_area <= 1720210.8125) {
                                            votes[25] = 4;
                                        } else {
                                            votes[25] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (dist_std <= 59.93403244018555) {
                                    votes[25] = 3;
                                } else {
                                    votes[25] = 1;
                                }
                            }
                        } else {
                            votes[25] = 3;
                        }
                    }
                }
            } else {
                if (systolic_area <= 2264494.25) {
                    if (systolic_time <= 0.08826716616749763) {
                        if (systolic_area <= 529326.34375) {
                            if (num_valleys <= 68.5) {
                                votes[25] = 3;
                            } else {
                                if (pulse_interval <= 0.07605878636240959) {
                                    if (dist_median <= -0.7270986437797546) {
                                        votes[25] = 1;
                                    } else {
                                        votes[25] = 1;
                                    }
                                } else {
                                    votes[25] = 1;
                                }
                            }
                        } else {
                            if (ss_std <= 5.513027191162109) {
                                if (pulse_interval <= 0.06028192304074764) {
                                    votes[25] = 3;
                                } else {
                                    votes[25] = 3;
                                }
                            } else {
                                if (rr_median <= 51.5) {
                                    if (ss_median <= 50.5) {
                                        if (pulse_interval <= 0.057421257719397545) {
                                            votes[25] = 5;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    } else {
                                        votes[25] = 1;
                                    }
                                } else {
                                    if (diff_median <= 14.041886329650879) {
                                        if (dist_std <= 100.40913772583008) {
                                            votes[25] = 1;
                                        } else {
                                            votes[25] = 1;
                                        }
                                    } else {
                                        votes[25] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (fwhm <= 8.124000072479248) {
                            if (diastolic_area <= -5.454423427581787) {
                                if (rr_std <= 8.155134439468384) {
                                    votes[25] = 2;
                                } else {
                                    votes[25] = 1;
                                }
                            } else {
                                if (rr_std <= 2.442590355873108) {
                                    if (dist_std <= 140.7319107055664) {
                                        votes[25] = 1;
                                    } else {
                                        votes[25] = 1;
                                    }
                                } else {
                                    if (ss_std <= 10.274032592773438) {
                                        if (rr_std <= 9.528011798858643) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 1;
                                        }
                                    } else {
                                        if (dist_median <= -0.2527211308479309) {
                                            votes[25] = 5;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 48.75) {
                                if (systolic_area <= 194386.15625) {
                                    votes[25] = 3;
                                } else {
                                    if (rr_std <= 10.866309642791748) {
                                        if (second_peak_freq <= 1.15966796875) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    } else {
                                        votes[25] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 5.752336025238037) {
                                    if (systolic_time <= 0.1982390210032463) {
                                        if (systolic_area <= 446193.90625) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 3;
                                        }
                                    } else {
                                        votes[25] = 3;
                                    }
                                } else {
                                    if (pp_interval <= 0.10368352383375168) {
                                        votes[25] = 3;
                                    } else {
                                        if (systolic_area <= 562584.421875) {
                                            votes[25] = 5;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 140.5) {
                        votes[25] = 4;
                    } else {
                        votes[25] = 4;
                    }
                }
            }
        } else {
            if (ss_median <= 66.5) {
                if (systolic_area <= 29218.4365234375) {
                    if (diastolic_area <= -18499.880859375) {
                        if (rr_median <= 63.0) {
                            if (rr_median <= 48.5) {
                                votes[25] = 2;
                            } else {
                                if (systolic_area <= 21763.98828125) {
                                    votes[25] = 2;
                                } else {
                                    votes[25] = 2;
                                }
                            }
                        } else {
                            votes[25] = 1;
                        }
                    } else {
                        if (diff_median <= 1.262550175189972) {
                            votes[25] = 4;
                        } else {
                            if (rr_median <= 42.75) {
                                if (dist_median <= -0.010915118735283613) {
                                    votes[25] = 2;
                                } else {
                                    votes[25] = 1;
                                }
                            } else {
                                if (pulse_interval <= 0.5959384739398956) {
                                    votes[25] = 1;
                                } else {
                                    votes[25] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 11.453752994537354) {
                        if (dist_std <= 69.83832931518555) {
                            votes[25] = 3;
                        } else {
                            if (ss_std <= 3.8184293508529663) {
                                votes[25] = 3;
                            } else {
                                votes[25] = 5;
                            }
                        }
                    } else {
                        if (dist_std <= 60.63310241699219) {
                            votes[25] = 5;
                        } else {
                            if (num_valleys <= 63.5) {
                                votes[25] = 5;
                            } else {
                                votes[25] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 133.0) {
                    if (num_valleys <= 66.5) {
                        if (pp_interval <= 0.4757999926805496) {
                            if (rr_median <= 73.5) {
                                votes[25] = 2;
                            } else {
                                votes[25] = 2;
                            }
                        } else {
                            if (second_peak_freq <= 1.03759765625) {
                                votes[25] = 2;
                            } else {
                                votes[25] = 2;
                            }
                        }
                    } else {
                        votes[25] = 2;
                    }
                } else {
                    if (systolic_time <= 0.43727777898311615) {
                        votes[25] = 3;
                    } else {
                        votes[25] = 5;
                    }
                }
            }
        }
    }

// Decision rules for tree 26
    if (dist_std <= 0.018765224143862724) {
        if (diff_median <= 0.004548775730654597) {
            votes[26] = 2;
        } else {
            if (rr_std <= 1.4665063470602036) {
                votes[26] = 0;
            } else {
                votes[26] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.24066080152988434) {
            if (dist_std <= 85.07256317138672) {
                if (diff_median <= 15.541492462158203) {
                    if (systolic_area <= 1149000.0) {
                        if (fwhm <= 7.059999942779541) {
                            if (dist_median <= -0.03657879959791899) {
                                votes[26] = 1;
                            } else {
                                if (dist_std <= 35.90232467651367) {
                                    votes[26] = 4;
                                } else {
                                    if (dist_std <= 62.11818885803223) {
                                        votes[26] = 4;
                                    } else {
                                        votes[26] = 4;
                                    }
                                }
                            }
                        } else {
                            if (pp_interval <= 0.0848936177790165) {
                                if (fwhm <= 7.732000112533569) {
                                    if (rr_median <= 52.75) {
                                        votes[26] = 1;
                                    } else {
                                        votes[26] = 1;
                                    }
                                } else {
                                    if (ss_std <= 11.448602676391602) {
                                        if (rr_std <= 8.738959312438965) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 3;
                                        }
                                    } else {
                                        votes[26] = 5;
                                    }
                                }
                            } else {
                                if (systolic_amp <= 1688.97509765625) {
                                    if (systolic_time <= 0.09294059127569199) {
                                        votes[26] = 4;
                                    } else {
                                        if (dist_std <= 47.122480392456055) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.6549393832683563) {
                                        if (dist_std <= 46.64514923095703) {
                                            votes[26] = 4;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    } else {
                                        votes[26] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 9.092422008514404) {
                            votes[26] = 3;
                        } else {
                            if (ss_median <= 47.5) {
                                votes[26] = 4;
                            } else {
                                if (rr_median <= 63.5) {
                                    if (rr_std <= 19.58051300048828) {
                                        votes[26] = 4;
                                    } else {
                                        votes[26] = 4;
                                    }
                                } else {
                                    votes[26] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_std <= 50.89376258850098) {
                        if (num_peaks <= 139.5) {
                            votes[26] = 3;
                        } else {
                            votes[26] = 3;
                        }
                    } else {
                        if (systolic_time <= 0.08744489401578903) {
                            if (rr_std <= 12.514007091522217) {
                                if (first_peak_freq <= 0.42724609375) {
                                    votes[26] = 3;
                                } else {
                                    votes[26] = 1;
                                }
                            } else {
                                if (rr_median <= 59.5) {
                                    votes[26] = 1;
                                } else {
                                    votes[26] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 53.25) {
                                if (num_peaks <= 146.0) {
                                    votes[26] = 3;
                                } else {
                                    votes[26] = 3;
                                }
                            } else {
                                if (ss_std <= 11.503650665283203) {
                                    votes[26] = 3;
                                } else {
                                    votes[26] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (ss_std <= 1.7140344381332397) {
                    if (diastolic_amp <= -2.9472243785858154) {
                        if (diff_median <= 11.089471817016602) {
                            votes[26] = 2;
                        } else {
                            votes[26] = 2;
                        }
                    } else {
                        if (pulse_interval <= 0.19379094243049622) {
                            if (ss_std <= 1.0313065648078918) {
                                votes[26] = 3;
                            } else {
                                votes[26] = 2;
                            }
                        } else {
                            votes[26] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 12.270582675933838) {
                        if (systolic_area <= 411433.9375) {
                            if (ss_median <= 61.75) {
                                if (pp_interval <= 0.08903317898511887) {
                                    if (num_peaks <= 123.0) {
                                        votes[26] = 3;
                                    } else {
                                        if (fwhm <= 7.676000118255615) {
                                            votes[26] = 1;
                                        } else {
                                            votes[26] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 42.5) {
                                        votes[26] = 3;
                                    } else {
                                        if (diff_median <= 7.6575047969818115) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (ss_std <= 7.958814382553101) {
                                    votes[26] = 5;
                                } else {
                                    votes[26] = 3;
                                }
                            }
                        } else {
                            if (systolic_area <= 3476421.0) {
                                if (rr_median <= 44.75) {
                                    if (num_peaks <= 131.0) {
                                        votes[26] = 5;
                                    } else {
                                        votes[26] = 5;
                                    }
                                } else {
                                    if (diff_median <= 5.999284744262695) {
                                        votes[26] = 3;
                                    } else {
                                        if (systolic_time <= 0.10822462290525436) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 2;
                                        }
                                    }
                                }
                            } else {
                                votes[26] = 4;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.07533719390630722) {
                            if (systolic_time <= 0.0391806960105896) {
                                votes[26] = 4;
                            } else {
                                if (systolic_time <= 0.05356477200984955) {
                                    votes[26] = 1;
                                } else {
                                    votes[26] = 1;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.027830688282847404) {
                                if (rr_median <= 51.5) {
                                    if (ss_std <= 12.464842796325684) {
                                        votes[26] = 5;
                                    } else {
                                        votes[26] = 3;
                                    }
                                } else {
                                    votes[26] = 5;
                                }
                            } else {
                                votes[26] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 61.5) {
                if (systolic_area <= 112749.37109375) {
                    if (num_peaks <= 125.0) {
                        if (rr_std <= 0.6975595355033875) {
                            if (rr_std <= 0.4925113916397095) {
                                votes[26] = 2;
                            } else {
                                votes[26] = 2;
                            }
                        } else {
                            votes[26] = 2;
                        }
                    } else {
                        votes[26] = 2;
                    }
                } else {
                    votes[26] = 2;
                }
            } else {
                if (rr_std <= 22.032867431640625) {
                    if (diastolic_amp <= -7.12269926071167) {
                        if (dist_std <= 36.54799270629883) {
                            if (second_peak_freq <= 1.03759765625) {
                                votes[26] = 1;
                            } else {
                                votes[26] = 4;
                            }
                        } else {
                            if (diff_median <= 2.253009796142578) {
                                votes[26] = 5;
                            } else {
                                if (dist_std <= 52.80203437805176) {
                                    votes[26] = 2;
                                } else {
                                    if (rr_std <= 21.049946784973145) {
                                        if (diastolic_time <= 0.5134666562080383) {
                                            votes[26] = 2;
                                        } else {
                                            votes[26] = 2;
                                        }
                                    } else {
                                        votes[26] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 69.5) {
                            if (pp_interval <= 0.9399999976158142) {
                                if (rr_std <= 3.7106308937072754) {
                                    votes[26] = 3;
                                } else {
                                    if (dist_std <= 66.70830154418945) {
                                        votes[26] = 3;
                                    } else {
                                        if (dist_median <= -0.20360363274812698) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    }
                                }
                            } else {
                                votes[26] = 1;
                            }
                        } else {
                            if (dist_std <= 169.51124572753906) {
                                votes[26] = 5;
                            } else {
                                votes[26] = 2;
                            }
                        }
                    }
                } else {
                    if (pp_interval <= 0.3258095383644104) {
                        votes[26] = 4;
                    } else {
                        if (pp_interval <= 0.4842666834592819) {
                            votes[26] = 1;
                        } else {
                            votes[26] = 1;
                        }
                    }
                }
            }
        }
    }

// Decision rules for tree 27
    if (diastolic_amp <= 0.025490196654573083) {
        if (ss_median <= 66.5) {
            if (pulse_interval <= 0.3765999972820282) {
                if (rr_std <= 9.450672626495361) {
                    if (dist_std <= 83.00910568237305) {
                        if (first_peak_freq <= 0.18310546875) {
                            votes[27] = 4;
                        } else {
                            if (fwhm <= 4.131999850273132) {
                                votes[27] = 4;
                            } else {
                                if (diff_median <= 7.311549663543701) {
                                    if (systolic_area <= 796208.90625) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 3;
                                    }
                                } else {
                                    if (diff_median <= 42.82563018798828) {
                                        if (ss_std <= 11.150871276855469) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    } else {
                                        votes[27] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 72.5) {
                            if (rr_median <= 50.25) {
                                if (ss_std <= 9.071770191192627) {
                                    if (dist_std <= 156.43138122558594) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 3;
                                    }
                                } else {
                                    votes[27] = 1;
                                }
                            } else {
                                if (rr_median <= 74.0) {
                                    if (rr_std <= 7.733437538146973) {
                                        if (diff_median <= 7.365113973617554) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 3;
                                        }
                                    } else {
                                        votes[27] = 4;
                                    }
                                } else {
                                    votes[27] = 5;
                                }
                            }
                        } else {
                            if (dist_median <= -0.3244031071662903) {
                                if (rr_median <= 43.5) {
                                    votes[27] = 3;
                                } else {
                                    if (pp_interval <= 0.09094970673322678) {
                                        votes[27] = 1;
                                    } else {
                                        votes[27] = 1;
                                    }
                                }
                            } else {
                                if (num_peaks <= 141.5) {
                                    if (systolic_area <= 347434.453125) {
                                        votes[27] = 1;
                                    } else {
                                        votes[27] = 4;
                                    }
                                } else {
                                    votes[27] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 1154539.375) {
                        if (pulse_interval <= 0.08722750097513199) {
                            if (systolic_time <= 0.029059337452054024) {
                                votes[27] = 4;
                            } else {
                                if (systolic_amp <= 5213.60986328125) {
                                    if (rr_median <= 42.5) {
                                        votes[27] = 5;
                                    } else {
                                        if (num_peaks <= 144.5) {
                                            votes[27] = 1;
                                        } else {
                                            votes[27] = 1;
                                        }
                                    }
                                } else {
                                    votes[27] = 3;
                                }
                            }
                        } else {
                            if (diastolic_amp <= -13.689396381378174) {
                                if (diastolic_amp <= -2793.6190185546875) {
                                    if (num_peaks <= 145.0) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 1;
                                    }
                                } else {
                                    if (systolic_amp <= 4423.32470703125) {
                                        votes[27] = 4;
                                    } else {
                                        if (systolic_time <= 0.2305656522512436) {
                                            votes[27] = 4;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (dist_std <= 61.58267784118652) {
                                    if (diff_median <= 12.711973667144775) {
                                        if (pulse_interval <= 0.12371477112174034) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    } else {
                                        votes[27] = 3;
                                    }
                                } else {
                                    if (dist_median <= -1.109617531299591) {
                                        votes[27] = 3;
                                    } else {
                                        if (rr_std <= 12.318141460418701) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (pp_interval <= 0.032236265018582344) {
                            votes[27] = 1;
                        } else {
                            if (pulse_interval <= 0.03633623383939266) {
                                votes[27] = 4;
                            } else {
                                if (pulse_interval <= 0.06938030570745468) {
                                    if (systolic_area <= 1523396.25) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 4;
                                    }
                                } else {
                                    if (rr_std <= 13.100550651550293) {
                                        if (num_peaks <= 145.5) {
                                            votes[27] = 4;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    } else {
                                        votes[27] = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (pulse_interval <= 1.0062857270240784) {
                    if (diastolic_time <= 0.010180904529988766) {
                        if (ss_median <= 47.5) {
                            votes[27] = 5;
                        } else {
                            votes[27] = 5;
                        }
                    } else {
                        if (rr_median <= 62.0) {
                            if (diastolic_time <= 0.9041904807090759) {
                                if (dist_std <= 39.58014488220215) {
                                    votes[27] = 5;
                                } else {
                                    if (ss_std <= 9.72905445098877) {
                                        votes[27] = 2;
                                    } else {
                                        if (num_valleys <= 77.5) {
                                            votes[27] = 2;
                                        } else {
                                            votes[27] = 2;
                                        }
                                    }
                                }
                            } else {
                                votes[27] = 1;
                            }
                        } else {
                            if (dist_median <= -0.007568035274744034) {
                                votes[27] = 1;
                            } else {
                                votes[27] = 1;
                            }
                        }
                    }
                } else {
                    votes[27] = 1;
                }
            }
        } else {
            if (dist_std <= 0.018321584910154343) {
                if (dist_std <= 0.014803807716816664) {
                    votes[27] = 0;
                } else {
                    votes[27] = 0;
                }
            } else {
                if (rr_std <= 9.152944087982178) {
                    if (systolic_area <= 176205.3984375) {
                        if (dist_std <= 110.8818130493164) {
                            votes[27] = 5;
                        } else {
                            if (num_valleys <= 66.5) {
                                if (num_peaks <= 121.5) {
                                    if (systolic_time <= 0.4702117592096329) {
                                        votes[27] = 2;
                                    } else {
                                        votes[27] = 2;
                                    }
                                } else {
                                    if (rr_std <= 0.5273985117673874) {
                                        votes[27] = 2;
                                    } else {
                                        votes[27] = 2;
                                    }
                                }
                            } else {
                                votes[27] = 2;
                            }
                        }
                    } else {
                        if (pp_interval <= 0.1982390210032463) {
                            votes[27] = 3;
                        } else {
                            votes[27] = 5;
                        }
                    }
                } else {
                    if (ss_std <= 9.633925914764404) {
                        votes[27] = 3;
                    } else {
                        if (ss_std <= 14.057734489440918) {
                            votes[27] = 5;
                        } else {
                            if (dist_std <= 64.97015571594238) {
                                votes[27] = 4;
                            } else {
                                votes[27] = 4;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (systolic_area <= 9.103599548339844) {
            if (dist_std <= 0.011829767376184464) {
                votes[27] = 0;
            } else {
                votes[27] = 2;
            }
        } else {
            votes[27] = 0;
        }
    }

// Decision rules for tree 28
    if (dist_std <= 0.018805175088346004) {
        if (rr_std <= 2.4665063470602036) {
            if (pulse_interval <= 0.8581111133098602) {
                votes[28] = 2;
            } else {
                votes[28] = 0;
            }
        } else {
            votes[28] = 0;
        }
    } else {
        if (pulse_interval <= 0.24066080152988434) {
            if (diastolic_amp <= -10.86823558807373) {
                if (systolic_area <= 46583.66015625) {
                    if (diastolic_area <= -25049.0830078125) {
                        votes[28] = 1;
                    } else {
                        if (rr_std <= 30.37692928314209) {
                            if (rr_std <= 15.491426467895508) {
                                votes[28] = 4;
                            } else {
                                votes[28] = 4;
                            }
                        } else {
                            votes[28] = 4;
                        }
                    }
                } else {
                    if (systolic_amp <= 5622.8134765625) {
                        votes[28] = 1;
                    } else {
                        if (diastolic_time <= 0.17833333648741245) {
                            if (dist_std <= 42.86433219909668) {
                                votes[28] = 4;
                            } else {
                                votes[28] = 4;
                            }
                        } else {
                            votes[28] = 2;
                        }
                    }
                }
            } else {
                if (pp_interval <= 0.03689787723124027) {
                    if (systolic_area <= 3304464.5) {
                        if (dist_std <= 35.98638343811035) {
                            if (pp_interval <= 0.014259649440646172) {
                                votes[28] = 4;
                            } else {
                                votes[28] = 4;
                            }
                        } else {
                            if (fwhm <= 7.796000003814697) {
                                if (dist_median <= -0.08848054707050323) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 4;
                                }
                            } else {
                                if (num_valleys <= 78.0) {
                                    if (num_peaks <= 135.5) {
                                        votes[28] = 3;
                                    } else {
                                        votes[28] = 3;
                                    }
                                } else {
                                    votes[28] = 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.033210638910532) {
                            votes[28] = 4;
                        } else {
                            votes[28] = 4;
                        }
                    }
                } else {
                    if (dist_std <= 72.4005241394043) {
                        if (ss_median <= 55.25) {
                            if (rr_std <= 12.063323974609375) {
                                if (fwhm <= 7.752000093460083) {
                                    if (rr_std <= 9.576368808746338) {
                                        votes[28] = 3;
                                    } else {
                                        votes[28] = 1;
                                    }
                                } else {
                                    if (ss_std <= 12.281781196594238) {
                                        if (diff_median <= 8.10119104385376) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 3;
                                        }
                                    } else {
                                        votes[28] = 4;
                                    }
                                }
                            } else {
                                if (systolic_area <= 338761.046875) {
                                    if (ss_median <= 49.5) {
                                        votes[28] = 5;
                                    } else {
                                        votes[28] = 5;
                                    }
                                } else {
                                    if (pulse_interval <= 0.07945055142045021) {
                                        votes[28] = 1;
                                    } else {
                                        votes[28] = 3;
                                    }
                                }
                            }
                        } else {
                            if (pulse_interval <= 0.07033959776163101) {
                                votes[28] = 3;
                            } else {
                                if (diff_median <= 11.26274824142456) {
                                    if (ss_std <= 12.30892562866211) {
                                        votes[28] = 4;
                                    } else {
                                        votes[28] = 5;
                                    }
                                } else {
                                    if (rr_std <= 9.641409873962402) {
                                        votes[28] = 3;
                                    } else {
                                        if (diff_median <= 16.24455213546753) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_std <= 3.109849452972412) {
                            if (dist_std <= 181.68663787841797) {
                                if (dist_std <= 114.47712326049805) {
                                    votes[28] = 3;
                                } else {
                                    if (num_valleys <= 66.5) {
                                        votes[28] = 3;
                                    } else {
                                        votes[28] = 3;
                                    }
                                }
                            } else {
                                votes[28] = 2;
                            }
                        } else {
                            if (ss_median <= 48.25) {
                                if (rr_median <= 98.0) {
                                    if (num_peaks <= 140.5) {
                                        if (systolic_area <= 294822.609375) {
                                            votes[28] = 5;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    } else {
                                        if (dist_std <= 79.54364776611328) {
                                            votes[28] = 5;
                                        } else {
                                            votes[28] = 1;
                                        }
                                    }
                                } else {
                                    votes[28] = 1;
                                }
                            } else {
                                if (pulse_interval <= 0.056794723495841026) {
                                    votes[28] = 1;
                                } else {
                                    if (systolic_area <= 1217661.875) {
                                        if (rr_std <= 9.499885559082031) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    } else {
                                        votes[28] = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.7711515128612518) {
                if (num_valleys <= 66.5) {
                    if (dist_std <= 161.142822265625) {
                        if (ss_median <= 48.5) {
                            votes[28] = 5;
                        } else {
                            if (systolic_area <= 110381.6171875) {
                                if (systolic_area <= 27052.947265625) {
                                    if (second_peak_freq <= 1.15966796875) {
                                        votes[28] = 2;
                                    } else {
                                        votes[28] = 2;
                                    }
                                } else {
                                    if (ss_std <= 4.604631662368774) {
                                        votes[28] = 2;
                                    } else {
                                        votes[28] = 5;
                                    }
                                }
                            } else {
                                votes[28] = 3;
                            }
                        }
                    } else {
                        if (second_peak_freq <= 0.732421875) {
                            if (pulse_interval <= 0.2673647552728653) {
                                votes[28] = 2;
                            } else {
                                votes[28] = 2;
                            }
                        } else {
                            votes[28] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 16.739928245544434) {
                        if (dist_std <= 64.79132461547852) {
                            if (diastolic_time <= 0.15007999539375305) {
                                if (systolic_area <= 169537.671875) {
                                    votes[28] = 3;
                                } else {
                                    votes[28] = 3;
                                }
                            } else {
                                votes[28] = 5;
                            }
                        } else {
                            if (pp_interval <= 0.2450583353638649) {
                                votes[28] = 2;
                            } else {
                                if (diastolic_amp <= -2733.886474609375) {
                                    votes[28] = 2;
                                } else {
                                    if (fwhm <= 7.888000011444092) {
                                        votes[28] = 5;
                                    } else {
                                        votes[28] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_amp <= 1280.91796875) {
                            if (ss_median <= 48.5) {
                                votes[28] = 5;
                            } else {
                                votes[28] = 1;
                            }
                        } else {
                            if (rr_std <= 22.7650785446167) {
                                if (systolic_time <= 0.41183900833129883) {
                                    votes[28] = 4;
                                } else {
                                    if (diastolic_amp <= -2927.1729736328125) {
                                        votes[28] = 2;
                                    } else {
                                        votes[28] = 2;
                                    }
                                }
                            } else {
                                votes[28] = 1;
                            }
                        }
                    }
                }
            } else {
                votes[28] = 1;
            }
        }
    }

// Decision rules for tree 29
    if (diff_median <= 0.06368640158325434) {
        if (num_peaks <= 72.5) {
            votes[29] = 0;
        } else {
            if (ss_std <= 6.792608261108398) {
                if (diff_median <= 0.005048998398706317) {
                    votes[29] = 0;
                } else {
                    votes[29] = 0;
                }
            } else {
                if (dist_std <= 0.015576047822833061) {
                    votes[29] = 0;
                } else {
                    votes[29] = 0;
                }
            }
        }
    } else {
        if (dist_std <= 184.41896057128906) {
            if (pulse_interval <= 0.318000003695488) {
                if (systolic_area <= 1154539.375) {
                    if (diastolic_amp <= -12.253353595733643) {
                        if (fwhm <= 7.828000068664551) {
                            if (diastolic_time <= 0.7412727177143097) {
                                if (dist_std <= 33.95336723327637) {
                                    if (num_peaks <= 133.0) {
                                        votes[29] = 4;
                                    } else {
                                        votes[29] = 4;
                                    }
                                } else {
                                    if (dist_median <= -0.009749123360961676) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 4;
                                    }
                                }
                            } else {
                                votes[29] = 1;
                            }
                        } else {
                            if (ss_std <= 10.174124240875244) {
                                votes[29] = 4;
                            } else {
                                votes[29] = 4;
                            }
                        }
                    } else {
                        if (pp_interval <= 0.08813483268022537) {
                            if (systolic_time <= 0.011645713821053505) {
                                if (diff_median <= 7.768692970275879) {
                                    votes[29] = 4;
                                } else {
                                    votes[29] = 3;
                                }
                            } else {
                                if (systolic_area <= 417303.546875) {
                                    if (ss_median <= 47.0) {
                                        if (pulse_interval <= 0.067438505589962) {
                                            votes[29] = 1;
                                        } else {
                                            votes[29] = 1;
                                        }
                                    } else {
                                        votes[29] = 1;
                                    }
                                } else {
                                    if (pulse_interval <= 0.06492513790726662) {
                                        if (dist_std <= 59.49013328552246) {
                                            votes[29] = 1;
                                        } else {
                                            votes[29] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 10.368098258972168) {
                                            votes[29] = 3;
                                        } else {
                                            votes[29] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (ss_std <= 3.075942277908325) {
                                if (rr_std <= 6.545371770858765) {
                                    if (ss_std <= 1.1604024767875671) {
                                        if (rr_median <= 53.5) {
                                            votes[29] = 3;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    } else {
                                        votes[29] = 3;
                                    }
                                } else {
                                    if (ss_median <= 47.5) {
                                        votes[29] = 3;
                                    } else {
                                        votes[29] = 2;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.263254642486572) {
                                    if (rr_std <= 2.47578763961792) {
                                        if (dist_std <= 155.83539581298828) {
                                            votes[29] = 1;
                                        } else {
                                            votes[29] = 1;
                                        }
                                    } else {
                                        if (rr_median <= 48.25) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 79.5) {
                                        if (pulse_interval <= 0.11498592421412468) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 15.413269519805908) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diff_median <= 16.146031379699707) {
                        if (ss_std <= 7.821731090545654) {
                            if (pp_interval <= 0.05314685218036175) {
                                votes[29] = 3;
                            } else {
                                votes[29] = 3;
                            }
                        } else {
                            if (rr_std <= 24.544503211975098) {
                                if (dist_median <= 0.051008790731430054) {
                                    if (dist_median <= -0.09769248962402344) {
                                        if (ss_std <= 9.458292484283447) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    } else {
                                        if (systolic_area <= 1726084.75) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    }
                                } else {
                                    votes[29] = 3;
                                }
                            } else {
                                votes[29] = 1;
                            }
                        }
                    } else {
                        if (dist_std <= 56.93605041503906) {
                            votes[29] = 3;
                        } else {
                            votes[29] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 22.032867431640625) {
                    if (dist_std <= 36.54799270629883) {
                        if (ss_std <= 12.736300468444824) {
                            votes[29] = 3;
                        } else {
                            votes[29] = 1;
                        }
                    } else {
                        if (diff_median <= 16.81295394897461) {
                            if (diff_median <= 2.3780170679092407) {
                                votes[29] = 1;
                            } else {
                                if (second_peak_freq <= 1.28173828125) {
                                    if (rr_median <= 56.75) {
                                        if (diastolic_amp <= -1571.697265625) {
                                            votes[29] = 2;
                                        } else {
                                            votes[29] = 2;
                                        }
                                    } else {
                                        if (dist_std <= 137.56640625) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 2;
                                        }
                                    }
                                } else {
                                    if (first_peak_freq <= 0.79345703125) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 2;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 92385.26171875) {
                                votes[29] = 5;
                            } else {
                                votes[29] = 5;
                            }
                        }
                    }
                } else {
                    if (pp_interval <= 0.45149804651737213) {
                        votes[29] = 1;
                    } else {
                        votes[29] = 1;
                    }
                }
            }
        } else {
            if (num_valleys <= 66.5) {
                if (systolic_time <= 0.1527377814054489) {
                    votes[29] = 5;
                } else {
                    if (systolic_area <= 175571.1875) {
                        votes[29] = 2;
                    } else {
                        votes[29] = 2;
                    }
                }
            } else {
                if (systolic_area <= 159078.6953125) {
                    votes[29] = 2;
                } else {
                    if (pp_interval <= 0.15324214100837708) {
                        if (pulse_interval <= 0.07599999755620956) {
                            votes[29] = 4;
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

// Decision rules for tree 30
    if (diff_median <= 0.06321434117853642) {
        if (diff_median <= 0.0038464133394882083) {
            votes[30] = 1;
        } else {
            if (num_peaks <= 72.5) {
                votes[30] = 0;
            } else {
                if (num_valleys <= 78.0) {
                    votes[30] = 0;
                } else {
                    votes[30] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1579371.25) {
                if (rr_std <= 12.804529666900635) {
                    if (ss_std <= 2.449342727661133) {
                        if (num_valleys <= 69.0) {
                            votes[30] = 3;
                        } else {
                            votes[30] = 3;
                        }
                    } else {
                        if (systolic_time <= 0.08627752214670181) {
                            if (systolic_area <= 50988.04296875) {
                                if (dist_std <= 58.961814880371094) {
                                    votes[30] = 4;
                                } else {
                                    votes[30] = 3;
                                }
                            } else {
                                if (systolic_area <= 430452.8125) {
                                    if (diff_median <= 12.7476806640625) {
                                        if (num_valleys <= 73.5) {
                                            votes[30] = 1;
                                        } else {
                                            votes[30] = 3;
                                        }
                                    } else {
                                        if (dist_std <= 178.83403778076172) {
                                            votes[30] = 1;
                                        } else {
                                            votes[30] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.043437447398900986) {
                                        if (ss_std <= 10.846399784088135) {
                                            votes[30] = 1;
                                        } else {
                                            votes[30] = 1;
                                        }
                                    } else {
                                        if (dist_std <= 71.96458435058594) {
                                            votes[30] = 3;
                                        } else {
                                            votes[30] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 1021372.375) {
                                if (systolic_area <= 103895.26953125) {
                                    if (systolic_time <= 0.2811806946992874) {
                                        votes[30] = 1;
                                    } else {
                                        if (diastolic_area <= -23626.1845703125) {
                                            votes[30] = 2;
                                        } else {
                                            votes[30] = 5;
                                        }
                                    }
                                } else {
                                    if (dist_std <= 117.05835342407227) {
                                        if (ss_std <= 10.147053718566895) {
                                            votes[30] = 3;
                                        } else {
                                            votes[30] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 52.25) {
                                            votes[30] = 5;
                                        } else {
                                            votes[30] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (ss_std <= 10.047870635986328) {
                                    votes[30] = 4;
                                } else {
                                    if (pulse_interval <= 0.09586106240749359) {
                                        votes[30] = 4;
                                    } else {
                                        votes[30] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.7394181787967682) {
                        if (pp_interval <= 0.3412727266550064) {
                            if (pp_interval <= 0.08644778281450272) {
                                if (systolic_time <= 0.03481002803891897) {
                                    if (diff_median <= 5.305295944213867) {
                                        votes[30] = 1;
                                    } else {
                                        votes[30] = 4;
                                    }
                                } else {
                                    if (num_valleys <= 76.0) {
                                        if (dist_median <= -0.164778470993042) {
                                            votes[30] = 4;
                                        } else {
                                            votes[30] = 1;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.04535665363073349) {
                                            votes[30] = 1;
                                        } else {
                                            votes[30] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 66387.728515625) {
                                    if (ss_median <= 58.25) {
                                        if (fwhm <= 5.79200005531311) {
                                            votes[30] = 5;
                                        } else {
                                            votes[30] = 4;
                                        }
                                    } else {
                                        votes[30] = 4;
                                    }
                                } else {
                                    if (systolic_area <= 1144006.1875) {
                                        if (dist_median <= -0.45543520152568817) {
                                            votes[30] = 5;
                                        } else {
                                            votes[30] = 5;
                                        }
                                    } else {
                                        votes[30] = 4;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_area <= -12670.6171875) {
                                if (num_peaks <= 147.5) {
                                    if (num_valleys <= 75.0) {
                                        if (dist_std <= 52.33010673522949) {
                                            votes[30] = 2;
                                        } else {
                                            votes[30] = 2;
                                        }
                                    } else {
                                        votes[30] = 2;
                                    }
                                } else {
                                    votes[30] = 5;
                                }
                            } else {
                                if (systolic_area <= 41465.041015625) {
                                    if (diff_median <= 8.911293506622314) {
                                        votes[30] = 4;
                                    } else {
                                        votes[30] = 1;
                                    }
                                } else {
                                    votes[30] = 5;
                                }
                            }
                        }
                    } else {
                        votes[30] = 1;
                    }
                }
            } else {
                if (num_peaks <= 137.5) {
                    votes[30] = 5;
                } else {
                    if (diff_median <= 16.158411502838135) {
                        if (systolic_area <= 2287288.75) {
                            if (rr_median <= 47.75) {
                                votes[30] = 4;
                            } else {
                                if (systolic_area <= 1792974.8125) {
                                    votes[30] = 4;
                                } else {
                                    votes[30] = 4;
                                }
                            }
                        } else {
                            votes[30] = 4;
                        }
                    } else {
                        votes[30] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 9.152944087982178) {
                if (systolic_area <= 176205.3984375) {
                    if (dist_std <= 105.24596786499023) {
                        votes[30] = 5;
                    } else {
                        if (ss_median <= 69.5) {
                            if (second_peak_freq <= 0.67138671875) {
                                votes[30] = 2;
                            } else {
                                if (num_valleys <= 64.5) {
                                    votes[30] = 2;
                                } else {
                                    votes[30] = 2;
                                }
                            }
                        } else {
                            votes[30] = 2;
                        }
                    }
                } else {
                    if (fwhm <= 8.07200002670288) {
                        votes[30] = 5;
                    } else {
                        votes[30] = 3;
                    }
                }
            } else {
                if (ss_std <= 13.922203540802002) {
                    if (systolic_area <= 121446.70703125) {
                        votes[30] = 5;
                    } else {
                        votes[30] = 3;
                    }
                } else {
                    if (diastolic_area <= -14.213051795959473) {
                        if (diastolic_area <= -19053.4814453125) {
                            votes[30] = 4;
                        } else {
                            votes[30] = 4;
                        }
                    } else {
                        votes[30] = 5;
                    }
                }
            }
        }
    }

// Decision rules for tree 31
    if (pp_interval <= 0.24066080152988434) {
        if (diastolic_amp <= -11.9156813621521) {
            if (pulse_interval <= 0.23176470398902893) {
                if (diastolic_time <= 0.7205999791622162) {
                    if (diastolic_area <= -23013.72265625) {
                        if (systolic_amp <= 4996.643310546875) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 4;
                        }
                    } else {
                        if (num_peaks <= 126.0) {
                            votes[31] = 4;
                        } else {
                            votes[31] = 4;
                        }
                    }
                } else {
                    votes[31] = 1;
                }
            } else {
                votes[31] = 5;
            }
        } else {
            if (pulse_interval <= 0.034834904596209526) {
                if (diff_median <= 11.058073043823242) {
                    if (pp_interval <= 0.032236265018582344) {
                        if (dist_std <= 37.82506084442139) {
                            votes[31] = 4;
                        } else {
                            if (num_valleys <= 75.5) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 1;
                            }
                        }
                    } else {
                        if (systolic_area <= 3963241.25) {
                            votes[31] = 4;
                        } else {
                            votes[31] = 4;
                        }
                    }
                } else {
                    if (systolic_time <= 0.019170181825757027) {
                        votes[31] = 3;
                    } else {
                        votes[31] = 3;
                    }
                }
            } else {
                if (rr_std <= 10.33591890335083) {
                    if (dist_std <= 72.25442504882812) {
                        if (rr_std <= 9.485829830169678) {
                            if (systolic_area <= 559786.34375) {
                                if (rr_median <= 51.5) {
                                    votes[31] = 3;
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                if (pp_interval <= 0.050727538764476776) {
                                    votes[31] = 3;
                                } else {
                                    votes[31] = 3;
                                }
                            }
                        } else {
                            if (ss_std <= 10.062251567840576) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 4;
                            }
                        }
                    } else {
                        if (rr_median <= 96.5) {
                            if (ss_median <= 52.25) {
                                if (pulse_interval <= 0.08373453468084335) {
                                    if (first_peak_freq <= 0.30517578125) {
                                        votes[31] = 1;
                                    } else {
                                        if (num_peaks <= 142.0) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 1;
                                        }
                                    }
                                } else {
                                    if (ss_std <= 4.645251035690308) {
                                        if (rr_std <= 5.69754958152771) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 2.7419402599334717) {
                                            votes[31] = 1;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_amp <= -3.017677426338196) {
                                    votes[31] = 2;
                                } else {
                                    if (ss_median <= 67.5) {
                                        if (first_peak_freq <= 0.30517578125) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 3;
                                        }
                                    } else {
                                        if (pp_interval <= 0.1638595312833786) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[31] = 1;
                        }
                    }
                } else {
                    if (pulse_interval <= 0.07591945305466652) {
                        if (systolic_area <= 501606.234375) {
                            votes[31] = 1;
                        } else {
                            if (pp_interval <= 0.05339711718261242) {
                                if (ss_median <= 48.5) {
                                    votes[31] = 1;
                                } else {
                                    votes[31] = 1;
                                }
                            } else {
                                if (dist_std <= 42.93166732788086) {
                                    votes[31] = 3;
                                } else {
                                    if (pp_interval <= 0.06514878198504448) {
                                        votes[31] = 1;
                                    } else {
                                        votes[31] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 1022902.84375) {
                            if (rr_std <= 11.24830961227417) {
                                votes[31] = 1;
                            } else {
                                if (dist_std <= 47.602813720703125) {
                                    if (rr_std <= 13.059041500091553) {
                                        votes[31] = 3;
                                    } else {
                                        votes[31] = 5;
                                    }
                                } else {
                                    if (num_valleys <= 57.5) {
                                        votes[31] = 3;
                                    } else {
                                        if (systolic_time <= 0.09566035494208336) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 10.452544212341309) {
                                votes[31] = 5;
                            } else {
                                if (systolic_area <= 1524545.625) {
                                    if (pp_interval <= 0.10707508772611618) {
                                        votes[31] = 4;
                                    } else {
                                        votes[31] = 4;
                                    }
                                } else {
                                    votes[31] = 4;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.019624496810138226) {
            if (systolic_amp <= 0.5075901448726654) {
                votes[31] = 0;
            } else {
                if (diastolic_time <= 0.4699999988079071) {
                    if (pp_interval <= 0.768666684627533) {
                        votes[31] = 0;
                    } else {
                        votes[31] = 0;
                    }
                } else {
                    votes[31] = 0;
                }
            }
        } else {
            if (ss_median <= 69.75) {
                if (rr_std <= 22.68282699584961) {
                    if (diastolic_area <= -39.171993255615234) {
                        if (dist_std <= 36.54799270629883) {
                            votes[31] = 1;
                        } else {
                            if (rr_median <= 55.75) {
                                if (dist_std <= 89.48983764648438) {
                                    if (diastolic_amp <= -2865.2821044921875) {
                                        votes[31] = 2;
                                    } else {
                                        votes[31] = 2;
                                    }
                                } else {
                                    votes[31] = 2;
                                }
                            } else {
                                if (pp_interval <= 0.44919444620609283) {
                                    if (systolic_area <= 25774.0244140625) {
                                        votes[31] = 4;
                                    } else {
                                        votes[31] = 2;
                                    }
                                } else {
                                    votes[31] = 5;
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 64.6816177368164) {
                            if (diff_median <= 12.22788143157959) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 3;
                            }
                        } else {
                            if (pulse_interval <= 0.9631111025810242) {
                                if (rr_std <= 3.7106308937072754) {
                                    votes[31] = 3;
                                } else {
                                    if (ss_std <= 6.0896172523498535) {
                                        votes[31] = 5;
                                    } else {
                                        votes[31] = 5;
                                    }
                                }
                            } else {
                                votes[31] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.42588235437870026) {
                        votes[31] = 1;
                    } else {
                        if (systolic_area <= 12334.2626953125) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 12.082566261291504) {
                    if (systolic_time <= 0.4757999926805496) {
                        votes[31] = 2;
                    } else {
                        votes[31] = 2;
                    }
                } else {
                    votes[31] = 3;
                }
            }
        }
    }

// Decision rules for tree 32
    if (diff_median <= 0.2265566037967801) {
        if (diff_median <= 0.0038575243670493364) {
            votes[32] = 2;
        } else {
            if (num_peaks <= 72.5) {
                votes[32] = 0;
            } else {
                if (rr_std <= 1.25) {
                    if (diastolic_area <= 4.403959035873413) {
                        votes[32] = 0;
                    } else {
                        votes[32] = 0;
                    }
                } else {
                    votes[32] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (rr_std <= 10.379262447357178) {
                if (dist_std <= 70.98573303222656) {
                    if (diff_median <= 8.455976963043213) {
                        if (rr_median <= 50.5) {
                            if (ss_std <= 9.906529903411865) {
                                votes[32] = 4;
                            } else {
                                votes[32] = 4;
                            }
                        } else {
                            if (first_peak_freq <= 0.6103515625) {
                                votes[32] = 1;
                            } else {
                                votes[32] = 4;
                            }
                        }
                    } else {
                        if (diff_median <= 15.644580841064453) {
                            if (rr_std <= 9.491891860961914) {
                                if (pp_interval <= 0.08471421897411346) {
                                    votes[32] = 3;
                                } else {
                                    votes[32] = 3;
                                }
                            } else {
                                if (systolic_time <= 0.08181232959032059) {
                                    votes[32] = 3;
                                } else {
                                    votes[32] = 4;
                                }
                            }
                        } else {
                            if (dist_median <= -1.1637226343154907) {
                                votes[32] = 3;
                            } else {
                                if (fwhm <= 7.824000120162964) {
                                    votes[32] = 3;
                                } else {
                                    votes[32] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (pp_interval <= 0.23508332669734955) {
                        if (rr_median <= 48.25) {
                            if (ss_median <= 43.25) {
                                if (rr_std <= 4.171915411949158) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 3;
                                }
                            } else {
                                if (num_valleys <= 75.5) {
                                    if (num_peaks <= 135.5) {
                                        votes[32] = 1;
                                    } else {
                                        if (systolic_area <= 338530.78125) {
                                            votes[32] = 1;
                                        } else {
                                            votes[32] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.03935265354812145) {
                                        votes[32] = 4;
                                    } else {
                                        if (dist_std <= 89.85965728759766) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 72.5) {
                                if (systolic_area <= 603158.375) {
                                    if (second_peak_freq <= 1.15966796875) {
                                        votes[32] = 3;
                                    } else {
                                        if (dist_median <= -0.31896737217903137) {
                                            votes[32] = 1;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    }
                                } else {
                                    votes[32] = 1;
                                }
                            } else {
                                if (ss_std <= 7.702836751937866) {
                                    votes[32] = 3;
                                } else {
                                    if (diff_median <= 13.860698699951172) {
                                        if (num_peaks <= 136.5) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 4;
                                        }
                                    } else {
                                        votes[32] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 5.213545083999634) {
                            votes[32] = 2;
                        } else {
                            if (dist_median <= -0.08086767792701721) {
                                votes[32] = 5;
                            } else {
                                votes[32] = 5;
                            }
                        }
                    }
                }
            } else {
                if (systolic_area <= 1022902.84375) {
                    if (rr_std <= 22.93433666229248) {
                        if (diastolic_area <= -13454.5517578125) {
                            if (diastolic_amp <= -2965.6214599609375) {
                                votes[32] = 5;
                            } else {
                                if (pp_interval <= 0.3074675351381302) {
                                    votes[32] = 4;
                                } else {
                                    if (diff_median <= 3.7732038497924805) {
                                        votes[32] = 2;
                                    } else {
                                        votes[32] = 2;
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.07700610533356667) {
                                if (num_peaks <= 141.5) {
                                    if (num_valleys <= 72.5) {
                                        votes[32] = 4;
                                    } else {
                                        if (fwhm <= 7.624000072479248) {
                                            votes[32] = 1;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    }
                                } else {
                                    if (fwhm <= 7.996000051498413) {
                                        votes[32] = 1;
                                    } else {
                                        votes[32] = 1;
                                    }
                                }
                            } else {
                                if (dist_median <= -0.1611146330833435) {
                                    if (second_peak_freq <= 1.15966796875) {
                                        if (ss_std <= 8.472493648529053) {
                                            votes[32] = 1;
                                        } else {
                                            votes[32] = 5;
                                        }
                                    } else {
                                        if (dist_std <= 94.78435897827148) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 5;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 141.5) {
                                        if (ss_std <= 11.33405876159668) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 51.5) {
                                            votes[32] = 3;
                                        } else {
                                            votes[32] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.4077647030353546) {
                            if (dist_std <= 48.31546211242676) {
                                if (dist_std <= 33.85311508178711) {
                                    votes[32] = 4;
                                } else {
                                    votes[32] = 4;
                                }
                            } else {
                                if (diff_median <= 5.702159643173218) {
                                    votes[32] = 1;
                                } else {
                                    if (ss_std <= 12.489740371704102) {
                                        votes[32] = 3;
                                    } else {
                                        votes[32] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[32] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 137.5) {
                        if (pp_interval <= 0.04528944566845894) {
                            votes[32] = 1;
                        } else {
                            votes[32] = 3;
                        }
                    } else {
                        if (rr_median <= 45.5) {
                            votes[32] = 3;
                        } else {
                            if (diff_median <= 14.264021396636963) {
                                if (rr_std <= 19.19461154937744) {
                                    if (first_peak_freq <= 0.54931640625) {
                                        if (dist_median <= 0.008897038991563022) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 4;
                                        }
                                    } else {
                                        votes[32] = 4;
                                    }
                                } else {
                                    votes[32] = 4;
                                }
                            } else {
                                votes[32] = 3;
                            }
                        }
                    }
                }
            }
        } else {
            if (pp_interval <= 0.14995238184928894) {
                if (dist_median <= -0.12694281339645386) {
                    votes[32] = 3;
                } else {
                    votes[32] = 3;
                }
            } else {
                if (ss_std <= 14.462581157684326) {
                    if (rr_median <= 73.75) {
                        if (num_valleys <= 65.5) {
                            if (systolic_area <= 79976.65625) {
                                votes[32] = 2;
                            } else {
                                if (pulse_interval <= 0.4691617637872696) {
                                    votes[32] = 2;
                                } else {
                                    votes[32] = 2;
                                }
                            }
                        } else {
                            if (pulse_interval <= 0.37516745924949646) {
                                if (rr_std <= 6.443719387054443) {
                                    votes[32] = 2;
                                } else {
                                    votes[32] = 2;
                                }
                            } else {
                                votes[32] = 3;
                            }
                        }
                    } else {
                        votes[32] = 3;
                    }
                } else {
                    if (diff_median <= 6.209874153137207) {
                        votes[32] = 4;
                    } else {
                        votes[32] = 5;
                    }
                }
            }
        }
    }

// Decision rules for tree 33
    if (diastolic_area <= 1.0362745523452759) {
        if (systolic_time <= 0.23845160752534866) {
            if (systolic_area <= 1284584.0) {
                if (diastolic_amp <= -13.47571325302124) {
                    if (diastolic_amp <= -2898.0946044921875) {
                        votes[33] = 1;
                    } else {
                        if (diff_median <= 12.571622848510742) {
                            if (rr_std <= 37.935232162475586) {
                                votes[33] = 4;
                            } else {
                                votes[33] = 4;
                            }
                        } else {
                            if (rr_std <= 14.602477073669434) {
                                votes[33] = 2;
                            } else {
                                votes[33] = 1;
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 0.08813483268022537) {
                        if (pp_interval <= 0.024519702419638634) {
                            if (rr_median <= 51.5) {
                                if (dist_std <= 35.5613899230957) {
                                    votes[33] = 4;
                                } else {
                                    votes[33] = 3;
                                }
                            } else {
                                votes[33] = 3;
                            }
                        } else {
                            if (dist_std <= 45.063297271728516) {
                                if (pulse_interval <= 0.054068027064204216) {
                                    votes[33] = 4;
                                } else {
                                    votes[33] = 3;
                                }
                            } else {
                                if (pulse_interval <= 0.03893592394888401) {
                                    votes[33] = 1;
                                } else {
                                    if (dist_median <= -0.348519042134285) {
                                        if (systolic_area <= 522818.28125) {
                                            votes[33] = 1;
                                        } else {
                                            votes[33] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 312765.0625) {
                                            votes[33] = 1;
                                        } else {
                                            votes[33] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 94.75) {
                            if (ss_std <= 10.069424629211426) {
                                if (diff_median <= 7.544882535934448) {
                                    if (fwhm <= 8.17199993133545) {
                                        votes[33] = 3;
                                    } else {
                                        if (pp_interval <= 0.10297530889511108) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    }
                                } else {
                                    if (pulse_interval <= 0.10452358424663544) {
                                        if (pp_interval <= 0.09691164642572403) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 3;
                                        }
                                    } else {
                                        if (first_peak_freq <= 0.54931640625) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 64.75) {
                                    if (systolic_area <= 1022902.84375) {
                                        if (pp_interval <= 0.09481871873140335) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    } else {
                                        votes[33] = 4;
                                    }
                                } else {
                                    if (diff_median <= 20.581920623779297) {
                                        if (rr_std <= 12.095368385314941) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 3;
                                        }
                                    } else {
                                        votes[33] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[33] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 9.382537364959717) {
                    if (systolic_time <= 0.049927759915590286) {
                        if (systolic_time <= 0.03930078633129597) {
                            votes[33] = 3;
                        } else {
                            votes[33] = 3;
                        }
                    } else {
                        votes[33] = 5;
                    }
                } else {
                    if (diff_median <= 17.196765899658203) {
                        if (ss_std <= 7.868103504180908) {
                            votes[33] = 3;
                        } else {
                            if (ss_median <= 44.75) {
                                votes[33] = 5;
                            } else {
                                if (num_peaks <= 136.5) {
                                    votes[33] = 4;
                                } else {
                                    if (ss_std <= 14.873943328857422) {
                                        if (rr_median <= 59.5) {
                                            votes[33] = 4;
                                        } else {
                                            votes[33] = 4;
                                        }
                                    } else {
                                        votes[33] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[33] = 3;
                    }
                }
            }
        } else {
            if (dist_std <= 1.511089595966041) {
                votes[33] = 0;
            } else {
                if (rr_std <= 22.333300590515137) {
                    if (num_peaks <= 116.5) {
                        if (pulse_interval <= 0.4691617637872696) {
                            if (first_peak_freq <= 0.42724609375) {
                                if (pp_interval <= 0.31537391245365143) {
                                    votes[33] = 2;
                                } else {
                                    if (pp_interval <= 0.3627878725528717) {
                                        votes[33] = 2;
                                    } else {
                                        votes[33] = 2;
                                    }
                                }
                            } else {
                                votes[33] = 2;
                            }
                        } else {
                            votes[33] = 2;
                        }
                    } else {
                        if (diastolic_area <= -43.8207893371582) {
                            if (diff_median <= 2.648856282234192) {
                                if (systolic_time <= 0.4303298145532608) {
                                    votes[33] = 4;
                                } else {
                                    votes[33] = 1;
                                }
                            } else {
                                if (rr_std <= 13.253186702728271) {
                                    if (pp_interval <= 0.4076105207204819) {
                                        if (first_peak_freq <= 0.18310546875) {
                                            votes[33] = 2;
                                        } else {
                                            votes[33] = 2;
                                        }
                                    } else {
                                        votes[33] = 5;
                                    }
                                } else {
                                    if (pulse_interval <= 0.3935232162475586) {
                                        votes[33] = 2;
                                    } else {
                                        votes[33] = 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 0.4895787090063095) {
                                votes[33] = 2;
                            } else {
                                if (systolic_area <= 61023.09375) {
                                    votes[33] = 1;
                                } else {
                                    if (dist_std <= 64.6816177368164) {
                                        votes[33] = 3;
                                    } else {
                                        if (dist_std <= 188.67890167236328) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 0.42588235437870026) {
                        if (ss_std <= 11.860787391662598) {
                            votes[33] = 5;
                        } else {
                            votes[33] = 4;
                        }
                    } else {
                        votes[33] = 1;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.011912154965102673) {
            votes[33] = 0;
        } else {
            votes[33] = 2;
        }
    }
 
// Decision rules for tree 34
    if (dist_std <= 0.018805175088346004) {
        if (dist_std <= 0.015315115451812744) {
            if (num_valleys <= 41.5) {
                votes[34] = 0;
            } else {
                if (diff_median <= 0.004448178922757506) {
                    votes[34] = 0;
                } else {
                    votes[34] = 0;
                }
            }
        } else {
            votes[34] = 0;
        }
    } else {
        if (ss_median <= 66.5) {
            if (pp_interval <= 0.3418181836605072) {
                if (systolic_area <= 1023186.6875) {
                    if (systolic_area <= 47223.71875) {
                        if (fwhm <= 8.139999866485596) {
                            if (diastolic_amp <= -2879.77490234375) {
                                votes[34] = 1;
                            } else {
                                if (dist_median <= -0.007336809765547514) {
                                    if (ss_std <= 12.93702507019043) {
                                        votes[34] = 4;
                                    } else {
                                        if (pp_interval <= 0.20829429477453232) {
                                            votes[34] = 4;
                                        } else {
                                            votes[34] = 4;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 144.0) {
                                        votes[34] = 4;
                                    } else {
                                        votes[34] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[34] = 3;
                        }
                    } else {
                        if (pulse_interval <= 0.08627752214670181) {
                            if (fwhm <= 8.059999942779541) {
                                if (diastolic_area <= -8.531973123550415) {
                                    votes[34] = 1;
                                } else {
                                    if (rr_std <= 8.634952068328857) {
                                        if (rr_median <= 50.5) {
                                            votes[34] = 1;
                                        } else {
                                            votes[34] = 3;
                                        }
                                    } else {
                                        if (systolic_time <= 0.07737565413117409) {
                                            votes[34] = 1;
                                        } else {
                                            votes[34] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (num_valleys <= 69.0) {
                                    votes[34] = 4;
                                } else {
                                    if (diff_median <= 25.797517776489258) {
                                        if (rr_std <= 11.200204849243164) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 1;
                                        }
                                    } else {
                                        if (num_peaks <= 141.0) {
                                            votes[34] = 1;
                                        } else {
                                            votes[34] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_amp <= -11.9156813621521) {
                                if (dist_median <= -0.0208906177431345) {
                                    votes[34] = 4;
                                } else {
                                    votes[34] = 1;
                                }
                            } else {
                                if (systolic_area <= 695313.65625) {
                                    if (dist_median <= -0.1336277425289154) {
                                        if (dist_std <= 55.705204010009766) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 28.67032814025879) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 1;
                                        }
                                    }
                                } else {
                                    votes[34] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (diff_median <= 17.71690082550049) {
                        if (rr_std <= 9.491891860961914) {
                            if (rr_std <= 9.079158782958984) {
                                if (second_peak_freq <= 0.79345703125) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 3;
                                }
                            } else {
                                votes[34] = 5;
                            }
                        } else {
                            if (pulse_interval <= 0.06938030570745468) {
                                if (systolic_area <= 2286260.625) {
                                    if (ss_median <= 50.0) {
                                        votes[34] = 1;
                                    } else {
                                        votes[34] = 3;
                                    }
                                } else {
                                    if (pp_interval <= 0.0337043721228838) {
                                        votes[34] = 4;
                                    } else {
                                        votes[34] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 13.40720510482788) {
                                    if (dist_std <= 52.02950859069824) {
                                        votes[34] = 4;
                                    } else {
                                        votes[34] = 4;
                                    }
                                } else {
                                    votes[34] = 4;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 47.75) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 3;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8073181807994843) {
                    if (diastolic_area <= -5734.125774383545) {
                        if (dist_std <= 47.94912147521973) {
                            if (diastolic_area <= -21337.556640625) {
                                votes[34] = 2;
                            } else {
                                votes[34] = 5;
                            }
                        } else {
                            if (dist_std <= 100.74602890014648) {
                                if (ss_std <= 10.445571899414062) {
                                    votes[34] = 2;
                                } else {
                                    votes[34] = 2;
                                }
                            } else {
                                votes[34] = 2;
                            }
                        }
                    } else {
                        if (pulse_interval <= 1.0396666824817657) {
                            if (pp_interval <= 0.4034421145915985) {
                                votes[34] = 3;
                            } else {
                                if (ss_std <= 11.061128616333008) {
                                    votes[34] = 5;
                                } else {
                                    votes[34] = 5;
                                }
                            }
                        } else {
                            votes[34] = 1;
                        }
                    }
                } else {
                    votes[34] = 1;
                }
            }
        } else {
            if (systolic_area <= 211410.1015625) {
                if (rr_std <= 9.300655841827393) {
                    if (num_valleys <= 67.0) {
                        if (pp_interval <= 0.47474999725818634) {
                            if (num_valleys <= 65.5) {
                                if (num_peaks <= 121.5) {
                                    votes[34] = 2;
                                } else {
                                    if (ss_std <= 2.5023049116134644) {
                                        votes[34] = 2;
                                    } else {
                                        votes[34] = 2;
                                    }
                                }
                            } else {
                                if (diastolic_area <= -8.061010360717773) {
                                    votes[34] = 2;
                                } else {
                                    votes[34] = 2;
                                }
                            }
                        } else {
                            votes[34] = 2;
                        }
                    } else {
                        votes[34] = 2;
                    }
                } else {
                    if (ss_std <= 15.241751670837402) {
                        votes[34] = 5;
                    } else {
                        votes[34] = 4;
                    }
                }
            } else {
                if (pulse_interval <= 0.10083116963505745) {
                    votes[34] = 3;
                } else {
                    votes[34] = 5;
                }
            }
        }
    }

// Decision rules for tree 35
    if (systolic_time <= 0.2401290312409401) {
        if (rr_std <= 10.379262447357178) {
            if (diastolic_amp <= -3.223377823829651) {
                if (pulse_interval <= 0.14562667161226273) {
                    votes[35] = 4;
                } else {
                    if (rr_std <= 1.9734046161174774) {
                        votes[35] = 2;
                    } else {
                        votes[35] = 2;
                    }
                }
            } else {
                if (ss_std <= 10.370690822601318) {
                    if (rr_median <= 48.25) {
                        if (fwhm <= 8.044000148773193) {
                            if (num_valleys <= 73.5) {
                                votes[35] = 1;
                            } else {
                                votes[35] = 5;
                            }
                        } else {
                            if (rr_median <= 43.75) {
                                if (pulse_interval <= 0.08969853818416595) {
                                    votes[35] = 3;
                                } else {
                                    votes[35] = 3;
                                }
                            } else {
                                if (pp_interval <= 0.057741573080420494) {
                                    votes[35] = 3;
                                } else {
                                    if (num_peaks <= 138.0) {
                                        votes[35] = 3;
                                    } else {
                                        votes[35] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 67.5) {
                            if (diff_median <= 11.924662113189697) {
                                if (first_peak_freq <= 0.18310546875) {
                                    votes[35] = 4;
                                } else {
                                    if (pulse_interval <= 0.06574562564492226) {
                                        votes[35] = 1;
                                    } else {
                                        if (pp_interval <= 0.20502564311027527) {
                                            votes[35] = 3;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 122.5) {
                                    votes[35] = 1;
                                } else {
                                    votes[35] = 3;
                                }
                            }
                        } else {
                            votes[35] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 42.5) {
                        votes[35] = 5;
                    } else {
                        if (diff_median <= 15.10292673110962) {
                            if (num_peaks <= 122.5) {
                                votes[35] = 3;
                            } else {
                                if (systolic_area <= 1114639.90625) {
                                    if (rr_std <= 1.0781488120555878) {
                                        votes[35] = 1;
                                    } else {
                                        if (pp_interval <= 0.08915476128458977) {
                                            votes[35] = 3;
                                        } else {
                                            votes[35] = 5;
                                        }
                                    }
                                } else {
                                    votes[35] = 4;
                                }
                            }
                        } else {
                            if (second_peak_freq <= 1.15966796875) {
                                if (dist_median <= -0.14228112623095512) {
                                    votes[35] = 1;
                                } else {
                                    votes[35] = 3;
                                }
                            } else {
                                votes[35] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (systolic_time <= 0.08705358952283859) {
                if (systolic_area <= 1542591.9375) {
                    if (dist_std <= 44.82179832458496) {
                        if (ss_std <= 12.158487796783447) {
                            votes[35] = 4;
                        } else {
                            votes[35] = 3;
                        }
                    } else {
                        if (rr_std <= 10.823060035705566) {
                            votes[35] = 4;
                        } else {
                            if (first_peak_freq <= 0.54931640625) {
                                if (rr_std <= 23.787312507629395) {
                                    if (fwhm <= 7.648000001907349) {
                                        votes[35] = 1;
                                    } else {
                                        if (ss_std <= 10.365653038024902) {
                                            votes[35] = 1;
                                        } else {
                                            votes[35] = 5;
                                        }
                                    }
                                } else {
                                    votes[35] = 1;
                                }
                            } else {
                                if (rr_median <= 49.25) {
                                    votes[35] = 1;
                                } else {
                                    votes[35] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 19.74418067932129) {
                        if (diff_median <= 13.183835506439209) {
                            if (ss_median <= 61.25) {
                                if (num_valleys <= 82.5) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 4;
                                }
                            } else {
                                votes[35] = 4;
                            }
                        } else {
                            votes[35] = 4;
                        }
                    } else {
                        votes[35] = 1;
                    }
                }
            } else {
                if (diastolic_amp <= -13.47571325302124) {
                    if (systolic_amp <= 4404.812744140625) {
                        votes[35] = 4;
                    } else {
                        if (rr_median <= 88.0) {
                            if (num_peaks <= 143.5) {
                                votes[35] = 4;
                            } else {
                                votes[35] = 4;
                            }
                        } else {
                            votes[35] = 4;
                        }
                    }
                } else {
                    if (ss_median <= 53.75) {
                        if (rr_std <= 12.283388614654541) {
                            if (fwhm <= 8.07200002670288) {
                                votes[35] = 3;
                            } else {
                                votes[35] = 3;
                            }
                        } else {
                            if (dist_median <= -0.19061311334371567) {
                                if (dist_std <= 61.21727752685547) {
                                    votes[35] = 5;
                                } else {
                                    if (dist_std <= 197.90269470214844) {
                                        votes[35] = 5;
                                    } else {
                                        votes[35] = 5;
                                    }
                                }
                            } else {
                                if (num_valleys <= 75.5) {
                                    votes[35] = 5;
                                } else {
                                    votes[35] = 3;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 134.5) {
                            votes[35] = 5;
                        } else {
                            if (systolic_area <= 318718.859375) {
                                votes[35] = 5;
                            } else {
                                if (systolic_area <= 1253600.625) {
                                    votes[35] = 4;
                                } else {
                                    if (pulse_interval <= 0.0911128930747509) {
                                        votes[35] = 4;
                                    } else {
                                        votes[35] = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.018765224143862724) {
            if (diff_median <= 0.004161820979788899) {
                votes[35] = 2;
            } else {
                if (num_peaks <= 72.5) {
                    votes[35] = 0;
                } else {
                    if (diastolic_area <= 6.995980739593506) {
                        votes[35] = 0;
                    } else {
                        if (systolic_area <= 7.575268745422363) {
                            votes[35] = 0;
                        } else {
                            votes[35] = 0;
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 66.5) {
                if (rr_std <= 22.032867431640625) {
                    if (diastolic_time <= 0.1845438815653324) {
                        if (diff_median <= 4.337820768356323) {
                            votes[35] = 4;
                        } else {
                            if (systolic_area <= 41465.041015625) {
                                votes[35] = 1;
                            } else {
                                if (systolic_area <= 98585.83203125) {
                                    if (pulse_interval <= 0.43244999647140503) {
                                        votes[35] = 5;
                                    } else {
                                        votes[35] = 5;
                                    }
                                } else {
                                    if (dist_std <= 61.286216735839844) {
                                        votes[35] = 3;
                                    } else {
                                        if (pulse_interval <= 0.29274073243141174) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 147.5) {
                            if (ss_median <= 47.0) {
                                votes[35] = 1;
                            } else {
                                if (dist_std <= 47.94912147521973) {
                                    votes[35] = 2;
                                } else {
                                    if (systolic_amp <= 5528.6591796875) {
                                        if (dist_median <= -0.012733737006783485) {
                                            votes[35] = 2;
                                        } else {
                                            votes[35] = 2;
                                        }
                                    } else {
                                        votes[35] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[35] = 5;
                        }
                    }
                } else {
                    if (dist_std <= 39.96341514587402) {
                        votes[35] = 4;
                    } else {
                        if (num_valleys <= 74.5) {
                            if (pulse_interval <= 0.4455462098121643) {
                                votes[35] = 5;
                            } else {
                                votes[35] = 1;
                            }
                        } else {
                            votes[35] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 12.02743911743164) {
                    if (dist_std <= 123.29075241088867) {
                        votes[35] = 2;
                    } else {
                        if (ss_median <= 69.5) {
                            if (diff_median <= 10.353278160095215) {
                                votes[35] = 2;
                            } else {
                                votes[35] = 2;
                            }
                        } else {
                            votes[35] = 2;
                        }
                    }
                } else {
                    votes[35] = 3;
                }
            }
        }
    }

// Decision rules for tree 36
    if (dist_std <= 0.020726200193166733) {
        if (systolic_amp <= 0.7529411911964417) {
            if (dist_std <= 0.012069156859070063) {
                votes[36] = 0;
            } else {
                if (pp_interval <= 0.36789610981941223) {
                    votes[36] = 0;
                } else {
                    votes[36] = 2;
                }
            }
        } else {
            votes[36] = 0;
        }
    } else {
        if (ss_median <= 66.5) {
            if (diastolic_area <= -17326.68359375) {
                if (pp_interval <= 0.3439999967813492) {
                    if (fwhm <= 6.271999835968018) {
                        if (ss_median <= 53.0) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.4599999934434891) {
                            votes[36] = 4;
                        } else {
                            votes[36] = 4;
                        }
                    }
                } else {
                    if (dist_median <= -0.004035974736325443) {
                        if (dist_median <= -0.007324794074520469) {
                            if (num_peaks <= 144.5) {
                                votes[36] = 2;
                            } else {
                                votes[36] = 2;
                            }
                        } else {
                            if (systolic_area <= 25389.0771484375) {
                                votes[36] = 1;
                            } else {
                                votes[36] = 2;
                            }
                        }
                    } else {
                        votes[36] = 5;
                    }
                }
            } else {
                if (systolic_area <= 1151026.0) {
                    if (diastolic_area <= -21.06086826324463) {
                        if (pulse_interval <= 0.30867724120616913) {
                            if (diastolic_amp <= -2899.66943359375) {
                                votes[36] = 1;
                            } else {
                                if (systolic_amp <= 8154.876220703125) {
                                    if (fwhm <= 7.727999925613403) {
                                        if (num_valleys <= 77.5) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    } else {
                                        votes[36] = 4;
                                    }
                                } else {
                                    votes[36] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 44.25) {
                                votes[36] = 2;
                            } else {
                                if (systolic_area <= 15920.58935546875) {
                                    votes[36] = 1;
                                } else {
                                    votes[36] = 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.08722750097513199) {
                            if (pp_interval <= 0.012316109612584114) {
                                if (diff_median <= 3.445640802383423) {
                                    votes[36] = 4;
                                } else {
                                    votes[36] = 3;
                                }
                            } else {
                                if (num_peaks <= 141.5) {
                                    if (rr_median <= 42.5) {
                                        votes[36] = 5;
                                    } else {
                                        if (dist_median <= -0.009532380383461714) {
                                            votes[36] = 1;
                                        } else {
                                            votes[36] = 3;
                                        }
                                    }
                                } else {
                                    if (dist_std <= 46.42578315734863) {
                                        votes[36] = 3;
                                    } else {
                                        if (systolic_area <= 428432.0) {
                                            votes[36] = 1;
                                        } else {
                                            votes[36] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 43646.673828125) {
                                votes[36] = 1;
                            } else {
                                if (systolic_area <= 115997.87109375) {
                                    if (rr_std <= 12.843276500701904) {
                                        votes[36] = 5;
                                    } else {
                                        votes[36] = 5;
                                    }
                                } else {
                                    if (diff_median <= 14.046268463134766) {
                                        if (dist_std <= 92.61427307128906) {
                                            votes[36] = 5;
                                        } else {
                                            votes[36] = 3;
                                        }
                                    } else {
                                        if (dist_std <= 111.13611602783203) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.382537364959717) {
                        if (diff_median <= 8.763797283172607) {
                            if (ss_std <= 9.274539470672607) {
                                votes[36] = 3;
                            } else {
                                votes[36] = 4;
                            }
                        } else {
                            if (rr_std <= 8.364310264587402) {
                                if (pulse_interval <= 0.04023989103734493) {
                                    votes[36] = 3;
                                } else {
                                    votes[36] = 3;
                                }
                            } else {
                                votes[36] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 137.5) {
                            votes[36] = 3;
                        } else {
                            if (ss_median <= 45.25) {
                                votes[36] = 1;
                            } else {
                                if (diff_median <= 16.620473861694336) {
                                    if (pp_interval <= 0.032132597640156746) {
                                        votes[36] = 4;
                                    } else {
                                        if (rr_std <= 19.039877891540527) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    }
                                } else {
                                    votes[36] = 3;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (systolic_area <= 180689.3984375) {
                if (dist_std <= 110.8818130493164) {
                    if (dist_median <= -0.01724873948842287) {
                        votes[36] = 5;
                    } else {
                        if (ss_std <= 14.702091693878174) {
                            votes[36] = 2;
                        } else {
                            votes[36] = 4;
                        }
                    }
                } else {
                    if (pp_interval <= 0.47474999725818634) {
                        if (dist_std <= 160.27716064453125) {
                            votes[36] = 2;
                        } else {
                            if (dist_std <= 190.8931884765625) {
                                if (ss_std <= 7.490032911300659) {
                                    votes[36] = 2;
                                } else {
                                    votes[36] = 2;
                                }
                            } else {
                                votes[36] = 2;
                            }
                        }
                    } else {
                        votes[36] = 2;
                    }
                }
            } else {
                if (ss_std <= 13.748049259185791) {
                    if (pp_interval <= 0.13929230347275734) {
                        if (systolic_area <= 986430.78125) {
                            votes[36] = 3;
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        votes[36] = 3;
                    }
                } else {
                    votes[36] = 5;
                }
            }
        }
    }

// Decision rules for tree 37
    if (dist_std <= 0.019624496810138226) {
        if (rr_std <= 176.0) {
            if (num_valleys <= 42.5) {
                votes[37] = 0;
            } else {
                votes[37] = 0;
            }
        } else {
            votes[37] = 0;
        }
    } else {
        if (pp_interval <= 0.24066080152988434) {
            if (rr_std <= 9.50919771194458) {
                if (diastolic_amp <= -3.425513505935669) {
                    if (dist_std <= 185.79859924316406) {
                        if (diff_median <= 10.968363285064697) {
                            votes[37] = 4;
                        } else {
                            votes[37] = 3;
                        }
                    } else {
                        if (num_valleys <= 64.5) {
                            votes[37] = 2;
                        } else {
                            votes[37] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 3736837.125) {
                        if (fwhm <= 7.864000082015991) {
                            if (diastolic_time <= 0.016108108684420586) {
                                if (rr_median <= 52.5) {
                                    if (first_peak_freq <= 0.67138671875) {
                                        votes[37] = 1;
                                    } else {
                                        votes[37] = 1;
                                    }
                                } else {
                                    if (rr_std <= 2.7791260480880737) {
                                        votes[37] = 1;
                                    } else {
                                        votes[37] = 3;
                                    }
                                }
                            } else {
                                votes[37] = 3;
                            }
                        } else {
                            if (systolic_time <= 0.03486103191971779) {
                                votes[37] = 3;
                            } else {
                                if (ss_std <= 8.389012813568115) {
                                    if (systolic_area <= 1294490.0) {
                                        if (rr_median <= 48.25) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 3;
                                        }
                                    } else {
                                        votes[37] = 5;
                                    }
                                } else {
                                    if (dist_std <= 45.01168632507324) {
                                        votes[37] = 3;
                                    } else {
                                        if (systolic_area <= 164107.8515625) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        votes[37] = 4;
                    }
                }
            } else {
                if (systolic_time <= 0.09837742522358894) {
                    if (systolic_area <= 1347120.8125) {
                        if (pp_interval <= 0.029059337452054024) {
                            if (diff_median <= 4.231915473937988) {
                                votes[37] = 4;
                            } else {
                                votes[37] = 4;
                            }
                        } else {
                            if (num_valleys <= 66.0) {
                                votes[37] = 4;
                            } else {
                                if (dist_std <= 46.51698303222656) {
                                    if (ss_median <= 48.5) {
                                        votes[37] = 4;
                                    } else {
                                        votes[37] = 3;
                                    }
                                } else {
                                    if (fwhm <= 7.624000072479248) {
                                        if (rr_median <= 45.25) {
                                            votes[37] = 1;
                                        } else {
                                            votes[37] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 496075.890625) {
                                            votes[37] = 1;
                                        } else {
                                            votes[37] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 32.760976791381836) {
                            if (diff_median <= 17.183536529541016) {
                                if (ss_std <= 8.386374473571777) {
                                    votes[37] = 3;
                                } else {
                                    if (num_peaks <= 137.5) {
                                        votes[37] = 4;
                                    } else {
                                        if (systolic_area <= 1531928.75) {
                                            votes[37] = 4;
                                        } else {
                                            votes[37] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[37] = 3;
                            }
                        } else {
                            votes[37] = 1;
                        }
                    }
                } else {
                    if (dist_std <= 53.495933532714844) {
                        if (rr_std <= 11.934546947479248) {
                            if (dist_median <= -0.24176622927188873) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 3;
                            }
                        } else {
                            if (systolic_amp <= 3813.686767578125) {
                                votes[37] = 4;
                            } else {
                                if (dist_median <= -0.011587636079639196) {
                                    votes[37] = 4;
                                } else {
                                    votes[37] = 4;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 1022902.84375) {
                            if (fwhm <= 8.164000034332275) {
                                if (fwhm <= 7.95199990272522) {
                                    if (rr_median <= 67.0) {
                                        if (dist_std <= 70.7081298828125) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 5;
                                        }
                                    } else {
                                        votes[37] = 4;
                                    }
                                } else {
                                    if (dist_median <= -0.2890859767794609) {
                                        votes[37] = 3;
                                    } else {
                                        votes[37] = 1;
                                    }
                                }
                            } else {
                                if (num_peaks <= 133.0) {
                                    votes[37] = 5;
                                } else {
                                    if (systolic_time <= 0.11994580924510956) {
                                        votes[37] = 1;
                                    } else {
                                        votes[37] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[37] = 4;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 183.92933654785156) {
                if (rr_std <= 22.68282699584961) {
                    if (systolic_amp <= 5261.0185546875) {
                        if (ss_median <= 55.75) {
                            if (num_peaks <= 139.5) {
                                if (systolic_area <= 30530.22265625) {
                                    votes[37] = 1;
                                } else {
                                    if (ss_median <= 47.5) {
                                        votes[37] = 5;
                                    } else {
                                        votes[37] = 5;
                                    }
                                }
                            } else {
                                if (fwhm <= 8.168000221252441) {
                                    votes[37] = 5;
                                } else {
                                    votes[37] = 3;
                                }
                            }
                        } else {
                            if (systolic_area <= 127018.375) {
                                if (diff_median <= 3.206412196159363) {
                                    votes[37] = 4;
                                } else {
                                    if (num_valleys <= 59.0) {
                                        if (pulse_interval <= 0.42222221195697784) {
                                            votes[37] = 2;
                                        } else {
                                            votes[37] = 2;
                                        }
                                    } else {
                                        if (systolic_area <= 26959.3603515625) {
                                            votes[37] = 2;
                                        } else {
                                            votes[37] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (num_valleys <= 63.5) {
                                    votes[37] = 3;
                                } else {
                                    votes[37] = 3;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.5063333213329315) {
                            if (rr_std <= 8.943044900894165) {
                                votes[37] = 2;
                            } else {
                                votes[37] = 2;
                            }
                        } else {
                            if (systolic_area <= 23654.7939453125) {
                                votes[37] = 2;
                            } else {
                                votes[37] = 5;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.33704762160778046) {
                        votes[37] = 4;
                    } else {
                        votes[37] = 1;
                    }
                }
            } else {
                if (num_valleys <= 66.5) {
                    if (ss_median <= 69.5) {
                        if (num_peaks <= 114.0) {
                            votes[37] = 2;
                        } else {
                            votes[37] = 2;
                        }
                    } else {
                        votes[37] = 2;
                    }
                } else {
                    if (systolic_time <= 0.24599166959524155) {
                        votes[37] = 2;
                    } else {
                        votes[37] = 5;
                    }
                }
            }
        }
    }

// Decision rules for tree 38
    if (diff_median <= 0.06368640158325434) {
        if (diff_median <= 0.0038142817793413997) {
            votes[38] = 2;
        } else {
            if (dist_median <= -0.0004403133352752775) {
                votes[38] = 0;
            } else {
                if (num_valleys <= 79.5) {
                    if (dist_std <= 0.014133153017610312) {
                        votes[38] = 0;
                    } else {
                        votes[38] = 0;
                    }
                } else {
                    votes[38] = 0;
                }
            }
        }
    } else {
        if (num_peaks <= 116.5) {
            if (ss_median <= 64.5) {
                if (ss_std <= 2.631524085998535) {
                    votes[38] = 3;
                } else {
                    if (dist_median <= -1.1909913420677185) {
                        votes[38] = 4;
                    } else {
                        if (ss_std <= 12.901429653167725) {
                            if (diff_median <= 10.508825778961182) {
                                votes[38] = 5;
                            } else {
                                votes[38] = 5;
                            }
                        } else {
                            votes[38] = 3;
                        }
                    }
                }
            } else {
                if (rr_median <= 74.5) {
                    if (pp_interval <= 0.4691617637872696) {
                        if (pulse_interval <= 0.22674038261175156) {
                            votes[38] = 2;
                        } else {
                            votes[38] = 2;
                        }
                    } else {
                        votes[38] = 2;
                    }
                } else {
                    votes[38] = 3;
                }
            }
        } else {
            if (systolic_area <= 1218502.0) {
                if (diastolic_area <= -6.038994312286377) {
                    if (diastolic_time <= 0.7338181734085083) {
                        if (ss_std <= 16.975622177124023) {
                            if (pp_interval <= 0.1727263703942299) {
                                if (dist_std <= 51.63556098937988) {
                                    if (systolic_amp <= 7800.438232421875) {
                                        votes[38] = 4;
                                    } else {
                                        votes[38] = 3;
                                    }
                                } else {
                                    if (rr_std <= 12.376571655273438) {
                                        votes[38] = 3;
                                    } else {
                                        votes[38] = 1;
                                    }
                                }
                            } else {
                                if (dist_median <= -0.009278791025280952) {
                                    if (diastolic_time <= 0.5454285740852356) {
                                        if (ss_median <= 49.75) {
                                            votes[38] = 2;
                                        } else {
                                            votes[38] = 2;
                                        }
                                    } else {
                                        votes[38] = 2;
                                    }
                                } else {
                                    if (second_peak_freq <= 1.0986328125) {
                                        if (diff_median <= 2.8429393768310547) {
                                            votes[38] = 4;
                                        } else {
                                            votes[38] = 2;
                                        }
                                    } else {
                                        votes[38] = 5;
                                    }
                                }
                            }
                        } else {
                            if (fwhm <= 6.46399998664856) {
                                votes[38] = 1;
                            } else {
                                if (dist_std <= 57.98553466796875) {
                                    votes[38] = 4;
                                } else {
                                    votes[38] = 4;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 7.682042360305786) {
                            if (ss_std <= 9.80071210861206) {
                                votes[38] = 1;
                            } else {
                                votes[38] = 1;
                            }
                        } else {
                            votes[38] = 1;
                        }
                    }
                } else {
                    if (pp_interval <= 0.08774193376302719) {
                        if (fwhm <= 3.62799996137619) {
                            votes[38] = 4;
                        } else {
                            if (rr_std <= 9.564410209655762) {
                                if (dist_median <= -0.448633074760437) {
                                    if (ss_std <= 10.391475200653076) {
                                        votes[38] = 1;
                                    } else {
                                        votes[38] = 1;
                                    }
                                } else {
                                    if (systolic_area <= 772219.34375) {
                                        if (systolic_area <= 67468.671875) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 50.75) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (second_peak_freq <= 1.03759765625) {
                                    if (num_valleys <= 71.5) {
                                        votes[38] = 4;
                                    } else {
                                        if (dist_std <= 129.63005828857422) {
                                            votes[38] = 1;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 56.5) {
                                        votes[38] = 1;
                                    } else {
                                        votes[38] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (pp_interval <= 0.957666665315628) {
                            if (rr_std <= 0.4864427000284195) {
                                if (first_peak_freq <= 1.03759765625) {
                                    votes[38] = 1;
                                } else {
                                    votes[38] = 2;
                                }
                            } else {
                                if (dist_std <= 47.69665336608887) {
                                    if (ss_median <= 54.5) {
                                        if (first_peak_freq <= 0.54931640625) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    } else {
                                        votes[38] = 5;
                                    }
                                } else {
                                    if (ss_std <= 2.6137912273406982) {
                                        if (ss_std <= 1.5884865522384644) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 2;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.2630184292793274) {
                                            votes[38] = 5;
                                        } else {
                                            votes[38] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[38] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 9.382537364959717) {
                    if (dist_median <= -0.4354674518108368) {
                        votes[38] = 3;
                    } else {
                        if (ss_std <= 11.639593601226807) {
                            if (rr_std <= 7.962765455245972) {
                                votes[38] = 3;
                            } else {
                                votes[38] = 3;
                            }
                        } else {
                            votes[38] = 1;
                        }
                    }
                } else {
                    if (ss_std <= 8.964151859283447) {
                        votes[38] = 1;
                    } else {
                        if (first_peak_freq <= 0.54931640625) {
                            if (diff_median <= 17.183536529541016) {
                                if (rr_std <= 10.033173561096191) {
                                    if (dist_median <= -0.18112307786941528) {
                                        votes[38] = 4;
                                    } else {
                                        votes[38] = 4;
                                    }
                                } else {
                                    if (rr_median <= 60.5) {
                                        votes[38] = 4;
                                    } else {
                                        votes[38] = 4;
                                    }
                                }
                            } else {
                                votes[38] = 4;
                            }
                        } else {
                            votes[38] = 3;
                        }
                    }
                }
            }
        }
    }

// Decision rules for tree 39
    if (dist_std <= 0.02763257548213005) {
        if (rr_median <= 372.5) {
            if (dist_median <= -0.000469583785161376) {
                votes[39] = 0;
            } else {
                if (dist_std <= 0.012069156859070063) {
                    votes[39] = 0;
                } else {
                    if (ss_median <= 78.5) {
                        votes[39] = 0;
                    } else {
                        votes[39] = 0;
                    }
                }
            }
        } else {
            votes[39] = 0;
        }
    } else {
        if (ss_median <= 66.5) {
            if (pulse_interval <= 0.3475731164216995) {
                if (systolic_area <= 1149000.0) {
                    if (diastolic_amp <= -13.689396381378174) {
                        if (diastolic_time <= 1.0228571593761444) {
                            if (dist_median <= -0.013044187799096107) {
                                if (diff_median <= 3.3533248901367188) {
                                    votes[39] = 4;
                                } else {
                                    votes[39] = 4;
                                }
                            } else {
                                if (num_valleys <= 74.5) {
                                    if (second_peak_freq <= 0.54931640625) {
                                        votes[39] = 1;
                                    } else {
                                        if (pulse_interval <= 0.20488888770341873) {
                                            votes[39] = 5;
                                        } else {
                                            votes[39] = 4;
                                        }
                                    }
                                } else {
                                    if (second_peak_freq <= 1.28173828125) {
                                        if (rr_median <= 73.0) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 4;
                                        }
                                    } else {
                                        votes[39] = 1;
                                    }
                                }
                            }
                        } else {
                            votes[39] = 1;
                        }
                    } else {
                        if (pulse_interval <= 0.08769845589995384) {
                            if (systolic_area <= 67468.671875) {
                                if (second_peak_freq <= 0.79345703125) {
                                    votes[39] = 3;
                                } else {
                                    if (ss_median <= 53.25) {
                                        votes[39] = 4;
                                    } else {
                                        votes[39] = 3;
                                    }
                                }
                            } else {
                                if (ss_std <= 5.654526472091675) {
                                    votes[39] = 5;
                                } else {
                                    if (rr_median <= 43.75) {
                                        if (diff_median <= 25.96163272857666) {
                                            votes[39] = 5;
                                        } else {
                                            votes[39] = 1;
                                        }
                                    } else {
                                        if (dist_std <= 75.02841567993164) {
                                            votes[39] = 1;
                                        } else {
                                            votes[39] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 12.417933464050293) {
                                if (dist_std <= 146.54998016357422) {
                                    if (systolic_area <= 162632.8125) {
                                        if (dist_median <= -0.16175317019224167) {
                                            votes[39] = 5;
                                        } else {
                                            votes[39] = 3;
                                        }
                                    } else {
                                        if (rr_median <= 49.5) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 3;
                                        }
                                    }
                                } else {
                                    if (ss_std <= 3.5087573528289795) {
                                        votes[39] = 3;
                                    } else {
                                        if (rr_std <= 2.342102885246277) {
                                            votes[39] = 1;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (dist_median <= -0.1897648498415947) {
                                    if (systolic_area <= 242542.609375) {
                                        if (num_peaks <= 145.0) {
                                            votes[39] = 5;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 15.923634052276611) {
                                            votes[39] = 5;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 142.0) {
                                        if (num_valleys <= 74.5) {
                                            votes[39] = 5;
                                        } else {
                                            votes[39] = 1;
                                        }
                                    } else {
                                        votes[39] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.442267417907715) {
                        if (rr_median <= 46.25) {
                            votes[39] = 1;
                        } else {
                            if (ss_std <= 8.025711059570312) {
                                votes[39] = 3;
                            } else {
                                if (second_peak_freq <= 1.03759765625) {
                                    votes[39] = 3;
                                } else {
                                    votes[39] = 3;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 135.5) {
                            votes[39] = 1;
                        } else {
                            if (diff_median <= 16.301252365112305) {
                                if (dist_median <= 0.041175248101353645) {
                                    if (pp_interval <= 0.03143990132957697) {
                                        votes[39] = 4;
                                    } else {
                                        if (first_peak_freq <= 0.54931640625) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 4;
                                        }
                                    }
                                } else {
                                    votes[39] = 4;
                                }
                            } else {
                                votes[39] = 3;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 22.68282699584961) {
                    if (diastolic_amp <= -2063.0697631835938) {
                        if (rr_median <= 55.75) {
                            if (ss_median <= 47.25) {
                                votes[39] = 2;
                            } else {
                                if (dist_median <= -0.005419750232249498) {
                                    votes[39] = 2;
                                } else {
                                    votes[39] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 14.320391178131104) {
                                votes[39] = 5;
                            } else {
                                votes[39] = 2;
                            }
                        }
                    } else {
                        if (num_valleys <= 75.0) {
                            if (dist_median <= -0.0838339515030384) {
                                votes[39] = 5;
                            } else {
                                votes[39] = 5;
                            }
                        } else {
                            if (rr_std <= 15.061680793762207) {
                                votes[39] = 3;
                            } else {
                                votes[39] = 1;
                            }
                        }
                    }
                } else {
                    if (pp_interval <= 0.601333349943161) {
                        votes[39] = 1;
                    } else {
                        votes[39] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 126.0) {
                if (systolic_time <= 0.22947464883327484) {
                    if (diastolic_area <= -5.692797422409058) {
                        if (systolic_amp <= 6400.653076171875) {
                            votes[39] = 2;
                        } else {
                            votes[39] = 2;
                        }
                    } else {
                        votes[39] = 5;
                    }
                } else {
                    if (pp_interval <= 0.47474999725818634) {
                        if (rr_std <= 9.098971843719482) {
                            if (num_valleys <= 65.5) {
                                votes[39] = 2;
                            } else {
                                if (rr_median <= 70.75) {
                                    votes[39] = 2;
                                } else {
                                    votes[39] = 2;
                                }
                            }
                        } else {
                            votes[39] = 2;
                        }
                    } else {
                        if (fwhm <= 8.099999904632568) {
                            votes[39] = 5;
                        } else {
                            votes[39] = 2;
                        }
                    }
                }
            } else {
                if (systolic_amp <= 1988.517822265625) {
                    if (ss_median <= 72.5) {
                        if (systolic_time <= 0.19001809507608414) {
                            votes[39] = 3;
                        } else {
                            votes[39] = 2;
                        }
                    } else {
                        votes[39] = 5;
                    }
                } else {
                    if (systolic_amp <= 5288.051025390625) {
                        votes[39] = 4;
                    } else {
                        votes[39] = 5;
                    }
                }
            }
        }
    }

// Decision rules for tree 40
    if (diff_median <= 0.08508018869906664) {
        if (diff_median <= 0.003825392806902528) {
            votes[40] = 2;
        } else {
            if (diastolic_area <= 6.677907943725586) {
                votes[40] = 0;
            } else {
                if (num_peaks <= 101.5) {
                    votes[40] = 0;
                } else {
                    votes[40] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 69.75) {
            if (systolic_area <= 1138412.0) {
                if (rr_std <= 22.868986129760742) {
                    if (diastolic_amp <= -12.56165361404419) {
                        if (pp_interval <= 0.16944444179534912) {
                            if (diastolic_time <= 0.08933962322771549) {
                                if (dist_median <= -0.22061405330896378) {
                                    votes[40] = 4;
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                votes[40] = 1;
                            }
                        } else {
                            if (diastolic_amp <= -2981.948974609375) {
                                votes[40] = 5;
                            } else {
                                if (systolic_amp <= 5347.503662109375) {
                                    if (rr_median <= 44.25) {
                                        if (fwhm <= 7.135999917984009) {
                                            votes[40] = 2;
                                        } else {
                                            votes[40] = 2;
                                        }
                                    } else {
                                        if (diff_median <= 3.015321731567383) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.5836883187294006) {
                                        votes[40] = 2;
                                    } else {
                                        votes[40] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.08052363619208336) {
                            if (fwhm <= 3.3679999709129333) {
                                votes[40] = 4;
                            } else {
                                if (systolic_time <= 0.011645713821053505) {
                                    votes[40] = 3;
                                } else {
                                    if (rr_std <= 2.8470877408981323) {
                                        votes[40] = 5;
                                    } else {
                                        if (fwhm <= 7.588000059127808) {
                                            votes[40] = 1;
                                        } else {
                                            votes[40] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 137.5) {
                                if (rr_median <= 94.25) {
                                    if (rr_std <= 5.462024450302124) {
                                        if (ss_median <= 43.5) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 50.5) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    }
                                } else {
                                    votes[40] = 1;
                                }
                            } else {
                                if (dist_std <= 52.69721984863281) {
                                    if (diff_median <= 12.804951667785645) {
                                        if (ss_std <= 12.192684173583984) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    } else {
                                        votes[40] = 3;
                                    }
                                } else {
                                    if (pp_interval <= 0.11464761570096016) {
                                        if (ss_median <= 44.5) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 3;
                                        }
                                    } else {
                                        if (dist_median <= -0.17680954933166504) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 0.42588235437870026) {
                        if (ss_std <= 15.664553165435791) {
                            if (systolic_time <= 0.21554838120937347) {
                                if (rr_median <= 53.75) {
                                    votes[40] = 4;
                                } else {
                                    votes[40] = 1;
                                }
                            } else {
                                votes[40] = 5;
                            }
                        } else {
                            if (rr_std <= 30.37692928314209) {
                                if (first_peak_freq <= 0.42724609375) {
                                    votes[40] = 4;
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                votes[40] = 4;
                            }
                        }
                    } else {
                        votes[40] = 1;
                    }
                }
            } else {
                if (diff_median <= 17.532899856567383) {
                    if (rr_std <= 8.09554147720337) {
                        if (rr_std <= 6.622230291366577) {
                            votes[40] = 3;
                        } else {
                            votes[40] = 3;
                        }
                    } else {
                        if (num_valleys <= 87.5) {
                            if (ss_std <= 8.165991306304932) {
                                votes[40] = 4;
                            } else {
                                if (pp_interval <= 0.032132597640156746) {
                                    votes[40] = 4;
                                } else {
                                    if (dist_median <= -0.13955222070217133) {
                                        if (first_peak_freq <= 0.54931640625) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 61.5) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[40] = 1;
                        }
                    }
                } else {
                    if (dist_std <= 50.35670852661133) {
                        votes[40] = 3;
                    } else {
                        votes[40] = 1;
                    }
                }
            }
        } else {
            if (systolic_area <= 146255.0078125) {
                if (rr_std <= 11.376542568206787) {
                    if (ss_median <= 73.25) {
                        votes[40] = 2;
                    } else {
                        votes[40] = 2;
                    }
                } else {
                    if (rr_std <= 18.97255229949951) {
                        votes[40] = 3;
                    } else {
                        votes[40] = 4;
                    }
                }
            } else {
                if (dist_median <= -0.13411444053053856) {
                    votes[40] = 5;
                } else {
                    votes[40] = 3;
                }
            }
        }
    }

// Decision rules for tree 41
    if (pulse_interval <= 0.24066080152988434) {
        if (rr_std <= 9.6126389503479) {
            if (rr_std <= 0.6357192695140839) {
                if (diastolic_time <= 0.008799999952316284) {
                    if (rr_median <= 47.5) {
                        votes[41] = 1;
                    } else {
                        votes[41] = 3;
                    }
                } else {
                    votes[41] = 2;
                }
            } else {
                if (ss_median <= 47.25) {
                    if (dist_std <= 72.25442504882812) {
                        if (rr_std <= 7.88684868812561) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 3;
                        }
                    } else {
                        if (systolic_area <= 485458.46875) {
                            if (fwhm <= 7.851999998092651) {
                                votes[41] = 1;
                            } else {
                                if (systolic_area <= 252116.5) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 7.5504491329193115) {
                                votes[41] = 5;
                            } else {
                                votes[41] = 5;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 8.758017539978027) {
                        if (dist_std <= 139.8782730102539) {
                            if (pp_interval <= 0.038211388513445854) {
                                votes[41] = 1;
                            } else {
                                if (num_peaks <= 122.0) {
                                    votes[41] = 3;
                                } else {
                                    if (pp_interval <= 0.07304411754012108) {
                                        votes[41] = 3;
                                    } else {
                                        if (num_valleys <= 73.5) {
                                            votes[41] = 1;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[41] = 3;
                        }
                    } else {
                        if (ss_std <= 12.432472229003906) {
                            if (dist_std <= 174.2980728149414) {
                                if (dist_median <= -0.63005131483078) {
                                    if (num_peaks <= 145.5) {
                                        votes[41] = 3;
                                    } else {
                                        votes[41] = 1;
                                    }
                                } else {
                                    if (ss_std <= 8.967487335205078) {
                                        votes[41] = 3;
                                    } else {
                                        if (dist_median <= -0.2213132008910179) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[41] = 1;
                            }
                        } else {
                            votes[41] = 1;
                        }
                    }
                }
            }
        } else {
            if (systolic_area <= 1128021.125) {
                if (systolic_area <= 46610.884765625) {
                    if (diff_median <= 0.7731223106384277) {
                        votes[41] = 0;
                    } else {
                        if (num_peaks <= 130.5) {
                            votes[41] = 4;
                        } else {
                            if (systolic_amp <= 5153.363525390625) {
                                votes[41] = 4;
                            } else {
                                votes[41] = 4;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 255514.0625) {
                        if (dist_median <= -0.15410815551877022) {
                            if (dist_median <= -0.8618544042110443) {
                                votes[41] = 5;
                            } else {
                                if (fwhm <= 8.044000148773193) {
                                    if (diff_median <= 13.771203517913818) {
                                        votes[41] = 5;
                                    } else {
                                        votes[41] = 5;
                                    }
                                } else {
                                    votes[41] = 5;
                                }
                            }
                        } else {
                            if (fwhm <= 7.8399999141693115) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 3;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.0764753669500351) {
                            if (diastolic_area <= -8.03745722770691) {
                                votes[41] = 3;
                            } else {
                                if (systolic_area <= 582879.875) {
                                    if (ss_std <= 9.976829528808594) {
                                        votes[41] = 1;
                                    } else {
                                        votes[41] = 1;
                                    }
                                } else {
                                    if (num_peaks <= 137.0) {
                                        votes[41] = 1;
                                    } else {
                                        if (pulse_interval <= 0.054014693945646286) {
                                            votes[41] = 1;
                                        } else {
                                            votes[41] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 69.5) {
                                if (rr_std <= 16.19830322265625) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 5;
                                }
                            } else {
                                if (rr_std <= 10.679264068603516) {
                                    votes[41] = 3;
                                } else {
                                    if (systolic_time <= 0.10253157839179039) {
                                        if (systolic_area <= 412942.703125) {
                                            votes[41] = 1;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    } else {
                                        if (dist_std <= 44.39200782775879) {
                                            votes[41] = 4;
                                        } else {
                                            votes[41] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (ss_median <= 44.25) {
                    votes[41] = 5;
                } else {
                    if (diff_median <= 17.183536529541016) {
                        if (num_peaks <= 136.5) {
                            votes[41] = 4;
                        } else {
                            if (dist_median <= 0.014582973439246416) {
                                if (first_peak_freq <= 0.54931640625) {
                                    if (rr_std <= 19.7276029586792) {
                                        if (ss_std <= 9.162158966064453) {
                                            votes[41] = 4;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    } else {
                                        votes[41] = 4;
                                    }
                                } else {
                                    votes[41] = 4;
                                }
                            } else {
                                votes[41] = 3;
                            }
                        }
                    } else {
                        votes[41] = 3;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.01656888611614704) {
            if (diff_median <= 0.004493687301874161) {
                votes[41] = 0;
            } else {
                if (dist_median <= -0.0004311068478273228) {
                    votes[41] = 0;
                } else {
                    if (rr_std <= 2.0) {
                        if (pp_interval <= 0.94200000166893) {
                            votes[41] = 0;
                        } else {
                            votes[41] = 0;
                        }
                    } else {
                        votes[41] = 0;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.8788333237171173) {
                if (ss_median <= 69.75) {
                    if (diastolic_amp <= -19.68646812438965) {
                        if (diastolic_time <= 0.4556785821914673) {
                            if (systolic_amp <= 5366.5263671875) {
                                votes[41] = 2;
                            } else {
                                if (diff_median <= 3.8777862787246704) {
                                    votes[41] = 2;
                                } else {
                                    votes[41] = 2;
                                }
                            }
                        } else {
                            if (pp_interval <= 0.4168771952390671) {
                                if (ss_std <= 14.962206840515137) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 4;
                                }
                            } else {
                                if (dist_std <= 49.7979679107666) {
                                    votes[41] = 5;
                                } else {
                                    if (rr_median <= 48.75) {
                                        votes[41] = 2;
                                    } else {
                                        votes[41] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (pp_interval <= 0.9357777833938599) {
                            if (rr_std <= 14.822081565856934) {
                                if (dist_std <= 66.71958541870117) {
                                    if (diff_median <= 10.82575798034668) {
                                        votes[41] = 3;
                                    } else {
                                        votes[41] = 3;
                                    }
                                } else {
                                    if (ss_std <= 7.678830146789551) {
                                        if (systolic_area <= 98357.73828125) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 3;
                                        }
                                    } else {
                                        if (first_peak_freq <= 0.67138671875) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (dist_median <= -0.20627178251743317) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 5;
                                }
                            }
                        } else {
                            votes[41] = 1;
                        }
                    }
                } else {
                    if (dist_std <= 123.29075241088867) {
                        if (first_peak_freq <= 0.42724609375) {
                            votes[41] = 5;
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        if (ss_std <= 0.47034794092178345) {
                            votes[41] = 2;
                        } else {
                            if (pulse_interval <= 0.46441176533699036) {
                                if (dist_std <= 153.61444091796875) {
                                    votes[41] = 2;
                                } else {
                                    votes[41] = 2;
                                }
                            } else {
                                votes[41] = 2;
                            }
                        }
                    }
                }
            } else {
                votes[41] = 1;
            }
        }
    }

// Decision rules for tree 42
    if (diff_median <= 0.06368640158325434) {
        if (ss_median <= 55.5) {
            votes[42] = 0;
        } else {
            if (diff_median <= 0.0041704068426042795) {
                votes[42] = 2;
            } else {
                if (rr_std <= 2.2165063470602036) {
                    votes[42] = 0;
                } else {
                    votes[42] = 0;
                }
            }
        }
    } else {
        if (pulse_interval <= 0.290428563952446) {
            if (dist_std <= 71.43159866333008) {
                if (ss_std <= 11.616950511932373) {
                    if (diff_median <= 15.59162425994873) {
                        if (dist_median <= 0.018298401031643152) {
                            if (systolic_area <= 1323008.5625) {
                                if (systolic_area <= 134028.71875) {
                                    if (diastolic_amp <= -437.2821044921875) {
                                        votes[42] = 4;
                                    } else {
                                        votes[42] = 4;
                                    }
                                } else {
                                    if (pp_interval <= 0.16519148647785187) {
                                        if (ss_median <= 48.25) {
                                            votes[42] = 4;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    } else {
                                        votes[42] = 5;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.056758638471364975) {
                                    votes[42] = 4;
                                } else {
                                    votes[42] = 4;
                                }
                            }
                        } else {
                            votes[42] = 1;
                        }
                    } else {
                        if (systolic_time <= 0.08744489401578903) {
                            if (pp_interval <= 0.05210492946207523) {
                                votes[42] = 3;
                            } else {
                                if (systolic_area <= 417385.609375) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 3;
                                }
                            }
                        } else {
                            if (diastolic_amp <= -0.6185219883918762) {
                                votes[42] = 3;
                            } else {
                                votes[42] = 3;
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 0.07112186029553413) {
                        if (rr_median <= 58.5) {
                            if (dist_std <= 58.613502502441406) {
                                votes[42] = 1;
                            } else {
                                votes[42] = 1;
                            }
                        } else {
                            if (diastolic_area <= -5.681588172912598) {
                                votes[42] = 1;
                            } else {
                                votes[42] = 4;
                            }
                        }
                    } else {
                        if (diastolic_area <= -9.873212337493896) {
                            if (num_valleys <= 64.5) {
                                votes[42] = 4;
                            } else {
                                if (dist_std <= 31.110990524291992) {
                                    votes[42] = 4;
                                } else {
                                    votes[42] = 4;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.14763186872005463) {
                                if (rr_median <= 58.0) {
                                    if (rr_std <= 11.031267166137695) {
                                        votes[42] = 4;
                                    } else {
                                        if (pulse_interval <= 0.08944343402981758) {
                                            votes[42] = 5;
                                        } else {
                                            votes[42] = 4;
                                        }
                                    }
                                } else {
                                    votes[42] = 5;
                                }
                            } else {
                                votes[42] = 5;
                            }
                        }
                    }
                }
            } else {
                if (pp_interval <= 0.034542566165328026) {
                    if (pulse_interval <= 0.032236265018582344) {
                        votes[42] = 3;
                    } else {
                        if (rr_median <= 58.75) {
                            votes[42] = 4;
                        } else {
                            votes[42] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 123.5) {
                        if (rr_std <= 5.559582710266113) {
                            if (systolic_amp <= 3197.31103515625) {
                                if (diff_median <= 15.671967506408691) {
                                    if (dist_std <= 137.95818328857422) {
                                        votes[42] = 3;
                                    } else {
                                        votes[42] = 3;
                                    }
                                } else {
                                    votes[42] = 1;
                                }
                            } else {
                                votes[42] = 2;
                            }
                        } else {
                            if (systolic_area <= 150707.6640625) {
                                if (second_peak_freq <= 0.54931640625) {
                                    votes[42] = 2;
                                } else {
                                    votes[42] = 2;
                                }
                            } else {
                                if (num_valleys <= 61.0) {
                                    votes[42] = 5;
                                } else {
                                    if (rr_median <= 55.0) {
                                        votes[42] = 5;
                                    } else {
                                        votes[42] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 50.25) {
                            if (ss_median <= 40.25) {
                                if (systolic_area <= 420432.171875) {
                                    votes[42] = 5;
                                } else {
                                    votes[42] = 5;
                                }
                            } else {
                                if (pulse_interval <= 0.1616000011563301) {
                                    if (first_peak_freq <= 0.30517578125) {
                                        if (dist_std <= 91.33185195922852) {
                                            votes[42] = 5;
                                        } else {
                                            votes[42] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 47.25) {
                                            votes[42] = 1;
                                        } else {
                                            votes[42] = 5;
                                        }
                                    }
                                } else {
                                    if (dist_std <= 125.45495986938477) {
                                        votes[42] = 3;
                                    } else {
                                        votes[42] = 5;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 54.75) {
                                if (ss_std <= 7.427682161331177) {
                                    votes[42] = 1;
                                } else {
                                    if (fwhm <= 8.179999828338623) {
                                        votes[42] = 1;
                                    } else {
                                        votes[42] = 1;
                                    }
                                }
                            } else {
                                if (num_valleys <= 67.5) {
                                    votes[42] = 3;
                                } else {
                                    if (second_peak_freq <= 0.91552734375) {
                                        if (dist_std <= 135.5278091430664) {
                                            votes[42] = 4;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    } else {
                                        if (systolic_time <= 0.13613855466246605) {
                                            votes[42] = 1;
                                        } else {
                                            votes[42] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 69.75) {
                if (rr_std <= 22.412473678588867) {
                    if (diastolic_area <= -15341.67578125) {
                        if (diastolic_time <= 0.5454285740852356) {
                            if (diastolic_amp <= -2178.637939453125) {
                                votes[42] = 2;
                            } else {
                                votes[42] = 2;
                            }
                        } else {
                            if (systolic_area <= 20787.5087890625) {
                                votes[42] = 2;
                            } else {
                                votes[42] = 5;
                            }
                        }
                    } else {
                        if (systolic_area <= 82769.23046875) {
                            if (systolic_area <= 41465.041015625) {
                                votes[42] = 1;
                            } else {
                                if (rr_std <= 12.255222797393799) {
                                    votes[42] = 5;
                                } else {
                                    votes[42] = 5;
                                }
                            }
                        } else {
                            if (fwhm <= 8.156000137329102) {
                                votes[42] = 5;
                            } else {
                                if (systolic_area <= 101515.3984375) {
                                    votes[42] = 3;
                                } else {
                                    votes[42] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.4077647030353546) {
                        votes[42] = 5;
                    } else {
                        votes[42] = 1;
                    }
                }
            } else {
                if (pulse_interval <= 0.4757999926805496) {
                    if (dist_median <= -0.5309448093175888) {
                        votes[42] = 2;
                    } else {
                        votes[42] = 2;
                    }
                } else {
                    if (ss_std <= 3.277441382408142) {
                        votes[42] = 2;
                    } else {
                        votes[42] = 5;
                    }
                }
            }
        }
    }

// Decision rules for tree 43
    if (diastolic_area <= 1.0362745523452759) {
        if (pulse_interval <= 0.2401290312409401) {
            if (systolic_area <= 1037671.90625) {
                if (systolic_area <= 46583.66015625) {
                    if (fwhm <= 8.139999866485596) {
                        if (systolic_time <= 0.23296969383955002) {
                            if (num_peaks <= 135.5) {
                                if (rr_median <= 56.0) {
                                    votes[43] = 4;
                                } else {
                                    votes[43] = 1;
                                }
                            } else {
                                votes[43] = 4;
                            }
                        } else {
                            votes[43] = 5;
                        }
                    } else {
                        votes[43] = 3;
                    }
                } else {
                    if (diastolic_amp <= -3.741064667701721) {
                        if (ss_median <= 66.0) {
                            if (diff_median <= 4.349681258201599) {
                                votes[43] = 1;
                            } else {
                                if (dist_std <= 91.62382507324219) {
                                    votes[43] = 3;
                                } else {
                                    votes[43] = 4;
                                }
                            }
                        } else {
                            if (dist_std <= 201.2082061767578) {
                                votes[43] = 2;
                            } else {
                                votes[43] = 2;
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.08826716616749763) {
                            if (dist_std <= 46.42578315734863) {
                                if (pulse_interval <= 0.07064052298665047) {
                                    votes[43] = 4;
                                } else {
                                    votes[43] = 3;
                                }
                            } else {
                                if (ss_median <= 41.5) {
                                    votes[43] = 5;
                                } else {
                                    if (rr_std <= 3.1241323947906494) {
                                        votes[43] = 5;
                                    } else {
                                        if (systolic_area <= 366867.09375) {
                                            votes[43] = 1;
                                        } else {
                                            votes[43] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 11.458999633789062) {
                                if (dist_std <= 55.41737174987793) {
                                    if (ss_std <= 10.982362270355225) {
                                        if (diff_median <= 10.062867164611816) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 3;
                                        }
                                    } else {
                                        votes[43] = 3;
                                    }
                                } else {
                                    if (rr_median <= 95.5) {
                                        if (dist_std <= 76.68100357055664) {
                                            votes[43] = 5;
                                        } else {
                                            votes[43] = 3;
                                        }
                                    } else {
                                        votes[43] = 1;
                                    }
                                }
                            } else {
                                if (systolic_area <= 408466.015625) {
                                    if (dist_median <= -0.1837225705385208) {
                                        if (systolic_area <= 280873.609375) {
                                            votes[43] = 5;
                                        } else {
                                            votes[43] = 5;
                                        }
                                    } else {
                                        if (num_valleys <= 74.5) {
                                            votes[43] = 5;
                                        } else {
                                            votes[43] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.10785369575023651) {
                                        votes[43] = 5;
                                    } else {
                                        votes[43] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (dist_median <= -0.4297042489051819) {
                    if (ss_median <= 52.25) {
                        if (dist_std <= 72.2635612487793) {
                            votes[43] = 3;
                        } else {
                            votes[43] = 1;
                        }
                    } else {
                        if (dist_median <= -0.5729102194309235) {
                            votes[43] = 4;
                        } else {
                            votes[43] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 135.5) {
                        if (rr_std <= 9.241139888763428) {
                            votes[43] = 3;
                        } else {
                            votes[43] = 3;
                        }
                    } else {
                        if (ss_std <= 7.91080904006958) {
                            votes[43] = 3;
                        } else {
                            if (systolic_area <= 2248010.0) {
                                if (diff_median <= 7.989605665206909) {
                                    if (diff_median <= 4.4597601890563965) {
                                        votes[43] = 3;
                                    } else {
                                        votes[43] = 1;
                                    }
                                } else {
                                    if (pulse_interval <= 0.08979225903749466) {
                                        if (dist_median <= -0.3103972524404526) {
                                            votes[43] = 5;
                                        } else {
                                            votes[43] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 57.5) {
                                            votes[43] = 4;
                                        } else {
                                            votes[43] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[43] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (systolic_area <= 494.8396987915039) {
                if (dist_std <= 0.015322613064199686) {
                    votes[43] = 0;
                } else {
                    votes[43] = 0;
                }
            } else {
                if (num_valleys <= 65.5) {
                    if (rr_std <= 14.766845226287842) {
                        if (dist_std <= 162.67005920410156) {
                            if (rr_std <= 6.317905902862549) {
                                votes[43] = 2;
                            } else {
                                if (fwhm <= 8.056000232696533) {
                                    votes[43] = 2;
                                } else {
                                    votes[43] = 2;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.46441176533699036) {
                                votes[43] = 2;
                            } else {
                                votes[43] = 2;
                            }
                        }
                    } else {
                        votes[43] = 3;
                    }
                } else {
                    if (rr_std <= 22.698376655578613) {
                        if (diastolic_amp <= -4.048057556152344) {
                            if (dist_std <= 36.54799270629883) {
                                votes[43] = 1;
                            } else {
                                if (ss_std <= 7.483762741088867) {
                                    votes[43] = 5;
                                } else {
                                    if (dist_std <= 52.80203437805176) {
                                        if (ss_median <= 51.0) {
                                            votes[43] = 2;
                                        } else {
                                            votes[43] = 5;
                                        }
                                    } else {
                                        if (fwhm <= 6.320000171661377) {
                                            votes[43] = 2;
                                        } else {
                                            votes[43] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 57.21180534362793) {
                                votes[43] = 3;
                            } else {
                                if (systolic_time <= 0.2447916641831398) {
                                    votes[43] = 2;
                                } else {
                                    if (pp_interval <= 0.9849999845027924) {
                                        if (diff_median <= 8.131084680557251) {
                                            votes[43] = 4;
                                        } else {
                                            votes[43] = 5;
                                        }
                                    } else {
                                        votes[43] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.4077647030353546) {
                            votes[43] = 4;
                        } else {
                            votes[43] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 42.5) {
            votes[43] = 2;
        } else {
            if (fwhm <= 7.7799999713897705) {
                if (dist_median <= -0.00014261867181630805) {
                    votes[43] = 0;
                } else {
                    votes[43] = 2;
                }
            } else {
                if (dist_std <= 0.010588942561298609) {
                    votes[43] = 0;
                } else {
                    votes[43] = 0;
                }
            }
        }
    }

// Decision rules for tree 44
    if (dist_std <= 0.019624496810138226) {
        if (diff_median <= 0.004161820979788899) {
            votes[44] = 0;
        } else {
            if (first_peak_freq <= 0.30517578125) {
                if (rr_std <= 7.751134634017944) {
                    votes[44] = 0;
                } else {
                    votes[44] = 0;
                }
            } else {
                votes[44] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.23883870989084244) {
            if (diff_median <= 14.079692363739014) {
                if (systolic_area <= 1627869.5) {
                    if (systolic_area <= 47458.552734375) {
                        if (dist_std <= 50.28053665161133) {
                            if (num_peaks <= 128.5) {
                                votes[44] = 4;
                            } else {
                                votes[44] = 4;
                            }
                        } else {
                            if (num_peaks <= 135.5) {
                                votes[44] = 1;
                            } else {
                                if (ss_median <= 53.75) {
                                    votes[44] = 4;
                                } else {
                                    votes[44] = 4;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.05092268064618111) {
                            if (num_valleys <= 83.5) {
                                if (rr_std <= 9.023245811462402) {
                                    votes[44] = 3;
                                } else {
                                    if (ss_std <= 12.872207164764404) {
                                        votes[44] = 4;
                                    } else {
                                        votes[44] = 1;
                                    }
                                }
                            } else {
                                if (dist_median <= -0.19258618354797363) {
                                    votes[44] = 1;
                                } else {
                                    votes[44] = 1;
                                }
                            }
                        } else {
                            if (first_peak_freq <= 0.18310546875) {
                                if (systolic_area <= 770987.71875) {
                                    votes[44] = 4;
                                } else {
                                    votes[44] = 2;
                                }
                            } else {
                                if (systolic_area <= 1315595.125) {
                                    if (rr_std <= 12.47044563293457) {
                                        if (diastolic_amp <= -2.910173177719116) {
                                            votes[44] = 2;
                                        } else {
                                            votes[44] = 3;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.08167479187250137) {
                                            votes[44] = 1;
                                        } else {
                                            votes[44] = 5;
                                        }
                                    }
                                } else {
                                    if (pp_interval <= 0.08944343402981758) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 135.0) {
                        votes[44] = 3;
                    } else {
                        if (rr_median <= 66.5) {
                            if (pulse_interval <= 0.033210638910532) {
                                votes[44] = 4;
                            } else {
                                votes[44] = 4;
                            }
                        } else {
                            votes[44] = 3;
                        }
                    }
                }
            } else {
                if (rr_median <= 97.5) {
                    if (pp_interval <= 0.08655422925949097) {
                        if (pulse_interval <= 0.04236389510333538) {
                            if (diff_median <= 31.19297504425049) {
                                votes[44] = 3;
                            } else {
                                votes[44] = 1;
                            }
                        } else {
                            if (systolic_area <= 514142.265625) {
                                if (pulse_interval <= 0.07780392095446587) {
                                    if (pp_interval <= 0.07402786239981651) {
                                        votes[44] = 1;
                                    } else {
                                        votes[44] = 1;
                                    }
                                } else {
                                    votes[44] = 1;
                                }
                            } else {
                                if (dist_std <= 70.64447784423828) {
                                    if (ss_std <= 11.833457469940186) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 3;
                                    }
                                } else {
                                    if (dist_std <= 104.78793334960938) {
                                        votes[44] = 4;
                                    } else {
                                        votes[44] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 11.66298770904541) {
                            if (dist_std <= 156.69623565673828) {
                                if (first_peak_freq <= 0.30517578125) {
                                    if (diff_median <= 26.351706504821777) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 1;
                                    }
                                } else {
                                    if (ss_median <= 55.25) {
                                        if (num_peaks <= 146.0) {
                                            votes[44] = 3;
                                        } else {
                                            votes[44] = 3;
                                        }
                                    } else {
                                        votes[44] = 3;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.1638595312833786) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 5;
                                }
                            }
                        } else {
                            if (diastolic_area <= -26.2885103225708) {
                                votes[44] = 4;
                            } else {
                                if (dist_median <= -0.315944567322731) {
                                    if (rr_median <= 53.5) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 5;
                                    }
                                } else {
                                    if (num_valleys <= 69.5) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    votes[44] = 1;
                }
            }
        } else {
            if (num_valleys <= 61.5) {
                if (rr_median <= 74.5) {
                    if (pulse_interval <= 0.2850196957588196) {
                        votes[44] = 2;
                    } else {
                        if (rr_median <= 71.0) {
                            if (second_peak_freq <= 1.15966796875) {
                                votes[44] = 2;
                            } else {
                                votes[44] = 2;
                            }
                        } else {
                            votes[44] = 2;
                        }
                    }
                } else {
                    votes[44] = 3;
                }
            } else {
                if (systolic_time <= 1.0148571729660034) {
                    if (dist_std <= 194.38761138916016) {
                        if (systolic_amp <= 0.261974573135376) {
                            if (dist_std <= 64.6816177368164) {
                                if (rr_median <= 56.0) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 4;
                                }
                            } else {
                                if (pulse_interval <= 0.390736848115921) {
                                    if (systolic_time <= 0.3147200047969818) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 3;
                                    }
                                } else {
                                    votes[44] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 22.494725227355957) {
                                if (rr_std <= 14.320391178131104) {
                                    if (rr_std <= 10.703553199768066) {
                                        if (systolic_area <= 25138.6298828125) {
                                            votes[44] = 5;
                                        } else {
                                            votes[44] = 2;
                                        }
                                    } else {
                                        votes[44] = 5;
                                    }
                                } else {
                                    if (pulse_interval <= 0.4059298187494278) {
                                        votes[44] = 4;
                                    } else {
                                        if (rr_median <= 55.75) {
                                            votes[44] = 2;
                                        } else {
                                            votes[44] = 2;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 41.10693168640137) {
                                    if (systolic_time <= 0.4378509819507599) {
                                        votes[44] = 4;
                                    } else {
                                        votes[44] = 1;
                                    }
                                } else {
                                    votes[44] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 6.637723922729492) {
                            votes[44] = 2;
                        } else {
                            votes[44] = 2;
                        }
                    }
                } else {
                    votes[44] = 1;
                }
            }
        }
    }

// Decision rules for tree 45
    if (diff_median <= 0.06368640158325434) {
        if (diff_median <= 0.003825392806902528) {
            votes[45] = 2;
        } else {
            if (num_peaks <= 71.5) {
                votes[45] = 2;
            } else {
                if (rr_std <= 1.25) {
                    votes[45] = 0;
                } else {
                    votes[45] = 0;
                }
            }
        }
    } else {
        if (num_peaks <= 112.5) {
            if (systolic_area <= 148008.9921875) {
                if (num_valleys <= 61.5) {
                    if (dist_std <= 137.29845428466797) {
                        votes[45] = 2;
                    } else {
                        votes[45] = 2;
                    }
                } else {
                    if (pulse_interval <= 0.2862989157438278) {
                        votes[45] = 2;
                    } else {
                        votes[45] = 3;
                    }
                }
            } else {
                if (rr_std <= 12.599902629852295) {
                    if (fwhm <= 8.092000007629395) {
                        votes[45] = 1;
                    } else {
                        votes[45] = 3;
                    }
                } else {
                    votes[45] = 5;
                }
            }
        } else {
            if (systolic_area <= 1338611.4375) {
                if (diastolic_area <= -19.8961238861084) {
                    if (diastolic_time <= 0.7505999803543091) {
                        if (systolic_time <= 0.3418181836605072) {
                            if (dist_std <= 172.00460052490234) {
                                if (systolic_time <= 0.15919148921966553) {
                                    if (ss_std <= 11.316400527954102) {
                                        votes[45] = 4;
                                    } else {
                                        votes[45] = 1;
                                    }
                                } else {
                                    if (diff_median <= 1.998444139957428) {
                                        if (num_valleys <= 73.5) {
                                            votes[45] = 4;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 143.5) {
                                            votes[45] = 4;
                                        } else {
                                            votes[45] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_area <= -47.301025390625) {
                                    votes[45] = 2;
                                } else {
                                    votes[45] = 2;
                                }
                            }
                        } else {
                            if (second_peak_freq <= 1.46484375) {
                                if (diastolic_time <= 0.5909696817398071) {
                                    if (diastolic_area <= -15594.2421875) {
                                        if (systolic_amp <= 4433.637451171875) {
                                            votes[45] = 2;
                                        } else {
                                            votes[45] = 2;
                                        }
                                    } else {
                                        votes[45] = 4;
                                    }
                                } else {
                                    votes[45] = 5;
                                }
                            } else {
                                votes[45] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 13.138400554656982) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 1;
                        }
                    }
                } else {
                    if (pp_interval <= 0.07800913602113724) {
                        if (systolic_time <= 0.029187933541834354) {
                            if (diff_median <= 7.896932601928711) {
                                if (pp_interval <= 0.011645713821053505) {
                                    votes[45] = 4;
                                } else {
                                    votes[45] = 4;
                                }
                            } else {
                                votes[45] = 3;
                            }
                        } else {
                            if (diff_median <= 22.500452041625977) {
                                if (fwhm <= 8.059999942779541) {
                                    if (diff_median <= 17.982685089111328) {
                                        if (dist_median <= 0.054572174325585365) {
                                            votes[45] = 1;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    } else {
                                        votes[45] = 3;
                                    }
                                } else {
                                    if (rr_median <= 43.0) {
                                        votes[45] = 5;
                                    } else {
                                        if (ss_median <= 48.25) {
                                            votes[45] = 1;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.05516043305397034) {
                                    if (systolic_area <= 406423.640625) {
                                        votes[45] = 1;
                                    } else {
                                        votes[45] = 5;
                                    }
                                } else {
                                    votes[45] = 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.9204285740852356) {
                            if (num_valleys <= 65.5) {
                                if (dist_std <= 183.9262924194336) {
                                    if (systolic_time <= 0.29248592257499695) {
                                        if (systolic_time <= 0.11776470765471458) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    } else {
                                        votes[45] = 5;
                                    }
                                } else {
                                    if (diff_median <= 10.596693515777588) {
                                        votes[45] = 2;
                                    } else {
                                        votes[45] = 2;
                                    }
                                }
                            } else {
                                if (pp_interval <= 0.4360000044107437) {
                                    if (rr_std <= 12.263254642486572) {
                                        if (ss_median <= 47.25) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    } else {
                                        if (dist_median <= -0.12222341448068619) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 62057.3203125) {
                                        votes[45] = 5;
                                    } else {
                                        votes[45] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[45] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 9.406501293182373) {
                    if (diff_median <= 16.81198263168335) {
                        if (dist_std <= 82.93892669677734) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 4;
                        }
                    } else {
                        votes[45] = 3;
                    }
                } else {
                    if (diff_median <= 14.223179817199707) {
                        if (dist_median <= -0.5787461996078491) {
                            votes[45] = 1;
                        } else {
                            if (systolic_area <= 1426315.5) {
                                votes[45] = 4;
                            } else {
                                if (ss_median <= 45.25) {
                                    votes[45] = 4;
                                } else {
                                    if (rr_median <= 59.5) {
                                        if (ss_std <= 14.282488346099854) {
                                            votes[45] = 4;
                                        } else {
                                            votes[45] = 4;
                                        }
                                    } else {
                                        votes[45] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (pp_interval <= 0.07631142809987068) {
                            votes[45] = 3;
                        } else {
                            votes[45] = 4;
                        }
                    }
                }
            }
        }
    }

// Decision rules for tree 46
    if (dist_std <= 0.016389522701501846) {
        if (dist_median <= -0.00045735017920378596) {
            votes[46] = 2;
        } else {
            if (diff_median <= 0.004493687301874161) {
                votes[46] = 0;
            } else {
                votes[46] = 0;
            }
        }
    } else {
        if (pulse_interval <= 0.2401290312409401) {
            if (pulse_interval <= 0.034834904596209526) {
                if (diff_median <= 11.058073043823242) {
                    if (systolic_time <= 0.03318944573402405) {
                        if (num_valleys <= 83.5) {
                            if (num_peaks <= 130.5) {
                                votes[46] = 3;
                            } else {
                                if (pp_interval <= 0.028633803129196167) {
                                    votes[46] = 4;
                                } else {
                                    votes[46] = 4;
                                }
                            }
                        } else {
                            votes[46] = 1;
                        }
                    } else {
                        if (diff_median <= 2.524071216583252) {
                            votes[46] = 4;
                        } else {
                            if (systolic_area <= 4025378.25) {
                                votes[46] = 4;
                            } else {
                                votes[46] = 4;
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 0.019170181825757027) {
                        votes[46] = 3;
                    } else {
                        votes[46] = 3;
                    }
                }
            } else {
                if (systolic_time <= 0.08506304770708084) {
                    if (diastolic_amp <= -10.665405511856079) {
                        votes[46] = 4;
                    } else {
                        if (fwhm <= 8.17199993133545) {
                            if (diastolic_area <= -3.7671275436878204) {
                                votes[46] = 3;
                            } else {
                                if (dist_median <= 0.055436594411730766) {
                                    if (rr_median <= 52.5) {
                                        if (systolic_time <= 0.07019469141960144) {
                                            votes[46] = 1;
                                        } else {
                                            votes[46] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 21.163373947143555) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 340150.0) {
                                        votes[46] = 1;
                                    } else {
                                        votes[46] = 5;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 72.26858520507812) {
                                if (rr_median <= 48.75) {
                                    if (ss_std <= 11.536645412445068) {
                                        votes[46] = 3;
                                    } else {
                                        votes[46] = 1;
                                    }
                                } else {
                                    if (systolic_time <= 0.07059644162654877) {
                                        if (diff_median <= 12.503586292266846) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 3;
                                        }
                                    } else {
                                        votes[46] = 4;
                                    }
                                }
                            } else {
                                if (rr_median <= 52.5) {
                                    if (systolic_area <= 1350459.9375) {
                                        if (num_peaks <= 141.5) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 1;
                                        }
                                    } else {
                                        votes[46] = 5;
                                    }
                                } else {
                                    if (num_valleys <= 76.0) {
                                        votes[46] = 3;
                                    } else {
                                        if (pulse_interval <= 0.04909845255315304) {
                                            votes[46] = 1;
                                        } else {
                                            votes[46] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_amp <= -3.741064667701721) {
                        if (dist_std <= 174.0655975341797) {
                            if (systolic_amp <= 4718.257568359375) {
                                if (diff_median <= 3.2942452430725098) {
                                    votes[46] = 4;
                                } else {
                                    votes[46] = 1;
                                }
                            } else {
                                if (systolic_amp <= 5151.46240234375) {
                                    votes[46] = 4;
                                } else {
                                    if (diastolic_amp <= -2845.576416015625) {
                                        votes[46] = 1;
                                    } else {
                                        if (fwhm <= 6.9079999923706055) {
                                            votes[46] = 4;
                                        } else {
                                            votes[46] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[46] = 2;
                        }
                    } else {
                        if (systolic_area <= 1050937.0) {
                            if (dist_median <= -0.14540696889162064) {
                                if (diff_median <= 12.600723266601562) {
                                    if (rr_std <= 2.25469309091568) {
                                        votes[46] = 1;
                                    } else {
                                        if (pp_interval <= 0.09676163271069527) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_std <= 14.065833568572998) {
                                        if (systolic_time <= 0.10452358424663544) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 3;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.13918211311101913) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 16.090917587280273) {
                                    if (diff_median <= 26.70340919494629) {
                                        if (dist_median <= 0.19876811653375626) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    } else {
                                        votes[46] = 1;
                                    }
                                } else {
                                    votes[46] = 5;
                                }
                            }
                        } else {
                            if (ss_median <= 52.5) {
                                votes[46] = 3;
                            } else {
                                if (second_peak_freq <= 1.40380859375) {
                                    votes[46] = 4;
                                } else {
                                    votes[46] = 4;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (systolic_time <= 0.5588461458683014) {
                if (num_valleys <= 66.5) {
                    if (ss_median <= 48.5) {
                        votes[46] = 5;
                    } else {
                        if (systolic_area <= 127018.375) {
                            if (diastolic_area <= -6560.50813293457) {
                                votes[46] = 2;
                            } else {
                                if (second_peak_freq <= 0.732421875) {
                                    votes[46] = 2;
                                } else {
                                    if (rr_std <= 7.6023359298706055) {
                                        if (diff_median <= 12.901520252227783) {
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
                            votes[46] = 3;
                        }
                    }
                } else {
                    if (diastolic_area <= -25792.787109375) {
                        votes[46] = 2;
                    } else {
                        if (systolic_time <= 0.2447916641831398) {
                            votes[46] = 2;
                        } else {
                            if (dist_median <= -0.03485092893242836) {
                                if (dist_std <= 61.307491302490234) {
                                    votes[46] = 3;
                                } else {
                                    if (rr_std <= 7.173156499862671) {
                                        votes[46] = 5;
                                    } else {
                                        votes[46] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 142.0) {
                                    if (num_peaks <= 132.5) {
                                        votes[46] = 5;
                                    } else {
                                        votes[46] = 5;
                                    }
                                } else {
                                    if (pulse_interval <= 0.3810420036315918) {
                                        votes[46] = 4;
                                    } else {
                                        votes[46] = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -18583.771484375) {
                    if (pulse_interval <= 0.7625333368778229) {
                        votes[46] = 5;
                    } else {
                        votes[46] = 2;
                    }
                } else {
                    if (systolic_area <= 43646.673828125) {
                        if (dist_median <= -0.004427113104611635) {
                            if (ss_std <= 13.10092830657959) {
                                votes[46] = 1;
                            } else {
                                if (rr_median <= 43.25) {
                                    votes[46] = 1;
                                } else {
                                    votes[46] = 1;
                                }
                            }
                        } else {
                            votes[46] = 2;
                        }
                    } else {
                        votes[46] = 5;
                    }
                }
            }
        }
    }

// Decision rules for tree 47
    if (dist_std <= 0.019624496810138226) {
        if (diff_median <= 0.004359403159469366) {
            votes[46] = 2;
        } else {
            if (num_peaks <= 71.5) {
                votes[47] = 0;
            } else {
                if (rr_std <= 1.25) {
                    if (systolic_area <= 5.403921365737915) {
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
        if (ss_median <= 66.5) {
            if (rr_std <= 9.598783493041992) {
                if (rr_median <= 46.25) {
                    if (first_peak_freq <= 0.79345703125) {
                        if (dist_median <= -0.19432096928358078) {
                            if (rr_median <= 44.25) {
                                if (systolic_time <= 0.07087204977869987) {
                                    votes[47] = 5;
                                } else {
                                    if (systolic_time <= 0.1047155037522316) {
                                        votes[47] = 3;
                                    } else {
                                        votes[47] = 3;
                                    }
                                }
                            } else {
                                if (fwhm <= 8.068000078201294) {
                                    votes[47] = 1;
                                } else {
                                    votes[47] = 3;
                                }
                            }
                        } else {
                            if (ss_std <= 11.575515747070312) {
                                if (pp_interval <= 0.07950089126825333) {
                                    votes[47] = 4;
                                } else {
                                    votes[47] = 5;
                                }
                            } else {
                                votes[47] = 1;
                            }
                        }
                    } else {
                        votes[47] = 1;
                    }
                } else {
                    if (ss_median <= 64.25) {
                        if (dist_std <= 113.63444900512695) {
                            if (fwhm <= 6.044000148773193) {
                                votes[47] = 4;
                            } else {
                                if (ss_std <= 12.159071445465088) {
                                    if (ss_std <= 5.278775930404663) {
                                        if (ss_std <= 2.6137912273406982) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 4;
                                        }
                                    } else {
                                        if (systolic_area <= 914618.59375) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    }
                                } else {
                                    votes[47] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 50.5) {
                                if (fwhm <= 7.947999954223633) {
                                    votes[47] = 1;
                                } else {
                                    if (num_peaks <= 132.5) {
                                        votes[47] = 5;
                                    } else {
                                        votes[47] = 5;
                                    }
                                }
                            } else {
                                if (num_valleys <= 68.5) {
                                    if (dist_std <= 138.29195404052734) {
                                        votes[47] = 3;
                                    } else {
                                        votes[47] = 3;
                                    }
                                } else {
                                    if (fwhm <= 8.179999828338623) {
                                        votes[47] = 1;
                                    } else {
                                        if (systolic_area <= 727111.46875) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        votes[47] = 5;
                    }
                }
            } else {
                if (systolic_area <= 1130047.125) {
                    if (diastolic_amp <= -11.171685457229614) {
                        if (diastolic_time <= 0.7338181734085083) {
                            if (dist_std <= 45.39181327819824) {
                                if (systolic_area <= 26596.8447265625) {
                                    votes[47] = 4;
                                } else {
                                    votes[47] = 4;
                                }
                            } else {
                                if (pp_interval <= 0.3419913500547409) {
                                    if (ss_std <= 16.955018997192383) {
                                        if (diastolic_area <= -24412.1533203125) {
                                            votes[47] = 5;
                                        } else {
                                            votes[47] = 4;
                                        }
                                    } else {
                                        votes[47] = 4;
                                    }
                                } else {
                                    if (rr_median <= 63.5) {
                                        votes[47] = 2;
                                    } else {
                                        votes[47] = 1;
                                    }
                                }
                            }
                        } else {
                            if (dist_median <= -0.01123410277068615) {
                                votes[47] = 1;
                            } else {
                                if (fwhm <= 7.368000030517578) {
                                    votes[47] = 1;
                                } else {
                                    votes[47] = 1;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 75.5) {
                            if (systolic_area <= 10559.0498046875) {
                                votes[47] = 4;
                            } else {
                                if (first_peak_freq <= 0.18310546875) {
                                    votes[47] = 4;
                                } else {
                                    if (rr_std <= 12.283388614654541) {
                                        if (pp_interval <= 0.07352760434150696) {
                                            votes[47] = 1;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    } else {
                                        if (pp_interval <= 0.09032416343688965) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (pulse_interval <= 0.07669984921813011) {
                                if (diff_median <= 19.424153327941895) {
                                    if (fwhm <= 7.148000001907349) {
                                        votes[47] = 1;
                                    } else {
                                        votes[47] = 1;
                                    }
                                } else {
                                    if (rr_std <= 12.19914436340332) {
                                        votes[47] = 1;
                                    } else {
                                        votes[47] = 1;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.6876285821199417) {
                                    if (dist_std <= 54.19693946838379) {
                                        if (ss_std <= 12.482561588287354) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 9.633439064025879) {
                                            votes[47] = 1;
                                        } else {
                                            votes[47] = 5;
                                        }
                                    }
                                } else {
                                    votes[47] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 2728724.0) {
                        if (pulse_interval <= 0.06938030570745468) {
                            if (pulse_interval <= 0.04527771659195423) {
                                votes[47] = 4;
                            } else {
                                votes[47] = 3;
                            }
                        } else {
                            if (rr_std <= 14.500607013702393) {
                                if (num_peaks <= 145.5) {
                                    if (pp_interval <= 0.08944343402981758) {
                                        votes[47] = 4;
                                    } else {
                                        if (diff_median <= 13.353219032287598) {
                                            votes[47] = 4;
                                        } else {
                                            votes[47] = 4;
                                        }
                                    }
                                } else {
                                    votes[47] = 4;
                                }
                            } else {
                                votes[47] = 5;
                            }
                        }
                    } else {
                        votes[47] = 4;
                    }
                }
            }
        } else {
            if (num_valleys <= 66.5) {
                if (dist_std <= 124.409423828125) {
                    if (num_peaks <= 103.0) {
                        votes[47] = 2;
                    } else {
                        if (pulse_interval <= 0.35722655057907104) {
                            votes[47] = 3;
                        } else {
                            votes[47] = 5;
                        }
                    }
                } else {
                    if (second_peak_freq <= 0.79345703125) {
                        if (pp_interval <= 0.24632257223129272) {
                            if (fwhm <= 8.087999820709229) {
                                votes[47] = 2;
                            } else {
                                votes[47] = 2;
                            }
                        } else {
                            votes[47] = 2;
                        }
                    } else {
                        if (pulse_interval <= 0.19377777725458145) {
                            votes[47] = 2;
                        } else {
                            votes[47] = 2;
                        }
                    }
                }
            } else {
                if (pulse_interval <= 0.1594102531671524) {
                    votes[47] = 3;
                } else {
                    if (systolic_amp <= 3631.895263671875) {
                        if (num_peaks <= 114.0) {
                            votes[47] = 2;
                        } else {
                            if (num_valleys <= 72.5) {
                                votes[47] = 5;
                            } else {
                                votes[47] = 5;
                            }
                        }
                    } else {
                        votes[47] = 4;
                    }
                }
            }
        }
    }

// Decision rules for tree 48
    if (systolic_area <= 498.35533905029297) {
        if (dist_std <= 0.019624496810138226) {
            if (num_valleys <= 41.5) {
                votes[48] = 0;
            } else {
                if (dist_std <= 0.015106557868421078) {
                    if (num_valleys <= 78.5) {
                        votes[48] = 0;
                    } else {
                        if (diff_median <= 0.005489423405379057) {
                            votes[48] = 0;
                        } else {
                            votes[48] = 0;
                        }
                    }
                } else {
                    votes[48] = 0;
                }
            }
        } else {
            if (num_valleys <= 65.5) {
                votes[48] = 2;
            } else {
                if (dist_median <= -0.021802672185003757) {
                    votes[48] = 3;
                } else {
                    votes[48] = 4;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1149000.0) {
                if (diastolic_amp <= -13.139641761779785) {
                    if (pp_interval <= 0.3439999967813492) {
                        if (diff_median <= 0.8665125668048859) {
                            votes[48] = 5;
                        } else {
                            if (diastolic_time <= 0.8551110923290253) {
                                if (num_peaks <= 143.5) {
                                    if (rr_std <= 7.723228216171265) {
                                        votes[48] = 4;
                                    } else {
                                        votes[48] = 4;
                                    }
                                } else {
                                    if (diastolic_amp <= -2534.260498046875) {
                                        votes[48] = 1;
                                    } else {
                                        votes[48] = 4;
                                    }
                                }
                            } else {
                                votes[48] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.7599999904632568) {
                            if (dist_std <= 39.58014488220215) {
                                votes[48] = 5;
                            } else {
                                if (dist_median <= -0.007097124354913831) {
                                    if (rr_median <= 59.25) {
                                        votes[48] = 2;
                                    } else {
                                        votes[48] = 2;
                                    }
                                } else {
                                    if (ss_std <= 14.57586145401001) {
                                        votes[48] = 5;
                                    } else {
                                        votes[48] = 2;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_area <= -17922.7177734375) {
                                votes[48] = 1;
                            } else {
                                votes[48] = 1;
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 0.08769845589995384) {
                        if (fwhm <= 8.17199993133545) {
                            if (diastolic_amp <= -1.6802637577056885) {
                                votes[48] = 3;
                            } else {
                                if (num_peaks <= 141.5) {
                                    if (first_peak_freq <= 0.54931640625) {
                                        if (dist_std <= 89.97019958496094) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 1;
                                        }
                                    } else {
                                        if (num_peaks <= 134.5) {
                                            votes[48] = 1;
                                        } else {
                                            votes[48] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 9.507092475891113) {
                                        if (dist_median <= -0.48964227735996246) {
                                            votes[48] = 1;
                                        } else {
                                            votes[48] = 1;
                                        }
                                    } else {
                                        votes[48] = 1;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 387593.046875) {
                                votes[48] = 1;
                            } else {
                                if (dist_median <= -0.511697992682457) {
                                    votes[48] = 1;
                                } else {
                                    if (num_peaks <= 138.5) {
                                        votes[48] = 3;
                                    } else {
                                        if (second_peak_freq <= 0.9765625) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 41465.041015625) {
                            votes[48] = 1;
                        } else {
                            if (rr_std <= 12.743757247924805) {
                                if (ss_median <= 47.25) {
                                    if (second_peak_freq <= 1.03759765625) {
                                        if (dist_std <= 84.91012191772461) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 4.221641182899475) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 7.482100009918213) {
                                        if (rr_median <= 65.5) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 21.356757164001465) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (dist_median <= -0.1897648498415947) {
                                    if (first_peak_freq <= 0.79345703125) {
                                        if (pp_interval <= 0.10039487108588219) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 5;
                                        }
                                    } else {
                                        votes[48] = 5;
                                    }
                                } else {
                                    if (second_peak_freq <= 1.15966796875) {
                                        if (num_valleys <= 74.0) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 4;
                                        }
                                    } else {
                                        votes[48] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (ss_median <= 52.75) {
                    if (diff_median <= 15.120513439178467) {
                        if (rr_std <= 8.749521255493164) {
                            votes[48] = 3;
                        } else {
                            if (systolic_area <= 1693168.75) {
                                if (rr_median <= 56.5) {
                                    votes[48] = 5;
                                } else {
                                    votes[48] = 1;
                                }
                            } else {
                                if (ss_std <= 13.654463768005371) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 11.434558391571045) {
                            if (diff_median <= 28.41160297393799) {
                                votes[48] = 3;
                            } else {
                                votes[48] = 3;
                            }
                        } else {
                            votes[48] = 1;
                        }
                    }
                } else {
                    if (systolic_time <= 0.07066231966018677) {
                        if (diff_median <= 8.837109565734863) {
                            if (rr_std <= 12.825867652893066) {
                                votes[48] = 3;
                            } else {
                                votes[48] = 4;
                            }
                        } else {
                            votes[48] = 3;
                        }
                    } else {
                        if (diff_median <= 12.005338191986084) {
                            if (rr_median <= 53.25) {
                                votes[48] = 4;
                            } else {
                                votes[48] = 4;
                            }
                        } else {
                            votes[48] = 4;
                        }
                    }
                }
            }
        } else {
            if (systolic_time <= 0.15612667053937912) {
                if (fwhm <= 8.168000221252441) {
                    votes[48] = 3;
                } else {
                    votes[48] = 3;
                }
            } else {
                if (rr_std <= 9.300655841827393) {
                    if (num_valleys <= 71.5) {
                        if (systolic_time <= 0.5206153988838196) {
                            if (systolic_area <= 146255.0078125) {
                                if (systolic_area <= 79976.65625) {
                                    votes[48] = 2;
                                } else {
                                    if (systolic_time <= 0.457882359623909) {
                                        votes[48] = 2;
                                    } else {
                                        votes[48] = 2;
                                    }
                                }
                            } else {
                                if (diastolic_amp <= -8.351190447807312) {
                                    votes[48] = 2;
                                } else {
                                    votes[48] = 2;
                                }
                            }
                        } else {
                            votes[48] = 2;
                        }
                    } else {
                        votes[48] = 5;
                    }
                } else {
                    if (diff_median <= 4.0065131187438965) {
                        votes[48] = 4;
                    } else {
                        votes[48] = 3;
                    }
                }
            }
        }
    }

// Decision rules for tree 49
    if (dist_std <= 0.01986692752689123) {
        if (dist_median <= -0.00016175228665815666) {
            if (rr_std <= 4.8146936893463135) {
                votes[49] = 2;
            } else {
                if (dist_std <= 0.014480258338153362) {
                    votes[49] = 0;
                } else {
                    votes[49] = 0;
                }
            }
        } else {
            votes[49] = 0;
        }
    } else {
        if (pulse_interval <= 0.2401290312409401) {
            if (systolic_area <= 3672053.125) {
                if (pp_interval <= 0.08813483268022537) {
                    if (systolic_area <= 1544202.125) {
                        if (dist_std <= 20.086817741394043) {
                            votes[49] = 4;
                        } else {
                            if (dist_std <= 77.87007141113281) {
                                if (fwhm <= 7.628000020980835) {
                                    if (fwhm <= 7.143999814987183) {
                                        if (rr_std <= 9.234764575958252) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 1;
                                        }
                                    } else {
                                        votes[49] = 1;
                                    }
                                } else {
                                    if (rr_std <= 15.251317977905273) {
                                        if (ss_median <= 49.25) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.05066934693604708) {
                                            votes[49] = 4;
                                        } else {
                                            votes[49] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 54.75) {
                                    if (systolic_time <= 0.0697522945702076) {
                                        if (dist_median <= -0.26247556507587433) {
                                            votes[49] = 1;
                                        } else {
                                            votes[49] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 302650.09375) {
                                            votes[49] = 1;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    }
                                } else {
                                    if (ss_std <= 5.5609352588653564) {
                                        votes[49] = 3;
                                    } else {
                                        if (systolic_area <= 637406.25) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.05645701661705971) {
                            if (dist_std <= 106.90311050415039) {
                                if (pp_interval <= 0.03582420200109482) {
                                    votes[49] = 3;
                                } else {
                                    votes[49] = 3;
                                }
                            } else {
                                votes[49] = 3;
                            }
                        } else {
                            votes[49] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 11.579040050506592) {
                        if (dist_std <= 192.1324920654297) {
                            if (rr_median <= 92.0) {
                                if (diff_median <= 14.122029781341553) {
                                    if (dist_median <= -0.1645858809351921) {
                                        if (second_peak_freq <= 1.03759765625) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    } else {
                                        if (diastolic_amp <= -1.7333521842956543) {
                                            votes[49] = 1;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 159640.4375) {
                                        votes[49] = 1;
                                    } else {
                                        if (systolic_area <= 966492.375) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[49] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.008799999952316284) {
                                if (systolic_time <= 0.1982390210032463) {
                                    votes[49] = 5;
                                } else {
                                    votes[49] = 5;
                                }
                            } else {
                                votes[49] = 2;
                            }
                        }
                    } else {
                        if (dist_std <= 56.83365821838379) {
                            if (diastolic_time <= 0.4938214272260666) {
                                if (fwhm <= 6.444000005722046) {
                                    votes[49] = 5;
                                } else {
                                    if (second_peak_freq <= 1.15966796875) {
                                        if (rr_median <= 55.25) {
                                            votes[49] = 5;
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
                            if (rr_std <= 22.390860557556152) {
                                if (systolic_area <= 1127792.5) {
                                    if (num_peaks <= 131.0) {
                                        if (ss_std <= 14.1688814163208) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    } else {
                                        if (dist_std <= 74.92681503295898) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    }
                                } else {
                                    votes[49] = 4;
                                }
                            } else {
                                if (ss_std <= 14.800007820129395) {
                                    votes[49] = 1;
                                } else {
                                    votes[49] = 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (ss_median <= 59.5) {
                    votes[49] = 4;
                } else {
                    votes[49] = 3;
                }
            }
        } else {
            if (dist_std <= 154.38079833984375) {
                if (rr_std <= 21.953694343566895) {
                    if (diastolic_time <= 0.25675131380558014) {
                        if (ss_std <= 0.5489987432956696) {
                            votes[49] = 2;
                        } else {
                            if (dist_std <= 64.93358612060547) {
                                if (pp_interval <= 0.3274782598018646) {
                                    if (diff_median <= 6.36938214302063) {
                                        votes[49] = 4;
                                    } else {
                                        votes[49] = 3;
                                    }
                                } else {
                                    votes[49] = 3;
                                }
                            } else {
                                if (rr_std <= 0.8311979174613953) {
                                    votes[49] = 3;
                                } else {
                                    if (fwhm <= 7.867999792098999) {
                                        votes[49] = 5;
                                    } else {
                                        if (ss_median <= 46.0) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.5345435738563538) {
                            if (fwhm <= 6.567999839782715) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 2;
                            }
                        } else {
                            if (diastolic_area <= -18233.7080078125) {
                                votes[49] = 5;
                            } else {
                                if (rr_std <= 15.909624576568604) {
                                    votes[49] = 1;
                                } else {
                                    votes[49] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 0.42588235437870026) {
                        votes[49] = 5;
                    } else {
                        if (diff_median <= 0.9406693279743195) {
                            votes[49] = 1;
                        } else {
                            votes[49] = 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 64.0) {
                    votes[49] = 5;
                } else {
                    if (ss_median <= 69.0) {
                        if (dist_std <= 219.28308868408203) {
                            votes[49] = 2;
                        } else {
                            votes[49] = 2;
                        }
                    } else {
                        if (diff_median <= 4.156393885612488) {
                            votes[49] = 2;
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
