#include <vector>
using namespace std;

int random_forest_predict(float num_peaks, float num_valleys, float rr_median, float rr_std, float diastolic_time) {
    int votes[50] = {0};
// Decision rules for tree 0
    if (num_peaks <= 74.5) {
        if (num_valleys <= 85.5) {
            if (rr_median <= 61.5) {
                if (diastolic_time <= 62.75) {
                    if (num_peaks <= 58.5) {
                        if (num_peaks <= 52.0) {
                            votes[0] = 4;
                        } else {
                            votes[0] = 5;
                        }
                    } else {
                        votes[0] = 1;
                    }
                } else {
                    if (num_valleys <= 82.5) {
                        votes[0] = 5;
                    } else {
                        votes[0] = 1;
                    }
                }
            } else {
                if (rr_std <= 0.7192845046520233) {
                    if (diastolic_time <= 67.5) {
                        if (rr_std <= 0.5532135367393494) {
                            votes[0] = 3;
                        } else {
                            if (num_valleys <= 78.5) {
                                votes[0] = 2;
                            } else {
                                votes[0] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 0.3910631388425827) {
                            votes[0] = 2;
                        } else {
                            votes[0] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 68.0) {
                        if (rr_std <= 1.0000000298023224) {
                            votes[0] = 2;
                        } else {
                            votes[0] = 5;
                        }
                    } else {
                        votes[0] = 3;
                    }
                }
            }
        } else {
            if (rr_median <= 136.0) {
                if (rr_std <= 15.432813167572021) {
                    if (diastolic_time <= 37.75) {
                        if (rr_median <= 65.5) {
                            if (num_peaks <= 58.5) {
                                if (num_peaks <= 40.0) {
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
                    } else {
                        if (diastolic_time <= 261.5) {
                            if (rr_median <= 115.25) {
                                if (diastolic_time <= 70.5) {
                                    if (rr_std <= 9.255439758300781) {
                                        if (diastolic_time <= 54.75) {
                                            votes[0] = 5;
                                        } else {
                                            votes[0] = 2;
                                        }
                                    } else {
                                        if (rr_median <= 68.5) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 0;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 109.25) {
                                        if (diastolic_time <= 89.5) {
                                            votes[0] = 5;
                                        } else {
                                            votes[0] = 5;
                                        }
                                    } else {
                                        votes[0] = 1;
                                    }
                                }
                            } else {
                                if (num_valleys <= 88.5) {
                                    votes[0] = 2;
                                } else {
                                    votes[0] = 2;
                                }
                            }
                        } else {
                            votes[0] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 100.5) {
                        if (diastolic_time <= 75.25) {
                            if (num_peaks <= 52.0) {
                                if (rr_std <= 30.215365409851074) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 4;
                                }
                            } else {
                                if (num_peaks <= 68.5) {
                                    if (diastolic_time <= 48.0) {
                                        if (rr_std <= 32.33535575866699) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 3;
                                        }
                                    } else {
                                        votes[0] = 0;
                                    }
                                } else {
                                    votes[0] = 4;
                                }
                            }
                        } else {
                            if (rr_std <= 32.803585052490234) {
                                if (num_peaks <= 66.5) {
                                    votes[0] = 4;
                                } else {
                                    votes[0] = 4;
                                }
                            } else {
                                votes[0] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 136.5) {
                            if (diastolic_time <= 115.75) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 1;
                            }
                        } else {
                            votes[0] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 38.35716438293457) {
                    if (rr_std <= 1.5067996382713318) {
                        votes[0] = 1;
                    } else {
                        if (num_valleys <= 93.0) {
                            votes[0] = 1;
                        } else {
                            votes[0] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 58.0) {
                        votes[0] = 1;
                    } else {
                        votes[0] = 5;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 85.5) {
            if (rr_median <= 72.5) {
                if (num_valleys <= 89.5) {
                    if (diastolic_time <= 72.5) {
                        if (rr_median <= 62.5) {
                            votes[0] = 3;
                        } else {
                            votes[0] = 3;
                        }
                    } else {
                        votes[0] = 3;
                    }
                } else {
                    if (diastolic_time <= 35.25) {
                        votes[0] = 3;
                    } else {
                        if (diastolic_time <= 89.75) {
                            if (rr_median <= 21.0) {
                                votes[0] = 0;
                            } else {
                                if (rr_median <= 55.25) {
                                    votes[0] = 3;
                                } else {
                                    if (rr_median <= 57.75) {
                                        votes[0] = 0;
                                    } else {
                                        votes[0] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[0] = 3;
                        }
                    }
                }
            } else {
                if (rr_median <= 125.5) {
                    if (num_valleys <= 88.5) {
                        if (diastolic_time <= 66.5) {
                            if (num_peaks <= 81.5) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 3;
                            }
                        } else {
                            if (rr_std <= 1.0308739840984344) {
                                votes[0] = 2;
                            } else {
                                if (rr_std <= 6.741377472877502) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 21.56235408782959) {
                            if (num_peaks <= 81.5) {
                                if (diastolic_time <= 59.5) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 5;
                                }
                            } else {
                                votes[0] = 0;
                            }
                        } else {
                            if (rr_std <= 29.780179023742676) {
                                votes[0] = 4;
                            } else {
                                votes[0] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 187.75) {
                        votes[0] = 1;
                    } else {
                        votes[0] = 0;
                    }
                }
            }
        } else {
            if (diastolic_time <= 47.25) {
                if (num_peaks <= 91.5) {
                    if (diastolic_time <= 45.0) {
                        votes[0] = 5;
                    } else {
                        votes[0] = 3;
                    }
                } else {
                    votes[0] = 2;
                }
            } else {
                if (num_valleys <= 85.5) {
                    if (rr_median <= 106.25) {
                        votes[0] = 0;
                    } else {
                        votes[0] = 1;
                    }
                } else {
                    if (rr_std <= 9.050411701202393) {
                        if (rr_median <= 25.0) {
                            if (num_peaks <= 89.5) {
                                if (diastolic_time <= 59.0) {
                                    votes[0] = 0;
                                } else {
                                    votes[0] = 0;
                                }
                            } else {
                                if (num_valleys <= 90.5) {
                                    votes[0] = 2;
                                } else {
                                    votes[0] = 0;
                                }
                            }
                        } else {
                            if (rr_std <= 6.462848424911499) {
                                if (rr_std <= 2.4975143671035767) {
                                    votes[0] = 2;
                                } else {
                                    votes[0] = 1;
                                }
                            } else {
                                votes[0] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 87.5) {
                            if (diastolic_time <= 69.25) {
                                votes[0] = 0;
                            } else {
                                if (diastolic_time <= 82.5) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 62.5) {
                                if (rr_std <= 15.772130966186523) {
                                    votes[0] = 0;
                                } else {
                                    votes[0] = 3;
                                }
                            } else {
                                if (diastolic_time <= 79.25) {
                                    if (num_valleys <= 89.5) {
                                        votes[0] = 0;
                                    } else {
                                        votes[0] = 0;
                                    }
                                } else {
                                    votes[0] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 1
    if (num_valleys <= 81.5) {
        if (rr_median <= 64.0) {
            votes[1] = 3;
        } else {
            if (rr_median <= 75.0) {
                if (rr_median <= 69.5) {
                    if (rr_std <= 0.5734450221061707) {
                        votes[1] = 2;
                    } else {
                        if (rr_std <= 0.6100567281246185) {
                            votes[1] = 2;
                        } else {
                            votes[1] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 58.0) {
                        votes[1] = 2;
                    } else {
                        votes[1] = 2;
                    }
                }
            } else {
                if (num_valleys <= 79.5) {
                    votes[1] = 1;
                } else {
                    votes[1] = 3;
                }
            }
        }
    } else {
        if (num_peaks <= 74.5) {
            if (rr_median <= 126.5) {
                if (diastolic_time <= 261.5) {
                    if (diastolic_time <= 108.75) {
                        if (rr_std <= 22.023792266845703) {
                            if (diastolic_time <= 38.75) {
                                if (rr_median <= 44.0) {
                                    if (diastolic_time <= 33.5) {
                                        if (num_peaks <= 37.0) {
                                            votes[1] = 4;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 35.5) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 88.0) {
                                        votes[1] = 1;
                                    } else {
                                        votes[1] = 3;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 70.25) {
                                    if (rr_std <= 10.706426620483398) {
                                        if (diastolic_time <= 55.25) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 2;
                                        }
                                    } else {
                                        if (rr_median <= 58.0) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 0;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 86.5) {
                                        if (num_peaks <= 59.5) {
                                            votes[1] = 2;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 112.5) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 64.75) {
                                if (rr_std <= 42.93429756164551) {
                                    if (diastolic_time <= 50.75) {
                                        votes[1] = 1;
                                    } else {
                                        votes[1] = 0;
                                    }
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                if (diastolic_time <= 102.25) {
                                    if (rr_std <= 29.90772247314453) {
                                        if (diastolic_time <= 85.75) {
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
                            }
                        }
                    } else {
                        if (rr_median <= 115.5) {
                            if (num_valleys <= 88.5) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 1;
                            }
                        } else {
                            votes[1] = 2;
                        }
                    }
                } else {
                    votes[1] = 4;
                }
            } else {
                if (num_valleys <= 89.5) {
                    if (rr_std <= 2.684185266494751) {
                        votes[1] = 1;
                    } else {
                        votes[1] = 1;
                    }
                } else {
                    if (num_peaks <= 51.5) {
                        votes[1] = 4;
                    } else {
                        if (num_peaks <= 55.5) {
                            votes[1] = 1;
                        } else {
                            votes[1] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 72.5) {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 20.5) {
                        if (num_peaks <= 80.5) {
                            if (diastolic_time <= 35.25) {
                                votes[1] = 5;
                            } else {
                                votes[1] = 0;
                            }
                        } else {
                            votes[1] = 3;
                        }
                    } else {
                        if (diastolic_time <= 49.25) {
                            votes[1] = 3;
                        } else {
                            if (num_peaks <= 79.5) {
                                if (rr_median <= 60.75) {
                                    votes[1] = 0;
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                if (num_peaks <= 83.5) {
                                    votes[1] = 3;
                                } else {
                                    votes[1] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 54.75) {
                        if (num_peaks <= 88.5) {
                            votes[1] = 0;
                        } else {
                            if (num_peaks <= 91.5) {
                                if (rr_median <= 57.5) {
                                    votes[1] = 3;
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                votes[1] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 68.75) {
                            if (rr_std <= 8.604505062103271) {
                                votes[1] = 0;
                            } else {
                                if (num_peaks <= 90.5) {
                                    votes[1] = 0;
                                } else {
                                    votes[1] = 0;
                                }
                            }
                        } else {
                            if (num_peaks <= 89.5) {
                                votes[1] = 4;
                            } else {
                                votes[1] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 87.5) {
                    if (rr_median <= 127.5) {
                        if (num_valleys <= 88.5) {
                            if (diastolic_time <= 82.0) {
                                if (rr_median <= 99.0) {
                                    if (rr_median <= 84.5) {
                                        votes[1] = 5;
                                    } else {
                                        votes[1] = 5;
                                    }
                                } else {
                                    votes[1] = 1;
                                }
                            } else {
                                if (diastolic_time <= 90.5) {
                                    if (diastolic_time <= 86.5) {
                                        votes[1] = 5;
                                    } else {
                                        votes[1] = 5;
                                    }
                                } else {
                                    votes[1] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 98.5) {
                                if (diastolic_time <= 53.5) {
                                    votes[1] = 5;
                                } else {
                                    if (rr_std <= 18.99685573577881) {
                                        if (diastolic_time <= 79.0) {
                                            votes[1] = 0;
                                        } else {
                                            votes[1] = 0;
                                        }
                                    } else {
                                        votes[1] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 22.420662879943848) {
                                    if (rr_median <= 110.0) {
                                        votes[1] = 5;
                                    } else {
                                        votes[1] = 2;
                                    }
                                } else {
                                    votes[1] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 258.25) {
                            if (diastolic_time <= 49.0) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 1;
                            }
                        } else {
                            votes[1] = 0;
                        }
                    }
                } else {
                    if (diastolic_time <= 79.0) {
                        if (num_valleys <= 87.5) {
                            votes[1] = 1;
                        } else {
                            if (rr_median <= 102.5) {
                                if (num_peaks <= 90.5) {
                                    votes[1] = 5;
                                } else {
                                    votes[1] = 0;
                                }
                            } else {
                                votes[1] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 11.06018877029419) {
                            votes[1] = 1;
                        } else {
                            votes[1] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 2
    if (num_valleys <= 83.5) {
        if (diastolic_time <= 73.5) {
            if (rr_median <= 64.0) {
                if (num_peaks <= 61.0) {
                    votes[2] = 4;
                } else {
                    votes[2] = 3;
                }
            } else {
                if (rr_median <= 76.75) {
                    if (num_peaks <= 58.0) {
                        if (rr_median <= 68.5) {
                            votes[2] = 2;
                        } else {
                            votes[2] = 2;
                        }
                    } else {
                        if (diastolic_time <= 45.5) {
                            votes[2] = 5;
                        } else {
                            if (rr_std <= 0.545406848192215) {
                                votes[2] = 2;
                            } else {
                                votes[2] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 93.0) {
                        votes[2] = 3;
                    } else {
                        votes[2] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 1.968635618686676) {
                if (num_valleys <= 82.5) {
                    votes[2] = 5;
                } else {
                    votes[2] = 5;
                }
            } else {
                votes[2] = 1;
            }
        }
    } else {
        if (rr_median <= 104.75) {
            if (num_peaks <= 76.5) {
                if (diastolic_time <= 84.25) {
                    if (diastolic_time <= 40.75) {
                        if (rr_median <= 52.25) {
                            if (num_peaks <= 67.5) {
                                if (diastolic_time <= 10.0) {
                                    votes[2] = 4;
                                } else {
                                    if (num_valleys <= 90.5) {
                                        if (num_peaks <= 49.0) {
                                            votes[2] = 4;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 44.0) {
                                            votes[2] = 4;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[2] = 0;
                            }
                        } else {
                            if (rr_median <= 68.75) {
                                votes[2] = 3;
                            } else {
                                votes[2] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 9.325254917144775) {
                            if (diastolic_time <= 55.25) {
                                if (rr_median <= 67.5) {
                                    if (num_peaks <= 41.0) {
                                        votes[2] = 5;
                                    } else {
                                        if (num_peaks <= 61.0) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    }
                                } else {
                                    votes[2] = 5;
                                }
                            } else {
                                if (diastolic_time <= 66.5) {
                                    if (num_peaks <= 43.5) {
                                        votes[2] = 4;
                                    } else {
                                        if (num_peaks <= 49.5) {
                                            votes[2] = 2;
                                        } else {
                                            votes[2] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 69.75) {
                                        if (num_valleys <= 90.5) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 0.47034794092178345) {
                                            votes[2] = 2;
                                        } else {
                                            votes[2] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 61.5) {
                                if (rr_median <= 65.75) {
                                    if (diastolic_time <= 50.25) {
                                        votes[2] = 3;
                                    } else {
                                        votes[2] = 3;
                                    }
                                } else {
                                    if (rr_median <= 82.5) {
                                        votes[2] = 0;
                                    } else {
                                        votes[2] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 64.0) {
                                    if (diastolic_time <= 70.0) {
                                        votes[2] = 5;
                                    } else {
                                        votes[2] = 5;
                                    }
                                } else {
                                    if (rr_median <= 81.25) {
                                        votes[2] = 4;
                                    } else {
                                        votes[2] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 241.0) {
                        if (diastolic_time <= 110.5) {
                            if (rr_std <= 15.547066688537598) {
                                if (diastolic_time <= 89.5) {
                                    votes[2] = 1;
                                } else {
                                    if (diastolic_time <= 98.0) {
                                        votes[2] = 5;
                                    } else {
                                        votes[2] = 5;
                                    }
                                }
                            } else {
                                if (rr_median <= 98.5) {
                                    if (num_peaks <= 66.0) {
                                        votes[2] = 4;
                                    } else {
                                        votes[2] = 4;
                                    }
                                } else {
                                    votes[2] = 4;
                                }
                            }
                        } else {
                            if (num_peaks <= 48.5) {
                                votes[2] = 1;
                            } else {
                                votes[2] = 1;
                            }
                        }
                    } else {
                        votes[2] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 54.5) {
                    if (num_peaks <= 91.5) {
                        if (rr_median <= 59.5) {
                            if (rr_median <= 20.5) {
                                if (diastolic_time <= 31.25) {
                                    votes[2] = 3;
                                } else {
                                    votes[2] = 0;
                                }
                            } else {
                                votes[2] = 3;
                            }
                        } else {
                            if (rr_std <= 10.289306640625) {
                                if (rr_median <= 81.0) {
                                    votes[2] = 5;
                                } else {
                                    votes[2] = 3;
                                }
                            } else {
                                if (rr_std <= 15.415287971496582) {
                                    if (diastolic_time <= 49.0) {
                                        votes[2] = 0;
                                    } else {
                                        votes[2] = 0;
                                    }
                                } else {
                                    votes[2] = 3;
                                }
                            }
                        }
                    } else {
                        votes[2] = 1;
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (rr_median <= 63.5) {
                            if (rr_median <= 21.75) {
                                if (num_peaks <= 81.5) {
                                    votes[2] = 0;
                                } else {
                                    votes[2] = 3;
                                }
                            } else {
                                votes[2] = 3;
                            }
                        } else {
                            if (rr_std <= 20.146536827087402) {
                                if (rr_std <= 7.079552888870239) {
                                    if (diastolic_time <= 68.25) {
                                        votes[2] = 5;
                                    } else {
                                        if (num_valleys <= 88.5) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    }
                                } else {
                                    votes[2] = 0;
                                }
                            } else {
                                votes[2] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 8.847529888153076) {
                            if (rr_median <= 74.0) {
                                if (num_peaks <= 88.5) {
                                    if (diastolic_time <= 62.75) {
                                        votes[2] = 0;
                                    } else {
                                        votes[2] = 0;
                                    }
                                } else {
                                    votes[2] = 0;
                                }
                            } else {
                                votes[2] = 5;
                            }
                        } else {
                            if (num_peaks <= 89.5) {
                                if (rr_std <= 24.067556381225586) {
                                    if (rr_median <= 71.5) {
                                        votes[2] = 0;
                                    } else {
                                        if (diastolic_time <= 87.25) {
                                            votes[2] = 0;
                                        } else {
                                            votes[2] = 0;
                                        }
                                    }
                                } else {
                                    votes[2] = 0;
                                }
                            } else {
                                votes[2] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 76.5) {
                if (diastolic_time <= 68.75) {
                    if (rr_median <= 234.5) {
                        if (rr_std <= 39.426151275634766) {
                            if (num_valleys <= 92.5) {
                                votes[2] = 1;
                            } else {
                                votes[2] = 1;
                            }
                        } else {
                            votes[2] = 1;
                        }
                    } else {
                        votes[2] = 1;
                    }
                } else {
                    if (num_valleys <= 88.5) {
                        if (num_peaks <= 55.5) {
                            if (rr_std <= 4.010203957557678) {
                                votes[2] = 1;
                            } else {
                                votes[2] = 1;
                            }
                        } else {
                            votes[2] = 1;
                        }
                    } else {
                        if (rr_std <= 15.860209941864014) {
                            if (rr_median <= 124.5) {
                                votes[2] = 2;
                            } else {
                                votes[2] = 2;
                            }
                        } else {
                            if (diastolic_time <= 101.0) {
                                if (diastolic_time <= 85.75) {
                                    votes[2] = 4;
                                } else {
                                    votes[2] = 4;
                                }
                            } else {
                                votes[2] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 28.76714038848877) {
                    if (diastolic_time <= 43.5) {
                        votes[2] = 5;
                    } else {
                        if (num_valleys <= 87.0) {
                            votes[2] = 1;
                        } else {
                            if (rr_std <= 2.443747639656067) {
                                votes[2] = 1;
                            } else {
                                votes[2] = 2;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 88.5) {
                        votes[2] = 1;
                    } else {
                        if (num_peaks <= 82.5) {
                            votes[2] = 1;
                        } else {
                            if (rr_median <= 161.75) {
                                votes[2] = 0;
                            } else {
                                votes[2] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 3
    if (num_peaks <= 74.5) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.33040061593055725) {
                if (diastolic_time <= 50.0) {
                    votes[3] = 1;
                } else {
                    if (diastolic_time <= 95.5) {
                        votes[3] = 5;
                    } else {
                        votes[3] = 1;
                    }
                }
            } else {
                if (rr_std <= 0.7299954891204834) {
                    if (num_peaks <= 59.5) {
                        if (rr_median <= 69.5) {
                            if (diastolic_time <= 63.5) {
                                votes[3] = 2;
                            } else {
                                votes[3] = 2;
                            }
                        } else {
                            votes[3] = 2;
                        }
                    } else {
                        if (num_peaks <= 65.0) {
                            votes[3] = 2;
                        } else {
                            votes[3] = 2;
                        }
                    }
                } else {
                    if (rr_median <= 85.5) {
                        votes[3] = 5;
                    } else {
                        votes[3] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 134.25) {
                if (diastolic_time <= 327.0) {
                    if (diastolic_time <= 108.0) {
                        if (rr_std <= 24.55654811859131) {
                            if (diastolic_time <= 39.5) {
                                if (rr_median <= 47.0) {
                                    if (num_peaks <= 60.0) {
                                        if (num_peaks <= 41.0) {
                                            votes[3] = 4;
                                        } else {
                                            votes[3] = 4;
                                        }
                                    } else {
                                        votes[3] = 5;
                                    }
                                } else {
                                    if (rr_median <= 102.5) {
                                        if (num_valleys <= 88.5) {
                                            votes[3] = 3;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    } else {
                                        votes[3] = 1;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 82.0) {
                                    if (num_valleys <= 90.5) {
                                        if (num_peaks <= 35.0) {
                                            votes[3] = 4;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 49.5) {
                                            votes[3] = 2;
                                        } else {
                                            votes[3] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 4.278731822967529) {
                                        if (num_peaks <= 39.0) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 111.25) {
                                            votes[3] = 4;
                                        } else {
                                            votes[3] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.75) {
                                if (num_peaks <= 55.5) {
                                    if (rr_std <= 41.387996673583984) {
                                        votes[3] = 3;
                                    } else {
                                        votes[3] = 4;
                                    }
                                } else {
                                    votes[3] = 1;
                                }
                            } else {
                                if (rr_median <= 103.25) {
                                    votes[3] = 4;
                                } else {
                                    votes[3] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 118.25) {
                            votes[3] = 1;
                        } else {
                            if (num_valleys <= 90.5) {
                                votes[3] = 1;
                            } else {
                                votes[3] = 2;
                            }
                        }
                    }
                } else {
                    votes[3] = 4;
                }
            } else {
                if (rr_std <= 60.63511276245117) {
                    if (diastolic_time <= 38.5) {
                        votes[3] = 1;
                    } else {
                        if (num_valleys <= 93.0) {
                            votes[3] = 1;
                        } else {
                            votes[3] = 1;
                        }
                    }
                } else {
                    votes[3] = 3;
                }
            }
        }
    } else {
        if (rr_median <= 96.5) {
            if (rr_median <= 63.25) {
                if (rr_median <= 20.5) {
                    if (diastolic_time <= 32.5) {
                        votes[3] = 3;
                    } else {
                        if (num_peaks <= 88.5) {
                            if (num_peaks <= 80.5) {
                                votes[3] = 0;
                            } else {
                                if (num_peaks <= 84.5) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 66.75) {
                                votes[3] = 2;
                            } else {
                                votes[3] = 0;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 88.5) {
                        if (num_peaks <= 75.5) {
                            votes[3] = 3;
                        } else {
                            if (rr_median <= 59.75) {
                                if (diastolic_time <= 67.5) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 3;
                                }
                            } else {
                                votes[3] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 49.25) {
                            votes[3] = 3;
                        } else {
                            if (rr_median <= 57.75) {
                                votes[3] = 0;
                            } else {
                                votes[3] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.04945421218872) {
                    if (rr_std <= 1.01116344332695) {
                        if (diastolic_time <= 76.75) {
                            if (num_valleys <= 80.5) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 5;
                            }
                        } else {
                            votes[3] = 2;
                        }
                    } else {
                        if (diastolic_time <= 72.0) {
                            if (rr_std <= 3.389407515525818) {
                                votes[3] = 3;
                            } else {
                                votes[3] = 5;
                            }
                        } else {
                            if (rr_std <= 1.3863485455513) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 15.415287971496582) {
                        if (diastolic_time <= 73.0) {
                            votes[3] = 0;
                        } else {
                            if (diastolic_time <= 79.0) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 68.0) {
                            if (num_valleys <= 90.5) {
                                votes[3] = 3;
                            } else {
                                votes[3] = 5;
                            }
                        } else {
                            if (num_peaks <= 85.0) {
                                votes[3] = 4;
                            } else {
                                votes[3] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 87.5) {
                if (rr_std <= 21.63187599182129) {
                    if (diastolic_time <= 61.25) {
                        votes[3] = 1;
                    } else {
                        votes[3] = 1;
                    }
                } else {
                    votes[3] = 1;
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 147.0) {
                        if (diastolic_time <= 112.0) {
                            votes[3] = 5;
                        } else {
                            votes[3] = 0;
                        }
                    } else {
                        if (num_valleys <= 91.5) {
                            votes[3] = 1;
                        } else {
                            votes[3] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 7.98356819152832) {
                        votes[3] = 2;
                    } else {
                        if (diastolic_time <= 79.75) {
                            if (num_valleys <= 90.5) {
                                votes[3] = 0;
                            } else {
                                votes[3] = 0;
                            }
                        } else {
                            votes[3] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 4
    if (num_valleys <= 81.5) {
        if (rr_median <= 64.0) {
            votes[4] = 3;
        } else {
            if (rr_median <= 75.0) {
                if (num_peaks <= 71.5) {
                    if (rr_median <= 71.75) {
                        if (rr_std <= 0.5609768927097321) {
                            votes[4] = 2;
                        } else {
                            votes[4] = 2;
                        }
                    } else {
                        votes[4] = 2;
                    }
                } else {
                    votes[4] = 2;
                }
            } else {
                if (diastolic_time <= 75.5) {
                    votes[4] = 3;
                } else {
                    votes[4] = 5;
                }
            }
        }
    } else {
        if (rr_median <= 100.25) {
            if (num_peaks <= 75.5) {
                if (diastolic_time <= 74.25) {
                    if (diastolic_time <= 37.75) {
                        if (rr_median <= 60.5) {
                            if (diastolic_time <= 10.0) {
                                votes[4] = 4;
                            } else {
                                if (diastolic_time <= 31.0) {
                                    votes[4] = 4;
                                } else {
                                    if (num_peaks <= 55.5) {
                                        votes[4] = 4;
                                    } else {
                                        votes[4] = 4;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 66.5) {
                                votes[4] = 1;
                            } else {
                                votes[4] = 3;
                            }
                        }
                    } else {
                        if (num_valleys <= 90.5) {
                            if (diastolic_time <= 55.25) {
                                if (num_peaks <= 42.0) {
                                    if (diastolic_time <= 46.0) {
                                        votes[4] = 5;
                                    } else {
                                        votes[4] = 4;
                                    }
                                } else {
                                    if (rr_median <= 65.5) {
                                        if (diastolic_time <= 50.5) {
                                            votes[4] = 3;
                                        } else {
                                            votes[4] = 3;
                                        }
                                    } else {
                                        if (rr_median <= 70.5) {
                                            votes[4] = 2;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 63.0) {
                                    if (rr_std <= 0.7076923251152039) {
                                        if (rr_median <= 69.75) {
                                            votes[4] = 2;
                                        } else {
                                            votes[4] = 2;
                                        }
                                    } else {
                                        if (diastolic_time <= 59.25) {
                                            votes[4] = 1;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 67.25) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 4;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 47.0) {
                                votes[4] = 4;
                            } else {
                                if (num_peaks <= 57.5) {
                                    if (num_peaks <= 50.5) {
                                        votes[4] = 0;
                                    } else {
                                        votes[4] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 51.75) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.518269538879395) {
                        if (diastolic_time <= 108.75) {
                            if (diastolic_time <= 86.5) {
                                if (num_valleys <= 89.0) {
                                    votes[4] = 5;
                                } else {
                                    votes[4] = 3;
                                }
                            } else {
                                if (diastolic_time <= 89.5) {
                                    votes[4] = 5;
                                } else {
                                    votes[4] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 236.5) {
                                votes[4] = 1;
                            } else {
                                votes[4] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 109.75) {
                            if (rr_median <= 96.75) {
                                if (num_peaks <= 66.0) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 4;
                                }
                            } else {
                                votes[4] = 4;
                            }
                        } else {
                            if (rr_median <= 70.5) {
                                votes[4] = 1;
                            } else {
                                votes[4] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 63.75) {
                    if (rr_median <= 20.5) {
                        if (diastolic_time <= 32.5) {
                            votes[4] = 3;
                        } else {
                            if (num_peaks <= 89.0) {
                                if (diastolic_time <= 63.0) {
                                    if (diastolic_time <= 42.25) {
                                        votes[4] = 0;
                                    } else {
                                        votes[4] = 0;
                                    }
                                } else {
                                    if (num_valleys <= 89.5) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 0;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 65.75) {
                                    votes[4] = 2;
                                } else {
                                    votes[4] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 60.25) {
                            if (diastolic_time <= 51.25) {
                                votes[4] = 3;
                            } else {
                                if (num_peaks <= 88.5) {
                                    if (rr_std <= 13.412452697753906) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 3;
                                    }
                                } else {
                                    votes[4] = 0;
                                }
                            }
                        } else {
                            votes[4] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 6.497220993041992) {
                        if (rr_median <= 92.25) {
                            if (rr_std <= 1.1686792373657227) {
                                if (diastolic_time <= 77.75) {
                                    votes[4] = 5;
                                } else {
                                    votes[4] = 5;
                                }
                            } else {
                                if (rr_std <= 2.733671545982361) {
                                    votes[4] = 3;
                                } else {
                                    votes[4] = 5;
                                }
                            }
                        } else {
                            votes[4] = 1;
                        }
                    } else {
                        if (diastolic_time <= 84.75) {
                            if (diastolic_time <= 72.5) {
                                if (diastolic_time <= 61.25) {
                                    if (num_valleys <= 90.5) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 5;
                                    }
                                } else {
                                    votes[4] = 0;
                                }
                            } else {
                                if (rr_median <= 81.75) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 5;
                                }
                            }
                        } else {
                            votes[4] = 0;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 85.5) {
                if (rr_median <= 129.5) {
                    if (rr_median <= 117.75) {
                        if (rr_median <= 110.75) {
                            if (rr_std <= 34.130332946777344) {
                                if (diastolic_time <= 78.5) {
                                    votes[4] = 1;
                                } else {
                                    votes[4] = 5;
                                }
                            } else {
                                votes[4] = 1;
                            }
                        } else {
                            votes[4] = 1;
                        }
                    } else {
                        if (rr_std <= 32.163808822631836) {
                            if (num_peaks <= 54.0) {
                                votes[4] = 2;
                            } else {
                                if (num_valleys <= 90.5) {
                                    votes[4] = 1;
                                } else {
                                    votes[4] = 2;
                                }
                            }
                        } else {
                            votes[4] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 0.4714045226573944) {
                        votes[4] = 3;
                    } else {
                        if (num_valleys <= 93.5) {
                            if (rr_std <= 72.50964736938477) {
                                if (rr_median <= 134.25) {
                                    votes[4] = 1;
                                } else {
                                    if (rr_median <= 241.75) {
                                        votes[4] = 1;
                                    } else {
                                        votes[4] = 1;
                                    }
                                }
                            } else {
                                votes[4] = 3;
                            }
                        } else {
                            votes[4] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 12.939188957214355) {
                    if (diastolic_time <= 58.5) {
                        votes[4] = 1;
                    } else {
                        votes[4] = 1;
                    }
                } else {
                    if (diastolic_time <= 84.5) {
                        if (num_valleys <= 87.5) {
                            votes[4] = 1;
                        } else {
                            votes[4] = 0;
                        }
                    } else {
                        if (num_peaks <= 89.5) {
                            votes[4] = 0;
                        } else {
                            votes[4] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 5
    if (num_peaks <= 74.5) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 64.0) {
                if (num_peaks <= 57.0) {
                    if (diastolic_time <= 59.25) {
                        votes[5] = 4;
                    } else {
                        votes[5] = 5;
                    }
                } else {
                    votes[5] = 1;
                }
            } else {
                if (rr_median <= 75.5) {
                    if (rr_std <= 0.6705417931079865) {
                        if (rr_std <= 0.4740213602781296) {
                            if (rr_median <= 71.0) {
                                votes[5] = 2;
                            } else {
                                votes[5] = 2;
                            }
                        } else {
                            votes[5] = 2;
                        }
                    } else {
                        votes[5] = 2;
                    }
                } else {
                    if (rr_median <= 88.5) {
                        votes[5] = 3;
                    } else {
                        votes[5] = 4;
                    }
                }
            }
        } else {
            if (rr_median <= 126.5) {
                if (rr_median <= 119.75) {
                    if (diastolic_time <= 110.5) {
                        if (rr_std <= 21.01315402984619) {
                            if (diastolic_time <= 10.0) {
                                if (num_valleys <= 90.5) {
                                    votes[5] = 4;
                                } else {
                                    votes[5] = 4;
                                }
                            } else {
                                if (diastolic_time <= 75.25) {
                                    if (num_peaks <= 56.5) {
                                        if (num_peaks <= 41.5) {
                                            votes[5] = 4;
                                        } else {
                                            votes[5] = 0;
                                        }
                                    } else {
                                        if (rr_median <= 73.25) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.316328048706055) {
                                        if (rr_median <= 93.0) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 5;
                                        }
                                    } else {
                                        votes[5] = 4;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                if (num_peaks <= 68.5) {
                                    if (num_peaks <= 53.5) {
                                        votes[5] = 4;
                                    } else {
                                        votes[5] = 1;
                                    }
                                } else {
                                    votes[5] = 0;
                                }
                            } else {
                                if (rr_std <= 31.96318244934082) {
                                    if (rr_median <= 88.5) {
                                        if (rr_std <= 22.283042907714844) {
                                            votes[5] = 4;
                                        } else {
                                            votes[5] = 4;
                                        }
                                    } else {
                                        votes[5] = 4;
                                    }
                                } else {
                                    votes[5] = 4;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 244.5) {
                            votes[5] = 1;
                        } else {
                            votes[5] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 9.065512657165527) {
                        votes[5] = 2;
                    } else {
                        votes[5] = 1;
                    }
                }
            } else {
                if (rr_std <= 51.943071365356445) {
                    if (num_valleys <= 94.5) {
                        if (rr_median <= 239.5) {
                            if (num_valleys <= 86.5) {
                                votes[5] = 1;
                            } else {
                                votes[5] = 1;
                            }
                        } else {
                            votes[5] = 1;
                        }
                    } else {
                        votes[5] = 2;
                    }
                } else {
                    votes[5] = 3;
                }
            }
        }
    } else {
        if (rr_median <= 104.5) {
            if (diastolic_time <= 53.5) {
                if (rr_std <= 1.0098017156124115) {
                    if (rr_std <= 0.524837389588356) {
                        if (num_valleys <= 89.5) {
                            if (num_peaks <= 83.0) {
                                votes[5] = 3;
                            } else {
                                votes[5] = 2;
                            }
                        } else {
                            votes[5] = 0;
                        }
                    } else {
                        votes[5] = 5;
                    }
                } else {
                    if (rr_std <= 10.86811637878418) {
                        if (diastolic_time <= 48.0) {
                            votes[5] = 3;
                        } else {
                            votes[5] = 3;
                        }
                    } else {
                        if (rr_std <= 13.903979778289795) {
                            if (rr_median <= 65.0) {
                                votes[5] = 3;
                            } else {
                                votes[5] = 0;
                            }
                        } else {
                            if (rr_median <= 77.75) {
                                if (diastolic_time <= 41.5) {
                                    votes[5] = 3;
                                } else {
                                    if (rr_std <= 24.905704498291016) {
                                        votes[5] = 3;
                                    } else {
                                        votes[5] = 3;
                                    }
                                }
                            } else {
                                votes[5] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_valleys <= 86.5) {
                    if (rr_median <= 73.5) {
                        votes[5] = 3;
                    } else {
                        if (diastolic_time <= 76.75) {
                            votes[5] = 5;
                        } else {
                            votes[5] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (rr_std <= 18.301414012908936) {
                            if (rr_std <= 9.213236331939697) {
                                if (rr_std <= 1.1347584128379822) {
                                    if (diastolic_time <= 87.5) {
                                        votes[5] = 0;
                                    } else {
                                        votes[5] = 3;
                                    }
                                } else {
                                    votes[5] = 3;
                                }
                            } else {
                                votes[5] = 0;
                            }
                        } else {
                            if (rr_std <= 32.889689445495605) {
                                votes[5] = 4;
                            } else {
                                votes[5] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 9.51451826095581) {
                            if (rr_median <= 72.5) {
                                if (diastolic_time <= 77.25) {
                                    if (rr_median <= 26.0) {
                                        votes[5] = 0;
                                    } else {
                                        votes[5] = 0;
                                    }
                                } else {
                                    votes[5] = 0;
                                }
                            } else {
                                votes[5] = 5;
                            }
                        } else {
                            if (rr_median <= 62.75) {
                                votes[5] = 0;
                            } else {
                                if (num_peaks <= 87.5) {
                                    votes[5] = 0;
                                } else {
                                    votes[5] = 0;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 30.06629467010498) {
                if (num_peaks <= 80.5) {
                    votes[5] = 2;
                } else {
                    if (rr_median <= 119.5) {
                        votes[5] = 1;
                    } else {
                        if (rr_std <= 4.23868989944458) {
                            votes[5] = 1;
                        } else {
                            votes[5] = 1;
                        }
                    }
                }
            } else {
                if (num_peaks <= 82.0) {
                    votes[5] = 5;
                } else {
                    if (diastolic_time <= 81.75) {
                        votes[5] = 0;
                    } else {
                        votes[5] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 6
    if (num_peaks <= 74.5) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.7192845046520233) {
                if (rr_std <= 0.1332346796989441) {
                    if (num_valleys <= 82.5) {
                        if (diastolic_time <= 67.75) {
                            votes[6] = 1;
                        } else {
                            votes[6] = 5;
                        }
                    } else {
                        if (diastolic_time <= 59.0) {
                            votes[6] = 4;
                        } else {
                            votes[6] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 58.0) {
                        if (num_valleys <= 73.0) {
                            votes[6] = 2;
                        } else {
                            votes[6] = 2;
                        }
                    } else {
                        if (rr_median <= 69.0) {
                            if (rr_std <= 0.592930406332016) {
                                votes[6] = 2;
                            } else {
                                votes[6] = 2;
                            }
                        } else {
                            votes[6] = 3;
                        }
                    }
                }
            } else {
                if (rr_median <= 84.0) {
                    if (rr_median <= 72.5) {
                        votes[6] = 3;
                    } else {
                        votes[6] = 5;
                    }
                } else {
                    votes[6] = 1;
                }
            }
        } else {
            if (rr_median <= 126.5) {
                if (diastolic_time <= 78.5) {
                    if (diastolic_time <= 40.75) {
                        if (rr_median <= 39.0) {
                            if (num_valleys <= 87.5) {
                                votes[6] = 5;
                            } else {
                                if (num_peaks <= 39.5) {
                                    votes[6] = 4;
                                } else {
                                    if (num_peaks <= 58.5) {
                                        votes[6] = 4;
                                    } else {
                                        votes[6] = 4;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 60.5) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 46.5) {
                            if (num_peaks <= 43.5) {
                                if (diastolic_time <= 54.25) {
                                    votes[6] = 5;
                                } else {
                                    votes[6] = 4;
                                }
                            } else {
                                votes[6] = 2;
                            }
                        } else {
                            if (rr_std <= 11.68827199935913) {
                                if (num_peaks <= 56.5) {
                                    if (num_peaks <= 49.5) {
                                        votes[6] = 2;
                                    } else {
                                        if (num_valleys <= 88.5) {
                                            votes[6] = 2;
                                        } else {
                                            votes[6] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 74.5) {
                                        if (rr_std <= 1.0796633958816528) {
                                            votes[6] = 3;
                                        } else {
                                            votes[6] = 3;
                                        }
                                    } else {
                                        votes[6] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 22.26320171356201) {
                                    if (rr_median <= 72.25) {
                                        if (diastolic_time <= 65.5) {
                                            votes[6] = 0;
                                        } else {
                                            votes[6] = 5;
                                        }
                                    } else {
                                        votes[6] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 59.5) {
                                        votes[6] = 1;
                                    } else {
                                        votes[6] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 118.5) {
                        if (diastolic_time <= 102.5) {
                            if (rr_std <= 15.316328048706055) {
                                if (rr_median <= 93.0) {
                                    if (num_valleys <= 90.5) {
                                        votes[6] = 5;
                                    } else {
                                        votes[6] = 5;
                                    }
                                } else {
                                    votes[6] = 5;
                                }
                            } else {
                                if (num_peaks <= 49.5) {
                                    votes[6] = 4;
                                } else {
                                    votes[6] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 241.5) {
                                if (diastolic_time <= 107.5) {
                                    votes[6] = 5;
                                } else {
                                    votes[6] = 1;
                                }
                            } else {
                                votes[6] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 5.741337299346924) {
                            votes[6] = 2;
                        } else {
                            votes[6] = 2;
                        }
                    }
                }
            } else {
                if (rr_std <= 54.465776443481445) {
                    if (rr_std <= 1.083776980638504) {
                        votes[6] = 3;
                    } else {
                        if (num_valleys <= 93.5) {
                            if (num_peaks <= 51.0) {
                                votes[6] = 1;
                            } else {
                                votes[6] = 1;
                            }
                        } else {
                            votes[6] = 1;
                        }
                    }
                } else {
                    votes[6] = 3;
                }
            }
        }
    } else {
        if (rr_median <= 98.75) {
            if (diastolic_time <= 54.75) {
                if (rr_median <= 67.5) {
                    if (rr_median <= 20.5) {
                        if (diastolic_time <= 37.5) {
                            if (num_peaks <= 87.0) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 2;
                            }
                        } else {
                            votes[6] = 0;
                        }
                    } else {
                        if (rr_median <= 58.25) {
                            if (num_peaks <= 77.5) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        } else {
                            if (num_peaks <= 83.5) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 0;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 40.0) {
                        votes[6] = 5;
                    } else {
                        if (rr_std <= 9.69526720046997) {
                            if (rr_std <= 0.8155899941921234) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 5;
                            }
                        } else {
                            if (rr_std <= 14.5616455078125) {
                                votes[6] = 0;
                            } else {
                                votes[6] = 3;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (num_valleys <= 88.5) {
                        if (rr_median <= 82.25) {
                            if (num_valleys <= 86.5) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 5;
                            }
                        } else {
                            if (diastolic_time <= 86.5) {
                                votes[6] = 5;
                            } else {
                                votes[6] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 17.157873153686523) {
                            if (rr_std <= 6.359187602996826) {
                                if (rr_std <= 0.5678778290748596) {
                                    votes[6] = 0;
                                } else {
                                    votes[6] = 3;
                                }
                            } else {
                                votes[6] = 0;
                            }
                        } else {
                            votes[6] = 4;
                        }
                    }
                } else {
                    if (num_valleys <= 86.5) {
                        votes[6] = 3;
                    } else {
                        if (diastolic_time <= 70.25) {
                            if (diastolic_time <= 60.5) {
                                votes[6] = 0;
                            } else {
                                if (num_valleys <= 91.5) {
                                    votes[6] = 0;
                                } else {
                                    votes[6] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 78.0) {
                                votes[6] = 5;
                            } else {
                                if (rr_std <= 4.17321240901947) {
                                    votes[6] = 2;
                                } else {
                                    votes[6] = 0;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 39.662532806396484) {
                if (rr_median <= 127.5) {
                    if (num_peaks <= 88.5) {
                        if (diastolic_time <= 52.5) {
                            votes[6] = 5;
                        } else {
                            if (rr_median <= 105.5) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 91.5) {
                            votes[6] = 1;
                        } else {
                            votes[6] = 0;
                        }
                    }
                } else {
                    if (num_peaks <= 87.5) {
                        if (diastolic_time <= 91.25) {
                            votes[6] = 1;
                        } else {
                            votes[6] = 1;
                        }
                    } else {
                        votes[6] = 1;
                    }
                }
            } else {
                if (rr_median <= 126.5) {
                    votes[6] = 1;
                } else {
                    if (num_peaks <= 86.5) {
                        votes[6] = 0;
                    } else {
                        votes[6] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 7
    if (num_valleys <= 83.5) {
        if (rr_median <= 75.0) {
            if (rr_median <= 66.0) {
                if (num_peaks <= 57.5) {
                    votes[7] = 5;
                } else {
                    if (diastolic_time <= 52.75) {
                        votes[7] = 3;
                    } else {
                        votes[7] = 1;
                    }
                }
            } else {
                if (num_peaks <= 58.0) {
                    votes[7] = 2;
                } else {
                    if (rr_std <= 0.583409309387207) {
                        if (rr_std <= 0.545406848192215) {
                            votes[7] = 2;
                        } else {
                            votes[7] = 2;
                        }
                    } else {
                        votes[7] = 5;
                    }
                }
            }
        } else {
            if (diastolic_time <= 76.25) {
                if (diastolic_time <= 42.5) {
                    votes[7] = 5;
                } else {
                    votes[7] = 3;
                }
            } else {
                if (rr_std <= 0.8331523835659027) {
                    votes[7] = 5;
                } else {
                    votes[7] = 1;
                }
            }
        }
    } else {
        if (num_peaks <= 77.5) {
            if (rr_median <= 129.5) {
                if (diastolic_time <= 261.5) {
                    if (diastolic_time <= 108.75) {
                        if (rr_std <= 14.650292873382568) {
                            if (diastolic_time <= 10.0) {
                                if (num_valleys <= 90.5) {
                                    votes[7] = 4;
                                } else {
                                    votes[7] = 4;
                                }
                            } else {
                                if (num_peaks <= 50.5) {
                                    if (num_peaks <= 41.5) {
                                        if (num_peaks <= 24.5) {
                                            votes[7] = 4;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 53.25) {
                                            votes[7] = 4;
                                        } else {
                                            votes[7] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 86.75) {
                                        if (num_valleys <= 90.5) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 85.25) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 74.25) {
                                if (num_peaks <= 60.5) {
                                    if (rr_std <= 47.31622886657715) {
                                        if (rr_std <= 22.538288116455078) {
                                            votes[7] = 5;
                                        } else {
                                            votes[7] = 1;
                                        }
                                    } else {
                                        votes[7] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 48.5) {
                                        if (num_peaks <= 67.5) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 21.05630874633789) {
                                            votes[7] = 0;
                                        } else {
                                            votes[7] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 97.75) {
                                    if (num_peaks <= 66.5) {
                                        votes[7] = 4;
                                    } else {
                                        if (num_peaks <= 71.5) {
                                            votes[7] = 4;
                                        } else {
                                            votes[7] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 37.03412628173828) {
                                        if (rr_median <= 101.5) {
                                            votes[7] = 5;
                                        } else {
                                            votes[7] = 1;
                                        }
                                    } else {
                                        votes[7] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 118.25) {
                            if (num_peaks <= 50.5) {
                                votes[7] = 1;
                            } else {
                                votes[7] = 1;
                            }
                        } else {
                            if (diastolic_time <= 120.0) {
                                votes[7] = 2;
                            } else {
                                votes[7] = 2;
                            }
                        }
                    }
                } else {
                    votes[7] = 4;
                }
            } else {
                if (rr_std <= 0.6123724579811096) {
                    votes[7] = 3;
                } else {
                    if (num_valleys <= 92.5) {
                        if (num_peaks <= 49.5) {
                            votes[7] = 1;
                        } else {
                            if (rr_std <= 50.78167915344238) {
                                votes[7] = 1;
                            } else {
                                votes[7] = 1;
                            }
                        }
                    } else {
                        votes[7] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 85.5) {
                if (rr_median <= 72.5) {
                    if (diastolic_time <= 42.25) {
                        votes[7] = 3;
                    } else {
                        if (rr_median <= 20.5) {
                            votes[7] = 0;
                        } else {
                            if (num_peaks <= 81.5) {
                                if (num_peaks <= 79.5) {
                                    votes[7] = 3;
                                } else {
                                    votes[7] = 3;
                                }
                            } else {
                                votes[7] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 130.5) {
                        if (rr_std <= 3.2070316076278687) {
                            if (diastolic_time <= 72.0) {
                                votes[7] = 5;
                            } else {
                                votes[7] = 2;
                            }
                        } else {
                            if (num_valleys <= 87.5) {
                                votes[7] = 3;
                            } else {
                                if (rr_std <= 20.646851539611816) {
                                    votes[7] = 0;
                                } else {
                                    votes[7] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 191.5) {
                            votes[7] = 1;
                        } else {
                            votes[7] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 50.5) {
                    if (rr_median <= 83.5) {
                        if (rr_std <= 13.379060745239258) {
                            if (rr_std <= 2.2449560165405273) {
                                if (diastolic_time <= 41.5) {
                                    votes[7] = 2;
                                } else {
                                    votes[7] = 1;
                                }
                            } else {
                                votes[7] = 0;
                            }
                        } else {
                            votes[7] = 3;
                        }
                    } else {
                        if (rr_median <= 98.75) {
                            votes[7] = 5;
                        } else {
                            votes[7] = 1;
                        }
                    }
                } else {
                    if (rr_median <= 100.25) {
                        if (rr_std <= 8.621502876281738) {
                            if (rr_median <= 74.0) {
                                if (diastolic_time <= 76.75) {
                                    if (num_peaks <= 89.0) {
                                        votes[7] = 0;
                                    } else {
                                        votes[7] = 0;
                                    }
                                } else {
                                    votes[7] = 0;
                                }
                            } else {
                                votes[7] = 5;
                            }
                        } else {
                            if (rr_median <= 54.5) {
                                votes[7] = 3;
                            } else {
                                if (num_peaks <= 87.5) {
                                    if (diastolic_time <= 67.25) {
                                        votes[7] = 0;
                                    } else {
                                        votes[7] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 61.25) {
                                        votes[7] = 0;
                                    } else {
                                        if (rr_median <= 90.5) {
                                            votes[7] = 0;
                                        } else {
                                            votes[7] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 9.581985712051392) {
                            votes[7] = 1;
                        } else {
                            if (diastolic_time <= 82.0) {
                                votes[7] = 0;
                            } else {
                                if (rr_median <= 118.5) {
                                    votes[7] = 0;
                                } else {
                                    votes[7] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 8
    if (num_peaks <= 74.5) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 66.0) {
                if (diastolic_time <= 46.0) {
                    votes[8] = 3;
                } else {
                    if (num_valleys <= 81.5) {
                        votes[8] = 5;
                    } else {
                        votes[8] = 4;
                    }
                }
            } else {
                if (rr_std <= 0.7192845046520233) {
                    if (rr_median <= 73.5) {
                        if (rr_median <= 71.5) {
                            if (num_valleys <= 80.5) {
                                if (rr_std <= 0.4740213602781296) {
                                    votes[8] = 2;
                                } else {
                                    votes[8] = 2;
                                }
                            } else {
                                votes[8] = 2;
                            }
                        } else {
                            votes[8] = 2;
                        }
                    } else {
                        votes[8] = 2;
                    }
                } else {
                    if (num_peaks <= 59.5) {
                        votes[8] = 1;
                    } else {
                        votes[8] = 5;
                    }
                }
            }
        } else {
            if (rr_median <= 134.25) {
                if (diastolic_time <= 327.5) {
                    if (diastolic_time <= 116.5) {
                        if (diastolic_time <= 37.75) {
                            if (rr_median <= 52.75) {
                                if (diastolic_time <= 10.0) {
                                    votes[8] = 4;
                                } else {
                                    if (diastolic_time <= 30.5) {
                                        votes[8] = 4;
                                    } else {
                                        if (num_peaks <= 55.5) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[8] = 1;
                            }
                        } else {
                            if (rr_std <= 16.26704502105713) {
                                if (diastolic_time <= 74.0) {
                                    if (diastolic_time <= 54.75) {
                                        if (rr_std <= 1.4815127849578857) {
                                            votes[8] = 5;
                                        } else {
                                            votes[8] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 44.0) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 114.0) {
                                        if (diastolic_time <= 81.5) {
                                            votes[8] = 5;
                                        } else {
                                            votes[8] = 5;
                                        }
                                    } else {
                                        votes[8] = 2;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 65.5) {
                                    if (diastolic_time <= 48.0) {
                                        votes[8] = 3;
                                    } else {
                                        votes[8] = 1;
                                    }
                                } else {
                                    if (rr_median <= 88.5) {
                                        if (diastolic_time <= 74.5) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    } else {
                                        if (num_peaks <= 54.0) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 118.25) {
                            votes[8] = 1;
                        } else {
                            votes[8] = 2;
                        }
                    }
                } else {
                    votes[8] = 4;
                }
            } else {
                if (rr_std <= 65.61231994628906) {
                    if (num_valleys <= 92.5) {
                        if (rr_std <= 2.157583713531494) {
                            votes[8] = 1;
                        } else {
                            votes[8] = 1;
                        }
                    } else {
                        votes[8] = 1;
                    }
                } else {
                    votes[8] = 3;
                }
            }
        }
    } else {
        if (num_peaks <= 85.5) {
            if (rr_median <= 71.5) {
                if (rr_median <= 20.5) {
                    if (diastolic_time <= 32.5) {
                        votes[8] = 3;
                    } else {
                        if (diastolic_time <= 61.75) {
                            votes[8] = 0;
                        } else {
                            votes[8] = 0;
                        }
                    }
                } else {
                    if (rr_median <= 61.5) {
                        if (diastolic_time <= 57.5) {
                            if (num_peaks <= 76.5) {
                                votes[8] = 3;
                            } else {
                                votes[8] = 3;
                            }
                        } else {
                            votes[8] = 3;
                        }
                    } else {
                        if (rr_median <= 68.0) {
                            votes[8] = 4;
                        } else {
                            votes[8] = 3;
                        }
                    }
                }
            } else {
                if (rr_median <= 121.5) {
                    if (num_valleys <= 88.5) {
                        if (num_peaks <= 81.5) {
                            if (rr_median <= 85.5) {
                                votes[8] = 5;
                            } else {
                                if (num_peaks <= 77.5) {
                                    votes[8] = 5;
                                } else {
                                    votes[8] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 77.75) {
                                votes[8] = 5;
                            } else {
                                votes[8] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 21.683125495910645) {
                            if (rr_std <= 6.138434648513794) {
                                votes[8] = 3;
                            } else {
                                if (rr_std <= 13.731914520263672) {
                                    votes[8] = 0;
                                } else {
                                    votes[8] = 5;
                                }
                            }
                        } else {
                            votes[8] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 4.271948218345642) {
                        votes[8] = 2;
                    } else {
                        if (rr_std <= 33.80125331878662) {
                            votes[8] = 1;
                        } else {
                            votes[8] = 0;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 50.5) {
                if (num_peaks <= 92.5) {
                    if (rr_median <= 59.5) {
                        if (num_peaks <= 89.5) {
                            votes[8] = 0;
                        } else {
                            votes[8] = 3;
                        }
                    } else {
                        if (num_peaks <= 90.5) {
                            if (rr_median <= 74.5) {
                                votes[8] = 0;
                            } else {
                                votes[8] = 3;
                            }
                        } else {
                            votes[8] = 1;
                        }
                    }
                } else {
                    votes[8] = 2;
                }
            } else {
                if (rr_std <= 8.847529888153076) {
                    if (diastolic_time <= 91.75) {
                        if (diastolic_time <= 63.25) {
                            if (diastolic_time <= 56.75) {
                                votes[8] = 0;
                            } else {
                                votes[8] = 0;
                            }
                        } else {
                            if (rr_median <= 35.0) {
                                votes[8] = 0;
                            } else {
                                votes[8] = 5;
                            }
                        }
                    } else {
                        votes[8] = 1;
                    }
                } else {
                    if (num_valleys <= 86.5) {
                        votes[8] = 1;
                    } else {
                        if (diastolic_time <= 84.75) {
                            if (rr_std <= 28.167020797729492) {
                                if (rr_std <= 16.257240295410156) {
                                    if (num_peaks <= 87.5) {
                                        votes[8] = 0;
                                    } else {
                                        votes[8] = 0;
                                    }
                                } else {
                                    votes[8] = 0;
                                }
                            } else {
                                if (rr_median <= 107.5) {
                                    votes[8] = 1;
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
        }
    }
// Decision rules for tree 9
    if (rr_median <= 128.75) {
        if (num_peaks <= 73.5) {
            if (num_valleys <= 85.5) {
                if (rr_median <= 66.0) {
                    if (diastolic_time <= 62.75) {
                        if (rr_median <= 49.75) {
                            if (diastolic_time <= 46.25) {
                                votes[9] = 4;
                            } else {
                                votes[9] = 2;
                            }
                        } else {
                            votes[9] = 1;
                        }
                    } else {
                        if (num_peaks <= 39.0) {
                            votes[9] = 5;
                        } else {
                            votes[9] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (rr_median <= 80.0) {
                            if (rr_median <= 69.5) {
                                if (rr_std <= 0.6036281585693359) {
                                    votes[9] = 2;
                                } else {
                                    votes[9] = 2;
                                }
                            } else {
                                votes[9] = 2;
                            }
                        } else {
                            votes[9] = 3;
                        }
                    } else {
                        if (diastolic_time <= 59.5) {
                            votes[9] = 5;
                        } else {
                            votes[9] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 109.25) {
                    if (rr_std <= 16.822558403015137) {
                        if (diastolic_time <= 58.5) {
                            if (rr_median <= 46.5) {
                                if (num_peaks <= 62.5) {
                                    if (num_valleys <= 87.5) {
                                        votes[9] = 5;
                                    } else {
                                        if (diastolic_time <= 38.75) {
                                            votes[9] = 4;
                                        } else {
                                            votes[9] = 4;
                                        }
                                    }
                                } else {
                                    votes[9] = 5;
                                }
                            } else {
                                if (diastolic_time <= 40.75) {
                                    if (rr_std <= 8.672154664993286) {
                                        votes[9] = 3;
                                    } else {
                                        votes[9] = 1;
                                    }
                                } else {
                                    if (rr_median <= 67.75) {
                                        votes[9] = 3;
                                    } else {
                                        if (rr_median <= 73.25) {
                                            votes[9] = 0;
                                        } else {
                                            votes[9] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 112.25) {
                                if (diastolic_time <= 66.5) {
                                    if (rr_std <= 0.6789374947547913) {
                                        if (diastolic_time <= 61.75) {
                                            votes[9] = 2;
                                        } else {
                                            votes[9] = 2;
                                        }
                                    } else {
                                        votes[9] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 82.75) {
                                        if (num_peaks <= 55.0) {
                                            votes[9] = 0;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 3.6009628772735596) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 1;
                                        }
                                    }
                                }
                            } else {
                                votes[9] = 2;
                            }
                        }
                    } else {
                        if (diastolic_time <= 64.75) {
                            if (rr_std <= 27.9814453125) {
                                votes[9] = 0;
                            } else {
                                if (rr_std <= 47.31622886657715) {
                                    votes[9] = 1;
                                } else {
                                    votes[9] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 98.5) {
                                if (num_peaks <= 66.5) {
                                    votes[9] = 4;
                                } else {
                                    votes[9] = 4;
                                }
                            } else {
                                if (rr_std <= 42.656219482421875) {
                                    votes[9] = 1;
                                } else {
                                    votes[9] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 244.5) {
                        if (rr_median <= 115.5) {
                            votes[9] = 1;
                        } else {
                            votes[9] = 2;
                        }
                    } else {
                        votes[9] = 4;
                    }
                }
            }
        } else {
            if (diastolic_time <= 52.75) {
                if (rr_median <= 79.25) {
                    if (rr_std <= 0.5942246615886688) {
                        if (num_peaks <= 91.5) {
                            if (diastolic_time <= 32.5) {
                                votes[9] = 3;
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[9] = 3;
                                } else {
                                    votes[9] = 0;
                                }
                            }
                        } else {
                            votes[9] = 2;
                        }
                    } else {
                        if (diastolic_time <= 47.25) {
                            if (num_peaks <= 85.5) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 3;
                            }
                        } else {
                            if (rr_std <= 20.973054885864258) {
                                if (rr_std <= 11.419435024261475) {
                                    votes[9] = 3;
                                } else {
                                    votes[9] = 0;
                                }
                            } else {
                                votes[9] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (num_peaks <= 79.5) {
                            votes[9] = 5;
                        } else {
                            votes[9] = 5;
                        }
                    } else {
                        if (num_peaks <= 88.5) {
                            votes[9] = 3;
                        } else {
                            votes[9] = 1;
                        }
                    }
                }
            } else {
                if (num_valleys <= 86.5) {
                    if (rr_median <= 82.5) {
                        if (num_peaks <= 84.5) {
                            if (num_peaks <= 75.0) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 3;
                            }
                        } else {
                            votes[9] = 5;
                        }
                    } else {
                        if (num_peaks <= 82.0) {
                            votes[9] = 5;
                        } else {
                            votes[9] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 87.5) {
                        if (rr_std <= 20.903016090393066) {
                            if (rr_median <= 80.5) {
                                if (num_valleys <= 92.5) {
                                    if (num_valleys <= 89.5) {
                                        votes[9] = 0;
                                    } else {
                                        if (num_peaks <= 85.5) {
                                            votes[9] = 0;
                                        } else {
                                            votes[9] = 0;
                                        }
                                    }
                                } else {
                                    votes[9] = 3;
                                }
                            } else {
                                if (rr_std <= 7.89020037651062) {
                                    if (diastolic_time <= 95.5) {
                                        votes[9] = 3;
                                    } else {
                                        votes[9] = 2;
                                    }
                                } else {
                                    votes[9] = 0;
                                }
                            }
                        } else {
                            if (rr_median <= 97.25) {
                                if (rr_std <= 28.75518798828125) {
                                    votes[9] = 4;
                                } else {
                                    votes[9] = 0;
                                }
                            } else {
                                if (rr_median <= 117.75) {
                                    votes[9] = 3;
                                } else {
                                    votes[9] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 8.860110759735107) {
                            if (rr_median <= 63.0) {
                                votes[9] = 0;
                            } else {
                                votes[9] = 5;
                            }
                        } else {
                            if (diastolic_time <= 61.5) {
                                votes[9] = 0;
                            } else {
                                if (rr_median <= 98.75) {
                                    votes[9] = 0;
                                } else {
                                    votes[9] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 60.79325866699219) {
            if (rr_median <= 355.0) {
                if (num_peaks <= 87.5) {
                    if (num_valleys <= 93.0) {
                        if (rr_std <= 1.7577543258666992) {
                            votes[9] = 1;
                        } else {
                            votes[9] = 1;
                        }
                    } else {
                        votes[9] = 1;
                    }
                } else {
                    votes[9] = 0;
                }
            } else {
                votes[9] = 0;
            }
        } else {
            if (num_peaks <= 78.0) {
                votes[9] = 3;
            } else {
                votes[9] = 0;
            }
        }
    }
// Decision rules for tree 10
    if (rr_median <= 129.5) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 75.0) {
                if (rr_median <= 62.0) {
                    if (num_peaks <= 57.5) {
                        if (diastolic_time <= 46.0) {
                            votes[10] = 4;
                        } else {
                            if (diastolic_time <= 79.0) {
                                votes[10] = 5;
                            } else {
                                votes[10] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 20.5) {
                            votes[10] = 2;
                        } else {
                            votes[10] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 0.9357241690158844) {
                        if (num_peaks <= 58.0) {
                            if (rr_median <= 68.5) {
                                votes[10] = 2;
                            } else {
                                votes[10] = 2;
                            }
                        } else {
                            if (rr_median <= 68.5) {
                                votes[10] = 2;
                            } else {
                                if (diastolic_time <= 70.75) {
                                    votes[10] = 3;
                                } else {
                                    votes[10] = 2;
                                }
                            }
                        }
                    } else {
                        votes[10] = 5;
                    }
                }
            } else {
                if (rr_median <= 87.0) {
                    votes[10] = 3;
                } else {
                    if (diastolic_time <= 87.0) {
                        votes[10] = 1;
                    } else {
                        votes[10] = 2;
                    }
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (rr_median <= 119.75) {
                    if (diastolic_time <= 108.75) {
                        if (rr_std <= 21.01315402984619) {
                            if (diastolic_time <= 37.75) {
                                if (num_peaks <= 63.0) {
                                    if (rr_median <= 17.5) {
                                        if (num_peaks <= 58.5) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    } else {
                                        votes[10] = 0;
                                    }
                                } else {
                                    votes[10] = 5;
                                }
                            } else {
                                if (diastolic_time <= 72.75) {
                                    if (num_peaks <= 41.5) {
                                        if (num_peaks <= 35.5) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 1;
                                        }
                                    } else {
                                        if (rr_std <= 9.325254917144775) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.316328048706055) {
                                        if (num_peaks <= 52.5) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 59.5) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                if (num_valleys <= 88.0) {
                                    votes[10] = 3;
                                } else {
                                    if (rr_median <= 66.0) {
                                        votes[10] = 3;
                                    } else {
                                        votes[10] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 29.813352584838867) {
                                    if (rr_median <= 87.5) {
                                        votes[10] = 4;
                                    } else {
                                        votes[10] = 4;
                                    }
                                } else {
                                    votes[10] = 4;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 261.5) {
                            votes[10] = 1;
                        } else {
                            votes[10] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 17.862786293029785) {
                        votes[10] = 2;
                    } else {
                        votes[10] = 4;
                    }
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 75.25) {
                        if (rr_median <= 20.5) {
                            if (diastolic_time <= 32.5) {
                                votes[10] = 3;
                            } else {
                                if (diastolic_time <= 62.0) {
                                    votes[10] = 0;
                                } else {
                                    votes[10] = 3;
                                }
                            }
                        } else {
                            if (rr_median <= 60.25) {
                                votes[10] = 3;
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[10] = 3;
                                } else {
                                    votes[10] = 0;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 571.5) {
                            if (rr_std <= 22.437969207763672) {
                                if (num_valleys <= 89.5) {
                                    if (rr_median <= 109.0) {
                                        if (num_peaks <= 81.5) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        votes[10] = 5;
                                    }
                                } else {
                                    votes[10] = 0;
                                }
                            } else {
                                if (rr_median <= 96.5) {
                                    votes[10] = 4;
                                } else {
                                    votes[10] = 3;
                                }
                            }
                        } else {
                            votes[10] = 0;
                        }
                    }
                } else {
                    if (diastolic_time <= 47.25) {
                        if (rr_std <= 11.82744550704956) {
                            if (rr_std <= 0.28327885270118713) {
                                votes[10] = 3;
                            } else {
                                votes[10] = 3;
                            }
                        } else {
                            votes[10] = 5;
                        }
                    } else {
                        if (rr_median <= 98.75) {
                            if (rr_std <= 18.916584968566895) {
                                if (diastolic_time <= 65.75) {
                                    if (num_peaks <= 90.5) {
                                        if (diastolic_time <= 60.5) {
                                            votes[10] = 0;
                                        } else {
                                            votes[10] = 0;
                                        }
                                    } else {
                                        votes[10] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 79.25) {
                                        if (rr_median <= 72.0) {
                                            votes[10] = 0;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 82.0) {
                                            votes[10] = 0;
                                        } else {
                                            votes[10] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 82.0) {
                                    votes[10] = 4;
                                } else {
                                    if (num_peaks <= 89.5) {
                                        votes[10] = 0;
                                    } else {
                                        votes[10] = 0;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 91.5) {
                                votes[10] = 1;
                            } else {
                                votes[10] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 81.5) {
            if (rr_std <= 0.4714045226573944) {
                votes[10] = 3;
            } else {
                if (num_valleys <= 92.5) {
                    if (rr_median <= 134.25) {
                        votes[10] = 1;
                    } else {
                        if (rr_std <= 59.98761558532715) {
                            votes[10] = 1;
                        } else {
                            votes[10] = 1;
                        }
                    }
                } else {
                    votes[10] = 1;
                }
            }
        } else {
            if (rr_std <= 34.38009452819824) {
                if (rr_median <= 171.5) {
                    votes[10] = 1;
                } else {
                    votes[10] = 1;
                }
            } else {
                if (rr_median <= 219.0) {
                    votes[10] = 0;
                } else {
                    votes[10] = 0;
                }
            }
        }
    }
// Decision rules for tree 11
    if (num_peaks <= 73.5) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.33040061593055725) {
                if (num_peaks <= 42.5) {
                    votes[11] = 4;
                } else {
                    if (num_valleys <= 77.5) {
                        votes[11] = 5;
                    } else {
                        votes[11] = 2;
                    }
                }
            } else {
                if (rr_std <= 0.730697900056839) {
                    if (diastolic_time <= 66.5) {
                        if (num_valleys <= 78.5) {
                            votes[11] = 2;
                        } else {
                            votes[11] = 3;
                        }
                    } else {
                        if (rr_median <= 69.5) {
                            votes[11] = 2;
                        } else {
                            votes[11] = 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 50.5) {
                        votes[11] = 3;
                    } else {
                        votes[11] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 102.5) {
                if (diastolic_time <= 84.25) {
                    if (diastolic_time <= 37.75) {
                        if (num_peaks <= 62.0) {
                            if (num_peaks <= 58.5) {
                                if (rr_median <= 16.0) {
                                    if (num_peaks <= 33.5) {
                                        votes[11] = 4;
                                    } else {
                                        votes[11] = 4;
                                    }
                                } else {
                                    votes[11] = 4;
                                }
                            } else {
                                votes[11] = 4;
                            }
                        } else {
                            votes[11] = 5;
                        }
                    } else {
                        if (rr_std <= 9.325254917144775) {
                            if (rr_std <= 2.2673990726470947) {
                                if (num_peaks <= 40.5) {
                                    if (num_peaks <= 25.5) {
                                        votes[11] = 4;
                                    } else {
                                        votes[11] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 55.25) {
                                        if (num_valleys <= 87.5) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 3;
                                        }
                                    } else {
                                        if (diastolic_time <= 63.0) {
                                            votes[11] = 2;
                                        } else {
                                            votes[11] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 71.5) {
                                    votes[11] = 3;
                                } else {
                                    votes[11] = 3;
                                }
                            }
                        } else {
                            if (rr_median <= 62.75) {
                                if (diastolic_time <= 48.0) {
                                    votes[11] = 1;
                                } else {
                                    votes[11] = 3;
                                }
                            } else {
                                if (diastolic_time <= 61.5) {
                                    if (rr_median <= 81.0) {
                                        votes[11] = 0;
                                    } else {
                                        votes[11] = 5;
                                    }
                                } else {
                                    if (rr_median <= 80.5) {
                                        if (num_peaks <= 62.0) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 4;
                                        }
                                    } else {
                                        votes[11] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 307.5) {
                        if (diastolic_time <= 112.75) {
                            if (rr_std <= 7.360098123550415) {
                                if (num_peaks <= 57.0) {
                                    votes[11] = 5;
                                } else {
                                    votes[11] = 5;
                                }
                            } else {
                                if (rr_std <= 18.856233596801758) {
                                    votes[11] = 4;
                                } else {
                                    votes[11] = 4;
                                }
                            }
                        } else {
                            votes[11] = 1;
                        }
                    } else {
                        votes[11] = 4;
                    }
                }
            } else {
                if (rr_median <= 131.0) {
                    if (rr_median <= 116.25) {
                        if (diastolic_time <= 70.0) {
                            votes[11] = 1;
                        } else {
                            votes[11] = 4;
                        }
                    } else {
                        if (rr_std <= 26.881442070007324) {
                            if (rr_std <= 5.2069666385650635) {
                                votes[11] = 2;
                            } else {
                                votes[11] = 2;
                            }
                        } else {
                            votes[11] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 60.63511276245117) {
                        if (num_peaks <= 50.5) {
                            votes[11] = 1;
                        } else {
                            if (rr_std <= 2.0801234245300293) {
                                votes[11] = 1;
                            } else {
                                if (num_valleys <= 91.5) {
                                    if (num_peaks <= 63.5) {
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
                        votes[11] = 3;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 87.5) {
            if (num_peaks <= 86.5) {
                if (rr_median <= 79.75) {
                    if (num_valleys <= 79.5) {
                        votes[11] = 3;
                    } else {
                        if (rr_std <= 0.2465033233165741) {
                            votes[11] = 3;
                        } else {
                            if (rr_std <= 1.3700557947158813) {
                                votes[11] = 3;
                            } else {
                                votes[11] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 99.5) {
                        if (num_peaks <= 77.5) {
                            votes[11] = 5;
                        } else {
                            if (rr_std <= 0.8953617513179779) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 3;
                            }
                        }
                    } else {
                        votes[11] = 1;
                    }
                }
            } else {
                if (rr_median <= 26.5) {
                    votes[11] = 2;
                } else {
                    if (rr_median <= 95.0) {
                        votes[11] = 1;
                    } else {
                        if (diastolic_time <= 49.25) {
                            votes[11] = 1;
                        } else {
                            votes[11] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 103.75) {
                if (rr_median <= 55.5) {
                    if (rr_median <= 20.5) {
                        if (diastolic_time <= 34.5) {
                            votes[11] = 5;
                        } else {
                            if (diastolic_time <= 41.25) {
                                votes[11] = 0;
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[11] = 3;
                                } else {
                                    if (num_valleys <= 92.5) {
                                        if (diastolic_time <= 74.25) {
                                            votes[11] = 0;
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
                        votes[11] = 3;
                    }
                } else {
                    if (rr_std <= 4.591779947280884) {
                        if (rr_std <= 1.378233015537262) {
                            votes[11] = 5;
                        } else {
                            votes[11] = 3;
                        }
                    } else {
                        if (rr_std <= 14.796399116516113) {
                            if (rr_std <= 8.81070613861084) {
                                votes[11] = 0;
                            } else {
                                if (num_peaks <= 81.0) {
                                    votes[11] = 0;
                                } else {
                                    if (rr_std <= 13.619210243225098) {
                                        votes[11] = 0;
                                    } else {
                                        votes[11] = 0;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 75.25) {
                                if (rr_std <= 20.24802017211914) {
                                    votes[11] = 5;
                                } else {
                                    if (diastolic_time <= 61.75) {
                                        votes[11] = 3;
                                    } else {
                                        votes[11] = 0;
                                    }
                                }
                            } else {
                                if (num_peaks <= 88.0) {
                                    votes[11] = 4;
                                } else {
                                    votes[11] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 39.77220916748047) {
                    if (rr_median <= 123.5) {
                        if (diastolic_time <= 88.25) {
                            votes[11] = 5;
                        } else {
                            votes[11] = 5;
                        }
                    } else {
                        if (rr_std <= 4.23868989944458) {
                            votes[11] = 2;
                        } else {
                            if (num_peaks <= 82.0) {
                                votes[11] = 1;
                            } else {
                                votes[11] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 83.5) {
                        votes[11] = 2;
                    } else {
                        if (rr_median <= 163.5) {
                            votes[11] = 0;
                        } else {
                            votes[11] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 12
    if (rr_median <= 126.5) {
        if (num_valleys <= 85.5) {
            if (rr_std <= 0.7481152415275574) {
                if (rr_median <= 61.5) {
                    if (diastolic_time <= 67.75) {
                        if (num_peaks <= 39.5) {
                            votes[12] = 4;
                        } else {
                            if (diastolic_time <= 36.0) {
                                votes[12] = 2;
                            } else {
                                if (num_peaks <= 58.5) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 3;
                                }
                            }
                        }
                    } else {
                        votes[12] = 5;
                    }
                } else {
                    if (rr_median <= 75.0) {
                        if (num_valleys <= 73.5) {
                            votes[12] = 2;
                        } else {
                            votes[12] = 2;
                        }
                    } else {
                        if (diastolic_time <= 76.75) {
                            votes[12] = 5;
                        } else {
                            votes[12] = 2;
                        }
                    }
                }
            } else {
                if (rr_median <= 69.0) {
                    votes[12] = 3;
                } else {
                    if (rr_median <= 86.5) {
                        if (diastolic_time <= 40.75) {
                            votes[12] = 5;
                        } else {
                            if (diastolic_time <= 58.75) {
                                votes[12] = 3;
                            } else {
                                votes[12] = 5;
                            }
                        }
                    } else {
                        votes[12] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 112.25) {
                    if (rr_std <= 18.82496166229248) {
                        if (diastolic_time <= 40.75) {
                            if (rr_median <= 47.0) {
                                if (diastolic_time <= 10.0) {
                                    votes[12] = 4;
                                } else {
                                    if (num_valleys <= 92.5) {
                                        if (num_peaks <= 50.5) {
                                            votes[12] = 4;
                                        } else {
                                            votes[12] = 4;
                                        }
                                    } else {
                                        votes[12] = 5;
                                    }
                                }
                            } else {
                                if (rr_median <= 82.25) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 113.5) {
                                if (diastolic_time <= 70.75) {
                                    if (rr_std <= 9.325254917144775) {
                                        if (num_peaks <= 43.5) {
                                            votes[12] = 4;
                                        } else {
                                            votes[12] = 2;
                                        }
                                    } else {
                                        if (rr_median <= 68.5) {
                                            votes[12] = 0;
                                        } else {
                                            votes[12] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.316328048706055) {
                                        if (diastolic_time <= 81.5) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    } else {
                                        votes[12] = 1;
                                    }
                                }
                            } else {
                                votes[12] = 2;
                            }
                        }
                    } else {
                        if (diastolic_time <= 74.25) {
                            if (num_peaks <= 67.5) {
                                if (num_peaks <= 51.5) {
                                    votes[12] = 4;
                                } else {
                                    votes[12] = 3;
                                }
                            } else {
                                votes[12] = 0;
                            }
                        } else {
                            if (num_peaks <= 71.5) {
                                if (rr_median <= 98.0) {
                                    if (num_peaks <= 66.5) {
                                        votes[12] = 4;
                                    } else {
                                        votes[12] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 89.25) {
                                        votes[12] = 4;
                                    } else {
                                        votes[12] = 4;
                                    }
                                }
                            } else {
                                votes[12] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 310.0) {
                        if (rr_median <= 113.75) {
                            votes[12] = 1;
                        } else {
                            votes[12] = 2;
                        }
                    } else {
                        votes[12] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 54.5) {
                    if (rr_median <= 70.0) {
                        if (rr_median <= 21.0) {
                            if (num_peaks <= 83.0) {
                                votes[12] = 0;
                            } else {
                                votes[12] = 3;
                            }
                        } else {
                            if (rr_median <= 58.25) {
                                if (num_peaks <= 78.5) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 3;
                                }
                            } else {
                                votes[12] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 88.5) {
                            if (num_valleys <= 88.5) {
                                votes[12] = 3;
                            } else {
                                votes[12] = 5;
                            }
                        } else {
                            votes[12] = 0;
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (num_valleys <= 88.5) {
                            if (rr_std <= 29.166990280151367) {
                                if (num_peaks <= 77.5) {
                                    votes[12] = 5;
                                } else {
                                    votes[12] = 2;
                                }
                            } else {
                                votes[12] = 5;
                            }
                        } else {
                            if (rr_median <= 71.5) {
                                if (rr_median <= 23.5) {
                                    votes[12] = 0;
                                } else {
                                    votes[12] = 3;
                                }
                            } else {
                                if (rr_median <= 81.0) {
                                    votes[12] = 4;
                                } else {
                                    if (num_valleys <= 91.5) {
                                        votes[12] = 0;
                                    } else {
                                        votes[12] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 98.75) {
                            if (rr_std <= 9.296514511108398) {
                                if (rr_median <= 80.5) {
                                    if (num_valleys <= 88.5) {
                                        if (diastolic_time <= 62.5) {
                                            votes[12] = 0;
                                        } else {
                                            votes[12] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 70.75) {
                                            votes[12] = 0;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    }
                                } else {
                                    votes[12] = 2;
                                }
                            } else {
                                if (rr_std <= 22.34951400756836) {
                                    votes[12] = 0;
                                } else {
                                    if (diastolic_time <= 76.5) {
                                        votes[12] = 3;
                                    } else {
                                        votes[12] = 0;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 98.25) {
                                if (rr_median <= 110.25) {
                                    votes[12] = 1;
                                } else {
                                    votes[12] = 0;
                                }
                            } else {
                                votes[12] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 84.5) {
            if (num_valleys <= 94.0) {
                if (rr_std <= 0.44031527638435364) {
                    votes[12] = 3;
                } else {
                    if (rr_std <= 51.943071365356445) {
                        if (rr_median <= 134.25) {
                            if (num_peaks <= 71.5) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 1;
                            }
                        } else {
                            votes[12] = 1;
                        }
                    } else {
                        votes[12] = 1;
                    }
                }
            } else {
                votes[12] = 5;
            }
        } else {
            if (rr_std <= 27.590988159179688) {
                votes[12] = 1;
            } else {
                if (num_valleys <= 90.5) {
                    votes[12] = 0;
                } else {
                    votes[12] = 0;
                }
            }
        }
    }
// Decision rules for tree 13
    if (rr_median <= 104.75) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.759528636932373) {
                if (diastolic_time <= 80.5) {
                    if (rr_median <= 66.0) {
                        if (num_valleys <= 80.5) {
                            votes[13] = 2;
                        } else {
                            votes[13] = 4;
                        }
                    } else {
                        if (num_peaks <= 74.5) {
                            if (diastolic_time <= 70.5) {
                                if (rr_std <= 0.48076923191547394) {
                                    votes[13] = 2;
                                } else {
                                    if (num_peaks <= 47.0) {
                                        votes[13] = 2;
                                    } else {
                                        votes[13] = 2;
                                    }
                                }
                            } else {
                                votes[13] = 2;
                            }
                        } else {
                            if (num_peaks <= 85.0) {
                                votes[13] = 3;
                            } else {
                                votes[13] = 3;
                            }
                        }
                    }
                } else {
                    votes[13] = 5;
                }
            } else {
                if (rr_median <= 69.0) {
                    if (diastolic_time <= 46.5) {
                        votes[13] = 3;
                    } else {
                        votes[13] = 1;
                    }
                } else {
                    if (rr_std <= 1.0821502804756165) {
                        votes[13] = 3;
                    } else {
                        votes[13] = 5;
                    }
                }
            }
        } else {
            if (num_peaks <= 76.5) {
                if (diastolic_time <= 76.5) {
                    if (diastolic_time <= 37.75) {
                        if (num_peaks <= 62.0) {
                            if (num_valleys <= 87.5) {
                                votes[13] = 1;
                            } else {
                                if (num_peaks <= 40.0) {
                                    votes[13] = 4;
                                } else {
                                    if (num_peaks <= 58.5) {
                                        votes[13] = 4;
                                    } else {
                                        votes[13] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 0.40276819467544556) {
                                votes[13] = 5;
                            } else {
                                votes[13] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 72.75) {
                            if (num_peaks <= 43.5) {
                                if (diastolic_time <= 52.5) {
                                    votes[13] = 4;
                                } else {
                                    votes[13] = 4;
                                }
                            } else {
                                if (num_peaks <= 50.5) {
                                    if (diastolic_time <= 55.25) {
                                        votes[13] = 3;
                                    } else {
                                        if (diastolic_time <= 61.75) {
                                            votes[13] = 2;
                                        } else {
                                            votes[13] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 0.2142392098903656) {
                                        if (num_peaks <= 53.5) {
                                            votes[13] = 0;
                                        } else {
                                            votes[13] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 9.158143043518066) {
                                            votes[13] = 3;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 83.75) {
                                if (diastolic_time <= 45.5) {
                                    votes[13] = 5;
                                } else {
                                    if (diastolic_time <= 68.5) {
                                        votes[13] = 0;
                                    } else {
                                        votes[13] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 68.0) {
                                    votes[13] = 1;
                                } else {
                                    votes[13] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 307.5) {
                        if (diastolic_time <= 102.25) {
                            if (rr_std <= 17.506596565246582) {
                                if (rr_std <= 5.594327926635742) {
                                    if (diastolic_time <= 89.5) {
                                        votes[13] = 5;
                                    } else {
                                        votes[13] = 5;
                                    }
                                } else {
                                    votes[13] = 1;
                                }
                            } else {
                                if (rr_median <= 84.5) {
                                    votes[13] = 4;
                                } else {
                                    if (diastolic_time <= 85.0) {
                                        votes[13] = 0;
                                    } else {
                                        if (num_peaks <= 66.0) {
                                            votes[13] = 4;
                                        } else {
                                            votes[13] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 56.5) {
                                votes[13] = 1;
                            } else {
                                votes[13] = 4;
                            }
                        }
                    } else {
                        votes[13] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 54.5) {
                    if (rr_std <= 1.916245698928833) {
                        if (num_peaks <= 82.5) {
                            votes[13] = 0;
                        } else {
                            if (num_peaks <= 88.5) {
                                votes[13] = 3;
                            } else {
                                votes[13] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 58.25) {
                            votes[13] = 3;
                        } else {
                            if (rr_std <= 13.913520812988281) {
                                if (rr_std <= 10.97285509109497) {
                                    votes[13] = 3;
                                } else {
                                    votes[13] = 0;
                                }
                            } else {
                                if (diastolic_time <= 43.5) {
                                    votes[13] = 3;
                                } else {
                                    votes[13] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (rr_std <= 20.146536827087402) {
                            if (num_peaks <= 79.5) {
                                votes[13] = 3;
                            } else {
                                if (diastolic_time <= 68.25) {
                                    votes[13] = 0;
                                } else {
                                    if (rr_std <= 1.1536391377449036) {
                                        votes[13] = 3;
                                    } else {
                                        votes[13] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[13] = 5;
                        }
                    } else {
                        if (rr_std <= 9.296514511108398) {
                            if (diastolic_time <= 72.75) {
                                if (num_peaks <= 90.5) {
                                    if (diastolic_time <= 61.0) {
                                        votes[13] = 0;
                                    } else {
                                        votes[13] = 0;
                                    }
                                } else {
                                    votes[13] = 0;
                                }
                            } else {
                                if (num_peaks <= 90.5) {
                                    if (num_peaks <= 88.0) {
                                        votes[13] = 0;
                                    } else {
                                        votes[13] = 5;
                                    }
                                } else {
                                    votes[13] = 2;
                                }
                            }
                        } else {
                            if (diastolic_time <= 62.5) {
                                votes[13] = 0;
                            } else {
                                if (num_peaks <= 87.5) {
                                    votes[13] = 0;
                                } else {
                                    if (diastolic_time <= 67.5) {
                                        votes[13] = 0;
                                    } else {
                                        votes[13] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 33.67300605773926) {
            if (rr_std <= 0.8965250849723816) {
                if (num_peaks <= 77.5) {
                    votes[13] = 5;
                } else {
                    votes[13] = 0;
                }
            } else {
                if (rr_median <= 131.25) {
                    if (num_valleys <= 91.5) {
                        if (rr_median <= 124.25) {
                            if (rr_median <= 109.5) {
                                votes[13] = 5;
                            } else {
                                if (diastolic_time <= 80.25) {
                                    votes[13] = 1;
                                } else {
                                    votes[13] = 1;
                                }
                            }
                        } else {
                            votes[13] = 2;
                        }
                    } else {
                        if (rr_median <= 118.0) {
                            votes[13] = 5;
                        } else {
                            votes[13] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 30.487016677856445) {
                        if (num_valleys <= 93.5) {
                            if (rr_std <= 2.3331629037857056) {
                                votes[13] = 1;
                            } else {
                                votes[13] = 1;
                            }
                        } else {
                            votes[13] = 1;
                        }
                    } else {
                        votes[13] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 82.5) {
                if (diastolic_time <= 47.5) {
                    if (num_peaks <= 56.0) {
                        votes[13] = 1;
                    } else {
                        votes[13] = 1;
                    }
                } else {
                    if (rr_std <= 67.53244018554688) {
                        if (num_valleys <= 90.5) {
                            votes[13] = 1;
                        } else {
                            votes[13] = 4;
                        }
                    } else {
                        votes[13] = 3;
                    }
                }
            } else {
                if (rr_median <= 119.75) {
                    votes[13] = 0;
                } else {
                    votes[13] = 0;
                }
            }
        }
    }
// Decision rules for tree 14
    if (rr_median <= 131.0) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.6868122220039368) {
                if (rr_median <= 66.0) {
                    if (num_valleys <= 78.5) {
                        votes[14] = 5;
                    } else {
                        if (num_peaks <= 40.0) {
                            votes[14] = 4;
                        } else {
                            if (num_valleys <= 82.5) {
                                votes[14] = 3;
                            } else {
                                votes[14] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 75.0) {
                        if (rr_median <= 73.5) {
                            if (rr_std <= 0.4740213602781296) {
                                if (rr_std <= 0.43653950095176697) {
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
                    } else {
                        if (rr_std <= 0.545117124915123) {
                            votes[14] = 3;
                        } else {
                            votes[14] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 25.356662273406982) {
                    if (num_peaks <= 63.5) {
                        votes[14] = 1;
                    } else {
                        if (num_valleys <= 83.5) {
                            if (rr_median <= 85.0) {
                                votes[14] = 5;
                            } else {
                                votes[14] = 5;
                            }
                        } else {
                            votes[14] = 1;
                        }
                    }
                } else {
                    votes[14] = 3;
                }
            }
        } else {
            if (num_peaks <= 75.5) {
                if (diastolic_time <= 107.5) {
                    if (rr_std <= 19.40558624267578) {
                        if (diastolic_time <= 42.25) {
                            if (rr_median <= 47.0) {
                                if (diastolic_time <= 10.0) {
                                    votes[14] = 4;
                                } else {
                                    if (diastolic_time <= 36.0) {
                                        votes[14] = 5;
                                    } else {
                                        if (num_valleys <= 89.5) {
                                            votes[14] = 4;
                                        } else {
                                            votes[14] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (num_valleys <= 88.5) {
                                    votes[14] = 1;
                                } else {
                                    votes[14] = 3;
                                }
                            }
                        } else {
                            if (diastolic_time <= 82.5) {
                                if (rr_std <= 9.325254917144775) {
                                    if (rr_std <= 2.605733036994934) {
                                        if (num_peaks <= 40.0) {
                                            votes[14] = 4;
                                        } else {
                                            votes[14] = 2;
                                        }
                                    } else {
                                        if (rr_median <= 65.75) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.602124214172363) {
                                        if (rr_median <= 69.75) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 0;
                                        }
                                    } else {
                                        votes[14] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 3.5854196548461914) {
                                    if (diastolic_time <= 89.5) {
                                        votes[14] = 5;
                                    } else {
                                        votes[14] = 5;
                                    }
                                } else {
                                    if (rr_median <= 111.5) {
                                        votes[14] = 1;
                                    } else {
                                        votes[14] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 69.75) {
                            if (rr_std <= 33.389713287353516) {
                                if (rr_median <= 73.5) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 5;
                                }
                            } else {
                                if (rr_std <= 51.487016677856445) {
                                    votes[14] = 1;
                                } else {
                                    votes[14] = 3;
                                }
                            }
                        } else {
                            if (rr_median <= 122.75) {
                                if (diastolic_time <= 97.0) {
                                    if (rr_std <= 29.90772247314453) {
                                        if (rr_std <= 25.63108539581299) {
                                            votes[14] = 4;
                                        } else {
                                            votes[14] = 4;
                                        }
                                    } else {
                                        votes[14] = 4;
                                    }
                                } else {
                                    votes[14] = 4;
                                }
                            } else {
                                votes[14] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 307.5) {
                        if (rr_median <= 118.25) {
                            votes[14] = 1;
                        } else {
                            votes[14] = 2;
                        }
                    } else {
                        votes[14] = 4;
                    }
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 78.75) {
                        if (rr_std <= 0.8443530201911926) {
                            if (diastolic_time <= 36.0) {
                                votes[14] = 3;
                            } else {
                                if (diastolic_time <= 61.75) {
                                    votes[14] = 0;
                                } else {
                                    votes[14] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 71.5) {
                                if (diastolic_time <= 51.25) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 3;
                                }
                            } else {
                                votes[14] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 2.7457435131073) {
                            if (rr_median <= 94.5) {
                                votes[14] = 5;
                            } else {
                                votes[14] = 5;
                            }
                        } else {
                            if (rr_std <= 13.912412643432617) {
                                votes[14] = 0;
                            } else {
                                if (num_peaks <= 77.5) {
                                    votes[14] = 5;
                                } else {
                                    votes[14] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 54.75) {
                        if (num_peaks <= 93.5) {
                            if (rr_std <= 13.692677974700928) {
                                if (diastolic_time <= 39.25) {
                                    votes[14] = 3;
                                } else {
                                    if (rr_std <= 5.940078854560852) {
                                        votes[14] = 0;
                                    } else {
                                        votes[14] = 0;
                                    }
                                }
                            } else {
                                if (rr_median <= 68.75) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 5;
                                }
                            }
                        } else {
                            votes[14] = 2;
                        }
                    } else {
                        if (rr_std <= 9.296514511108398) {
                            if (rr_median <= 58.5) {
                                if (num_peaks <= 89.0) {
                                    votes[14] = 0;
                                } else {
                                    votes[14] = 0;
                                }
                            } else {
                                if (num_peaks <= 88.5) {
                                    votes[14] = 2;
                                } else {
                                    votes[14] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 21.334095001220703) {
                                if (num_peaks <= 87.5) {
                                    votes[14] = 0;
                                } else {
                                    votes[14] = 0;
                                }
                            } else {
                                if (diastolic_time <= 82.25) {
                                    votes[14] = 0;
                                } else {
                                    votes[14] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 84.5) {
            if (rr_std <= 72.50964736938477) {
                if (num_valleys <= 93.5) {
                    if (rr_std <= 0.4714045226573944) {
                        votes[14] = 3;
                    } else {
                        if (num_peaks <= 48.5) {
                            votes[14] = 1;
                        } else {
                            if (rr_std <= 51.943071365356445) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 1;
                            }
                        }
                    }
                } else {
                    votes[14] = 4;
                }
            } else {
                votes[14] = 3;
            }
        } else {
            if (rr_std <= 34.38009452819824) {
                votes[14] = 1;
            } else {
                if (rr_std <= 63.79116439819336) {
                    votes[14] = 0;
                } else {
                    votes[14] = 0;
                }
            }
        }
    }
// Decision rules for tree 15
    if (rr_median <= 104.75) {
        if (num_valleys <= 85.5) {
            if (diastolic_time <= 75.75) {
                if (diastolic_time <= 66.5) {
                    if (num_valleys <= 77.5) {
                        if (num_peaks <= 53.0) {
                            votes[15] = 2;
                        } else {
                            votes[15] = 5;
                        }
                    } else {
                        if (num_valleys <= 84.5) {
                            if (diastolic_time <= 40.75) {
                                votes[15] = 1;
                            } else {
                                if (diastolic_time <= 47.25) {
                                    votes[15] = 3;
                                } else {
                                    if (rr_median <= 67.5) {
                                        if (rr_median <= 20.5) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    } else {
                                        votes[15] = 1;
                                    }
                                }
                            }
                        } else {
                            votes[15] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 64.0) {
                        if (rr_median <= 69.5) {
                            votes[15] = 2;
                        } else {
                            if (rr_std <= 0.6385509967803955) {
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
                if (num_peaks <= 69.0) {
                    votes[15] = 5;
                } else {
                    votes[15] = 5;
                }
            }
        } else {
            if (num_peaks <= 77.5) {
                if (diastolic_time <= 76.5) {
                    if (diastolic_time <= 30.5) {
                        if (num_peaks <= 40.0) {
                            votes[15] = 4;
                        } else {
                            votes[15] = 4;
                        }
                    } else {
                        if (rr_median <= 74.75) {
                            if (rr_median <= 43.5) {
                                if (num_peaks <= 41.5) {
                                    if (diastolic_time <= 54.75) {
                                        if (diastolic_time <= 39.25) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    } else {
                                        votes[15] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 52.5) {
                                        if (num_peaks <= 63.5) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 63.0) {
                                            votes[15] = 2;
                                        } else {
                                            votes[15] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 65.75) {
                                    if (diastolic_time <= 55.5) {
                                        if (num_valleys <= 87.5) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 65.5) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 0;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 61.0) {
                                        if (diastolic_time <= 64.75) {
                                            votes[15] = 0;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 8.752789497375488) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 20.93989849090576) {
                                if (diastolic_time <= 40.0) {
                                    votes[15] = 1;
                                } else {
                                    if (diastolic_time <= 51.0) {
                                        votes[15] = 5;
                                    } else {
                                        votes[15] = 5;
                                    }
                                }
                            } else {
                                if (rr_median <= 86.0) {
                                    votes[15] = 0;
                                } else {
                                    votes[15] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 242.0) {
                        if (rr_std <= 14.645336151123047) {
                            if (diastolic_time <= 111.75) {
                                if (diastolic_time <= 89.5) {
                                    if (num_peaks <= 60.5) {
                                        votes[15] = 0;
                                    } else {
                                        votes[15] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 99.0) {
                                        votes[15] = 5;
                                    } else {
                                        votes[15] = 5;
                                    }
                                }
                            } else {
                                votes[15] = 1;
                            }
                        } else {
                            if (diastolic_time <= 121.25) {
                                if (rr_median <= 98.25) {
                                    if (num_peaks <= 66.5) {
                                        if (rr_median <= 95.0) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 4;
                                        }
                                    } else {
                                        votes[15] = 4;
                                    }
                                } else {
                                    votes[15] = 4;
                                }
                            } else {
                                votes[15] = 1;
                            }
                        }
                    } else {
                        votes[15] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 55.5) {
                    if (num_peaks <= 91.5) {
                        if (rr_std <= 13.692677974700928) {
                            if (diastolic_time <= 47.25) {
                                if (rr_median <= 21.25) {
                                    votes[15] = 3;
                                } else {
                                    if (rr_std <= 8.530665397644043) {
                                        votes[15] = 3;
                                    } else {
                                        votes[15] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 10.201401233673096) {
                                    votes[15] = 0;
                                } else {
                                    votes[15] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 47.5) {
                                votes[15] = 3;
                            } else {
                                votes[15] = 3;
                            }
                        }
                    } else {
                        votes[15] = 0;
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (rr_std <= 20.146536827087402) {
                            if (rr_median <= 59.25) {
                                votes[15] = 0;
                            } else {
                                if (rr_std <= 9.639904499053955) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 0;
                                }
                            }
                        } else {
                            votes[15] = 4;
                        }
                    } else {
                        if (rr_std <= 9.296514511108398) {
                            if (diastolic_time <= 73.75) {
                                if (num_peaks <= 90.5) {
                                    if (diastolic_time <= 61.75) {
                                        votes[15] = 0;
                                    } else {
                                        votes[15] = 0;
                                    }
                                } else {
                                    votes[15] = 0;
                                }
                            } else {
                                if (diastolic_time <= 76.75) {
                                    votes[15] = 5;
                                } else {
                                    if (rr_std <= 1.14000603556633) {
                                        votes[15] = 2;
                                    } else {
                                        votes[15] = 3;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 87.5) {
                                votes[15] = 0;
                            } else {
                                if (diastolic_time <= 67.25) {
                                    if (rr_median <= 64.25) {
                                        votes[15] = 0;
                                    } else {
                                        votes[15] = 0;
                                    }
                                } else {
                                    votes[15] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_median <= 131.0) {
            if (diastolic_time <= 111.0) {
                if (rr_std <= 41.63323783874512) {
                    if (num_peaks <= 69.5) {
                        if (num_peaks <= 53.0) {
                            if (rr_median <= 117.75) {
                                if (rr_std <= 9.928537368774414) {
                                    votes[15] = 1;
                                } else {
                                    votes[15] = 1;
                                }
                            } else {
                                votes[15] = 2;
                            }
                        } else {
                            votes[15] = 1;
                        }
                    } else {
                        if (num_peaks <= 82.5) {
                            if (num_valleys <= 89.5) {
                                votes[15] = 5;
                            } else {
                                votes[15] = 5;
                            }
                        } else {
                            if (rr_std <= 12.778531074523926) {
                                votes[15] = 1;
                            } else {
                                votes[15] = 0;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 53.0) {
                        votes[15] = 4;
                    } else {
                        votes[15] = 0;
                    }
                }
            } else {
                if (num_valleys <= 88.5) {
                    votes[15] = 1;
                } else {
                    if (rr_std <= 5.5274739265441895) {
                        votes[15] = 2;
                    } else {
                        votes[15] = 2;
                    }
                }
            }
        } else {
            if (num_peaks <= 82.0) {
                if (rr_std <= 0.4714045226573944) {
                    votes[15] = 3;
                } else {
                    if (diastolic_time <= 57.25) {
                        votes[15] = 1;
                    } else {
                        if (rr_std <= 31.151161193847656) {
                            if (rr_median <= 139.75) {
                                votes[15] = 1;
                            } else {
                                votes[15] = 1;
                            }
                        } else {
                            votes[15] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 27.590988159179688) {
                    votes[15] = 1;
                } else {
                    votes[15] = 0;
                }
            }
        }
    }
// Decision rules for tree 16
    if (rr_median <= 128.75) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.7481152415275574) {
                if (rr_median <= 66.0) {
                    if (diastolic_time <= 68.25) {
                        if (diastolic_time <= 50.5) {
                            votes[16] = 4;
                        } else {
                            votes[16] = 3;
                        }
                    } else {
                        votes[16] = 5;
                    }
                } else {
                    if (rr_median <= 75.0) {
                        if (num_peaks <= 57.5) {
                            votes[16] = 2;
                        } else {
                            if (num_peaks <= 61.0) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 85.0) {
                            votes[16] = 3;
                        } else {
                            votes[16] = 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 71.5) {
                    votes[16] = 3;
                } else {
                    if (rr_median <= 82.5) {
                        if (diastolic_time <= 44.25) {
                            votes[16] = 5;
                        } else {
                            votes[16] = 3;
                        }
                    } else {
                        votes[16] = 3;
                    }
                }
            }
        } else {
            if (num_peaks <= 73.5) {
                if (rr_median <= 117.75) {
                    if (diastolic_time <= 261.5) {
                        if (diastolic_time <= 110.5) {
                            if (rr_std <= 34.26357841491699) {
                                if (diastolic_time <= 38.75) {
                                    if (rr_median <= 44.0) {
                                        if (num_peaks <= 58.5) {
                                            votes[16] = 4;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 75.75) {
                                            votes[16] = 3;
                                        } else {
                                            votes[16] = 1;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 70.5) {
                                        if (rr_std <= 9.255439758300781) {
                                            votes[16] = 2;
                                        } else {
                                            votes[16] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 15.381282806396484) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 62.25) {
                                    votes[16] = 4;
                                } else {
                                    votes[16] = 4;
                                }
                            }
                        } else {
                            votes[16] = 1;
                        }
                    } else {
                        votes[16] = 4;
                    }
                } else {
                    if (rr_std <= 26.881442070007324) {
                        if (num_valleys <= 91.5) {
                            votes[16] = 2;
                        } else {
                            votes[16] = 2;
                        }
                    } else {
                        votes[16] = 4;
                    }
                }
            } else {
                if (rr_median <= 77.0) {
                    if (diastolic_time <= 54.75) {
                        if (rr_median <= 20.5) {
                            if (num_peaks <= 88.5) {
                                if (diastolic_time <= 35.5) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 0;
                                }
                            } else {
                                votes[16] = 2;
                            }
                        } else {
                            if (rr_median <= 55.25) {
                                if (num_peaks <= 78.5) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 3;
                                }
                            } else {
                                if (diastolic_time <= 41.25) {
                                    votes[16] = 3;
                                } else {
                                    if (rr_std <= 10.289306640625) {
                                        votes[16] = 3;
                                    } else {
                                        if (rr_std <= 17.97895336151123) {
                                            votes[16] = 0;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 85.5) {
                            if (rr_median <= 21.75) {
                                votes[16] = 0;
                            } else {
                                if (rr_median <= 72.5) {
                                    if (rr_median <= 61.5) {
                                        votes[16] = 3;
                                    } else {
                                        votes[16] = 3;
                                    }
                                } else {
                                    votes[16] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 63.5) {
                                if (diastolic_time <= 57.25) {
                                    votes[16] = 0;
                                } else {
                                    votes[16] = 0;
                                }
                            } else {
                                if (rr_std <= 9.965155601501465) {
                                    if (diastolic_time <= 69.25) {
                                        votes[16] = 3;
                                    } else {
                                        votes[16] = 0;
                                    }
                                } else {
                                    votes[16] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 86.5) {
                        if (diastolic_time <= 110.75) {
                            if (num_peaks <= 83.5) {
                                if (rr_std <= 23.088223457336426) {
                                    if (diastolic_time <= 76.5) {
                                        if (diastolic_time <= 52.0) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    } else {
                                        votes[16] = 5;
                                    }
                                } else {
                                    if (num_valleys <= 88.5) {
                                        votes[16] = 5;
                                    } else {
                                        votes[16] = 4;
                                    }
                                }
                            } else {
                                if (num_valleys <= 87.5) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 9.261812448501587) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 12.093914985656738) {
                            if (diastolic_time <= 71.0) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 1;
                            }
                        } else {
                            if (diastolic_time <= 67.5) {
                                votes[16] = 0;
                            } else {
                                if (rr_median <= 108.5) {
                                    if (rr_std <= 16.344844341278076) {
                                        votes[16] = 0;
                                    } else {
                                        votes[16] = 0;
                                    }
                                } else {
                                    votes[16] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 82.5) {
            if (rr_std <= 0.44031527638435364) {
                votes[16] = 5;
            } else {
                if (num_valleys <= 94.5) {
                    if (rr_median <= 134.5) {
                        votes[16] = 1;
                    } else {
                        if (rr_std <= 39.87405586242676) {
                            votes[16] = 1;
                        } else {
                            if (num_peaks <= 68.0) {
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
        } else {
            if (rr_std <= 18.991657495498657) {
                votes[16] = 1;
            } else {
                votes[16] = 0;
            }
        }
    }
// Decision rules for tree 17
    if (num_peaks <= 73.5) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 66.0) {
                if (diastolic_time <= 67.75) {
                    if (rr_median <= 44.75) {
                        votes[17] = 3;
                    } else {
                        votes[17] = 3;
                    }
                } else {
                    votes[17] = 5;
                }
            } else {
                if (rr_std <= 0.7192845046520233) {
                    if (rr_median <= 73.5) {
                        if (num_peaks <= 53.5) {
                            votes[17] = 2;
                        } else {
                            if (rr_std <= 0.5532135367393494) {
                                votes[17] = 2;
                            } else {
                                votes[17] = 2;
                            }
                        }
                    } else {
                        votes[17] = 2;
                    }
                } else {
                    if (rr_median <= 85.5) {
                        votes[17] = 5;
                    } else {
                        votes[17] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 134.5) {
                if (diastolic_time <= 102.5) {
                    if (rr_std <= 16.822558403015137) {
                        if (diastolic_time <= 38.5) {
                            if (rr_median <= 54.25) {
                                if (num_peaks <= 59.5) {
                                    if (num_peaks <= 35.0) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 4;
                                    }
                                } else {
                                    votes[17] = 5;
                                }
                            } else {
                                votes[17] = 3;
                            }
                        } else {
                            if (diastolic_time <= 86.5) {
                                if (num_peaks <= 42.5) {
                                    if (diastolic_time <= 52.5) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 52.5) {
                                        if (diastolic_time <= 63.0) {
                                            votes[17] = 2;
                                        } else {
                                            votes[17] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 45.5) {
                                            votes[17] = 5;
                                        } else {
                                            votes[17] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 3.116547703742981) {
                                    if (num_peaks <= 43.5) {
                                        votes[17] = 5;
                                    } else {
                                        votes[17] = 5;
                                    }
                                } else {
                                    votes[17] = 2;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 74.25) {
                            if (num_peaks <= 66.5) {
                                if (diastolic_time <= 57.0) {
                                    if (num_peaks <= 51.0) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 1;
                                    }
                                } else {
                                    votes[17] = 5;
                                }
                            } else {
                                votes[17] = 0;
                            }
                        } else {
                            if (rr_std <= 29.813352584838867) {
                                if (rr_median <= 88.5) {
                                    if (rr_std <= 21.64167308807373) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 4;
                                    }
                                } else {
                                    votes[17] = 5;
                                }
                            } else {
                                votes[17] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 327.5) {
                        if (rr_median <= 118.25) {
                            if (diastolic_time <= 114.75) {
                                votes[17] = 1;
                            } else {
                                votes[17] = 1;
                            }
                        } else {
                            if (num_valleys <= 88.5) {
                                votes[17] = 1;
                            } else {
                                votes[17] = 2;
                            }
                        }
                    } else {
                        votes[17] = 4;
                    }
                }
            } else {
                if (num_valleys <= 89.5) {
                    votes[17] = 1;
                } else {
                    if (diastolic_time <= 70.75) {
                        votes[17] = 1;
                    } else {
                        votes[17] = 1;
                    }
                }
            }
        }
    } else {
        if (rr_median <= 98.75) {
            if (diastolic_time <= 52.75) {
                if (rr_std <= 0.5460115224123001) {
                    if (diastolic_time <= 36.5) {
                        if (num_peaks <= 84.0) {
                            votes[17] = 3;
                        } else {
                            votes[17] = 2;
                        }
                    } else {
                        if (num_valleys <= 89.5) {
                            votes[17] = 0;
                        } else {
                            votes[17] = 0;
                        }
                    }
                } else {
                    if (rr_median <= 64.75) {
                        if (rr_std <= 15.319309711456299) {
                            if (rr_median <= 58.5) {
                                votes[17] = 3;
                            } else {
                                votes[17] = 3;
                            }
                        } else {
                            if (num_peaks <= 79.5) {
                                votes[17] = 3;
                            } else {
                                votes[17] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 2.844158411026001) {
                            votes[17] = 3;
                        } else {
                            if (rr_median <= 77.75) {
                                votes[17] = 0;
                            } else {
                                votes[17] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 85.5) {
                        if (rr_std <= 9.907640933990479) {
                            if (rr_std <= 0.8443530201911926) {
                                if (rr_std <= 0.4393455386161804) {
                                    if (diastolic_time <= 78.0) {
                                        votes[17] = 3;
                                    } else {
                                        votes[17] = 5;
                                    }
                                } else {
                                    votes[17] = 2;
                                }
                            } else {
                                if (diastolic_time <= 70.75) {
                                    votes[17] = 3;
                                } else {
                                    votes[17] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 22.391427993774414) {
                                votes[17] = 0;
                            } else {
                                votes[17] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 7.431708455085754) {
                            votes[17] = 5;
                        } else {
                            votes[17] = 5;
                        }
                    }
                } else {
                    if (num_valleys <= 86.5) {
                        votes[17] = 1;
                    } else {
                        if (rr_std <= 9.51451826095581) {
                            if (rr_median <= 67.5) {
                                if (diastolic_time <= 76.75) {
                                    if (num_valleys <= 88.5) {
                                        votes[17] = 0;
                                    } else {
                                        if (num_valleys <= 90.5) {
                                            votes[17] = 0;
                                        } else {
                                            votes[17] = 0;
                                        }
                                    }
                                } else {
                                    votes[17] = 0;
                                }
                            } else {
                                votes[17] = 5;
                            }
                        } else {
                            if (rr_std <= 13.767618656158447) {
                                votes[17] = 0;
                            } else {
                                if (diastolic_time <= 66.25) {
                                    votes[17] = 3;
                                } else {
                                    if (num_peaks <= 88.5) {
                                        votes[17] = 0;
                                    } else {
                                        if (diastolic_time <= 79.0) {
                                            votes[17] = 0;
                                        } else {
                                            votes[17] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 82.0) {
                if (rr_median <= 122.0) {
                    if (rr_std <= 21.54412078857422) {
                        votes[17] = 5;
                    } else {
                        votes[17] = 5;
                    }
                } else {
                    if (rr_std <= 4.505038142204285) {
                        votes[17] = 2;
                    } else {
                        if (rr_median <= 165.25) {
                            votes[17] = 1;
                        } else {
                            votes[17] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 26.96402931213379) {
                    if (rr_median <= 105.0) {
                        if (diastolic_time <= 64.75) {
                            votes[17] = 3;
                        } else {
                            votes[17] = 0;
                        }
                    } else {
                        if (rr_std <= 1.0291042029857635) {
                            votes[17] = 1;
                        } else {
                            if (num_peaks <= 86.5) {
                                votes[17] = 1;
                            } else {
                                votes[17] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 84.5) {
                        if (diastolic_time <= 70.75) {
                            votes[17] = 0;
                        } else {
                            votes[17] = 1;
                        }
                    } else {
                        votes[17] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 18
    if (rr_median <= 105.75) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 66.0) {
                if (rr_median <= 40.0) {
                    if (num_valleys <= 82.5) {
                        if (diastolic_time <= 57.5) {
                            votes[18] = 2;
                        } else {
                            votes[18] = 5;
                        }
                    } else {
                        votes[18] = 4;
                    }
                } else {
                    if (diastolic_time <= 55.25) {
                        votes[18] = 3;
                    } else {
                        votes[18] = 1;
                    }
                }
            } else {
                if (rr_median <= 75.0) {
                    if (num_peaks <= 71.5) {
                        if (num_peaks <= 53.5) {
                            votes[18] = 2;
                        } else {
                            if (rr_std <= 0.5532135367393494) {
                                votes[18] = 2;
                            } else {
                                if (diastolic_time <= 62.5) {
                                    votes[18] = 2;
                                } else {
                                    votes[18] = 2;
                                }
                            }
                        }
                    } else {
                        votes[18] = 2;
                    }
                } else {
                    if (diastolic_time <= 47.25) {
                        votes[18] = 3;
                    } else {
                        if (diastolic_time <= 75.75) {
                            votes[18] = 2;
                        } else {
                            votes[18] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 73.5) {
                if (diastolic_time <= 105.5) {
                    if (rr_std <= 19.001737594604492) {
                        if (diastolic_time <= 37.75) {
                            if (num_peaks <= 60.5) {
                                if (diastolic_time <= 10.0) {
                                    votes[18] = 4;
                                } else {
                                    if (num_valleys <= 91.5) {
                                        votes[18] = 4;
                                    } else {
                                        votes[18] = 4;
                                    }
                                }
                            } else {
                                votes[18] = 5;
                            }
                        } else {
                            if (num_peaks <= 41.5) {
                                if (diastolic_time <= 74.0) {
                                    if (num_valleys <= 88.5) {
                                        votes[18] = 5;
                                    } else {
                                        votes[18] = 4;
                                    }
                                } else {
                                    votes[18] = 5;
                                }
                            } else {
                                if (num_valleys <= 90.5) {
                                    if (rr_median <= 70.75) {
                                        if (num_valleys <= 87.5) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 5.339977025985718) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 0;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 49.5) {
                                        if (diastolic_time <= 61.75) {
                                            votes[18] = 2;
                                        } else {
                                            votes[18] = 2;
                                        }
                                    } else {
                                        if (num_peaks <= 60.5) {
                                            votes[18] = 0;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 69.0) {
                            if (rr_std <= 39.75063705444336) {
                                votes[18] = 0;
                            } else {
                                votes[18] = 3;
                            }
                        } else {
                            if (rr_median <= 76.5) {
                                votes[18] = 4;
                            } else {
                                if (rr_std <= 29.90772247314453) {
                                    if (diastolic_time <= 85.0) {
                                        votes[18] = 0;
                                    } else {
                                        votes[18] = 4;
                                    }
                                } else {
                                    votes[18] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 241.5) {
                        if (num_peaks <= 53.5) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 1;
                        }
                    } else {
                        votes[18] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 54.5) {
                    if (rr_median <= 21.25) {
                        if (diastolic_time <= 34.5) {
                            votes[18] = 3;
                        } else {
                            if (diastolic_time <= 44.25) {
                                votes[18] = 0;
                            } else {
                                votes[18] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 68.75) {
                            if (diastolic_time <= 47.5) {
                                votes[18] = 3;
                            } else {
                                if (num_valleys <= 90.5) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 3;
                                }
                            }
                        } else {
                            if (num_valleys <= 90.0) {
                                if (rr_median <= 80.5) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 3;
                                }
                            } else {
                                votes[18] = 5;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 87.5) {
                        if (rr_median <= 21.75) {
                            if (diastolic_time <= 88.25) {
                                if (diastolic_time <= 65.0) {
                                    votes[18] = 0;
                                } else {
                                    votes[18] = 0;
                                }
                            } else {
                                votes[18] = 0;
                            }
                        } else {
                            if (rr_std <= 15.389970302581787) {
                                if (rr_median <= 63.25) {
                                    votes[18] = 3;
                                } else {
                                    if (rr_std <= 8.902738094329834) {
                                        if (diastolic_time <= 88.25) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    } else {
                                        votes[18] = 0;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 74.75) {
                                    votes[18] = 0;
                                } else {
                                    if (rr_median <= 88.0) {
                                        votes[18] = 4;
                                    } else {
                                        votes[18] = 0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 90.5) {
                            if (rr_std <= 3.466006875038147) {
                                if (num_peaks <= 90.5) {
                                    votes[18] = 0;
                                } else {
                                    votes[18] = 5;
                                }
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[18] = 0;
                                } else {
                                    if (diastolic_time <= 76.75) {
                                        votes[18] = 0;
                                    } else {
                                        votes[18] = 0;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 70.0) {
                                votes[18] = 3;
                            } else {
                                votes[18] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 73.64412689208984) {
            if (rr_median <= 129.5) {
                if (rr_median <= 117.5) {
                    if (rr_median <= 106.75) {
                        votes[18] = 1;
                    } else {
                        if (num_peaks <= 70.0) {
                            if (num_peaks <= 49.5) {
                                votes[18] = 1;
                            } else {
                                votes[18] = 1;
                            }
                        } else {
                            if (num_peaks <= 86.5) {
                                votes[18] = 5;
                            } else {
                                votes[18] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 36.36775779724121) {
                        if (num_peaks <= 54.0) {
                            votes[18] = 2;
                        } else {
                            if (diastolic_time <= 111.75) {
                                votes[18] = 1;
                            } else {
                                votes[18] = 2;
                            }
                        }
                    } else {
                        votes[18] = 4;
                    }
                }
            } else {
                if (num_valleys <= 94.5) {
                    if (num_peaks <= 85.0) {
                        if (rr_std <= 1.083776980638504) {
                            votes[18] = 1;
                        } else {
                            if (num_valleys <= 92.5) {
                                if (rr_median <= 134.0) {
                                    votes[18] = 1;
                                } else {
                                    if (num_peaks <= 78.5) {
                                        votes[18] = 1;
                                    } else {
                                        votes[18] = 1;
                                    }
                                }
                            } else {
                                votes[18] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 191.0) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 0;
                        }
                    }
                } else {
                    votes[18] = 4;
                }
            }
        } else {
            if (num_peaks <= 80.0) {
                votes[18] = 3;
            } else {
                votes[18] = 0;
            }
        }
    }
// Decision rules for tree 19
    if (num_peaks <= 74.5) {
        if (rr_median <= 134.25) {
            if (num_valleys <= 84.5) {
                if (rr_median <= 64.0) {
                    if (num_peaks <= 37.5) {
                        votes[19] = 4;
                    } else {
                        if (rr_median <= 25.25) {
                            if (num_valleys <= 78.5) {
                                votes[19] = 5;
                            } else {
                                votes[19] = 1;
                            }
                        } else {
                            votes[19] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 0.7299954891204834) {
                        if (rr_median <= 71.5) {
                            if (rr_std <= 0.545406848192215) {
                                if (num_peaks <= 52.5) {
                                    votes[19] = 2;
                                } else {
                                    votes[19] = 3;
                                }
                            } else {
                                votes[19] = 2;
                            }
                        } else {
                            votes[19] = 2;
                        }
                    } else {
                        if (num_valleys <= 81.5) {
                            votes[19] = 3;
                        } else {
                            votes[19] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 327.0) {
                    if (diastolic_time <= 102.5) {
                        if (rr_std <= 15.31638240814209) {
                            if (diastolic_time <= 37.75) {
                                if (rr_median <= 45.0) {
                                    if (num_peaks <= 58.5) {
                                        votes[19] = 4;
                                    } else {
                                        votes[19] = 4;
                                    }
                                } else {
                                    votes[19] = 1;
                                }
                            } else {
                                if (diastolic_time <= 74.5) {
                                    if (diastolic_time <= 55.25) {
                                        if (rr_std <= 9.325254917144775) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 56.0) {
                                            votes[19] = 2;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 96.0) {
                                        if (num_peaks <= 47.5) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 5;
                                        }
                                    } else {
                                        votes[19] = 2;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 65.5) {
                                if (num_peaks <= 50.0) {
                                    votes[19] = 4;
                                } else {
                                    if (num_peaks <= 67.5) {
                                        if (num_peaks <= 60.0) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        votes[19] = 0;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 75.0) {
                                    votes[19] = 4;
                                } else {
                                    if (num_peaks <= 67.5) {
                                        votes[19] = 4;
                                    } else {
                                        if (rr_median <= 84.5) {
                                            votes[19] = 4;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 118.25) {
                            if (num_peaks <= 58.0) {
                                votes[19] = 1;
                            } else {
                                votes[19] = 5;
                            }
                        } else {
                            if (num_peaks <= 54.0) {
                                votes[19] = 2;
                            } else {
                                votes[19] = 2;
                            }
                        }
                    }
                } else {
                    votes[19] = 4;
                }
            }
        } else {
            if (rr_std <= 48.011474609375) {
                if (num_valleys <= 93.5) {
                    votes[19] = 1;
                } else {
                    votes[19] = 1;
                }
            } else {
                votes[19] = 1;
            }
        }
    } else {
        if (rr_std <= 9.368961334228516) {
            if (rr_median <= 63.5) {
                if (num_peaks <= 85.5) {
                    if (num_valleys <= 89.5) {
                        if (num_valleys <= 87.5) {
                            votes[19] = 3;
                        } else {
                            votes[19] = 3;
                        }
                    } else {
                        if (num_valleys <= 92.5) {
                            if (diastolic_time <= 59.5) {
                                votes[19] = 0;
                            } else {
                                votes[19] = 0;
                            }
                        } else {
                            votes[19] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 88.5) {
                        votes[19] = 0;
                    } else {
                        if (num_valleys <= 90.5) {
                            if (diastolic_time <= 60.5) {
                                votes[19] = 2;
                            } else {
                                votes[19] = 2;
                            }
                        } else {
                            votes[19] = 0;
                        }
                    }
                }
            } else {
                if (rr_median <= 94.25) {
                    if (diastolic_time <= 50.0) {
                        if (rr_std <= 1.0098017156124115) {
                            votes[19] = 5;
                        } else {
                            votes[19] = 3;
                        }
                    } else {
                        if (num_valleys <= 85.0) {
                            votes[19] = 2;
                        } else {
                            if (diastolic_time <= 77.5) {
                                if (num_peaks <= 87.5) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 5;
                                }
                            } else {
                                votes[19] = 5;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 84.0) {
                        if (diastolic_time <= 106.0) {
                            votes[19] = 5;
                        } else {
                            votes[19] = 2;
                        }
                    } else {
                        if (rr_median <= 113.5) {
                            if (diastolic_time <= 58.0) {
                                votes[19] = 1;
                            } else {
                                votes[19] = 2;
                            }
                        } else {
                            votes[19] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 58.25) {
                if (diastolic_time <= 54.75) {
                    votes[19] = 3;
                } else {
                    votes[19] = 1;
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_std <= 13.912412643432617) {
                        if (rr_std <= 11.730502128601074) {
                            votes[19] = 0;
                        } else {
                            votes[19] = 0;
                        }
                    } else {
                        if (rr_median <= 85.25) {
                            votes[19] = 4;
                        } else {
                            if (rr_median <= 122.0) {
                                if (rr_median <= 99.5) {
                                    votes[19] = 0;
                                } else {
                                    votes[19] = 5;
                                }
                            } else {
                                votes[19] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 53.25) {
                        if (rr_std <= 17.614093780517578) {
                            votes[19] = 0;
                        } else {
                            votes[19] = 3;
                        }
                    } else {
                        if (num_peaks <= 87.5) {
                            if (num_valleys <= 91.5) {
                                votes[19] = 0;
                            } else {
                                votes[19] = 0;
                            }
                        } else {
                            if (rr_std <= 51.90131187438965) {
                                votes[19] = 0;
                            } else {
                                votes[19] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 20
    if (rr_median <= 105.75) {
        if (num_valleys <= 84.5) {
            if (diastolic_time <= 73.5) {
                if (rr_median <= 66.0) {
                    if (rr_median <= 40.0) {
                        if (num_valleys <= 80.0) {
                            votes[20] = 3;
                        } else {
                            votes[20] = 2;
                        }
                    } else {
                        votes[20] = 3;
                    }
                } else {
                    if (rr_std <= 0.7588262259960175) {
                        if (rr_median <= 76.75) {
                            if (num_valleys <= 73.0) {
                                votes[20] = 2;
                            } else {
                                if (num_peaks <= 71.5) {
                                    if (num_peaks <= 59.5) {
                                        votes[20] = 2;
                                    } else {
                                        votes[20] = 2;
                                    }
                                } else {
                                    votes[20] = 2;
                                }
                            }
                        } else {
                            votes[20] = 3;
                        }
                    } else {
                        if (diastolic_time <= 44.0) {
                            votes[20] = 5;
                        } else {
                            votes[20] = 3;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.8010854125022888) {
                    if (num_valleys <= 82.5) {
                        votes[20] = 5;
                    } else {
                        votes[20] = 5;
                    }
                } else {
                    votes[20] = 5;
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 76.5) {
                    if (diastolic_time <= 37.75) {
                        if (num_peaks <= 63.0) {
                            if (num_peaks <= 40.0) {
                                if (num_peaks <= 33.5) {
                                    votes[20] = 4;
                                } else {
                                    votes[20] = 4;
                                }
                            } else {
                                if (num_peaks <= 58.5) {
                                    if (rr_median <= 33.5) {
                                        votes[20] = 4;
                                    } else {
                                        votes[20] = 4;
                                    }
                                } else {
                                    votes[20] = 4;
                                }
                            }
                        } else {
                            votes[20] = 3;
                        }
                    } else {
                        if (num_peaks <= 46.5) {
                            if (num_peaks <= 41.0) {
                                if (num_peaks <= 24.5) {
                                    votes[20] = 4;
                                } else {
                                    if (num_peaks <= 32.0) {
                                        votes[20] = 5;
                                    } else {
                                        votes[20] = 4;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 56.0) {
                                    votes[20] = 3;
                                } else {
                                    if (num_valleys <= 89.0) {
                                        votes[20] = 2;
                                    } else {
                                        votes[20] = 2;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 90.5) {
                                if (rr_std <= 10.733602046966553) {
                                    if (rr_median <= 77.75) {
                                        if (rr_std <= 1.0796633958816528) {
                                            votes[20] = 3;
                                        } else {
                                            votes[20] = 3;
                                        }
                                    } else {
                                        votes[20] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 61.0) {
                                        if (rr_median <= 59.0) {
                                            votes[20] = 1;
                                        } else {
                                            votes[20] = 0;
                                        }
                                    } else {
                                        votes[20] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 56.5) {
                                    if (rr_std <= 11.687509059906006) {
                                        votes[20] = 0;
                                    } else {
                                        votes[20] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 59.75) {
                                        if (rr_std <= 3.633371591567993) {
                                            votes[20] = 2;
                                        } else {
                                            votes[20] = 3;
                                        }
                                    } else {
                                        votes[20] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 307.5) {
                        if (diastolic_time <= 110.5) {
                            if (rr_std <= 10.002328395843506) {
                                votes[20] = 5;
                            } else {
                                if (rr_median <= 88.5) {
                                    if (num_valleys <= 88.5) {
                                        votes[20] = 4;
                                    } else {
                                        votes[20] = 4;
                                    }
                                } else {
                                    if (rr_std <= 31.737625122070312) {
                                        votes[20] = 1;
                                    } else {
                                        if (diastolic_time <= 92.75) {
                                            votes[20] = 4;
                                        } else {
                                            votes[20] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[20] = 1;
                        }
                    } else {
                        votes[20] = 4;
                    }
                }
            } else {
                if (rr_median <= 63.25) {
                    if (rr_std <= 0.6798692941665649) {
                        if (diastolic_time <= 32.5) {
                            votes[20] = 3;
                        } else {
                            if (num_peaks <= 88.5) {
                                if (num_valleys <= 89.5) {
                                    votes[20] = 3;
                                } else {
                                    if (num_peaks <= 84.5) {
                                        votes[20] = 0;
                                    } else {
                                        votes[20] = 0;
                                    }
                                }
                            } else {
                                votes[20] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 57.25) {
                            if (num_valleys <= 91.5) {
                                if (diastolic_time <= 41.0) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 3;
                                }
                            } else {
                                votes[20] = 3;
                            }
                        } else {
                            if (num_peaks <= 81.5) {
                                votes[20] = 3;
                            } else {
                                votes[20] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.052817344665527) {
                        if (num_peaks <= 83.5) {
                            if (rr_median <= 86.5) {
                                votes[20] = 5;
                            } else {
                                votes[20] = 5;
                            }
                        } else {
                            if (rr_median <= 82.5) {
                                votes[20] = 5;
                            } else {
                                if (rr_std <= 2.039719521999359) {
                                    votes[20] = 1;
                                } else {
                                    votes[20] = 3;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 24.255165100097656) {
                            if (diastolic_time <= 53.5) {
                                if (rr_std <= 14.772947311401367) {
                                    votes[20] = 0;
                                } else {
                                    votes[20] = 5;
                                }
                            } else {
                                if (rr_std <= 13.767618656158447) {
                                    votes[20] = 0;
                                } else {
                                    if (num_peaks <= 87.5) {
                                        votes[20] = 0;
                                    } else {
                                        if (num_peaks <= 89.5) {
                                            votes[20] = 0;
                                        } else {
                                            votes[20] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 73.75) {
                                votes[20] = 3;
                            } else {
                                votes[20] = 4;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_median <= 131.0) {
            if (diastolic_time <= 112.25) {
                if (rr_std <= 28.200754165649414) {
                    if (diastolic_time <= 87.75) {
                        if (rr_median <= 114.75) {
                            if (rr_std <= 7.780525207519531) {
                                votes[20] = 1;
                            } else {
                                votes[20] = 1;
                            }
                        } else {
                            votes[20] = 5;
                        }
                    } else {
                        if (num_peaks <= 54.0) {
                            votes[20] = 2;
                        } else {
                            votes[20] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 76.0) {
                        if (rr_median <= 119.25) {
                            votes[20] = 4;
                        } else {
                            votes[20] = 4;
                        }
                    } else {
                        if (diastolic_time <= 86.5) {
                            votes[20] = 1;
                        } else {
                            votes[20] = 0;
                        }
                    }
                }
            } else {
                if (rr_std <= 11.678688049316406) {
                    if (rr_std <= 3.117841362953186) {
                        votes[20] = 1;
                    } else {
                        votes[20] = 2;
                    }
                } else {
                    votes[20] = 1;
                }
            }
        } else {
            if (rr_std <= 43.88325119018555) {
                if (rr_median <= 364.5) {
                    if (num_valleys <= 93.5) {
                        if (rr_std <= 1.0049982368946075) {
                            votes[20] = 1;
                        } else {
                            if (rr_std <= 26.480467796325684) {
                                votes[20] = 1;
                            } else {
                                if (diastolic_time <= 56.25) {
                                    votes[20] = 1;
                                } else {
                                    votes[20] = 1;
                                }
                            }
                        }
                    } else {
                        votes[20] = 1;
                    }
                } else {
                    votes[20] = 5;
                }
            } else {
                if (num_peaks <= 82.5) {
                    votes[20] = 1;
                } else {
                    if (rr_median <= 219.0) {
                        votes[20] = 0;
                    } else {
                        votes[20] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 21
    if (rr_median <= 129.5) {
        if (num_peaks <= 62.5) {
            if (num_valleys <= 85.5) {
                if (rr_median <= 64.0) {
                    if (num_peaks <= 57.5) {
                        if (num_peaks <= 32.5) {
                            votes[21] = 4;
                        } else {
                            if (diastolic_time <= 64.0) {
                                if (num_peaks <= 47.0) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 5;
                                }
                            } else {
                                votes[21] = 5;
                            }
                        }
                    } else {
                        votes[21] = 1;
                    }
                } else {
                    if (rr_median <= 80.5) {
                        if (rr_median <= 71.5) {
                            if (rr_median <= 68.0) {
                                votes[21] = 2;
                            } else {
                                votes[21] = 2;
                            }
                        } else {
                            votes[21] = 2;
                        }
                    } else {
                        votes[21] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 38.75) {
                    if (rr_median <= 51.75) {
                        if (num_peaks <= 39.5) {
                            votes[21] = 4;
                        } else {
                            if (num_peaks <= 59.5) {
                                votes[21] = 4;
                            } else {
                                votes[21] = 4;
                            }
                        }
                    } else {
                        votes[21] = 1;
                    }
                } else {
                    if (diastolic_time <= 327.0) {
                        if (diastolic_time <= 107.0) {
                            if (rr_std <= 32.803585052490234) {
                                if (num_peaks <= 49.5) {
                                    if (num_peaks <= 40.5) {
                                        if (diastolic_time <= 52.5) {
                                            votes[21] = 4;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 10.521210193634033) {
                                            votes[21] = 2;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 76.5) {
                                        if (num_valleys <= 90.5) {
                                            votes[21] = 0;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 15.973273754119873) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 54.5) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 115.5) {
                                votes[21] = 1;
                            } else {
                                votes[21] = 2;
                            }
                        }
                    } else {
                        votes[21] = 4;
                    }
                }
            }
        } else {
            if (rr_median <= 72.75) {
                if (rr_std <= 0.478250116109848) {
                    if (num_peaks <= 91.0) {
                        if (rr_median <= 20.5) {
                            if (num_peaks <= 71.0) {
                                if (num_valleys <= 87.5) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 4;
                                }
                            } else {
                                if (diastolic_time <= 89.75) {
                                    if (diastolic_time <= 51.5) {
                                        if (num_valleys <= 89.5) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 82.5) {
                                            votes[21] = 0;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    }
                                } else {
                                    votes[21] = 3;
                                }
                            }
                        } else {
                            votes[21] = 2;
                        }
                    } else {
                        votes[21] = 2;
                    }
                } else {
                    if (diastolic_time <= 77.5) {
                        if (num_peaks <= 85.5) {
                            if (rr_std <= 15.172186851501465) {
                                if (rr_std <= 0.6338732838630676) {
                                    votes[21] = 3;
                                } else {
                                    if (rr_median <= 63.5) {
                                        votes[21] = 3;
                                    } else {
                                        if (num_peaks <= 78.5) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 24.237499237060547) {
                                    votes[21] = 0;
                                } else {
                                    if (diastolic_time <= 51.75) {
                                        votes[21] = 3;
                                    } else {
                                        votes[21] = 3;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 54.75) {
                                if (num_peaks <= 88.5) {
                                    votes[21] = 0;
                                } else {
                                    votes[21] = 3;
                                }
                            } else {
                                if (rr_median <= 66.5) {
                                    if (num_valleys <= 90.5) {
                                        votes[21] = 0;
                                    } else {
                                        votes[21] = 0;
                                    }
                                } else {
                                    votes[21] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 17.35184335708618) {
                            votes[21] = 1;
                        } else {
                            votes[21] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 5.006102800369263) {
                    if (num_peaks <= 82.5) {
                        if (rr_median <= 101.0) {
                            if (diastolic_time <= 57.5) {
                                if (rr_std <= 1.0098017156124115) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 3;
                                }
                            } else {
                                if (rr_std <= 0.785387247800827) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 5;
                                }
                            }
                        } else {
                            votes[21] = 5;
                        }
                    } else {
                        if (rr_median <= 86.75) {
                            votes[21] = 5;
                        } else {
                            if (diastolic_time <= 76.25) {
                                votes[21] = 1;
                            } else {
                                votes[21] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 87.5) {
                        if (num_peaks <= 75.5) {
                            if (diastolic_time <= 76.25) {
                                votes[21] = 0;
                            } else {
                                if (rr_median <= 92.0) {
                                    if (diastolic_time <= 84.0) {
                                        votes[21] = 4;
                                    } else {
                                        votes[21] = 4;
                                    }
                                } else {
                                    votes[21] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 118.25) {
                                if (rr_std <= 42.72847557067871) {
                                    if (rr_std <= 10.160075187683105) {
                                        votes[21] = 0;
                                    } else {
                                        if (num_peaks <= 81.5) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    }
                                } else {
                                    votes[21] = 3;
                                }
                            } else {
                                votes[21] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 74.0) {
                            votes[21] = 1;
                        } else {
                            if (rr_median <= 108.5) {
                                votes[21] = 0;
                            } else {
                                votes[21] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 0.4714045226573944) {
            votes[21] = 3;
        } else {
            if (rr_std <= 61.158145904541016) {
                if (num_peaks <= 87.5) {
                    if (num_valleys <= 93.5) {
                        if (num_peaks <= 49.5) {
                            votes[21] = 1;
                        } else {
                            votes[21] = 1;
                        }
                    } else {
                        votes[21] = 1;
                    }
                } else {
                    votes[21] = 0;
                }
            } else {
                if (num_peaks <= 82.5) {
                    votes[21] = 1;
                } else {
                    votes[21] = 0;
                }
            }
        }
    }
// Decision rules for tree 22
    if (rr_median <= 128.75) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 66.0) {
                if (diastolic_time <= 68.25) {
                    if (diastolic_time <= 36.0) {
                        votes[22] = 2;
                    } else {
                        if (num_valleys <= 78.5) {
                            votes[22] = 3;
                        } else {
                            votes[22] = 3;
                        }
                    }
                } else {
                    votes[22] = 5;
                }
            } else {
                if (num_peaks <= 75.0) {
                    if (rr_std <= 0.7192845046520233) {
                        if (num_peaks <= 57.5) {
                            if (rr_median <= 68.5) {
                                votes[22] = 2;
                            } else {
                                votes[22] = 2;
                            }
                        } else {
                            if (rr_median <= 70.5) {
                                if (num_peaks <= 61.0) {
                                    votes[22] = 2;
                                } else {
                                    votes[22] = 2;
                                }
                            } else {
                                votes[22] = 2;
                            }
                        }
                    } else {
                        votes[22] = 5;
                    }
                } else {
                    if (diastolic_time <= 40.5) {
                        votes[22] = 5;
                    } else {
                        if (diastolic_time <= 48.0) {
                            votes[22] = 3;
                        } else {
                            if (diastolic_time <= 70.25) {
                                votes[22] = 2;
                            } else {
                                if (diastolic_time <= 76.75) {
                                    votes[22] = 5;
                                } else {
                                    votes[22] = 2;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 75.5) {
                if (diastolic_time <= 108.75) {
                    if (rr_std <= 17.511099815368652) {
                        if (diastolic_time <= 10.0) {
                            votes[22] = 4;
                        } else {
                            if (diastolic_time <= 59.75) {
                                if (rr_std <= 1.3263574242591858) {
                                    if (num_peaks <= 58.5) {
                                        if (num_peaks <= 41.0) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 4;
                                        }
                                    } else {
                                        if (rr_median <= 35.5) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 9.68478012084961) {
                                        if (rr_median <= 71.5) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    } else {
                                        if (diastolic_time <= 42.0) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 66.5) {
                                    if (num_peaks <= 49.5) {
                                        votes[22] = 2;
                                    } else {
                                        if (rr_median <= 66.0) {
                                            votes[22] = 2;
                                        } else {
                                            votes[22] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 113.0) {
                                        if (diastolic_time <= 75.25) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        votes[22] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 79.25) {
                            if (num_peaks <= 51.5) {
                                votes[22] = 4;
                            } else {
                                if (num_peaks <= 66.5) {
                                    if (diastolic_time <= 48.5) {
                                        votes[22] = 3;
                                    } else {
                                        votes[22] = 1;
                                    }
                                } else {
                                    if (rr_median <= 77.0) {
                                        if (num_peaks <= 73.5) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 0;
                                        }
                                    } else {
                                        votes[22] = 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 88.5) {
                                if (rr_std <= 21.64167308807373) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 4;
                                }
                            } else {
                                if (rr_std <= 31.96318244934082) {
                                    votes[22] = 0;
                                } else {
                                    if (rr_median <= 104.25) {
                                        votes[22] = 4;
                                    } else {
                                        votes[22] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 261.5) {
                        if (rr_median <= 118.25) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 2;
                        }
                    } else {
                        votes[22] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 28.5) {
                    votes[22] = 3;
                } else {
                    if (rr_median <= 98.25) {
                        if (rr_std <= 8.81070613861084) {
                            if (rr_median <= 20.5) {
                                if (num_valleys <= 89.5) {
                                    if (num_valleys <= 88.5) {
                                        if (diastolic_time <= 56.75) {
                                            votes[22] = 0;
                                        } else {
                                            votes[22] = 0;
                                        }
                                    } else {
                                        votes[22] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 87.5) {
                                        if (diastolic_time <= 50.25) {
                                            votes[22] = 0;
                                        } else {
                                            votes[22] = 0;
                                        }
                                    } else {
                                        votes[22] = 0;
                                    }
                                }
                            } else {
                                if (rr_median <= 61.5) {
                                    votes[22] = 3;
                                } else {
                                    if (diastolic_time <= 89.25) {
                                        if (rr_std <= 5.453323841094971) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        votes[22] = 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 58.25) {
                                if (diastolic_time <= 56.75) {
                                    votes[22] = 3;
                                } else {
                                    votes[22] = 0;
                                }
                            } else {
                                if (rr_std <= 14.465312480926514) {
                                    if (rr_median <= 81.25) {
                                        votes[22] = 0;
                                    } else {
                                        votes[22] = 0;
                                    }
                                } else {
                                    if (rr_median <= 81.25) {
                                        if (diastolic_time <= 68.25) {
                                            votes[22] = 0;
                                        } else {
                                            votes[22] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 68.5) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 86.5) {
                            if (diastolic_time <= 109.0) {
                                if (rr_std <= 22.55464458465576) {
                                    votes[22] = 5;
                                } else {
                                    votes[22] = 5;
                                }
                            } else {
                                votes[22] = 2;
                            }
                        } else {
                            if (diastolic_time <= 81.75) {
                                votes[22] = 1;
                            } else {
                                if (num_peaks <= 90.5) {
                                    votes[22] = 0;
                                } else {
                                    votes[22] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 82.5) {
            if (rr_median <= 309.0) {
                if (rr_median <= 134.25) {
                    if (rr_std <= 29.142809867858887) {
                        votes[22] = 5;
                    } else {
                        votes[22] = 1;
                    }
                } else {
                    if (num_valleys <= 94.5) {
                        if (rr_std <= 51.47666549682617) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 1;
                        }
                    } else {
                        votes[22] = 1;
                    }
                }
            } else {
                votes[22] = 3;
            }
        } else {
            if (rr_std <= 27.590988159179688) {
                votes[22] = 1;
            } else {
                if (rr_std <= 55.934486389160156) {
                    votes[22] = 0;
                } else {
                    votes[22] = 0;
                }
            }
        }
    }
// Decision rules for tree 23
    if (num_peaks <= 75.5) {
        if (num_valleys <= 85.5) {
            if (rr_median <= 61.5) {
                if (diastolic_time <= 68.25) {
                    if (num_peaks <= 40.0) {
                        votes[23] = 1;
                    } else {
                        if (rr_median <= 19.5) {
                            if (diastolic_time <= 48.5) {
                                votes[23] = 5;
                            } else {
                                votes[23] = 5;
                            }
                        } else {
                            votes[23] = 3;
                        }
                    }
                } else {
                    votes[23] = 5;
                }
            } else {
                if (rr_std <= 0.730697900056839) {
                    if (num_valleys <= 75.0) {
                        if (num_valleys <= 70.5) {
                            votes[23] = 2;
                        } else {
                            votes[23] = 2;
                        }
                    } else {
                        if (rr_std <= 0.3910631388425827) {
                            votes[23] = 2;
                        } else {
                            if (num_peaks <= 58.0) {
                                votes[23] = 2;
                            } else {
                                if (rr_std <= 0.545406848192215) {
                                    votes[23] = 2;
                                } else {
                                    votes[23] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 1.012647271156311) {
                        votes[23] = 1;
                    } else {
                        votes[23] = 5;
                    }
                }
            }
        } else {
            if (rr_median <= 123.25) {
                if (diastolic_time <= 77.0) {
                    if (num_peaks <= 51.5) {
                        if (diastolic_time <= 52.75) {
                            if (rr_median <= 72.5) {
                                if (diastolic_time <= 37.5) {
                                    if (num_peaks <= 40.0) {
                                        votes[23] = 4;
                                    } else {
                                        votes[23] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 42.0) {
                                        votes[23] = 4;
                                    } else {
                                        votes[23] = 3;
                                    }
                                }
                            } else {
                                votes[23] = 1;
                            }
                        } else {
                            if (rr_median <= 57.5) {
                                if (num_peaks <= 43.5) {
                                    votes[23] = 4;
                                } else {
                                    if (diastolic_time <= 63.5) {
                                        if (num_valleys <= 90.5) {
                                            votes[23] = 2;
                                        } else {
                                            votes[23] = 2;
                                        }
                                    } else {
                                        votes[23] = 0;
                                    }
                                }
                            } else {
                                votes[23] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 78.75) {
                            if (rr_std <= 0.9554452896118164) {
                                if (diastolic_time <= 37.75) {
                                    votes[23] = 4;
                                } else {
                                    if (diastolic_time <= 57.75) {
                                        if (num_valleys <= 89.0) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        if (diastolic_time <= 67.0) {
                                            votes[23] = 2;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 8.710328578948975) {
                                    votes[23] = 3;
                                } else {
                                    if (rr_median <= 65.75) {
                                        if (diastolic_time <= 53.5) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 16.979692459106445) {
                                            votes[23] = 0;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 40.25) {
                                votes[23] = 1;
                            } else {
                                votes[23] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 118.75) {
                        if (diastolic_time <= 105.25) {
                            if (rr_std <= 13.388028144836426) {
                                if (diastolic_time <= 90.5) {
                                    votes[23] = 5;
                                } else {
                                    votes[23] = 5;
                                }
                            } else {
                                if (rr_median <= 104.25) {
                                    if (rr_std <= 17.506596565246582) {
                                        votes[23] = 4;
                                    } else {
                                        if (diastolic_time <= 84.0) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    }
                                } else {
                                    votes[23] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 261.5) {
                                votes[23] = 1;
                            } else {
                                votes[23] = 4;
                            }
                        }
                    } else {
                        votes[23] = 2;
                    }
                }
            } else {
                if (rr_std <= 65.24743270874023) {
                    if (num_valleys <= 93.5) {
                        if (num_peaks <= 52.5) {
                            if (rr_median <= 131.0) {
                                votes[23] = 2;
                            } else {
                                votes[23] = 1;
                            }
                        } else {
                            if (rr_median <= 233.75) {
                                votes[23] = 1;
                            } else {
                                votes[23] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 34.75411415100098) {
                            votes[23] = 1;
                        } else {
                            votes[23] = 4;
                        }
                    }
                } else {
                    votes[23] = 3;
                }
            }
        }
    } else {
        if (rr_median <= 98.75) {
            if (num_valleys <= 86.5) {
                if (diastolic_time <= 75.75) {
                    if (diastolic_time <= 40.0) {
                        votes[23] = 5;
                    } else {
                        if (num_peaks <= 81.5) {
                            votes[23] = 3;
                        } else {
                            if (diastolic_time <= 58.0) {
                                if (rr_std <= 1.1639325320720673) {
                                    votes[23] = 3;
                                } else {
                                    votes[23] = 3;
                                }
                            } else {
                                votes[23] = 5;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 82.5) {
                        votes[23] = 5;
                    } else {
                        votes[23] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 49.5) {
                    if (num_valleys <= 92.5) {
                        if (rr_median <= 77.75) {
                            if (rr_median <= 20.5) {
                                if (num_valleys <= 89.5) {
                                    votes[23] = 3;
                                } else {
                                    votes[23] = 0;
                                }
                            } else {
                                if (rr_std <= 17.208816051483154) {
                                    votes[23] = 3;
                                } else {
                                    votes[23] = 3;
                                }
                            }
                        } else {
                            votes[23] = 5;
                        }
                    } else {
                        votes[23] = 0;
                    }
                } else {
                    if (num_peaks <= 85.5) {
                        if (rr_median <= 23.5) {
                            if (num_peaks <= 81.5) {
                                votes[23] = 0;
                            } else {
                                votes[23] = 0;
                            }
                        } else {
                            if (rr_std <= 7.053381443023682) {
                                if (diastolic_time <= 79.75) {
                                    votes[23] = 3;
                                } else {
                                    votes[23] = 5;
                                }
                            } else {
                                if (rr_median <= 66.5) {
                                    if (rr_std <= 14.893295288085938) {
                                        votes[23] = 3;
                                    } else {
                                        votes[23] = 0;
                                    }
                                } else {
                                    if (rr_std <= 15.623805046081543) {
                                        votes[23] = 0;
                                    } else {
                                        votes[23] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 89.5) {
                            if (num_peaks <= 87.5) {
                                votes[23] = 0;
                            } else {
                                if (rr_median <= 68.0) {
                                    votes[23] = 0;
                                } else {
                                    votes[23] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 71.0) {
                                if (rr_std <= 13.060245513916016) {
                                    votes[23] = 0;
                                } else {
                                    votes[23] = 3;
                                }
                            } else {
                                if (rr_median <= 82.75) {
                                    votes[23] = 5;
                                } else {
                                    votes[23] = 0;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 83.5) {
                if (rr_median <= 122.0) {
                    votes[23] = 5;
                } else {
                    if (rr_std <= 15.760393023490906) {
                        votes[23] = 5;
                    } else {
                        votes[23] = 1;
                    }
                }
            } else {
                if (rr_std <= 12.093914985656738) {
                    if (diastolic_time <= 37.0) {
                        votes[23] = 3;
                    } else {
                        if (diastolic_time <= 83.75) {
                            votes[23] = 1;
                        } else {
                            votes[23] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 84.0) {
                        if (rr_std <= 50.84475517272949) {
                            if (num_valleys <= 89.5) {
                                votes[23] = 0;
                            } else {
                                votes[23] = 0;
                            }
                        } else {
                            votes[23] = 1;
                        }
                    } else {
                        if (diastolic_time <= 95.5) {
                            votes[23] = 0;
                        } else {
                            votes[23] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 24
    if (rr_median <= 105.75) {
        if (num_valleys <= 85.5) {
            if (rr_std <= 0.6868122220039368) {
                if (rr_median <= 66.0) {
                    if (num_peaks <= 58.5) {
                        if (num_valleys <= 81.5) {
                            votes[24] = 5;
                        } else {
                            if (diastolic_time <= 64.75) {
                                votes[24] = 4;
                            } else {
                                votes[24] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 54.25) {
                            votes[24] = 2;
                        } else {
                            votes[24] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 79.5) {
                        if (num_peaks <= 53.5) {
                            if (num_peaks <= 43.5) {
                                votes[24] = 2;
                            } else {
                                votes[24] = 2;
                            }
                        } else {
                            if (rr_std <= 0.46647149324417114) {
                                votes[24] = 3;
                            } else {
                                if (rr_median <= 70.5) {
                                    votes[24] = 2;
                                } else {
                                    votes[24] = 2;
                                }
                            }
                        }
                    } else {
                        votes[24] = 3;
                    }
                }
            } else {
                if (rr_median <= 68.0) {
                    if (rr_median <= 54.0) {
                        votes[24] = 3;
                    } else {
                        votes[24] = 3;
                    }
                } else {
                    if (rr_median <= 76.5) {
                        votes[24] = 5;
                    } else {
                        if (rr_std <= 0.8972135782241821) {
                            votes[24] = 1;
                        } else {
                            votes[24] = 3;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 110.5) {
                    if (rr_std <= 21.05630874633789) {
                        if (diastolic_time <= 74.5) {
                            if (rr_std <= 2.5999308824539185) {
                                if (diastolic_time <= 58.5) {
                                    if (rr_median <= 84.5) {
                                        if (diastolic_time <= 37.75) {
                                            votes[24] = 4;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    } else {
                                        votes[24] = 1;
                                    }
                                } else {
                                    if (diastolic_time <= 63.0) {
                                        votes[24] = 2;
                                    } else {
                                        if (num_peaks <= 56.5) {
                                            votes[24] = 0;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 8.573378562927246) {
                                    if (rr_std <= 7.079198598861694) {
                                        votes[24] = 3;
                                    } else {
                                        votes[24] = 3;
                                    }
                                } else {
                                    if (rr_median <= 57.5) {
                                        votes[24] = 3;
                                    } else {
                                        if (num_valleys <= 88.5) {
                                            votes[24] = 1;
                                        } else {
                                            votes[24] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 13.518269538879395) {
                                if (diastolic_time <= 82.5) {
                                    votes[24] = 5;
                                } else {
                                    if (num_peaks <= 39.0) {
                                        votes[24] = 5;
                                    } else {
                                        votes[24] = 5;
                                    }
                                }
                            } else {
                                votes[24] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 69.0) {
                            if (num_peaks <= 49.5) {
                                votes[24] = 4;
                            } else {
                                if (num_peaks <= 67.5) {
                                    votes[24] = 3;
                                } else {
                                    votes[24] = 0;
                                }
                            }
                        } else {
                            if (rr_median <= 98.0) {
                                if (num_valleys <= 90.5) {
                                    votes[24] = 4;
                                } else {
                                    votes[24] = 4;
                                }
                            } else {
                                votes[24] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 307.5) {
                        votes[24] = 1;
                    } else {
                        votes[24] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 55.5) {
                    if (rr_std <= 0.28327885270118713) {
                        if (diastolic_time <= 37.5) {
                            votes[24] = 2;
                        } else {
                            if (diastolic_time <= 45.75) {
                                votes[24] = 0;
                            } else {
                                votes[24] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 61.25) {
                            if (num_peaks <= 77.0) {
                                votes[24] = 3;
                            } else {
                                votes[24] = 3;
                            }
                        } else {
                            if (num_peaks <= 84.5) {
                                votes[24] = 3;
                            } else {
                                if (num_valleys <= 90.5) {
                                    votes[24] = 3;
                                } else {
                                    votes[24] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.81070613861084) {
                        if (rr_median <= 56.5) {
                            if (diastolic_time <= 89.0) {
                                if (num_valleys <= 87.5) {
                                    votes[24] = 0;
                                } else {
                                    if (diastolic_time <= 65.0) {
                                        votes[24] = 0;
                                    } else {
                                        votes[24] = 0;
                                    }
                                }
                            } else {
                                votes[24] = 5;
                            }
                        } else {
                            if (rr_median <= 92.25) {
                                if (num_peaks <= 86.5) {
                                    if (num_valleys <= 87.5) {
                                        votes[24] = 5;
                                    } else {
                                        votes[24] = 3;
                                    }
                                } else {
                                    votes[24] = 5;
                                }
                            } else {
                                votes[24] = 2;
                            }
                        }
                    } else {
                        if (num_peaks <= 85.5) {
                            if (rr_median <= 61.5) {
                                votes[24] = 3;
                            } else {
                                if (rr_std <= 15.623805046081543) {
                                    votes[24] = 0;
                                } else {
                                    if (rr_median <= 87.0) {
                                        votes[24] = 4;
                                    } else {
                                        votes[24] = 5;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 89.5) {
                                if (rr_std <= 16.40364170074463) {
                                    votes[24] = 0;
                                } else {
                                    if (diastolic_time <= 76.75) {
                                        votes[24] = 3;
                                    } else {
                                        votes[24] = 0;
                                    }
                                }
                            } else {
                                votes[24] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_median <= 131.0) {
            if (rr_median <= 118.75) {
                if (rr_std <= 13.787102699279785) {
                    if (diastolic_time <= 59.5) {
                        votes[24] = 1;
                    } else {
                        votes[24] = 1;
                    }
                } else {
                    if (rr_std <= 41.46853256225586) {
                        if (num_peaks <= 83.0) {
                            votes[24] = 5;
                        } else {
                            votes[24] = 1;
                        }
                    } else {
                        if (rr_std <= 48.10371017456055) {
                            votes[24] = 4;
                        } else {
                            votes[24] = 1;
                        }
                    }
                }
            } else {
                if (num_peaks <= 56.5) {
                    if (rr_std <= 17.04823088645935) {
                        votes[24] = 2;
                    } else {
                        votes[24] = 1;
                    }
                } else {
                    if (diastolic_time <= 90.5) {
                        votes[24] = 5;
                    } else {
                        votes[24] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 355.0) {
                if (rr_std <= 56.53682518005371) {
                    if (num_valleys <= 94.5) {
                        if (rr_median <= 138.75) {
                            if (num_valleys <= 89.5) {
                                votes[24] = 1;
                            } else {
                                votes[24] = 1;
                            }
                        } else {
                            if (rr_std <= 1.083776980638504) {
                                votes[24] = 1;
                            } else {
                                if (rr_std <= 39.87405586242676) {
                                    votes[24] = 1;
                                } else {
                                    votes[24] = 1;
                                }
                            }
                        }
                    } else {
                        votes[24] = 4;
                    }
                } else {
                    votes[24] = 0;
                }
            } else {
                votes[24] = 0;
            }
        }
    }
// Decision rules for tree 25
    if (num_peaks <= 74.5) {
        if (rr_median <= 134.25) {
            if (num_valleys <= 84.5) {
                if (rr_std <= 0.9357241690158844) {
                    if (rr_median <= 66.0) {
                        if (num_peaks <= 40.0) {
                            votes[25] = 4;
                        } else {
                            if (diastolic_time <= 52.75) {
                                votes[25] = 5;
                            } else {
                                votes[25] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 75.5) {
                            if (num_valleys <= 73.0) {
                                votes[25] = 2;
                            } else {
                                votes[25] = 2;
                            }
                        } else {
                            votes[25] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 65.5) {
                        votes[25] = 5;
                    } else {
                        votes[25] = 3;
                    }
                }
            } else {
                if (diastolic_time <= 105.25) {
                    if (rr_std <= 29.813352584838867) {
                        if (diastolic_time <= 37.75) {
                            if (rr_median <= 49.5) {
                                if (diastolic_time <= 10.0) {
                                    votes[25] = 4;
                                } else {
                                    if (diastolic_time <= 35.5) {
                                        votes[25] = 4;
                                    } else {
                                        votes[25] = 4;
                                    }
                                }
                            } else {
                                votes[25] = 1;
                            }
                        } else {
                            if (diastolic_time <= 75.0) {
                                if (rr_std <= 8.994228839874268) {
                                    if (diastolic_time <= 55.25) {
                                        if (rr_median <= 77.75) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 56.0) {
                                            votes[25] = 0;
                                        } else {
                                            votes[25] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 86.0) {
                                        if (rr_median <= 58.75) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 0;
                                        }
                                    } else {
                                        votes[25] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 4.963992357254028) {
                                    if (num_peaks <= 59.0) {
                                        if (num_peaks <= 39.0) {
                                            votes[25] = 5;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    } else {
                                        votes[25] = 5;
                                    }
                                } else {
                                    if (rr_median <= 109.5) {
                                        if (num_peaks <= 68.5) {
                                            votes[25] = 4;
                                        } else {
                                            votes[25] = 4;
                                        }
                                    } else {
                                        votes[25] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 47.5) {
                            votes[25] = 3;
                        } else {
                            if (num_valleys <= 89.5) {
                                if (num_peaks <= 64.5) {
                                    votes[25] = 4;
                                } else {
                                    votes[25] = 4;
                                }
                            } else {
                                votes[25] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 327.5) {
                        if (rr_median <= 118.25) {
                            if (num_peaks <= 52.5) {
                                votes[25] = 1;
                            } else {
                                votes[25] = 1;
                            }
                        } else {
                            if (num_valleys <= 90.5) {
                                votes[25] = 2;
                            } else {
                                votes[25] = 2;
                            }
                        }
                    } else {
                        votes[25] = 4;
                    }
                }
            }
        } else {
            if (rr_std <= 38.52732849121094) {
                if (rr_std <= 31.3701753616333) {
                    votes[25] = 1;
                } else {
                    votes[25] = 1;
                }
            } else {
                votes[25] = 1;
            }
        }
    } else {
        if (rr_median <= 99.25) {
            if (num_valleys <= 84.5) {
                if (rr_median <= 67.5) {
                    votes[25] = 3;
                } else {
                    if (rr_std <= 1.251598060131073) {
                        if (diastolic_time <= 42.5) {
                            votes[25] = 5;
                        } else {
                            votes[25] = 5;
                        }
                    } else {
                        votes[25] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 55.5) {
                    if (rr_std <= 0.9447756707668304) {
                        if (num_peaks <= 82.0) {
                            if (diastolic_time <= 37.75) {
                                votes[25] = 0;
                            } else {
                                votes[25] = 0;
                            }
                        } else {
                            if (num_peaks <= 88.5) {
                                votes[25] = 1;
                            } else {
                                votes[25] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 55.25) {
                            if (diastolic_time <= 41.0) {
                                votes[25] = 3;
                            } else {
                                votes[25] = 3;
                            }
                        } else {
                            if (rr_std <= 5.043876647949219) {
                                votes[25] = 3;
                            } else {
                                if (diastolic_time <= 49.25) {
                                    if (rr_median <= 67.75) {
                                        votes[25] = 3;
                                    } else {
                                        votes[25] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 85.0) {
                                        votes[25] = 0;
                                    } else {
                                        votes[25] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 6.497220993041992) {
                        if (rr_median <= 21.75) {
                            if (diastolic_time <= 89.75) {
                                if (num_peaks <= 88.5) {
                                    if (num_peaks <= 83.5) {
                                        votes[25] = 0;
                                    } else {
                                        votes[25] = 0;
                                    }
                                } else {
                                    votes[25] = 0;
                                }
                            } else {
                                votes[25] = 5;
                            }
                        } else {
                            if (num_peaks <= 80.0) {
                                votes[25] = 5;
                            } else {
                                if (num_peaks <= 85.5) {
                                    votes[25] = 3;
                                } else {
                                    votes[25] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 19.100642204284668) {
                            if (num_valleys <= 91.5) {
                                if (rr_median <= 63.75) {
                                    votes[25] = 0;
                                } else {
                                    if (rr_std <= 15.332582473754883) {
                                        votes[25] = 0;
                                    } else {
                                        votes[25] = 0;
                                    }
                                }
                            } else {
                                votes[25] = 0;
                            }
                        } else {
                            if (diastolic_time <= 69.75) {
                                votes[25] = 3;
                            } else {
                                if (num_peaks <= 87.5) {
                                    if (rr_std <= 29.396300315856934) {
                                        votes[25] = 4;
                                    } else {
                                        votes[25] = 0;
                                    }
                                } else {
                                    votes[25] = 0;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 12.093914985656738) {
                if (num_peaks <= 80.5) {
                    votes[25] = 2;
                } else {
                    if (num_valleys <= 86.5) {
                        votes[25] = 1;
                    } else {
                        if (rr_std <= 0.5975485444068909) {
                            votes[25] = 3;
                        } else {
                            if (rr_std <= 2.474022150039673) {
                                votes[25] = 1;
                            } else {
                                votes[25] = 2;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 87.5) {
                    if (rr_std <= 21.994519233703613) {
                        votes[25] = 5;
                    } else {
                        if (rr_std <= 38.72999382019043) {
                            votes[25] = 1;
                        } else {
                            if (rr_std <= 50.85069274902344) {
                                votes[25] = 0;
                            } else {
                                votes[25] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 67.25) {
                        votes[25] = 0;
                    } else {
                        votes[25] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 26
    if (num_peaks <= 84.5) {
        if (rr_median <= 131.0) {
            if (num_valleys <= 84.5) {
                if (rr_median <= 66.0) {
                    if (rr_median <= 40.0) {
                        if (diastolic_time <= 48.5) {
                            votes[26] = 4;
                        } else {
                            if (diastolic_time <= 68.25) {
                                votes[26] = 5;
                            } else {
                                votes[26] = 5;
                            }
                        }
                    } else {
                        votes[26] = 3;
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (num_peaks <= 74.5) {
                            if (num_valleys <= 73.0) {
                                votes[26] = 2;
                            } else {
                                if (num_peaks <= 53.5) {
                                    if (rr_std <= 0.3910631388425827) {
                                        votes[26] = 2;
                                    } else {
                                        if (diastolic_time <= 51.0) {
                                            votes[26] = 2;
                                        } else {
                                            votes[26] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 0.545406848192215) {
                                        votes[26] = 2;
                                    } else {
                                        if (rr_std <= 0.6076923310756683) {
                                            votes[26] = 2;
                                        } else {
                                            votes[26] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[26] = 5;
                        }
                    } else {
                        if (rr_median <= 85.0) {
                            if (rr_median <= 75.0) {
                                votes[26] = 5;
                            } else {
                                votes[26] = 3;
                            }
                        } else {
                            votes[26] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 244.5) {
                    if (diastolic_time <= 108.75) {
                        if (num_peaks <= 73.5) {
                            if (rr_std <= 17.511099815368652) {
                                if (diastolic_time <= 37.75) {
                                    if (rr_median <= 59.0) {
                                        if (num_peaks <= 60.5) {
                                            votes[26] = 4;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    } else {
                                        votes[26] = 1;
                                    }
                                } else {
                                    if (num_peaks <= 70.5) {
                                        if (num_peaks <= 41.5) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 2;
                                        }
                                    } else {
                                        votes[26] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 65.5) {
                                    if (num_peaks <= 50.5) {
                                        votes[26] = 4;
                                    } else {
                                        if (num_valleys <= 90.5) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 0;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 99.75) {
                                        if (rr_std <= 33.02914237976074) {
                                            votes[26] = 4;
                                        } else {
                                            votes[26] = 4;
                                        }
                                    } else {
                                        votes[26] = 1;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 63.5) {
                                if (rr_std <= 0.6798692941665649) {
                                    if (diastolic_time <= 35.25) {
                                        votes[26] = 3;
                                    } else {
                                        if (diastolic_time <= 61.75) {
                                            votes[26] = 0;
                                        } else {
                                            votes[26] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 22.08082866668701) {
                                        if (num_valleys <= 90.5) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 3;
                                        }
                                    } else {
                                        votes[26] = 3;
                                    }
                                }
                            } else {
                                if (num_valleys <= 88.5) {
                                    if (diastolic_time <= 80.0) {
                                        if (rr_std <= 1.245740532875061) {
                                            votes[26] = 1;
                                        } else {
                                            votes[26] = 3;
                                        }
                                    } else {
                                        votes[26] = 5;
                                    }
                                } else {
                                    if (rr_std <= 23.088223457336426) {
                                        if (diastolic_time <= 53.5) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 0;
                                        }
                                    } else {
                                        votes[26] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 118.25) {
                            if (num_peaks <= 50.0) {
                                votes[26] = 1;
                            } else {
                                votes[26] = 1;
                            }
                        } else {
                            if (rr_std <= 7.982456922531128) {
                                votes[26] = 2;
                            } else {
                                votes[26] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 56.75) {
                        votes[26] = 4;
                    } else {
                        votes[26] = 4;
                    }
                }
            }
        } else {
            if (num_valleys <= 93.5) {
                if (rr_std <= 0.5335937142372131) {
                    votes[26] = 0;
                } else {
                    if (rr_std <= 51.943071365356445) {
                        if (rr_median <= 136.5) {
                            votes[26] = 1;
                        } else {
                            if (rr_median <= 234.0) {
                                votes[26] = 1;
                            } else {
                                votes[26] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 63.25) {
                            votes[26] = 1;
                        } else {
                            votes[26] = 1;
                        }
                    }
                }
            } else {
                votes[26] = 4;
            }
        }
    } else {
        if (num_valleys <= 86.5) {
            if (diastolic_time <= 90.75) {
                if (num_peaks <= 86.5) {
                    votes[26] = 3;
                } else {
                    if (rr_median <= 62.5) {
                        votes[26] = 0;
                    } else {
                        if (diastolic_time <= 51.5) {
                            votes[26] = 1;
                        } else {
                            votes[26] = 1;
                        }
                    }
                }
            } else {
                votes[26] = 1;
            }
        } else {
            if (diastolic_time <= 50.5) {
                if (rr_median <= 79.5) {
                    if (rr_std <= 12.274025440216064) {
                        votes[26] = 0;
                    } else {
                        votes[26] = 3;
                    }
                } else {
                    if (rr_std <= 11.413175582885742) {
                        votes[26] = 3;
                    } else {
                        votes[26] = 0;
                    }
                }
            } else {
                if (rr_std <= 9.243790626525879) {
                    if (rr_std <= 0.31426969170570374) {
                        if (num_peaks <= 89.0) {
                            votes[26] = 0;
                        } else {
                            votes[26] = 0;
                        }
                    } else {
                        if (rr_median <= 97.75) {
                            votes[26] = 5;
                        } else {
                            votes[26] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 16.40364170074463) {
                        if (rr_std <= 13.619210243225098) {
                            votes[26] = 0;
                        } else {
                            votes[26] = 0;
                        }
                    } else {
                        if (diastolic_time <= 79.5) {
                            if (rr_median <= 122.25) {
                                votes[26] = 3;
                            } else {
                                votes[26] = 0;
                            }
                        } else {
                            if (rr_median <= 105.0) {
                                votes[26] = 0;
                            } else {
                                votes[26] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 27
    if (rr_median <= 129.5) {
        if (num_peaks <= 73.5) {
            if (num_valleys <= 84.5) {
                if (diastolic_time <= 87.5) {
                    if (rr_std <= 1.0364980399608612) {
                        if (rr_median <= 62.0) {
                            votes[27] = 2;
                        } else {
                            if (diastolic_time <= 70.5) {
                                if (diastolic_time <= 63.0) {
                                    if (rr_std <= 0.6253483891487122) {
                                        votes[27] = 2;
                                    } else {
                                        votes[27] = 2;
                                    }
                                } else {
                                    votes[27] = 2;
                                }
                            } else {
                                if (rr_median <= 73.5) {
                                    votes[27] = 2;
                                } else {
                                    votes[27] = 2;
                                }
                            }
                        }
                    } else {
                        votes[27] = 5;
                    }
                } else {
                    votes[27] = 5;
                }
            } else {
                if (diastolic_time <= 107.5) {
                    if (rr_std <= 18.714306831359863) {
                        if (diastolic_time <= 37.75) {
                            if (rr_median <= 54.25) {
                                if (num_peaks <= 59.5) {
                                    if (num_peaks <= 40.5) {
                                        votes[27] = 4;
                                    } else {
                                        votes[27] = 4;
                                    }
                                } else {
                                    votes[27] = 4;
                                }
                            } else {
                                if (rr_median <= 99.5) {
                                    votes[27] = 3;
                                } else {
                                    votes[27] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 115.25) {
                                if (diastolic_time <= 75.25) {
                                    if (diastolic_time <= 56.75) {
                                        if (rr_std <= 9.255439758300781) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 49.5) {
                                            votes[27] = 2;
                                        } else {
                                            votes[27] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.10298204421997) {
                                        if (diastolic_time <= 82.5) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    } else {
                                        votes[27] = 4;
                                    }
                                }
                            } else {
                                votes[27] = 2;
                            }
                        }
                    } else {
                        if (diastolic_time <= 76.75) {
                            if (num_peaks <= 49.5) {
                                votes[27] = 4;
                            } else {
                                if (rr_median <= 66.0) {
                                    votes[27] = 3;
                                } else {
                                    if (num_peaks <= 66.5) {
                                        if (rr_std <= 39.05595779418945) {
                                            votes[27] = 1;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    } else {
                                        votes[27] = 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 33.02914237976074) {
                                if (rr_std <= 28.606876373291016) {
                                    if (rr_std <= 23.117923736572266) {
                                        votes[27] = 4;
                                    } else {
                                        votes[27] = 4;
                                    }
                                } else {
                                    votes[27] = 5;
                                }
                            } else {
                                votes[27] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 323.0) {
                        if (rr_median <= 118.25) {
                            votes[27] = 1;
                        } else {
                            votes[27] = 2;
                        }
                    } else {
                        votes[27] = 4;
                    }
                }
            }
        } else {
            if (rr_median <= 67.5) {
                if (rr_std <= 22.987374305725098) {
                    if (num_valleys <= 85.5) {
                        if (rr_std <= 5.515488624572754) {
                            votes[27] = 3;
                        } else {
                            votes[27] = 1;
                        }
                    } else {
                        if (diastolic_time <= 35.0) {
                            votes[27] = 3;
                        } else {
                            if (diastolic_time <= 87.5) {
                                if (diastolic_time <= 54.75) {
                                    if (num_peaks <= 89.5) {
                                        if (rr_median <= 21.0) {
                                            votes[27] = 0;
                                        } else {
                                            votes[27] = 3;
                                        }
                                    } else {
                                        votes[27] = 2;
                                    }
                                } else {
                                    if (diastolic_time <= 63.5) {
                                        if (num_valleys <= 90.5) {
                                            votes[27] = 0;
                                        } else {
                                            votes[27] = 0;
                                        }
                                    } else {
                                        if (num_valleys <= 88.5) {
                                            votes[27] = 0;
                                        } else {
                                            votes[27] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[27] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 79.5) {
                        votes[27] = 3;
                    } else {
                        votes[27] = 3;
                    }
                }
            } else {
                if (rr_std <= 7.097842216491699) {
                    if (diastolic_time <= 47.25) {
                        if (num_valleys <= 81.5) {
                            votes[27] = 5;
                        } else {
                            votes[27] = 3;
                        }
                    } else {
                        if (rr_median <= 73.5) {
                            votes[27] = 3;
                        } else {
                            if (rr_median <= 105.5) {
                                if (rr_std <= 0.8953388035297394) {
                                    votes[27] = 5;
                                } else {
                                    if (num_valleys <= 89.5) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 3;
                                    }
                                }
                            } else {
                                votes[27] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 88.5) {
                        if (rr_std <= 14.826016902923584) {
                            if (diastolic_time <= 79.75) {
                                if (rr_median <= 81.25) {
                                    votes[27] = 0;
                                } else {
                                    votes[27] = 5;
                                }
                            } else {
                                votes[27] = 0;
                            }
                        } else {
                            if (diastolic_time <= 60.0) {
                                if (rr_std <= 24.366849899291992) {
                                    votes[27] = 5;
                                } else {
                                    votes[27] = 5;
                                }
                            } else {
                                if (rr_median <= 96.5) {
                                    if (diastolic_time <= 76.0) {
                                        votes[27] = 0;
                                    } else {
                                        votes[27] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 82.5) {
                                        votes[27] = 3;
                                    } else {
                                        votes[27] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 63.5) {
                            if (rr_std <= 20.84008502960205) {
                                votes[27] = 0;
                            } else {
                                votes[27] = 3;
                            }
                        } else {
                            if (rr_std <= 34.83195114135742) {
                                votes[27] = 0;
                            } else {
                                votes[27] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 39.327857971191406) {
            if (rr_std <= 0.4714045226573944) {
                votes[27] = 1;
            } else {
                if (rr_median <= 134.25) {
                    votes[27] = 1;
                } else {
                    votes[27] = 1;
                }
            }
        } else {
            if (num_peaks <= 83.5) {
                if (rr_median <= 205.5) {
                    votes[27] = 4;
                } else {
                    votes[27] = 1;
                }
            } else {
                votes[27] = 0;
            }
        }
    }
// Decision rules for tree 28
    if (num_peaks <= 75.5) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 64.0) {
                if (num_peaks <= 57.5) {
                    if (diastolic_time <= 73.0) {
                        if (num_peaks <= 44.0) {
                            votes[28] = 4;
                        } else {
                            votes[28] = 3;
                        }
                    } else {
                        votes[28] = 5;
                    }
                } else {
                    votes[28] = 1;
                }
            } else {
                if (rr_median <= 77.0) {
                    if (rr_std <= 0.7192845046520233) {
                        if (rr_median <= 71.0) {
                            if (rr_std <= 0.4740213602781296) {
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
                    if (diastolic_time <= 48.5) {
                        votes[28] = 5;
                    } else {
                        if (rr_std <= 0.8733279705047607) {
                            votes[28] = 2;
                        } else {
                            votes[28] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 110.25) {
                if (diastolic_time <= 107.25) {
                    if (rr_std <= 17.506596565246582) {
                        if (diastolic_time <= 82.75) {
                            if (rr_std <= 2.359940767288208) {
                                if (diastolic_time <= 55.25) {
                                    if (diastolic_time <= 37.75) {
                                        if (num_peaks <= 60.5) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 47.5) {
                                            votes[28] = 5;
                                        } else {
                                            votes[28] = 4;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 66.5) {
                                        if (num_peaks <= 43.5) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 2;
                                        }
                                    } else {
                                        if (num_peaks <= 56.0) {
                                            votes[28] = 0;
                                        } else {
                                            votes[28] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 60.0) {
                                    if (rr_std <= 9.511858463287354) {
                                        votes[28] = 3;
                                    } else {
                                        if (diastolic_time <= 59.5) {
                                            votes[28] = 0;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 66.25) {
                                        votes[28] = 3;
                                    } else {
                                        votes[28] = 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 8.053410291671753) {
                                if (num_peaks <= 58.5) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 5;
                                }
                            } else {
                                votes[28] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 63.5) {
                            if (rr_std <= 30.068808555603027) {
                                votes[28] = 0;
                            } else {
                                votes[28] = 3;
                            }
                        } else {
                            if (rr_median <= 96.5) {
                                if (num_peaks <= 66.5) {
                                    votes[28] = 5;
                                } else {
                                    if (diastolic_time <= 84.0) {
                                        if (rr_median <= 73.5) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 4;
                                        }
                                    } else {
                                        votes[28] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 33.84003829956055) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 327.0) {
                        if (diastolic_time <= 118.25) {
                            votes[28] = 1;
                        } else {
                            votes[28] = 1;
                        }
                    } else {
                        votes[28] = 4;
                    }
                }
            } else {
                if (rr_median <= 131.0) {
                    if (rr_median <= 119.25) {
                        if (rr_std <= 31.15167236328125) {
                            votes[28] = 1;
                        } else {
                            votes[28] = 4;
                        }
                    } else {
                        if (rr_std <= 26.881442070007324) {
                            votes[28] = 2;
                        } else {
                            votes[28] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 72.50964736938477) {
                        if (rr_median <= 241.75) {
                            if (num_valleys <= 92.5) {
                                if (rr_median <= 136.5) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 1;
                                }
                            } else {
                                votes[28] = 1;
                            }
                        } else {
                            votes[28] = 3;
                        }
                    } else {
                        votes[28] = 3;
                    }
                }
            }
        }
    } else {
        if (rr_median <= 98.25) {
            if (diastolic_time <= 52.75) {
                if (rr_std <= 0.5942246615886688) {
                    if (num_peaks <= 89.5) {
                        if (diastolic_time <= 35.0) {
                            votes[28] = 5;
                        } else {
                            if (diastolic_time <= 43.0) {
                                votes[28] = 0;
                            } else {
                                votes[28] = 0;
                            }
                        }
                    } else {
                        votes[28] = 2;
                    }
                } else {
                    if (rr_median <= 67.5) {
                        if (rr_median <= 59.5) {
                            if (num_peaks <= 79.0) {
                                votes[28] = 3;
                            } else {
                                votes[28] = 3;
                            }
                        } else {
                            votes[28] = 3;
                        }
                    } else {
                        if (num_peaks <= 81.5) {
                            votes[28] = 5;
                        } else {
                            if (rr_std <= 1.669861376285553) {
                                votes[28] = 3;
                            } else {
                                votes[28] = 3;
                            }
                        }
                    }
                }
            } else {
                if (num_valleys <= 86.5) {
                    if (rr_median <= 71.5) {
                        if (num_peaks <= 86.5) {
                            votes[28] = 3;
                        } else {
                            votes[28] = 0;
                        }
                    } else {
                        if (num_peaks <= 83.0) {
                            votes[28] = 5;
                        } else {
                            votes[28] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (rr_std <= 19.819205284118652) {
                            if (rr_median <= 72.5) {
                                if (num_peaks <= 81.5) {
                                    votes[28] = 0;
                                } else {
                                    votes[28] = 3;
                                }
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[28] = 0;
                                } else {
                                    votes[28] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 75.5) {
                                votes[28] = 0;
                            } else {
                                votes[28] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 10.224267959594727) {
                            if (rr_median <= 70.25) {
                                if (num_peaks <= 90.5) {
                                    if (num_valleys <= 88.5) {
                                        votes[28] = 0;
                                    } else {
                                        if (diastolic_time <= 62.75) {
                                            votes[28] = 0;
                                        } else {
                                            votes[28] = 0;
                                        }
                                    }
                                } else {
                                    votes[28] = 3;
                                }
                            } else {
                                votes[28] = 5;
                            }
                        } else {
                            if (rr_std <= 13.767618656158447) {
                                votes[28] = 0;
                            } else {
                                if (diastolic_time <= 68.0) {
                                    votes[28] = 3;
                                } else {
                                    if (rr_median <= 85.0) {
                                        votes[28] = 0;
                                    } else {
                                        votes[28] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 87.5) {
                if (rr_median <= 118.25) {
                    if (num_peaks <= 82.5) {
                        votes[28] = 5;
                    } else {
                        if (diastolic_time <= 87.25) {
                            votes[28] = 3;
                        } else {
                            votes[28] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 236.5) {
                        if (rr_std <= 4.4761494398117065) {
                            votes[28] = 2;
                        } else {
                            if (num_valleys <= 89.5) {
                                votes[28] = 1;
                            } else {
                                votes[28] = 1;
                            }
                        }
                    } else {
                        votes[28] = 0;
                    }
                }
            } else {
                if (rr_std <= 13.277534008026123) {
                    if (num_peaks <= 90.5) {
                        votes[28] = 1;
                    } else {
                        votes[28] = 2;
                    }
                } else {
                    if (diastolic_time <= 74.0) {
                        votes[28] = 1;
                    } else {
                        votes[28] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 29
    if (num_peaks <= 74.5) {
        if (rr_median <= 134.25) {
            if (num_valleys <= 84.5) {
                if (rr_std <= 0.7192845046520233) {
                    if (rr_median <= 66.0) {
                        if (num_valleys <= 83.5) {
                            if (num_valleys <= 81.0) {
                                votes[29] = 3;
                            } else {
                                votes[29] = 1;
                            }
                        } else {
                            votes[29] = 2;
                        }
                    } else {
                        if (diastolic_time <= 70.5) {
                            if (rr_std <= 0.545406848192215) {
                                votes[29] = 2;
                            } else {
                                if (rr_std <= 0.6296193599700928) {
                                    votes[29] = 2;
                                } else {
                                    votes[29] = 2;
                                }
                            }
                        } else {
                            votes[29] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 68.0) {
                        if (num_peaks <= 59.5) {
                            votes[29] = 2;
                        } else {
                            votes[29] = 5;
                        }
                    } else {
                        votes[29] = 3;
                    }
                }
            } else {
                if (rr_median <= 119.75) {
                    if (diastolic_time <= 79.25) {
                        if (diastolic_time <= 37.75) {
                            if (num_peaks <= 62.0) {
                                if (rr_median <= 100.5) {
                                    if (num_valleys <= 87.5) {
                                        votes[29] = 4;
                                    } else {
                                        if (diastolic_time <= 10.0) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    }
                                } else {
                                    votes[29] = 1;
                                }
                            } else {
                                votes[29] = 5;
                            }
                        } else {
                            if (diastolic_time <= 55.25) {
                                if (num_peaks <= 41.5) {
                                    votes[29] = 5;
                                } else {
                                    if (rr_median <= 65.5) {
                                        if (diastolic_time <= 40.75) {
                                            votes[29] = 1;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    } else {
                                        if (rr_median <= 72.25) {
                                            votes[29] = 0;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 49.5) {
                                    if (diastolic_time <= 60.5) {
                                        votes[29] = 2;
                                    } else {
                                        votes[29] = 2;
                                    }
                                } else {
                                    if (num_peaks <= 55.5) {
                                        if (rr_std <= 15.544440746307373) {
                                            votes[29] = 0;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 15.306589126586914) {
                                            votes[29] = 3;
                                        } else {
                                            votes[29] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 310.0) {
                            if (diastolic_time <= 110.5) {
                                if (rr_std <= 13.696508884429932) {
                                    if (num_peaks <= 57.0) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 5;
                                    }
                                } else {
                                    if (rr_std <= 35.58613586425781) {
                                        if (rr_median <= 98.5) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    } else {
                                        votes[29] = 4;
                                    }
                                }
                            } else {
                                votes[29] = 1;
                            }
                        } else {
                            votes[29] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 26.881442070007324) {
                        if (num_peaks <= 54.0) {
                            votes[29] = 2;
                        } else {
                            votes[29] = 2;
                        }
                    } else {
                        votes[29] = 4;
                    }
                }
            }
        } else {
            if (rr_std <= 0.4714045226573944) {
                votes[29] = 3;
            } else {
                if (rr_std <= 51.943071365356445) {
                    if (rr_std <= 31.3701753616333) {
                        votes[29] = 1;
                    } else {
                        if (diastolic_time <= 48.0) {
                            votes[29] = 1;
                        } else {
                            votes[29] = 1;
                        }
                    }
                } else {
                    votes[29] = 1;
                }
            }
        }
    } else {
        if (diastolic_time <= 51.75) {
            if (rr_median <= 105.0) {
                if (num_peaks <= 91.5) {
                    if (rr_std <= 25.915456771850586) {
                        if (rr_std <= 12.395693302154541) {
                            if (rr_std <= 3.4740047454833984) {
                                if (num_valleys <= 89.5) {
                                    if (num_peaks <= 81.5) {
                                        votes[29] = 5;
                                    } else {
                                        if (diastolic_time <= 38.75) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    }
                                } else {
                                    votes[29] = 0;
                                }
                            } else {
                                if (rr_median <= 56.5) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 15.521735668182373) {
                                votes[29] = 0;
                            } else {
                                votes[29] = 5;
                            }
                        }
                    } else {
                        votes[29] = 3;
                    }
                } else {
                    votes[29] = 1;
                }
            } else {
                if (rr_median <= 162.0) {
                    votes[29] = 1;
                } else {
                    votes[29] = 1;
                }
            }
        } else {
            if (rr_std <= 5.566662549972534) {
                if (rr_std <= 0.21066252887248993) {
                    if (diastolic_time <= 84.0) {
                        if (diastolic_time <= 62.75) {
                            if (num_peaks <= 86.5) {
                                votes[29] = 0;
                            } else {
                                votes[29] = 0;
                            }
                        } else {
                            if (diastolic_time <= 68.25) {
                                votes[29] = 3;
                            } else {
                                votes[29] = 0;
                            }
                        }
                    } else {
                        if (num_valleys <= 90.5) {
                            votes[29] = 5;
                        } else {
                            votes[29] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 113.5) {
                        if (rr_median <= 99.5) {
                            if (rr_std <= 1.3863485455513) {
                                if (rr_median <= 73.0) {
                                    votes[29] = 3;
                                } else {
                                    if (rr_median <= 77.25) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 2.575173020362854) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 83.5) {
                                votes[29] = 5;
                            } else {
                                votes[29] = 1;
                            }
                        }
                    } else {
                        votes[29] = 2;
                    }
                }
            } else {
                if (num_valleys <= 86.5) {
                    votes[29] = 1;
                } else {
                    if (num_peaks <= 81.5) {
                        if (rr_std <= 14.665186405181885) {
                            votes[29] = 0;
                        } else {
                            if (num_peaks <= 76.5) {
                                votes[29] = 4;
                            } else {
                                if (diastolic_time <= 83.25) {
                                    votes[29] = 0;
                                } else {
                                    votes[29] = 5;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 79.5) {
                            if (diastolic_time <= 69.75) {
                                if (num_peaks <= 84.5) {
                                    votes[29] = 3;
                                } else {
                                    if (rr_median <= 57.25) {
                                        votes[29] = 0;
                                    } else {
                                        if (rr_median <= 86.5) {
                                            votes[29] = 0;
                                        } else {
                                            votes[29] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[29] = 4;
                            }
                        } else {
                            if (num_valleys <= 91.5) {
                                if (rr_median <= 86.25) {
                                    votes[29] = 0;
                                } else {
                                    votes[29] = 0;
                                }
                            } else {
                                votes[29] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 30
    if (num_valleys <= 84.5) {
        if (num_peaks <= 69.5) {
            if (rr_median <= 66.0) {
                if (diastolic_time <= 47.5) {
                    votes[30] = 4;
                } else {
                    if (num_valleys <= 82.5) {
                        votes[30] = 5;
                    } else {
                        votes[30] = 3;
                    }
                }
            } else {
                if (rr_median <= 80.5) {
                    if (rr_std <= 0.7192845046520233) {
                        votes[30] = 2;
                    } else {
                        votes[30] = 5;
                    }
                } else {
                    votes[30] = 1;
                }
            }
        } else {
            if (rr_median <= 82.5) {
                if (diastolic_time <= 39.5) {
                    votes[30] = 1;
                } else {
                    if (num_valleys <= 78.5) {
                        votes[30] = 2;
                    } else {
                        if (num_valleys <= 83.5) {
                            if (rr_std <= 1.2508984208106995) {
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
                if (num_valleys <= 82.5) {
                    votes[30] = 5;
                } else {
                    votes[30] = 1;
                }
            }
        }
    } else {
        if (num_peaks <= 75.5) {
            if (rr_median <= 134.25) {
                if (rr_std <= 18.714306831359863) {
                    if (diastolic_time <= 343.0) {
                        if (diastolic_time <= 42.25) {
                            if (rr_median <= 47.0) {
                                if (diastolic_time <= 37.75) {
                                    if (num_peaks <= 58.5) {
                                        if (diastolic_time <= 22.5) {
                                            votes[30] = 4;
                                        } else {
                                            votes[30] = 4;
                                        }
                                    } else {
                                        votes[30] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 39.75) {
                                        votes[30] = 5;
                                    } else {
                                        votes[30] = 4;
                                    }
                                }
                            } else {
                                if (rr_median <= 69.0) {
                                    votes[30] = 3;
                                } else {
                                    if (num_peaks <= 53.5) {
                                        votes[30] = 1;
                                    } else {
                                        votes[30] = 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 115.25) {
                                if (diastolic_time <= 82.75) {
                                    if (rr_std <= 9.311609745025635) {
                                        if (num_peaks <= 55.5) {
                                            votes[30] = 2;
                                        } else {
                                            votes[30] = 3;
                                        }
                                    } else {
                                        if (diastolic_time <= 70.0) {
                                            votes[30] = 0;
                                        } else {
                                            votes[30] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 109.25) {
                                        if (num_peaks <= 57.0) {
                                            votes[30] = 5;
                                        } else {
                                            votes[30] = 5;
                                        }
                                    } else {
                                        votes[30] = 1;
                                    }
                                }
                            } else {
                                if (num_peaks <= 51.5) {
                                    votes[30] = 2;
                                } else {
                                    votes[30] = 2;
                                }
                            }
                        }
                    } else {
                        votes[30] = 4;
                    }
                } else {
                    if (diastolic_time <= 110.5) {
                        if (diastolic_time <= 76.75) {
                            if (diastolic_time <= 47.5) {
                                if (num_valleys <= 90.5) {
                                    votes[30] = 3;
                                } else {
                                    votes[30] = 4;
                                }
                            } else {
                                if (rr_median <= 85.5) {
                                    if (num_valleys <= 89.5) {
                                        votes[30] = 3;
                                    } else {
                                        votes[30] = 0;
                                    }
                                } else {
                                    if (rr_std <= 27.463396072387695) {
                                        votes[30] = 1;
                                    } else {
                                        votes[30] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 88.5) {
                                votes[30] = 4;
                            } else {
                                if (num_peaks <= 61.0) {
                                    if (num_valleys <= 90.5) {
                                        votes[30] = 4;
                                    } else {
                                        votes[30] = 4;
                                    }
                                } else {
                                    votes[30] = 4;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 90.0) {
                            votes[30] = 1;
                        } else {
                            votes[30] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.4714045226573944) {
                    votes[30] = 3;
                } else {
                    if (num_valleys <= 92.5) {
                        if (rr_std <= 51.0850772857666) {
                            votes[30] = 1;
                        } else {
                            votes[30] = 1;
                        }
                    } else {
                        votes[30] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 74.5) {
                if (diastolic_time <= 53.5) {
                    if (rr_std <= 18.594990730285645) {
                        if (diastolic_time <= 32.5) {
                            votes[30] = 3;
                        } else {
                            if (rr_std <= 1.8545912504196167) {
                                if (num_peaks <= 86.5) {
                                    votes[30] = 0;
                                } else {
                                    votes[30] = 0;
                                }
                            } else {
                                if (rr_median <= 55.25) {
                                    votes[30] = 3;
                                } else {
                                    votes[30] = 0;
                                }
                            }
                        }
                    } else {
                        votes[30] = 3;
                    }
                } else {
                    if (num_peaks <= 82.5) {
                        if (num_valleys <= 91.5) {
                            if (rr_std <= 3.7650988698005676) {
                                votes[30] = 0;
                            } else {
                                votes[30] = 0;
                            }
                        } else {
                            votes[30] = 3;
                        }
                    } else {
                        if (rr_std <= 15.181509971618652) {
                            if (rr_std <= 3.490471363067627) {
                                if (num_peaks <= 89.0) {
                                    if (diastolic_time <= 63.75) {
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
                            votes[30] = 0;
                        }
                    }
                }
            } else {
                if (rr_std <= 7.097842216491699) {
                    if (rr_std <= 1.292322814464569) {
                        if (rr_median <= 100.0) {
                            votes[30] = 5;
                        } else {
                            votes[30] = 5;
                        }
                    } else {
                        if (diastolic_time <= 111.0) {
                            if (rr_median <= 98.25) {
                                votes[30] = 3;
                            } else {
                                if (num_peaks <= 90.5) {
                                    votes[30] = 1;
                                } else {
                                    votes[30] = 2;
                                }
                            }
                        } else {
                            votes[30] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 81.5) {
                        if (rr_median <= 125.5) {
                            if (rr_median <= 94.5) {
                                votes[30] = 0;
                            } else {
                                votes[30] = 5;
                            }
                        } else {
                            votes[30] = 1;
                        }
                    } else {
                        if (diastolic_time <= 46.25) {
                            votes[30] = 1;
                        } else {
                            if (num_peaks <= 87.5) {
                                if (num_valleys <= 88.5) {
                                    votes[30] = 5;
                                } else {
                                    if (diastolic_time <= 77.25) {
                                        votes[30] = 0;
                                    } else {
                                        votes[30] = 0;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 79.0) {
                                    votes[30] = 0;
                                } else {
                                    votes[30] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 31
    if (rr_median <= 128.75) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 66.0) {
                if (diastolic_time <= 68.25) {
                    if (num_valleys <= 78.5) {
                        votes[31] = 5;
                    } else {
                        if (rr_std <= 4.401838600635529) {
                            if (diastolic_time <= 42.25) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 2;
                            }
                        } else {
                            votes[31] = 1;
                        }
                    }
                } else {
                    votes[31] = 5;
                }
            } else {
                if (num_peaks <= 74.5) {
                    if (rr_std <= 0.7325202226638794) {
                        if (rr_median <= 73.5) {
                            if (rr_median <= 71.5) {
                                if (rr_std <= 0.545406848192215) {
                                    votes[31] = 2;
                                } else {
                                    votes[31] = 2;
                                }
                            } else {
                                votes[31] = 2;
                            }
                        } else {
                            votes[31] = 2;
                        }
                    } else {
                        votes[31] = 5;
                    }
                } else {
                    if (rr_median <= 76.5) {
                        if (rr_median <= 72.5) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 5;
                        }
                    } else {
                        if (diastolic_time <= 48.0) {
                            votes[31] = 3;
                        } else {
                            votes[31] = 2;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 244.5) {
                    if (diastolic_time <= 108.75) {
                        if (rr_std <= 21.01315402984619) {
                            if (diastolic_time <= 38.75) {
                                if (rr_median <= 42.5) {
                                    if (diastolic_time <= 10.0) {
                                        votes[31] = 4;
                                    } else {
                                        if (num_peaks <= 59.0) {
                                            votes[31] = 4;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    }
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                if (diastolic_time <= 55.25) {
                                    if (num_peaks <= 43.5) {
                                        votes[31] = 4;
                                    } else {
                                        if (rr_median <= 66.75) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 66.5) {
                                        if (num_peaks <= 43.5) {
                                            votes[31] = 4;
                                        } else {
                                            votes[31] = 2;
                                        }
                                    } else {
                                        if (rr_median <= 112.5) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                if (rr_std <= 31.99049663543701) {
                                    votes[31] = 0;
                                } else {
                                    if (num_peaks <= 54.0) {
                                        votes[31] = 4;
                                    } else {
                                        votes[31] = 5;
                                    }
                                }
                            } else {
                                if (rr_median <= 116.25) {
                                    if (rr_std <= 29.813352584838867) {
                                        if (rr_std <= 24.38099956512451) {
                                            votes[31] = 4;
                                        } else {
                                            votes[31] = 4;
                                        }
                                    } else {
                                        votes[31] = 4;
                                    }
                                } else {
                                    votes[31] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 115.5) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 2;
                        }
                    }
                } else {
                    votes[31] = 4;
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 63.5) {
                        if (rr_median <= 21.25) {
                            if (diastolic_time <= 32.5) {
                                votes[31] = 3;
                            } else {
                                if (diastolic_time <= 61.75) {
                                    votes[31] = 0;
                                } else {
                                    votes[31] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 76.5) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 100.5) {
                            if (num_valleys <= 88.5) {
                                if (num_peaks <= 83.0) {
                                    if (num_valleys <= 87.5) {
                                        votes[31] = 5;
                                    } else {
                                        votes[31] = 5;
                                    }
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                if (rr_std <= 19.205121994018555) {
                                    if (rr_std <= 6.04699444770813) {
                                        votes[31] = 5;
                                    } else {
                                        if (diastolic_time <= 75.0) {
                                            votes[31] = 0;
                                        } else {
                                            votes[31] = 0;
                                        }
                                    }
                                } else {
                                    votes[31] = 4;
                                }
                            }
                        } else {
                            if (rr_std <= 7.96630859375) {
                                votes[31] = 1;
                            } else {
                                if (num_valleys <= 88.5) {
                                    votes[31] = 5;
                                } else {
                                    votes[31] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 47.25) {
                        if (rr_median <= 24.0) {
                            votes[31] = 2;
                        } else {
                            if (rr_std <= 13.316699028015137) {
                                votes[31] = 3;
                            } else {
                                votes[31] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 8.621502876281738) {
                            if (rr_median <= 60.25) {
                                if (num_valleys <= 91.5) {
                                    if (num_peaks <= 89.0) {
                                        votes[31] = 0;
                                    } else {
                                        votes[31] = 0;
                                    }
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                if (rr_median <= 100.0) {
                                    votes[31] = 5;
                                } else {
                                    votes[31] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 42.162437438964844) {
                                if (num_valleys <= 90.5) {
                                    if (num_peaks <= 87.5) {
                                        votes[31] = 0;
                                    } else {
                                        votes[31] = 0;
                                    }
                                } else {
                                    if (rr_std <= 17.475777626037598) {
                                        votes[31] = 0;
                                    } else {
                                        votes[31] = 3;
                                    }
                                }
                            } else {
                                votes[31] = 1;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 61.158145904541016) {
            if (rr_std <= 0.44031527638435364) {
                votes[31] = 5;
            } else {
                if (num_peaks <= 87.5) {
                    if (num_valleys <= 92.5) {
                        if (rr_median <= 133.5) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 1;
                        }
                    } else {
                        votes[31] = 1;
                    }
                } else {
                    votes[31] = 0;
                }
            }
        } else {
            if (num_peaks <= 82.5) {
                votes[31] = 3;
            } else {
                votes[31] = 0;
            }
        }
    }
// Decision rules for tree 32
    if (num_peaks <= 74.5) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.7299954891204834) {
                if (rr_median <= 64.0) {
                    if (diastolic_time <= 73.0) {
                        if (num_valleys <= 81.5) {
                            votes[32] = 3;
                        } else {
                            votes[32] = 2;
                        }
                    } else {
                        votes[32] = 5;
                    }
                } else {
                    if (rr_median <= 73.5) {
                        if (rr_median <= 71.5) {
                            if (rr_std <= 0.545406848192215) {
                                votes[32] = 2;
                            } else {
                                votes[32] = 2;
                            }
                        } else {
                            votes[32] = 2;
                        }
                    } else {
                        votes[32] = 2;
                    }
                }
            } else {
                if (rr_median <= 85.5) {
                    if (rr_median <= 71.5) {
                        votes[32] = 3;
                    } else {
                        votes[32] = 2;
                    }
                } else {
                    votes[32] = 1;
                }
            }
        } else {
            if (rr_median <= 129.5) {
                if (rr_median <= 117.5) {
                    if (diastolic_time <= 105.25) {
                        if (diastolic_time <= 38.75) {
                            if (num_peaks <= 62.0) {
                                if (rr_median <= 59.5) {
                                    if (num_peaks <= 58.5) {
                                        if (num_peaks <= 39.5) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 4;
                                        }
                                    } else {
                                        votes[32] = 4;
                                    }
                                } else {
                                    votes[32] = 1;
                                }
                            } else {
                                votes[32] = 3;
                            }
                        } else {
                            if (rr_std <= 16.509812355041504) {
                                if (diastolic_time <= 75.25) {
                                    if (num_peaks <= 59.5) {
                                        if (num_peaks <= 43.5) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 1.4815127849578857) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 82.5) {
                                        votes[32] = 5;
                                    } else {
                                        if (num_peaks <= 56.5) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 65.5) {
                                    if (num_peaks <= 67.5) {
                                        if (rr_std <= 26.14084815979004) {
                                            votes[32] = 1;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    } else {
                                        votes[32] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 67.5) {
                                        if (rr_median <= 95.0) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 4;
                                        }
                                    } else {
                                        if (rr_median <= 86.0) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 310.0) {
                            if (diastolic_time <= 117.5) {
                                votes[32] = 1;
                            } else {
                                votes[32] = 1;
                            }
                        } else {
                            votes[32] = 4;
                        }
                    }
                } else {
                    if (num_peaks <= 53.5) {
                        votes[32] = 2;
                    } else {
                        votes[32] = 2;
                    }
                }
            } else {
                if (rr_median <= 241.75) {
                    if (rr_std <= 41.47220420837402) {
                        if (rr_std <= 31.3701753616333) {
                            if (rr_median <= 136.5) {
                                votes[32] = 1;
                            } else {
                                votes[32] = 1;
                            }
                        } else {
                            votes[32] = 1;
                        }
                    } else {
                        votes[32] = 1;
                    }
                } else {
                    votes[32] = 5;
                }
            }
        }
    } else {
        if (rr_median <= 100.5) {
            if (diastolic_time <= 56.5) {
                if (rr_median <= 67.5) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 29.25) {
                            votes[32] = 3;
                        } else {
                            if (rr_median <= 20.5) {
                                votes[32] = 0;
                            } else {
                                if (rr_median <= 55.25) {
                                    if (rr_std <= 23.841474533081055) {
                                        votes[32] = 3;
                                    } else {
                                        votes[32] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 49.5) {
                                        votes[32] = 3;
                                    } else {
                                        votes[32] = 0;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[32] = 2;
                    }
                } else {
                    if (num_peaks <= 88.5) {
                        if (diastolic_time <= 40.75) {
                            votes[32] = 5;
                        } else {
                            if (num_valleys <= 90.5) {
                                if (num_peaks <= 83.0) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 3;
                                }
                            } else {
                                votes[32] = 5;
                            }
                        }
                    } else {
                        votes[32] = 0;
                    }
                }
            } else {
                if (rr_std <= 6.497220993041992) {
                    if (rr_median <= 30.5) {
                        if (num_valleys <= 91.5) {
                            if (num_peaks <= 85.0) {
                                votes[32] = 0;
                            } else {
                                votes[32] = 0;
                            }
                        } else {
                            votes[32] = 3;
                        }
                    } else {
                        if (num_valleys <= 83.5) {
                            votes[32] = 5;
                        } else {
                            if (diastolic_time <= 91.5) {
                                if (diastolic_time <= 74.5) {
                                    if (rr_std <= 1.279021441936493) {
                                        votes[32] = 3;
                                    } else {
                                        votes[32] = 5;
                                    }
                                } else {
                                    votes[32] = 5;
                                }
                            } else {
                                votes[32] = 2;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (rr_median <= 69.5) {
                            votes[32] = 3;
                        } else {
                            if (rr_std <= 18.376022338867188) {
                                votes[32] = 0;
                            } else {
                                votes[32] = 4;
                            }
                        }
                    } else {
                        if (rr_median <= 54.75) {
                            votes[32] = 1;
                        } else {
                            if (diastolic_time <= 79.5) {
                                if (diastolic_time <= 66.75) {
                                    votes[32] = 0;
                                } else {
                                    votes[32] = 0;
                                }
                            } else {
                                votes[32] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 28.76714038848877) {
                if (num_peaks <= 78.5) {
                    votes[32] = 5;
                } else {
                    if (num_peaks <= 89.5) {
                        if (num_peaks <= 84.5) {
                            if (rr_median <= 130.5) {
                                votes[32] = 1;
                            } else {
                                votes[32] = 1;
                            }
                        } else {
                            if (diastolic_time <= 95.75) {
                                votes[32] = 5;
                            } else {
                                votes[32] = 1;
                            }
                        }
                    } else {
                        votes[32] = 1;
                    }
                }
            } else {
                if (num_peaks <= 89.5) {
                    if (rr_std <= 62.98552131652832) {
                        if (num_peaks <= 84.0) {
                            votes[32] = 1;
                        } else {
                            votes[32] = 1;
                        }
                    } else {
                        votes[32] = 0;
                    }
                } else {
                    votes[32] = 0;
                }
            }
        }
    }
// Decision rules for tree 33
    if (rr_median <= 129.5) {
        if (num_valleys <= 84.5) {
            if (num_peaks <= 74.5) {
                if (rr_median <= 66.0) {
                    if (diastolic_time <= 45.5) {
                        votes[33] = 4;
                    } else {
                        if (num_valleys <= 82.5) {
                            votes[33] = 5;
                        } else {
                            votes[33] = 2;
                        }
                    }
                } else {
                    if (rr_median <= 86.5) {
                        if (rr_std <= 0.7299954891204834) {
                            if (num_peaks <= 53.5) {
                                votes[33] = 2;
                            } else {
                                if (num_peaks <= 61.0) {
                                    votes[33] = 2;
                                } else {
                                    votes[33] = 2;
                                }
                            }
                        } else {
                            votes[33] = 5;
                        }
                    } else {
                        votes[33] = 5;
                    }
                }
            } else {
                if (rr_median <= 93.5) {
                    if (num_valleys <= 79.0) {
                        votes[33] = 2;
                    } else {
                        if (rr_median <= 65.5) {
                            votes[33] = 3;
                        } else {
                            if (rr_median <= 76.5) {
                                votes[33] = 5;
                            } else {
                                votes[33] = 3;
                            }
                        }
                    }
                } else {
                    votes[33] = 1;
                }
            }
        } else {
            if (num_peaks <= 73.5) {
                if (rr_median <= 119.75) {
                    if (diastolic_time <= 261.5) {
                        if (diastolic_time <= 108.75) {
                            if (rr_std <= 17.511099815368652) {
                                if (diastolic_time <= 38.25) {
                                    if (rr_median <= 48.5) {
                                        if (num_valleys <= 92.5) {
                                            votes[33] = 4;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 82.25) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 1;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 82.75) {
                                        if (rr_std <= 9.325254917144775) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 5.684980630874634) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 63.75) {
                                    if (num_peaks <= 50.5) {
                                        votes[33] = 4;
                                    } else {
                                        if (num_peaks <= 66.5) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 33.10106372833252) {
                                        if (rr_median <= 81.25) {
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
                            votes[33] = 1;
                        }
                    } else {
                        votes[33] = 4;
                    }
                } else {
                    if (rr_std <= 17.862786293029785) {
                        votes[33] = 2;
                    } else {
                        votes[33] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 47.25) {
                    if (rr_median <= 78.0) {
                        if (rr_median <= 53.0) {
                            if (diastolic_time <= 32.5) {
                                votes[33] = 3;
                            } else {
                                if (diastolic_time <= 37.5) {
                                    votes[33] = 2;
                                } else {
                                    votes[33] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 85.5) {
                                votes[33] = 3;
                            } else {
                                votes[33] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 85.0) {
                            votes[33] = 5;
                        } else {
                            votes[33] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 85.5) {
                        if (rr_median <= 75.25) {
                            if (num_valleys <= 88.5) {
                                if (num_valleys <= 87.0) {
                                    votes[33] = 3;
                                } else {
                                    votes[33] = 3;
                                }
                            } else {
                                if (rr_std <= 11.643436431884766) {
                                    if (diastolic_time <= 71.75) {
                                        votes[33] = 0;
                                    } else {
                                        votes[33] = 0;
                                    }
                                } else {
                                    votes[33] = 3;
                                }
                            }
                        } else {
                            if (diastolic_time <= 119.75) {
                                if (rr_std <= 23.088223457336426) {
                                    if (num_peaks <= 83.5) {
                                        if (diastolic_time <= 84.75) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    } else {
                                        votes[33] = 3;
                                    }
                                } else {
                                    if (rr_median <= 96.5) {
                                        votes[33] = 4;
                                    } else {
                                        votes[33] = 3;
                                    }
                                }
                            } else {
                                votes[33] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 49.24739074707031) {
                            if (rr_std <= 9.826676368713379) {
                                if (rr_median <= 58.5) {
                                    if (num_valleys <= 87.5) {
                                        votes[33] = 0;
                                    } else {
                                        if (diastolic_time <= 55.5) {
                                            votes[33] = 0;
                                        } else {
                                            votes[33] = 0;
                                        }
                                    }
                                } else {
                                    votes[33] = 2;
                                }
                            } else {
                                if (diastolic_time <= 56.0) {
                                    votes[33] = 0;
                                } else {
                                    if (rr_std <= 16.40364170074463) {
                                        votes[33] = 0;
                                    } else {
                                        if (rr_median <= 91.5) {
                                            votes[33] = 0;
                                        } else {
                                            votes[33] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[33] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 83.5) {
            if (rr_std <= 0.4714045226573944) {
                votes[33] = 5;
            } else {
                if (diastolic_time <= 56.25) {
                    votes[33] = 1;
                } else {
                    if (rr_std <= 42.673622131347656) {
                        if (diastolic_time <= 115.0) {
                            if (num_valleys <= 90.5) {
                                votes[33] = 1;
                            } else {
                                votes[33] = 1;
                            }
                        } else {
                            votes[33] = 1;
                        }
                    } else {
                        votes[33] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 16.67643690109253) {
                votes[33] = 1;
            } else {
                votes[33] = 0;
            }
        }
    }
// Decision rules for tree 34
    if (rr_median <= 128.75) {
        if (num_valleys <= 84.5) {
            if (diastolic_time <= 74.75) {
                if (rr_median <= 65.0) {
                    if (rr_median <= 20.5) {
                        if (diastolic_time <= 35.25) {
                            votes[34] = 2;
                        } else {
                            votes[34] = 3;
                        }
                    } else {
                        votes[34] = 3;
                    }
                } else {
                    if (rr_median <= 76.0) {
                        if (rr_std <= 1.0548941791057587) {
                            if (rr_median <= 71.5) {
                                if (rr_std <= 0.545406848192215) {
                                    if (num_peaks <= 52.5) {
                                        votes[34] = 2;
                                    } else {
                                        votes[34] = 3;
                                    }
                                } else {
                                    if (rr_std <= 0.5911726653575897) {
                                        votes[34] = 2;
                                    } else {
                                        votes[34] = 2;
                                    }
                                }
                            } else {
                                if (num_peaks <= 56.5) {
                                    votes[34] = 2;
                                } else {
                                    votes[34] = 2;
                                }
                            }
                        } else {
                            votes[34] = 5;
                        }
                    } else {
                        if (rr_median <= 86.0) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.8258498013019562) {
                    if (num_valleys <= 82.5) {
                        if (num_valleys <= 79.5) {
                            votes[34] = 5;
                        } else {
                            votes[34] = 5;
                        }
                    } else {
                        votes[34] = 5;
                    }
                } else {
                    votes[34] = 1;
                }
            }
        } else {
            if (num_peaks <= 82.5) {
                if (diastolic_time <= 261.5) {
                    if (diastolic_time <= 108.75) {
                        if (rr_std <= 32.87550640106201) {
                            if (rr_median <= 86.5) {
                                if (diastolic_time <= 32.5) {
                                    if (num_valleys <= 88.5) {
                                        votes[34] = 4;
                                    } else {
                                        if (num_peaks <= 33.0) {
                                            votes[34] = 4;
                                        } else {
                                            votes[34] = 4;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 42.0) {
                                        if (diastolic_time <= 61.5) {
                                            votes[34] = 4;
                                        } else {
                                            votes[34] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 65.75) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 67.5) {
                                    if (diastolic_time <= 74.5) {
                                        if (num_peaks <= 57.0) {
                                            votes[34] = 1;
                                        } else {
                                            votes[34] = 1;
                                        }
                                    } else {
                                        if (num_peaks <= 55.5) {
                                            votes[34] = 2;
                                        } else {
                                            votes[34] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 22.298964500427246) {
                                        votes[34] = 5;
                                    } else {
                                        votes[34] = 5;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 76.0) {
                                if (rr_std <= 57.4168586730957) {
                                    if (num_valleys <= 89.5) {
                                        votes[34] = 4;
                                    } else {
                                        if (diastolic_time <= 58.0) {
                                            votes[34] = 4;
                                        } else {
                                            votes[34] = 4;
                                        }
                                    }
                                } else {
                                    votes[34] = 3;
                                }
                            } else {
                                votes[34] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 115.25) {
                            if (num_peaks <= 52.5) {
                                votes[34] = 1;
                            } else {
                                votes[34] = 1;
                            }
                        } else {
                            votes[34] = 2;
                        }
                    }
                } else {
                    votes[34] = 4;
                }
            } else {
                if (diastolic_time <= 52.75) {
                    if (rr_median <= 59.5) {
                        if (rr_std <= 3.675074577331543) {
                            if (diastolic_time <= 35.75) {
                                votes[34] = 3;
                            } else {
                                votes[34] = 0;
                            }
                        } else {
                            votes[34] = 3;
                        }
                    } else {
                        if (rr_std <= 26.899174690246582) {
                            if (rr_std <= 7.409675478935242) {
                                votes[34] = 3;
                            } else {
                                votes[34] = 0;
                            }
                        } else {
                            votes[34] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 5.537773847579956) {
                        if (rr_std <= 0.31426969170570374) {
                            if (num_peaks <= 89.5) {
                                votes[34] = 0;
                            } else {
                                votes[34] = 0;
                            }
                        } else {
                            if (diastolic_time <= 93.25) {
                                votes[34] = 3;
                            } else {
                                if (rr_std <= 2.1775317788124084) {
                                    votes[34] = 2;
                                } else {
                                    votes[34] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 54.5) {
                            votes[34] = 3;
                        } else {
                            if (rr_std <= 46.14060401916504) {
                                if (rr_median <= 104.5) {
                                    if (diastolic_time <= 74.25) {
                                        if (rr_median <= 86.5) {
                                            votes[34] = 0;
                                        } else {
                                            votes[34] = 3;
                                        }
                                    } else {
                                        votes[34] = 0;
                                    }
                                } else {
                                    votes[34] = 0;
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
        if (rr_std <= 51.73190116882324) {
            if (rr_std <= 0.44031527638435364) {
                votes[34] = 1;
            } else {
                if (num_valleys <= 93.5) {
                    if (rr_median <= 138.75) {
                        if (diastolic_time <= 115.0) {
                            votes[34] = 1;
                        } else {
                            votes[34] = 1;
                        }
                    } else {
                        votes[34] = 1;
                    }
                } else {
                    votes[34] = 1;
                }
            }
        } else {
            if (num_peaks <= 80.5) {
                if (rr_std <= 72.50964736938477) {
                    votes[34] = 1;
                } else {
                    votes[34] = 3;
                }
            } else {
                votes[34] = 0;
            }
        }
    }
// Decision rules for tree 35
    if (rr_median <= 105.75) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.7269814610481262) {
                if (diastolic_time <= 81.5) {
                    if (num_peaks <= 79.0) {
                        if (rr_median <= 66.0) {
                            if (diastolic_time <= 52.75) {
                                votes[35] = 2;
                            } else {
                                votes[35] = 3;
                            }
                        } else {
                            if (num_peaks <= 59.5) {
                                if (rr_median <= 73.5) {
                                    votes[35] = 2;
                                } else {
                                    votes[35] = 2;
                                }
                            } else {
                                if (diastolic_time <= 69.5) {
                                    votes[35] = 2;
                                } else {
                                    votes[35] = 2;
                                }
                            }
                        }
                    } else {
                        votes[35] = 3;
                    }
                } else {
                    votes[35] = 5;
                }
            } else {
                if (rr_std <= 6.152394771575928) {
                    if (rr_median <= 85.0) {
                        if (num_peaks <= 67.5) {
                            votes[35] = 5;
                        } else {
                            if (num_peaks <= 81.5) {
                                votes[35] = 3;
                            } else {
                                votes[35] = 5;
                            }
                        }
                    } else {
                        votes[35] = 1;
                    }
                } else {
                    if (num_peaks <= 75.5) {
                        votes[35] = 3;
                    } else {
                        votes[35] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 76.5) {
                if (diastolic_time <= 241.0) {
                    if (diastolic_time <= 110.5) {
                        if (rr_std <= 21.715059280395508) {
                            if (diastolic_time <= 10.0) {
                                votes[35] = 4;
                            } else {
                                if (diastolic_time <= 70.75) {
                                    if (rr_std <= 1.2691249251365662) {
                                        if (diastolic_time <= 55.25) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 2;
                                        }
                                    } else {
                                        if (rr_std <= 10.706426620483398) {
                                            votes[35] = 3;
                                        } else {
                                            votes[35] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.1679368019104) {
                                        if (num_peaks <= 71.5) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 59.5) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 72.25) {
                                if (diastolic_time <= 40.5) {
                                    votes[35] = 4;
                                } else {
                                    if (rr_median <= 77.25) {
                                        votes[35] = 3;
                                    } else {
                                        votes[35] = 1;
                                    }
                                }
                            } else {
                                if (rr_median <= 88.5) {
                                    votes[35] = 4;
                                } else {
                                    if (rr_std <= 34.04461097717285) {
                                        votes[35] = 0;
                                    } else {
                                        votes[35] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[35] = 1;
                    }
                } else {
                    votes[35] = 4;
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 77.25) {
                        if (rr_std <= 0.8443530201911926) {
                            if (diastolic_time <= 43.0) {
                                votes[35] = 3;
                            } else {
                                votes[35] = 0;
                            }
                        } else {
                            if (num_peaks <= 83.5) {
                                if (rr_median <= 71.5) {
                                    if (num_peaks <= 79.5) {
                                        votes[35] = 3;
                                    } else {
                                        votes[35] = 3;
                                    }
                                } else {
                                    votes[35] = 3;
                                }
                            } else {
                                votes[35] = 0;
                            }
                        }
                    } else {
                        if (num_peaks <= 81.5) {
                            if (rr_std <= 21.56235408782959) {
                                if (num_valleys <= 89.0) {
                                    votes[35] = 5;
                                } else {
                                    votes[35] = 5;
                                }
                            } else {
                                votes[35] = 4;
                            }
                        } else {
                            votes[35] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 47.25) {
                        if (rr_std <= 0.28327885270118713) {
                            votes[35] = 2;
                        } else {
                            if (diastolic_time <= 40.0) {
                                votes[35] = 3;
                            } else {
                                votes[35] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 8.847529888153076) {
                            if (diastolic_time <= 73.75) {
                                if (diastolic_time <= 54.0) {
                                    votes[35] = 0;
                                } else {
                                    if (num_peaks <= 90.5) {
                                        votes[35] = 0;
                                    } else {
                                        votes[35] = 0;
                                    }
                                }
                            } else {
                                if (rr_std <= 0.8388151228427887) {
                                    votes[35] = 2;
                                } else {
                                    votes[35] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 16.40364170074463) {
                                votes[35] = 0;
                            } else {
                                if (diastolic_time <= 67.25) {
                                    votes[35] = 3;
                                } else {
                                    if (rr_std <= 30.837294578552246) {
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
        if (diastolic_time <= 49.75) {
            if (rr_std <= 1.7577543258666992) {
                votes[35] = 1;
            } else {
                votes[35] = 1;
            }
        } else {
            if (diastolic_time <= 127.5) {
                if (num_peaks <= 53.5) {
                    if (rr_std <= 14.85855484008789) {
                        if (num_peaks <= 48.5) {
                            votes[35] = 2;
                        } else {
                            votes[35] = 2;
                        }
                    } else {
                        votes[35] = 4;
                    }
                } else {
                    if (rr_std <= 39.77220916748047) {
                        if (num_valleys <= 91.5) {
                            if (num_valleys <= 89.5) {
                                if (num_peaks <= 71.0) {
                                    votes[35] = 1;
                                } else {
                                    if (num_peaks <= 82.0) {
                                        votes[35] = 5;
                                    } else {
                                        votes[35] = 1;
                                    }
                                }
                            } else {
                                votes[35] = 1;
                            }
                        } else {
                            if (diastolic_time <= 104.25) {
                                votes[35] = 5;
                            } else {
                                votes[35] = 2;
                            }
                        }
                    } else {
                        if (num_peaks <= 78.5) {
                            votes[35] = 3;
                        } else {
                            if (num_valleys <= 88.0) {
                                votes[35] = 1;
                            } else {
                                if (rr_median <= 210.75) {
                                    votes[35] = 0;
                                } else {
                                    votes[35] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 173.5) {
                    votes[35] = 1;
                } else {
                    votes[35] = 1;
                }
            }
        }
    }
// Decision rules for tree 36
    if (rr_median <= 129.5) {
        if (num_valleys <= 85.5) {
            if (rr_std <= 0.6868122220039368) {
                if (rr_median <= 61.5) {
                    if (diastolic_time <= 68.25) {
                        if (diastolic_time <= 36.0) {
                            votes[36] = 4;
                        } else {
                            if (num_peaks <= 49.5) {
                                votes[36] = 3;
                            } else {
                                votes[36] = 3;
                            }
                        }
                    } else {
                        votes[36] = 5;
                    }
                } else {
                    if (rr_median <= 75.0) {
                        if (rr_std <= 0.6641920208930969) {
                            if (num_valleys <= 74.0) {
                                votes[36] = 2;
                            } else {
                                if (diastolic_time <= 66.5) {
                                    if (num_valleys <= 80.5) {
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
                    } else {
                        votes[36] = 5;
                    }
                }
            } else {
                if (num_peaks <= 68.0) {
                    if (diastolic_time <= 39.5) {
                        votes[36] = 5;
                    } else {
                        if (num_peaks <= 57.5) {
                            votes[36] = 2;
                        } else {
                            votes[36] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 80.5) {
                        if (rr_std <= 2.477480173110962) {
                            votes[36] = 3;
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        if (rr_std <= 1.5289986729621887) {
                            votes[36] = 5;
                        } else {
                            votes[36] = 0;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 75.5) {
                if (diastolic_time <= 310.0) {
                    if (diastolic_time <= 107.5) {
                        if (rr_std <= 31.99049663543701) {
                            if (diastolic_time <= 74.5) {
                                if (rr_median <= 39.25) {
                                    if (diastolic_time <= 58.5) {
                                        if (diastolic_time <= 42.5) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 67.5) {
                                            votes[36] = 2;
                                        } else {
                                            votes[36] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 10.1282958984375) {
                                        if (rr_median <= 102.5) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 1;
                                        }
                                    } else {
                                        if (diastolic_time <= 42.0) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 13.518269538879395) {
                                    if (rr_median <= 112.5) {
                                        if (diastolic_time <= 89.5) {
                                            votes[36] = 5;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    } else {
                                        votes[36] = 2;
                                    }
                                } else {
                                    if (rr_std <= 29.49501132965088) {
                                        if (num_peaks <= 66.5) {
                                            votes[36] = 0;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    } else {
                                        votes[36] = 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 65.11401748657227) {
                                if (diastolic_time <= 49.75) {
                                    votes[36] = 4;
                                } else {
                                    votes[36] = 4;
                                }
                            } else {
                                votes[36] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 118.25) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 2;
                        }
                    }
                } else {
                    votes[36] = 4;
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 85.25) {
                        if (rr_std <= 0.8443530201911926) {
                            if (diastolic_time <= 61.75) {
                                if (diastolic_time <= 36.0) {
                                    votes[36] = 3;
                                } else {
                                    votes[36] = 0;
                                }
                            } else {
                                votes[36] = 3;
                            }
                        } else {
                            if (diastolic_time <= 57.0) {
                                votes[36] = 3;
                            } else {
                                if (num_peaks <= 83.0) {
                                    if (rr_median <= 71.5) {
                                        votes[36] = 3;
                                    } else {
                                        votes[36] = 3;
                                    }
                                } else {
                                    votes[36] = 0;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 113.5) {
                            if (rr_median <= 97.0) {
                                votes[36] = 5;
                            } else {
                                if (rr_std <= 19.580305099487305) {
                                    votes[36] = 5;
                                } else {
                                    votes[36] = 5;
                                }
                            }
                        } else {
                            votes[36] = 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 47.25) {
                        if (rr_std <= 0.28327885270118713) {
                            votes[36] = 2;
                        } else {
                            if (diastolic_time <= 41.5) {
                                votes[36] = 3;
                            } else {
                                votes[36] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 9.050411701202393) {
                            if (diastolic_time <= 51.25) {
                                votes[36] = 1;
                            } else {
                                if (rr_median <= 58.5) {
                                    if (diastolic_time <= 76.0) {
                                        if (num_valleys <= 89.0) {
                                            votes[36] = 0;
                                        } else {
                                            votes[36] = 0;
                                        }
                                    } else {
                                        votes[36] = 5;
                                    }
                                } else {
                                    if (rr_median <= 78.5) {
                                        votes[36] = 5;
                                    } else {
                                        votes[36] = 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 105.0) {
                                if (rr_median <= 59.25) {
                                    votes[36] = 0;
                                } else {
                                    if (num_peaks <= 87.5) {
                                        if (num_valleys <= 90.5) {
                                            votes[36] = 4;
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
            }
        }
    } else {
        if (rr_std <= 61.158145904541016) {
            if (rr_std <= 0.4517539441585541) {
                votes[36] = 3;
            } else {
                if (num_valleys <= 92.5) {
                    if (rr_std <= 30.487016677856445) {
                        if (rr_median <= 136.0) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 1;
                        }
                    } else {
                        if (num_peaks <= 75.5) {
                            if (rr_median <= 158.5) {
                                votes[36] = 1;
                            } else {
                                votes[36] = 1;
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
            if (num_peaks <= 82.5) {
                votes[36] = 3;
            } else {
                votes[36] = 0;
            }
        }
    }
// Decision rules for tree 37
    if (rr_median <= 126.5) {
        if (num_peaks <= 74.5) {
            if (num_valleys <= 85.5) {
                if (rr_std <= 0.7192845046520233) {
                    if (rr_std <= 0.33040061593055725) {
                        if (diastolic_time <= 77.5) {
                            if (num_peaks <= 43.0) {
                                votes[37] = 4;
                            } else {
                                if (num_valleys <= 84.5) {
                                    votes[37] = 2;
                                } else {
                                    votes[37] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 96.5) {
                                votes[37] = 5;
                            } else {
                                votes[37] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 67.5) {
                            if (num_peaks <= 54.5) {
                                votes[37] = 2;
                            } else {
                                votes[37] = 2;
                            }
                        } else {
                            if (diastolic_time <= 47.75) {
                                votes[37] = 2;
                            } else {
                                if (num_peaks <= 59.5) {
                                    votes[37] = 2;
                                } else {
                                    if (diastolic_time <= 70.75) {
                                        votes[37] = 2;
                                    } else {
                                        votes[37] = 2;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 68.0) {
                        votes[37] = 3;
                    } else {
                        if (diastolic_time <= 50.0) {
                            votes[37] = 5;
                        } else {
                            votes[37] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 108.75) {
                    if (rr_std <= 24.43030071258545) {
                        if (diastolic_time <= 41.25) {
                            if (rr_std <= 0.2489648014307022) {
                                if (diastolic_time <= 10.0) {
                                    votes[37] = 4;
                                } else {
                                    if (diastolic_time <= 36.0) {
                                        votes[37] = 4;
                                    } else {
                                        if (diastolic_time <= 37.75) {
                                            votes[37] = 4;
                                        } else {
                                            votes[37] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 63.0) {
                                    votes[37] = 1;
                                } else {
                                    votes[37] = 3;
                                }
                            }
                        } else {
                            if (rr_median <= 112.5) {
                                if (diastolic_time <= 75.25) {
                                    if (rr_std <= 0.565681666135788) {
                                        if (diastolic_time <= 55.25) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 2;
                                        }
                                    } else {
                                        if (rr_median <= 59.75) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.44123888015747) {
                                        if (rr_median <= 33.0) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 18.4077205657959) {
                                            votes[37] = 1;
                                        } else {
                                            votes[37] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[37] = 2;
                            }
                        }
                    } else {
                        if (diastolic_time <= 76.75) {
                            if (num_peaks <= 52.0) {
                                votes[37] = 4;
                            } else {
                                votes[37] = 1;
                            }
                        } else {
                            if (diastolic_time <= 97.75) {
                                if (rr_std <= 31.693254470825195) {
                                    votes[37] = 4;
                                } else {
                                    votes[37] = 4;
                                }
                            } else {
                                votes[37] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 242.0) {
                        if (rr_median <= 118.25) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 2;
                        }
                    } else {
                        votes[37] = 4;
                    }
                }
            }
        } else {
            if (num_peaks <= 84.5) {
                if (rr_median <= 75.0) {
                    if (diastolic_time <= 86.5) {
                        if (num_valleys <= 88.5) {
                            if (diastolic_time <= 39.0) {
                                votes[37] = 5;
                            } else {
                                if (num_peaks <= 78.5) {
                                    votes[37] = 3;
                                } else {
                                    votes[37] = 3;
                                }
                            }
                        } else {
                            if (num_valleys <= 90.5) {
                                if (num_valleys <= 89.5) {
                                    votes[37] = 3;
                                } else {
                                    votes[37] = 0;
                                }
                            } else {
                                if (rr_std <= 2.4553796648979187) {
                                    votes[37] = 0;
                                } else {
                                    if (rr_median <= 49.5) {
                                        votes[37] = 3;
                                    } else {
                                        votes[37] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[37] = 4;
                    }
                } else {
                    if (diastolic_time <= 105.75) {
                        if (num_peaks <= 83.5) {
                            if (num_valleys <= 91.5) {
                                if (rr_median <= 89.5) {
                                    if (diastolic_time <= 75.75) {
                                        votes[37] = 5;
                                    } else {
                                        votes[37] = 5;
                                    }
                                } else {
                                    if (rr_std <= 20.893866539001465) {
                                        votes[37] = 5;
                                    } else {
                                        votes[37] = 5;
                                    }
                                }
                            } else {
                                votes[37] = 5;
                            }
                        } else {
                            votes[37] = 3;
                        }
                    } else {
                        votes[37] = 4;
                    }
                }
            } else {
                if (num_valleys <= 86.5) {
                    if (rr_std <= 6.450216889381409) {
                        if (diastolic_time <= 48.25) {
                            votes[37] = 3;
                        } else {
                            votes[37] = 2;
                        }
                    } else {
                        if (rr_median <= 106.75) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 0;
                        }
                    }
                } else {
                    if (diastolic_time <= 46.25) {
                        if (rr_median <= 27.0) {
                            votes[37] = 0;
                        } else {
                            if (diastolic_time <= 40.5) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 103.75) {
                            if (rr_std <= 9.51451826095581) {
                                if (rr_median <= 72.5) {
                                    if (rr_std <= 7.16554594039917) {
                                        if (num_valleys <= 89.5) {
                                            votes[37] = 0;
                                        } else {
                                            votes[37] = 0;
                                        }
                                    } else {
                                        votes[37] = 3;
                                    }
                                } else {
                                    votes[37] = 5;
                                }
                            } else {
                                if (rr_std <= 13.767618656158447) {
                                    votes[37] = 0;
                                } else {
                                    if (rr_median <= 82.75) {
                                        votes[37] = 3;
                                    } else {
                                        if (diastolic_time <= 78.0) {
                                            votes[37] = 0;
                                        } else {
                                            votes[37] = 0;
                                        }
                                    }
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
        if (rr_std <= 39.87405586242676) {
            if (rr_median <= 333.0) {
                if (num_valleys <= 93.5) {
                    if (rr_median <= 134.5) {
                        if (num_peaks <= 75.0) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 1;
                        }
                    } else {
                        if (diastolic_time <= 174.0) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 1;
                        }
                    }
                } else {
                    votes[37] = 5;
                }
            } else {
                votes[37] = 3;
            }
        } else {
            if (num_peaks <= 80.5) {
                if (diastolic_time <= 56.0) {
                    votes[37] = 1;
                } else {
                    votes[37] = 1;
                }
            } else {
                if (rr_median <= 212.5) {
                    votes[37] = 0;
                } else {
                    votes[37] = 0;
                }
            }
        }
    }
// Decision rules for tree 38
    if (rr_median <= 105.75) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.7192845046520233) {
                if (diastolic_time <= 88.0) {
                    if (num_peaks <= 62.5) {
                        if (rr_std <= 0.1332346796989441) {
                            votes[38] = 3;
                        } else {
                            if (diastolic_time <= 70.5) {
                                if (num_valleys <= 79.5) {
                                    if (diastolic_time <= 63.5) {
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
                        if (num_peaks <= 79.0) {
                            if (rr_std <= 0.5285045951604843) {
                                votes[38] = 5;
                            } else {
                                votes[38] = 2;
                            }
                        } else {
                            if (rr_median <= 77.5) {
                                votes[38] = 2;
                            } else {
                                votes[38] = 3;
                            }
                        }
                    }
                } else {
                    votes[38] = 5;
                }
            } else {
                if (num_peaks <= 72.0) {
                    if (rr_median <= 65.5) {
                        votes[38] = 3;
                    } else {
                        votes[38] = 5;
                    }
                } else {
                    if (diastolic_time <= 52.0) {
                        votes[38] = 3;
                    } else {
                        votes[38] = 3;
                    }
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 37.75) {
                    if (rr_median <= 51.75) {
                        if (num_peaks <= 40.0) {
                            votes[38] = 4;
                        } else {
                            if (num_peaks <= 59.5) {
                                votes[38] = 4;
                            } else {
                                votes[38] = 4;
                            }
                        }
                    } else {
                        votes[38] = 5;
                    }
                } else {
                    if (diastolic_time <= 78.5) {
                        if (rr_std <= 1.5925416946411133) {
                            if (diastolic_time <= 55.25) {
                                if (num_valleys <= 86.5) {
                                    votes[38] = 5;
                                } else {
                                    if (num_peaks <= 41.5) {
                                        votes[38] = 5;
                                    } else {
                                        if (num_peaks <= 53.5) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 69.5) {
                                    if (num_peaks <= 43.0) {
                                        votes[38] = 4;
                                    } else {
                                        if (diastolic_time <= 63.0) {
                                            votes[38] = 2;
                                        } else {
                                            votes[38] = 2;
                                        }
                                    }
                                } else {
                                    votes[38] = 0;
                                }
                            }
                        } else {
                            if (rr_median <= 59.5) {
                                if (rr_std <= 23.372754096984863) {
                                    votes[38] = 3;
                                } else {
                                    votes[38] = 1;
                                }
                            } else {
                                if (rr_std <= 8.710328578948975) {
                                    votes[38] = 3;
                                } else {
                                    if (diastolic_time <= 68.0) {
                                        if (rr_std <= 15.484496593475342) {
                                            votes[38] = 0;
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
                        if (rr_std <= 15.381282806396484) {
                            if (diastolic_time <= 302.5) {
                                if (diastolic_time <= 108.75) {
                                    if (diastolic_time <= 86.5) {
                                        votes[38] = 5;
                                    } else {
                                        if (rr_median <= 93.0) {
                                            votes[38] = 5;
                                        } else {
                                            votes[38] = 5;
                                        }
                                    }
                                } else {
                                    votes[38] = 1;
                                }
                            } else {
                                votes[38] = 4;
                            }
                        } else {
                            if (diastolic_time <= 114.5) {
                                if (rr_median <= 88.0) {
                                    if (num_valleys <= 89.5) {
                                        votes[38] = 4;
                                    } else {
                                        votes[38] = 4;
                                    }
                                } else {
                                    if (rr_std <= 23.482057571411133) {
                                        votes[38] = 1;
                                    } else {
                                        if (num_peaks <= 61.0) {
                                            votes[38] = 4;
                                        } else {
                                            votes[38] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[38] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 32.5) {
                    if (rr_median <= 23.5) {
                        votes[38] = 3;
                    } else {
                        votes[38] = 3;
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (rr_median <= 62.5) {
                            if (rr_median <= 20.5) {
                                if (diastolic_time <= 62.0) {
                                    votes[38] = 0;
                                } else {
                                    votes[38] = 3;
                                }
                            } else {
                                if (num_valleys <= 90.0) {
                                    votes[38] = 3;
                                } else {
                                    votes[38] = 3;
                                }
                            }
                        } else {
                            if (diastolic_time <= 85.75) {
                                if (diastolic_time <= 69.25) {
                                    if (rr_std <= 7.764881372451782) {
                                        votes[38] = 5;
                                    } else {
                                        votes[38] = 5;
                                    }
                                } else {
                                    if (rr_std <= 10.577864170074463) {
                                        votes[38] = 3;
                                    } else {
                                        votes[38] = 0;
                                    }
                                }
                            } else {
                                votes[38] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 55.5) {
                            if (rr_median <= 58.25) {
                                if (rr_std <= 3.675074577331543) {
                                    votes[38] = 3;
                                } else {
                                    votes[38] = 3;
                                }
                            } else {
                                if (diastolic_time <= 47.25) {
                                    votes[38] = 3;
                                } else {
                                    if (num_valleys <= 90.5) {
                                        votes[38] = 0;
                                    } else {
                                        votes[38] = 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 10.006264209747314) {
                                if (rr_median <= 72.5) {
                                    if (num_peaks <= 89.0) {
                                        if (diastolic_time <= 61.75) {
                                            votes[38] = 0;
                                        } else {
                                            votes[38] = 0;
                                        }
                                    } else {
                                        votes[38] = 2;
                                    }
                                } else {
                                    votes[38] = 5;
                                }
                            } else {
                                if (num_peaks <= 87.5) {
                                    votes[38] = 0;
                                } else {
                                    if (num_peaks <= 89.5) {
                                        votes[38] = 0;
                                    } else {
                                        votes[38] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_median <= 129.5) {
            if (rr_median <= 118.75) {
                if (rr_std <= 32.91874122619629) {
                    if (diastolic_time <= 89.75) {
                        if (rr_std <= 10.113693237304688) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 5;
                        }
                    } else {
                        votes[38] = 5;
                    }
                } else {
                    if (rr_std <= 48.10371017456055) {
                        votes[38] = 4;
                    } else {
                        votes[38] = 1;
                    }
                }
            } else {
                if (num_peaks <= 53.5) {
                    if (rr_std <= 7.854596853256226) {
                        votes[38] = 2;
                    } else {
                        votes[38] = 2;
                    }
                } else {
                    if (num_valleys <= 93.5) {
                        if (num_peaks <= 68.0) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 1;
                        }
                    } else {
                        votes[38] = 5;
                    }
                }
            }
        } else {
            if (rr_median <= 258.25) {
                if (rr_std <= 39.327857971191406) {
                    if (rr_median <= 138.75) {
                        if (diastolic_time <= 69.0) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 1;
                        }
                    } else {
                        if (num_peaks <= 80.5) {
                            if (num_valleys <= 91.5) {
                                votes[38] = 1;
                            } else {
                                votes[38] = 1;
                            }
                        } else {
                            votes[38] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 82.5) {
                        if (diastolic_time <= 62.0) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 3;
                        }
                    } else {
                        votes[38] = 0;
                    }
                }
            } else {
                if (num_valleys <= 91.5) {
                    votes[38] = 5;
                } else {
                    votes[38] = 0;
                }
            }
        }
    }
// Decision rules for tree 39
    if (num_valleys <= 85.5) {
        if (rr_std <= 0.7481152415275574) {
            if (diastolic_time <= 74.75) {
                if (rr_median <= 64.0) {
                    if (num_valleys <= 81.0) {
                        votes[39] = 3;
                    } else {
                        if (num_peaks <= 60.0) {
                            votes[39] = 4;
                        } else {
                            votes[39] = 2;
                        }
                    }
                } else {
                    if (rr_median <= 76.5) {
                        if (rr_median <= 69.5) {
                            if (rr_std <= 0.565681666135788) {
                                votes[39] = 2;
                            } else {
                                votes[39] = 2;
                            }
                        } else {
                            votes[39] = 2;
                        }
                    } else {
                        votes[39] = 3;
                    }
                }
            } else {
                if (num_valleys <= 82.5) {
                    votes[39] = 5;
                } else {
                    votes[39] = 5;
                }
            }
        } else {
            if (rr_median <= 86.0) {
                if (rr_median <= 68.25) {
                    if (num_peaks <= 67.5) {
                        votes[39] = 1;
                    } else {
                        if (num_peaks <= 82.5) {
                            votes[39] = 3;
                        } else {
                            votes[39] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 75.5) {
                        votes[39] = 5;
                    } else {
                        votes[39] = 5;
                    }
                }
            } else {
                if (rr_median <= 132.0) {
                    votes[39] = 1;
                } else {
                    votes[39] = 1;
                }
            }
        }
    } else {
        if (rr_median <= 98.75) {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 109.25) {
                    if (diastolic_time <= 37.75) {
                        if (num_peaks <= 62.0) {
                            if (num_peaks <= 40.0) {
                                votes[39] = 4;
                            } else {
                                if (diastolic_time <= 15.75) {
                                    votes[39] = 4;
                                } else {
                                    if (num_valleys <= 90.5) {
                                        votes[39] = 4;
                                    } else {
                                        votes[39] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[39] = 3;
                        }
                    } else {
                        if (rr_std <= 21.64167308807373) {
                            if (num_peaks <= 41.5) {
                                if (num_peaks <= 25.5) {
                                    votes[39] = 4;
                                } else {
                                    if (diastolic_time <= 50.0) {
                                        votes[39] = 4;
                                    } else {
                                        votes[39] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 8.710328578948975) {
                                    if (diastolic_time <= 55.25) {
                                        if (diastolic_time <= 50.25) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 3;
                                        }
                                    } else {
                                        if (diastolic_time <= 66.5) {
                                            votes[39] = 2;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 56.5) {
                                        votes[39] = 3;
                                    } else {
                                        if (diastolic_time <= 65.5) {
                                            votes[39] = 0;
                                        } else {
                                            votes[39] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                if (rr_median <= 66.0) {
                                    votes[39] = 3;
                                } else {
                                    votes[39] = 5;
                                }
                            } else {
                                if (rr_median <= 91.75) {
                                    votes[39] = 4;
                                } else {
                                    votes[39] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 241.5) {
                        votes[39] = 1;
                    } else {
                        votes[39] = 4;
                    }
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 78.0) {
                        if (num_peaks <= 77.5) {
                            if (num_valleys <= 90.5) {
                                votes[39] = 0;
                            } else {
                                votes[39] = 0;
                            }
                        } else {
                            if (rr_median <= 21.0) {
                                if (num_peaks <= 80.5) {
                                    votes[39] = 0;
                                } else {
                                    votes[39] = 3;
                                }
                            } else {
                                if (rr_std <= 10.4459867477417) {
                                    votes[39] = 3;
                                } else {
                                    votes[39] = 3;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 87.5) {
                            votes[39] = 2;
                        } else {
                            votes[39] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 47.25) {
                        if (diastolic_time <= 44.5) {
                            votes[39] = 0;
                        } else {
                            votes[39] = 3;
                        }
                    } else {
                        if (rr_std <= 8.04945421218872) {
                            if (diastolic_time <= 73.25) {
                                if (num_peaks <= 89.5) {
                                    if (num_valleys <= 89.5) {
                                        votes[39] = 0;
                                    } else {
                                        votes[39] = 0;
                                    }
                                } else {
                                    votes[39] = 0;
                                }
                            } else {
                                if (diastolic_time <= 83.75) {
                                    votes[39] = 5;
                                } else {
                                    votes[39] = 2;
                                }
                            }
                        } else {
                            if (diastolic_time <= 81.25) {
                                if (diastolic_time <= 69.75) {
                                    if (rr_std <= 16.257240295410156) {
                                        if (rr_std <= 12.8479642868042) {
                                            votes[39] = 0;
                                        } else {
                                            votes[39] = 0;
                                        }
                                    } else {
                                        votes[39] = 3;
                                    }
                                } else {
                                    votes[39] = 4;
                                }
                            } else {
                                votes[39] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 118.0) {
                if (diastolic_time <= 49.5) {
                    if (rr_std <= 0.7467912435531616) {
                        votes[39] = 5;
                    } else {
                        if (rr_median <= 104.5) {
                            votes[39] = 1;
                        } else {
                            if (rr_median <= 143.25) {
                                votes[39] = 1;
                            } else {
                                votes[39] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 70.0) {
                        if (diastolic_time <= 97.25) {
                            if (rr_std <= 31.808202743530273) {
                                votes[39] = 1;
                            } else {
                                if (rr_median <= 140.5) {
                                    votes[39] = 4;
                                } else {
                                    votes[39] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 12.189626216888428) {
                                votes[39] = 2;
                            } else {
                                votes[39] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 81.5) {
                            if (num_valleys <= 89.5) {
                                votes[39] = 5;
                            } else {
                                votes[39] = 0;
                            }
                        } else {
                            if (rr_std <= 9.689188957214355) {
                                votes[39] = 1;
                            } else {
                                if (num_peaks <= 87.5) {
                                    votes[39] = 1;
                                } else {
                                    if (diastolic_time <= 81.5) {
                                        votes[39] = 0;
                                    } else {
                                        votes[39] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 129.5) {
                    if (num_peaks <= 53.5) {
                        votes[39] = 2;
                    } else {
                        votes[39] = 1;
                    }
                } else {
                    if (num_peaks <= 52.5) {
                        votes[39] = 1;
                    } else {
                        votes[39] = 1;
                    }
                }
            }
        }
    }
// Decision rules for tree 40
    if (rr_median <= 129.5) {
        if (num_peaks <= 76.5) {
            if (num_valleys <= 84.5) {
                if (rr_median <= 66.0) {
                    if (rr_median <= 43.5) {
                        if (diastolic_time <= 50.0) {
                            votes[40] = 4;
                        } else {
                            if (num_peaks <= 44.5) {
                                votes[40] = 5;
                            } else {
                                votes[40] = 5;
                            }
                        }
                    } else {
                        votes[40] = 3;
                    }
                } else {
                    if (rr_median <= 77.0) {
                        if (rr_std <= 0.7192845046520233) {
                            if (num_valleys <= 73.0) {
                                votes[40] = 2;
                            } else {
                                votes[40] = 2;
                            }
                        } else {
                            votes[40] = 5;
                        }
                    } else {
                        votes[40] = 5;
                    }
                }
            } else {
                if (rr_median <= 118.5) {
                    if (diastolic_time <= 78.5) {
                        if (rr_median <= 52.25) {
                            if (diastolic_time <= 42.5) {
                                if (num_valleys <= 90.5) {
                                    if (num_peaks <= 50.5) {
                                        votes[40] = 4;
                                    } else {
                                        if (num_peaks <= 60.5) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 4;
                                        }
                                    }
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                if (num_peaks <= 43.5) {
                                    if (diastolic_time <= 55.5) {
                                        votes[40] = 5;
                                    } else {
                                        votes[40] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 55.25) {
                                        if (num_peaks <= 63.5) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 63.5) {
                                            votes[40] = 2;
                                        } else {
                                            votes[40] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 86.5) {
                                if (rr_std <= 4.55538535118103) {
                                    if (rr_std <= 0.65611332654953) {
                                        votes[40] = 2;
                                    } else {
                                        votes[40] = 5;
                                    }
                                } else {
                                    if (rr_std <= 9.626641273498535) {
                                        votes[40] = 3;
                                    } else {
                                        if (diastolic_time <= 51.25) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 51.75) {
                                    if (rr_median <= 103.5) {
                                        votes[40] = 0;
                                    } else {
                                        votes[40] = 1;
                                    }
                                } else {
                                    votes[40] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.316328048706055) {
                            if (diastolic_time <= 106.25) {
                                if (rr_std <= 4.2942750453948975) {
                                    votes[40] = 5;
                                } else {
                                    votes[40] = 5;
                                }
                            } else {
                                if (diastolic_time <= 235.5) {
                                    votes[40] = 1;
                                } else {
                                    votes[40] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 102.25) {
                                if (rr_std <= 33.02914237976074) {
                                    if (rr_median <= 88.5) {
                                        if (diastolic_time <= 87.25) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 4;
                                        }
                                    } else {
                                        votes[40] = 5;
                                    }
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                if (num_peaks <= 50.5) {
                                    votes[40] = 1;
                                } else {
                                    votes[40] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 53.5) {
                        if (rr_median <= 121.0) {
                            votes[40] = 2;
                        } else {
                            votes[40] = 2;
                        }
                    } else {
                        votes[40] = 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 52.5) {
                if (rr_median <= 84.5) {
                    if (rr_std <= 0.2465033233165741) {
                        if (diastolic_time <= 35.75) {
                            if (diastolic_time <= 28.75) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 3;
                            }
                        } else {
                            votes[40] = 0;
                        }
                    } else {
                        if (rr_median <= 64.75) {
                            votes[40] = 3;
                        } else {
                            if (rr_std <= 6.904221415519714) {
                                if (num_peaks <= 84.5) {
                                    votes[40] = 5;
                                } else {
                                    votes[40] = 3;
                                }
                            } else {
                                votes[40] = 0;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 89.5) {
                        if (rr_std <= 13.940206050872803) {
                            votes[40] = 5;
                        } else {
                            votes[40] = 5;
                        }
                    } else {
                        votes[40] = 1;
                    }
                }
            } else {
                if (rr_std <= 5.430570602416992) {
                    if (rr_median <= 52.25) {
                        if (num_peaks <= 82.5) {
                            votes[40] = 3;
                        } else {
                            if (num_peaks <= 89.0) {
                                if (num_valleys <= 89.5) {
                                    votes[40] = 0;
                                } else {
                                    votes[40] = 0;
                                }
                            } else {
                                votes[40] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 99.5) {
                            if (num_valleys <= 86.5) {
                                votes[40] = 2;
                            } else {
                                if (rr_std <= 1.1018478274345398) {
                                    votes[40] = 5;
                                } else {
                                    votes[40] = 3;
                                }
                            }
                        } else {
                            if (diastolic_time <= 101.0) {
                                votes[40] = 1;
                            } else {
                                votes[40] = 2;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 88.5) {
                        if (num_valleys <= 88.5) {
                            if (diastolic_time <= 63.0) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 5;
                            }
                        } else {
                            if (rr_median <= 67.5) {
                                if (num_peaks <= 84.5) {
                                    votes[40] = 3;
                                } else {
                                    votes[40] = 0;
                                }
                            } else {
                                if (rr_median <= 107.25) {
                                    if (rr_median <= 83.25) {
                                        if (num_peaks <= 86.5) {
                                            votes[40] = 0;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 84.0) {
                                            votes[40] = 0;
                                        } else {
                                            votes[40] = 0;
                                        }
                                    }
                                } else {
                                    votes[40] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 34.400482177734375) {
                            if (rr_std <= 10.566298961639404) {
                                votes[40] = 0;
                            } else {
                                if (diastolic_time <= 63.5) {
                                    votes[40] = 0;
                                } else {
                                    if (diastolic_time <= 67.25) {
                                        votes[40] = 0;
                                    } else {
                                        votes[40] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[40] = 0;
                        }
                    }
                }
            }
        }
    } else {
        if (rr_median <= 349.5) {
            if (rr_std <= 62.98552131652832) {
                if (num_valleys <= 93.5) {
                    if (rr_median <= 132.25) {
                        votes[40] = 1;
                    } else {
                        if (num_peaks <= 87.5) {
                            if (rr_std <= 2.2824419736862183) {
                                if (rr_median <= 185.0) {
                                    votes[40] = 1;
                                } else {
                                    votes[40] = 1;
                                }
                            } else {
                                votes[40] = 1;
                            }
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
        } else {
            votes[40] = 0;
        }
    }
// Decision rules for tree 41
    if (num_peaks <= 74.5) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 66.0) {
                if (rr_median <= 25.25) {
                    if (diastolic_time <= 67.75) {
                        votes[41] = 5;
                    } else {
                        votes[41] = 5;
                    }
                } else {
                    votes[41] = 3;
                }
            } else {
                if (rr_std <= 0.7192845046520233) {
                    if (rr_std <= 0.4740213602781296) {
                        if (rr_std <= 0.43653950095176697) {
                            if (diastolic_time <= 72.75) {
                                votes[41] = 2;
                            } else {
                                votes[41] = 2;
                            }
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        if (num_peaks <= 57.5) {
                            votes[41] = 2;
                        } else {
                            if (rr_std <= 0.583409309387207) {
                                votes[41] = 2;
                            } else {
                                votes[41] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 79.0) {
                        votes[41] = 5;
                    } else {
                        votes[41] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 104.75) {
                if (diastolic_time <= 105.25) {
                    if (diastolic_time <= 74.75) {
                        if (diastolic_time <= 37.5) {
                            if (rr_median <= 51.75) {
                                if (num_peaks <= 60.5) {
                                    if (diastolic_time <= 36.5) {
                                        if (num_valleys <= 91.5) {
                                            votes[41] = 4;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    } else {
                                        votes[41] = 4;
                                    }
                                } else {
                                    votes[41] = 5;
                                }
                            } else {
                                votes[41] = 3;
                            }
                        } else {
                            if (diastolic_time <= 55.25) {
                                if (num_peaks <= 41.0) {
                                    if (num_peaks <= 34.5) {
                                        votes[41] = 4;
                                    } else {
                                        votes[41] = 4;
                                    }
                                } else {
                                    if (rr_std <= 8.971539497375488) {
                                        if (rr_median <= 77.75) {
                                            votes[41] = 3;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 65.5) {
                                            votes[41] = 1;
                                        } else {
                                            votes[41] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 4.195827007293701) {
                                    if (diastolic_time <= 63.0) {
                                        if (num_peaks <= 43.0) {
                                            votes[41] = 4;
                                        } else {
                                            votes[41] = 2;
                                        }
                                    } else {
                                        if (num_peaks <= 54.5) {
                                            votes[41] = 0;
                                        } else {
                                            votes[41] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 73.25) {
                                        if (rr_std <= 17.153411865234375) {
                                            votes[41] = 3;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 17.379722595214844) {
                                            votes[41] = 0;
                                        } else {
                                            votes[41] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 13.518269538879395) {
                            if (diastolic_time <= 84.75) {
                                votes[41] = 5;
                            } else {
                                if (num_peaks <= 52.0) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 66.0) {
                                if (rr_median <= 95.0) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 4;
                                }
                            } else {
                                if (num_peaks <= 70.5) {
                                    votes[41] = 4;
                                } else {
                                    votes[41] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 242.0) {
                        if (rr_median <= 80.75) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 1;
                        }
                    } else {
                        votes[41] = 4;
                    }
                }
            } else {
                if (rr_median <= 134.0) {
                    if (rr_median <= 118.0) {
                        if (num_valleys <= 91.5) {
                            if (rr_median <= 110.5) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 1;
                            }
                        } else {
                            votes[41] = 5;
                        }
                    } else {
                        if (diastolic_time <= 84.25) {
                            votes[41] = 1;
                        } else {
                            if (num_peaks <= 54.0) {
                                votes[41] = 2;
                            } else {
                                votes[41] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 1.8944271802902222) {
                        votes[41] = 3;
                    } else {
                        if (num_valleys <= 92.5) {
                            if (rr_std <= 55.91085433959961) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 1;
                            }
                        } else {
                            votes[41] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 84.5) {
            if (rr_median <= 71.5) {
                if (rr_median <= 20.5) {
                    if (diastolic_time <= 34.75) {
                        votes[41] = 3;
                    } else {
                        if (diastolic_time <= 61.75) {
                            votes[41] = 0;
                        } else {
                            votes[41] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 55.25) {
                        if (rr_std <= 20.435928344726562) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 3;
                        }
                    } else {
                        if (rr_median <= 59.0) {
                            votes[41] = 0;
                        } else {
                            if (rr_std <= 12.104323387145996) {
                                votes[41] = 3;
                            } else {
                                votes[41] = 3;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 130.5) {
                    if (rr_std <= 3.6016169786453247) {
                        if (num_peaks <= 82.5) {
                            if (diastolic_time <= 71.75) {
                                votes[41] = 5;
                            } else {
                                if (num_valleys <= 84.5) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 2;
                                }
                            }
                        } else {
                            votes[41] = 5;
                        }
                    } else {
                        if (rr_median <= 100.5) {
                            if (diastolic_time <= 61.75) {
                                votes[41] = 3;
                            } else {
                                if (rr_std <= 16.785705089569092) {
                                    votes[41] = 0;
                                } else {
                                    if (rr_std <= 28.642945289611816) {
                                        votes[41] = 4;
                                    } else {
                                        votes[41] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[41] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 194.25) {
                        votes[41] = 1;
                    } else {
                        votes[41] = 2;
                    }
                }
            }
        } else {
            if (diastolic_time <= 54.75) {
                if (rr_median <= 105.0) {
                    if (rr_median <= 26.0) {
                        votes[41] = 2;
                    } else {
                        if (rr_median <= 57.25) {
                            votes[41] = 3;
                        } else {
                            if (diastolic_time <= 46.25) {
                                if (num_peaks <= 87.5) {
                                    votes[41] = 3;
                                } else {
                                    votes[41] = 3;
                                }
                            } else {
                                if (rr_std <= 8.660752296447754) {
                                    votes[41] = 1;
                                } else {
                                    votes[41] = 0;
                                }
                            }
                        }
                    }
                } else {
                    votes[41] = 1;
                }
            } else {
                if (rr_std <= 4.7264368534088135) {
                    if (rr_median <= 100.0) {
                        if (rr_median <= 30.5) {
                            if (num_peaks <= 88.5) {
                                votes[41] = 0;
                            } else {
                                votes[41] = 0;
                            }
                        } else {
                            if (rr_median <= 84.5) {
                                votes[41] = 5;
                            } else {
                                votes[41] = 2;
                            }
                        }
                    } else {
                        votes[41] = 1;
                    }
                } else {
                    if (num_valleys <= 86.5) {
                        votes[41] = 1;
                    } else {
                        if (num_peaks <= 87.5) {
                            if (rr_std <= 20.023677825927734) {
                                votes[41] = 0;
                            } else {
                                votes[41] = 1;
                            }
                        } else {
                            if (rr_std <= 29.730782508850098) {
                                votes[41] = 0;
                            } else {
                                if (diastolic_time <= 84.25) {
                                    votes[41] = 0;
                                } else {
                                    votes[41] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 42
    if (num_valleys <= 81.5) {
        if (rr_median <= 75.0) {
            if (rr_median <= 64.0) {
                if (num_peaks <= 59.5) {
                    votes[42] = 5;
                } else {
                    votes[42] = 3;
                }
            } else {
                if (num_peaks <= 65.5) {
                    if (num_peaks <= 53.5) {
                        votes[42] = 2;
                    } else {
                        if (diastolic_time <= 70.25) {
                            votes[42] = 2;
                        } else {
                            votes[42] = 2;
                        }
                    }
                } else {
                    votes[42] = 2;
                }
            }
        } else {
            if (rr_std <= 0.616227775812149) {
                votes[42] = 5;
            } else {
                votes[42] = 3;
            }
        }
    } else {
        if (rr_median <= 126.5) {
            if (num_peaks <= 73.5) {
                if (diastolic_time <= 326.0) {
                    if (diastolic_time <= 102.25) {
                        if (diastolic_time <= 37.75) {
                            if (rr_median <= 61.25) {
                                if (num_peaks <= 60.5) {
                                    if (num_peaks <= 31.5) {
                                        votes[42] = 4;
                                    } else {
                                        votes[42] = 4;
                                    }
                                } else {
                                    votes[42] = 5;
                                }
                            } else {
                                votes[42] = 1;
                            }
                        } else {
                            if (rr_std <= 16.26357078552246) {
                                if (num_peaks <= 41.5) {
                                    if (diastolic_time <= 75.0) {
                                        if (diastolic_time <= 54.75) {
                                            votes[42] = 5;
                                        } else {
                                            votes[42] = 4;
                                        }
                                    } else {
                                        votes[42] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 52.5) {
                                        if (diastolic_time <= 53.0) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 2;
                                        }
                                    } else {
                                        if (rr_std <= 9.511858463287354) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 65.5) {
                                    if (rr_median <= 85.0) {
                                        if (diastolic_time <= 54.25) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    } else {
                                        votes[42] = 1;
                                    }
                                } else {
                                    if (rr_std <= 19.992870330810547) {
                                        votes[42] = 4;
                                    } else {
                                        if (num_peaks <= 66.0) {
                                            votes[42] = 4;
                                        } else {
                                            votes[42] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 115.5) {
                            if (num_peaks <= 53.5) {
                                if (num_valleys <= 89.5) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 1;
                                }
                            } else {
                                votes[42] = 1;
                            }
                        } else {
                            if (rr_std <= 6.673295736312866) {
                                votes[42] = 2;
                            } else {
                                votes[42] = 2;
                            }
                        }
                    }
                } else {
                    votes[42] = 4;
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 75.0) {
                        if (rr_std <= 0.8443530201911926) {
                            if (diastolic_time <= 35.25) {
                                votes[42] = 3;
                            } else {
                                if (diastolic_time <= 62.0) {
                                    votes[42] = 0;
                                } else {
                                    votes[42] = 0;
                                }
                            }
                        } else {
                            if (rr_median <= 67.25) {
                                if (num_peaks <= 76.5) {
                                    if (num_valleys <= 90.0) {
                                        votes[42] = 3;
                                    } else {
                                        votes[42] = 3;
                                    }
                                } else {
                                    if (rr_median <= 57.5) {
                                        votes[42] = 3;
                                    } else {
                                        votes[42] = 3;
                                    }
                                }
                            } else {
                                if (num_valleys <= 88.5) {
                                    votes[42] = 3;
                                } else {
                                    votes[42] = 0;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 83.5) {
                            if (num_valleys <= 90.5) {
                                if (diastolic_time <= 73.0) {
                                    if (rr_std <= 14.934030532836914) {
                                        votes[42] = 5;
                                    } else {
                                        votes[42] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 78.5) {
                                        votes[42] = 5;
                                    } else {
                                        votes[42] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 77.5) {
                                    votes[42] = 0;
                                } else {
                                    votes[42] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 95.75) {
                                votes[42] = 3;
                            } else {
                                votes[42] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 54.75) {
                        if (num_peaks <= 91.5) {
                            if (diastolic_time <= 46.25) {
                                if (rr_median <= 67.5) {
                                    votes[42] = 3;
                                } else {
                                    votes[42] = 3;
                                }
                            } else {
                                if (rr_std <= 17.041767120361328) {
                                    if (rr_std <= 8.660752296447754) {
                                        votes[42] = 3;
                                    } else {
                                        votes[42] = 0;
                                    }
                                } else {
                                    votes[42] = 3;
                                }
                            }
                        } else {
                            votes[42] = 2;
                        }
                    } else {
                        if (rr_median <= 104.5) {
                            if (rr_std <= 8.621502876281738) {
                                if (rr_median <= 58.5) {
                                    if (num_peaks <= 88.5) {
                                        votes[42] = 0;
                                    } else {
                                        if (diastolic_time <= 76.0) {
                                            votes[42] = 0;
                                        } else {
                                            votes[42] = 0;
                                        }
                                    }
                                } else {
                                    votes[42] = 5;
                                }
                            } else {
                                if (num_peaks <= 87.5) {
                                    votes[42] = 0;
                                } else {
                                    if (rr_std <= 29.730782508850098) {
                                        if (diastolic_time <= 67.25) {
                                            votes[42] = 0;
                                        } else {
                                            votes[42] = 0;
                                        }
                                    } else {
                                        votes[42] = 0;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 89.5) {
                                votes[42] = 1;
                            } else {
                                votes[42] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 39.327857971191406) {
                if (rr_median <= 246.75) {
                    if (rr_median <= 138.75) {
                        if (num_peaks <= 80.5) {
                            if (rr_std <= 4.932621002197266) {
                                votes[42] = 2;
                            } else {
                                votes[42] = 1;
                            }
                        } else {
                            votes[42] = 1;
                        }
                    } else {
                        if (num_valleys <= 92.5) {
                            votes[42] = 1;
                        } else {
                            votes[42] = 1;
                        }
                    }
                } else {
                    votes[42] = 1;
                }
            } else {
                if (diastolic_time <= 56.0) {
                    if (diastolic_time <= 47.5) {
                        votes[42] = 1;
                    } else {
                        votes[42] = 1;
                    }
                } else {
                    if (num_peaks <= 76.0) {
                        if (rr_std <= 49.406089782714844) {
                            votes[42] = 1;
                        } else {
                            votes[42] = 3;
                        }
                    } else {
                        votes[42] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 43
    if (rr_median <= 126.5) {
        if (num_peaks <= 73.5) {
            if (num_valleys <= 84.5) {
                if (rr_median <= 66.0) {
                    if (rr_median <= 47.0) {
                        if (diastolic_time <= 48.5) {
                            votes[43] = 2;
                        } else {
                            if (num_valleys <= 82.5) {
                                votes[43] = 5;
                            } else {
                                votes[43] = 4;
                            }
                        }
                    } else {
                        votes[43] = 3;
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (rr_median <= 73.5) {
                            if (rr_median <= 69.5) {
                                if (rr_std <= 0.581251710653305) {
                                    votes[43] = 2;
                                } else {
                                    votes[43] = 2;
                                }
                            } else {
                                votes[43] = 2;
                            }
                        } else {
                            votes[43] = 2;
                        }
                    } else {
                        if (rr_std <= 0.9357241690158844) {
                            votes[43] = 5;
                        } else {
                            votes[43] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 118.5) {
                    if (diastolic_time <= 105.25) {
                        if (diastolic_time <= 37.75) {
                            if (rr_median <= 61.25) {
                                if (num_peaks <= 58.5) {
                                    if (num_peaks <= 40.0) {
                                        votes[43] = 4;
                                    } else {
                                        votes[43] = 4;
                                    }
                                } else {
                                    votes[43] = 4;
                                }
                            } else {
                                if (num_peaks <= 62.0) {
                                    votes[43] = 1;
                                } else {
                                    votes[43] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 16.26704502105713) {
                                if (diastolic_time <= 89.5) {
                                    if (num_peaks <= 43.5) {
                                        if (num_valleys <= 87.5) {
                                            votes[43] = 5;
                                        } else {
                                            votes[43] = 4;
                                        }
                                    } else {
                                        if (num_peaks <= 59.5) {
                                            votes[43] = 0;
                                        } else {
                                            votes[43] = 3;
                                        }
                                    }
                                } else {
                                    votes[43] = 5;
                                }
                            } else {
                                if (diastolic_time <= 69.0) {
                                    if (num_peaks <= 67.5) {
                                        if (diastolic_time <= 48.0) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 5;
                                        }
                                    } else {
                                        votes[43] = 0;
                                    }
                                } else {
                                    if (rr_std <= 33.04390525817871) {
                                        if (rr_median <= 88.5) {
                                            votes[43] = 4;
                                        } else {
                                            votes[43] = 5;
                                        }
                                    } else {
                                        votes[43] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 244.5) {
                            if (num_peaks <= 49.5) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 1;
                            }
                        } else {
                            votes[43] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 80.75) {
                        votes[43] = 4;
                    } else {
                        votes[43] = 2;
                    }
                }
            }
        } else {
            if (num_valleys <= 86.5) {
                if (rr_median <= 70.5) {
                    if (diastolic_time <= 67.0) {
                        if (num_peaks <= 89.5) {
                            if (diastolic_time <= 57.5) {
                                votes[43] = 3;
                            } else {
                                votes[43] = 3;
                            }
                        } else {
                            votes[43] = 5;
                        }
                    } else {
                        votes[43] = 2;
                    }
                } else {
                    if (num_peaks <= 85.5) {
                        if (num_valleys <= 85.5) {
                            if (diastolic_time <= 62.0) {
                                votes[43] = 5;
                            } else {
                                votes[43] = 5;
                            }
                        } else {
                            votes[43] = 5;
                        }
                    } else {
                        if (rr_median <= 102.0) {
                            votes[43] = 3;
                        } else {
                            votes[43] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 52.75) {
                    if (rr_median <= 76.75) {
                        if (rr_std <= 20.973054885864258) {
                            if (rr_median <= 59.5) {
                                if (num_valleys <= 89.5) {
                                    if (rr_std <= 1.200490117073059) {
                                        votes[43] = 3;
                                    } else {
                                        votes[43] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 43.0) {
                                        votes[43] = 0;
                                    } else {
                                        if (rr_median <= 54.25) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[43] = 0;
                            }
                        } else {
                            votes[43] = 3;
                        }
                    } else {
                        if (num_peaks <= 89.5) {
                            if (rr_median <= 97.0) {
                                votes[43] = 3;
                            } else {
                                votes[43] = 5;
                            }
                        } else {
                            votes[43] = 0;
                        }
                    }
                } else {
                    if (num_peaks <= 82.5) {
                        if (rr_std <= 17.700875282287598) {
                            if (rr_median <= 72.5) {
                                if (rr_std <= 0.5678778290748596) {
                                    votes[43] = 3;
                                } else {
                                    votes[43] = 3;
                                }
                            } else {
                                if (rr_std <= 6.823763132095337) {
                                    votes[43] = 5;
                                } else {
                                    votes[43] = 0;
                                }
                            }
                        } else {
                            if (rr_median <= 97.0) {
                                if (diastolic_time <= 83.75) {
                                    votes[43] = 4;
                                } else {
                                    votes[43] = 4;
                                }
                            } else {
                                votes[43] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 104.0) {
                            if (rr_std <= 4.512079119682312) {
                                if (rr_std <= 0.1332346796989441) {
                                    if (num_peaks <= 88.5) {
                                        votes[43] = 0;
                                    } else {
                                        votes[43] = 0;
                                    }
                                } else {
                                    votes[43] = 3;
                                }
                            } else {
                                if (diastolic_time <= 61.25) {
                                    if (rr_std <= 11.910998344421387) {
                                        votes[43] = 0;
                                    } else {
                                        votes[43] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 79.5) {
                                        if (diastolic_time <= 71.0) {
                                            votes[43] = 0;
                                        } else {
                                            votes[43] = 0;
                                        }
                                    } else {
                                        votes[43] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[43] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 94.5) {
            if (rr_std <= 66.69050598144531) {
                if (rr_std <= 0.44031527638435364) {
                    votes[43] = 3;
                } else {
                    if (num_peaks <= 87.5) {
                        if (rr_median <= 134.25) {
                            if (diastolic_time <= 117.75) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 1;
                            }
                        } else {
                            if (num_valleys <= 91.5) {
                                votes[43] = 1;
                            } else {
                                if (num_peaks <= 57.5) {
                                    votes[43] = 1;
                                } else {
                                    votes[43] = 1;
                                }
                            }
                        }
                    } else {
                        votes[43] = 1;
                    }
                }
            } else {
                votes[43] = 0;
            }
        } else {
            votes[43] = 4;
        }
    }
// Decision rules for tree 44
    if (rr_median <= 129.5) {
        if (num_peaks <= 73.5) {
            if (num_valleys <= 84.5) {
                if (rr_std <= 0.1332346796989441) {
                    if (num_valleys <= 78.5) {
                        votes[44] = 5;
                    } else {
                        votes[44] = 4;
                    }
                } else {
                    if (rr_std <= 0.730697900056839) {
                        if (diastolic_time <= 70.5) {
                            if (num_valleys <= 79.5) {
                                if (rr_std <= 0.4740213602781296) {
                                    votes[44] = 2;
                                } else {
                                    votes[44] = 2;
                                }
                            } else {
                                votes[44] = 2;
                            }
                        } else {
                            if (rr_std <= 0.3910631388425827) {
                                votes[44] = 2;
                            } else {
                                votes[44] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 1.1683152914047241) {
                            votes[44] = 1;
                        } else {
                            votes[44] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 119.25) {
                    if (diastolic_time <= 105.25) {
                        if (rr_std <= 18.82496166229248) {
                            if (diastolic_time <= 37.75) {
                                if (rr_median <= 48.5) {
                                    if (num_peaks <= 60.5) {
                                        if (num_peaks <= 41.0) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    } else {
                                        votes[44] = 5;
                                    }
                                } else {
                                    votes[44] = 1;
                                }
                            } else {
                                if (diastolic_time <= 82.5) {
                                    if (rr_std <= 9.058522701263428) {
                                        if (num_peaks <= 34.5) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 3;
                                        }
                                    } else {
                                        if (diastolic_time <= 61.5) {
                                            votes[44] = 0;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 5.684980630874634) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 5;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                if (num_peaks <= 50.5) {
                                    votes[44] = 4;
                                } else {
                                    if (rr_median <= 73.5) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 24.55654811859131) {
                                    if (rr_std <= 21.477364540100098) {
                                        votes[44] = 4;
                                    } else {
                                        votes[44] = 4;
                                    }
                                } else {
                                    if (rr_median <= 98.5) {
                                        votes[44] = 4;
                                    } else {
                                        votes[44] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 244.5) {
                            if (num_peaks <= 56.5) {
                                votes[44] = 1;
                            } else {
                                votes[44] = 1;
                            }
                        } else {
                            votes[44] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 10.06716775894165) {
                        if (rr_median <= 124.75) {
                            votes[44] = 2;
                        } else {
                            votes[44] = 2;
                        }
                    } else {
                        votes[44] = 2;
                    }
                }
            }
        } else {
            if (diastolic_time <= 52.75) {
                if (rr_median <= 78.5) {
                    if (rr_std <= 1.140178233385086) {
                        if (diastolic_time <= 35.75) {
                            if (diastolic_time <= 31.5) {
                                votes[44] = 3;
                            } else {
                                votes[44] = 3;
                            }
                        } else {
                            if (num_valleys <= 89.5) {
                                votes[44] = 3;
                            } else {
                                if (num_peaks <= 86.5) {
                                    votes[44] = 0;
                                } else {
                                    votes[44] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 59.5) {
                            if (num_peaks <= 76.0) {
                                votes[44] = 3;
                            } else {
                                votes[44] = 3;
                            }
                        } else {
                            if (rr_median <= 69.25) {
                                votes[44] = 0;
                            } else {
                                votes[44] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 81.5) {
                        votes[44] = 5;
                    } else {
                        if (rr_median <= 105.0) {
                            if (rr_std <= 1.6747449040412903) {
                                votes[44] = 3;
                            } else {
                                votes[44] = 3;
                            }
                        } else {
                            votes[44] = 2;
                        }
                    }
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 105.5) {
                        if (rr_std <= 5.58794379234314) {
                            if (diastolic_time <= 76.25) {
                                if (rr_std <= 0.5851237177848816) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 3;
                                }
                            } else {
                                votes[44] = 5;
                            }
                        } else {
                            if (rr_std <= 16.36668109893799) {
                                if (diastolic_time <= 79.0) {
                                    votes[44] = 0;
                                } else {
                                    votes[44] = 0;
                                }
                            } else {
                                if (diastolic_time <= 71.5) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 4;
                                }
                            }
                        }
                    } else {
                        votes[44] = 1;
                    }
                } else {
                    if (rr_median <= 97.75) {
                        if (num_valleys <= 86.5) {
                            votes[44] = 1;
                        } else {
                            if (rr_std <= 10.554501056671143) {
                                if (diastolic_time <= 76.75) {
                                    if (rr_std <= 6.891809701919556) {
                                        if (num_peaks <= 87.5) {
                                            votes[44] = 0;
                                        } else {
                                            votes[44] = 0;
                                        }
                                    } else {
                                        votes[44] = 0;
                                    }
                                } else {
                                    votes[44] = 3;
                                }
                            } else {
                                if (num_peaks <= 87.5) {
                                    votes[44] = 0;
                                } else {
                                    if (num_valleys <= 90.5) {
                                        if (rr_std <= 26.799355506896973) {
                                            votes[44] = 0;
                                        } else {
                                            votes[44] = 0;
                                        }
                                    } else {
                                        votes[44] = 0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 4.23868989944458) {
                            votes[44] = 2;
                        } else {
                            if (diastolic_time <= 81.5) {
                                votes[44] = 1;
                            } else {
                                if (rr_median <= 111.25) {
                                    votes[44] = 0;
                                } else {
                                    votes[44] = 3;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 91.5) {
            if (rr_std <= 44.48172378540039) {
                if (rr_std <= 1.5634763836860657) {
                    votes[44] = 1;
                } else {
                    if (num_peaks <= 52.5) {
                        votes[44] = 1;
                    } else {
                        votes[44] = 1;
                    }
                }
            } else {
                if (num_valleys <= 89.5) {
                    votes[44] = 1;
                } else {
                    votes[44] = 4;
                }
            }
        } else {
            if (num_peaks <= 83.0) {
                if (diastolic_time <= 64.75) {
                    if (num_peaks <= 60.0) {
                        votes[44] = 1;
                    } else {
                        votes[44] = 1;
                    }
                } else {
                    votes[44] = 4;
                }
            } else {
                votes[44] = 0;
            }
        }
    }
// Decision rules for tree 45
    if (num_valleys <= 81.5) {
        if (rr_median <= 64.0) {
            if (diastolic_time <= 59.0) {
                votes[45] = 5;
            } else {
                votes[45] = 3;
            }
        } else {
            if (num_peaks <= 79.5) {
                if (rr_median <= 79.0) {
                    if (num_valleys <= 80.5) {
                        if (rr_median <= 67.5) {
                            votes[45] = 2;
                        } else {
                            if (num_valleys <= 79.0) {
                                votes[45] = 2;
                            } else {
                                votes[45] = 2;
                            }
                        }
                    } else {
                        votes[45] = 2;
                    }
                } else {
                    votes[45] = 5;
                }
            } else {
                votes[45] = 5;
            }
        }
    } else {
        if (rr_median <= 128.75) {
            if (num_peaks <= 69.5) {
                if (diastolic_time <= 244.5) {
                    if (diastolic_time <= 116.5) {
                        if (diastolic_time <= 37.75) {
                            if (rr_median <= 61.5) {
                                if (num_peaks <= 58.5) {
                                    if (num_peaks <= 40.0) {
                                        votes[45] = 4;
                                    } else {
                                        votes[45] = 4;
                                    }
                                } else {
                                    votes[45] = 4;
                                }
                            } else {
                                if (rr_median <= 100.5) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 15.492769241333008) {
                                if (rr_std <= 9.325357437133789) {
                                    if (num_peaks <= 41.0) {
                                        if (diastolic_time <= 70.0) {
                                            votes[45] = 4;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 50.5) {
                                            votes[45] = 2;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 67.75) {
                                        votes[45] = 1;
                                    } else {
                                        if (diastolic_time <= 60.25) {
                                            votes[45] = 0;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 79.25) {
                                    if (rr_median <= 111.5) {
                                        if (diastolic_time <= 60.5) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    } else {
                                        votes[45] = 4;
                                    }
                                } else {
                                    if (rr_std <= 29.90772247314453) {
                                        if (num_peaks <= 66.0) {
                                            votes[45] = 1;
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
                        if (rr_median <= 113.75) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 2;
                        }
                    }
                } else {
                    votes[45] = 4;
                }
            } else {
                if (rr_median <= 72.5) {
                    if (rr_std <= 0.5154271870851517) {
                        if (diastolic_time <= 37.5) {
                            votes[45] = 2;
                        } else {
                            if (num_peaks <= 76.0) {
                                votes[45] = 5;
                            } else {
                                if (num_peaks <= 88.5) {
                                    if (num_valleys <= 89.5) {
                                        if (num_peaks <= 84.5) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 0;
                                        }
                                    } else {
                                        if (num_valleys <= 91.5) {
                                            votes[45] = 0;
                                        } else {
                                            votes[45] = 0;
                                        }
                                    }
                                } else {
                                    votes[45] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 59.5) {
                            if (num_valleys <= 91.5) {
                                if (num_peaks <= 75.5) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 3;
                                }
                            } else {
                                if (rr_std <= 14.47638988494873) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 0;
                                }
                            }
                        } else {
                            if (rr_std <= 8.457870483398438) {
                                if (num_peaks <= 78.5) {
                                    votes[45] = 3;
                                } else {
                                    if (num_valleys <= 86.5) {
                                        votes[45] = 3;
                                    } else {
                                        votes[45] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 28.848135948181152) {
                                    if (diastolic_time <= 71.0) {
                                        if (diastolic_time <= 54.5) {
                                            votes[45] = 0;
                                        } else {
                                            votes[45] = 0;
                                        }
                                    } else {
                                        votes[45] = 4;
                                    }
                                } else {
                                    votes[45] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.676711082458496) {
                        if (num_peaks <= 83.5) {
                            if (diastolic_time <= 82.5) {
                                if (diastolic_time <= 52.0) {
                                    votes[45] = 5;
                                } else {
                                    votes[45] = 1;
                                }
                            } else {
                                if (diastolic_time <= 99.5) {
                                    votes[45] = 5;
                                } else {
                                    votes[45] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 99.25) {
                                if (rr_median <= 81.0) {
                                    votes[45] = 5;
                                } else {
                                    if (rr_std <= 2.030620038509369) {
                                        votes[45] = 2;
                                    } else {
                                        votes[45] = 3;
                                    }
                                }
                            } else {
                                votes[45] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 101.75) {
                            if (num_peaks <= 75.5) {
                                if (diastolic_time <= 76.75) {
                                    votes[45] = 0;
                                } else {
                                    votes[45] = 4;
                                }
                            } else {
                                if (diastolic_time <= 62.5) {
                                    if (rr_std <= 15.773964405059814) {
                                        votes[45] = 0;
                                    } else {
                                        votes[45] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 79.75) {
                                        if (diastolic_time <= 72.5) {
                                            votes[45] = 0;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 82.0) {
                                            votes[45] = 0;
                                        } else {
                                            votes[45] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 85.5) {
                                if (rr_std <= 33.57055854797363) {
                                    votes[45] = 5;
                                } else {
                                    votes[45] = 5;
                                }
                            } else {
                                if (rr_std <= 48.953134536743164) {
                                    votes[45] = 0;
                                } else {
                                    votes[45] = 1;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 60.51064872741699) {
                if (rr_median <= 349.5) {
                    if (num_valleys <= 90.5) {
                        if (num_peaks <= 50.5) {
                            votes[45] = 1;
                        } else {
                            if (rr_median <= 190.5) {
                                votes[45] = 1;
                            } else {
                                votes[45] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 77.5) {
                            if (diastolic_time <= 47.5) {
                                votes[45] = 1;
                            } else {
                                votes[45] = 1;
                            }
                        } else {
                            votes[45] = 0;
                        }
                    }
                } else {
                    votes[45] = 0;
                }
            } else {
                if (num_peaks <= 84.5) {
                    votes[45] = 3;
                } else {
                    votes[45] = 0;
                }
            }
        }
    }
// Decision rules for tree 46
    if (rr_median <= 129.5) {
        if (num_valleys <= 81.5) {
            if (rr_median <= 78.5) {
                if (rr_median <= 64.0) {
                    votes[46] = 3;
                } else {
                    if (num_peaks <= 71.5) {
                        if (diastolic_time <= 67.5) {
                            if (diastolic_time <= 63.0) {
                                if (rr_median <= 71.5) {
                                    votes[46] = 2;
                                } else {
                                    votes[46] = 2;
                                }
                            } else {
                                votes[46] = 2;
                            }
                        } else {
                            votes[46] = 2;
                        }
                    } else {
                        votes[46] = 2;
                    }
                }
            } else {
                votes[46] = 1;
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 109.25) {
                    if (rr_std <= 31.99049663543701) {
                        if (num_peaks <= 41.5) {
                            if (diastolic_time <= 39.25) {
                                if (num_valleys <= 89.5) {
                                    votes[46] = 4;
                                } else {
                                    votes[46] = 4;
                                }
                            } else {
                                if (num_peaks <= 24.5) {
                                    votes[46] = 4;
                                } else {
                                    if (num_valleys <= 88.5) {
                                        votes[46] = 5;
                                    } else {
                                        votes[46] = 4;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 49.5) {
                                if (diastolic_time <= 56.5) {
                                    if (diastolic_time <= 27.5) {
                                        votes[46] = 4;
                                    } else {
                                        votes[46] = 3;
                                    }
                                } else {
                                    if (rr_std <= 0.7396831214427948) {
                                        if (num_valleys <= 88.5) {
                                            votes[46] = 2;
                                        } else {
                                            votes[46] = 2;
                                        }
                                    } else {
                                        if (diastolic_time <= 91.5) {
                                            votes[46] = 1;
                                        } else {
                                            votes[46] = 2;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 8.531444549560547) {
                                    if (diastolic_time <= 83.0) {
                                        if (diastolic_time <= 55.25) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 2;
                                        }
                                    } else {
                                        if (rr_median <= 88.0) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 76.75) {
                                        if (rr_median <= 65.75) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 0;
                                        }
                                    } else {
                                        if (rr_median <= 84.0) {
                                            votes[46] = 4;
                                        } else {
                                            votes[46] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 50.75) {
                            if (rr_std <= 43.06571960449219) {
                                votes[46] = 1;
                            } else {
                                votes[46] = 3;
                            }
                        } else {
                            if (diastolic_time <= 97.75) {
                                votes[46] = 4;
                            } else {
                                votes[46] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 244.5) {
                        if (rr_median <= 118.25) {
                            votes[46] = 1;
                        } else {
                            votes[46] = 2;
                        }
                    } else {
                        votes[46] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 56.75) {
                    if (rr_median <= 72.5) {
                        if (rr_median <= 20.5) {
                            if (diastolic_time <= 36.5) {
                                votes[46] = 3;
                            } else {
                                votes[46] = 0;
                            }
                        } else {
                            if (rr_median <= 55.25) {
                                votes[46] = 3;
                            } else {
                                if (diastolic_time <= 43.25) {
                                    if (rr_std <= 10.674061298370361) {
                                        votes[46] = 3;
                                    } else {
                                        votes[46] = 3;
                                    }
                                } else {
                                    if (rr_median <= 59.5) {
                                        votes[46] = 3;
                                    } else {
                                        votes[46] = 0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 82.5) {
                            if (rr_std <= 7.380971193313599) {
                                votes[46] = 5;
                            } else {
                                votes[46] = 5;
                            }
                        } else {
                            if (rr_median <= 95.5) {
                                votes[46] = 5;
                            } else {
                                if (rr_std <= 5.170245051383972) {
                                    votes[46] = 1;
                                } else {
                                    votes[46] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 82.5) {
                        if (rr_median <= 61.5) {
                            if (num_peaks <= 78.5) {
                                votes[46] = 3;
                            } else {
                                votes[46] = 0;
                            }
                        } else {
                            if (rr_std <= 7.764881372451782) {
                                votes[46] = 5;
                            } else {
                                if (rr_median <= 94.5) {
                                    if (rr_std <= 13.559620380401611) {
                                        votes[46] = 0;
                                    } else {
                                        votes[46] = 0;
                                    }
                                } else {
                                    votes[46] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 8.81070613861084) {
                            if (rr_median <= 30.5) {
                                if (diastolic_time <= 75.0) {
                                    if (diastolic_time <= 62.75) {
                                        votes[46] = 0;
                                    } else {
                                        votes[46] = 0;
                                    }
                                } else {
                                    votes[46] = 0;
                                }
                            } else {
                                if (rr_median <= 82.5) {
                                    votes[46] = 5;
                                } else {
                                    if (rr_median <= 100.0) {
                                        votes[46] = 2;
                                    } else {
                                        votes[46] = 1;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 86.5) {
                                votes[46] = 1;
                            } else {
                                if (rr_std <= 19.100642204284668) {
                                    if (num_valleys <= 87.5) {
                                        votes[46] = 0;
                                    } else {
                                        votes[46] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 87.5) {
                                        votes[46] = 0;
                                    } else {
                                        if (num_peaks <= 90.0) {
                                            votes[46] = 0;
                                        } else {
                                            votes[46] = 0;
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
        if (rr_std <= 67.05539321899414) {
            if (rr_std <= 0.5335937142372131) {
                votes[46] = 1;
            } else {
                if (num_valleys <= 93.5) {
                    if (diastolic_time <= 34.25) {
                        votes[46] = 1;
                    } else {
                        if (num_peaks <= 85.5) {
                            if (rr_std <= 44.48172378540039) {
                                votes[46] = 1;
                            } else {
                                votes[46] = 1;
                            }
                        } else {
                            votes[46] = 1;
                        }
                    }
                } else {
                    votes[46] = 1;
                }
            }
        } else {
            votes[46] = 0;
        }
    }
// Decision rules for tree 47
    if (rr_median <= 103.25) {
        if (num_valleys <= 84.5) {
            if (diastolic_time <= 75.75) {
                if (rr_std <= 0.6868122220039368) {
                    if (rr_median <= 66.0) {
                        if (diastolic_time <= 36.0) {
                            votes[47] = 1;
                        } else {
                            votes[47] = 3;
                        }
                    } else {
                        if (num_peaks <= 74.5) {
                            if (rr_std <= 0.4740213602781296) {
                                if (rr_std <= 0.43653950095176697) {
                                    votes[47] = 2;
                                } else {
                                    votes[47] = 2;
                                }
                            } else {
                                if (rr_std <= 0.6296193599700928) {
                                    votes[47] = 2;
                                } else {
                                    votes[47] = 2;
                                }
                            }
                        } else {
                            votes[47] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 62.5) {
                        votes[47] = 1;
                    } else {
                        if (diastolic_time <= 44.0) {
                            votes[47] = 5;
                        } else {
                            votes[47] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 67.5) {
                    votes[47] = 5;
                } else {
                    votes[47] = 5;
                }
            }
        } else {
            if (num_peaks <= 73.5) {
                if (diastolic_time <= 307.5) {
                    if (diastolic_time <= 109.25) {
                        if (rr_std <= 16.26704502105713) {
                            if (diastolic_time <= 31.25) {
                                if (num_valleys <= 89.5) {
                                    votes[47] = 4;
                                } else {
                                    votes[47] = 4;
                                }
                            } else {
                                if (diastolic_time <= 75.25) {
                                    if (num_peaks <= 41.5) {
                                        if (diastolic_time <= 42.5) {
                                            votes[47] = 4;
                                        } else {
                                            votes[47] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 55.25) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 2;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 54.0) {
                                        if (num_peaks <= 44.5) {
                                            votes[47] = 5;
                                        } else {
                                            votes[47] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 1.929781198501587) {
                                            votes[47] = 5;
                                        } else {
                                            votes[47] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                if (rr_median <= 63.5) {
                                    votes[47] = 4;
                                } else {
                                    if (num_peaks <= 62.5) {
                                        votes[47] = 1;
                                    } else {
                                        votes[47] = 0;
                                    }
                                }
                            } else {
                                if (rr_median <= 88.5) {
                                    if (diastolic_time <= 80.5) {
                                        votes[47] = 4;
                                    } else {
                                        votes[47] = 4;
                                    }
                                } else {
                                    votes[47] = 4;
                                }
                            }
                        }
                    } else {
                        votes[47] = 1;
                    }
                } else {
                    votes[47] = 4;
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 75.25) {
                        if (diastolic_time <= 86.5) {
                            if (num_peaks <= 82.5) {
                                if (num_valleys <= 89.5) {
                                    if (rr_median <= 71.5) {
                                        if (rr_std <= 0.8443530201911926) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    } else {
                                        votes[47] = 3;
                                    }
                                } else {
                                    if (rr_median <= 21.25) {
                                        votes[47] = 0;
                                    } else {
                                        if (rr_std <= 15.091200828552246) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[47] = 3;
                            }
                        } else {
                            votes[47] = 0;
                        }
                    } else {
                        if (diastolic_time <= 68.0) {
                            if (num_valleys <= 88.5) {
                                votes[47] = 3;
                            } else {
                                votes[47] = 5;
                            }
                        } else {
                            if (rr_std <= 4.353565335273743) {
                                votes[47] = 3;
                            } else {
                                if (rr_std <= 19.205121994018555) {
                                    votes[47] = 0;
                                } else {
                                    votes[47] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 54.75) {
                        if (rr_std <= 17.041767120361328) {
                            if (rr_std <= 11.272931098937988) {
                                if (rr_std <= 1.916245698928833) {
                                    if (num_peaks <= 89.5) {
                                        votes[47] = 0;
                                    } else {
                                        votes[47] = 1;
                                    }
                                } else {
                                    if (num_peaks <= 89.5) {
                                        votes[47] = 3;
                                    } else {
                                        votes[47] = 3;
                                    }
                                }
                            } else {
                                votes[47] = 0;
                            }
                        } else {
                            votes[47] = 3;
                        }
                    } else {
                        if (rr_std <= 8.847529888153076) {
                            if (diastolic_time <= 63.25) {
                                votes[47] = 0;
                            } else {
                                if (num_peaks <= 89.0) {
                                    votes[47] = 0;
                                } else {
                                    votes[47] = 2;
                                }
                            }
                        } else {
                            if (num_peaks <= 87.5) {
                                votes[47] = 0;
                            } else {
                                if (diastolic_time <= 74.75) {
                                    if (rr_std <= 13.060245513916016) {
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
            }
        }
    } else {
        if (rr_std <= 71.6677131652832) {
            if (rr_median <= 131.0) {
                if (rr_median <= 118.5) {
                    if (rr_std <= 40.416893005371094) {
                        if (rr_std <= 16.635660648345947) {
                            if (num_peaks <= 69.5) {
                                votes[47] = 1;
                            } else {
                                votes[47] = 5;
                            }
                        } else {
                            if (rr_median <= 109.5) {
                                votes[47] = 1;
                            } else {
                                votes[47] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 47.7795524597168) {
                            votes[47] = 4;
                        } else {
                            votes[47] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 100.25) {
                        if (num_peaks <= 66.0) {
                            votes[47] = 4;
                        } else {
                            votes[47] = 5;
                        }
                    } else {
                        if (num_peaks <= 56.5) {
                            if (rr_std <= 7.387500762939453) {
                                votes[47] = 2;
                            } else {
                                votes[47] = 2;
                            }
                        } else {
                            votes[47] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.4714045226573944) {
                    votes[47] = 5;
                } else {
                    if (rr_std <= 39.87405586242676) {
                        if (rr_median <= 139.25) {
                            votes[47] = 1;
                        } else {
                            votes[47] = 1;
                        }
                    } else {
                        if (num_peaks <= 77.5) {
                            if (num_valleys <= 89.5) {
                                votes[47] = 1;
                            } else {
                                votes[47] = 1;
                            }
                        } else {
                            votes[47] = 0;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 84.5) {
                votes[47] = 3;
            } else {
                votes[47] = 0;
            }
        }
    }
// Decision rules for tree 48
    if (rr_median <= 105.75) {
        if (num_valleys <= 85.5) {
            if (rr_median <= 66.75) {
                if (num_peaks <= 69.0) {
                    if (diastolic_time <= 54.0) {
                        if (num_peaks <= 40.0) {
                            votes[48] = 4;
                        } else {
                            votes[48] = 3;
                        }
                    } else {
                        if (num_valleys <= 83.5) {
                            votes[48] = 5;
                        } else {
                            votes[48] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 81.5) {
                        votes[48] = 3;
                    } else {
                        votes[48] = 1;
                    }
                }
            } else {
                if (rr_median <= 75.0) {
                    if (rr_std <= 0.9357241690158844) {
                        if (num_peaks <= 71.5) {
                            if (rr_median <= 71.0) {
                                if (rr_std <= 0.47034794092178345) {
                                    votes[48] = 2;
                                } else {
                                    votes[48] = 2;
                                }
                            } else {
                                votes[48] = 2;
                            }
                        } else {
                            votes[48] = 2;
                        }
                    } else {
                        votes[48] = 5;
                    }
                } else {
                    if (diastolic_time <= 76.25) {
                        if (rr_std <= 0.8959773182868958) {
                            votes[48] = 3;
                        } else {
                            votes[48] = 5;
                        }
                    } else {
                        votes[48] = 5;
                    }
                }
            }
        } else {
            if (num_peaks <= 76.5) {
                if (num_peaks <= 49.5) {
                    if (diastolic_time <= 306.5) {
                        if (diastolic_time <= 38.75) {
                            if (diastolic_time <= 10.0) {
                                votes[48] = 4;
                            } else {
                                if (num_peaks <= 39.5) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 102.5) {
                                if (num_peaks <= 42.0) {
                                    if (num_peaks <= 20.0) {
                                        votes[48] = 4;
                                    } else {
                                        if (num_peaks <= 34.0) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 8.187971502542496) {
                                        if (diastolic_time <= 59.5) {
                                            votes[48] = 2;
                                        } else {
                                            votes[48] = 2;
                                        }
                                    } else {
                                        votes[48] = 4;
                                    }
                                }
                            } else {
                                if (num_peaks <= 36.0) {
                                    votes[48] = 1;
                                } else {
                                    votes[48] = 1;
                                }
                            }
                        }
                    } else {
                        votes[48] = 4;
                    }
                } else {
                    if (rr_std <= 19.001737594604492) {
                        if (rr_median <= 70.75) {
                            if (diastolic_time <= 40.25) {
                                if (rr_std <= 3.7747700214385986) {
                                    if (num_peaks <= 60.5) {
                                        if (num_valleys <= 90.5) {
                                            votes[48] = 4;
                                        } else {
                                            votes[48] = 4;
                                        }
                                    } else {
                                        votes[48] = 4;
                                    }
                                } else {
                                    votes[48] = 3;
                                }
                            } else {
                                if (diastolic_time <= 55.25) {
                                    if (rr_median <= 55.25) {
                                        if (num_peaks <= 68.5) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    } else {
                                        votes[48] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 55.5) {
                                        if (num_valleys <= 90.5) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 66.5) {
                                            votes[48] = 2;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 8.79265546798706) {
                                if (diastolic_time <= 40.5) {
                                    votes[48] = 0;
                                } else {
                                    if (num_peaks <= 67.5) {
                                        votes[48] = 5;
                                    } else {
                                        votes[48] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.276533603668213) {
                                    votes[48] = 0;
                                } else {
                                    if (diastolic_time <= 71.25) {
                                        votes[48] = 0;
                                    } else {
                                        votes[48] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 68.0) {
                            if (num_valleys <= 89.5) {
                                if (rr_median <= 64.0) {
                                    votes[48] = 3;
                                } else {
                                    votes[48] = 5;
                                }
                            } else {
                                votes[48] = 0;
                            }
                        } else {
                            if (diastolic_time <= 121.25) {
                                if (rr_std <= 21.715059280395508) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 4;
                                }
                            } else {
                                votes[48] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 47.25) {
                    if (num_valleys <= 89.5) {
                        votes[48] = 3;
                    } else {
                        if (diastolic_time <= 42.5) {
                            if (diastolic_time <= 34.5) {
                                votes[48] = 3;
                            } else {
                                votes[48] = 0;
                            }
                        } else {
                            votes[48] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (num_valleys <= 88.5) {
                            if (diastolic_time <= 77.0) {
                                votes[48] = 5;
                            } else {
                                votes[48] = 5;
                            }
                        } else {
                            if (rr_median <= 23.75) {
                                votes[48] = 0;
                            } else {
                                if (rr_median <= 71.5) {
                                    votes[48] = 3;
                                } else {
                                    if (rr_std <= 12.687277793884277) {
                                        votes[48] = 3;
                                    } else {
                                        votes[48] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 8.847529888153076) {
                            if (rr_median <= 60.0) {
                                if (num_peaks <= 88.5) {
                                    if (diastolic_time <= 57.0) {
                                        votes[48] = 0;
                                    } else {
                                        votes[48] = 0;
                                    }
                                } else {
                                    votes[48] = 2;
                                }
                            } else {
                                if (rr_median <= 86.5) {
                                    votes[48] = 5;
                                } else {
                                    votes[48] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 55.75) {
                                votes[48] = 3;
                            } else {
                                if (num_peaks <= 87.5) {
                                    if (num_peaks <= 86.5) {
                                        votes[48] = 0;
                                    } else {
                                        votes[48] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 70.75) {
                                        if (rr_std <= 13.060245513916016) {
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
                    }
                }
            }
        }
    } else {
        if (rr_median <= 131.5) {
            if (rr_median <= 118.75) {
                if (num_peaks <= 70.5) {
                    if (num_valleys <= 92.0) {
                        if (rr_median <= 111.25) {
                            votes[48] = 1;
                        } else {
                            votes[48] = 1;
                        }
                    } else {
                        votes[48] = 4;
                    }
                } else {
                    if (diastolic_time <= 82.0) {
                        votes[48] = 1;
                    } else {
                        votes[48] = 5;
                    }
                }
            } else {
                if (rr_std <= 13.076703548431396) {
                    if (num_peaks <= 56.0) {
                        votes[48] = 2;
                    } else {
                        votes[48] = 1;
                    }
                } else {
                    if (num_peaks <= 76.0) {
                        votes[48] = 4;
                    } else {
                        votes[48] = 5;
                    }
                }
            }
        } else {
            if (rr_std <= 38.52732849121094) {
                if (rr_std <= 0.5335937142372131) {
                    votes[48] = 5;
                } else {
                    if (num_valleys <= 93.5) {
                        if (rr_median <= 139.25) {
                            votes[48] = 1;
                        } else {
                            votes[48] = 1;
                        }
                    } else {
                        votes[48] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 51.0) {
                    votes[48] = 1;
                } else {
                    if (num_peaks <= 74.5) {
                        votes[48] = 5;
                    } else {
                        if (rr_median <= 219.0) {
                            votes[48] = 0;
                        } else {
                            votes[48] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 49
    if (num_valleys <= 81.5) {
        if (rr_median <= 75.0) {
            if (rr_median <= 64.0) {
                if (num_valleys <= 78.5) {
                    votes[49] = 1;
                } else {
                    votes[49] = 3;
                }
            } else {
                if (num_peaks <= 53.5) {
                    if (rr_median <= 68.5) {
                        votes[49] = 2;
                    } else {
                        votes[49] = 2;
                    }
                } else {
                    if (num_valleys <= 78.5) {
                        votes[49] = 2;
                    } else {
                        if (rr_median <= 72.5) {
                            votes[49] = 2;
                        } else {
                            votes[49] = 2;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 76.5) {
                votes[49] = 5;
            } else {
                votes[49] = 5;
            }
        }
    } else {
        if (rr_median <= 105.75) {
            if (num_peaks <= 73.5) {
                if (diastolic_time <= 242.0) {
                    if (diastolic_time <= 105.25) {
                        if (rr_std <= 21.01315402984619) {
                            if (diastolic_time <= 37.75) {
                                if (rr_median <= 48.5) {
                                    if (num_peaks <= 60.5) {
                                        if (diastolic_time <= 10.0) {
                                            votes[49] = 4;
                                        } else {
                                            votes[49] = 4;
                                        }
                                    } else {
                                        votes[49] = 4;
                                    }
                                } else {
                                    votes[49] = 3;
                                }
                            } else {
                                if (num_peaks <= 41.5) {
                                    if (diastolic_time <= 73.0) {
                                        if (num_valleys <= 86.5) {
                                            votes[49] = 1;
                                        } else {
                                            votes[49] = 4;
                                        }
                                    } else {
                                        votes[49] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 49.5) {
                                        if (diastolic_time <= 53.0) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 2;
                                        }
                                    } else {
                                        if (num_peaks <= 58.5) {
                                            votes[49] = 0;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                if (rr_std <= 48.42069435119629) {
                                    if (num_peaks <= 67.5) {
                                        votes[49] = 3;
                                    } else {
                                        votes[49] = 0;
                                    }
                                } else {
                                    votes[49] = 4;
                                }
                            } else {
                                if (rr_median <= 88.5) {
                                    if (rr_std <= 22.290435791015625) {
                                        votes[49] = 4;
                                    } else {
                                        votes[49] = 4;
                                    }
                                } else {
                                    if (rr_std <= 34.04461097717285) {
                                        votes[49] = 1;
                                    } else {
                                        votes[49] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 88.5) {
                            votes[49] = 1;
                        } else {
                            votes[49] = 1;
                        }
                    }
                } else {
                    votes[49] = 4;
                }
            } else {
                if (diastolic_time <= 53.75) {
                    if (rr_median <= 78.75) {
                        if (rr_std <= 1.140178233385086) {
                            if (num_valleys <= 89.5) {
                                if (diastolic_time <= 38.75) {
                                    votes[49] = 2;
                                } else {
                                    votes[49] = 3;
                                }
                            } else {
                                if (diastolic_time <= 37.0) {
                                    votes[49] = 0;
                                } else {
                                    votes[49] = 0;
                                }
                            }
                        } else {
                            if (rr_std <= 10.394045352935791) {
                                votes[49] = 3;
                            } else {
                                if (rr_median <= 59.5) {
                                    if (num_valleys <= 90.5) {
                                        votes[49] = 3;
                                    } else {
                                        votes[49] = 3;
                                    }
                                } else {
                                    if (rr_std <= 13.841696739196777) {
                                        votes[49] = 0;
                                    } else {
                                        votes[49] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 83.0) {
                            votes[49] = 5;
                        } else {
                            if (rr_std <= 11.413175582885742) {
                                votes[49] = 3;
                            } else {
                                votes[49] = 0;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (num_valleys <= 87.5) {
                            if (num_peaks <= 81.0) {
                                votes[49] = 5;
                            } else {
                                votes[49] = 3;
                            }
                        } else {
                            if (diastolic_time <= 62.0) {
                                votes[49] = 0;
                            } else {
                                if (rr_median <= 72.5) {
                                    if (diastolic_time <= 68.5) {
                                        votes[49] = 0;
                                    } else {
                                        if (diastolic_time <= 86.5) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 21.830957412719727) {
                                        if (rr_std <= 10.845600605010986) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 0;
                                        }
                                    } else {
                                        votes[49] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 18.916584968566895) {
                            if (diastolic_time <= 85.0) {
                                if (num_valleys <= 87.5) {
                                    votes[49] = 0;
                                } else {
                                    if (rr_median <= 69.5) {
                                        if (num_peaks <= 86.5) {
                                            votes[49] = 0;
                                        } else {
                                            votes[49] = 0;
                                        }
                                    } else {
                                        votes[49] = 0;
                                    }
                                }
                            } else {
                                if (rr_std <= 1.3431020379066467) {
                                    votes[49] = 5;
                                } else {
                                    votes[49] = 1;
                                }
                            }
                        } else {
                            if (num_peaks <= 88.5) {
                                votes[49] = 4;
                            } else {
                                votes[49] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 49.75) {
                if (rr_median <= 239.25) {
                    if (rr_std <= 55.63025665283203) {
                        if (rr_std <= 35.06062698364258) {
                            votes[49] = 1;
                        } else {
                            votes[49] = 1;
                        }
                    } else {
                        votes[49] = 1;
                    }
                } else {
                    votes[49] = 1;
                }
            } else {
                if (rr_std <= 30.487016677856445) {
                    if (num_peaks <= 53.5) {
                        if (rr_std <= 3.2867767810821533) {
                            votes[49] = 4;
                        } else {
                            if (rr_std <= 9.065512657165527) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 2;
                            }
                        }
                    } else {
                        if (num_valleys <= 91.5) {
                            if (num_peaks <= 71.5) {
                                if (rr_median <= 125.75) {
                                    votes[49] = 1;
                                } else {
                                    votes[49] = 1;
                                }
                            } else {
                                if (num_peaks <= 80.5) {
                                    votes[49] = 5;
                                } else {
                                    if (num_peaks <= 84.5) {
                                        votes[49] = 1;
                                    } else {
                                        if (diastolic_time <= 99.25) {
                                            votes[49] = 0;
                                        } else {
                                            votes[49] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 127.5) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 78.5) {
                        if (diastolic_time <= 104.5) {
                            if (num_peaks <= 55.0) {
                                if (rr_median <= 116.75) {
                                    votes[49] = 4;
                                } else {
                                    votes[49] = 4;
                                }
                            } else {
                                votes[49] = 5;
                            }
                        } else {
                            votes[49] = 1;
                        }
                    } else {
                        if (num_valleys <= 88.5) {
                            votes[49] = 1;
                        } else {
                            if (rr_std <= 58.217172622680664) {
                                votes[49] = 0;
                            } else {
                                votes[49] = 0;
                            }
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
