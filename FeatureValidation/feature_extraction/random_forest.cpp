#include <vector>
using namespace std;

int random_forest_predict(float num_peaks, float num_valleys, float rr_median, float rr_std, float diastolic_time) {
    int votes[50] = {0};
// Decision rules for tree 0
    if (num_valleys <= 81.5) {
        if (rr_median <= 64.0) {
            if (num_peaks <= 59.5) {
                votes[0] = 5;
            } else {
                votes[0] = 3;
            }
        } else {
            if (rr_median <= 75.0) {
                if (num_peaks <= 71.5) {
                    if (rr_median <= 73.5) {
                        if (num_valleys <= 80.5) {
                            votes[0] = 2;
                        } else {
                            votes[0] = 2;
                        }
                    } else {
                        votes[0] = 2;
                    }
                } else {
                    votes[0] = 2;
                }
            } else {
                if (rr_std <= 0.6137872934341431) {
                    votes[0] = 3;
                } else {
                    votes[0] = 3;
                }
            }
        }
    } else {
        if (num_peaks <= 75.5) {
            if (rr_median <= 131.0) {
                if (diastolic_time <= 75.25) {
                    if (diastolic_time <= 57.25) {
                        if (num_peaks <= 58.5) {
                            if (diastolic_time <= 37.75) {
                                if (rr_median <= 65.0) {
                                    if (num_peaks <= 36.5) {
                                        votes[0] = 4;
                                    } else {
                                        if (num_valleys <= 89.5) {
                                            votes[0] = 4;
                                        } else {
                                            votes[0] = 4;
                                        }
                                    }
                                } else {
                                    votes[0] = 1;
                                }
                            } else {
                                if (num_peaks <= 41.5) {
                                    if (num_peaks <= 36.5) {
                                        votes[0] = 4;
                                    } else {
                                        votes[0] = 4;
                                    }
                                } else {
                                    if (rr_median <= 91.75) {
                                        if (rr_median <= 60.0) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 0;
                                        }
                                    } else {
                                        votes[0] = 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 72.75) {
                                if (rr_std <= 0.6895123720169067) {
                                    if (diastolic_time <= 38.25) {
                                        votes[0] = 5;
                                    } else {
                                        if (num_peaks <= 67.5) {
                                            votes[0] = 2;
                                        } else {
                                            votes[0] = 3;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 38.5) {
                                        votes[0] = 3;
                                    } else {
                                        if (num_peaks <= 67.5) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 85.5) {
                                    if (rr_std <= 5.425381422042847) {
                                        votes[0] = 5;
                                    } else {
                                        votes[0] = 0;
                                    }
                                } else {
                                    votes[0] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 5.593664169311523) {
                            if (num_peaks <= 63.0) {
                                if (rr_std <= 0.18040060997009277) {
                                    if (diastolic_time <= 63.25) {
                                        if (num_peaks <= 47.0) {
                                            votes[0] = 2;
                                        } else {
                                            votes[0] = 2;
                                        }
                                    } else {
                                        votes[0] = 0;
                                    }
                                } else {
                                    if (rr_std <= 0.5866298079490662) {
                                        if (num_valleys <= 83.5) {
                                            votes[0] = 2;
                                        } else {
                                            votes[0] = 2;
                                        }
                                    } else {
                                        votes[0] = 2;
                                    }
                                }
                            } else {
                                if (rr_std <= 0.5540054142475128) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 21.05630874633789) {
                                if (rr_std <= 9.259682178497314) {
                                    votes[0] = 3;
                                } else {
                                    if (diastolic_time <= 65.5) {
                                        votes[0] = 0;
                                    } else {
                                        votes[0] = 0;
                                    }
                                }
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 117.0) {
                        if (diastolic_time <= 107.75) {
                            if (rr_std <= 15.316328048706055) {
                                if (num_peaks <= 52.5) {
                                    if (diastolic_time <= 91.25) {
                                        votes[0] = 5;
                                    } else {
                                        votes[0] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 70.5) {
                                        votes[0] = 5;
                                    } else {
                                        votes[0] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 99.75) {
                                    if (rr_std <= 17.470860481262207) {
                                        votes[0] = 4;
                                    } else {
                                        if (rr_median <= 98.5) {
                                            votes[0] = 4;
                                        } else {
                                            votes[0] = 4;
                                        }
                                    }
                                } else {
                                    votes[0] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 261.5) {
                                if (num_peaks <= 32.5) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 1;
                                }
                            } else {
                                votes[0] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 10.054786205291748) {
                            votes[0] = 2;
                        } else {
                            votes[0] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 49.0) {
                    if (num_peaks <= 52.5) {
                        votes[0] = 1;
                    } else {
                        votes[0] = 1;
                    }
                } else {
                    if (num_valleys <= 91.5) {
                        if (num_peaks <= 57.5) {
                            if (diastolic_time <= 66.75) {
                                votes[0] = 1;
                            } else {
                                if (num_valleys <= 86.5) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 1;
                                }
                            }
                        } else {
                            votes[0] = 1;
                        }
                    } else {
                        votes[0] = 4;
                    }
                }
            }
        } else {
            if (rr_median <= 85.25) {
                if (rr_median <= 20.5) {
                    if (diastolic_time <= 38.0) {
                        votes[0] = 2;
                    } else {
                        if (num_peaks <= 89.5) {
                            if (num_valleys <= 89.5) {
                                if (diastolic_time <= 63.0) {
                                    votes[0] = 0;
                                } else {
                                    votes[0] = 0;
                                }
                            } else {
                                votes[0] = 0;
                            }
                        } else {
                            if (diastolic_time <= 66.5) {
                                votes[0] = 3;
                            } else {
                                votes[0] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 59.5) {
                        if (diastolic_time <= 57.5) {
                            if (rr_median <= 55.25) {
                                votes[0] = 3;
                            } else {
                                votes[0] = 3;
                            }
                        } else {
                            votes[0] = 0;
                        }
                    } else {
                        if (rr_median <= 69.25) {
                            if (rr_median <= 63.75) {
                                votes[0] = 0;
                            } else {
                                votes[0] = 0;
                            }
                        } else {
                            if (diastolic_time <= 75.5) {
                                if (num_valleys <= 87.5) {
                                    votes[0] = 3;
                                } else {
                                    if (num_peaks <= 88.5) {
                                        if (diastolic_time <= 64.25) {
                                            votes[0] = 5;
                                        } else {
                                            votes[0] = 3;
                                        }
                                    } else {
                                        votes[0] = 0;
                                    }
                                }
                            } else {
                                votes[0] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.6239893436431885) {
                    if (num_peaks <= 82.0) {
                        if (num_peaks <= 79.5) {
                            votes[0] = 5;
                        } else {
                            if (rr_median <= 116.75) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 99.0) {
                            votes[0] = 2;
                        } else {
                            if (num_valleys <= 89.5) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 82.5) {
                        if (rr_median <= 122.0) {
                            if (rr_median <= 98.75) {
                                votes[0] = 0;
                            } else {
                                votes[0] = 5;
                            }
                        } else {
                            if (diastolic_time <= 52.5) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 1;
                            }
                        }
                    } else {
                        if (num_valleys <= 86.5) {
                            votes[0] = 1;
                        } else {
                            if (diastolic_time <= 90.75) {
                                if (num_peaks <= 86.5) {
                                    votes[0] = 0;
                                } else {
                                    if (diastolic_time <= 56.0) {
                                        votes[0] = 0;
                                    } else {
                                        if (rr_std <= 32.27082633972168) {
                                            votes[0] = 0;
                                        } else {
                                            votes[0] = 0;
                                        }
                                    }
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
// Decision rules for tree 1
    if (rr_median <= 105.75) {
        if (num_valleys <= 85.5) {
            if (rr_std <= 0.6868122220039368) {
                if (diastolic_time <= 80.5) {
                    if (rr_median <= 66.0) {
                        if (num_peaks <= 79.0) {
                            if (num_peaks <= 58.5) {
                                if (diastolic_time <= 46.25) {
                                    votes[1] = 4;
                                } else {
                                    votes[1] = 1;
                                }
                            } else {
                                votes[1] = 3;
                            }
                        } else {
                            votes[1] = 2;
                        }
                    } else {
                        if (rr_median <= 78.5) {
                            if (diastolic_time <= 67.5) {
                                if (num_valleys <= 80.5) {
                                    if (rr_std <= 0.6078991293907166) {
                                        votes[1] = 2;
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
                            votes[1] = 3;
                        }
                    }
                } else {
                    votes[1] = 5;
                }
            } else {
                if (rr_median <= 62.0) {
                    if (diastolic_time <= 50.5) {
                        votes[1] = 3;
                    } else {
                        votes[1] = 1;
                    }
                } else {
                    if (rr_std <= 1.1683152914047241) {
                        if (rr_std <= 0.8987637162208557) {
                            votes[1] = 5;
                        } else {
                            votes[1] = 3;
                        }
                    } else {
                        if (num_valleys <= 83.5) {
                            votes[1] = 5;
                        } else {
                            votes[1] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 76.5) {
                if (diastolic_time <= 76.5) {
                    if (diastolic_time <= 37.75) {
                        if (num_peaks <= 62.0) {
                            if (num_valleys <= 87.5) {
                                votes[1] = 4;
                            } else {
                                if (diastolic_time <= 10.0) {
                                    votes[1] = 4;
                                } else {
                                    if (rr_median <= 16.0) {
                                        votes[1] = 4;
                                    } else {
                                        votes[1] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[1] = 5;
                        }
                    } else {
                        if (num_peaks <= 41.5) {
                            if (num_peaks <= 24.5) {
                                votes[1] = 4;
                            } else {
                                if (diastolic_time <= 46.0) {
                                    votes[1] = 5;
                                } else {
                                    votes[1] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 47.25) {
                                if (rr_std <= 12.531888008117676) {
                                    if (rr_std <= 9.750770568847656) {
                                        if (num_peaks <= 55.5) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    } else {
                                        votes[1] = 0;
                                    }
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                if (rr_std <= 9.44204330444336) {
                                    if (rr_std <= 0.565681666135788) {
                                        if (diastolic_time <= 61.5) {
                                            votes[1] = 2;
                                        } else {
                                            votes[1] = 0;
                                        }
                                    } else {
                                        if (rr_median <= 69.75) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 22.26320171356201) {
                                        if (num_peaks <= 54.5) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 0;
                                        }
                                    } else {
                                        votes[1] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 105.25) {
                        if (rr_std <= 7.908410549163818) {
                            if (diastolic_time <= 88.25) {
                                votes[1] = 5;
                            } else {
                                votes[1] = 5;
                            }
                        } else {
                            if (rr_std <= 17.288314819335938) {
                                votes[1] = 1;
                            } else {
                                if (rr_std <= 24.55654811859131) {
                                    if (rr_median <= 83.0) {
                                        votes[1] = 4;
                                    } else {
                                        votes[1] = 0;
                                    }
                                } else {
                                    if (rr_std <= 36.06129264831543) {
                                        if (diastolic_time <= 91.75) {
                                            votes[1] = 4;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    } else {
                                        votes[1] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 242.0) {
                            if (num_peaks <= 50.5) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 1;
                            }
                        } else {
                            votes[1] = 4;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 54.75) {
                    if (diastolic_time <= 28.5) {
                        votes[1] = 3;
                    } else {
                        if (rr_std <= 13.964846134185791) {
                            if (rr_std <= 10.772585391998291) {
                                if (rr_std <= 2.096524715423584) {
                                    if (num_valleys <= 89.5) {
                                        votes[1] = 1;
                                    } else {
                                        votes[1] = 0;
                                    }
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[1] = 0;
                                } else {
                                    votes[1] = 0;
                                }
                            }
                        } else {
                            if (num_valleys <= 90.0) {
                                votes[1] = 3;
                            } else {
                                votes[1] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 85.5) {
                        if (rr_median <= 21.75) {
                            if (num_peaks <= 81.5) {
                                votes[1] = 0;
                            } else {
                                votes[1] = 0;
                            }
                        } else {
                            if (rr_median <= 62.5) {
                                votes[1] = 3;
                            } else {
                                if (diastolic_time <= 562.5) {
                                    if (num_valleys <= 88.5) {
                                        if (rr_median <= 80.75) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 12.687277793884277) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 0;
                                        }
                                    }
                                } else {
                                    votes[1] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 8.621502876281738) {
                            if (rr_median <= 58.5) {
                                if (num_peaks <= 89.5) {
                                    votes[1] = 0;
                                } else {
                                    if (diastolic_time <= 66.75) {
                                        votes[1] = 0;
                                    } else {
                                        votes[1] = 0;
                                    }
                                }
                            } else {
                                votes[1] = 5;
                            }
                        } else {
                            if (rr_std <= 28.167020797729492) {
                                if (num_peaks <= 87.5) {
                                    votes[1] = 0;
                                } else {
                                    if (rr_std <= 15.31276798248291) {
                                        votes[1] = 0;
                                    } else {
                                        if (diastolic_time <= 71.75) {
                                            votes[1] = 0;
                                        } else {
                                            votes[1] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[1] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 71.6677131652832) {
            if (rr_median <= 129.5) {
                if (rr_median <= 118.75) {
                    if (diastolic_time <= 86.25) {
                        if (rr_std <= 24.704072952270508) {
                            votes[1] = 1;
                        } else {
                            votes[1] = 1;
                        }
                    } else {
                        if (diastolic_time <= 111.5) {
                            votes[1] = 4;
                        } else {
                            votes[1] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 53.5) {
                        if (diastolic_time <= 99.0) {
                            votes[1] = 2;
                        } else {
                            votes[1] = 2;
                        }
                    } else {
                        if (diastolic_time <= 112.5) {
                            if (rr_median <= 125.25) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 0;
                            }
                        } else {
                            votes[1] = 2;
                        }
                    }
                }
            } else {
                if (num_peaks <= 85.0) {
                    if (rr_std <= 0.4714045226573944) {
                        votes[1] = 3;
                    } else {
                        if (rr_median <= 154.5) {
                            if (num_peaks <= 56.5) {
                                votes[1] = 5;
                            } else {
                                if (rr_median <= 136.5) {
                                    votes[1] = 1;
                                } else {
                                    votes[1] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 39.87405586242676) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 16.082645654678345) {
                        votes[1] = 1;
                    } else {
                        votes[1] = 0;
                    }
                }
            }
        } else {
            if (num_peaks <= 80.0) {
                votes[1] = 3;
            } else {
                if (diastolic_time <= 85.5) {
                    votes[1] = 0;
                } else {
                    votes[1] = 0;
                }
            }
        }
    }
// Decision rules for tree 2
    if (num_peaks <= 74.5) {
        if (num_valleys <= 85.5) {
            if (rr_std <= 0.7192845046520233) {
                if (rr_median <= 59.5) {
                    if (diastolic_time <= 62.75) {
                        if (num_peaks <= 53.0) {
                            votes[2] = 4;
                        } else {
                            votes[2] = 3;
                        }
                    } else {
                        if (diastolic_time <= 85.0) {
                            votes[2] = 5;
                        } else {
                            votes[2] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 70.5) {
                        if (rr_median <= 68.5) {
                            if (rr_std <= 0.581251710653305) {
                                votes[2] = 2;
                            } else {
                                votes[2] = 2;
                            }
                        } else {
                            if (num_valleys <= 79.5) {
                                votes[2] = 2;
                            } else {
                                votes[2] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 0.5664693713188171) {
                            votes[2] = 2;
                        } else {
                            votes[2] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 50.0) {
                    if (rr_std <= 2.527582824230194) {
                        votes[2] = 5;
                    } else {
                        votes[2] = 5;
                    }
                } else {
                    if (rr_median <= 80.0) {
                        votes[2] = 2;
                    } else {
                        votes[2] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 134.25) {
                if (diastolic_time <= 108.75) {
                    if (rr_std <= 16.26704502105713) {
                        if (diastolic_time <= 37.75) {
                            if (rr_median <= 27.5) {
                                if (num_valleys <= 89.5) {
                                    votes[2] = 4;
                                } else {
                                    if (diastolic_time <= 10.0) {
                                        votes[2] = 4;
                                    } else {
                                        if (diastolic_time <= 36.0) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 105.0) {
                                    votes[2] = 3;
                                } else {
                                    votes[2] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 9.05988883972168) {
                                if (diastolic_time <= 82.5) {
                                    if (diastolic_time <= 54.75) {
                                        if (rr_std <= 2.106654703617096) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 50.5) {
                                            votes[2] = 2;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 4.2942750453948975) {
                                        if (diastolic_time <= 89.5) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    } else {
                                        votes[2] = 2;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 64.75) {
                                    if (rr_median <= 65.5) {
                                        votes[2] = 3;
                                    } else {
                                        if (diastolic_time <= 47.25) {
                                            votes[2] = 0;
                                        } else {
                                            votes[2] = 0;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 77.5) {
                                        votes[2] = 5;
                                    } else {
                                        votes[2] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 68.0) {
                            if (num_peaks <= 50.5) {
                                votes[2] = 4;
                            } else {
                                if (diastolic_time <= 47.25) {
                                    votes[2] = 3;
                                } else {
                                    if (diastolic_time <= 57.5) {
                                        votes[2] = 5;
                                    } else {
                                        votes[2] = 0;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 72.5) {
                                if (rr_std <= 29.76898193359375) {
                                    if (num_peaks <= 66.5) {
                                        votes[2] = 4;
                                    } else {
                                        votes[2] = 4;
                                    }
                                } else {
                                    votes[2] = 4;
                                }
                            } else {
                                votes[2] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 261.5) {
                        if (rr_median <= 118.25) {
                            votes[2] = 1;
                        } else {
                            if (num_valleys <= 90.5) {
                                votes[2] = 1;
                            } else {
                                votes[2] = 2;
                            }
                        }
                    } else {
                        votes[2] = 4;
                    }
                }
            } else {
                if (rr_std <= 38.35716438293457) {
                    if (rr_std <= 29.368847846984863) {
                        if (diastolic_time <= 174.0) {
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
            }
        }
    } else {
        if (rr_median <= 72.5) {
            if (rr_std <= 0.21066252887248993) {
                if (num_peaks <= 91.5) {
                    if (diastolic_time <= 32.5) {
                        votes[2] = 3;
                    } else {
                        if (num_peaks <= 89.5) {
                            if (num_valleys <= 89.5) {
                                if (num_peaks <= 84.5) {
                                    votes[2] = 3;
                                } else {
                                    votes[2] = 0;
                                }
                            } else {
                                if (num_valleys <= 92.5) {
                                    if (num_peaks <= 82.0) {
                                        votes[2] = 0;
                                    } else {
                                        votes[2] = 0;
                                    }
                                } else {
                                    votes[2] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 66.75) {
                                votes[2] = 3;
                            } else {
                                votes[2] = 0;
                            }
                        }
                    }
                } else {
                    votes[2] = 2;
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (num_peaks <= 76.5) {
                        if (rr_median <= 53.5) {
                            votes[2] = 3;
                        } else {
                            votes[2] = 0;
                        }
                    } else {
                        if (num_valleys <= 84.5) {
                            votes[2] = 3;
                        } else {
                            if (num_valleys <= 91.5) {
                                votes[2] = 3;
                            } else {
                                votes[2] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 59.5) {
                        if (diastolic_time <= 53.25) {
                            votes[2] = 3;
                        } else {
                            votes[2] = 0;
                        }
                    } else {
                        if (rr_std <= 14.508387088775635) {
                            votes[2] = 0;
                        } else {
                            votes[2] = 0;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 8.902738094329834) {
                if (rr_median <= 98.5) {
                    if (diastolic_time <= 60.75) {
                        if (rr_median <= 81.5) {
                            votes[2] = 5;
                        } else {
                            votes[2] = 3;
                        }
                    } else {
                        if (diastolic_time <= 76.75) {
                            votes[2] = 5;
                        } else {
                            votes[2] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 0.5975485444068909) {
                        votes[2] = 3;
                    } else {
                        if (rr_median <= 129.0) {
                            if (diastolic_time <= 110.0) {
                                votes[2] = 1;
                            } else {
                                votes[2] = 2;
                            }
                        } else {
                            votes[2] = 1;
                        }
                    }
                }
            } else {
                if (num_peaks <= 82.5) {
                    if (rr_median <= 122.0) {
                        if (rr_median <= 98.25) {
                            if (rr_std <= 14.752346515655518) {
                                votes[2] = 0;
                            } else {
                                votes[2] = 4;
                            }
                        } else {
                            votes[2] = 5;
                        }
                    } else {
                        if (rr_std <= 38.620317459106445) {
                            votes[2] = 1;
                        } else {
                            votes[2] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 48.5) {
                        votes[2] = 5;
                    } else {
                        if (num_valleys <= 86.5) {
                            votes[2] = 0;
                        } else {
                            if (diastolic_time <= 85.25) {
                                if (rr_median <= 79.5) {
                                    votes[2] = 0;
                                } else {
                                    if (rr_median <= 91.5) {
                                        votes[2] = 3;
                                    } else {
                                        if (num_valleys <= 91.5) {
                                            votes[2] = 0;
                                        } else {
                                            votes[2] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (num_valleys <= 91.5) {
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
    }
// Decision rules for tree 3
    if (rr_median <= 131.5) {
        if (num_peaks <= 73.5) {
            if (num_valleys <= 85.5) {
                if (rr_median <= 61.5) {
                    if (diastolic_time <= 48.5) {
                        if (diastolic_time <= 40.25) {
                            votes[3] = 3;
                        } else {
                            votes[3] = 3;
                        }
                    } else {
                        if (num_valleys <= 82.5) {
                            votes[3] = 5;
                        } else {
                            if (diastolic_time <= 69.5) {
                                votes[3] = 2;
                            } else {
                                votes[3] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.7299954891204834) {
                        if (rr_std <= 0.33040061593055725) {
                            votes[3] = 2;
                        } else {
                            if (num_valleys <= 73.0) {
                                votes[3] = 2;
                            } else {
                                if (diastolic_time <= 70.5) {
                                    if (num_valleys <= 79.5) {
                                        votes[3] = 2;
                                    } else {
                                        if (rr_median <= 68.5) {
                                            votes[3] = 2;
                                        } else {
                                            votes[3] = 2;
                                        }
                                    }
                                } else {
                                    votes[3] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 1.1683152914047241) {
                            votes[3] = 1;
                        } else {
                            votes[3] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 119.75) {
                    if (diastolic_time <= 104.75) {
                        if (rr_std <= 19.40558624267578) {
                            if (diastolic_time <= 31.5) {
                                if (num_peaks <= 37.0) {
                                    votes[3] = 4;
                                } else {
                                    votes[3] = 4;
                                }
                            } else {
                                if (num_peaks <= 59.5) {
                                    if (num_peaks <= 41.5) {
                                        if (num_valleys <= 87.5) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 4;
                                        }
                                    } else {
                                        if (num_peaks <= 46.5) {
                                            votes[3] = 2;
                                        } else {
                                            votes[3] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 6.068141222000122) {
                                        if (diastolic_time <= 69.5) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 60.0) {
                                            votes[3] = 3;
                                        } else {
                                            votes[3] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 71.25) {
                                if (num_peaks <= 52.5) {
                                    votes[3] = 4;
                                } else {
                                    if (num_peaks <= 65.5) {
                                        votes[3] = 3;
                                    } else {
                                        votes[3] = 0;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 82.0) {
                                    votes[3] = 4;
                                } else {
                                    if (rr_median <= 98.5) {
                                        votes[3] = 4;
                                    } else {
                                        votes[3] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 310.0) {
                            if (num_valleys <= 92.5) {
                                votes[3] = 1;
                            } else {
                                votes[3] = 1;
                            }
                        } else {
                            votes[3] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 26.881442070007324) {
                        if (rr_median <= 124.5) {
                            votes[3] = 2;
                        } else {
                            votes[3] = 2;
                        }
                    } else {
                        votes[3] = 4;
                    }
                }
            }
        } else {
            if (diastolic_time <= 52.75) {
                if (rr_median <= 78.5) {
                    if (rr_std <= 0.9413011074066162) {
                        if (num_peaks <= 89.5) {
                            if (num_peaks <= 82.5) {
                                votes[3] = 0;
                            } else {
                                votes[3] = 3;
                            }
                        } else {
                            votes[3] = 2;
                        }
                    } else {
                        if (num_peaks <= 76.5) {
                            votes[3] = 3;
                        } else {
                            if (rr_median <= 60.5) {
                                votes[3] = 3;
                            } else {
                                votes[3] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 81.5) {
                        votes[3] = 5;
                    } else {
                        if (diastolic_time <= 48.0) {
                            votes[3] = 3;
                        } else {
                            votes[3] = 1;
                        }
                    }
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 80.0) {
                        if (num_valleys <= 87.5) {
                            if (num_peaks <= 81.5) {
                                if (diastolic_time <= 67.0) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 2;
                                }
                            } else {
                                votes[3] = 5;
                            }
                        } else {
                            if (rr_std <= 21.503625869750977) {
                                if (rr_std <= 9.472223281860352) {
                                    if (diastolic_time <= 70.25) {
                                        if (diastolic_time <= 62.0) {
                                            votes[3] = 0;
                                        } else {
                                            votes[3] = 0;
                                        }
                                    } else {
                                        votes[3] = 3;
                                    }
                                } else {
                                    votes[3] = 0;
                                }
                            } else {
                                votes[3] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 121.5) {
                            if (rr_std <= 1.0308739840984344) {
                                votes[3] = 2;
                            } else {
                                if (num_peaks <= 82.0) {
                                    if (rr_median <= 122.0) {
                                        if (num_valleys <= 88.5) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 5;
                                        }
                                    } else {
                                        votes[3] = 1;
                                    }
                                } else {
                                    votes[3] = 1;
                                }
                            }
                        } else {
                            votes[3] = 0;
                        }
                    }
                } else {
                    if (num_valleys <= 86.5) {
                        votes[3] = 1;
                    } else {
                        if (rr_std <= 8.847529888153076) {
                            if (diastolic_time <= 64.5) {
                                votes[3] = 0;
                            } else {
                                if (rr_std <= 0.1332346796989441) {
                                    votes[3] = 0;
                                } else {
                                    if (rr_median <= 95.5) {
                                        votes[3] = 5;
                                    } else {
                                        votes[3] = 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 106.0) {
                                if (num_peaks <= 87.5) {
                                    votes[3] = 0;
                                } else {
                                    if (rr_median <= 90.0) {
                                        votes[3] = 0;
                                    } else {
                                        if (num_peaks <= 89.5) {
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
            }
        }
    } else {
        if (rr_std <= 38.862003326416016) {
            if (rr_std <= 0.5335937142372131) {
                votes[3] = 1;
            } else {
                if (rr_median <= 139.25) {
                    votes[3] = 1;
                } else {
                    if (rr_std <= 31.260153770446777) {
                        votes[3] = 1;
                    } else {
                        votes[3] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 63.5) {
                votes[3] = 1;
            } else {
                votes[3] = 0;
            }
        }
    }
// Decision rules for tree 4
    if (num_valleys <= 85.5) {
        if (rr_std <= 0.7558121979236603) {
            if (rr_median <= 66.0) {
                if (num_peaks <= 39.5) {
                    votes[4] = 1;
                } else {
                    if (num_valleys <= 83.5) {
                        if (num_peaks <= 70.0) {
                            votes[4] = 3;
                        } else {
                            votes[4] = 3;
                        }
                    } else {
                        votes[4] = 2;
                    }
                }
            } else {
                if (rr_median <= 75.0) {
                    if (num_peaks <= 58.0) {
                        votes[4] = 2;
                    } else {
                        if (num_peaks <= 61.0) {
                            votes[4] = 2;
                        } else {
                            if (diastolic_time <= 53.5) {
                                votes[4] = 2;
                            } else {
                                votes[4] = 2;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 59.25) {
                        votes[4] = 3;
                    } else {
                        votes[4] = 2;
                    }
                }
            }
        } else {
            if (rr_median <= 99.0) {
                if (rr_median <= 66.5) {
                    if (rr_std <= 9.377866744995117) {
                        votes[4] = 3;
                    } else {
                        votes[4] = 1;
                    }
                } else {
                    if (diastolic_time <= 40.75) {
                        votes[4] = 5;
                    } else {
                        if (diastolic_time <= 47.25) {
                            votes[4] = 3;
                        } else {
                            votes[4] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 128.5) {
                    votes[4] = 1;
                } else {
                    if (diastolic_time <= 108.75) {
                        votes[4] = 1;
                    } else {
                        votes[4] = 1;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 75.5) {
            if (rr_median <= 104.75) {
                if (diastolic_time <= 82.5) {
                    if (diastolic_time <= 37.75) {
                        if (num_peaks <= 63.0) {
                            if (num_peaks <= 41.0) {
                                votes[4] = 4;
                            } else {
                                votes[4] = 4;
                            }
                        } else {
                            votes[4] = 3;
                        }
                    } else {
                        if (rr_std <= 8.710328578948975) {
                            if (diastolic_time <= 55.25) {
                                if (num_peaks <= 39.5) {
                                    votes[4] = 5;
                                } else {
                                    if (diastolic_time <= 50.25) {
                                        if (num_peaks <= 59.0) {
                                            votes[4] = 4;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    } else {
                                        votes[4] = 3;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 63.0) {
                                    if (num_peaks <= 44.5) {
                                        votes[4] = 4;
                                    } else {
                                        if (num_peaks <= 51.0) {
                                            votes[4] = 2;
                                        } else {
                                            votes[4] = 2;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 56.0) {
                                        if (num_valleys <= 90.5) {
                                            votes[4] = 3;
                                        } else {
                                            votes[4] = 0;
                                        }
                                    } else {
                                        votes[4] = 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 65.75) {
                                if (diastolic_time <= 53.0) {
                                    if (rr_median <= 59.0) {
                                        votes[4] = 3;
                                    } else {
                                        votes[4] = 1;
                                    }
                                } else {
                                    votes[4] = 4;
                                }
                            } else {
                                if (diastolic_time <= 72.75) {
                                    if (rr_median <= 82.25) {
                                        if (diastolic_time <= 64.75) {
                                            votes[4] = 0;
                                        } else {
                                            votes[4] = 0;
                                        }
                                    } else {
                                        votes[4] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 66.5) {
                                        votes[4] = 5;
                                    } else {
                                        votes[4] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 104.5) {
                        if (rr_std <= 15.10298204421997) {
                            if (diastolic_time <= 88.5) {
                                votes[4] = 5;
                            } else {
                                votes[4] = 5;
                            }
                        } else {
                            if (rr_median <= 98.5) {
                                if (num_peaks <= 66.0) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 4;
                                }
                            } else {
                                votes[4] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 242.0) {
                            if (diastolic_time <= 115.25) {
                                votes[4] = 4;
                            } else {
                                votes[4] = 1;
                            }
                        } else {
                            votes[4] = 4;
                        }
                    }
                }
            } else {
                if (num_peaks <= 53.5) {
                    if (rr_median <= 128.0) {
                        if (rr_median <= 117.75) {
                            if (rr_median <= 110.5) {
                                votes[4] = 4;
                            } else {
                                votes[4] = 1;
                            }
                        } else {
                            if (diastolic_time <= 96.0) {
                                votes[4] = 2;
                            } else {
                                votes[4] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 167.0) {
                            votes[4] = 4;
                        } else {
                            votes[4] = 1;
                        }
                    }
                } else {
                    if (num_valleys <= 93.0) {
                        if (num_peaks <= 67.5) {
                            if (rr_median <= 188.75) {
                                votes[4] = 1;
                            } else {
                                if (num_peaks <= 58.5) {
                                    votes[4] = 1;
                                } else {
                                    votes[4] = 1;
                                }
                            }
                        } else {
                            votes[4] = 1;
                        }
                    } else {
                        votes[4] = 4;
                    }
                }
            }
        } else {
            if (num_peaks <= 85.5) {
                if (rr_median <= 95.75) {
                    if (rr_std <= 1.1386138200759888) {
                        if (rr_median <= 32.5) {
                            if (num_peaks <= 81.5) {
                                votes[4] = 0;
                            } else {
                                votes[4] = 3;
                            }
                        } else {
                            votes[4] = 5;
                        }
                    } else {
                        if (rr_median <= 57.25) {
                            votes[4] = 3;
                        } else {
                            if (rr_std <= 2.3821390867233276) {
                                votes[4] = 3;
                            } else {
                                if (diastolic_time <= 58.5) {
                                    votes[4] = 5;
                                } else {
                                    if (rr_std <= 14.465312480926514) {
                                        if (rr_std <= 9.419394969940186) {
                                            votes[4] = 0;
                                        } else {
                                            votes[4] = 0;
                                        }
                                    } else {
                                        votes[4] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 123.5) {
                        if (num_peaks <= 82.5) {
                            if (num_valleys <= 89.5) {
                                votes[4] = 5;
                            } else {
                                votes[4] = 5;
                            }
                        } else {
                            votes[4] = 1;
                        }
                    } else {
                        if (diastolic_time <= 70.25) {
                            votes[4] = 3;
                        } else {
                            votes[4] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 51.0) {
                    if (num_peaks <= 87.5) {
                        votes[4] = 0;
                    } else {
                        if (rr_std <= 10.97285509109497) {
                            votes[4] = 3;
                        } else {
                            if (rr_median <= 79.5) {
                                votes[4] = 3;
                            } else {
                                votes[4] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 98.5) {
                        if (num_valleys <= 92.5) {
                            if (num_valleys <= 89.5) {
                                if (num_peaks <= 87.5) {
                                    votes[4] = 0;
                                } else {
                                    if (rr_std <= 8.604505062103271) {
                                        votes[4] = 0;
                                    } else {
                                        votes[4] = 0;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 71.0) {
                                    if (rr_std <= 12.635570526123047) {
                                        votes[4] = 0;
                                    } else {
                                        votes[4] = 0;
                                    }
                                } else {
                                    if (rr_median <= 82.75) {
                                        votes[4] = 5;
                                    } else {
                                        votes[4] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[4] = 3;
                        }
                    } else {
                        if (rr_std <= 8.736711740493774) {
                            if (num_peaks <= 88.5) {
                                votes[4] = 5;
                            } else {
                                votes[4] = 1;
                            }
                        } else {
                            if (rr_std <= 48.953134536743164) {
                                votes[4] = 0;
                            } else {
                                if (rr_std <= 59.03360557556152) {
                                    votes[4] = 1;
                                } else {
                                    votes[4] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 5
    if (rr_median <= 126.5) {
        if (num_peaks <= 73.5) {
            if (num_valleys <= 84.5) {
                if (rr_median <= 64.0) {
                    if (num_peaks <= 39.0) {
                        votes[5] = 4;
                    } else {
                        if (num_valleys <= 78.5) {
                            votes[5] = 5;
                        } else {
                            if (rr_std <= 6.652691438794136) {
                                votes[5] = 3;
                            } else {
                                votes[5] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.9357241690158844) {
                        if (rr_median <= 87.0) {
                            if (num_valleys <= 73.0) {
                                votes[5] = 2;
                            } else {
                                if (num_peaks <= 57.5) {
                                    votes[5] = 2;
                                } else {
                                    if (rr_median <= 68.5) {
                                        votes[5] = 2;
                                    } else {
                                        if (num_peaks <= 61.0) {
                                            votes[5] = 2;
                                        } else {
                                            votes[5] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[5] = 1;
                        }
                    } else {
                        votes[5] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 110.5) {
                    if (diastolic_time <= 37.75) {
                        if (rr_median <= 51.75) {
                            if (num_peaks <= 60.5) {
                                if (num_peaks <= 41.5) {
                                    votes[5] = 4;
                                } else {
                                    if (num_peaks <= 57.5) {
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
                    } else {
                        if (rr_std <= 16.513286590576172) {
                            if (rr_median <= 113.5) {
                                if (diastolic_time <= 89.5) {
                                    if (num_peaks <= 40.5) {
                                        if (num_valleys <= 87.5) {
                                            votes[5] = 1;
                                        } else {
                                            votes[5] = 4;
                                        }
                                    } else {
                                        if (num_peaks <= 62.5) {
                                            votes[5] = 0;
                                        } else {
                                            votes[5] = 5;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 91.0) {
                                        votes[5] = 5;
                                    } else {
                                        votes[5] = 5;
                                    }
                                }
                            } else {
                                votes[5] = 2;
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                if (num_peaks <= 67.5) {
                                    if (diastolic_time <= 48.0) {
                                        votes[5] = 3;
                                    } else {
                                        votes[5] = 4;
                                    }
                                } else {
                                    votes[5] = 0;
                                }
                            } else {
                                if (rr_median <= 98.0) {
                                    if (rr_std <= 21.783602714538574) {
                                        votes[5] = 4;
                                    } else {
                                        votes[5] = 4;
                                    }
                                } else {
                                    if (num_valleys <= 90.5) {
                                        votes[5] = 1;
                                    } else {
                                        votes[5] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 326.0) {
                        if (num_peaks <= 52.0) {
                            votes[5] = 1;
                        } else {
                            votes[5] = 2;
                        }
                    } else {
                        votes[5] = 4;
                    }
                }
            }
        } else {
            if (diastolic_time <= 55.5) {
                if (rr_median <= 80.5) {
                    if (rr_median <= 20.5) {
                        if (diastolic_time <= 35.75) {
                            if (num_peaks <= 84.5) {
                                votes[5] = 3;
                            } else {
                                votes[5] = 2;
                            }
                        } else {
                            if (num_valleys <= 89.5) {
                                votes[5] = 0;
                            } else {
                                votes[5] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 55.25) {
                            if (rr_std <= 21.16132926940918) {
                                votes[5] = 3;
                            } else {
                                votes[5] = 3;
                            }
                        } else {
                            if (rr_std <= 9.368961334228516) {
                                if (diastolic_time <= 42.5) {
                                    votes[5] = 3;
                                } else {
                                    votes[5] = 3;
                                }
                            } else {
                                if (rr_std <= 20.973054885864258) {
                                    if (diastolic_time <= 43.25) {
                                        votes[5] = 3;
                                    } else {
                                        votes[5] = 0;
                                    }
                                } else {
                                    votes[5] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 86.5) {
                        if (rr_median <= 100.5) {
                            votes[5] = 5;
                        } else {
                            votes[5] = 5;
                        }
                    } else {
                        votes[5] = 3;
                    }
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 84.5) {
                        if (rr_std <= 21.503625869750977) {
                            if (num_valleys <= 91.5) {
                                if (num_valleys <= 88.5) {
                                    if (rr_median <= 63.0) {
                                        votes[5] = 3;
                                    } else {
                                        votes[5] = 2;
                                    }
                                } else {
                                    if (diastolic_time <= 84.0) {
                                        votes[5] = 0;
                                    } else {
                                        votes[5] = 0;
                                    }
                                }
                            } else {
                                votes[5] = 3;
                            }
                        } else {
                            votes[5] = 4;
                        }
                    } else {
                        if (diastolic_time <= 112.0) {
                            if (diastolic_time <= 80.0) {
                                votes[5] = 5;
                            } else {
                                if (num_peaks <= 80.5) {
                                    votes[5] = 5;
                                } else {
                                    votes[5] = 5;
                                }
                            }
                        } else {
                            votes[5] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 10.81374454498291) {
                        if (rr_std <= 0.1332346796989441) {
                            if (num_peaks <= 90.5) {
                                if (num_valleys <= 89.5) {
                                    votes[5] = 0;
                                } else {
                                    votes[5] = 0;
                                }
                            } else {
                                votes[5] = 3;
                            }
                        } else {
                            if (rr_std <= 8.847529888153076) {
                                if (rr_median <= 82.5) {
                                    votes[5] = 5;
                                } else {
                                    votes[5] = 2;
                                }
                            } else {
                                votes[5] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 98.75) {
                            if (num_peaks <= 87.5) {
                                votes[5] = 0;
                            } else {
                                votes[5] = 0;
                            }
                        } else {
                            if (diastolic_time <= 84.5) {
                                votes[5] = 1;
                            } else {
                                votes[5] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 60.79325866699219) {
            if (rr_median <= 258.25) {
                if (num_valleys <= 93.5) {
                    if (num_peaks <= 88.5) {
                        if (num_peaks <= 50.5) {
                            votes[5] = 1;
                        } else {
                            if (num_valleys <= 84.5) {
                                votes[5] = 1;
                            } else {
                                votes[5] = 1;
                            }
                        }
                    } else {
                        votes[5] = 0;
                    }
                } else {
                    votes[5] = 1;
                }
            } else {
                votes[5] = 0;
            }
        } else {
            if (num_peaks <= 80.5) {
                votes[5] = 3;
            } else {
                votes[5] = 0;
            }
        }
    }
// Decision rules for tree 6
    if (rr_median <= 129.5) {
        if (num_peaks <= 74.5) {
            if (num_valleys <= 85.5) {
                if (rr_median <= 61.5) {
                    if (diastolic_time <= 62.75) {
                        if (num_peaks <= 58.5) {
                            if (num_peaks <= 49.5) {
                                votes[6] = 4;
                            } else {
                                votes[6] = 4;
                            }
                        } else {
                            votes[6] = 1;
                        }
                    } else {
                        if (num_peaks <= 40.0) {
                            votes[6] = 4;
                        } else {
                            votes[6] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 0.7299954891204834) {
                        if (num_peaks <= 43.5) {
                            votes[6] = 2;
                        } else {
                            if (rr_std <= 0.47034794092178345) {
                                if (rr_std <= 0.43653950095176697) {
                                    if (diastolic_time <= 72.75) {
                                        votes[6] = 2;
                                    } else {
                                        votes[6] = 2;
                                    }
                                } else {
                                    votes[6] = 2;
                                }
                            } else {
                                if (diastolic_time <= 54.5) {
                                    votes[6] = 2;
                                } else {
                                    votes[6] = 2;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 43.0) {
                            votes[6] = 5;
                        } else {
                            votes[6] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 119.75) {
                    if (diastolic_time <= 102.25) {
                        if (rr_std <= 24.55654811859131) {
                            if (num_peaks <= 43.5) {
                                if (num_valleys <= 90.5) {
                                    if (diastolic_time <= 39.25) {
                                        votes[6] = 4;
                                    } else {
                                        if (num_valleys <= 88.5) {
                                            votes[6] = 5;
                                        } else {
                                            votes[6] = 5;
                                        }
                                    }
                                } else {
                                    votes[6] = 4;
                                }
                            } else {
                                if (diastolic_time <= 70.75) {
                                    if (rr_median <= 85.5) {
                                        if (diastolic_time <= 47.25) {
                                            votes[6] = 3;
                                        } else {
                                            votes[6] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 1.345864713191986) {
                                            votes[6] = 1;
                                        } else {
                                            votes[6] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 13.518269538879395) {
                                        if (rr_std <= 5.339977025985718) {
                                            votes[6] = 5;
                                        } else {
                                            votes[6] = 5;
                                        }
                                    } else {
                                        if (num_valleys <= 90.5) {
                                            votes[6] = 4;
                                        } else {
                                            votes[6] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 79.25) {
                                if (num_peaks <= 52.5) {
                                    votes[6] = 4;
                                } else {
                                    if (rr_std <= 58.07765769958496) {
                                        votes[6] = 0;
                                    } else {
                                        votes[6] = 3;
                                    }
                                }
                            } else {
                                votes[6] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 244.5) {
                            if (diastolic_time <= 114.75) {
                                votes[6] = 4;
                            } else {
                                votes[6] = 1;
                            }
                        } else {
                            votes[6] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 111.75) {
                        votes[6] = 2;
                    } else {
                        votes[6] = 2;
                    }
                }
            }
        } else {
            if (diastolic_time <= 52.75) {
                if (rr_median <= 67.25) {
                    if (rr_std <= 0.34712910652160645) {
                        if (num_peaks <= 82.5) {
                            votes[6] = 0;
                        } else {
                            if (num_valleys <= 86.0) {
                                votes[6] = 2;
                            } else {
                                if (diastolic_time <= 43.5) {
                                    votes[6] = 3;
                                } else {
                                    votes[6] = 1;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 47.5) {
                            votes[6] = 3;
                        } else {
                            if (diastolic_time <= 50.5) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 89.5) {
                        if (diastolic_time <= 46.5) {
                            if (num_valleys <= 88.5) {
                                if (num_valleys <= 82.0) {
                                    votes[6] = 5;
                                } else {
                                    votes[6] = 3;
                                }
                            } else {
                                votes[6] = 5;
                            }
                        } else {
                            votes[6] = 3;
                        }
                    } else {
                        votes[6] = 1;
                    }
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 85.25) {
                        if (rr_std <= 9.639904499053955) {
                            if (diastolic_time <= 86.25) {
                                if (num_valleys <= 88.5) {
                                    votes[6] = 3;
                                } else {
                                    votes[6] = 3;
                                }
                            } else {
                                votes[6] = 0;
                            }
                        } else {
                            if (rr_std <= 14.293018341064453) {
                                votes[6] = 0;
                            } else {
                                if (diastolic_time <= 76.0) {
                                    votes[6] = 3;
                                } else {
                                    votes[6] = 4;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 118.5) {
                            if (num_peaks <= 76.5) {
                                votes[6] = 4;
                            } else {
                                if (rr_std <= 2.019017994403839) {
                                    votes[6] = 5;
                                } else {
                                    if (rr_median <= 97.25) {
                                        votes[6] = 5;
                                    } else {
                                        votes[6] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[6] = 2;
                        }
                    }
                } else {
                    if (rr_median <= 98.75) {
                        if (num_valleys <= 86.5) {
                            votes[6] = 2;
                        } else {
                            if (rr_std <= 8.847529888153076) {
                                if (num_peaks <= 86.5) {
                                    votes[6] = 0;
                                } else {
                                    if (diastolic_time <= 64.5) {
                                        votes[6] = 0;
                                    } else {
                                        if (num_peaks <= 89.5) {
                                            votes[6] = 5;
                                        } else {
                                            votes[6] = 2;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 87.5) {
                                    votes[6] = 0;
                                } else {
                                    if (rr_std <= 15.322660446166992) {
                                        votes[6] = 0;
                                    } else {
                                        if (diastolic_time <= 71.5) {
                                            votes[6] = 3;
                                        } else {
                                            votes[6] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 81.5) {
                            votes[6] = 1;
                        } else {
                            if (rr_std <= 8.736711740493774) {
                                votes[6] = 1;
                            } else {
                                if (diastolic_time <= 95.75) {
                                    votes[6] = 0;
                                } else {
                                    votes[6] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 87.5) {
            if (rr_median <= 258.25) {
                if (rr_std <= 63.268131256103516) {
                    if (rr_median <= 134.5) {
                        if (diastolic_time <= 108.75) {
                            votes[6] = 1;
                        } else {
                            votes[6] = 1;
                        }
                    } else {
                        if (num_valleys <= 93.5) {
                            if (rr_std <= 2.2185760736465454) {
                                votes[6] = 1;
                            } else {
                                votes[6] = 1;
                            }
                        } else {
                            votes[6] = 1;
                        }
                    }
                } else {
                    votes[6] = 1;
                }
            } else {
                votes[6] = 0;
            }
        } else {
            if (rr_std <= 50.41456604003906) {
                votes[6] = 1;
            } else {
                votes[6] = 0;
            }
        }
    }
// Decision rules for tree 7
    if (rr_median <= 102.5) {
        if (num_valleys <= 84.5) {
            if (diastolic_time <= 76.25) {
                if (rr_std <= 0.6868122220039368) {
                    if (rr_median <= 64.0) {
                        if (num_valleys <= 80.5) {
                            if (diastolic_time <= 54.5) {
                                votes[7] = 5;
                            } else {
                                votes[7] = 3;
                            }
                        } else {
                            votes[7] = 4;
                        }
                    } else {
                        if (num_peaks <= 78.0) {
                            if (diastolic_time <= 70.5) {
                                if (rr_std <= 0.545406848192215) {
                                    if (num_peaks <= 52.5) {
                                        votes[7] = 2;
                                    } else {
                                        votes[7] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 47.0) {
                                        votes[7] = 2;
                                    } else {
                                        votes[7] = 2;
                                    }
                                }
                            } else {
                                votes[7] = 2;
                            }
                        } else {
                            votes[7] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 67.5) {
                        if (diastolic_time <= 46.75) {
                            votes[7] = 5;
                        } else {
                            votes[7] = 1;
                        }
                    } else {
                        if (num_peaks <= 81.5) {
                            if (rr_std <= 1.2195955514907837) {
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
                if (diastolic_time <= 102.0) {
                    if (rr_median <= 77.0) {
                        votes[7] = 5;
                    } else {
                        votes[7] = 5;
                    }
                } else {
                    votes[7] = 1;
                }
            }
        } else {
            if (num_peaks <= 75.5) {
                if (diastolic_time <= 79.25) {
                    if (diastolic_time <= 42.0) {
                        if (rr_median <= 59.5) {
                            if (num_valleys <= 86.5) {
                                votes[7] = 5;
                            } else {
                                if (num_peaks <= 39.5) {
                                    if (num_peaks <= 32.0) {
                                        votes[7] = 4;
                                    } else {
                                        votes[7] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 64.0) {
                                        if (num_valleys <= 90.5) {
                                            votes[7] = 4;
                                        } else {
                                            votes[7] = 4;
                                        }
                                    } else {
                                        votes[7] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 73.5) {
                                votes[7] = 3;
                            } else {
                                votes[7] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 9.325254917144775) {
                            if (rr_std <= 0.8911289274692535) {
                                if (num_peaks <= 43.5) {
                                    votes[7] = 4;
                                } else {
                                    if (diastolic_time <= 52.5) {
                                        votes[7] = 3;
                                    } else {
                                        if (diastolic_time <= 66.5) {
                                            votes[7] = 2;
                                        } else {
                                            votes[7] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 52.5) {
                                    votes[7] = 3;
                                } else {
                                    votes[7] = 3;
                                }
                            }
                        } else {
                            if (diastolic_time <= 70.5) {
                                if (rr_std <= 22.26320171356201) {
                                    if (rr_median <= 65.5) {
                                        votes[7] = 0;
                                    } else {
                                        if (rr_std <= 13.735273361206055) {
                                            votes[7] = 0;
                                        } else {
                                            votes[7] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 76.5) {
                                        votes[7] = 4;
                                    } else {
                                        votes[7] = 5;
                                    }
                                }
                            } else {
                                votes[7] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 307.5) {
                        if (diastolic_time <= 110.5) {
                            if (rr_std <= 15.10298204421997) {
                                if (num_peaks <= 49.5) {
                                    votes[7] = 5;
                                } else {
                                    if (rr_std <= 0.5678908228874207) {
                                        votes[7] = 5;
                                    } else {
                                        votes[7] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 17.506596565246582) {
                                    votes[7] = 4;
                                } else {
                                    if (rr_std <= 29.813352584838867) {
                                        if (rr_median <= 88.5) {
                                            votes[7] = 4;
                                        } else {
                                            votes[7] = 4;
                                        }
                                    } else {
                                        votes[7] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[7] = 1;
                        }
                    } else {
                        votes[7] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 32.5) {
                    votes[7] = 3;
                } else {
                    if (rr_std <= 0.1332346796989441) {
                        if (num_peaks <= 89.5) {
                            if (diastolic_time <= 49.5) {
                                votes[7] = 0;
                            } else {
                                if (diastolic_time <= 63.0) {
                                    votes[7] = 0;
                                } else {
                                    votes[7] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 56.75) {
                                votes[7] = 2;
                            } else {
                                votes[7] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 55.25) {
                            votes[7] = 3;
                        } else {
                            if (rr_std <= 4.952436447143555) {
                                if (diastolic_time <= 93.25) {
                                    if (rr_std <= 1.1057032346725464) {
                                        votes[7] = 5;
                                    } else {
                                        votes[7] = 3;
                                    }
                                } else {
                                    votes[7] = 2;
                                }
                            } else {
                                if (diastolic_time <= 49.5) {
                                    if (rr_median <= 75.0) {
                                        votes[7] = 3;
                                    } else {
                                        votes[7] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 84.5) {
                                        if (rr_std <= 14.293018341064453) {
                                            votes[7] = 0;
                                        } else {
                                            votes[7] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 87.5) {
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
        }
    } else {
        if (rr_std <= 39.87405586242676) {
            if (rr_median <= 131.0) {
                if (rr_median <= 118.5) {
                    if (rr_std <= 16.635660648345947) {
                        if (num_peaks <= 69.5) {
                            if (diastolic_time <= 70.0) {
                                votes[7] = 1;
                            } else {
                                votes[7] = 1;
                            }
                        } else {
                            votes[7] = 5;
                        }
                    } else {
                        if (rr_median <= 109.5) {
                            votes[7] = 5;
                        } else {
                            votes[7] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 56.5) {
                        if (num_peaks <= 52.0) {
                            votes[7] = 2;
                        } else {
                            votes[7] = 2;
                        }
                    } else {
                        if (rr_std <= 3.483351707458496) {
                            votes[7] = 2;
                        } else {
                            votes[7] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.4714045226573944) {
                    votes[7] = 5;
                } else {
                    if (num_valleys <= 93.5) {
                        if (rr_median <= 134.5) {
                            votes[7] = 1;
                        } else {
                            if (rr_median <= 139.75) {
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
            if (num_peaks <= 78.5) {
                if (num_valleys <= 90.5) {
                    if (num_peaks <= 56.5) {
                        votes[7] = 1;
                    } else {
                        votes[7] = 3;
                    }
                } else {
                    votes[7] = 4;
                }
            } else {
                if (rr_median <= 119.75) {
                    votes[7] = 1;
                } else {
                    if (diastolic_time <= 58.5) {
                        votes[7] = 0;
                    } else {
                        votes[7] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 8
    if (rr_median <= 128.75) {
        if (num_valleys <= 85.5) {
            if (rr_std <= 0.6868122220039368) {
                if (rr_median <= 61.5) {
                    if (diastolic_time <= 68.25) {
                        if (num_peaks <= 39.5) {
                            votes[8] = 4;
                        } else {
                            if (diastolic_time <= 35.75) {
                                votes[8] = 2;
                            } else {
                                if (diastolic_time <= 56.0) {
                                    votes[8] = 3;
                                } else {
                                    votes[8] = 3;
                                }
                            }
                        }
                    } else {
                        votes[8] = 5;
                    }
                } else {
                    if (num_peaks <= 79.0) {
                        if (rr_median <= 76.0) {
                            if (rr_median <= 71.0) {
                                if (rr_std <= 0.47034794092178345) {
                                    votes[8] = 2;
                                } else {
                                    if (diastolic_time <= 59.0) {
                                        votes[8] = 2;
                                    } else {
                                        votes[8] = 2;
                                    }
                                }
                            } else {
                                votes[8] = 2;
                            }
                        } else {
                            votes[8] = 2;
                        }
                    } else {
                        votes[8] = 3;
                    }
                }
            } else {
                if (rr_median <= 65.5) {
                    if (num_peaks <= 65.5) {
                        votes[8] = 5;
                    } else {
                        if (num_valleys <= 83.5) {
                            votes[8] = 3;
                        } else {
                            votes[8] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 59.5) {
                        votes[8] = 1;
                    } else {
                        if (num_peaks <= 87.5) {
                            if (num_valleys <= 82.5) {
                                votes[8] = 5;
                            } else {
                                if (num_peaks <= 77.5) {
                                    votes[8] = 5;
                                } else {
                                    votes[8] = 5;
                                }
                            }
                        } else {
                            votes[8] = 3;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 73.5) {
                if (diastolic_time <= 37.75) {
                    if (rr_median <= 61.25) {
                        if (diastolic_time <= 10.0) {
                            votes[8] = 4;
                        } else {
                            if (diastolic_time <= 35.5) {
                                votes[8] = 4;
                            } else {
                                if (num_peaks <= 58.5) {
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
                    if (rr_std <= 32.87550640106201) {
                        if (rr_median <= 117.75) {
                            if (diastolic_time <= 75.5) {
                                if (num_peaks <= 34.5) {
                                    if (diastolic_time <= 54.75) {
                                        votes[8] = 4;
                                    } else {
                                        votes[8] = 4;
                                    }
                                } else {
                                    if (rr_std <= 1.4317973256111145) {
                                        if (diastolic_time <= 45.5) {
                                            votes[8] = 5;
                                        } else {
                                            votes[8] = 2;
                                        }
                                    } else {
                                        if (rr_std <= 11.68827199935913) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 261.5) {
                                    if (diastolic_time <= 101.75) {
                                        if (rr_std <= 13.416666030883789) {
                                            votes[8] = 5;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 118.25) {
                                            votes[8] = 1;
                                        } else {
                                            votes[8] = 1;
                                        }
                                    }
                                } else {
                                    votes[8] = 4;
                                }
                            }
                        } else {
                            if (num_peaks <= 54.0) {
                                votes[8] = 2;
                            } else {
                                votes[8] = 2;
                            }
                        }
                    } else {
                        if (diastolic_time <= 96.25) {
                            if (diastolic_time <= 54.25) {
                                votes[8] = 4;
                            } else {
                                votes[8] = 4;
                            }
                        } else {
                            votes[8] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 48.75) {
                    if (rr_median <= 77.75) {
                        if (rr_std <= 0.6683902740478516) {
                            if (diastolic_time <= 36.5) {
                                votes[8] = 0;
                            } else {
                                votes[8] = 0;
                            }
                        } else {
                            if (rr_median <= 68.0) {
                                votes[8] = 3;
                            } else {
                                votes[8] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 84.5) {
                            votes[8] = 5;
                        } else {
                            votes[8] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 9.411471843719482) {
                        if (rr_median <= 60.25) {
                            if (num_valleys <= 92.5) {
                                if (diastolic_time <= 88.25) {
                                    if (num_peaks <= 88.5) {
                                        if (num_peaks <= 85.5) {
                                            votes[8] = 0;
                                        } else {
                                            votes[8] = 0;
                                        }
                                    } else {
                                        votes[8] = 2;
                                    }
                                } else {
                                    votes[8] = 5;
                                }
                            } else {
                                votes[8] = 3;
                            }
                        } else {
                            if (rr_median <= 99.25) {
                                if (rr_median <= 92.25) {
                                    if (num_peaks <= 84.5) {
                                        if (rr_std <= 1.071795403957367) {
                                            votes[8] = 5;
                                        } else {
                                            votes[8] = 3;
                                        }
                                    } else {
                                        votes[8] = 5;
                                    }
                                } else {
                                    if (rr_std <= 2.039719521999359) {
                                        votes[8] = 2;
                                    } else {
                                        votes[8] = 3;
                                    }
                                }
                            } else {
                                if (num_peaks <= 86.0) {
                                    votes[8] = 5;
                                } else {
                                    votes[8] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 17.401501655578613) {
                            if (rr_median <= 59.25) {
                                votes[8] = 0;
                            } else {
                                if (rr_std <= 13.619210243225098) {
                                    votes[8] = 0;
                                } else {
                                    votes[8] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 64.0) {
                                if (num_peaks <= 82.5) {
                                    votes[8] = 3;
                                } else {
                                    votes[8] = 3;
                                }
                            } else {
                                if (num_peaks <= 87.5) {
                                    if (rr_std <= 29.396300315856934) {
                                        if (num_peaks <= 83.0) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    } else {
                                        votes[8] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 80.25) {
                                        votes[8] = 0;
                                    } else {
                                        votes[8] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 51.73190116882324) {
            if (rr_std <= 0.44031527638435364) {
                votes[8] = 5;
            } else {
                if (num_valleys <= 93.5) {
                    if (diastolic_time <= 34.5) {
                        votes[8] = 1;
                    } else {
                        if (rr_std <= 44.48172378540039) {
                            votes[8] = 1;
                        } else {
                            votes[8] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 16.497071266174316) {
                        votes[8] = 1;
                    } else {
                        votes[8] = 4;
                    }
                }
            }
        } else {
            if (num_peaks <= 72.5) {
                votes[8] = 1;
            } else {
                if (rr_median <= 210.75) {
                    votes[8] = 0;
                } else {
                    votes[8] = 2;
                }
            }
        }
    }
// Decision rules for tree 9
    if (rr_median <= 128.75) {
        if (num_peaks <= 74.5) {
            if (num_valleys <= 84.5) {
                if (rr_median <= 64.0) {
                    if (diastolic_time <= 68.25) {
                        if (num_valleys <= 81.0) {
                            votes[9] = 3;
                        } else {
                            if (num_valleys <= 83.5) {
                                votes[9] = 1;
                            } else {
                                votes[9] = 2;
                            }
                        }
                    } else {
                        votes[9] = 5;
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (rr_median <= 73.5) {
                            if (num_valleys <= 75.0) {
                                votes[9] = 2;
                            } else {
                                if (diastolic_time <= 66.5) {
                                    if (diastolic_time <= 52.25) {
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
                    } else {
                        if (diastolic_time <= 47.0) {
                            votes[9] = 5;
                        } else {
                            votes[9] = 3;
                        }
                    }
                }
            } else {
                if (rr_median <= 119.75) {
                    if (diastolic_time <= 76.25) {
                        if (diastolic_time <= 40.75) {
                            if (rr_median <= 52.75) {
                                if (num_peaks <= 60.5) {
                                    if (num_peaks <= 39.5) {
                                        if (num_peaks <= 35.0) {
                                            votes[9] = 4;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 36.5) {
                                            votes[9] = 4;
                                        } else {
                                            votes[9] = 4;
                                        }
                                    }
                                } else {
                                    votes[9] = 4;
                                }
                            } else {
                                if (num_valleys <= 87.5) {
                                    votes[9] = 5;
                                } else {
                                    votes[9] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 9.325254917144775) {
                                if (diastolic_time <= 54.75) {
                                    if (num_peaks <= 41.5) {
                                        votes[9] = 5;
                                    } else {
                                        if (rr_median <= 62.5) {
                                            votes[9] = 3;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 63.0) {
                                        if (num_peaks <= 38.5) {
                                            votes[9] = 4;
                                        } else {
                                            votes[9] = 2;
                                        }
                                    } else {
                                        if (num_peaks <= 54.5) {
                                            votes[9] = 0;
                                        } else {
                                            votes[9] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 51.5) {
                                    votes[9] = 5;
                                } else {
                                    if (rr_median <= 65.0) {
                                        votes[9] = 1;
                                    } else {
                                        if (rr_std <= 12.765840530395508) {
                                            votes[9] = 0;
                                        } else {
                                            votes[9] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.530351161956787) {
                            if (diastolic_time <= 261.5) {
                                if (diastolic_time <= 109.25) {
                                    if (rr_std <= 5.594327926635742) {
                                        if (num_peaks <= 61.0) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    } else {
                                        votes[9] = 1;
                                    }
                                } else {
                                    votes[9] = 1;
                                }
                            } else {
                                votes[9] = 4;
                            }
                        } else {
                            if (diastolic_time <= 102.25) {
                                if (rr_median <= 98.0) {
                                    if (rr_std <= 19.34684944152832) {
                                        votes[9] = 4;
                                    } else {
                                        votes[9] = 4;
                                    }
                                } else {
                                    votes[9] = 4;
                                }
                            } else {
                                if (num_valleys <= 90.5) {
                                    votes[9] = 1;
                                } else {
                                    votes[9] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 53.5) {
                        if (rr_std <= 7.793314218521118) {
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
            if (num_valleys <= 86.5) {
                if (diastolic_time <= 71.5) {
                    if (rr_median <= 99.0) {
                        if (rr_std <= 0.8987637162208557) {
                            if (num_peaks <= 81.5) {
                                votes[9] = 3;
                            } else {
                                if (rr_median <= 67.5) {
                                    votes[9] = 2;
                                } else {
                                    votes[9] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 44.0) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 3;
                            }
                        }
                    } else {
                        votes[9] = 1;
                    }
                } else {
                    if (diastolic_time <= 92.0) {
                        if (rr_std <= 0.6449393630027771) {
                            votes[9] = 5;
                        } else {
                            votes[9] = 5;
                        }
                    } else {
                        votes[9] = 1;
                    }
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 85.25) {
                        if (rr_std <= 22.08082866668701) {
                            if (diastolic_time <= 32.5) {
                                votes[9] = 3;
                            } else {
                                if (diastolic_time <= 73.75) {
                                    if (num_valleys <= 88.5) {
                                        votes[9] = 3;
                                    } else {
                                        if (rr_median <= 67.25) {
                                            votes[9] = 0;
                                        } else {
                                            votes[9] = 0;
                                        }
                                    }
                                } else {
                                    votes[9] = 3;
                                }
                            }
                        } else {
                            votes[9] = 4;
                        }
                    } else {
                        if (diastolic_time <= 118.5) {
                            if (rr_std <= 22.437969207763672) {
                                if (rr_std <= 11.402787208557129) {
                                    if (rr_std <= 3.1283401250839233) {
                                        votes[9] = 5;
                                    } else {
                                        votes[9] = 1;
                                    }
                                } else {
                                    votes[9] = 5;
                                }
                            } else {
                                if (diastolic_time <= 83.25) {
                                    votes[9] = 0;
                                } else {
                                    votes[9] = 5;
                                }
                            }
                        } else {
                            votes[9] = 0;
                        }
                    }
                } else {
                    if (diastolic_time <= 54.75) {
                        if (num_peaks <= 91.5) {
                            if (rr_median <= 84.0) {
                                if (rr_std <= 12.064622402191162) {
                                    if (diastolic_time <= 47.25) {
                                        votes[9] = 3;
                                    } else {
                                        votes[9] = 0;
                                    }
                                } else {
                                    votes[9] = 3;
                                }
                            } else {
                                votes[9] = 3;
                            }
                        } else {
                            votes[9] = 2;
                        }
                    } else {
                        if (rr_std <= 5.94279670715332) {
                            if (diastolic_time <= 83.75) {
                                if (num_peaks <= 89.5) {
                                    votes[9] = 0;
                                } else {
                                    votes[9] = 0;
                                }
                            } else {
                                if (rr_std <= 1.3431020379066467) {
                                    votes[9] = 5;
                                } else {
                                    votes[9] = 2;
                                }
                            }
                        } else {
                            if (num_peaks <= 87.5) {
                                if (num_peaks <= 86.5) {
                                    votes[9] = 0;
                                } else {
                                    votes[9] = 5;
                                }
                            } else {
                                if (rr_std <= 22.975722312927246) {
                                    votes[9] = 0;
                                } else {
                                    if (num_peaks <= 89.5) {
                                        votes[9] = 1;
                                    } else {
                                        votes[9] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 51.73190116882324) {
            if (rr_std <= 0.4517539441585541) {
                votes[9] = 5;
            } else {
                if (num_valleys <= 93.5) {
                    if (num_peaks <= 50.5) {
                        votes[9] = 1;
                    } else {
                        if (num_peaks <= 86.5) {
                            votes[9] = 1;
                        } else {
                            votes[9] = 1;
                        }
                    }
                } else {
                    votes[9] = 1;
                }
            }
        } else {
            if (num_peaks <= 81.0) {
                votes[9] = 1;
            } else {
                votes[9] = 0;
            }
        }
    }
// Decision rules for tree 10
    if (rr_median <= 124.75) {
        if (num_valleys <= 85.5) {
            if (num_peaks <= 74.5) {
                if (rr_median <= 61.5) {
                    if (diastolic_time <= 67.75) {
                        if (num_peaks <= 40.0) {
                            votes[10] = 4;
                        } else {
                            if (diastolic_time <= 46.0) {
                                votes[10] = 1;
                            } else {
                                votes[10] = 5;
                            }
                        }
                    } else {
                        votes[10] = 5;
                    }
                } else {
                    if (rr_std <= 0.730697900056839) {
                        if (diastolic_time <= 66.5) {
                            if (num_valleys <= 77.5) {
                                votes[10] = 2;
                            } else {
                                votes[10] = 2;
                            }
                        } else {
                            if (rr_median <= 69.5) {
                                votes[10] = 2;
                            } else {
                                votes[10] = 2;
                            }
                        }
                    } else {
                        votes[10] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 68.25) {
                    if (rr_median <= 88.5) {
                        if (num_peaks <= 91.0) {
                            if (rr_median <= 64.75) {
                                if (num_valleys <= 83.5) {
                                    votes[10] = 3;
                                } else {
                                    votes[10] = 3;
                                }
                            } else {
                                votes[10] = 3;
                            }
                        } else {
                            votes[10] = 2;
                        }
                    } else {
                        votes[10] = 1;
                    }
                } else {
                    if (rr_std <= 6.886102318763733) {
                        votes[10] = 5;
                    } else {
                        votes[10] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 77.5) {
                if (diastolic_time <= 327.0) {
                    if (diastolic_time <= 102.25) {
                        if (rr_std <= 17.506596565246582) {
                            if (diastolic_time <= 38.5) {
                                if (rr_median <= 54.5) {
                                    if (num_peaks <= 62.0) {
                                        if (num_valleys <= 92.5) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        votes[10] = 5;
                                    }
                                } else {
                                    votes[10] = 1;
                                }
                            } else {
                                if (rr_median <= 74.25) {
                                    if (num_peaks <= 40.5) {
                                        if (num_peaks <= 24.5) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 49.5) {
                                            votes[10] = 2;
                                        } else {
                                            votes[10] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 115.25) {
                                        if (num_peaks <= 53.5) {
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
                            if (diastolic_time <= 76.75) {
                                if (num_peaks <= 49.5) {
                                    votes[10] = 4;
                                } else {
                                    if (num_peaks <= 61.5) {
                                        if (rr_std <= 23.3363618850708) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 1;
                                        }
                                    } else {
                                        if (diastolic_time <= 50.75) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 97.75) {
                                    if (diastolic_time <= 84.0) {
                                        votes[10] = 4;
                                    } else {
                                        if (rr_std <= 28.752553939819336) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 41.14813995361328) {
                                        votes[10] = 5;
                                    } else {
                                        votes[10] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 115.0) {
                            if (diastolic_time <= 115.25) {
                                votes[10] = 1;
                            } else {
                                if (diastolic_time <= 119.75) {
                                    votes[10] = 1;
                                } else {
                                    votes[10] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 7.5153608322143555) {
                                votes[10] = 2;
                            } else {
                                votes[10] = 2;
                            }
                        }
                    }
                } else {
                    votes[10] = 4;
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 103.0) {
                        if (rr_median <= 21.0) {
                            if (num_peaks <= 81.5) {
                                votes[10] = 0;
                            } else {
                                votes[10] = 0;
                            }
                        } else {
                            if (rr_std <= 8.745098114013672) {
                                if (rr_std <= 1.1686662435531616) {
                                    votes[10] = 5;
                                } else {
                                    votes[10] = 3;
                                }
                            } else {
                                if (diastolic_time <= 52.5) {
                                    votes[10] = 3;
                                } else {
                                    if (rr_std <= 14.293018341064453) {
                                        votes[10] = 0;
                                    } else {
                                        if (rr_std <= 23.909074783325195) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        votes[10] = 5;
                    }
                } else {
                    if (rr_std <= 4.3836669921875) {
                        if (diastolic_time <= 73.25) {
                            if (num_peaks <= 89.5) {
                                if (diastolic_time <= 48.0) {
                                    votes[10] = 3;
                                } else {
                                    if (diastolic_time <= 57.75) {
                                        votes[10] = 0;
                                    } else {
                                        votes[10] = 0;
                                    }
                                }
                            } else {
                                votes[10] = 2;
                            }
                        } else {
                            if (num_valleys <= 89.5) {
                                votes[10] = 2;
                            } else {
                                votes[10] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 55.5) {
                            if (rr_std <= 11.281786441802979) {
                                votes[10] = 3;
                            } else {
                                votes[10] = 3;
                            }
                        } else {
                            if (diastolic_time <= 41.25) {
                                votes[10] = 3;
                            } else {
                                if (num_peaks <= 87.5) {
                                    if (rr_std <= 18.961833000183105) {
                                        if (rr_median <= 77.5) {
                                            votes[10] = 0;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        votes[10] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 54.0) {
                                        votes[10] = 0;
                                    } else {
                                        if (num_peaks <= 89.5) {
                                            votes[10] = 0;
                                        } else {
                                            votes[10] = 0;
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
        if (rr_std <= 42.673622131347656) {
            if (num_peaks <= 48.5) {
                votes[10] = 2;
            } else {
                if (rr_std <= 1.1459661722183228) {
                    votes[10] = 1;
                } else {
                    if (rr_median <= 134.25) {
                        if (rr_std <= 8.250014781951904) {
                            votes[10] = 1;
                        } else {
                            votes[10] = 1;
                        }
                    } else {
                        votes[10] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 83.5) {
                if (num_valleys <= 90.5) {
                    votes[10] = 1;
                } else {
                    votes[10] = 4;
                }
            } else {
                if (diastolic_time <= 81.75) {
                    votes[10] = 0;
                } else {
                    votes[10] = 0;
                }
            }
        }
    }
// Decision rules for tree 11
    if (rr_median <= 105.5) {
        if (num_peaks <= 74.5) {
            if (num_valleys <= 84.5) {
                if (rr_median <= 66.0) {
                    if (num_peaks <= 40.0) {
                        votes[11] = 5;
                    } else {
                        if (rr_std <= 0.24944382905960083) {
                            votes[11] = 3;
                        } else {
                            votes[11] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (rr_std <= 0.4740213602781296) {
                            if (num_peaks <= 53.5) {
                                if (num_valleys <= 80.5) {
                                    if (rr_std <= 0.43653950095176697) {
                                        votes[11] = 2;
                                    } else {
                                        votes[11] = 2;
                                    }
                                } else {
                                    votes[11] = 2;
                                }
                            } else {
                                votes[11] = 3;
                            }
                        } else {
                            votes[11] = 2;
                        }
                    } else {
                        if (num_valleys <= 81.5) {
                            votes[11] = 3;
                        } else {
                            votes[11] = 5;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 102.5) {
                    if (rr_std <= 21.01315402984619) {
                        if (diastolic_time <= 40.25) {
                            if (rr_median <= 54.5) {
                                if (num_peaks <= 39.5) {
                                    votes[11] = 4;
                                } else {
                                    if (diastolic_time <= 37.75) {
                                        if (num_peaks <= 57.0) {
                                            votes[11] = 4;
                                        } else {
                                            votes[11] = 4;
                                        }
                                    } else {
                                        votes[11] = 4;
                                    }
                                }
                            } else {
                                votes[11] = 3;
                            }
                        } else {
                            if (diastolic_time <= 81.75) {
                                if (num_peaks <= 29.5) {
                                    votes[11] = 4;
                                } else {
                                    if (diastolic_time <= 55.25) {
                                        if (rr_median <= 58.75) {
                                            votes[11] = 3;
                                        } else {
                                            votes[11] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 66.5) {
                                            votes[11] = 2;
                                        } else {
                                            votes[11] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 4.2942750453948975) {
                                    if (num_peaks <= 50.0) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 5;
                                    }
                                } else {
                                    votes[11] = 5;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 68.0) {
                            if (rr_std <= 37.38591480255127) {
                                votes[11] = 0;
                            } else {
                                votes[11] = 5;
                            }
                        } else {
                            if (rr_std <= 29.813352584838867) {
                                if (rr_median <= 86.0) {
                                    votes[11] = 4;
                                } else {
                                    votes[11] = 0;
                                }
                            } else {
                                votes[11] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 307.5) {
                        if (rr_median <= 70.5) {
                            votes[11] = 1;
                        } else {
                            votes[11] = 1;
                        }
                    } else {
                        votes[11] = 4;
                    }
                }
            }
        } else {
            if (num_valleys <= 87.5) {
                if (num_peaks <= 87.5) {
                    if (rr_median <= 73.0) {
                        if (num_peaks <= 85.5) {
                            if (diastolic_time <= 62.0) {
                                votes[11] = 3;
                            } else {
                                votes[11] = 3;
                            }
                        } else {
                            votes[11] = 0;
                        }
                    } else {
                        if (num_peaks <= 81.5) {
                            if (diastolic_time <= 67.5) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 2;
                            }
                        } else {
                            if (rr_median <= 83.0) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.24845199286937714) {
                        votes[11] = 2;
                    } else {
                        if (diastolic_time <= 49.25) {
                            votes[11] = 3;
                        } else {
                            votes[11] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 52.75) {
                    if (num_peaks <= 77.5) {
                        if (rr_median <= 61.25) {
                            votes[11] = 0;
                        } else {
                            votes[11] = 5;
                        }
                    } else {
                        if (rr_std <= 2.030620038509369) {
                            if (diastolic_time <= 46.0) {
                                votes[11] = 0;
                            } else {
                                votes[11] = 1;
                            }
                        } else {
                            if (rr_median <= 60.5) {
                                votes[11] = 3;
                            } else {
                                if (num_peaks <= 89.5) {
                                    votes[11] = 5;
                                } else {
                                    votes[11] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 82.5) {
                        if (rr_median <= 73.0) {
                            if (diastolic_time <= 67.75) {
                                votes[11] = 0;
                            } else {
                                if (num_valleys <= 92.5) {
                                    votes[11] = 3;
                                } else {
                                    votes[11] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 19.447372436523438) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 10.224267959594727) {
                            if (rr_median <= 67.5) {
                                if (diastolic_time <= 75.0) {
                                    if (num_peaks <= 85.5) {
                                        votes[11] = 0;
                                    } else {
                                        if (num_peaks <= 89.0) {
                                            votes[11] = 0;
                                        } else {
                                            votes[11] = 0;
                                        }
                                    }
                                } else {
                                    votes[11] = 0;
                                }
                            } else {
                                if (num_peaks <= 85.5) {
                                    votes[11] = 0;
                                } else {
                                    votes[11] = 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 89.5) {
                                if (rr_std <= 16.257240295410156) {
                                    if (rr_std <= 12.887783527374268) {
                                        votes[11] = 0;
                                    } else {
                                        votes[11] = 0;
                                    }
                                } else {
                                    if (rr_std <= 23.78132724761963) {
                                        votes[11] = 3;
                                    } else {
                                        votes[11] = 0;
                                    }
                                }
                            } else {
                                votes[11] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 39.327857971191406) {
            if (rr_median <= 128.5) {
                if (rr_median <= 119.0) {
                    if (rr_std <= 24.704072952270508) {
                        if (num_peaks <= 74.0) {
                            votes[11] = 1;
                        } else {
                            votes[11] = 1;
                        }
                    } else {
                        votes[11] = 0;
                    }
                } else {
                    if (rr_std <= 11.678688049316406) {
                        votes[11] = 2;
                    } else {
                        votes[11] = 1;
                    }
                }
            } else {
                if (rr_std <= 0.44031527638435364) {
                    if (rr_median <= 388.5) {
                        votes[11] = 1;
                    } else {
                        votes[11] = 0;
                    }
                } else {
                    if (rr_median <= 134.25) {
                        votes[11] = 1;
                    } else {
                        if (num_valleys <= 92.5) {
                            votes[11] = 1;
                        } else {
                            votes[11] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 91.5) {
                if (rr_std <= 72.50964736938477) {
                    if (num_peaks <= 80.0) {
                        if (rr_median <= 159.0) {
                            votes[11] = 4;
                        } else {
                            votes[11] = 1;
                        }
                    } else {
                        votes[11] = 2;
                    }
                } else {
                    votes[11] = 3;
                }
            } else {
                if (num_peaks <= 81.0) {
                    votes[11] = 0;
                } else {
                    votes[11] = 0;
                }
            }
        }
    }
// Decision rules for tree 12
    if (num_valleys <= 83.5) {
        if (rr_median <= 64.0) {
            if (num_peaks <= 58.0) {
                votes[12] = 5;
            } else {
                if (num_valleys <= 82.5) {
                    votes[12] = 1;
                } else {
                    votes[12] = 3;
                }
            }
        } else {
            if (rr_median <= 75.0) {
                if (num_peaks <= 63.5) {
                    if (rr_median <= 69.5) {
                        votes[12] = 2;
                    } else {
                        votes[12] = 2;
                    }
                } else {
                    if (diastolic_time <= 45.5) {
                        votes[12] = 5;
                    } else {
                        votes[12] = 2;
                    }
                }
            } else {
                if (rr_median <= 94.0) {
                    if (num_valleys <= 80.5) {
                        votes[12] = 5;
                    } else {
                        votes[12] = 5;
                    }
                } else {
                    votes[12] = 1;
                }
            }
        }
    } else {
        if (rr_median <= 99.25) {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 37.75) {
                    if (rr_median <= 51.75) {
                        if (diastolic_time <= 10.0) {
                            votes[12] = 4;
                        } else {
                            if (diastolic_time <= 35.5) {
                                if (num_valleys <= 89.5) {
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
                } else {
                    if (diastolic_time <= 80.5) {
                        if (rr_std <= 9.002352714538574) {
                            if (num_peaks <= 41.5) {
                                if (num_valleys <= 85.5) {
                                    votes[12] = 4;
                                } else {
                                    if (diastolic_time <= 42.5) {
                                        votes[12] = 4;
                                    } else {
                                        votes[12] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 50.5) {
                                    if (diastolic_time <= 55.25) {
                                        votes[12] = 3;
                                    } else {
                                        if (diastolic_time <= 63.5) {
                                            votes[12] = 2;
                                        } else {
                                            votes[12] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 78.75) {
                                        if (rr_std <= 2.9807692766189575) {
                                            votes[12] = 3;
                                        } else {
                                            votes[12] = 3;
                                        }
                                    } else {
                                        votes[12] = 1;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 59.0) {
                                if (rr_std <= 29.968313217163086) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 3;
                                }
                            } else {
                                if (diastolic_time <= 65.5) {
                                    if (rr_std <= 22.454771041870117) {
                                        if (rr_median <= 65.5) {
                                            votes[12] = 1;
                                        } else {
                                            votes[12] = 0;
                                        }
                                    } else {
                                        votes[12] = 1;
                                    }
                                } else {
                                    if (num_peaks <= 63.0) {
                                        votes[12] = 5;
                                    } else {
                                        votes[12] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 110.5) {
                            if (rr_std <= 16.822558403015137) {
                                if (rr_std <= 3.1075085401535034) {
                                    if (diastolic_time <= 89.5) {
                                        votes[12] = 5;
                                    } else {
                                        votes[12] = 5;
                                    }
                                } else {
                                    votes[12] = 5;
                                }
                            } else {
                                if (rr_median <= 96.25) {
                                    votes[12] = 4;
                                } else {
                                    votes[12] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 307.0) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 4;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 72.5) {
                        if (rr_std <= 0.8443530201911926) {
                            if (diastolic_time <= 35.5) {
                                votes[12] = 5;
                            } else {
                                if (num_peaks <= 80.5) {
                                    votes[12] = 0;
                                } else {
                                    votes[12] = 0;
                                }
                            }
                        } else {
                            if (rr_median <= 63.5) {
                                if (num_valleys <= 91.5) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 3;
                                }
                            } else {
                                if (rr_std <= 5.001227140426636) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 4;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 87.5) {
                            if (rr_std <= 1.0527158379554749) {
                                votes[12] = 5;
                            } else {
                                votes[12] = 5;
                            }
                        } else {
                            if (num_valleys <= 90.5) {
                                if (rr_median <= 90.5) {
                                    votes[12] = 0;
                                } else {
                                    votes[12] = 3;
                                }
                            } else {
                                if (rr_std <= 17.782498359680176) {
                                    votes[12] = 5;
                                } else {
                                    votes[12] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 47.25) {
                        if (diastolic_time <= 39.0) {
                            votes[12] = 2;
                        } else {
                            if (num_valleys <= 89.5) {
                                votes[12] = 3;
                            } else {
                                votes[12] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 69.75) {
                            if (rr_std <= 13.500749111175537) {
                                if (num_peaks <= 90.5) {
                                    if (num_peaks <= 86.5) {
                                        votes[12] = 0;
                                    } else {
                                        votes[12] = 0;
                                    }
                                } else {
                                    if (rr_std <= 3.466006875038147) {
                                        votes[12] = 3;
                                    } else {
                                        votes[12] = 0;
                                    }
                                }
                            } else {
                                votes[12] = 0;
                            }
                        } else {
                            if (diastolic_time <= 78.0) {
                                votes[12] = 5;
                            } else {
                                if (rr_std <= 5.411159873008728) {
                                    votes[12] = 5;
                                } else {
                                    if (diastolic_time <= 83.75) {
                                        votes[12] = 0;
                                    } else {
                                        votes[12] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 85.5) {
                if (rr_median <= 134.5) {
                    if (num_peaks <= 70.0) {
                        if (rr_std <= 31.131074905395508) {
                            if (rr_median <= 116.25) {
                                votes[12] = 1;
                            } else {
                                if (num_peaks <= 54.0) {
                                    if (rr_std <= 7.854596853256226) {
                                        votes[12] = 2;
                                    } else {
                                        votes[12] = 2;
                                    }
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        } else {
                            if (diastolic_time <= 95.0) {
                                if (num_peaks <= 52.5) {
                                    votes[12] = 4;
                                } else {
                                    votes[12] = 1;
                                }
                            } else {
                                votes[12] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 122.0) {
                            if (diastolic_time <= 82.75) {
                                votes[12] = 5;
                            } else {
                                votes[12] = 5;
                            }
                        } else {
                            votes[12] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 67.8973274230957) {
                        if (rr_median <= 258.25) {
                            if (num_valleys <= 92.5) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 1;
                            }
                        } else {
                            votes[12] = 1;
                        }
                    } else {
                        votes[12] = 0;
                    }
                }
            } else {
                if (rr_std <= 12.093914985656738) {
                    if (diastolic_time <= 91.5) {
                        votes[12] = 1;
                    } else {
                        votes[12] = 1;
                    }
                } else {
                    if (rr_median <= 110.0) {
                        votes[12] = 1;
                    } else {
                        if (diastolic_time <= 84.5) {
                            votes[12] = 0;
                        } else {
                            votes[12] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 13
    if (rr_median <= 104.75) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 66.0) {
                if (diastolic_time <= 73.5) {
                    if (rr_median <= 40.0) {
                        if (num_peaks <= 55.5) {
                            votes[13] = 3;
                        } else {
                            votes[13] = 2;
                        }
                    } else {
                        if (rr_std <= 4.797030746936798) {
                            votes[13] = 3;
                        } else {
                            votes[13] = 3;
                        }
                    }
                } else {
                    votes[13] = 5;
                }
            } else {
                if (rr_median <= 75.0) {
                    if (rr_std <= 0.7299954891204834) {
                        if (num_peaks <= 71.5) {
                            if (num_valleys <= 73.0) {
                                votes[13] = 2;
                            } else {
                                if (num_peaks <= 53.5) {
                                    votes[13] = 2;
                                } else {
                                    if (num_peaks <= 59.5) {
                                        votes[13] = 2;
                                    } else {
                                        votes[13] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[13] = 2;
                        }
                    } else {
                        if (diastolic_time <= 56.0) {
                            votes[13] = 5;
                        } else {
                            votes[13] = 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 76.25) {
                        if (num_peaks <= 75.0) {
                            votes[13] = 3;
                        } else {
                            votes[13] = 3;
                        }
                    } else {
                        votes[13] = 5;
                    }
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 323.5) {
                    if (diastolic_time <= 105.25) {
                        if (diastolic_time <= 34.5) {
                            if (num_peaks <= 50.5) {
                                if (num_peaks <= 40.5) {
                                    votes[13] = 4;
                                } else {
                                    votes[13] = 4;
                                }
                            } else {
                                votes[13] = 4;
                            }
                        } else {
                            if (diastolic_time <= 84.25) {
                                if (rr_std <= 2.359940767288208) {
                                    if (diastolic_time <= 54.25) {
                                        if (num_valleys <= 89.5) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 66.5) {
                                            votes[13] = 2;
                                        } else {
                                            votes[13] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 8.994228839874268) {
                                        votes[13] = 3;
                                    } else {
                                        if (rr_median <= 65.75) {
                                            votes[13] = 3;
                                        } else {
                                            votes[13] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 9.62889289855957) {
                                    votes[13] = 5;
                                } else {
                                    if (rr_median <= 98.5) {
                                        if (rr_std <= 31.918811798095703) {
                                            votes[13] = 4;
                                        } else {
                                            votes[13] = 4;
                                        }
                                    } else {
                                        votes[13] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[13] = 1;
                    }
                } else {
                    votes[13] = 4;
                }
            } else {
                if (diastolic_time <= 54.75) {
                    if (rr_median <= 78.0) {
                        if (rr_std <= 13.229418754577637) {
                            if (diastolic_time <= 29.0) {
                                votes[13] = 3;
                            } else {
                                if (rr_std <= 10.772585391998291) {
                                    if (rr_std <= 0.6683902740478516) {
                                        votes[13] = 0;
                                    } else {
                                        if (num_valleys <= 90.0) {
                                            votes[13] = 3;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    }
                                } else {
                                    votes[13] = 0;
                                }
                            }
                        } else {
                            if (rr_std <= 26.557323455810547) {
                                votes[13] = 3;
                            } else {
                                votes[13] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 86.5) {
                            votes[13] = 5;
                        } else {
                            votes[13] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 8.847529888153076) {
                        if (diastolic_time <= 63.5) {
                            if (rr_median <= 28.0) {
                                votes[13] = 0;
                            } else {
                                votes[13] = 0;
                            }
                        } else {
                            if (rr_std <= 1.015649825334549) {
                                if (num_valleys <= 91.5) {
                                    if (num_peaks <= 84.5) {
                                        votes[13] = 5;
                                    } else {
                                        votes[13] = 2;
                                    }
                                } else {
                                    votes[13] = 3;
                                }
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[13] = 5;
                                } else {
                                    votes[13] = 3;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 81.5) {
                            if (rr_median <= 93.0) {
                                if (rr_std <= 17.157873153686523) {
                                    votes[13] = 0;
                                } else {
                                    votes[13] = 4;
                                }
                            } else {
                                votes[13] = 5;
                            }
                        } else {
                            if (rr_std <= 16.40364170074463) {
                                if (diastolic_time <= 76.25) {
                                    votes[13] = 0;
                                } else {
                                    votes[13] = 0;
                                }
                            } else {
                                if (diastolic_time <= 67.25) {
                                    votes[13] = 3;
                                } else {
                                    if (rr_median <= 83.5) {
                                        votes[13] = 4;
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
        if (rr_median <= 129.5) {
            if (rr_median <= 119.75) {
                if (num_peaks <= 52.5) {
                    if (diastolic_time <= 104.75) {
                        if (diastolic_time <= 69.75) {
                            votes[13] = 4;
                        } else {
                            votes[13] = 4;
                        }
                    } else {
                        votes[13] = 1;
                    }
                } else {
                    if (diastolic_time <= 82.0) {
                        if (rr_std <= 10.441033363342285) {
                            votes[13] = 1;
                        } else {
                            votes[13] = 1;
                        }
                    } else {
                        votes[13] = 5;
                    }
                }
            } else {
                if (num_peaks <= 56.5) {
                    if (rr_std <= 18.852059841156006) {
                        if (num_valleys <= 89.5) {
                            votes[13] = 2;
                        } else {
                            votes[13] = 2;
                        }
                    } else {
                        votes[13] = 2;
                    }
                } else {
                    if (num_peaks <= 79.0) {
                        votes[13] = 5;
                    } else {
                        votes[13] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 84.5) {
                if (rr_std <= 0.4714045226573944) {
                    votes[13] = 5;
                } else {
                    if (rr_std <= 51.943071365356445) {
                        if (num_valleys <= 91.5) {
                            votes[13] = 1;
                        } else {
                            votes[13] = 1;
                        }
                    } else {
                        votes[13] = 1;
                    }
                }
            } else {
                if (rr_std <= 37.289106369018555) {
                    votes[13] = 1;
                } else {
                    if (diastolic_time <= 64.0) {
                        votes[13] = 0;
                    } else {
                        votes[13] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 14
    if (num_valleys <= 84.5) {
        if (num_peaks <= 62.5) {
            if (rr_median <= 61.0) {
                if (diastolic_time <= 73.0) {
                    if (num_peaks <= 48.0) {
                        votes[14] = 3;
                    } else {
                        votes[14] = 5;
                    }
                } else {
                    votes[14] = 5;
                }
            } else {
                if (rr_median <= 80.5) {
                    if (num_peaks <= 53.5) {
                        votes[14] = 2;
                    } else {
                        if (rr_std <= 0.4740213602781296) {
                            votes[14] = 2;
                        } else {
                            votes[14] = 2;
                        }
                    }
                } else {
                    votes[14] = 5;
                }
            }
        } else {
            if (diastolic_time <= 93.0) {
                if (rr_std <= 0.583409309387207) {
                    if (rr_std <= 0.5285045951604843) {
                        if (diastolic_time <= 52.0) {
                            votes[14] = 2;
                        } else {
                            votes[14] = 3;
                        }
                    } else {
                        votes[14] = 2;
                    }
                } else {
                    if (rr_median <= 65.5) {
                        votes[14] = 3;
                    } else {
                        if (rr_median <= 96.0) {
                            if (num_valleys <= 81.5) {
                                votes[14] = 3;
                            } else {
                                if (rr_std <= 1.0634330809116364) {
                                    votes[14] = 5;
                                } else {
                                    votes[14] = 5;
                                }
                            }
                        } else {
                            votes[14] = 1;
                        }
                    }
                }
            } else {
                votes[14] = 1;
            }
        }
    } else {
        if (num_peaks <= 75.5) {
            if (rr_median <= 154.5) {
                if (rr_std <= 21.000078201293945) {
                    if (rr_median <= 116.0) {
                        if (diastolic_time <= 235.5) {
                            if (diastolic_time <= 10.0) {
                                votes[14] = 4;
                            } else {
                                if (diastolic_time <= 83.0) {
                                    if (diastolic_time <= 55.25) {
                                        if (rr_std <= 1.2691249251365662) {
                                            votes[14] = 5;
                                        } else {
                                            votes[14] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 9.246427059173584) {
                                            votes[14] = 2;
                                        } else {
                                            votes[14] = 0;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 109.25) {
                                        if (rr_std <= 8.307761192321777) {
                                            votes[14] = 5;
                                        } else {
                                            votes[14] = 4;
                                        }
                                    } else {
                                        votes[14] = 1;
                                    }
                                }
                            }
                        } else {
                            votes[14] = 4;
                        }
                    } else {
                        if (rr_median <= 124.75) {
                            votes[14] = 2;
                        } else {
                            votes[14] = 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 115.25) {
                        if (diastolic_time <= 69.75) {
                            if (num_peaks <= 50.5) {
                                votes[14] = 4;
                            } else {
                                if (diastolic_time <= 60.25) {
                                    if (num_valleys <= 90.5) {
                                        votes[14] = 3;
                                    } else {
                                        votes[14] = 0;
                                    }
                                } else {
                                    votes[14] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 122.75) {
                                if (rr_median <= 112.75) {
                                    if (rr_median <= 98.5) {
                                        votes[14] = 4;
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
                    } else {
                        votes[14] = 1;
                    }
                }
            } else {
                if (rr_std <= 0.6123724579811096) {
                    votes[14] = 3;
                } else {
                    if (rr_std <= 55.91085433959961) {
                        if (num_valleys <= 93.0) {
                            votes[14] = 1;
                        } else {
                            votes[14] = 1;
                        }
                    } else {
                        votes[14] = 3;
                    }
                }
            }
        } else {
            if (diastolic_time <= 51.75) {
                if (rr_median <= 90.0) {
                    if (rr_std <= 0.9447756707668304) {
                        if (diastolic_time <= 32.5) {
                            votes[14] = 3;
                        } else {
                            if (diastolic_time <= 39.75) {
                                votes[14] = 2;
                            } else {
                                votes[14] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 10.394045352935791) {
                            votes[14] = 3;
                        } else {
                            if (rr_std <= 15.740650653839111) {
                                votes[14] = 0;
                            } else {
                                votes[14] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 142.0) {
                        if (num_peaks <= 83.0) {
                            votes[14] = 5;
                        } else {
                            votes[14] = 1;
                        }
                    } else {
                        votes[14] = 1;
                    }
                }
            } else {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 85.25) {
                        if (rr_std <= 14.293018341064453) {
                            if (num_valleys <= 89.5) {
                                votes[14] = 3;
                            } else {
                                if (rr_median <= 62.25) {
                                    votes[14] = 0;
                                } else {
                                    votes[14] = 3;
                                }
                            }
                        } else {
                            if (rr_median <= 66.5) {
                                votes[14] = 3;
                            } else {
                                votes[14] = 4;
                            }
                        }
                    } else {
                        if (rr_median <= 110.75) {
                            if (num_valleys <= 88.5) {
                                votes[14] = 5;
                            } else {
                                if (num_peaks <= 80.5) {
                                    votes[14] = 0;
                                } else {
                                    votes[14] = 4;
                                }
                            }
                        } else {
                            if (rr_std <= 4.271948218345642) {
                                votes[14] = 0;
                            } else {
                                votes[14] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.196088790893555) {
                        if (rr_median <= 102.5) {
                            if (rr_median <= 58.5) {
                                if (diastolic_time <= 76.75) {
                                    if (diastolic_time <= 56.75) {
                                        votes[14] = 0;
                                    } else {
                                        votes[14] = 0;
                                    }
                                } else {
                                    votes[14] = 5;
                                }
                            } else {
                                votes[14] = 5;
                            }
                        } else {
                            votes[14] = 1;
                        }
                    } else {
                        if (num_peaks <= 89.5) {
                            if (diastolic_time <= 71.0) {
                                if (rr_std <= 16.257240295410156) {
                                    if (num_peaks <= 86.5) {
                                        votes[14] = 0;
                                    } else {
                                        votes[14] = 0;
                                    }
                                } else {
                                    votes[14] = 0;
                                }
                            } else {
                                if (rr_std <= 34.52758026123047) {
                                    if (diastolic_time <= 81.25) {
                                        votes[14] = 0;
                                    } else {
                                        if (rr_median <= 97.75) {
                                            votes[14] = 0;
                                        } else {
                                            votes[14] = 0;
                                        }
                                    }
                                } else {
                                    votes[14] = 1;
                                }
                            }
                        } else {
                            if (num_valleys <= 90.5) {
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
// Decision rules for tree 15
    if (rr_median <= 131.0) {
        if (num_peaks <= 74.5) {
            if (num_valleys <= 84.5) {
                if (rr_median <= 66.0) {
                    if (rr_median <= 46.75) {
                        if (diastolic_time <= 48.5) {
                            votes[15] = 4;
                        } else {
                            if (diastolic_time <= 82.0) {
                                votes[15] = 5;
                            } else {
                                votes[15] = 5;
                            }
                        }
                    } else {
                        votes[15] = 3;
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (rr_std <= 0.4740213602781296) {
                            if (rr_std <= 0.43653950095176697) {
                                if (num_valleys <= 78.5) {
                                    votes[15] = 2;
                                } else {
                                    votes[15] = 2;
                                }
                            } else {
                                votes[15] = 2;
                            }
                        } else {
                            if (rr_median <= 73.5) {
                                votes[15] = 2;
                            } else {
                                votes[15] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 1.1683152914047241) {
                            if (rr_std <= 0.8802262842655182) {
                                votes[15] = 5;
                            } else {
                                votes[15] = 3;
                            }
                        } else {
                            votes[15] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 118.5) {
                    if (diastolic_time <= 261.5) {
                        if (diastolic_time <= 108.75) {
                            if (rr_std <= 21.069384574890137) {
                                if (num_peaks <= 62.5) {
                                    if (diastolic_time <= 37.75) {
                                        if (rr_median <= 26.5) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 41.5) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 0;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 83.75) {
                                        if (num_peaks <= 64.5) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 1.2985270023345947) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 68.0) {
                                    if (num_peaks <= 62.0) {
                                        if (diastolic_time <= 42.5) {
                                            votes[15] = 1;
                                        } else {
                                            votes[15] = 4;
                                        }
                                    } else {
                                        votes[15] = 3;
                                    }
                                } else {
                                    if (rr_std <= 35.82935333251953) {
                                        if (rr_median <= 84.5) {
                                            votes[15] = 4;
                                        } else {
                                            votes[15] = 4;
                                        }
                                    } else {
                                        votes[15] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[15] = 1;
                        }
                    } else {
                        votes[15] = 4;
                    }
                } else {
                    if (num_peaks <= 53.5) {
                        if (rr_std <= 8.656770706176758) {
                            votes[15] = 2;
                        } else {
                            votes[15] = 2;
                        }
                    } else {
                        votes[15] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 69.75) {
                if (rr_std <= 13.500749111175537) {
                    if (num_peaks <= 85.5) {
                        if (num_valleys <= 89.5) {
                            if (rr_std <= 0.5758121162652969) {
                                if (num_peaks <= 80.5) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 4;
                                }
                            } else {
                                if (rr_std <= 7.349615812301636) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 3;
                                }
                            }
                        } else {
                            if (num_valleys <= 91.5) {
                                if (rr_median <= 21.25) {
                                    votes[15] = 0;
                                } else {
                                    votes[15] = 3;
                                }
                            } else {
                                votes[15] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 89.5) {
                            if (diastolic_time <= 52.75) {
                                votes[15] = 0;
                            } else {
                                if (diastolic_time <= 62.75) {
                                    votes[15] = 0;
                                } else {
                                    votes[15] = 0;
                                }
                            }
                        } else {
                            if (rr_median <= 55.5) {
                                if (diastolic_time <= 66.25) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 5;
                                }
                            } else {
                                votes[15] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 60.5) {
                        if (rr_median <= 56.0) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 3;
                        }
                    } else {
                        votes[15] = 3;
                    }
                }
            } else {
                if (num_peaks <= 87.5) {
                    if (diastolic_time <= 119.75) {
                        if (rr_median <= 75.0) {
                            if (rr_std <= 5.908041954040527) {
                                votes[15] = 3;
                            } else {
                                votes[15] = 0;
                            }
                        } else {
                            if (num_peaks <= 82.5) {
                                if (diastolic_time <= 94.25) {
                                    if (num_peaks <= 77.5) {
                                        if (diastolic_time <= 85.25) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 80.5) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    }
                                } else {
                                    votes[15] = 4;
                                }
                            } else {
                                if (rr_median <= 98.5) {
                                    if (rr_median <= 83.25) {
                                        votes[15] = 5;
                                    } else {
                                        if (rr_median <= 89.0) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    }
                                } else {
                                    votes[15] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 7.687961935997009) {
                            votes[15] = 2;
                        } else {
                            votes[15] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 11.221216201782227) {
                        if (diastolic_time <= 50.25) {
                            votes[15] = 3;
                        } else {
                            if (rr_median <= 100.0) {
                                votes[15] = 5;
                            } else {
                                votes[15] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 74.0) {
                            votes[15] = 1;
                        } else {
                            if (rr_median <= 108.5) {
                                votes[15] = 0;
                            } else {
                                votes[15] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 0.4714045226573944) {
            if (diastolic_time <= 61.5) {
                votes[15] = 3;
            } else {
                votes[15] = 0;
            }
        } else {
            if (rr_std <= 63.633018493652344) {
                if (num_valleys <= 92.5) {
                    if (rr_std <= 53.244632720947266) {
                        votes[15] = 1;
                    } else {
                        votes[15] = 1;
                    }
                } else {
                    if (rr_std <= 35.583635330200195) {
                        votes[15] = 1;
                    } else {
                        votes[15] = 5;
                    }
                }
            } else {
                if (num_peaks <= 78.0) {
                    votes[15] = 3;
                } else {
                    votes[15] = 0;
                }
            }
        }
    }
// Decision rules for tree 16
    if (rr_median <= 129.5) {
        if (num_valleys <= 84.5) {
            if (num_peaks <= 58.0) {
                if (rr_std <= 0.33040061593055725) {
                    if (num_peaks <= 44.5) {
                        votes[16] = 4;
                    } else {
                        votes[16] = 5;
                    }
                } else {
                    if (rr_median <= 69.5) {
                        votes[16] = 2;
                    } else {
                        if (rr_median <= 73.5) {
                            if (num_valleys <= 83.5) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 2;
                            }
                        } else {
                            votes[16] = 2;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.6694315373897552) {
                    if (diastolic_time <= 66.0) {
                        if (diastolic_time <= 41.5) {
                            votes[16] = 2;
                        } else {
                            if (rr_median <= 66.0) {
                                votes[16] = 3;
                            } else {
                                votes[16] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 69.5) {
                            votes[16] = 2;
                        } else {
                            if (rr_std <= 0.48975545167922974) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 5;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 63.5) {
                        votes[16] = 1;
                    } else {
                        if (diastolic_time <= 71.5) {
                            if (diastolic_time <= 40.75) {
                                votes[16] = 5;
                            } else {
                                if (num_peaks <= 72.5) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 3;
                                }
                            }
                        } else {
                            votes[16] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 76.5) {
                if (rr_median <= 119.75) {
                    if (diastolic_time <= 110.5) {
                        if (rr_std <= 33.82527542114258) {
                            if (diastolic_time <= 37.75) {
                                if (rr_median <= 49.5) {
                                    if (num_peaks <= 40.5) {
                                        votes[16] = 4;
                                    } else {
                                        if (num_peaks <= 60.5) {
                                            votes[16] = 4;
                                        } else {
                                            votes[16] = 4;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 63.0) {
                                        votes[16] = 1;
                                    } else {
                                        votes[16] = 3;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 75.25) {
                                    if (rr_std <= 9.440037727355957) {
                                        if (rr_std <= 1.009185016155243) {
                                            votes[16] = 2;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    } else {
                                        if (rr_median <= 90.25) {
                                            votes[16] = 0;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.316328048706055) {
                                        if (diastolic_time <= 83.25) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 29.507633209228516) {
                                            votes[16] = 4;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 54.853172302246094) {
                                if (rr_std <= 36.52645301818848) {
                                    votes[16] = 4;
                                } else {
                                    votes[16] = 4;
                                }
                            } else {
                                votes[16] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 261.5) {
                            if (rr_median <= 76.75) {
                                votes[16] = 1;
                            } else {
                                votes[16] = 1;
                            }
                        } else {
                            votes[16] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 9.065512657165527) {
                        if (rr_median <= 124.5) {
                            votes[16] = 2;
                        } else {
                            votes[16] = 2;
                        }
                    } else {
                        votes[16] = 4;
                    }
                }
            } else {
                if (rr_median <= 104.5) {
                    if (diastolic_time <= 47.25) {
                        if (num_peaks <= 88.0) {
                            if (diastolic_time <= 41.75) {
                                if (diastolic_time <= 32.5) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 0;
                                }
                            } else {
                                votes[16] = 3;
                            }
                        } else {
                            if (diastolic_time <= 39.0) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 84.5) {
                            if (rr_std <= 0.33993464708328247) {
                                votes[16] = 0;
                            } else {
                                if (rr_std <= 7.079552888870239) {
                                    if (num_valleys <= 88.5) {
                                        votes[16] = 5;
                                    } else {
                                        votes[16] = 3;
                                    }
                                } else {
                                    if (rr_std <= 12.992315292358398) {
                                        votes[16] = 0;
                                    } else {
                                        if (diastolic_time <= 69.75) {
                                            votes[16] = 3;
                                        } else {
                                            votes[16] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 9.51451826095581) {
                                if (rr_median <= 74.0) {
                                    if (num_valleys <= 87.5) {
                                        votes[16] = 0;
                                    } else {
                                        if (rr_std <= 6.278245210647583) {
                                            votes[16] = 0;
                                        } else {
                                            votes[16] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 89.25) {
                                        votes[16] = 5;
                                    } else {
                                        votes[16] = 2;
                                    }
                                }
                            } else {
                                if (rr_std <= 19.080175399780273) {
                                    if (rr_median <= 80.25) {
                                        votes[16] = 0;
                                    } else {
                                        if (rr_median <= 93.5) {
                                            votes[16] = 0;
                                        } else {
                                            votes[16] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 83.5) {
                                        votes[16] = 4;
                                    } else {
                                        if (diastolic_time <= 83.25) {
                                            votes[16] = 0;
                                        } else {
                                            votes[16] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 82.0) {
                        if (diastolic_time <= 81.0) {
                            votes[16] = 5;
                        } else {
                            votes[16] = 5;
                        }
                    } else {
                        if (diastolic_time <= 96.75) {
                            if (num_peaks <= 88.5) {
                                votes[16] = 1;
                            } else {
                                votes[16] = 1;
                            }
                        } else {
                            votes[16] = 0;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 89.5) {
            if (num_valleys <= 94.5) {
                if (rr_median <= 349.5) {
                    if (rr_std <= 67.8973274230957) {
                        if (rr_std <= 2.2824419736862183) {
                            votes[16] = 1;
                        } else {
                            if (num_peaks <= 50.5) {
                                votes[16] = 1;
                            } else {
                                if (rr_median <= 234.25) {
                                    votes[16] = 1;
                                } else {
                                    votes[16] = 1;
                                }
                            }
                        }
                    } else {
                        votes[16] = 3;
                    }
                } else {
                    votes[16] = 0;
                }
            } else {
                votes[16] = 4;
            }
        } else {
            votes[16] = 0;
        }
    }
// Decision rules for tree 17
    if (num_peaks <= 74.5) {
        if (num_valleys <= 81.5) {
            if (rr_median <= 53.0) {
                votes[17] = 5;
            } else {
                if (rr_median <= 75.5) {
                    if (rr_median <= 71.5) {
                        if (rr_std <= 0.545406848192215) {
                            votes[17] = 2;
                        } else {
                            votes[17] = 2;
                        }
                    } else {
                        votes[17] = 2;
                    }
                } else {
                    votes[17] = 3;
                }
            }
        } else {
            if (rr_median <= 134.25) {
                if (rr_std <= 15.31638240814209) {
                    if (num_peaks <= 58.5) {
                        if (num_peaks <= 41.5) {
                            if (diastolic_time <= 317.5) {
                                if (diastolic_time <= 61.5) {
                                    if (diastolic_time <= 54.75) {
                                        if (diastolic_time <= 50.0) {
                                            votes[17] = 4;
                                        } else {
                                            votes[17] = 5;
                                        }
                                    } else {
                                        votes[17] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 111.0) {
                                        if (diastolic_time <= 92.0) {
                                            votes[17] = 1;
                                        } else {
                                            votes[17] = 5;
                                        }
                                    } else {
                                        votes[17] = 1;
                                    }
                                }
                            } else {
                                votes[17] = 4;
                            }
                        } else {
                            if (diastolic_time <= 54.5) {
                                if (rr_median <= 39.25) {
                                    if (diastolic_time <= 37.5) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 3;
                                    }
                                } else {
                                    if (rr_median <= 62.0) {
                                        votes[17] = 3;
                                    } else {
                                        if (num_peaks <= 54.5) {
                                            votes[17] = 3;
                                        } else {
                                            votes[17] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 11.431207180023193) {
                                    if (num_peaks <= 53.5) {
                                        if (rr_std <= 0.18040060997009277) {
                                            votes[17] = 2;
                                        } else {
                                            votes[17] = 2;
                                        }
                                    } else {
                                        if (num_valleys <= 88.0) {
                                            votes[17] = 1;
                                        } else {
                                            votes[17] = 0;
                                        }
                                    }
                                } else {
                                    votes[17] = 5;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 86.5) {
                            if (rr_std <= 1.6270062327384949) {
                                if (num_valleys <= 84.5) {
                                    if (rr_std <= 0.7243337035179138) {
                                        votes[17] = 2;
                                    } else {
                                        votes[17] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 40.75) {
                                        votes[17] = 5;
                                    } else {
                                        if (diastolic_time <= 66.5) {
                                            votes[17] = 3;
                                        } else {
                                            votes[17] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 62.5) {
                                    votes[17] = 1;
                                } else {
                                    if (rr_median <= 69.75) {
                                        votes[17] = 3;
                                    } else {
                                        votes[17] = 1;
                                    }
                                }
                            }
                        } else {
                            votes[17] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 103.25) {
                        if (diastolic_time <= 68.0) {
                            if (num_peaks <= 50.5) {
                                votes[17] = 4;
                            } else {
                                if (rr_median <= 66.25) {
                                    if (num_peaks <= 67.5) {
                                        votes[17] = 3;
                                    } else {
                                        votes[17] = 0;
                                    }
                                } else {
                                    votes[17] = 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 66.5) {
                                if (rr_std <= 32.803585052490234) {
                                    if (rr_std <= 16.576316833496094) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 1;
                                    }
                                } else {
                                    votes[17] = 4;
                                }
                            } else {
                                if (rr_std <= 21.64167308807373) {
                                    votes[17] = 4;
                                } else {
                                    votes[17] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 71.5) {
                            votes[17] = 4;
                        } else {
                            if (rr_std <= 33.8087158203125) {
                                votes[17] = 1;
                            } else {
                                votes[17] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 1.083776980638504) {
                    votes[17] = 3;
                } else {
                    if (rr_std <= 63.273685455322266) {
                        if (num_valleys <= 92.5) {
                            votes[17] = 1;
                        } else {
                            votes[17] = 1;
                        }
                    } else {
                        votes[17] = 3;
                    }
                }
            }
        }
    } else {
        if (rr_median <= 100.25) {
            if (num_peaks <= 85.5) {
                if (rr_median <= 75.0) {
                    if (num_peaks <= 75.5) {
                        votes[17] = 0;
                    } else {
                        if (num_valleys <= 92.5) {
                            if (rr_std <= 0.21066252887248993) {
                                if (diastolic_time <= 32.5) {
                                    votes[17] = 3;
                                } else {
                                    votes[17] = 0;
                                }
                            } else {
                                if (rr_median <= 61.5) {
                                    votes[17] = 3;
                                } else {
                                    if (rr_std <= 1.3547388315200806) {
                                        votes[17] = 3;
                                    } else {
                                        if (num_valleys <= 88.5) {
                                            votes[17] = 5;
                                        } else {
                                            votes[17] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[17] = 0;
                        }
                    }
                } else {
                    if (diastolic_time <= 54.0) {
                        if (num_valleys <= 86.0) {
                            votes[17] = 5;
                        } else {
                            votes[17] = 5;
                        }
                    } else {
                        if (num_valleys <= 88.5) {
                            if (num_peaks <= 79.0) {
                                votes[17] = 5;
                            } else {
                                votes[17] = 3;
                            }
                        } else {
                            if (rr_median <= 92.75) {
                                votes[17] = 0;
                            } else {
                                votes[17] = 3;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 47.5) {
                    if (num_peaks <= 91.5) {
                        if (rr_median <= 61.5) {
                            votes[17] = 3;
                        } else {
                            if (diastolic_time <= 45.0) {
                                votes[17] = 5;
                            } else {
                                votes[17] = 3;
                            }
                        }
                    } else {
                        votes[17] = 2;
                    }
                } else {
                    if (diastolic_time <= 54.5) {
                        if (rr_median <= 57.75) {
                            votes[17] = 3;
                        } else {
                            votes[17] = 0;
                        }
                    } else {
                        if (diastolic_time <= 72.25) {
                            if (rr_median <= 86.5) {
                                if (rr_std <= 9.172268867492676) {
                                    if (num_peaks <= 89.5) {
                                        votes[17] = 0;
                                    } else {
                                        votes[17] = 0;
                                    }
                                } else {
                                    if (rr_std <= 15.096500396728516) {
                                        votes[17] = 0;
                                    } else {
                                        votes[17] = 0;
                                    }
                                }
                            } else {
                                votes[17] = 0;
                            }
                        } else {
                            if (diastolic_time <= 79.5) {
                                votes[17] = 5;
                            } else {
                                if (rr_std <= 5.98013699054718) {
                                    votes[17] = 0;
                                } else {
                                    if (num_peaks <= 88.5) {
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
        } else {
            if (rr_std <= 62.98552131652832) {
                if (num_peaks <= 78.5) {
                    if (rr_median <= 126.5) {
                        votes[17] = 5;
                    } else {
                        votes[17] = 1;
                    }
                } else {
                    if (rr_median <= 130.75) {
                        if (rr_median <= 106.5) {
                            if (num_peaks <= 88.5) {
                                votes[17] = 0;
                            } else {
                                votes[17] = 1;
                            }
                        } else {
                            if (num_peaks <= 83.0) {
                                votes[17] = 5;
                            } else {
                                if (num_peaks <= 88.5) {
                                    votes[17] = 1;
                                } else {
                                    votes[17] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 2.094150125980377) {
                            votes[17] = 1;
                        } else {
                            if (num_peaks <= 85.0) {
                                votes[17] = 1;
                            } else {
                                votes[17] = 1;
                            }
                        }
                    }
                }
            } else {
                votes[17] = 0;
            }
        }
    }
// Decision rules for tree 18
    if (rr_median <= 105.5) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.6868122220039368) {
                if (rr_median <= 66.0) {
                    if (num_peaks <= 57.5) {
                        if (num_peaks <= 44.0) {
                            votes[18] = 4;
                        } else {
                            votes[18] = 5;
                        }
                    } else {
                        votes[18] = 3;
                    }
                } else {
                    if (rr_median <= 75.0) {
                        if (num_peaks <= 71.5) {
                            if (rr_median <= 71.5) {
                                if (rr_std <= 0.5532135367393494) {
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
                        if (num_peaks <= 82.0) {
                            votes[18] = 5;
                        } else {
                            votes[18] = 3;
                        }
                    }
                }
            } else {
                if (rr_median <= 63.0) {
                    votes[18] = 3;
                } else {
                    if (diastolic_time <= 40.75) {
                        votes[18] = 5;
                    } else {
                        if (diastolic_time <= 47.25) {
                            votes[18] = 3;
                        } else {
                            if (rr_std <= 1.1928168535232544) {
                                votes[18] = 3;
                            } else {
                                votes[18] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 75.5) {
                if (diastolic_time <= 108.75) {
                    if (diastolic_time <= 70.75) {
                        if (diastolic_time <= 40.75) {
                            if (rr_median <= 45.5) {
                                if (num_valleys <= 92.5) {
                                    if (num_peaks <= 58.5) {
                                        if (diastolic_time <= 37.75) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 4;
                                        }
                                    } else {
                                        votes[18] = 4;
                                    }
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                if (num_peaks <= 61.5) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 3.0649150013923645) {
                                if (diastolic_time <= 54.75) {
                                    if (diastolic_time <= 49.5) {
                                        if (diastolic_time <= 46.5) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 4;
                                        }
                                    } else {
                                        votes[18] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 66.5) {
                                        if (num_peaks <= 43.5) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 2;
                                        }
                                    } else {
                                        if (num_peaks <= 53.5) {
                                            votes[18] = 0;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 65.75) {
                                    if (rr_std <= 15.160651683807373) {
                                        if (num_peaks <= 60.5) {
                                            votes[18] = 3;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    } else {
                                        if (num_valleys <= 90.0) {
                                            votes[18] = 3;
                                        } else {
                                            votes[18] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 13.735273361206055) {
                                        if (rr_std <= 10.533705711364746) {
                                            votes[18] = 0;
                                        } else {
                                            votes[18] = 0;
                                        }
                                    } else {
                                        votes[18] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 20.34508991241455) {
                            if (rr_std <= 14.226428985595703) {
                                if (diastolic_time <= 83.75) {
                                    if (rr_std <= 8.65733003616333) {
                                        votes[18] = 3;
                                    } else {
                                        votes[18] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 89.5) {
                                        votes[18] = 5;
                                    } else {
                                        votes[18] = 5;
                                    }
                                }
                            } else {
                                votes[18] = 5;
                            }
                        } else {
                            if (rr_median <= 88.0) {
                                if (rr_std <= 24.38099956512451) {
                                    votes[18] = 4;
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                if (num_peaks <= 56.5) {
                                    votes[18] = 4;
                                } else {
                                    votes[18] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 242.0) {
                        votes[18] = 1;
                    } else {
                        votes[18] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 54.75) {
                    if (rr_std <= 0.559664249420166) {
                        if (num_peaks <= 83.0) {
                            votes[18] = 0;
                        } else {
                            votes[18] = 3;
                        }
                    } else {
                        if (rr_median <= 59.5) {
                            votes[18] = 3;
                        } else {
                            if (diastolic_time <= 46.25) {
                                if (num_valleys <= 89.5) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 3;
                                }
                            } else {
                                if (num_peaks <= 85.5) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.296514511108398) {
                        if (rr_median <= 21.75) {
                            if (diastolic_time <= 89.75) {
                                if (num_peaks <= 88.0) {
                                    if (num_peaks <= 85.0) {
                                        votes[18] = 0;
                                    } else {
                                        votes[18] = 0;
                                    }
                                } else {
                                    votes[18] = 0;
                                }
                            } else {
                                votes[18] = 5;
                            }
                        } else {
                            if (rr_std <= 5.776855707168579) {
                                if (rr_median <= 81.25) {
                                    votes[18] = 3;
                                } else {
                                    if (num_peaks <= 83.5) {
                                        votes[18] = 5;
                                    } else {
                                        votes[18] = 2;
                                    }
                                }
                            } else {
                                votes[18] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 82.75) {
                            if (rr_std <= 18.961833000183105) {
                                if (diastolic_time <= 76.25) {
                                    votes[18] = 0;
                                } else {
                                    votes[18] = 0;
                                }
                            } else {
                                if (diastolic_time <= 73.5) {
                                    votes[18] = 0;
                                } else {
                                    votes[18] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 74.25) {
                                votes[18] = 0;
                            } else {
                                if (rr_std <= 35.62742042541504) {
                                    votes[18] = 0;
                                } else {
                                    votes[18] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 73.64412689208984) {
            if (rr_median <= 126.0) {
                if (rr_median <= 118.5) {
                    if (rr_std <= 25.93188762664795) {
                        if (diastolic_time <= 89.5) {
                            if (rr_std <= 10.247461318969727) {
                                if (num_peaks <= 74.0) {
                                    votes[18] = 1;
                                } else {
                                    votes[18] = 1;
                                }
                            } else {
                                votes[18] = 5;
                            }
                        } else {
                            votes[18] = 5;
                        }
                    } else {
                        if (num_peaks <= 74.0) {
                            votes[18] = 4;
                        } else {
                            votes[18] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 26.881442070007324) {
                        if (num_peaks <= 56.5) {
                            votes[18] = 2;
                        } else {
                            votes[18] = 1;
                        }
                    } else {
                        votes[18] = 1;
                    }
                }
            } else {
                if (rr_std <= 0.44031527638435364) {
                    votes[18] = 3;
                } else {
                    if (rr_std <= 38.52732849121094) {
                        if (rr_median <= 139.0) {
                            if (diastolic_time <= 80.5) {
                                votes[18] = 1;
                            } else {
                                votes[18] = 1;
                            }
                        } else {
                            votes[18] = 1;
                        }
                    } else {
                        if (num_valleys <= 90.0) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 87.5) {
                votes[18] = 3;
            } else {
                votes[18] = 0;
            }
        }
    }
// Decision rules for tree 19
    if (rr_median <= 128.75) {
        if (num_valleys <= 81.5) {
            if (rr_median <= 75.5) {
                if (rr_median <= 62.0) {
                    if (num_peaks <= 56.5) {
                        votes[19] = 5;
                    } else {
                        votes[19] = 2;
                    }
                } else {
                    if (num_peaks <= 53.5) {
                        if (rr_median <= 71.5) {
                            if (diastolic_time <= 68.5) {
                                votes[19] = 2;
                            } else {
                                votes[19] = 2;
                            }
                        } else {
                            votes[19] = 2;
                        }
                    } else {
                        if (diastolic_time <= 66.5) {
                            votes[19] = 2;
                        } else {
                            if (num_valleys <= 79.5) {
                                votes[19] = 2;
                            } else {
                                votes[19] = 2;
                            }
                        }
                    }
                }
            } else {
                votes[19] = 3;
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 327.0) {
                    if (diastolic_time <= 116.5) {
                        if (rr_std <= 17.486071586608887) {
                            if (diastolic_time <= 57.5) {
                                if (rr_median <= 46.5) {
                                    if (diastolic_time <= 33.5) {
                                        if (num_peaks <= 40.5) {
                                            votes[19] = 4;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 36.0) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 65.75) {
                                        if (diastolic_time <= 44.5) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        if (rr_median <= 85.5) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 62.5) {
                                    if (rr_std <= 11.403072834014893) {
                                        if (num_peaks <= 41.5) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 2;
                                        }
                                    } else {
                                        if (diastolic_time <= 72.25) {
                                            votes[19] = 0;
                                        } else {
                                            votes[19] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 83.0) {
                                        if (rr_std <= 0.8241128027439117) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        if (rr_median <= 85.5) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 74.0) {
                                if (diastolic_time <= 60.25) {
                                    if (num_peaks <= 54.5) {
                                        if (rr_std <= 34.606468200683594) {
                                            votes[19] = 1;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    } else {
                                        if (rr_median <= 71.5) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 5;
                                        }
                                    }
                                } else {
                                    votes[19] = 0;
                                }
                            } else {
                                if (diastolic_time <= 102.25) {
                                    if (rr_median <= 107.25) {
                                        if (rr_median <= 98.5) {
                                            votes[19] = 4;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    } else {
                                        votes[19] = 4;
                                    }
                                } else {
                                    votes[19] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 109.0) {
                            votes[19] = 1;
                        } else {
                            votes[19] = 1;
                        }
                    }
                } else {
                    votes[19] = 4;
                }
            } else {
                if (diastolic_time <= 54.75) {
                    if (rr_median <= 78.75) {
                        if (diastolic_time <= 32.5) {
                            votes[19] = 3;
                        } else {
                            if (rr_median <= 20.5) {
                                if (num_peaks <= 89.5) {
                                    votes[19] = 0;
                                } else {
                                    votes[19] = 2;
                                }
                            } else {
                                if (rr_std <= 10.772585391998291) {
                                    if (rr_std <= 1.526357352733612) {
                                        votes[19] = 3;
                                    } else {
                                        votes[19] = 3;
                                    }
                                } else {
                                    if (rr_std <= 17.260682106018066) {
                                        if (diastolic_time <= 46.0) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 0;
                                        }
                                    } else {
                                        votes[19] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 86.5) {
                            if (rr_std <= 14.827582836151123) {
                                votes[19] = 5;
                            } else {
                                votes[19] = 5;
                            }
                        } else {
                            if (rr_median <= 101.75) {
                                votes[19] = 0;
                            } else {
                                votes[19] = 2;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 85.5) {
                        if (rr_median <= 72.5) {
                            if (rr_median <= 21.75) {
                                votes[19] = 0;
                            } else {
                                if (num_valleys <= 88.5) {
                                    votes[19] = 3;
                                } else {
                                    if (diastolic_time <= 73.0) {
                                        votes[19] = 3;
                                    } else {
                                        votes[19] = 3;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 118.5) {
                                if (rr_median <= 85.5) {
                                    if (rr_std <= 13.559620380401611) {
                                        votes[19] = 0;
                                    } else {
                                        votes[19] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 82.0) {
                                        if (num_valleys <= 88.5) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 5;
                                        }
                                    } else {
                                        votes[19] = 1;
                                    }
                                }
                            } else {
                                votes[19] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 9.41529369354248) {
                            if (rr_median <= 63.0) {
                                if (diastolic_time <= 76.0) {
                                    votes[19] = 0;
                                } else {
                                    votes[19] = 0;
                                }
                            } else {
                                if (rr_median <= 78.5) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 42.44716835021973) {
                                if (num_peaks <= 88.5) {
                                    if (rr_median <= 84.25) {
                                        votes[19] = 0;
                                    } else {
                                        votes[19] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 63.5) {
                                        votes[19] = 0;
                                    } else {
                                        if (num_valleys <= 88.5) {
                                            votes[19] = 0;
                                        } else {
                                            votes[19] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[19] = 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 38.52732849121094) {
            if (rr_std <= 0.44031527638435364) {
                votes[19] = 5;
            } else {
                if (num_valleys <= 93.5) {
                    if (diastolic_time <= 35.0) {
                        votes[19] = 1;
                    } else {
                        votes[19] = 1;
                    }
                } else {
                    votes[19] = 1;
                }
            }
        } else {
            if (num_peaks <= 84.0) {
                if (num_valleys <= 89.5) {
                    votes[19] = 1;
                } else {
                    if (num_peaks <= 68.5) {
                        votes[19] = 4;
                    } else {
                        votes[19] = 2;
                    }
                }
            } else {
                votes[19] = 0;
            }
        }
    }
// Decision rules for tree 20
    if (num_peaks <= 73.5) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.7299954891204834) {
                if (rr_median <= 66.0) {
                    if (diastolic_time <= 62.75) {
                        votes[20] = 4;
                    } else {
                        votes[20] = 5;
                    }
                } else {
                    if (num_peaks <= 42.5) {
                        votes[20] = 2;
                    } else {
                        if (num_peaks <= 58.0) {
                            votes[20] = 2;
                        } else {
                            if (diastolic_time <= 66.5) {
                                votes[20] = 2;
                            } else {
                                votes[20] = 2;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 85.5) {
                    if (rr_median <= 65.5) {
                        votes[20] = 3;
                    } else {
                        votes[20] = 5;
                    }
                } else {
                    votes[20] = 1;
                }
            }
        } else {
            if (rr_median <= 134.5) {
                if (diastolic_time <= 261.5) {
                    if (diastolic_time <= 108.0) {
                        if (rr_std <= 31.99049663543701) {
                            if (diastolic_time <= 10.0) {
                                votes[20] = 4;
                            } else {
                                if (rr_median <= 89.75) {
                                    if (rr_std <= 19.40558624267578) {
                                        if (num_peaks <= 41.5) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 68.0) {
                                            votes[20] = 0;
                                        } else {
                                            votes[20] = 4;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 67.5) {
                                        if (rr_median <= 111.25) {
                                            votes[20] = 1;
                                        } else {
                                            votes[20] = 1;
                                        }
                                    } else {
                                        if (rr_median <= 114.5) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 88.5) {
                                votes[20] = 3;
                            } else {
                                if (rr_std <= 53.96332359313965) {
                                    votes[20] = 4;
                                } else {
                                    votes[20] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 118.25) {
                            votes[20] = 1;
                        } else {
                            if (rr_median <= 124.75) {
                                votes[20] = 2;
                            } else {
                                votes[20] = 1;
                            }
                        }
                    }
                } else {
                    votes[20] = 4;
                }
            } else {
                if (num_peaks <= 51.5) {
                    votes[20] = 1;
                } else {
                    if (rr_std <= 44.46341514587402) {
                        if (rr_median <= 193.25) {
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
        if (rr_median <= 105.25) {
            if (diastolic_time <= 47.25) {
                if (rr_std <= 0.21650634706020355) {
                    if (num_peaks <= 89.5) {
                        if (diastolic_time <= 32.5) {
                            votes[20] = 3;
                        } else {
                            votes[20] = 0;
                        }
                    } else {
                        votes[20] = 2;
                    }
                } else {
                    if (rr_median <= 67.5) {
                        if (rr_std <= 20.437808513641357) {
                            votes[20] = 3;
                        } else {
                            votes[20] = 3;
                        }
                    } else {
                        if (num_peaks <= 83.0) {
                            votes[20] = 5;
                        } else {
                            if (rr_std <= 11.413175582885742) {
                                if (rr_std <= 0.8556362986564636) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 3;
                                }
                            } else {
                                votes[20] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 63.5) {
                        if (num_valleys <= 89.5) {
                            if (rr_median <= 26.0) {
                                votes[20] = 3;
                            } else {
                                votes[20] = 3;
                            }
                        } else {
                            if (num_valleys <= 92.5) {
                                if (rr_std <= 1.8545912504196167) {
                                    votes[20] = 0;
                                } else {
                                    votes[20] = 0;
                                }
                            } else {
                                votes[20] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 7.301256895065308) {
                            if (num_peaks <= 80.5) {
                                if (num_valleys <= 82.5) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 5;
                                }
                            } else {
                                if (rr_median <= 82.5) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 19.205121994018555) {
                                if (num_valleys <= 90.5) {
                                    votes[20] = 0;
                                } else {
                                    votes[20] = 5;
                                }
                            } else {
                                if (num_valleys <= 88.5) {
                                    votes[20] = 5;
                                } else {
                                    votes[20] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 10.772585391998291) {
                        if (rr_median <= 74.0) {
                            if (rr_std <= 7.16554594039917) {
                                if (diastolic_time <= 76.75) {
                                    if (num_valleys <= 89.5) {
                                        votes[20] = 0;
                                    } else {
                                        votes[20] = 0;
                                    }
                                } else {
                                    votes[20] = 0;
                                }
                            } else {
                                votes[20] = 1;
                            }
                        } else {
                            votes[20] = 5;
                        }
                    } else {
                        if (rr_std <= 19.100642204284668) {
                            votes[20] = 0;
                        } else {
                            if (diastolic_time <= 83.5) {
                                votes[20] = 3;
                            } else {
                                votes[20] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 39.662532806396484) {
                if (rr_median <= 128.75) {
                    if (num_peaks <= 88.5) {
                        if (diastolic_time <= 105.5) {
                            votes[20] = 5;
                        } else {
                            votes[20] = 2;
                        }
                    } else {
                        votes[20] = 0;
                    }
                } else {
                    if (rr_median <= 171.5) {
                        votes[20] = 1;
                    } else {
                        votes[20] = 1;
                    }
                }
            } else {
                if (num_valleys <= 90.5) {
                    if (num_peaks <= 89.5) {
                        votes[20] = 1;
                    } else {
                        votes[20] = 0;
                    }
                } else {
                    if (rr_std <= 55.934486389160156) {
                        votes[20] = 0;
                    } else {
                        votes[20] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 21
    if (rr_median <= 104.5) {
        if (num_valleys <= 81.5) {
            if (rr_median <= 78.5) {
                if (rr_median <= 69.5) {
                    if (rr_std <= 0.5285045951604843) {
                        if (num_peaks <= 59.5) {
                            votes[21] = 5;
                        } else {
                            votes[21] = 2;
                        }
                    } else {
                        votes[21] = 2;
                    }
                } else {
                    if (num_peaks <= 58.0) {
                        votes[21] = 2;
                    } else {
                        if (rr_std <= 0.47895438969135284) {
                            votes[21] = 2;
                        } else {
                            votes[21] = 2;
                        }
                    }
                }
            } else {
                votes[21] = 5;
            }
        } else {
            if (num_peaks <= 76.5) {
                if (diastolic_time <= 85.25) {
                    if (diastolic_time <= 41.5) {
                        if (rr_median <= 39.0) {
                            if (num_peaks <= 60.5) {
                                if (diastolic_time <= 10.0) {
                                    votes[21] = 4;
                                } else {
                                    if (num_peaks <= 42.5) {
                                        if (num_valleys <= 89.5) {
                                            votes[21] = 4;
                                        } else {
                                            votes[21] = 4;
                                        }
                                    } else {
                                        if (num_peaks <= 52.0) {
                                            votes[21] = 4;
                                        } else {
                                            votes[21] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[21] = 4;
                            }
                        } else {
                            if (num_valleys <= 88.0) {
                                votes[21] = 1;
                            } else {
                                if (rr_std <= 20.189062118530273) {
                                    votes[21] = 3;
                                } else {
                                    votes[21] = 3;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 9.325254917144775) {
                            if (diastolic_time <= 55.25) {
                                if (num_peaks <= 38.0) {
                                    votes[21] = 4;
                                } else {
                                    if (num_peaks <= 63.0) {
                                        if (rr_std <= 0.2201736867427826) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 67.5) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 0.6576194167137146) {
                                    if (rr_median <= 24.5) {
                                        if (diastolic_time <= 63.75) {
                                            votes[21] = 2;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 59.5) {
                                            votes[21] = 2;
                                        } else {
                                            votes[21] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 1.9807692766189575) {
                                        votes[21] = 5;
                                    } else {
                                        votes[21] = 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 15.432813167572021) {
                                if (diastolic_time <= 74.5) {
                                    if (num_peaks <= 59.5) {
                                        votes[21] = 0;
                                    } else {
                                        votes[21] = 0;
                                    }
                                } else {
                                    votes[21] = 5;
                                }
                            } else {
                                if (num_peaks <= 58.5) {
                                    votes[21] = 5;
                                } else {
                                    if (diastolic_time <= 74.75) {
                                        if (diastolic_time <= 49.25) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 79.5) {
                                            votes[21] = 4;
                                        } else {
                                            votes[21] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 102.5) {
                        if (rr_std <= 13.388028144836426) {
                            if (diastolic_time <= 89.5) {
                                votes[21] = 5;
                            } else {
                                votes[21] = 5;
                            }
                        } else {
                            if (rr_median <= 98.5) {
                                if (rr_std <= 22.43495464324951) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 4;
                                }
                            } else {
                                votes[21] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 242.0) {
                            if (num_peaks <= 59.0) {
                                votes[21] = 1;
                            } else {
                                votes[21] = 1;
                            }
                        } else {
                            votes[21] = 4;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 54.75) {
                    if (rr_std <= 13.439927101135254) {
                        if (rr_std <= 8.660752296447754) {
                            if (rr_median <= 20.5) {
                                if (diastolic_time <= 35.75) {
                                    votes[21] = 3;
                                } else {
                                    if (num_peaks <= 88.0) {
                                        votes[21] = 0;
                                    } else {
                                        votes[21] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 0.8556362986564636) {
                                    votes[21] = 5;
                                } else {
                                    if (diastolic_time <= 47.25) {
                                        votes[21] = 3;
                                    } else {
                                        votes[21] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[21] = 0;
                        }
                    } else {
                        if (num_valleys <= 89.0) {
                            votes[21] = 3;
                        } else {
                            votes[21] = 3;
                        }
                    }
                } else {
                    if (num_valleys <= 86.5) {
                        if (num_peaks <= 86.5) {
                            if (rr_median <= 82.5) {
                                votes[21] = 3;
                            } else {
                                votes[21] = 5;
                            }
                        } else {
                            votes[21] = 1;
                        }
                    } else {
                        if (rr_std <= 5.043876647949219) {
                            if (rr_median <= 30.5) {
                                if (diastolic_time <= 89.75) {
                                    if (num_peaks <= 88.5) {
                                        votes[21] = 0;
                                    } else {
                                        votes[21] = 0;
                                    }
                                } else {
                                    votes[21] = 3;
                                }
                            } else {
                                if (rr_median <= 86.5) {
                                    votes[21] = 2;
                                } else {
                                    votes[21] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 35.62742042541504) {
                                if (rr_median <= 72.5) {
                                    if (num_peaks <= 82.0) {
                                        votes[21] = 3;
                                    } else {
                                        if (rr_std <= 13.605247497558594) {
                                            votes[21] = 0;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 90.5) {
                                        if (rr_std <= 22.643875122070312) {
                                            votes[21] = 0;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    } else {
                                        votes[21] = 0;
                                    }
                                }
                            } else {
                                votes[21] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_median <= 131.0) {
            if (num_peaks <= 69.0) {
                if (rr_std <= 33.04390525817871) {
                    if (rr_median <= 116.25) {
                        if (diastolic_time <= 71.5) {
                            votes[21] = 1;
                        } else {
                            votes[21] = 1;
                        }
                    } else {
                        if (num_peaks <= 54.0) {
                            votes[21] = 2;
                        } else {
                            votes[21] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 101.5) {
                        if (diastolic_time <= 74.75) {
                            votes[21] = 4;
                        } else {
                            votes[21] = 4;
                        }
                    } else {
                        votes[21] = 1;
                    }
                }
            } else {
                if (num_peaks <= 82.5) {
                    if (diastolic_time <= 112.0) {
                        if (rr_std <= 13.972258567810059) {
                            votes[21] = 5;
                        } else {
                            votes[21] = 5;
                        }
                    } else {
                        votes[21] = 1;
                    }
                } else {
                    if (diastolic_time <= 82.0) {
                        votes[21] = 1;
                    } else {
                        if (rr_std <= 25.328824043273926) {
                            votes[21] = 5;
                        } else {
                            votes[21] = 0;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 81.5) {
                if (rr_median <= 282.0) {
                    if (num_valleys <= 92.5) {
                        if (rr_median <= 134.5) {
                            votes[21] = 1;
                        } else {
                            if (rr_std <= 57.321393966674805) {
                                votes[21] = 1;
                            } else {
                                votes[21] = 1;
                            }
                        }
                    } else {
                        votes[21] = 1;
                    }
                } else {
                    votes[21] = 1;
                }
            } else {
                if (rr_std <= 28.741657495498657) {
                    votes[21] = 1;
                } else {
                    votes[21] = 0;
                }
            }
        }
    }
// Decision rules for tree 22
    if (rr_median <= 126.5) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.7481152415275574) {
                if (diastolic_time <= 79.0) {
                    if (rr_median <= 64.0) {
                        if (diastolic_time <= 48.5) {
                            votes[22] = 2;
                        } else {
                            votes[22] = 3;
                        }
                    } else {
                        if (rr_median <= 75.0) {
                            if (rr_median <= 71.5) {
                                if (diastolic_time <= 62.5) {
                                    votes[22] = 2;
                                } else {
                                    if (num_peaks <= 56.5) {
                                        votes[22] = 2;
                                    } else {
                                        votes[22] = 3;
                                    }
                                }
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
                if (rr_std <= 0.8972135782241821) {
                    votes[22] = 5;
                } else {
                    if (diastolic_time <= 71.5) {
                        if (num_peaks <= 65.0) {
                            votes[22] = 3;
                        } else {
                            votes[22] = 3;
                        }
                    } else {
                        votes[22] = 5;
                    }
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 244.5) {
                    if (diastolic_time <= 112.25) {
                        if (diastolic_time <= 34.5) {
                            if (rr_median <= 42.75) {
                                if (diastolic_time <= 10.0) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 4;
                                }
                            } else {
                                votes[22] = 1;
                            }
                        } else {
                            if (rr_std <= 14.35457992553711) {
                                if (diastolic_time <= 74.75) {
                                    if (num_peaks <= 35.5) {
                                        if (num_peaks <= 24.5) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 41.25) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 113.0) {
                                        if (rr_std <= 0.3162277638912201) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        votes[22] = 2;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 72.75) {
                                    if (diastolic_time <= 47.25) {
                                        votes[22] = 3;
                                    } else {
                                        if (rr_std <= 22.807942390441895) {
                                            votes[22] = 0;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 29.813352584838867) {
                                        if (rr_median <= 88.5) {
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
                    } else {
                        if (rr_median <= 113.75) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 2;
                        }
                    }
                } else {
                    votes[22] = 4;
                }
            } else {
                if (rr_median <= 104.0) {
                    if (num_peaks <= 84.5) {
                        if (rr_median <= 71.5) {
                            if (rr_std <= 0.8443530201911926) {
                                if (num_peaks <= 81.5) {
                                    if (num_peaks <= 79.0) {
                                        votes[22] = 0;
                                    } else {
                                        votes[22] = 0;
                                    }
                                } else {
                                    votes[22] = 3;
                                }
                            } else {
                                if (rr_median <= 60.25) {
                                    if (rr_std <= 15.319309711456299) {
                                        votes[22] = 3;
                                    } else {
                                        votes[22] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 67.0) {
                                        votes[22] = 3;
                                    } else {
                                        votes[22] = 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 18.400039672851562) {
                                if (diastolic_time <= 75.0) {
                                    if (rr_median <= 85.5) {
                                        votes[22] = 3;
                                    } else {
                                        votes[22] = 5;
                                    }
                                } else {
                                    votes[22] = 0;
                                }
                            } else {
                                votes[22] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 49.5) {
                            if (rr_median <= 90.0) {
                                if (diastolic_time <= 41.75) {
                                    votes[22] = 0;
                                } else {
                                    votes[22] = 3;
                                }
                            } else {
                                votes[22] = 1;
                            }
                        } else {
                            if (diastolic_time <= 63.5) {
                                if (rr_median <= 54.5) {
                                    if (rr_median <= 25.0) {
                                        votes[22] = 0;
                                    } else {
                                        votes[22] = 3;
                                    }
                                } else {
                                    if (rr_std <= 10.17027473449707) {
                                        votes[22] = 0;
                                    } else {
                                        votes[22] = 0;
                                    }
                                }
                            } else {
                                if (rr_median <= 82.75) {
                                    if (rr_std <= 13.979379177093506) {
                                        if (rr_median <= 69.0) {
                                            votes[22] = 0;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        votes[22] = 4;
                                    }
                                } else {
                                    if (rr_std <= 9.522740602493286) {
                                        votes[22] = 2;
                                    } else {
                                        if (diastolic_time <= 79.0) {
                                            votes[22] = 0;
                                        } else {
                                            votes[22] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 86.5) {
                        if (rr_median <= 122.5) {
                            votes[22] = 5;
                        } else {
                            votes[22] = 2;
                        }
                    } else {
                        votes[22] = 1;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 79.5) {
            if (rr_std <= 1.572058081626892) {
                if (num_valleys <= 87.5) {
                    votes[22] = 1;
                } else {
                    votes[22] = 3;
                }
            } else {
                if (num_valleys <= 94.5) {
                    if (diastolic_time <= 70.5) {
                        votes[22] = 1;
                    } else {
                        if (diastolic_time <= 116.0) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 1;
                        }
                    }
                } else {
                    votes[22] = 1;
                }
            }
        } else {
            if (rr_std <= 34.38009452819824) {
                if (num_peaks <= 85.0) {
                    votes[22] = 1;
                } else {
                    votes[22] = 1;
                }
            } else {
                if (diastolic_time <= 69.0) {
                    votes[22] = 0;
                } else {
                    votes[22] = 0;
                }
            }
        }
    }
// Decision rules for tree 23
    if (rr_median <= 124.75) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.6868122220039368) {
                if (rr_median <= 66.0) {
                    if (diastolic_time <= 62.75) {
                        if (num_peaks <= 60.5) {
                            votes[23] = 3;
                        } else {
                            votes[23] = 2;
                        }
                    } else {
                        if (diastolic_time <= 94.0) {
                            votes[23] = 5;
                        } else {
                            votes[23] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 78.75) {
                        if (num_peaks <= 79.5) {
                            if (rr_median <= 71.5) {
                                if (rr_std <= 0.545406848192215) {
                                    if (num_peaks <= 52.5) {
                                        votes[23] = 2;
                                    } else {
                                        votes[23] = 2;
                                    }
                                } else {
                                    votes[23] = 2;
                                }
                            } else {
                                votes[23] = 2;
                            }
                        } else {
                            votes[23] = 2;
                        }
                    } else {
                        if (diastolic_time <= 85.5) {
                            votes[23] = 3;
                        } else {
                            votes[23] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 71.5) {
                    if (num_peaks <= 82.5) {
                        votes[23] = 3;
                    } else {
                        votes[23] = 1;
                    }
                } else {
                    if (rr_median <= 75.5) {
                        votes[23] = 5;
                    } else {
                        if (num_peaks <= 69.5) {
                            votes[23] = 1;
                        } else {
                            if (num_peaks <= 79.5) {
                                votes[23] = 3;
                            } else {
                                votes[23] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 77.5) {
                if (diastolic_time <= 261.5) {
                    if (diastolic_time <= 116.5) {
                        if (rr_std <= 22.262717247009277) {
                            if (diastolic_time <= 10.0) {
                                votes[23] = 4;
                            } else {
                                if (diastolic_time <= 81.5) {
                                    if (rr_std <= 0.565681666135788) {
                                        if (diastolic_time <= 55.25) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 2;
                                        }
                                    } else {
                                        if (rr_std <= 11.714547634124756) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 2.889144241809845) {
                                        if (diastolic_time <= 101.25) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 111.5) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 87.5) {
                                votes[23] = 3;
                            } else {
                                if (diastolic_time <= 100.75) {
                                    if (diastolic_time <= 83.0) {
                                        if (num_peaks <= 73.0) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 31.737625122070312) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    }
                                } else {
                                    votes[23] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 101.0) {
                            if (diastolic_time <= 119.75) {
                                votes[23] = 1;
                            } else {
                                votes[23] = 1;
                            }
                        } else {
                            votes[23] = 1;
                        }
                    }
                } else {
                    votes[23] = 4;
                }
            } else {
                if (diastolic_time <= 39.75) {
                    if (diastolic_time <= 32.5) {
                        votes[23] = 3;
                    } else {
                        votes[23] = 3;
                    }
                } else {
                    if (rr_median <= 104.5) {
                        if (num_peaks <= 84.5) {
                            if (rr_std <= 15.208188533782959) {
                                if (rr_median <= 21.25) {
                                    votes[23] = 0;
                                } else {
                                    if (rr_std <= 7.053381443023682) {
                                        if (rr_median <= 74.25) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        if (rr_median <= 70.5) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[23] = 5;
                            }
                        } else {
                            if (rr_std <= 9.826676368713379) {
                                if (rr_median <= 25.0) {
                                    if (num_peaks <= 88.5) {
                                        votes[23] = 0;
                                    } else {
                                        if (diastolic_time <= 70.25) {
                                            votes[23] = 0;
                                        } else {
                                            votes[23] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 1.378233015537262) {
                                        votes[23] = 5;
                                    } else {
                                        if (num_peaks <= 86.5) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 54.5) {
                                    votes[23] = 3;
                                } else {
                                    if (rr_std <= 25.118375778198242) {
                                        if (rr_std <= 18.8148193359375) {
                                            votes[23] = 0;
                                        } else {
                                            votes[23] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 69.75) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 40.416893005371094) {
                            if (diastolic_time <= 91.0) {
                                votes[23] = 5;
                            } else {
                                votes[23] = 1;
                            }
                        } else {
                            votes[23] = 3;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 85.0) {
            if (num_valleys <= 94.5) {
                if (rr_median <= 136.5) {
                    if (num_valleys <= 89.5) {
                        if (num_valleys <= 86.5) {
                            votes[23] = 1;
                        } else {
                            votes[23] = 1;
                        }
                    } else {
                        votes[23] = 4;
                    }
                } else {
                    if (rr_std <= 72.50964736938477) {
                        if (rr_std <= 0.4714045226573944) {
                            votes[23] = 3;
                        } else {
                            if (rr_median <= 151.75) {
                                votes[23] = 1;
                            } else {
                                votes[23] = 1;
                            }
                        }
                    } else {
                        votes[23] = 3;
                    }
                }
            } else {
                votes[23] = 4;
            }
        } else {
            if (rr_std <= 23.465543270111084) {
                votes[23] = 1;
            } else {
                votes[23] = 0;
            }
        }
    }
// Decision rules for tree 24
    if (num_peaks <= 73.5) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 64.0) {
                if (diastolic_time <= 68.25) {
                    if (num_peaks <= 55.5) {
                        votes[24] = 3;
                    } else {
                        votes[24] = 1;
                    }
                } else {
                    votes[24] = 5;
                }
            } else {
                if (rr_std <= 0.730697900056839) {
                    if (rr_median <= 73.5) {
                        if (num_peaks <= 59.5) {
                            votes[24] = 2;
                        } else {
                            if (rr_std <= 0.4740213602781296) {
                                votes[24] = 2;
                            } else {
                                votes[24] = 2;
                            }
                        }
                    } else {
                        votes[24] = 2;
                    }
                } else {
                    votes[24] = 1;
                }
            }
        } else {
            if (rr_median <= 133.75) {
                if (diastolic_time <= 310.0) {
                    if (rr_std <= 21.783602714538574) {
                        if (rr_median <= 116.0) {
                            if (diastolic_time <= 37.75) {
                                if (rr_median <= 54.5) {
                                    if (num_peaks <= 58.5) {
                                        if (num_peaks <= 39.5) {
                                            votes[24] = 4;
                                        } else {
                                            votes[24] = 4;
                                        }
                                    } else {
                                        votes[24] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 57.0) {
                                        votes[24] = 0;
                                    } else {
                                        votes[24] = 3;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 107.0) {
                                    if (diastolic_time <= 75.25) {
                                        if (rr_std <= 9.002352714538574) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 15.316328048706055) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 4;
                                        }
                                    }
                                } else {
                                    votes[24] = 1;
                                }
                            }
                        } else {
                            if (num_peaks <= 52.0) {
                                votes[24] = 2;
                            } else {
                                votes[24] = 2;
                            }
                        }
                    } else {
                        if (diastolic_time <= 110.5) {
                            if (diastolic_time <= 76.75) {
                                if (num_peaks <= 50.5) {
                                    votes[24] = 4;
                                } else {
                                    if (rr_median <= 69.0) {
                                        votes[24] = 3;
                                    } else {
                                        votes[24] = 1;
                                    }
                                }
                            } else {
                                if (rr_median <= 98.5) {
                                    votes[24] = 4;
                                } else {
                                    if (rr_std <= 43.451133728027344) {
                                        votes[24] = 5;
                                    } else {
                                        votes[24] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 109.5) {
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
                if (rr_std <= 38.35716438293457) {
                    if (rr_std <= 1.6123724579811096) {
                        votes[24] = 1;
                    } else {
                        if (rr_median <= 200.25) {
                            votes[24] = 1;
                        } else {
                            votes[24] = 1;
                        }
                    }
                } else {
                    votes[24] = 1;
                }
            }
        }
    } else {
        if (diastolic_time <= 55.5) {
            if (rr_median <= 90.5) {
                if (rr_median <= 20.5) {
                    if (diastolic_time <= 35.75) {
                        if (diastolic_time <= 32.0) {
                            votes[24] = 3;
                        } else {
                            votes[24] = 5;
                        }
                    } else {
                        if (diastolic_time <= 41.25) {
                            votes[24] = 0;
                        } else {
                            if (diastolic_time <= 47.5) {
                                votes[24] = 3;
                            } else {
                                votes[24] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 63.25) {
                        if (rr_median <= 56.0) {
                            if (num_peaks <= 76.5) {
                                votes[24] = 3;
                            } else {
                                votes[24] = 3;
                            }
                        } else {
                            votes[24] = 3;
                        }
                    } else {
                        if (rr_std <= 21.8406925201416) {
                            if (diastolic_time <= 47.25) {
                                if (diastolic_time <= 40.0) {
                                    votes[24] = 5;
                                } else {
                                    votes[24] = 3;
                                }
                            } else {
                                votes[24] = 0;
                            }
                        } else {
                            votes[24] = 3;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 49.75) {
                    if (rr_median <= 146.0) {
                        if (num_peaks <= 88.5) {
                            votes[24] = 5;
                        } else {
                            votes[24] = 1;
                        }
                    } else {
                        votes[24] = 1;
                    }
                } else {
                    votes[24] = 0;
                }
            }
        } else {
            if (num_peaks <= 87.5) {
                if (rr_median <= 73.5) {
                    if (num_peaks <= 85.5) {
                        if (rr_median <= 21.75) {
                            if (diastolic_time <= 89.75) {
                                votes[24] = 0;
                            } else {
                                votes[24] = 3;
                            }
                        } else {
                            if (rr_median <= 64.0) {
                                votes[24] = 3;
                            } else {
                                if (num_peaks <= 80.0) {
                                    votes[24] = 0;
                                } else {
                                    votes[24] = 3;
                                }
                            }
                        }
                    } else {
                        votes[24] = 0;
                    }
                } else {
                    if (rr_std <= 2.604467034339905) {
                        if (diastolic_time <= 93.75) {
                            if (num_valleys <= 86.5) {
                                votes[24] = 5;
                            } else {
                                votes[24] = 5;
                            }
                        } else {
                            votes[24] = 2;
                        }
                    } else {
                        if (rr_median <= 96.5) {
                            if (num_valleys <= 88.5) {
                                votes[24] = 5;
                            } else {
                                if (rr_std <= 19.205121994018555) {
                                    votes[24] = 0;
                                } else {
                                    votes[24] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 82.5) {
                                if (diastolic_time <= 70.5) {
                                    votes[24] = 0;
                                } else {
                                    votes[24] = 1;
                                }
                            } else {
                                if (rr_median <= 122.0) {
                                    votes[24] = 5;
                                } else {
                                    votes[24] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 5.797887325286865) {
                    if (rr_median <= 86.5) {
                        if (num_valleys <= 89.5) {
                            votes[24] = 2;
                        } else {
                            votes[24] = 0;
                        }
                    } else {
                        votes[24] = 1;
                    }
                } else {
                    if (num_valleys <= 87.5) {
                        votes[24] = 0;
                    } else {
                        if (rr_std <= 29.730782508850098) {
                            votes[24] = 0;
                        } else {
                            if (diastolic_time <= 87.75) {
                                votes[24] = 0;
                            } else {
                                votes[24] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 25
    if (rr_median <= 128.75) {
        if (num_peaks <= 69.5) {
            if (num_valleys <= 81.5) {
                if (rr_median <= 62.0) {
                    votes[25] = 5;
                } else {
                    if (rr_median <= 73.5) {
                        if (num_valleys <= 80.5) {
                            if (rr_median <= 69.5) {
                                votes[25] = 2;
                            } else {
                                votes[25] = 2;
                            }
                        } else {
                            votes[25] = 2;
                        }
                    } else {
                        votes[25] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 242.0) {
                    if (diastolic_time <= 38.75) {
                        if (rr_median <= 59.5) {
                            if (num_valleys <= 92.5) {
                                if (num_valleys <= 87.5) {
                                    votes[25] = 4;
                                } else {
                                    votes[25] = 4;
                                }
                            } else {
                                votes[25] = 4;
                            }
                        } else {
                            if (rr_median <= 80.5) {
                                votes[25] = 3;
                            } else {
                                votes[25] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 19.992870330810547) {
                            if (num_peaks <= 41.5) {
                                if (diastolic_time <= 111.0) {
                                    if (diastolic_time <= 74.0) {
                                        if (num_valleys <= 85.5) {
                                            votes[25] = 4;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    } else {
                                        votes[25] = 5;
                                    }
                                } else {
                                    votes[25] = 1;
                                }
                            } else {
                                if (num_peaks <= 52.5) {
                                    if (rr_std <= 11.590306758880615) {
                                        if (diastolic_time <= 55.25) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 2;
                                        }
                                    } else {
                                        votes[25] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 59.5) {
                                        if (num_valleys <= 88.5) {
                                            votes[25] = 1;
                                        } else {
                                            votes[25] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 86.0) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 100.5) {
                                if (diastolic_time <= 55.25) {
                                    votes[25] = 1;
                                } else {
                                    if (rr_std <= 29.76898193359375) {
                                        if (diastolic_time <= 83.0) {
                                            votes[25] = 4;
                                        } else {
                                            votes[25] = 4;
                                        }
                                    } else {
                                        votes[25] = 4;
                                    }
                                }
                            } else {
                                if (num_peaks <= 55.5) {
                                    votes[25] = 1;
                                } else {
                                    votes[25] = 2;
                                }
                            }
                        }
                    }
                } else {
                    votes[25] = 4;
                }
            }
        } else {
            if (rr_median <= 67.25) {
                if (rr_std <= 0.5154271870851517) {
                    if (diastolic_time <= 37.5) {
                        if (num_peaks <= 87.5) {
                            votes[25] = 3;
                        } else {
                            votes[25] = 2;
                        }
                    } else {
                        if (num_peaks <= 76.0) {
                            votes[25] = 3;
                        } else {
                            if (num_peaks <= 89.0) {
                                if (diastolic_time <= 49.5) {
                                    votes[25] = 0;
                                } else {
                                    if (diastolic_time <= 59.5) {
                                        votes[25] = 0;
                                    } else {
                                        if (diastolic_time <= 68.75) {
                                            votes[25] = 0;
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
                    if (rr_median <= 55.75) {
                        if (diastolic_time <= 72.0) {
                            if (diastolic_time <= 55.25) {
                                votes[25] = 3;
                            } else {
                                votes[25] = 3;
                            }
                        } else {
                            votes[25] = 1;
                        }
                    } else {
                        if (num_peaks <= 85.5) {
                            if (rr_std <= 16.661542415618896) {
                                if (diastolic_time <= 59.0) {
                                    votes[25] = 3;
                                } else {
                                    votes[25] = 3;
                                }
                            } else {
                                if (diastolic_time <= 61.25) {
                                    votes[25] = 3;
                                } else {
                                    votes[25] = 4;
                                }
                            }
                        } else {
                            if (num_valleys <= 88.5) {
                                votes[25] = 0;
                            } else {
                                votes[25] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.877108573913574) {
                    if (rr_median <= 98.25) {
                        if (diastolic_time <= 40.5) {
                            votes[25] = 5;
                        } else {
                            if (rr_median <= 72.5) {
                                if (rr_std <= 1.2691786885261536) {
                                    votes[25] = 3;
                                } else {
                                    votes[25] = 3;
                                }
                            } else {
                                if (num_peaks <= 72.5) {
                                    votes[25] = 5;
                                } else {
                                    if (rr_median <= 76.5) {
                                        votes[25] = 5;
                                    } else {
                                        if (num_valleys <= 86.5) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 89.5) {
                            if (num_peaks <= 81.5) {
                                votes[25] = 5;
                            } else {
                                votes[25] = 1;
                            }
                        } else {
                            votes[25] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 87.5) {
                        if (num_peaks <= 75.5) {
                            if (diastolic_time <= 75.25) {
                                votes[25] = 0;
                            } else {
                                if (num_valleys <= 90.5) {
                                    votes[25] = 4;
                                } else {
                                    votes[25] = 4;
                                }
                            }
                        } else {
                            if (rr_std <= 13.473517894744873) {
                                votes[25] = 0;
                            } else {
                                if (rr_median <= 97.25) {
                                    if (diastolic_time <= 65.0) {
                                        votes[25] = 3;
                                    } else {
                                        votes[25] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 82.5) {
                                        votes[25] = 5;
                                    } else {
                                        votes[25] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 63.5) {
                            votes[25] = 0;
                        } else {
                            if (rr_std <= 29.730782508850098) {
                                votes[25] = 0;
                            } else {
                                if (rr_std <= 35.183067321777344) {
                                    votes[25] = 0;
                                } else {
                                    votes[25] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_median <= 327.5) {
            if (rr_std <= 55.02791786193848) {
                if (num_valleys <= 94.5) {
                    if (rr_median <= 131.25) {
                        votes[25] = 1;
                    } else {
                        if (rr_median <= 244.0) {
                            if (rr_std <= 42.91545295715332) {
                                if (rr_median <= 133.75) {
                                    votes[25] = 1;
                                } else {
                                    votes[25] = 1;
                                }
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
            } else {
                if (num_peaks <= 77.5) {
                    votes[25] = 3;
                } else {
                    votes[25] = 0;
                }
            }
        } else {
            if (diastolic_time <= 52.75) {
                votes[25] = 5;
            } else {
                votes[25] = 0;
            }
        }
    }
// Decision rules for tree 26
    if (num_valleys <= 81.5) {
        if (rr_median <= 75.0) {
            if (rr_median <= 62.0) {
                if (num_peaks <= 59.5) {
                    votes[26] = 5;
                } else {
                    votes[26] = 2;
                }
            } else {
                if (num_valleys <= 78.5) {
                    votes[26] = 2;
                } else {
                    if (rr_std <= 0.563134491443634) {
                        votes[26] = 2;
                    } else {
                        votes[26] = 2;
                    }
                }
            }
        } else {
            if (rr_std <= 0.49495531618595123) {
                votes[26] = 5;
            } else {
                votes[26] = 3;
            }
        }
    } else {
        if (rr_median <= 129.5) {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 261.5) {
                    if (diastolic_time <= 107.5) {
                        if (rr_std <= 16.26704502105713) {
                            if (diastolic_time <= 10.0) {
                                if (num_peaks <= 44.5) {
                                    votes[26] = 4;
                                } else {
                                    votes[26] = 4;
                                }
                            } else {
                                if (diastolic_time <= 74.5) {
                                    if (diastolic_time <= 55.25) {
                                        if (rr_median <= 65.5) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 0.7396831214427948) {
                                            votes[26] = 2;
                                        } else {
                                            votes[26] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 105.75) {
                                        if (rr_std <= 13.416666030883789) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 4;
                                        }
                                    } else {
                                        votes[26] = 2;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 74.25) {
                                if (rr_median <= 73.5) {
                                    if (num_peaks <= 69.0) {
                                        votes[26] = 3;
                                    } else {
                                        votes[26] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 63.0) {
                                        if (rr_std <= 38.804588317871094) {
                                            votes[26] = 1;
                                        } else {
                                            votes[26] = 4;
                                        }
                                    } else {
                                        votes[26] = 0;
                                    }
                                }
                            } else {
                                if (num_peaks <= 56.0) {
                                    if (diastolic_time <= 94.0) {
                                        if (diastolic_time <= 86.75) {
                                            votes[26] = 4;
                                        } else {
                                            votes[26] = 4;
                                        }
                                    } else {
                                        votes[26] = 1;
                                    }
                                } else {
                                    votes[26] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 118.25) {
                            if (num_peaks <= 32.5) {
                                votes[26] = 1;
                            } else {
                                votes[26] = 1;
                            }
                        } else {
                            if (rr_median <= 123.5) {
                                votes[26] = 2;
                            } else {
                                votes[26] = 2;
                            }
                        }
                    }
                } else {
                    votes[26] = 4;
                }
            } else {
                if (num_peaks <= 86.5) {
                    if (rr_median <= 85.25) {
                        if (rr_median <= 20.5) {
                            if (diastolic_time <= 63.0) {
                                if (diastolic_time <= 35.5) {
                                    votes[26] = 0;
                                } else {
                                    votes[26] = 0;
                                }
                            } else {
                                votes[26] = 3;
                            }
                        } else {
                            if (rr_median <= 54.25) {
                                votes[26] = 3;
                            } else {
                                if (rr_std <= 7.764881372451782) {
                                    if (rr_std <= 1.0866236686706543) {
                                        votes[26] = 5;
                                    } else {
                                        votes[26] = 3;
                                    }
                                } else {
                                    if (rr_std <= 15.740650653839111) {
                                        if (rr_median <= 69.25) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 59.25) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 111.0) {
                            if (num_peaks <= 82.0) {
                                if (rr_std <= 22.559345245361328) {
                                    if (diastolic_time <= 85.75) {
                                        votes[26] = 5;
                                    } else {
                                        votes[26] = 5;
                                    }
                                } else {
                                    votes[26] = 5;
                                }
                            } else {
                                if (diastolic_time <= 78.0) {
                                    votes[26] = 1;
                                } else {
                                    votes[26] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 5.478224992752075) {
                                votes[26] = 2;
                            } else {
                                votes[26] = 0;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 48.75) {
                        if (diastolic_time <= 40.0) {
                            votes[26] = 3;
                        } else {
                            if (num_valleys <= 90.5) {
                                votes[26] = 3;
                            } else {
                                votes[26] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 10.680412769317627) {
                            if (rr_median <= 99.25) {
                                if (diastolic_time <= 61.75) {
                                    votes[26] = 0;
                                } else {
                                    if (rr_std <= 1.5805930197238922) {
                                        if (diastolic_time <= 76.75) {
                                            votes[26] = 0;
                                        } else {
                                            votes[26] = 2;
                                        }
                                    } else {
                                        votes[26] = 5;
                                    }
                                }
                            } else {
                                votes[26] = 1;
                            }
                        } else {
                            if (rr_std <= 46.14060401916504) {
                                if (rr_median <= 74.25) {
                                    if (rr_std <= 15.996195793151855) {
                                        votes[26] = 0;
                                    } else {
                                        votes[26] = 3;
                                    }
                                } else {
                                    if (rr_median <= 85.0) {
                                        votes[26] = 0;
                                    } else {
                                        votes[26] = 0;
                                    }
                                }
                            } else {
                                votes[26] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 39.87405586242676) {
                if (rr_median <= 333.0) {
                    if (rr_median <= 134.25) {
                        if (num_peaks <= 74.5) {
                            votes[26] = 1;
                        } else {
                            votes[26] = 1;
                        }
                    } else {
                        if (num_valleys <= 93.5) {
                            if (rr_std <= 1.083776980638504) {
                                votes[26] = 1;
                            } else {
                                votes[26] = 1;
                            }
                        } else {
                            votes[26] = 1;
                        }
                    }
                } else {
                    votes[26] = 3;
                }
            } else {
                if (num_peaks <= 77.5) {
                    if (diastolic_time <= 47.5) {
                        votes[26] = 1;
                    } else {
                        if (num_peaks <= 54.5) {
                            votes[26] = 4;
                        } else {
                            votes[26] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 58.227962493896484) {
                        votes[26] = 0;
                    } else {
                        votes[26] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 27
    if (rr_median <= 128.75) {
        if (num_peaks <= 73.5) {
            if (num_valleys <= 85.5) {
                if (rr_median <= 66.0) {
                    if (num_valleys <= 78.5) {
                        votes[27] = 5;
                    } else {
                        if (num_peaks <= 40.0) {
                            votes[27] = 1;
                        } else {
                            if (num_valleys <= 83.5) {
                                votes[27] = 3;
                            } else {
                                votes[27] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.730697900056839) {
                        if (rr_median <= 73.5) {
                            if (rr_median <= 69.5) {
                                if (num_valleys <= 78.5) {
                                    votes[27] = 2;
                                } else {
                                    votes[27] = 2;
                                }
                            } else {
                                votes[27] = 2;
                            }
                        } else {
                            votes[27] = 2;
                        }
                    } else {
                        if (rr_std <= 1.012647271156311) {
                            votes[27] = 1;
                        } else {
                            votes[27] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 117.75) {
                    if (diastolic_time <= 327.5) {
                        if (diastolic_time <= 103.25) {
                            if (diastolic_time <= 40.75) {
                                if (rr_median <= 39.0) {
                                    if (num_peaks <= 60.0) {
                                        if (num_valleys <= 92.5) {
                                            votes[27] = 4;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    } else {
                                        votes[27] = 4;
                                    }
                                } else {
                                    if (rr_median <= 84.0) {
                                        votes[27] = 3;
                                    } else {
                                        votes[27] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 15.31638240814209) {
                                    if (diastolic_time <= 74.5) {
                                        if (rr_std <= 9.325254917144775) {
                                            votes[27] = 2;
                                        } else {
                                            votes[27] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 83.0) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 65.5) {
                                        if (diastolic_time <= 52.25) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 66.5) {
                                            votes[27] = 4;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[27] = 1;
                        }
                    } else {
                        votes[27] = 4;
                    }
                } else {
                    if (diastolic_time <= 99.0) {
                        votes[27] = 4;
                    } else {
                        votes[27] = 2;
                    }
                }
            }
        } else {
            if (diastolic_time <= 55.5) {
                if (rr_median <= 72.5) {
                    if (rr_median <= 20.5) {
                        if (num_valleys <= 89.5) {
                            if (num_valleys <= 86.0) {
                                votes[27] = 2;
                            } else {
                                votes[27] = 3;
                            }
                        } else {
                            if (num_peaks <= 83.0) {
                                votes[27] = 0;
                            } else {
                                votes[27] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 59.5) {
                            if (num_peaks <= 76.0) {
                                votes[27] = 3;
                            } else {
                                votes[27] = 3;
                            }
                        } else {
                            if (num_peaks <= 85.5) {
                                votes[27] = 3;
                            } else {
                                votes[27] = 0;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 83.0) {
                        if (rr_median <= 83.5) {
                            votes[27] = 5;
                        } else {
                            votes[27] = 5;
                        }
                    } else {
                        if (num_peaks <= 88.5) {
                            if (rr_median <= 83.0) {
                                votes[27] = 3;
                            } else {
                                votes[27] = 3;
                            }
                        } else {
                            if (rr_median <= 98.75) {
                                votes[27] = 0;
                            } else {
                                votes[27] = 1;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 63.5) {
                        if (rr_median <= 23.5) {
                            if (num_peaks <= 82.5) {
                                votes[27] = 3;
                            } else {
                                votes[27] = 0;
                            }
                        } else {
                            votes[27] = 3;
                        }
                    } else {
                        if (rr_std <= 6.497220993041992) {
                            if (diastolic_time <= 113.5) {
                                if (diastolic_time <= 82.5) {
                                    if (rr_std <= 0.8953388035297394) {
                                        votes[27] = 2;
                                    } else {
                                        if (rr_std <= 1.2636988162994385) {
                                            votes[27] = 1;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 92.75) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 5;
                                    }
                                }
                            } else {
                                votes[27] = 2;
                            }
                        } else {
                            if (rr_std <= 13.328832149505615) {
                                if (rr_median <= 93.75) {
                                    votes[27] = 0;
                                } else {
                                    votes[27] = 0;
                                }
                            } else {
                                if (rr_median <= 96.5) {
                                    if (diastolic_time <= 85.5) {
                                        votes[27] = 3;
                                    } else {
                                        votes[27] = 4;
                                    }
                                } else {
                                    if (num_valleys <= 88.5) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.847529888153076) {
                        if (rr_median <= 35.0) {
                            if (num_peaks <= 88.5) {
                                votes[27] = 0;
                            } else {
                                if (num_valleys <= 90.5) {
                                    votes[27] = 0;
                                } else {
                                    votes[27] = 3;
                                }
                            }
                        } else {
                            if (rr_median <= 87.5) {
                                votes[27] = 5;
                            } else {
                                votes[27] = 1;
                            }
                        }
                    } else {
                        if (num_valleys <= 86.5) {
                            votes[27] = 1;
                        } else {
                            if (rr_std <= 16.40364170074463) {
                                votes[27] = 0;
                            } else {
                                if (diastolic_time <= 79.5) {
                                    if (rr_median <= 85.25) {
                                        votes[27] = 0;
                                    } else {
                                        votes[27] = 3;
                                    }
                                } else {
                                    if (rr_median <= 109.75) {
                                        votes[27] = 0;
                                    } else {
                                        votes[27] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 39.87405586242676) {
            if (rr_std <= 0.44031527638435364) {
                votes[27] = 0;
            } else {
                if (num_valleys <= 93.5) {
                    if (rr_median <= 133.75) {
                        votes[27] = 1;
                    } else {
                        votes[27] = 1;
                    }
                } else {
                    votes[27] = 1;
                }
            }
        } else {
            if (diastolic_time <= 51.25) {
                votes[27] = 1;
            } else {
                if (num_peaks <= 76.0) {
                    votes[27] = 3;
                } else {
                    votes[27] = 0;
                }
            }
        }
    }
// Decision rules for tree 28
    if (rr_median <= 122.5) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.6868122220039368) {
                if (diastolic_time <= 80.5) {
                    if (rr_median <= 64.0) {
                        if (diastolic_time <= 44.75) {
                            votes[28] = 2;
                        } else {
                            votes[28] = 3;
                        }
                    } else {
                        if (num_peaks <= 79.5) {
                            if (rr_median <= 71.5) {
                                if (num_valleys <= 80.5) {
                                    if (num_valleys <= 76.5) {
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
                            votes[28] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 94.0) {
                        votes[28] = 5;
                    } else {
                        votes[28] = 4;
                    }
                }
            } else {
                if (rr_median <= 86.0) {
                    if (num_peaks <= 80.5) {
                        if (num_peaks <= 67.0) {
                            votes[28] = 5;
                        } else {
                            votes[28] = 3;
                        }
                    } else {
                        votes[28] = 1;
                    }
                } else {
                    votes[28] = 1;
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 82.5) {
                    if (num_peaks <= 41.5) {
                        if (num_valleys <= 88.5) {
                            if (num_peaks <= 29.5) {
                                votes[28] = 4;
                            } else {
                                votes[28] = 5;
                            }
                        } else {
                            if (diastolic_time <= 22.5) {
                                votes[28] = 4;
                            } else {
                                votes[28] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 37.75) {
                            if (rr_median <= 52.75) {
                                if (num_peaks <= 58.5) {
                                    votes[28] = 4;
                                } else {
                                    votes[28] = 4;
                                }
                            } else {
                                if (rr_median <= 80.0) {
                                    votes[28] = 3;
                                } else {
                                    votes[28] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 11.875505924224854) {
                                if (diastolic_time <= 54.5) {
                                    if (rr_median <= 65.0) {
                                        if (num_peaks <= 64.5) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 59.5) {
                                            votes[28] = 0;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 63.0) {
                                        if (diastolic_time <= 62.25) {
                                            votes[28] = 2;
                                        } else {
                                            votes[28] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 0.5540054142475128) {
                                            votes[28] = 5;
                                        } else {
                                            votes[28] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 63.75) {
                                    if (rr_std <= 22.326393127441406) {
                                        if (rr_std <= 15.358119487762451) {
                                            votes[28] = 0;
                                        } else {
                                            votes[28] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 32.772799491882324) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 4;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 64.5) {
                                        if (rr_median <= 83.0) {
                                            votes[28] = 5;
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
                    if (rr_median <= 117.25) {
                        if (diastolic_time <= 112.75) {
                            if (rr_std <= 7.360098123550415) {
                                votes[28] = 5;
                            } else {
                                if (rr_std <= 18.268949508666992) {
                                    votes[28] = 4;
                                } else {
                                    if (diastolic_time <= 99.75) {
                                        if (rr_std <= 29.90772247314453) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 4;
                                        }
                                    } else {
                                        votes[28] = 4;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 261.5) {
                                votes[28] = 1;
                            } else {
                                votes[28] = 4;
                            }
                        }
                    } else {
                        votes[28] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 52.75) {
                    if (rr_median <= 75.75) {
                        if (diastolic_time <= 32.5) {
                            votes[28] = 3;
                        } else {
                            if (rr_std <= 0.6683902740478516) {
                                if (diastolic_time <= 37.75) {
                                    votes[28] = 2;
                                } else {
                                    votes[28] = 0;
                                }
                            } else {
                                if (rr_std <= 10.877324104309082) {
                                    votes[28] = 3;
                                } else {
                                    if (rr_std <= 20.973054885864258) {
                                        if (rr_median <= 59.0) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 0;
                                        }
                                    } else {
                                        votes[28] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 48.0) {
                            if (num_peaks <= 85.0) {
                                votes[28] = 5;
                            } else {
                                votes[28] = 3;
                            }
                        } else {
                            votes[28] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (rr_std <= 18.400039672851562) {
                            if (num_valleys <= 91.5) {
                                if (rr_std <= 8.745098114013672) {
                                    if (rr_median <= 21.75) {
                                        votes[28] = 0;
                                    } else {
                                        if (rr_median <= 79.0) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 11.711661338806152) {
                                        votes[28] = 0;
                                    } else {
                                        votes[28] = 0;
                                    }
                                }
                            } else {
                                if (rr_median <= 71.75) {
                                    votes[28] = 3;
                                } else {
                                    votes[28] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 29.971856117248535) {
                                votes[28] = 4;
                            } else {
                                votes[28] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 98.25) {
                            if (num_valleys <= 87.5) {
                                if (rr_median <= 26.5) {
                                    votes[28] = 0;
                                } else {
                                    votes[28] = 3;
                                }
                            } else {
                                if (diastolic_time <= 72.25) {
                                    if (rr_std <= 16.257240295410156) {
                                        if (rr_std <= 9.243790626525879) {
                                            votes[28] = 0;
                                        } else {
                                            votes[28] = 0;
                                        }
                                    } else {
                                        votes[28] = 0;
                                    }
                                } else {
                                    if (rr_median <= 82.0) {
                                        votes[28] = 5;
                                    } else {
                                        if (diastolic_time <= 90.75) {
                                            votes[28] = 0;
                                        } else {
                                            votes[28] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 81.5) {
                                votes[28] = 1;
                            } else {
                                if (rr_std <= 21.30316162109375) {
                                    votes[28] = 1;
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
        if (rr_std <= 61.158145904541016) {
            if (rr_median <= 129.5) {
                if (num_peaks <= 54.0) {
                    votes[28] = 2;
                } else {
                    if (diastolic_time <= 104.5) {
                        votes[28] = 5;
                    } else {
                        if (diastolic_time <= 122.75) {
                            votes[28] = 1;
                        } else {
                            votes[28] = 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 364.5) {
                    if (num_valleys <= 92.5) {
                        if (num_peaks <= 86.0) {
                            if (rr_median <= 133.75) {
                                votes[28] = 1;
                            } else {
                                if (num_peaks <= 46.5) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 1;
                                }
                            }
                        } else {
                            votes[28] = 0;
                        }
                    } else {
                        if (rr_std <= 16.497071266174316) {
                            votes[28] = 1;
                        } else {
                            votes[28] = 5;
                        }
                    }
                } else {
                    votes[28] = 3;
                }
            }
        } else {
            if (num_peaks <= 84.5) {
                votes[28] = 3;
            } else {
                votes[28] = 0;
            }
        }
    }
// Decision rules for tree 29
    if (rr_median <= 104.75) {
        if (num_valleys <= 86.5) {
            if (rr_median <= 66.75) {
                if (rr_median <= 40.0) {
                    if (num_peaks <= 31.5) {
                        votes[29] = 4;
                    } else {
                        if (diastolic_time <= 48.5) {
                            if (num_peaks <= 61.5) {
                                votes[29] = 4;
                            } else {
                                votes[29] = 2;
                            }
                        } else {
                            if (num_valleys <= 84.5) {
                                votes[29] = 5;
                            } else {
                                votes[29] = 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 55.5) {
                        if (rr_std <= 10.555519104003906) {
                            votes[29] = 3;
                        } else {
                            votes[29] = 3;
                        }
                    } else {
                        votes[29] = 2;
                    }
                }
            } else {
                if (rr_median <= 75.0) {
                    if (rr_std <= 0.7299954891204834) {
                        if (num_valleys <= 73.5) {
                            if (num_valleys <= 70.5) {
                                votes[29] = 2;
                            } else {
                                votes[29] = 2;
                            }
                        } else {
                            if (num_peaks <= 68.0) {
                                votes[29] = 2;
                            } else {
                                votes[29] = 2;
                            }
                        }
                    } else {
                        if (num_peaks <= 68.5) {
                            votes[29] = 5;
                        } else {
                            votes[29] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 75.5) {
                        if (num_peaks <= 59.5) {
                            votes[29] = 1;
                        } else {
                            votes[29] = 5;
                        }
                    } else {
                        if (diastolic_time <= 76.75) {
                            if (rr_std <= 0.8987637162208557) {
                                votes[29] = 5;
                            } else {
                                votes[29] = 3;
                            }
                        } else {
                            votes[29] = 2;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 76.5) {
                if (diastolic_time <= 301.5) {
                    if (diastolic_time <= 102.5) {
                        if (rr_std <= 15.530973434448242) {
                            if (diastolic_time <= 74.0) {
                                if (rr_median <= 39.25) {
                                    if (diastolic_time <= 59.5) {
                                        if (num_peaks <= 59.5) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 49.5) {
                                            votes[29] = 2;
                                        } else {
                                            votes[29] = 0;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 57.5) {
                                        if (rr_std <= 10.533705711364746) {
                                            votes[29] = 3;
                                        } else {
                                            votes[29] = 0;
                                        }
                                    } else {
                                        if (rr_median <= 67.25) {
                                            votes[29] = 3;
                                        } else {
                                            votes[29] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 55.0) {
                                    if (diastolic_time <= 92.5) {
                                        votes[29] = 0;
                                    } else {
                                        votes[29] = 5;
                                    }
                                } else {
                                    if (rr_std <= 2.033756673336029) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 5;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 74.25) {
                                if (diastolic_time <= 48.0) {
                                    if (rr_std <= 38.11945724487305) {
                                        votes[29] = 4;
                                    } else {
                                        votes[29] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 63.5) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 0;
                                    }
                                }
                            } else {
                                if (num_valleys <= 90.5) {
                                    if (rr_median <= 91.5) {
                                        votes[29] = 4;
                                    } else {
                                        votes[29] = 5;
                                    }
                                } else {
                                    if (rr_std <= 24.55654811859131) {
                                        votes[29] = 4;
                                    } else {
                                        votes[29] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 53.0) {
                            votes[29] = 1;
                        } else {
                            votes[29] = 1;
                        }
                    }
                } else {
                    votes[29] = 4;
                }
            } else {
                if (diastolic_time <= 52.75) {
                    if (diastolic_time <= 28.5) {
                        votes[29] = 3;
                    } else {
                        if (rr_std <= 26.037412643432617) {
                            if (diastolic_time <= 46.75) {
                                if (num_valleys <= 89.5) {
                                    votes[29] = 3;
                                } else {
                                    if (num_peaks <= 87.5) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 0;
                                    }
                                }
                            } else {
                                if (rr_std <= 5.52966582775116) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 3;
                                }
                            }
                        } else {
                            votes[29] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 85.5) {
                        if (num_valleys <= 88.5) {
                            if (rr_median <= 68.5) {
                                votes[29] = 5;
                            } else {
                                votes[29] = 3;
                            }
                        } else {
                            if (rr_std <= 6.359187602996826) {
                                if (rr_std <= 0.600788414478302) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 3;
                                }
                            } else {
                                if (rr_median <= 67.5) {
                                    votes[29] = 3;
                                } else {
                                    if (rr_std <= 14.924640655517578) {
                                        votes[29] = 0;
                                    } else {
                                        votes[29] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 10.554501056671143) {
                            if (diastolic_time <= 72.75) {
                                if (rr_median <= 26.0) {
                                    if (diastolic_time <= 63.25) {
                                        votes[29] = 0;
                                    } else {
                                        votes[29] = 0;
                                    }
                                } else {
                                    votes[29] = 0;
                                }
                            } else {
                                votes[29] = 5;
                            }
                        } else {
                            if (diastolic_time <= 62.5) {
                                votes[29] = 0;
                            } else {
                                if (rr_median <= 75.0) {
                                    votes[29] = 0;
                                } else {
                                    if (diastolic_time <= 77.5) {
                                        votes[29] = 0;
                                    } else {
                                        votes[29] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 85.5) {
            if (diastolic_time <= 78.25) {
                if (rr_std <= 0.4714045226573944) {
                    votes[29] = 3;
                } else {
                    if (rr_std <= 39.87405586242676) {
                        if (rr_median <= 131.0) {
                            if (diastolic_time <= 53.25) {
                                votes[29] = 1;
                            } else {
                                votes[29] = 1;
                            }
                        } else {
                            votes[29] = 1;
                        }
                    } else {
                        if (rr_median <= 158.5) {
                            votes[29] = 4;
                        } else {
                            if (diastolic_time <= 51.0) {
                                votes[29] = 1;
                            } else {
                                votes[29] = 3;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 127.5) {
                    if (rr_std <= 13.076703548431396) {
                        if (rr_std <= 2.3905757665634155) {
                            votes[29] = 5;
                        } else {
                            if (num_peaks <= 54.0) {
                                votes[29] = 2;
                            } else {
                                votes[29] = 2;
                            }
                        }
                    } else {
                        if (diastolic_time <= 104.5) {
                            if (rr_median <= 120.5) {
                                votes[29] = 4;
                            } else {
                                votes[29] = 5;
                            }
                        } else {
                            if (rr_std <= 29.259855270385742) {
                                votes[29] = 1;
                            } else {
                                votes[29] = 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 172.5) {
                        votes[29] = 1;
                    } else {
                        votes[29] = 4;
                    }
                }
            }
        } else {
            if (num_valleys <= 86.5) {
                if (diastolic_time <= 81.75) {
                    votes[29] = 1;
                } else {
                    votes[29] = 1;
                }
            } else {
                if (rr_median <= 159.0) {
                    if (num_valleys <= 90.5) {
                        votes[29] = 1;
                    } else {
                        votes[29] = 0;
                    }
                } else {
                    if (rr_median <= 248.25) {
                        votes[29] = 0;
                    } else {
                        votes[29] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 30
    if (num_peaks <= 74.5) {
        if (num_valleys <= 85.5) {
            if (rr_median <= 66.0) {
                if (diastolic_time <= 68.25) {
                    if (num_valleys <= 83.5) {
                        if (num_valleys <= 81.0) {
                            votes[30] = 3;
                        } else {
                            votes[30] = 3;
                        }
                    } else {
                        if (diastolic_time <= 46.25) {
                            votes[30] = 5;
                        } else {
                            votes[30] = 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 94.0) {
                        votes[30] = 5;
                    } else {
                        votes[30] = 4;
                    }
                }
            } else {
                if (rr_std <= 0.7299954891204834) {
                    if (rr_median <= 73.5) {
                        if (rr_std <= 0.47034794092178345) {
                            if (rr_std <= 0.43653950095176697) {
                                votes[30] = 2;
                            } else {
                                votes[30] = 2;
                            }
                        } else {
                            votes[30] = 2;
                        }
                    } else {
                        votes[30] = 2;
                    }
                } else {
                    if (num_peaks <= 59.5) {
                        votes[30] = 1;
                    } else {
                        votes[30] = 5;
                    }
                }
            }
        } else {
            if (rr_median <= 110.25) {
                if (diastolic_time <= 78.5) {
                    if (diastolic_time <= 41.75) {
                        if (rr_std <= 0.5678908228874207) {
                            if (diastolic_time <= 10.0) {
                                votes[30] = 4;
                            } else {
                                if (diastolic_time <= 36.0) {
                                    votes[30] = 4;
                                } else {
                                    if (num_valleys <= 89.5) {
                                        votes[30] = 4;
                                    } else {
                                        votes[30] = 4;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 57.5) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 9.058522701263428) {
                            if (rr_std <= 0.565681666135788) {
                                if (num_peaks <= 39.0) {
                                    votes[30] = 4;
                                } else {
                                    if (num_peaks <= 50.5) {
                                        if (diastolic_time <= 61.75) {
                                            votes[30] = 2;
                                        } else {
                                            votes[30] = 2;
                                        }
                                    } else {
                                        if (num_peaks <= 56.0) {
                                            votes[30] = 0;
                                        } else {
                                            votes[30] = 2;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 74.5) {
                                    votes[30] = 3;
                                } else {
                                    votes[30] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 59.0) {
                                votes[30] = 3;
                            } else {
                                if (diastolic_time <= 65.5) {
                                    if (rr_std <= 22.324491500854492) {
                                        if (num_peaks <= 60.5) {
                                            votes[30] = 0;
                                        } else {
                                            votes[30] = 0;
                                        }
                                    } else {
                                        votes[30] = 1;
                                    }
                                } else {
                                    if (num_peaks <= 63.5) {
                                        votes[30] = 5;
                                    } else {
                                        votes[30] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 109.25) {
                        if (rr_std <= 15.316328048706055) {
                            if (diastolic_time <= 84.75) {
                                votes[30] = 5;
                            } else {
                                if (num_peaks <= 56.0) {
                                    votes[30] = 5;
                                } else {
                                    votes[30] = 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 49.5) {
                                votes[30] = 4;
                            } else {
                                if (diastolic_time <= 84.0) {
                                    if (diastolic_time <= 80.5) {
                                        votes[30] = 4;
                                    } else {
                                        votes[30] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 95.0) {
                                        votes[30] = 4;
                                    } else {
                                        votes[30] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 242.0) {
                            votes[30] = 1;
                        } else {
                            votes[30] = 4;
                        }
                    }
                }
            } else {
                if (rr_median <= 129.5) {
                    if (rr_median <= 118.5) {
                        votes[30] = 1;
                    } else {
                        if (num_peaks <= 54.0) {
                            if (rr_std <= 7.135059356689453) {
                                votes[30] = 2;
                            } else {
                                votes[30] = 2;
                            }
                        } else {
                            votes[30] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 65.24743270874023) {
                        if (rr_median <= 155.0) {
                            if (num_valleys <= 89.5) {
                                votes[30] = 1;
                            } else {
                                votes[30] = 5;
                            }
                        } else {
                            if (rr_std <= 1.5067996382713318) {
                                votes[30] = 1;
                            } else {
                                if (num_valleys <= 91.0) {
                                    votes[30] = 1;
                                } else {
                                    votes[30] = 1;
                                }
                            }
                        }
                    } else {
                        votes[30] = 3;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 82.5) {
            if (rr_median <= 79.25) {
                if (rr_std <= 0.9999606311321259) {
                    if (num_valleys <= 86.0) {
                        votes[30] = 3;
                    } else {
                        if (diastolic_time <= 60.0) {
                            votes[30] = 0;
                        } else {
                            votes[30] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 17.55293893814087) {
                        if (diastolic_time <= 65.0) {
                            votes[30] = 3;
                        } else {
                            votes[30] = 3;
                        }
                    } else {
                        if (rr_median <= 61.5) {
                            votes[30] = 3;
                        } else {
                            votes[30] = 4;
                        }
                    }
                }
            } else {
                if (num_peaks <= 78.5) {
                    if (rr_median <= 126.5) {
                        if (num_peaks <= 77.5) {
                            if (num_peaks <= 76.5) {
                                votes[30] = 5;
                            } else {
                                votes[30] = 5;
                            }
                        } else {
                            votes[30] = 5;
                        }
                    } else {
                        votes[30] = 1;
                    }
                } else {
                    if (rr_median <= 116.0) {
                        votes[30] = 0;
                    } else {
                        if (num_valleys <= 91.5) {
                            votes[30] = 2;
                        } else {
                            votes[30] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 86.5) {
                if (rr_median <= 89.0) {
                    if (rr_median <= 67.25) {
                        if (num_peaks <= 90.5) {
                            votes[30] = 0;
                        } else {
                            votes[30] = 2;
                        }
                    } else {
                        if (rr_median <= 77.25) {
                            votes[30] = 5;
                        } else {
                            votes[30] = 5;
                        }
                    }
                } else {
                    votes[30] = 1;
                }
            } else {
                if (diastolic_time <= 50.5) {
                    if (diastolic_time <= 48.25) {
                        if (num_valleys <= 90.5) {
                            if (rr_std <= 11.875997066497803) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 0;
                            }
                        } else {
                            votes[30] = 0;
                        }
                    } else {
                        votes[30] = 1;
                    }
                } else {
                    if (diastolic_time <= 70.5) {
                        if (rr_std <= 21.517288208007812) {
                            if (rr_std <= 9.826676368713379) {
                                if (rr_std <= 7.16554594039917) {
                                    if (diastolic_time <= 61.0) {
                                        votes[30] = 0;
                                    } else {
                                        votes[30] = 0;
                                    }
                                } else {
                                    votes[30] = 3;
                                }
                            } else {
                                votes[30] = 0;
                            }
                        } else {
                            if (rr_median <= 130.0) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 8.877108573913574) {
                            if (rr_std <= 0.1332346796989441) {
                                votes[30] = 0;
                            } else {
                                if (rr_median <= 105.5) {
                                    votes[30] = 5;
                                } else {
                                    votes[30] = 1;
                                }
                            }
                        } else {
                            if (num_peaks <= 87.5) {
                                votes[30] = 0;
                            } else {
                                if (num_peaks <= 89.5) {
                                    if (rr_std <= 29.232016563415527) {
                                        votes[30] = 0;
                                    } else {
                                        votes[30] = 1;
                                    }
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
    if (num_valleys <= 84.5) {
        if (rr_std <= 0.7558121979236603) {
            if (rr_median <= 66.0) {
                if (diastolic_time <= 73.5) {
                    if (num_valleys <= 83.5) {
                        votes[31] = 3;
                    } else {
                        votes[31] = 2;
                    }
                } else {
                    votes[31] = 5;
                }
            } else {
                if (num_peaks <= 77.0) {
                    if (rr_median <= 73.5) {
                        if (rr_median <= 71.5) {
                            if (num_valleys <= 80.5) {
                                if (num_peaks <= 49.5) {
                                    votes[31] = 2;
                                } else {
                                    votes[31] = 2;
                                }
                            } else {
                                votes[31] = 3;
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
            }
        } else {
            if (rr_median <= 87.0) {
                if (rr_std <= 3.797610878944397) {
                    if (rr_median <= 76.5) {
                        if (diastolic_time <= 41.75) {
                            votes[31] = 3;
                        } else {
                            votes[31] = 5;
                        }
                    } else {
                        votes[31] = 3;
                    }
                } else {
                    votes[31] = 1;
                }
            } else {
                if (num_peaks <= 72.0) {
                    votes[31] = 1;
                } else {
                    votes[31] = 1;
                }
            }
        }
    } else {
        if (num_peaks <= 74.5) {
            if (rr_median <= 106.5) {
                if (diastolic_time <= 242.0) {
                    if (diastolic_time <= 110.5) {
                        if (diastolic_time <= 37.75) {
                            if (rr_median <= 61.5) {
                                if (num_peaks <= 60.5) {
                                    votes[31] = 4;
                                } else {
                                    votes[31] = 5;
                                }
                            } else {
                                votes[31] = 3;
                            }
                        } else {
                            if (diastolic_time <= 75.25) {
                                if (rr_std <= 1.009185016155243) {
                                    if (diastolic_time <= 54.75) {
                                        if (num_valleys <= 88.5) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 4;
                                        }
                                    } else {
                                        if (num_peaks <= 49.5) {
                                            votes[31] = 2;
                                        } else {
                                            votes[31] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 8.994228839874268) {
                                        if (rr_std <= 3.513191342353821) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 3;
                                        }
                                    } else {
                                        if (rr_median <= 59.0) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 12.028092861175537) {
                                    if (diastolic_time <= 89.5) {
                                        votes[31] = 5;
                                    } else {
                                        votes[31] = 5;
                                    }
                                } else {
                                    if (rr_std <= 17.506596565246582) {
                                        if (rr_median <= 87.25) {
                                            votes[31] = 4;
                                        } else {
                                            votes[31] = 1;
                                        }
                                    } else {
                                        if (rr_median <= 94.25) {
                                            votes[31] = 4;
                                        } else {
                                            votes[31] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        votes[31] = 1;
                    }
                } else {
                    votes[31] = 4;
                }
            } else {
                if (rr_median <= 129.5) {
                    if (rr_median <= 118.5) {
                        if (num_peaks <= 48.5) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 1;
                        }
                    } else {
                        if (rr_std <= 9.065512657165527) {
                            if (num_valleys <= 89.5) {
                                votes[31] = 2;
                            } else {
                                votes[31] = 2;
                            }
                        } else {
                            votes[31] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 72.50964736938477) {
                        if (rr_median <= 154.5) {
                            if (num_peaks <= 57.0) {
                                votes[31] = 5;
                            } else {
                                votes[31] = 1;
                            }
                        } else {
                            if (rr_std <= 1.083776980638504) {
                                votes[31] = 1;
                            } else {
                                if (rr_std <= 41.47220420837402) {
                                    votes[31] = 1;
                                } else {
                                    votes[31] = 1;
                                }
                            }
                        }
                    } else {
                        votes[31] = 3;
                    }
                }
            }
        } else {
            if (rr_median <= 69.75) {
                if (rr_std <= 20.973054885864258) {
                    if (diastolic_time <= 33.75) {
                        votes[31] = 3;
                    } else {
                        if (num_peaks <= 89.5) {
                            if (rr_median <= 20.5) {
                                if (diastolic_time <= 89.75) {
                                    if (num_peaks <= 87.5) {
                                        votes[31] = 0;
                                    } else {
                                        votes[31] = 0;
                                    }
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                if (rr_median <= 55.25) {
                                    votes[31] = 3;
                                } else {
                                    if (diastolic_time <= 60.5) {
                                        if (num_peaks <= 85.0) {
                                            votes[31] = 0;
                                        } else {
                                            votes[31] = 0;
                                        }
                                    } else {
                                        votes[31] = 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 55.5) {
                                if (num_valleys <= 90.5) {
                                    votes[31] = 2;
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                votes[31] = 0;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 78.5) {
                        votes[31] = 3;
                    } else {
                        votes[31] = 3;
                    }
                }
            } else {
                if (rr_std <= 5.566662549972534) {
                    if (num_peaks <= 80.0) {
                        votes[31] = 5;
                    } else {
                        if (rr_median <= 99.25) {
                            if (diastolic_time <= 93.75) {
                                if (rr_std <= 1.279021441936493) {
                                    votes[31] = 5;
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                votes[31] = 2;
                            }
                        } else {
                            if (diastolic_time <= 60.75) {
                                votes[31] = 1;
                            } else {
                                votes[31] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 87.5) {
                        if (rr_std <= 13.529529094696045) {
                            if (rr_median <= 99.0) {
                                votes[31] = 0;
                            } else {
                                votes[31] = 1;
                            }
                        } else {
                            if (rr_median <= 140.25) {
                                if (rr_median <= 79.25) {
                                    votes[31] = 4;
                                } else {
                                    if (num_valleys <= 90.5) {
                                        if (num_peaks <= 77.5) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 83.5) {
                                            votes[31] = 4;
                                        } else {
                                            votes[31] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 186.25) {
                                    votes[31] = 1;
                                } else {
                                    votes[31] = 0;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 65.75) {
                            if (num_peaks <= 90.0) {
                                votes[31] = 5;
                            } else {
                                votes[31] = 0;
                            }
                        } else {
                            if (rr_std <= 34.52758026123047) {
                                votes[31] = 0;
                            } else {
                                votes[31] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 32
    if (num_peaks <= 74.5) {
        if (rr_median <= 126.5) {
            if (num_valleys <= 85.5) {
                if (rr_median <= 66.0) {
                    if (diastolic_time <= 68.25) {
                        if (rr_median <= 54.0) {
                            if (diastolic_time <= 46.25) {
                                if (diastolic_time <= 39.75) {
                                    votes[32] = 3;
                                } else {
                                    votes[32] = 4;
                                }
                            } else {
                                votes[32] = 2;
                            }
                        } else {
                            votes[32] = 3;
                        }
                    } else {
                        if (num_valleys <= 82.5) {
                            votes[32] = 5;
                        } else {
                            votes[32] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (diastolic_time <= 47.75) {
                            votes[32] = 2;
                        } else {
                            if (rr_median <= 69.5) {
                                if (num_peaks <= 52.0) {
                                    votes[32] = 2;
                                } else {
                                    votes[32] = 2;
                                }
                            } else {
                                votes[32] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 85.5) {
                            votes[32] = 3;
                        } else {
                            votes[32] = 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 119.75) {
                    if (diastolic_time <= 76.5) {
                        if (diastolic_time <= 37.75) {
                            if (rr_median <= 57.75) {
                                if (diastolic_time <= 10.0) {
                                    votes[32] = 4;
                                } else {
                                    if (diastolic_time <= 35.5) {
                                        votes[32] = 4;
                                    } else {
                                        votes[32] = 4;
                                    }
                                }
                            } else {
                                votes[32] = 1;
                            }
                        } else {
                            if (num_peaks <= 49.5) {
                                if (diastolic_time <= 57.5) {
                                    if (num_peaks <= 41.5) {
                                        if (diastolic_time <= 52.5) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 4;
                                        }
                                    } else {
                                        votes[32] = 3;
                                    }
                                } else {
                                    if (rr_median <= 19.0) {
                                        if (num_valleys <= 90.5) {
                                            votes[32] = 2;
                                        } else {
                                            votes[32] = 2;
                                        }
                                    } else {
                                        votes[32] = 1;
                                    }
                                }
                            } else {
                                if (rr_median <= 70.75) {
                                    if (num_valleys <= 90.5) {
                                        if (num_peaks <= 52.5) {
                                            votes[32] = 2;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 55.0) {
                                            votes[32] = 0;
                                        } else {
                                            votes[32] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 8.971539497375488) {
                                        votes[32] = 5;
                                    } else {
                                        if (num_peaks <= 53.5) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 107.5) {
                            if (rr_std <= 15.10298204421997) {
                                if (diastolic_time <= 89.5) {
                                    votes[32] = 5;
                                } else {
                                    if (rr_std <= 1.2985270023345947) {
                                        votes[32] = 5;
                                    } else {
                                        votes[32] = 5;
                                    }
                                }
                            } else {
                                if (rr_median <= 84.5) {
                                    votes[32] = 4;
                                } else {
                                    if (rr_std <= 32.803585052490234) {
                                        if (num_valleys <= 89.5) {
                                            votes[32] = 4;
                                        } else {
                                            votes[32] = 5;
                                        }
                                    } else {
                                        votes[32] = 4;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 242.0) {
                                votes[32] = 1;
                            } else {
                                votes[32] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 95.0) {
                        votes[32] = 2;
                    } else {
                        if (diastolic_time <= 108.5) {
                            votes[32] = 2;
                        } else {
                            votes[32] = 2;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 47.5) {
                votes[32] = 1;
            } else {
                if (rr_median <= 182.0) {
                    if (num_peaks <= 50.5) {
                        votes[32] = 4;
                    } else {
                        if (num_valleys <= 90.5) {
                            if (rr_median <= 135.5) {
                                votes[32] = 1;
                            } else {
                                votes[32] = 1;
                            }
                        } else {
                            votes[32] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 71.75) {
                        votes[32] = 3;
                    } else {
                        votes[32] = 4;
                    }
                }
            }
        }
    } else {
        if (rr_median <= 98.75) {
            if (diastolic_time <= 54.5) {
                if (rr_median <= 20.5) {
                    if (diastolic_time <= 35.75) {
                        votes[32] = 3;
                    } else {
                        if (diastolic_time <= 41.75) {
                            votes[32] = 0;
                        } else {
                            votes[32] = 0;
                        }
                    }
                } else {
                    if (rr_median <= 60.5) {
                        if (num_valleys <= 91.5) {
                            votes[32] = 3;
                        } else {
                            votes[32] = 3;
                        }
                    } else {
                        if (num_valleys <= 90.5) {
                            if (rr_median <= 77.5) {
                                if (rr_std <= 1.313026249408722) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 3;
                                }
                            } else {
                                votes[32] = 3;
                            }
                        } else {
                            votes[32] = 5;
                        }
                    }
                }
            } else {
                if (num_peaks <= 82.5) {
                    if (rr_median <= 72.5) {
                        if (rr_std <= 0.9078124761581421) {
                            if (diastolic_time <= 65.5) {
                                votes[32] = 3;
                            } else {
                                votes[32] = 0;
                            }
                        } else {
                            if (rr_std <= 21.705917358398438) {
                                votes[32] = 3;
                            } else {
                                votes[32] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 6.365271210670471) {
                            if (rr_std <= 0.8953388035297394) {
                                votes[32] = 5;
                            } else {
                                votes[32] = 5;
                            }
                        } else {
                            if (rr_std <= 18.53220224380493) {
                                votes[32] = 0;
                            } else {
                                votes[32] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 3.8554816246032715) {
                        if (rr_median <= 30.5) {
                            if (num_peaks <= 89.5) {
                                if (num_valleys <= 88.5) {
                                    votes[32] = 0;
                                } else {
                                    votes[32] = 0;
                                }
                            } else {
                                votes[32] = 3;
                            }
                        } else {
                            if (rr_median <= 81.25) {
                                votes[32] = 2;
                            } else {
                                votes[32] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 87.5) {
                            if (num_peaks <= 86.5) {
                                if (rr_std <= 11.558677673339844) {
                                    votes[32] = 0;
                                } else {
                                    votes[32] = 0;
                                }
                            } else {
                                votes[32] = 4;
                            }
                        } else {
                            if (diastolic_time <= 67.25) {
                                if (rr_median <= 69.5) {
                                    votes[32] = 0;
                                } else {
                                    votes[32] = 3;
                                }
                            } else {
                                votes[32] = 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 39.662532806396484) {
                if (rr_median <= 128.75) {
                    if (num_peaks <= 88.5) {
                        if (diastolic_time <= 111.0) {
                            if (rr_median <= 106.5) {
                                votes[32] = 1;
                            } else {
                                if (num_peaks <= 82.5) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 5;
                                }
                            }
                        } else {
                            votes[32] = 2;
                        }
                    } else {
                        if (rr_std <= 15.648316383361816) {
                            votes[32] = 1;
                        } else {
                            votes[32] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 2.562311053276062) {
                        votes[32] = 1;
                    } else {
                        if (rr_median <= 155.75) {
                            votes[32] = 1;
                        } else {
                            votes[32] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 82.0) {
                    if (rr_median <= 191.75) {
                        votes[32] = 1;
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
    if (rr_median <= 105.25) {
        if (num_valleys <= 85.5) {
            if (rr_median <= 66.0) {
                if (num_peaks <= 57.5) {
                    if (num_valleys <= 82.5) {
                        votes[33] = 5;
                    } else {
                        if (num_peaks <= 34.0) {
                            votes[33] = 4;
                        } else {
                            votes[33] = 1;
                        }
                    }
                } else {
                    if (num_valleys <= 82.5) {
                        if (rr_std <= 0.5557533353567123) {
                            votes[33] = 2;
                        } else {
                            votes[33] = 1;
                        }
                    } else {
                        if (rr_std <= 0.7089544236660004) {
                            votes[33] = 3;
                        } else {
                            votes[33] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 63.5) {
                    if (diastolic_time <= 53.75) {
                        votes[33] = 2;
                    } else {
                        if (num_peaks <= 59.5) {
                            if (rr_median <= 68.5) {
                                votes[33] = 2;
                            } else {
                                if (rr_median <= 73.5) {
                                    votes[33] = 2;
                                } else {
                                    votes[33] = 2;
                                }
                            }
                        } else {
                            votes[33] = 2;
                        }
                    }
                } else {
                    if (num_valleys <= 81.5) {
                        if (num_peaks <= 75.0) {
                            votes[33] = 2;
                        } else {
                            votes[33] = 3;
                        }
                    } else {
                        if (num_peaks <= 82.5) {
                            votes[33] = 5;
                        } else {
                            votes[33] = 3;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 73.5) {
                if (diastolic_time <= 37.75) {
                    if (rr_median <= 61.25) {
                        if (num_peaks <= 60.5) {
                            if (num_peaks <= 33.5) {
                                votes[33] = 4;
                            } else {
                                if (num_peaks <= 57.5) {
                                    votes[33] = 4;
                                } else {
                                    votes[33] = 4;
                                }
                            }
                        } else {
                            votes[33] = 4;
                        }
                    } else {
                        votes[33] = 3;
                    }
                } else {
                    if (diastolic_time <= 76.5) {
                        if (num_peaks <= 41.5) {
                            if (num_peaks <= 24.5) {
                                votes[33] = 4;
                            } else {
                                votes[33] = 5;
                            }
                        } else {
                            if (diastolic_time <= 55.25) {
                                if (rr_median <= 59.5) {
                                    if (num_peaks <= 65.5) {
                                        if (num_peaks <= 55.0) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 3;
                                        }
                                    } else {
                                        if (diastolic_time <= 46.0) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 85.0) {
                                        if (rr_std <= 13.847325801849365) {
                                            votes[33] = 0;
                                        } else {
                                            votes[33] = 3;
                                        }
                                    } else {
                                        votes[33] = 1;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 66.5) {
                                    if (rr_std <= 0.6789374947547913) {
                                        if (num_valleys <= 90.0) {
                                            votes[33] = 2;
                                        } else {
                                            votes[33] = 2;
                                        }
                                    } else {
                                        if (rr_median <= 69.75) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 0;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 70.75) {
                                        if (num_peaks <= 56.5) {
                                            votes[33] = 0;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 6.701751410961151) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 105.25) {
                            if (rr_std <= 15.316328048706055) {
                                if (diastolic_time <= 89.5) {
                                    votes[33] = 5;
                                } else {
                                    if (rr_median <= 90.75) {
                                        votes[33] = 5;
                                    } else {
                                        votes[33] = 5;
                                    }
                                }
                            } else {
                                if (rr_median <= 98.0) {
                                    if (diastolic_time <= 84.0) {
                                        votes[33] = 4;
                                    } else {
                                        votes[33] = 4;
                                    }
                                } else {
                                    votes[33] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 242.0) {
                                votes[33] = 1;
                            } else {
                                votes[33] = 4;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 75.25) {
                        if (rr_median <= 20.5) {
                            if (num_valleys <= 89.5) {
                                votes[33] = 3;
                            } else {
                                if (diastolic_time <= 89.75) {
                                    votes[33] = 0;
                                } else {
                                    votes[33] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 76.5) {
                                if (rr_median <= 56.25) {
                                    votes[33] = 3;
                                } else {
                                    votes[33] = 0;
                                }
                            } else {
                                if (rr_median <= 60.25) {
                                    votes[33] = 3;
                                } else {
                                    if (diastolic_time <= 67.0) {
                                        votes[33] = 0;
                                    } else {
                                        votes[33] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 81.5) {
                            if (diastolic_time <= 81.25) {
                                votes[33] = 5;
                            } else {
                                votes[33] = 0;
                            }
                        } else {
                            if (num_peaks <= 84.5) {
                                votes[33] = 3;
                            } else {
                                votes[33] = 2;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 51.0) {
                        if (rr_std <= 2.096524715423584) {
                            votes[33] = 1;
                        } else {
                            if (rr_median <= 62.0) {
                                votes[33] = 3;
                            } else {
                                votes[33] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 9.51451826095581) {
                            if (rr_median <= 59.75) {
                                if (diastolic_time <= 69.0) {
                                    votes[33] = 0;
                                } else {
                                    votes[33] = 0;
                                }
                            } else {
                                if (rr_median <= 85.75) {
                                    votes[33] = 5;
                                } else {
                                    votes[33] = 3;
                                }
                            }
                        } else {
                            if (num_valleys <= 90.5) {
                                if (num_peaks <= 88.5) {
                                    votes[33] = 0;
                                } else {
                                    votes[33] = 0;
                                }
                            } else {
                                if (diastolic_time <= 62.0) {
                                    votes[33] = 3;
                                } else {
                                    votes[33] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 76.5) {
            if (rr_median <= 129.5) {
                if (rr_median <= 119.75) {
                    if (num_valleys <= 91.5) {
                        if (diastolic_time <= 70.0) {
                            votes[33] = 1;
                        } else {
                            votes[33] = 1;
                        }
                    } else {
                        votes[33] = 4;
                    }
                } else {
                    if (rr_std <= 10.054786205291748) {
                        votes[33] = 2;
                    } else {
                        votes[33] = 1;
                    }
                }
            } else {
                if (num_valleys <= 93.5) {
                    if (rr_std <= 2.1762022972106934) {
                        votes[33] = 1;
                    } else {
                        if (rr_median <= 151.75) {
                            votes[33] = 1;
                        } else {
                            if (rr_std <= 55.91085433959961) {
                                votes[33] = 1;
                            } else {
                                votes[33] = 1;
                            }
                        }
                    }
                } else {
                    votes[33] = 4;
                }
            }
        } else {
            if (rr_std <= 28.76714038848877) {
                if (num_valleys <= 92.5) {
                    if (num_peaks <= 88.5) {
                        if (rr_median <= 122.0) {
                            votes[33] = 5;
                        } else {
                            if (rr_std <= 4.345893144607544) {
                                votes[33] = 5;
                            } else {
                                votes[33] = 1;
                            }
                        }
                    } else {
                        votes[33] = 1;
                    }
                } else {
                    votes[33] = 2;
                }
            } else {
                if (num_peaks <= 82.5) {
                    votes[33] = 1;
                } else {
                    if (num_valleys <= 90.5) {
                        if (diastolic_time <= 84.5) {
                            votes[33] = 1;
                        } else {
                            votes[33] = 0;
                        }
                    } else {
                        if (num_peaks <= 87.5) {
                            votes[33] = 0;
                        } else {
                            votes[33] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 34
    if (num_peaks <= 73.5) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.7192845046520233) {
                if (rr_median <= 66.0) {
                    if (diastolic_time <= 62.75) {
                        votes[34] = 3;
                    } else {
                        votes[34] = 5;
                    }
                } else {
                    if (rr_std <= 0.33040061593055725) {
                        votes[34] = 2;
                    } else {
                        if (rr_median <= 71.5) {
                            if (rr_std <= 0.5532135367393494) {
                                if (num_peaks <= 47.0) {
                                    votes[34] = 2;
                                } else {
                                    votes[34] = 3;
                                }
                            } else {
                                votes[34] = 2;
                            }
                        } else {
                            votes[34] = 2;
                        }
                    }
                }
            } else {
                if (rr_median <= 84.0) {
                    votes[34] = 5;
                } else {
                    votes[34] = 1;
                }
            }
        } else {
            if (rr_median <= 102.75) {
                if (diastolic_time <= 308.0) {
                    if (diastolic_time <= 110.5) {
                        if (diastolic_time <= 42.5) {
                            if (rr_median <= 61.25) {
                                if (diastolic_time <= 10.0) {
                                    votes[34] = 4;
                                } else {
                                    if (num_peaks <= 58.5) {
                                        if (num_peaks <= 37.5) {
                                            votes[34] = 4;
                                        } else {
                                            votes[34] = 4;
                                        }
                                    } else {
                                        votes[34] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 11.51777195930481) {
                                    votes[34] = 3;
                                } else {
                                    votes[34] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 15.31638240814209) {
                                if (diastolic_time <= 75.25) {
                                    if (rr_std <= 9.511858463287354) {
                                        if (diastolic_time <= 55.25) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 2;
                                        }
                                    } else {
                                        if (num_peaks <= 58.5) {
                                            votes[34] = 0;
                                        } else {
                                            votes[34] = 0;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 89.5) {
                                        if (diastolic_time <= 82.5) {
                                            votes[34] = 5;
                                        } else {
                                            votes[34] = 1;
                                        }
                                    } else {
                                        votes[34] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 70.5) {
                                    if (num_peaks <= 65.5) {
                                        votes[34] = 5;
                                    } else {
                                        votes[34] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 66.5) {
                                        if (rr_median <= 95.25) {
                                            votes[34] = 4;
                                        } else {
                                            votes[34] = 4;
                                        }
                                    } else {
                                        if (num_peaks <= 71.5) {
                                            votes[34] = 4;
                                        } else {
                                            votes[34] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        votes[34] = 1;
                    }
                } else {
                    votes[34] = 4;
                }
            } else {
                if (rr_median <= 131.0) {
                    if (rr_median <= 117.75) {
                        if (rr_std <= 26.22604751586914) {
                            votes[34] = 1;
                        } else {
                            if (diastolic_time <= 96.25) {
                                votes[34] = 4;
                            } else {
                                votes[34] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 81.75) {
                            votes[34] = 4;
                        } else {
                            if (rr_median <= 124.75) {
                                votes[34] = 2;
                            } else {
                                votes[34] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 72.50964736938477) {
                        if (rr_std <= 1.083776980638504) {
                            votes[34] = 1;
                        } else {
                            if (num_valleys <= 92.5) {
                                if (num_peaks <= 65.0) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 1;
                                }
                            } else {
                                votes[34] = 1;
                            }
                        }
                    } else {
                        votes[34] = 3;
                    }
                }
            }
        }
    } else {
        if (rr_median <= 105.5) {
            if (diastolic_time <= 54.5) {
                if (rr_std <= 0.559664249420166) {
                    if (num_valleys <= 82.5) {
                        votes[34] = 1;
                    } else {
                        if (diastolic_time <= 37.25) {
                            votes[34] = 3;
                        } else {
                            if (diastolic_time <= 44.25) {
                                votes[34] = 0;
                            } else {
                                votes[34] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 66.0) {
                        if (rr_std <= 14.986078262329102) {
                            if (rr_median <= 58.0) {
                                votes[34] = 3;
                            } else {
                                votes[34] = 3;
                            }
                        } else {
                            votes[34] = 3;
                        }
                    } else {
                        if (rr_std <= 11.272931098937988) {
                            if (num_peaks <= 85.5) {
                                votes[34] = 5;
                            } else {
                                if (rr_std <= 1.7144299149513245) {
                                    votes[34] = 3;
                                } else {
                                    votes[34] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 15.521735668182373) {
                                votes[34] = 0;
                            } else {
                                if (diastolic_time <= 45.0) {
                                    votes[34] = 5;
                                } else {
                                    votes[34] = 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (num_valleys <= 88.5) {
                        if (rr_median <= 57.75) {
                            votes[34] = 3;
                        } else {
                            if (num_valleys <= 81.5) {
                                votes[34] = 3;
                            } else {
                                if (rr_std <= 9.15903353691101) {
                                    if (num_peaks <= 80.0) {
                                        votes[34] = 5;
                                    } else {
                                        votes[34] = 5;
                                    }
                                } else {
                                    votes[34] = 4;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 91.5) {
                            if (rr_std <= 4.808926582336426) {
                                votes[34] = 5;
                            } else {
                                if (rr_std <= 21.830957412719727) {
                                    if (rr_median <= 75.25) {
                                        votes[34] = 0;
                                    } else {
                                        votes[34] = 0;
                                    }
                                } else {
                                    votes[34] = 4;
                                }
                            }
                        } else {
                            votes[34] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 8.847529888153076) {
                        if (rr_median <= 74.0) {
                            if (num_peaks <= 88.5) {
                                votes[34] = 0;
                            } else {
                                if (diastolic_time <= 63.0) {
                                    votes[34] = 0;
                                } else {
                                    votes[34] = 0;
                                }
                            }
                        } else {
                            votes[34] = 5;
                        }
                    } else {
                        if (num_peaks <= 89.5) {
                            if (diastolic_time <= 67.5) {
                                votes[34] = 0;
                            } else {
                                if (rr_median <= 90.0) {
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
            }
        } else {
            if (rr_std <= 33.49587059020996) {
                if (rr_median <= 123.5) {
                    if (num_peaks <= 87.5) {
                        votes[34] = 5;
                    } else {
                        votes[34] = 1;
                    }
                } else {
                    if (rr_std <= 0.4517539441585541) {
                        votes[34] = 1;
                    } else {
                        if (num_valleys <= 88.5) {
                            votes[34] = 1;
                        } else {
                            if (rr_std <= 28.166937828063965) {
                                votes[34] = 1;
                            } else {
                                votes[34] = 1;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 82.5) {
                    votes[34] = 1;
                } else {
                    if (diastolic_time <= 84.5) {
                        if (num_valleys <= 91.0) {
                            votes[34] = 1;
                        } else {
                            votes[34] = 0;
                        }
                    } else {
                        votes[34] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 35
    if (num_peaks <= 76.5) {
        if (num_valleys <= 81.5) {
            if (rr_std <= 0.1332346796989441) {
                votes[35] = 5;
            } else {
                if (rr_median <= 73.5) {
                    if (rr_std <= 0.4740213602781296) {
                        if (diastolic_time <= 72.0) {
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
            if (rr_median <= 126.5) {
                if (diastolic_time <= 76.75) {
                    if (diastolic_time <= 55.25) {
                        if (rr_median <= 51.75) {
                            if (diastolic_time <= 33.5) {
                                if (num_peaks <= 56.5) {
                                    if (diastolic_time <= 10.0) {
                                        votes[35] = 4;
                                    } else {
                                        votes[35] = 4;
                                    }
                                } else {
                                    votes[35] = 4;
                                }
                            } else {
                                if (diastolic_time <= 35.5) {
                                    votes[35] = 5;
                                } else {
                                    if (num_peaks <= 43.5) {
                                        if (diastolic_time <= 51.0) {
                                            votes[35] = 4;
                                        } else {
                                            votes[35] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 37.75) {
                                            votes[35] = 4;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 65.75) {
                                if (num_valleys <= 91.5) {
                                    if (num_valleys <= 89.0) {
                                        votes[35] = 3;
                                    } else {
                                        votes[35] = 3;
                                    }
                                } else {
                                    votes[35] = 3;
                                }
                            } else {
                                if (num_peaks <= 59.5) {
                                    if (rr_median <= 75.5) {
                                        votes[35] = 0;
                                    } else {
                                        if (diastolic_time <= 44.25) {
                                            votes[35] = 1;
                                        } else {
                                            votes[35] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 40.5) {
                                        votes[35] = 5;
                                    } else {
                                        if (rr_std <= 14.075756549835205) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 5.880857944488525) {
                            if (diastolic_time <= 63.25) {
                                if (num_peaks <= 44.5) {
                                    votes[35] = 2;
                                } else {
                                    if (rr_std <= 0.2142392098903656) {
                                        votes[35] = 2;
                                    } else {
                                        votes[35] = 2;
                                    }
                                }
                            } else {
                                if (rr_median <= 68.5) {
                                    if (num_peaks <= 59.0) {
                                        votes[35] = 0;
                                    } else {
                                        votes[35] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 56.5) {
                                        if (num_peaks <= 52.0) {
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
                            if (num_peaks <= 65.5) {
                                if (rr_median <= 76.25) {
                                    if (diastolic_time <= 61.5) {
                                        votes[35] = 3;
                                    } else {
                                        votes[35] = 5;
                                    }
                                } else {
                                    votes[35] = 1;
                                }
                            } else {
                                votes[35] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 118.5) {
                        if (rr_std <= 15.10298204421997) {
                            if (diastolic_time <= 343.0) {
                                if (diastolic_time <= 112.0) {
                                    if (diastolic_time <= 90.5) {
                                        if (rr_median <= 85.5) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    } else {
                                        votes[35] = 5;
                                    }
                                } else {
                                    votes[35] = 1;
                                }
                            } else {
                                votes[35] = 4;
                            }
                        } else {
                            if (diastolic_time <= 108.75) {
                                if (rr_median <= 104.25) {
                                    if (num_peaks <= 66.5) {
                                        if (rr_median <= 96.5) {
                                            votes[35] = 4;
                                        } else {
                                            votes[35] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 84.25) {
                                            votes[35] = 4;
                                        } else {
                                            votes[35] = 4;
                                        }
                                    }
                                } else {
                                    votes[35] = 4;
                                }
                            } else {
                                if (rr_std <= 28.622868537902832) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 1;
                                }
                            }
                        }
                    } else {
                        votes[35] = 2;
                    }
                }
            } else {
                if (num_valleys <= 92.5) {
                    if (rr_std <= 48.548095703125) {
                        if (rr_std <= 0.911719799041748) {
                            votes[35] = 1;
                        } else {
                            if (num_peaks <= 51.5) {
                                votes[35] = 1;
                            } else {
                                if (rr_std <= 2.4459935426712036) {
                                    votes[35] = 1;
                                } else {
                                    votes[35] = 1;
                                }
                            }
                        }
                    } else {
                        votes[35] = 3;
                    }
                } else {
                    votes[35] = 4;
                }
            }
        }
    } else {
        if (num_peaks <= 84.5) {
            if (rr_median <= 71.5) {
                if (rr_std <= 0.5758121162652969) {
                    if (num_valleys <= 86.5) {
                        votes[35] = 3;
                    } else {
                        if (num_peaks <= 80.5) {
                            votes[35] = 0;
                        } else {
                            votes[35] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 80.5) {
                        votes[35] = 3;
                    } else {
                        votes[35] = 3;
                    }
                }
            } else {
                if (diastolic_time <= 114.25) {
                    if (rr_median <= 129.0) {
                        if (num_valleys <= 88.5) {
                            if (diastolic_time <= 67.5) {
                                if (rr_median <= 82.5) {
                                    votes[35] = 5;
                                } else {
                                    votes[35] = 3;
                                }
                            } else {
                                if (rr_std <= 17.05195665359497) {
                                    votes[35] = 5;
                                } else {
                                    votes[35] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 21.56235408782959) {
                                if (rr_median <= 80.5) {
                                    votes[35] = 0;
                                } else {
                                    if (diastolic_time <= 70.25) {
                                        votes[35] = 5;
                                    } else {
                                        votes[35] = 5;
                                    }
                                }
                            } else {
                                votes[35] = 4;
                            }
                        }
                    } else {
                        if (num_valleys <= 90.5) {
                            votes[35] = 1;
                        } else {
                            votes[35] = 0;
                        }
                    }
                } else {
                    votes[35] = 2;
                }
            }
        } else {
            if (diastolic_time <= 54.75) {
                if (rr_median <= 90.5) {
                    if (diastolic_time <= 40.75) {
                        if (rr_median <= 28.0) {
                            votes[35] = 2;
                        } else {
                            votes[35] = 5;
                        }
                    } else {
                        if (rr_std <= 0.3200477361679077) {
                            votes[35] = 3;
                        } else {
                            if (rr_median <= 58.5) {
                                votes[35] = 3;
                            } else {
                                if (num_valleys <= 90.5) {
                                    votes[35] = 3;
                                } else {
                                    votes[35] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 12.352364540100098) {
                        votes[35] = 1;
                    } else {
                        votes[35] = 0;
                    }
                }
            } else {
                if (rr_std <= 10.703279495239258) {
                    if (rr_median <= 100.0) {
                        if (rr_median <= 67.5) {
                            if (rr_median <= 26.5) {
                                if (num_peaks <= 90.5) {
                                    votes[35] = 0;
                                } else {
                                    votes[35] = 0;
                                }
                            } else {
                                votes[35] = 0;
                            }
                        } else {
                            if (rr_std <= 3.999853014945984) {
                                votes[35] = 5;
                            } else {
                                votes[35] = 0;
                            }
                        }
                    } else {
                        votes[35] = 1;
                    }
                } else {
                    if (num_peaks <= 89.5) {
                        if (rr_median <= 92.0) {
                            if (rr_median <= 79.75) {
                                if (rr_std <= 17.35354518890381) {
                                    votes[35] = 0;
                                } else {
                                    votes[35] = 0;
                                }
                            } else {
                                votes[35] = 3;
                            }
                        } else {
                            if (rr_median <= 105.0) {
                                votes[35] = 0;
                            } else {
                                votes[35] = 0;
                            }
                        }
                    } else {
                        votes[35] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 36
    if (num_peaks <= 73.5) {
        if (num_valleys <= 85.5) {
            if (rr_median <= 62.0) {
                if (num_valleys <= 82.5) {
                    if (diastolic_time <= 67.75) {
                        votes[36] = 5;
                    } else {
                        votes[36] = 5;
                    }
                } else {
                    if (num_peaks <= 42.0) {
                        votes[36] = 4;
                    } else {
                        if (diastolic_time <= 53.25) {
                            votes[36] = 3;
                        } else {
                            votes[36] = 2;
                        }
                    }
                }
            } else {
                if (rr_std <= 0.7192845046520233) {
                    if (rr_median <= 80.0) {
                        if (num_peaks <= 59.5) {
                            votes[36] = 2;
                        } else {
                            votes[36] = 2;
                        }
                    } else {
                        votes[36] = 2;
                    }
                } else {
                    if (rr_median <= 110.25) {
                        if (rr_std <= 1.1683152914047241) {
                            votes[36] = 5;
                        } else {
                            votes[36] = 5;
                        }
                    } else {
                        votes[36] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 106.75) {
                if (diastolic_time <= 76.5) {
                    if (diastolic_time <= 38.75) {
                        if (rr_median <= 48.5) {
                            if (num_peaks <= 60.0) {
                                if (num_peaks <= 32.0) {
                                    votes[36] = 4;
                                } else {
                                    votes[36] = 4;
                                }
                            } else {
                                votes[36] = 5;
                            }
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        if (num_peaks <= 49.5) {
                            if (num_peaks <= 41.5) {
                                votes[36] = 4;
                            } else {
                                if (num_valleys <= 90.5) {
                                    if (num_peaks <= 45.5) {
                                        votes[36] = 3;
                                    } else {
                                        votes[36] = 3;
                                    }
                                } else {
                                    votes[36] = 2;
                                }
                            }
                        } else {
                            if (num_valleys <= 91.5) {
                                if (rr_median <= 84.5) {
                                    if (diastolic_time <= 55.25) {
                                        if (rr_median <= 64.25) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 66.5) {
                                            votes[36] = 2;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    }
                                } else {
                                    votes[36] = 1;
                                }
                            } else {
                                if (num_peaks <= 57.5) {
                                    votes[36] = 0;
                                } else {
                                    if (num_peaks <= 66.0) {
                                        votes[36] = 3;
                                    } else {
                                        votes[36] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 15.879710674285889) {
                        if (diastolic_time <= 236.5) {
                            if (diastolic_time <= 104.75) {
                                if (rr_median <= 73.25) {
                                    votes[36] = 5;
                                } else {
                                    if (rr_median <= 93.5) {
                                        votes[36] = 5;
                                    } else {
                                        votes[36] = 5;
                                    }
                                }
                            } else {
                                votes[36] = 1;
                            }
                        } else {
                            votes[36] = 4;
                        }
                    } else {
                        if (diastolic_time <= 100.5) {
                            if (num_peaks <= 66.5) {
                                if (diastolic_time <= 87.0) {
                                    votes[36] = 4;
                                } else {
                                    votes[36] = 4;
                                }
                            } else {
                                votes[36] = 4;
                            }
                        } else {
                            if (rr_std <= 28.913662910461426) {
                                votes[36] = 4;
                            } else {
                                votes[36] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 126.5) {
                    if (rr_median <= 119.75) {
                        if (rr_std <= 16.23610782623291) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 4;
                        }
                    } else {
                        if (diastolic_time <= 95.0) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 42.673622131347656) {
                        if (rr_std <= 2.2824419736862183) {
                            if (num_peaks <= 53.0) {
                                votes[36] = 1;
                            } else {
                                votes[36] = 1;
                            }
                        } else {
                            if (num_valleys <= 92.5) {
                                votes[36] = 1;
                            } else {
                                votes[36] = 1;
                            }
                        }
                    } else {
                        if (num_valleys <= 90.5) {
                            votes[36] = 1;
                        } else {
                            votes[36] = 4;
                        }
                    }
                }
            }
        }
    } else {
        if (rr_median <= 104.5) {
            if (num_valleys <= 87.5) {
                if (num_peaks <= 87.5) {
                    if (rr_median <= 64.5) {
                        if (rr_median <= 46.0) {
                            votes[36] = 0;
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        if (rr_std <= 14.934030532836914) {
                            if (rr_std <= 0.5756026208400726) {
                                votes[36] = 2;
                            } else {
                                if (num_peaks <= 82.5) {
                                    if (diastolic_time <= 67.5) {
                                        votes[36] = 5;
                                    } else {
                                        votes[36] = 5;
                                    }
                                } else {
                                    if (rr_median <= 83.0) {
                                        votes[36] = 5;
                                    } else {
                                        votes[36] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[36] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 1.7144299149513245) {
                        if (diastolic_time <= 54.75) {
                            votes[36] = 3;
                        } else {
                            votes[36] = 2;
                        }
                    } else {
                        votes[36] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 52.75) {
                    if (num_peaks <= 77.5) {
                        if (num_valleys <= 89.5) {
                            votes[36] = 3;
                        } else {
                            if (rr_median <= 56.25) {
                                votes[36] = 0;
                            } else {
                                votes[36] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 60.5) {
                            if (rr_median <= 21.0) {
                                if (num_peaks <= 86.5) {
                                    votes[36] = 3;
                                } else {
                                    votes[36] = 1;
                                }
                            } else {
                                if (diastolic_time <= 48.75) {
                                    votes[36] = 3;
                                } else {
                                    votes[36] = 3;
                                }
                            }
                        } else {
                            votes[36] = 0;
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (rr_median <= 71.5) {
                            if (rr_std <= 0.600788414478302) {
                                if (num_peaks <= 81.5) {
                                    votes[36] = 0;
                                } else {
                                    votes[36] = 3;
                                }
                            } else {
                                votes[36] = 3;
                            }
                        } else {
                            if (rr_std <= 7.199869394302368) {
                                votes[36] = 3;
                            } else {
                                if (rr_std <= 14.474790573120117) {
                                    votes[36] = 0;
                                } else {
                                    if (num_peaks <= 78.0) {
                                        votes[36] = 0;
                                    } else {
                                        votes[36] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 9.51451826095581) {
                            if (diastolic_time <= 72.75) {
                                if (num_peaks <= 90.5) {
                                    if (rr_std <= 4.1040358543396) {
                                        votes[36] = 0;
                                    } else {
                                        votes[36] = 0;
                                    }
                                } else {
                                    votes[36] = 3;
                                }
                            } else {
                                if (rr_median <= 37.5) {
                                    votes[36] = 5;
                                } else {
                                    votes[36] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 56.0) {
                                votes[36] = 0;
                            } else {
                                if (diastolic_time <= 79.5) {
                                    if (diastolic_time <= 71.0) {
                                        if (rr_median <= 68.5) {
                                            votes[36] = 0;
                                        } else {
                                            votes[36] = 0;
                                        }
                                    } else {
                                        votes[36] = 0;
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
            if (rr_median <= 128.5) {
                if (num_peaks <= 86.5) {
                    if (rr_median <= 123.5) {
                        if (num_peaks <= 82.5) {
                            votes[36] = 5;
                        } else {
                            votes[36] = 5;
                        }
                    } else {
                        votes[36] = 2;
                    }
                } else {
                    if (num_peaks <= 90.5) {
                        votes[36] = 1;
                    } else {
                        votes[36] = 0;
                    }
                }
            } else {
                if (rr_std <= 39.662532806396484) {
                    if (rr_std <= 0.5335937142372131) {
                        votes[36] = 0;
                    } else {
                        votes[36] = 1;
                    }
                } else {
                    if (num_valleys <= 91.5) {
                        votes[36] = 0;
                    } else {
                        votes[36] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 37
    if (rr_median <= 104.75) {
        if (num_valleys <= 84.5) {
            if (num_peaks <= 69.5) {
                if (rr_median <= 64.0) {
                    if (diastolic_time <= 67.75) {
                        if (diastolic_time <= 43.5) {
                            votes[37] = 4;
                        } else {
                            votes[37] = 3;
                        }
                    } else {
                        votes[37] = 5;
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (rr_median <= 71.5) {
                            if (num_valleys <= 80.5) {
                                if (num_valleys <= 76.5) {
                                    votes[37] = 2;
                                } else {
                                    votes[37] = 2;
                                }
                            } else {
                                votes[37] = 2;
                            }
                        } else {
                            if (rr_std <= 0.3910631388425827) {
                                votes[37] = 2;
                            } else {
                                votes[37] = 2;
                            }
                        }
                    } else {
                        votes[37] = 2;
                    }
                }
            } else {
                if (rr_median <= 68.5) {
                    if (rr_std <= 0.6028513610363007) {
                        votes[37] = 2;
                    } else {
                        votes[37] = 1;
                    }
                } else {
                    if (rr_std <= 1.1391854882240295) {
                        if (rr_median <= 80.5) {
                            votes[37] = 3;
                        } else {
                            votes[37] = 1;
                        }
                    } else {
                        votes[37] = 5;
                    }
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 78.5) {
                    if (diastolic_time <= 38.75) {
                        if (rr_median <= 42.5) {
                            if (num_peaks <= 58.5) {
                                if (num_peaks <= 39.5) {
                                    votes[37] = 4;
                                } else {
                                    votes[37] = 4;
                                }
                            } else {
                                votes[37] = 4;
                            }
                        } else {
                            votes[37] = 3;
                        }
                    } else {
                        if (rr_std <= 8.994228839874268) {
                            if (diastolic_time <= 55.25) {
                                if (num_peaks <= 41.5) {
                                    if (num_peaks <= 29.5) {
                                        votes[37] = 4;
                                    } else {
                                        votes[37] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 44.25) {
                                        if (num_valleys <= 87.5) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 65.5) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 56.0) {
                                    if (diastolic_time <= 63.5) {
                                        if (diastolic_time <= 61.5) {
                                            votes[37] = 2;
                                        } else {
                                            votes[37] = 2;
                                        }
                                    } else {
                                        if (num_valleys <= 89.5) {
                                            votes[37] = 2;
                                        } else {
                                            votes[37] = 0;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 88.5) {
                                        votes[37] = 5;
                                    } else {
                                        if (diastolic_time <= 66.5) {
                                            votes[37] = 2;
                                        } else {
                                            votes[37] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 87.5) {
                                votes[37] = 1;
                            } else {
                                if (rr_std <= 22.454771041870117) {
                                    if (diastolic_time <= 65.5) {
                                        if (rr_median <= 64.25) {
                                            votes[37] = 0;
                                        } else {
                                            votes[37] = 0;
                                        }
                                    } else {
                                        votes[37] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 59.5) {
                                        votes[37] = 3;
                                    } else {
                                        votes[37] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 109.25) {
                        if (rr_std <= 10.67459487915039) {
                            if (diastolic_time <= 89.5) {
                                votes[37] = 1;
                            } else {
                                votes[37] = 5;
                            }
                        } else {
                            if (rr_median <= 98.0) {
                                if (rr_std <= 17.977700233459473) {
                                    votes[37] = 4;
                                } else {
                                    if (num_peaks <= 66.0) {
                                        votes[37] = 4;
                                    } else {
                                        votes[37] = 4;
                                    }
                                }
                            } else {
                                votes[37] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 242.0) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 4;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 53.75) {
                    if (rr_median <= 77.75) {
                        if (rr_std <= 13.379060745239258) {
                            if (diastolic_time <= 37.25) {
                                if (diastolic_time <= 32.5) {
                                    votes[37] = 3;
                                } else {
                                    votes[37] = 2;
                                }
                            } else {
                                if (rr_median <= 20.5) {
                                    if (diastolic_time <= 45.25) {
                                        votes[37] = 0;
                                    } else {
                                        votes[37] = 0;
                                    }
                                } else {
                                    if (rr_std <= 8.660752296447754) {
                                        votes[37] = 3;
                                    } else {
                                        votes[37] = 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 20.973054885864258) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 86.5) {
                            votes[37] = 5;
                        } else {
                            votes[37] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 8.81070613861084) {
                        if (rr_median <= 74.0) {
                            if (num_peaks <= 83.5) {
                                if (diastolic_time <= 86.25) {
                                    votes[37] = 3;
                                } else {
                                    votes[37] = 0;
                                }
                            } else {
                                if (num_peaks <= 89.5) {
                                    if (diastolic_time <= 63.0) {
                                        votes[37] = 0;
                                    } else {
                                        votes[37] = 0;
                                    }
                                } else {
                                    votes[37] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 88.25) {
                                votes[37] = 5;
                            } else {
                                votes[37] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 54.5) {
                            votes[37] = 3;
                        } else {
                            if (rr_std <= 22.88824462890625) {
                                if (rr_std <= 19.100642204284668) {
                                    if (rr_std <= 13.328832149505615) {
                                        votes[37] = 0;
                                    } else {
                                        if (num_peaks <= 87.5) {
                                            votes[37] = 0;
                                        } else {
                                            votes[37] = 0;
                                        }
                                    }
                                } else {
                                    votes[37] = 0;
                                }
                            } else {
                                if (diastolic_time <= 61.75) {
                                    votes[37] = 3;
                                } else {
                                    if (rr_std <= 28.75518798828125) {
                                        votes[37] = 4;
                                    } else {
                                        if (rr_median <= 96.5) {
                                            votes[37] = 0;
                                        } else {
                                            votes[37] = 0;
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
        if (rr_median <= 128.75) {
            if (rr_std <= 33.04390525817871) {
                if (rr_median <= 119.0) {
                    if (diastolic_time <= 47.5) {
                        votes[37] = 1;
                    } else {
                        if (rr_std <= 13.072870254516602) {
                            votes[37] = 1;
                        } else {
                            if (num_peaks <= 83.0) {
                                votes[37] = 5;
                            } else {
                                votes[37] = 5;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 56.5) {
                        votes[37] = 2;
                    } else {
                        votes[37] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 102.0) {
                    if (num_peaks <= 56.5) {
                        if (rr_median <= 113.75) {
                            votes[37] = 4;
                        } else {
                            votes[37] = 4;
                        }
                    } else {
                        if (diastolic_time <= 81.5) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 0;
                        }
                    }
                } else {
                    votes[37] = 1;
                }
            }
        } else {
            if (rr_median <= 349.5) {
                if (rr_std <= 63.633018493652344) {
                    if (num_valleys <= 94.5) {
                        if (num_peaks <= 50.0) {
                            votes[37] = 1;
                        } else {
                            if (num_peaks <= 85.5) {
                                if (rr_std <= 2.2185760736465454) {
                                    votes[37] = 1;
                                } else {
                                    votes[37] = 1;
                                }
                            } else {
                                votes[37] = 1;
                            }
                        }
                    } else {
                        votes[37] = 4;
                    }
                } else {
                    votes[37] = 0;
                }
            } else {
                votes[37] = 0;
            }
        }
    }
// Decision rules for tree 38
    if (num_peaks <= 75.5) {
        if (rr_median <= 134.25) {
            if (num_valleys <= 84.5) {
                if (rr_median <= 64.0) {
                    if (num_peaks <= 57.5) {
                        if (num_valleys <= 82.5) {
                            votes[38] = 5;
                        } else {
                            votes[38] = 4;
                        }
                    } else {
                        votes[38] = 1;
                    }
                } else {
                    if (rr_std <= 0.7299954891204834) {
                        if (rr_median <= 77.0) {
                            if (rr_std <= 0.4740213602781296) {
                                if (rr_std <= 0.43653950095176697) {
                                    votes[38] = 2;
                                } else {
                                    votes[38] = 2;
                                }
                            } else {
                                votes[38] = 2;
                            }
                        } else {
                            votes[38] = 5;
                        }
                    } else {
                        if (num_peaks <= 65.5) {
                            votes[38] = 5;
                        } else {
                            votes[38] = 3;
                        }
                    }
                }
            } else {
                if (rr_median <= 119.75) {
                    if (diastolic_time <= 110.5) {
                        if (rr_std <= 23.117923736572266) {
                            if (rr_median <= 86.5) {
                                if (diastolic_time <= 41.25) {
                                    if (rr_median <= 47.0) {
                                        if (num_valleys <= 86.5) {
                                            votes[38] = 5;
                                        } else {
                                            votes[38] = 4;
                                        }
                                    } else {
                                        if (num_valleys <= 87.5) {
                                            votes[38] = 5;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 9.440037727355957) {
                                        if (rr_std <= 2.3016529083251953) {
                                            votes[38] = 2;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    } else {
                                        if (diastolic_time <= 70.0) {
                                            votes[38] = 0;
                                        } else {
                                            votes[38] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 49.5) {
                                    votes[38] = 1;
                                } else {
                                    if (rr_std <= 1.1710673570632935) {
                                        votes[38] = 1;
                                    } else {
                                        if (rr_std <= 5.684980630874634) {
                                            votes[38] = 5;
                                        } else {
                                            votes[38] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 72.25) {
                                if (num_peaks <= 51.0) {
                                    votes[38] = 4;
                                } else {
                                    if (num_peaks <= 66.0) {
                                        votes[38] = 3;
                                    } else {
                                        votes[38] = 0;
                                    }
                                }
                            } else {
                                if (rr_median <= 104.25) {
                                    if (rr_std <= 24.55654811859131) {
                                        votes[38] = 4;
                                    } else {
                                        votes[38] = 4;
                                    }
                                } else {
                                    votes[38] = 4;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 261.5) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 26.881442070007324) {
                        if (num_peaks <= 54.0) {
                            votes[38] = 2;
                        } else {
                            votes[38] = 2;
                        }
                    } else {
                        votes[38] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 41.47220420837402) {
                if (rr_median <= 235.0) {
                    if (rr_std <= 31.3701753616333) {
                        votes[38] = 1;
                    } else {
                        votes[38] = 1;
                    }
                } else {
                    votes[38] = 1;
                }
            } else {
                votes[38] = 1;
            }
        }
    } else {
        if (diastolic_time <= 47.25) {
            if (rr_median <= 102.5) {
                if (rr_std <= 0.9406608939170837) {
                    if (num_peaks <= 88.0) {
                        if (diastolic_time <= 36.25) {
                            votes[38] = 3;
                        } else {
                            votes[38] = 0;
                        }
                    } else {
                        votes[38] = 2;
                    }
                } else {
                    if (num_valleys <= 91.5) {
                        if (rr_std <= 17.97277021408081) {
                            votes[38] = 3;
                        } else {
                            votes[38] = 3;
                        }
                    } else {
                        votes[38] = 5;
                    }
                }
            } else {
                votes[38] = 1;
            }
        } else {
            if (num_peaks <= 85.5) {
                if (rr_median <= 77.5) {
                    if (diastolic_time <= 87.5) {
                        if (num_peaks <= 84.5) {
                            if (diastolic_time <= 68.25) {
                                if (num_peaks <= 80.5) {
                                    if (diastolic_time <= 53.5) {
                                        votes[38] = 3;
                                    } else {
                                        votes[38] = 0;
                                    }
                                } else {
                                    votes[38] = 3;
                                }
                            } else {
                                votes[38] = 3;
                            }
                        } else {
                            votes[38] = 0;
                        }
                    } else {
                        votes[38] = 1;
                    }
                } else {
                    if (num_valleys <= 89.5) {
                        if (rr_std <= 17.288872718811035) {
                            if (diastolic_time <= 70.5) {
                                votes[38] = 3;
                            } else {
                                if (num_valleys <= 86.5) {
                                    votes[38] = 2;
                                } else {
                                    votes[38] = 5;
                                }
                            }
                        } else {
                            votes[38] = 5;
                        }
                    } else {
                        if (rr_std <= 7.89020037651062) {
                            if (rr_std <= 2.039719521999359) {
                                votes[38] = 0;
                            } else {
                                votes[38] = 3;
                            }
                        } else {
                            if (rr_std <= 20.007843017578125) {
                                votes[38] = 0;
                            } else {
                                votes[38] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.847529888153076) {
                    if (rr_median <= 88.0) {
                        if (rr_median <= 60.0) {
                            if (diastolic_time <= 56.75) {
                                votes[38] = 0;
                            } else {
                                if (diastolic_time <= 76.75) {
                                    if (diastolic_time <= 65.5) {
                                        votes[38] = 0;
                                    } else {
                                        votes[38] = 0;
                                    }
                                } else {
                                    votes[38] = 0;
                                }
                            }
                        } else {
                            votes[38] = 5;
                        }
                    } else {
                        if (num_valleys <= 88.5) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 2;
                        }
                    }
                } else {
                    if (rr_median <= 57.75) {
                        votes[38] = 3;
                    } else {
                        if (rr_std <= 48.953134536743164) {
                            if (rr_median <= 91.5) {
                                if (rr_std <= 23.557394981384277) {
                                    if (rr_median <= 72.0) {
                                        votes[38] = 0;
                                    } else {
                                        votes[38] = 0;
                                    }
                                } else {
                                    votes[38] = 0;
                                }
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
// Decision rules for tree 39
    if (num_peaks <= 84.5) {
        if (num_valleys <= 84.5) {
            if (rr_std <= 0.6868122220039368) {
                if (rr_std <= 0.1332346796989441) {
                    if (diastolic_time <= 68.25) {
                        votes[39] = 4;
                    } else {
                        votes[39] = 5;
                    }
                } else {
                    if (num_peaks <= 77.5) {
                        if (rr_median <= 71.5) {
                            if (rr_std <= 0.545406848192215) {
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
                if (diastolic_time <= 48.5) {
                    if (rr_std <= 2.7844645380973816) {
                        votes[39] = 5;
                    } else {
                        votes[39] = 3;
                    }
                } else {
                    if (rr_median <= 82.0) {
                        votes[39] = 3;
                    } else {
                        votes[39] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 104.0) {
                if (diastolic_time <= 86.25) {
                    if (num_peaks <= 73.5) {
                        if (diastolic_time <= 38.75) {
                            if (num_peaks <= 62.0) {
                                if (num_valleys <= 87.5) {
                                    votes[39] = 1;
                                } else {
                                    if (num_peaks <= 39.5) {
                                        votes[39] = 4;
                                    } else {
                                        if (num_peaks <= 57.5) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[39] = 5;
                            }
                        } else {
                            if (rr_std <= 8.994228839874268) {
                                if (diastolic_time <= 57.25) {
                                    if (num_peaks <= 26.0) {
                                        votes[39] = 4;
                                    } else {
                                        if (num_peaks <= 40.0) {
                                            votes[39] = 5;
                                        } else {
                                            votes[39] = 3;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 63.0) {
                                        if (num_valleys <= 90.5) {
                                            votes[39] = 2;
                                        } else {
                                            votes[39] = 2;
                                        }
                                    } else {
                                        if (num_valleys <= 90.5) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 59.75) {
                                    if (rr_median <= 66.75) {
                                        if (rr_std <= 16.55005168914795) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 1;
                                        }
                                    } else {
                                        if (rr_median <= 80.5) {
                                            votes[39] = 0;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 17.506596565246582) {
                                        votes[39] = 1;
                                    } else {
                                        if (rr_median <= 81.25) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 78.0) {
                            if (rr_std <= 0.8443530201911926) {
                                if (num_valleys <= 89.0) {
                                    votes[39] = 3;
                                } else {
                                    votes[39] = 0;
                                }
                            } else {
                                if (rr_median <= 60.25) {
                                    if (num_peaks <= 76.5) {
                                        votes[39] = 3;
                                    } else {
                                        votes[39] = 3;
                                    }
                                } else {
                                    if (rr_std <= 9.639904499053955) {
                                        votes[39] = 3;
                                    } else {
                                        votes[39] = 0;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 69.5) {
                                votes[39] = 5;
                            } else {
                                votes[39] = 0;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 241.5) {
                        if (diastolic_time <= 109.5) {
                            if (rr_std <= 9.374541997909546) {
                                if (num_valleys <= 88.5) {
                                    votes[39] = 5;
                                } else {
                                    if (num_valleys <= 91.0) {
                                        votes[39] = 5;
                                    } else {
                                        votes[39] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 19.78883457183838) {
                                    votes[39] = 4;
                                } else {
                                    votes[39] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 74.0) {
                                votes[39] = 1;
                            } else {
                                votes[39] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 53.0) {
                            votes[39] = 4;
                        } else {
                            votes[39] = 4;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 76.75) {
                    if (rr_std <= 84.88681030273438) {
                        if (rr_std <= 0.4635123908519745) {
                            votes[39] = 5;
                        } else {
                            if (diastolic_time <= 50.25) {
                                votes[39] = 1;
                            } else {
                                if (diastolic_time <= 66.75) {
                                    votes[39] = 1;
                                } else {
                                    votes[39] = 1;
                                }
                            }
                        }
                    } else {
                        votes[39] = 3;
                    }
                } else {
                    if (diastolic_time <= 128.0) {
                        if (rr_std <= 13.076703548431396) {
                            if (num_peaks <= 54.0) {
                                votes[39] = 2;
                            } else {
                                if (rr_std <= 3.4094067811965942) {
                                    votes[39] = 2;
                                } else {
                                    votes[39] = 1;
                                }
                            }
                        } else {
                            if (diastolic_time <= 101.0) {
                                if (rr_median <= 120.0) {
                                    votes[39] = 4;
                                } else {
                                    votes[39] = 5;
                                }
                            } else {
                                if (num_peaks <= 58.5) {
                                    votes[39] = 1;
                                } else {
                                    votes[39] = 5;
                                }
                            }
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
    } else {
        if (rr_std <= 10.89098310470581) {
            if (rr_std <= 0.21650634706020355) {
                if (num_peaks <= 91.5) {
                    if (diastolic_time <= 47.5) {
                        votes[39] = 3;
                    } else {
                        if (num_valleys <= 87.5) {
                            votes[39] = 0;
                        } else {
                            if (diastolic_time <= 57.75) {
                                votes[39] = 0;
                            } else {
                                if (num_valleys <= 90.5) {
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
                if (diastolic_time <= 91.75) {
                    if (rr_std <= 1.378233015537262) {
                        votes[39] = 1;
                    } else {
                        if (rr_std <= 7.805350303649902) {
                            votes[39] = 3;
                        } else {
                            votes[39] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 100.0) {
                        votes[39] = 2;
                    } else {
                        votes[39] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 58.0) {
                votes[39] = 3;
            } else {
                if (diastolic_time <= 45.25) {
                    votes[39] = 5;
                } else {
                    if (num_valleys <= 86.5) {
                        votes[39] = 0;
                    } else {
                        if (rr_std <= 13.767618656158447) {
                            votes[39] = 0;
                        } else {
                            if (rr_median <= 84.25) {
                                votes[39] = 0;
                            } else {
                                if (rr_median <= 91.5) {
                                    votes[39] = 0;
                                } else {
                                    if (rr_std <= 75.08720016479492) {
                                        if (num_peaks <= 86.5) {
                                            votes[39] = 0;
                                        } else {
                                            votes[39] = 0;
                                        }
                                    } else {
                                        votes[39] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 40
    if (rr_median <= 129.5) {
        if (num_valleys <= 81.5) {
            if (rr_median <= 75.5) {
                if (rr_median <= 64.0) {
                    if (diastolic_time <= 62.0) {
                        votes[40] = 3;
                    } else {
                        votes[40] = 5;
                    }
                } else {
                    if (num_peaks <= 65.5) {
                        if (num_peaks <= 53.5) {
                            votes[40] = 2;
                        } else {
                            if (rr_median <= 71.5) {
                                votes[40] = 2;
                            } else {
                                votes[40] = 2;
                            }
                        }
                    } else {
                        votes[40] = 2;
                    }
                }
            } else {
                if (rr_std <= 0.616227775812149) {
                    votes[40] = 1;
                } else {
                    votes[40] = 3;
                }
            }
        } else {
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 116.5) {
                    if (rr_std <= 16.26704502105713) {
                        if (diastolic_time <= 57.5) {
                            if (rr_median <= 46.5) {
                                if (diastolic_time <= 37.75) {
                                    if (num_valleys <= 87.5) {
                                        votes[40] = 4;
                                    } else {
                                        if (num_peaks <= 40.0) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 4;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 42.0) {
                                        if (num_valleys <= 88.5) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 42.25) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 65.5) {
                                    if (rr_median <= 55.5) {
                                        votes[40] = 3;
                                    } else {
                                        votes[40] = 3;
                                    }
                                } else {
                                    if (rr_std <= 8.718452453613281) {
                                        if (rr_median <= 84.5) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 1;
                                        }
                                    } else {
                                        if (rr_median <= 72.5) {
                                            votes[40] = 0;
                                        } else {
                                            votes[40] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 74.75) {
                                if (rr_std <= 0.8808849453926086) {
                                    if (rr_median <= 69.75) {
                                        if (diastolic_time <= 63.5) {
                                            votes[40] = 2;
                                        } else {
                                            votes[40] = 0;
                                        }
                                    } else {
                                        if (rr_median <= 71.0) {
                                            votes[40] = 2;
                                        } else {
                                            votes[40] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 10.400051593780518) {
                                        votes[40] = 3;
                                    } else {
                                        votes[40] = 0;
                                    }
                                }
                            } else {
                                if (rr_median <= 116.5) {
                                    if (rr_std <= 13.518269538879395) {
                                        if (diastolic_time <= 82.5) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    } else {
                                        votes[40] = 4;
                                    }
                                } else {
                                    votes[40] = 2;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 59.5) {
                            if (rr_median <= 75.5) {
                                if (rr_median <= 57.25) {
                                    votes[40] = 3;
                                } else {
                                    votes[40] = 3;
                                }
                            } else {
                                votes[40] = 5;
                            }
                        } else {
                            if (diastolic_time <= 100.75) {
                                if (diastolic_time <= 76.75) {
                                    if (num_valleys <= 90.5) {
                                        votes[40] = 4;
                                    } else {
                                        votes[40] = 0;
                                    }
                                } else {
                                    if (rr_std <= 24.55654811859131) {
                                        if (rr_median <= 84.0) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 4;
                                        }
                                    } else {
                                        votes[40] = 4;
                                    }
                                }
                            } else {
                                votes[40] = 2;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 261.5) {
                        if (rr_median <= 116.5) {
                            votes[40] = 1;
                        } else {
                            votes[40] = 2;
                        }
                    } else {
                        votes[40] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 46.25) {
                    if (rr_median <= 72.5) {
                        if (rr_std <= 0.6446359753608704) {
                            if (num_peaks <= 83.0) {
                                votes[40] = 0;
                            } else {
                                votes[40] = 3;
                            }
                        } else {
                            if (rr_std <= 12.290266990661621) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 88.5) {
                            if (rr_std <= 13.156514644622803) {
                                votes[40] = 5;
                            } else {
                                votes[40] = 5;
                            }
                        } else {
                            votes[40] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (rr_median <= 80.5) {
                            if (num_peaks <= 77.5) {
                                votes[40] = 0;
                            } else {
                                if (num_valleys <= 91.5) {
                                    if (num_peaks <= 81.5) {
                                        if (rr_median <= 41.5) {
                                            votes[40] = 0;
                                        } else {
                                            votes[40] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 0.5864379703998566) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    }
                                } else {
                                    votes[40] = 3;
                                }
                            }
                        } else {
                            if (diastolic_time <= 113.5) {
                                if (num_peaks <= 82.0) {
                                    if (rr_std <= 37.03412628173828) {
                                        if (diastolic_time <= 69.25) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    } else {
                                        votes[40] = 4;
                                    }
                                } else {
                                    votes[40] = 1;
                                }
                            } else {
                                votes[40] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 5.254734635353088) {
                            if (rr_median <= 26.5) {
                                if (num_peaks <= 88.0) {
                                    votes[40] = 0;
                                } else {
                                    votes[40] = 0;
                                }
                            } else {
                                if (rr_median <= 95.0) {
                                    votes[40] = 3;
                                } else {
                                    if (rr_median <= 100.0) {
                                        votes[40] = 2;
                                    } else {
                                        votes[40] = 1;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 86.5) {
                                votes[40] = 1;
                            } else {
                                if (rr_median <= 98.5) {
                                    if (rr_median <= 57.25) {
                                        votes[40] = 0;
                                    } else {
                                        if (num_peaks <= 87.5) {
                                            votes[40] = 0;
                                        } else {
                                            votes[40] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 22.583477020263672) {
                                        votes[40] = 0;
                                    } else {
                                        votes[40] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 42.673622131347656) {
            if (rr_std <= 0.9231584668159485) {
                votes[40] = 1;
            } else {
                if (num_valleys <= 93.0) {
                    if (num_peaks <= 85.5) {
                        votes[40] = 1;
                    } else {
                        votes[40] = 1;
                    }
                } else {
                    votes[40] = 1;
                }
            }
        } else {
            if (num_valleys <= 89.5) {
                votes[40] = 1;
            } else {
                if (num_peaks <= 77.5) {
                    votes[40] = 4;
                } else {
                    votes[40] = 0;
                }
            }
        }
    }
// Decision rules for tree 41
    if (rr_median <= 128.75) {
        if (num_valleys <= 86.5) {
            if (rr_median <= 66.0) {
                if (rr_median <= 20.5) {
                    if (num_peaks <= 43.0) {
                        if (diastolic_time <= 60.25) {
                            votes[41] = 4;
                        } else {
                            votes[41] = 5;
                        }
                    } else {
                        if (diastolic_time <= 48.5) {
                            votes[41] = 3;
                        } else {
                            if (num_valleys <= 85.5) {
                                votes[41] = 5;
                            } else {
                                votes[41] = 0;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 56.5) {
                        if (rr_std <= 10.29586410522461) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 3;
                        }
                    } else {
                        votes[41] = 1;
                    }
                }
            } else {
                if (rr_std <= 0.7558121979236603) {
                    if (rr_median <= 75.0) {
                        if (num_peaks <= 68.0) {
                            votes[41] = 2;
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        if (diastolic_time <= 82.5) {
                            if (diastolic_time <= 48.0) {
                                votes[41] = 3;
                            } else {
                                votes[41] = 2;
                            }
                        } else {
                            votes[41] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 99.0) {
                        if (num_peaks <= 62.5) {
                            votes[41] = 1;
                        } else {
                            if (num_valleys <= 85.5) {
                                if (rr_median <= 77.5) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 5;
                                }
                            } else {
                                votes[41] = 5;
                            }
                        }
                    } else {
                        if (num_valleys <= 85.5) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 2;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 75.5) {
                if (diastolic_time <= 244.5) {
                    if (diastolic_time <= 108.75) {
                        if (rr_std <= 21.069384574890137) {
                            if (num_peaks <= 41.5) {
                                if (diastolic_time <= 76.0) {
                                    if (num_valleys <= 89.5) {
                                        votes[41] = 4;
                                    } else {
                                        votes[41] = 4;
                                    }
                                } else {
                                    votes[41] = 5;
                                }
                            } else {
                                if (rr_median <= 116.25) {
                                    if (rr_median <= 74.75) {
                                        if (rr_std <= 9.440037727355957) {
                                            votes[41] = 3;
                                        } else {
                                            votes[41] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 15.316328048706055) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    }
                                } else {
                                    votes[41] = 2;
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                if (num_peaks <= 51.5) {
                                    votes[41] = 4;
                                } else {
                                    if (num_peaks <= 67.5) {
                                        votes[41] = 3;
                                    } else {
                                        votes[41] = 0;
                                    }
                                }
                            } else {
                                if (rr_median <= 120.5) {
                                    if (rr_std <= 29.863351821899414) {
                                        if (num_peaks <= 67.5) {
                                            votes[41] = 0;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    } else {
                                        votes[41] = 4;
                                    }
                                } else {
                                    votes[41] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 118.25) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 2;
                        }
                    }
                } else {
                    votes[41] = 4;
                }
            } else {
                if (rr_median <= 63.5) {
                    if (rr_std <= 1.200490117073059) {
                        if (num_peaks <= 88.0) {
                            if (diastolic_time <= 37.0) {
                                votes[41] = 3;
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[41] = 0;
                                } else {
                                    if (diastolic_time <= 67.5) {
                                        votes[41] = 0;
                                    } else {
                                        votes[41] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        if (rr_median <= 55.25) {
                            votes[41] = 3;
                        } else {
                            if (num_peaks <= 82.5) {
                                votes[41] = 3;
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[41] = 0;
                                } else {
                                    votes[41] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 5.043876647949219) {
                        if (diastolic_time <= 106.0) {
                            if (num_peaks <= 90.0) {
                                if (rr_median <= 97.0) {
                                    if (rr_std <= 2.030620038509369) {
                                        votes[41] = 5;
                                    } else {
                                        votes[41] = 3;
                                    }
                                } else {
                                    votes[41] = 5;
                                }
                            } else {
                                votes[41] = 1;
                            }
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        if (num_peaks <= 82.0) {
                            if (rr_median <= 98.5) {
                                if (rr_std <= 19.447372436523438) {
                                    votes[41] = 0;
                                } else {
                                    votes[41] = 4;
                                }
                            } else {
                                if (rr_std <= 22.559345245361328) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 45.75) {
                                votes[41] = 3;
                            } else {
                                if (num_peaks <= 87.5) {
                                    if (rr_std <= 18.847614288330078) {
                                        if (rr_std <= 12.948517322540283) {
                                            votes[41] = 0;
                                        } else {
                                            votes[41] = 0;
                                        }
                                    } else {
                                        votes[41] = 1;
                                    }
                                } else {
                                    if (diastolic_time <= 73.75) {
                                        if (rr_median <= 69.75) {
                                            votes[41] = 0;
                                        } else {
                                            votes[41] = 0;
                                        }
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
    } else {
        if (rr_std <= 61.158145904541016) {
            if (rr_std <= 0.44031527638435364) {
                votes[41] = 1;
            } else {
                if (rr_median <= 138.75) {
                    if (diastolic_time <= 66.75) {
                        votes[41] = 5;
                    } else {
                        if (num_peaks <= 57.5) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 39.87405586242676) {
                        if (num_valleys <= 92.5) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 1;
                        }
                    } else {
                        if (diastolic_time <= 56.0) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 0;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 82.5) {
                votes[41] = 1;
            } else {
                votes[41] = 0;
            }
        }
    }
// Decision rules for tree 42
    if (num_valleys <= 82.5) {
        if (rr_median <= 78.75) {
            if (rr_median <= 62.0) {
                if (diastolic_time <= 43.0) {
                    votes[42] = 4;
                } else {
                    if (diastolic_time <= 68.25) {
                        votes[42] = 3;
                    } else {
                        votes[42] = 5;
                    }
                }
            } else {
                if (rr_std <= 0.7192845046520233) {
                    if (rr_median <= 73.5) {
                        votes[42] = 2;
                    } else {
                        votes[42] = 2;
                    }
                } else {
                    votes[42] = 2;
                }
            }
        } else {
            if (rr_median <= 89.5) {
                votes[42] = 3;
            } else {
                votes[42] = 5;
            }
        }
    } else {
        if (rr_median <= 128.75) {
            if (num_peaks <= 76.5) {
                if (diastolic_time <= 104.5) {
                    if (rr_std <= 23.117923736572266) {
                        if (num_peaks <= 43.5) {
                            if (diastolic_time <= 79.0) {
                                if (diastolic_time <= 10.0) {
                                    votes[42] = 4;
                                } else {
                                    if (diastolic_time <= 28.0) {
                                        votes[42] = 5;
                                    } else {
                                        if (num_peaks <= 24.5) {
                                            votes[42] = 4;
                                        } else {
                                            votes[42] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[42] = 5;
                            }
                        } else {
                            if (num_peaks <= 49.5) {
                                if (num_valleys <= 87.5) {
                                    if (rr_std <= 0.515728622674942) {
                                        votes[42] = 2;
                                    } else {
                                        votes[42] = 2;
                                    }
                                } else {
                                    if (rr_median <= 99.25) {
                                        if (rr_median <= 33.0) {
                                            votes[42] = 2;
                                        } else {
                                            votes[42] = 4;
                                        }
                                    } else {
                                        votes[42] = 1;
                                    }
                                }
                            } else {
                                if (rr_median <= 86.0) {
                                    if (diastolic_time <= 37.75) {
                                        if (num_peaks <= 62.0) {
                                            votes[42] = 4;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 15.152183532714844) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 0;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 65.0) {
                                        if (rr_median <= 114.75) {
                                            votes[42] = 1;
                                        } else {
                                            votes[42] = 2;
                                        }
                                    } else {
                                        votes[42] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 69.75) {
                            if (num_peaks <= 51.0) {
                                votes[42] = 4;
                            } else {
                                if (rr_median <= 66.0) {
                                    votes[42] = 3;
                                } else {
                                    votes[42] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 79.25) {
                                votes[42] = 4;
                            } else {
                                votes[42] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 244.5) {
                        if (rr_median <= 118.25) {
                            if (diastolic_time <= 110.75) {
                                votes[42] = 1;
                            } else {
                                if (num_peaks <= 50.5) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 1;
                                }
                            }
                        } else {
                            votes[42] = 2;
                        }
                    } else {
                        votes[42] = 4;
                    }
                }
            } else {
                if (num_peaks <= 86.5) {
                    if (rr_median <= 95.25) {
                        if (rr_median <= 20.5) {
                            if (diastolic_time <= 42.25) {
                                votes[42] = 3;
                            } else {
                                if (num_valleys <= 88.5) {
                                    votes[42] = 0;
                                } else {
                                    votes[42] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 555.5) {
                                if (rr_std <= 1.1018478274345398) {
                                    votes[42] = 5;
                                } else {
                                    if (rr_std <= 6.080272197723389) {
                                        if (num_valleys <= 87.5) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    } else {
                                        if (rr_median <= 68.5) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[42] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 109.0) {
                            if (diastolic_time <= 79.5) {
                                votes[42] = 1;
                            } else {
                                votes[42] = 5;
                            }
                        } else {
                            votes[42] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 8.847529888153076) {
                        if (diastolic_time <= 48.0) {
                            votes[42] = 3;
                        } else {
                            if (rr_median <= 87.5) {
                                if (rr_median <= 63.0) {
                                    if (diastolic_time <= 61.75) {
                                        votes[42] = 0;
                                    } else {
                                        votes[42] = 0;
                                    }
                                } else {
                                    votes[42] = 5;
                                }
                            } else {
                                votes[42] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 48.953134536743164) {
                            if (rr_median <= 57.75) {
                                votes[42] = 3;
                            } else {
                                if (diastolic_time <= 48.25) {
                                    votes[42] = 0;
                                } else {
                                    if (diastolic_time <= 78.25) {
                                        if (rr_median <= 70.5) {
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
                            votes[42] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 349.5) {
                if (diastolic_time <= 57.0) {
                    if (diastolic_time <= 35.0) {
                        votes[42] = 1;
                    } else {
                        votes[42] = 1;
                    }
                } else {
                    if (rr_std <= 31.151161193847656) {
                        if (num_peaks <= 53.5) {
                            votes[42] = 1;
                        } else {
                            if (diastolic_time <= 115.0) {
                                if (rr_std <= 3.268316626548767) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 1;
                                }
                            } else {
                                votes[42] = 1;
                            }
                        }
                    } else {
                        if (num_peaks <= 58.5) {
                            votes[42] = 4;
                        } else {
                            votes[42] = 0;
                        }
                    }
                }
            } else {
                votes[42] = 0;
            }
        }
    }
// Decision rules for tree 43
    if (num_valleys <= 81.5) {
        if (rr_median <= 76.5) {
            if (rr_median <= 64.0) {
                votes[43] = 1;
            } else {
                if (num_peaks <= 53.5) {
                    if (rr_median <= 68.5) {
                        votes[43] = 2;
                    } else {
                        votes[43] = 2;
                    }
                } else {
                    if (num_valleys <= 79.5) {
                        votes[43] = 2;
                    } else {
                        if (diastolic_time <= 69.25) {
                            votes[43] = 2;
                        } else {
                            votes[43] = 2;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 77.5) {
                votes[43] = 5;
            } else {
                votes[43] = 3;
            }
        }
    } else {
        if (rr_median <= 128.75) {
            if (num_peaks <= 73.5) {
                if (diastolic_time <= 242.0) {
                    if (diastolic_time <= 107.5) {
                        if (rr_std <= 15.31638240814209) {
                            if (num_peaks <= 41.5) {
                                if (diastolic_time <= 75.0) {
                                    if (num_valleys <= 86.5) {
                                        votes[43] = 4;
                                    } else {
                                        if (num_peaks <= 26.5) {
                                            votes[43] = 4;
                                        } else {
                                            votes[43] = 4;
                                        }
                                    }
                                } else {
                                    votes[43] = 5;
                                }
                            } else {
                                if (num_peaks <= 49.5) {
                                    if (diastolic_time <= 53.0) {
                                        votes[43] = 3;
                                    } else {
                                        if (rr_std <= 5.420830011367798) {
                                            votes[43] = 2;
                                        } else {
                                            votes[43] = 2;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 10.0) {
                                        votes[43] = 4;
                                    } else {
                                        if (diastolic_time <= 82.75) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 74.25) {
                                if (rr_median <= 64.5) {
                                    if (diastolic_time <= 54.25) {
                                        if (rr_std <= 43.06571960449219) {
                                            votes[43] = 1;
                                        } else {
                                            votes[43] = 3;
                                        }
                                    } else {
                                        votes[43] = 0;
                                    }
                                } else {
                                    if (rr_median <= 97.5) {
                                        if (num_peaks <= 62.5) {
                                            votes[43] = 5;
                                        } else {
                                            votes[43] = 0;
                                        }
                                    } else {
                                        votes[43] = 4;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 82.0) {
                                    if (num_peaks <= 67.5) {
                                        votes[43] = 0;
                                    } else {
                                        votes[43] = 4;
                                    }
                                } else {
                                    if (rr_std <= 29.813352584838867) {
                                        if (rr_std <= 27.07503604888916) {
                                            votes[43] = 4;
                                        } else {
                                            votes[43] = 4;
                                        }
                                    } else {
                                        votes[43] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 115.25) {
                            if (num_peaks <= 34.5) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 1;
                            }
                        } else {
                            votes[43] = 2;
                        }
                    }
                } else {
                    votes[43] = 4;
                }
            } else {
                if (diastolic_time <= 54.75) {
                    if (rr_median <= 78.75) {
                        if (rr_std <= 1.140178233385086) {
                            if (num_peaks <= 82.5) {
                                votes[43] = 5;
                            } else {
                                if (diastolic_time <= 39.0) {
                                    votes[43] = 3;
                                } else {
                                    votes[43] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 49.25) {
                                if (rr_median <= 66.0) {
                                    if (rr_std <= 17.98017978668213) {
                                        votes[43] = 3;
                                    } else {
                                        votes[43] = 3;
                                    }
                                } else {
                                    votes[43] = 3;
                                }
                            } else {
                                if (rr_std <= 10.201401233673096) {
                                    votes[43] = 3;
                                } else {
                                    if (rr_std <= 17.260682106018066) {
                                        votes[43] = 0;
                                    } else {
                                        votes[43] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 81.5) {
                            votes[43] = 5;
                        } else {
                            if (rr_median <= 105.0) {
                                votes[43] = 3;
                            } else {
                                votes[43] = 2;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 85.5) {
                        if (rr_median <= 85.25) {
                            if (rr_std <= 29.128507614135742) {
                                if (num_valleys <= 87.5) {
                                    votes[43] = 3;
                                } else {
                                    if (diastolic_time <= 73.75) {
                                        if (num_valleys <= 90.5) {
                                            votes[43] = 0;
                                        } else {
                                            votes[43] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 81.5) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[43] = 4;
                            }
                        } else {
                            if (diastolic_time <= 118.5) {
                                if (num_peaks <= 80.5) {
                                    if (rr_std <= 7.431708455085754) {
                                        votes[43] = 5;
                                    } else {
                                        votes[43] = 4;
                                    }
                                } else {
                                    if (rr_median <= 98.5) {
                                        votes[43] = 2;
                                    } else {
                                        votes[43] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 5.026149392127991) {
                                    votes[43] = 2;
                                } else {
                                    votes[43] = 0;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 86.5) {
                            votes[43] = 1;
                        } else {
                            if (rr_std <= 8.877108573913574) {
                                if (rr_median <= 63.0) {
                                    if (num_valleys <= 90.5) {
                                        votes[43] = 0;
                                    } else {
                                        votes[43] = 3;
                                    }
                                } else {
                                    votes[43] = 5;
                                }
                            } else {
                                if (num_peaks <= 87.5) {
                                    votes[43] = 0;
                                } else {
                                    if (num_peaks <= 89.5) {
                                        if (rr_std <= 15.51923418045044) {
                                            votes[43] = 0;
                                        } else {
                                            votes[43] = 0;
                                        }
                                    } else {
                                        votes[43] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 82.5) {
                if (rr_std <= 51.47666549682617) {
                    if (rr_std <= 1.0049982368946075) {
                        votes[43] = 1;
                    } else {
                        if (num_valleys <= 93.5) {
                            if (rr_median <= 134.25) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 1;
                            }
                        } else {
                            votes[43] = 1;
                        }
                    }
                } else {
                    votes[43] = 1;
                }
            } else {
                if (rr_std <= 28.286335229873657) {
                    votes[43] = 1;
                } else {
                    votes[43] = 0;
                }
            }
        }
    }
// Decision rules for tree 44
    if (num_valleys <= 83.5) {
        if (rr_median <= 75.0) {
            if (rr_median <= 66.0) {
                if (diastolic_time <= 61.0) {
                    votes[44] = 3;
                } else {
                    votes[44] = 5;
                }
            } else {
                if (rr_median <= 73.5) {
                    if (rr_median <= 72.25) {
                        if (rr_std <= 0.545406848192215) {
                            if (num_peaks <= 47.0) {
                                votes[44] = 2;
                            } else {
                                votes[44] = 2;
                            }
                        } else {
                            if (num_peaks <= 62.5) {
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
            }
        } else {
            if (diastolic_time <= 75.75) {
                if (rr_median <= 86.0) {
                    votes[44] = 3;
                } else {
                    votes[44] = 1;
                }
            } else {
                votes[44] = 5;
            }
        }
    } else {
        if (num_peaks <= 73.5) {
            if (rr_median <= 126.5) {
                if (diastolic_time <= 310.0) {
                    if (diastolic_time <= 108.75) {
                        if (rr_std <= 16.26357078552246) {
                            if (diastolic_time <= 37.75) {
                                if (rr_median <= 44.0) {
                                    if (diastolic_time <= 10.0) {
                                        votes[44] = 4;
                                    } else {
                                        if (diastolic_time <= 35.5) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    }
                                } else {
                                    votes[44] = 3;
                                }
                            } else {
                                if (diastolic_time <= 86.75) {
                                    if (rr_std <= 9.058522701263428) {
                                        if (num_peaks <= 43.5) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 2;
                                        }
                                    } else {
                                        if (diastolic_time <= 67.0) {
                                            votes[44] = 0;
                                        } else {
                                            votes[44] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 3.5854196548461914) {
                                        if (num_peaks <= 52.0) {
                                            votes[44] = 5;
                                        } else {
                                            votes[44] = 5;
                                        }
                                    } else {
                                        votes[44] = 2;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 76.75) {
                                if (num_peaks <= 49.5) {
                                    votes[44] = 4;
                                } else {
                                    if (diastolic_time <= 44.5) {
                                        votes[44] = 3;
                                    } else {
                                        if (num_peaks <= 68.5) {
                                            votes[44] = 5;
                                        } else {
                                            votes[44] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 97.75) {
                                    if (rr_std <= 29.813352584838867) {
                                        if (rr_median <= 84.0) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    } else {
                                        votes[44] = 4;
                                    }
                                } else {
                                    votes[44] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 115.5) {
                            votes[44] = 1;
                        } else {
                            votes[44] = 2;
                        }
                    }
                } else {
                    votes[44] = 4;
                }
            } else {
                if (num_valleys <= 89.5) {
                    if (rr_std <= 2.2824419736862183) {
                        votes[44] = 1;
                    } else {
                        if (num_valleys <= 86.5) {
                            votes[44] = 1;
                        } else {
                            votes[44] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 54.5) {
                        if (rr_std <= 18.124971389770508) {
                            votes[44] = 2;
                        } else {
                            votes[44] = 4;
                        }
                    } else {
                        if (rr_std <= 28.185956954956055) {
                            votes[44] = 1;
                        } else {
                            votes[44] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 98.75) {
                if (num_peaks <= 84.5) {
                    if (rr_median <= 71.5) {
                        if (rr_std <= 0.8443530201911926) {
                            if (diastolic_time <= 35.0) {
                                votes[44] = 3;
                            } else {
                                if (num_valleys <= 89.5) {
                                    votes[44] = 3;
                                } else {
                                    if (diastolic_time <= 88.25) {
                                        votes[44] = 0;
                                    } else {
                                        votes[44] = 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 63.5) {
                                if (rr_median <= 55.25) {
                                    votes[44] = 3;
                                } else {
                                    if (rr_median <= 59.5) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 3;
                                    }
                                }
                            } else {
                                votes[44] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 18.400039672851562) {
                            if (rr_std <= 4.420765399932861) {
                                if (num_peaks <= 77.5) {
                                    votes[44] = 5;
                                } else {
                                    if (diastolic_time <= 59.25) {
                                        votes[44] = 5;
                                    } else {
                                        votes[44] = 3;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 75.0) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 73.25) {
                                votes[44] = 0;
                            } else {
                                votes[44] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 49.25) {
                        if (num_valleys <= 90.5) {
                            if (rr_std <= 13.558492183685303) {
                                if (num_peaks <= 88.5) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 3;
                                }
                            } else {
                                votes[44] = 0;
                            }
                        } else {
                            votes[44] = 0;
                        }
                    } else {
                        if (rr_std <= 8.621502876281738) {
                            if (rr_median <= 65.5) {
                                if (num_peaks <= 89.5) {
                                    if (diastolic_time <= 61.5) {
                                        votes[44] = 0;
                                    } else {
                                        votes[44] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 70.25) {
                                        votes[44] = 3;
                                    } else {
                                        votes[44] = 0;
                                    }
                                }
                            } else {
                                votes[44] = 5;
                            }
                        } else {
                            if (num_valleys <= 89.5) {
                                if (rr_median <= 63.0) {
                                    votes[44] = 0;
                                } else {
                                    votes[44] = 0;
                                }
                            } else {
                                if (diastolic_time <= 68.0) {
                                    if (rr_std <= 16.257240295410156) {
                                        votes[44] = 0;
                                    } else {
                                        votes[44] = 3;
                                    }
                                } else {
                                    if (rr_median <= 83.25) {
                                        votes[44] = 0;
                                    } else {
                                        votes[44] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 28.937369346618652) {
                    if (rr_median <= 128.5) {
                        if (num_peaks <= 82.5) {
                            if (diastolic_time <= 67.25) {
                                votes[44] = 5;
                            } else {
                                votes[44] = 5;
                            }
                        } else {
                            if (diastolic_time <= 82.5) {
                                if (diastolic_time <= 52.0) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 1;
                                }
                            } else {
                                votes[44] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 0.5335937142372131) {
                            votes[44] = 5;
                        } else {
                            votes[44] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 89.5) {
                        if (diastolic_time <= 94.25) {
                            if (rr_std <= 72.01812362670898) {
                                votes[44] = 1;
                            } else {
                                votes[44] = 0;
                            }
                        } else {
                            votes[44] = 5;
                        }
                    } else {
                        votes[44] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 45
    if (rr_median <= 104.75) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 66.0) {
                if (diastolic_time <= 58.0) {
                    if (rr_median <= 24.0) {
                        votes[45] = 2;
                    } else {
                        votes[45] = 3;
                    }
                } else {
                    if (num_peaks <= 55.0) {
                        votes[45] = 5;
                    } else {
                        votes[45] = 1;
                    }
                }
            } else {
                if (rr_median <= 75.0) {
                    if (rr_std <= 0.9357241690158844) {
                        if (diastolic_time <= 70.0) {
                            if (rr_std <= 0.545406848192215) {
                                votes[45] = 2;
                            } else {
                                if (rr_std <= 0.650495320558548) {
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
                    if (diastolic_time <= 82.5) {
                        if (rr_median <= 84.5) {
                            if (rr_std <= 0.7464491724967957) {
                                votes[45] = 3;
                            } else {
                                votes[45] = 5;
                            }
                        } else {
                            votes[45] = 1;
                        }
                    } else {
                        votes[45] = 5;
                    }
                }
            }
        } else {
            if (num_peaks <= 76.5) {
                if (diastolic_time <= 78.5) {
                    if (diastolic_time <= 40.75) {
                        if (rr_median <= 45.5) {
                            if (num_peaks <= 65.5) {
                                if (diastolic_time <= 10.0) {
                                    votes[45] = 4;
                                } else {
                                    if (num_peaks <= 55.0) {
                                        if (num_peaks <= 39.5) {
                                            votes[45] = 4;
                                        } else {
                                            votes[45] = 4;
                                        }
                                    } else {
                                        votes[45] = 5;
                                    }
                                }
                            } else {
                                votes[45] = 0;
                            }
                        } else {
                            if (rr_std <= 26.36750602722168) {
                                if (rr_median <= 69.25) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 3;
                                }
                            } else {
                                votes[45] = 4;
                            }
                        }
                    } else {
                        if (num_valleys <= 90.5) {
                            if (rr_std <= 12.2645583152771) {
                                if (num_peaks <= 41.0) {
                                    votes[45] = 5;
                                } else {
                                    if (rr_median <= 65.75) {
                                        if (num_peaks <= 51.0) {
                                            votes[45] = 0;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 0.628864586353302) {
                                            votes[45] = 2;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 20.795907020568848) {
                                    votes[45] = 0;
                                } else {
                                    votes[45] = 4;
                                }
                            }
                        } else {
                            if (num_peaks <= 50.5) {
                                if (diastolic_time <= 61.75) {
                                    votes[45] = 2;
                                } else {
                                    votes[45] = 4;
                                }
                            } else {
                                if (num_peaks <= 56.5) {
                                    votes[45] = 0;
                                } else {
                                    if (rr_median <= 65.5) {
                                        if (num_peaks <= 66.0) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 64.5) {
                                            votes[45] = 0;
                                        } else {
                                            votes[45] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.995612144470215) {
                        if (diastolic_time <= 236.5) {
                            if (diastolic_time <= 109.5) {
                                if (diastolic_time <= 86.5) {
                                    votes[45] = 0;
                                } else {
                                    if (rr_std <= 0.3162277638912201) {
                                        if (num_peaks <= 48.0) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 5;
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
                        if (diastolic_time <= 113.25) {
                            if (rr_median <= 98.5) {
                                if (diastolic_time <= 84.0) {
                                    votes[45] = 4;
                                } else {
                                    if (rr_std <= 18.36966896057129) {
                                        votes[45] = 4;
                                    } else {
                                        votes[45] = 4;
                                    }
                                }
                            } else {
                                votes[45] = 4;
                            }
                        } else {
                            votes[45] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 54.5) {
                    if (rr_std <= 2.1866442561149597) {
                        if (diastolic_time <= 34.5) {
                            votes[45] = 3;
                        } else {
                            if (diastolic_time <= 43.75) {
                                votes[45] = 0;
                            } else {
                                votes[45] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 59.5) {
                            votes[45] = 3;
                        } else {
                            if (rr_std <= 25.104296684265137) {
                                if (rr_median <= 84.0) {
                                    votes[45] = 0;
                                } else {
                                    votes[45] = 3;
                                }
                            } else {
                                votes[45] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.464195728302002) {
                        if (rr_median <= 21.75) {
                            if (num_valleys <= 90.5) {
                                if (num_peaks <= 84.5) {
                                    votes[45] = 0;
                                } else {
                                    votes[45] = 0;
                                }
                            } else {
                                votes[45] = 0;
                            }
                        } else {
                            if (num_peaks <= 86.5) {
                                if (rr_std <= 7.079552888870239) {
                                    if (rr_median <= 92.25) {
                                        if (rr_std <= 1.1018478274345398) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    } else {
                                        votes[45] = 3;
                                    }
                                } else {
                                    votes[45] = 0;
                                }
                            } else {
                                votes[45] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 84.5) {
                            if (diastolic_time <= 71.0) {
                                votes[45] = 3;
                            } else {
                                votes[45] = 0;
                            }
                        } else {
                            if (rr_std <= 19.100642204284668) {
                                if (rr_std <= 16.40364170074463) {
                                    votes[45] = 0;
                                } else {
                                    votes[45] = 0;
                                }
                            } else {
                                if (rr_median <= 88.25) {
                                    votes[45] = 0;
                                } else {
                                    votes[45] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_median <= 131.5) {
            if (rr_std <= 34.174530029296875) {
                if (rr_median <= 118.75) {
                    if (num_peaks <= 69.5) {
                        if (num_peaks <= 50.0) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 1;
                        }
                    } else {
                        if (num_peaks <= 89.0) {
                            votes[45] = 5;
                        } else {
                            votes[45] = 0;
                        }
                    }
                } else {
                    if (num_peaks <= 54.0) {
                        votes[45] = 2;
                    } else {
                        if (diastolic_time <= 111.75) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 101.0) {
                    if (num_peaks <= 76.0) {
                        if (diastolic_time <= 78.0) {
                            votes[45] = 4;
                        } else {
                            votes[45] = 4;
                        }
                    } else {
                        votes[45] = 1;
                    }
                } else {
                    votes[45] = 1;
                }
            }
        } else {
            if (rr_std <= 0.4714045226573944) {
                if (diastolic_time <= 61.5) {
                    votes[45] = 3;
                } else {
                    votes[45] = 4;
                }
            } else {
                if (rr_std <= 51.943071365356445) {
                    if (rr_median <= 134.75) {
                        votes[45] = 1;
                    } else {
                        if (num_valleys <= 93.5) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 82.5) {
                        votes[45] = 1;
                    } else {
                        votes[45] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 46
    if (rr_median <= 128.75) {
        if (num_valleys <= 85.5) {
            if (num_peaks <= 68.5) {
                if (rr_median <= 61.5) {
                    if (diastolic_time <= 43.5) {
                        votes[46] = 4;
                    } else {
                        if (num_valleys <= 82.5) {
                            votes[46] = 5;
                        } else {
                            if (diastolic_time <= 71.75) {
                                votes[46] = 2;
                            } else {
                                votes[46] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (num_peaks <= 43.5) {
                            votes[46] = 2;
                        } else {
                            if (num_peaks <= 57.5) {
                                votes[46] = 2;
                            } else {
                                if (rr_std <= 0.5532135367393494) {
                                    votes[46] = 2;
                                } else {
                                    votes[46] = 2;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 41.0) {
                            votes[46] = 5;
                        } else {
                            votes[46] = 2;
                        }
                    }
                }
            } else {
                if (rr_median <= 65.75) {
                    if (num_valleys <= 82.5) {
                        votes[46] = 1;
                    } else {
                        if (num_valleys <= 84.5) {
                            votes[46] = 3;
                        } else {
                            votes[46] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 15.00895643234253) {
                        if (diastolic_time <= 66.25) {
                            if (rr_median <= 82.5) {
                                if (diastolic_time <= 40.75) {
                                    votes[46] = 5;
                                } else {
                                    votes[46] = 5;
                                }
                            } else {
                                votes[46] = 3;
                            }
                        } else {
                            if (diastolic_time <= 71.5) {
                                votes[46] = 2;
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
            if (num_peaks <= 74.5) {
                if (diastolic_time <= 104.25) {
                    if (rr_std <= 18.714306831359863) {
                        if (diastolic_time <= 10.0) {
                            if (num_valleys <= 90.5) {
                                votes[46] = 4;
                            } else {
                                votes[46] = 4;
                            }
                        } else {
                            if (diastolic_time <= 74.25) {
                                if (rr_median <= 102.5) {
                                    if (num_peaks <= 41.5) {
                                        if (num_valleys <= 89.5) {
                                            votes[46] = 4;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 55.25) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 2;
                                        }
                                    }
                                } else {
                                    votes[46] = 1;
                                }
                            } else {
                                if (rr_median <= 111.5) {
                                    if (rr_std <= 13.416666030883789) {
                                        if (rr_std <= 0.3162277638912201) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    } else {
                                        votes[46] = 4;
                                    }
                                } else {
                                    votes[46] = 2;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 76.75) {
                            if (num_peaks <= 52.0) {
                                if (rr_std <= 36.592830657958984) {
                                    votes[46] = 4;
                                } else {
                                    votes[46] = 4;
                                }
                            } else {
                                if (rr_median <= 103.5) {
                                    if (num_peaks <= 66.5) {
                                        votes[46] = 3;
                                    } else {
                                        votes[46] = 0;
                                    }
                                } else {
                                    votes[46] = 1;
                                }
                            }
                        } else {
                            if (num_peaks <= 71.5) {
                                if (rr_median <= 98.5) {
                                    votes[46] = 4;
                                } else {
                                    votes[46] = 4;
                                }
                            } else {
                                votes[46] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 261.5) {
                        if (rr_median <= 118.25) {
                            if (diastolic_time <= 118.5) {
                                votes[46] = 1;
                            } else {
                                votes[46] = 1;
                            }
                        } else {
                            if (num_valleys <= 90.5) {
                                votes[46] = 1;
                            } else {
                                votes[46] = 2;
                            }
                        }
                    } else {
                        votes[46] = 4;
                    }
                }
            } else {
                if (num_peaks <= 85.5) {
                    if (rr_median <= 98.5) {
                        if (rr_std <= 21.464791297912598) {
                            if (rr_std <= 9.597393989562988) {
                                if (rr_std <= 0.7899346351623535) {
                                    if (diastolic_time <= 35.5) {
                                        votes[46] = 3;
                                    } else {
                                        if (diastolic_time <= 62.0) {
                                            votes[46] = 0;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 6.368270635604858) {
                                        if (rr_median <= 81.25) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 3;
                                        }
                                    } else {
                                        votes[46] = 0;
                                    }
                                }
                            } else {
                                if (rr_std <= 14.381638526916504) {
                                    votes[46] = 0;
                                } else {
                                    votes[46] = 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                votes[46] = 3;
                            } else {
                                votes[46] = 4;
                            }
                        }
                    } else {
                        if (rr_median <= 123.5) {
                            if (diastolic_time <= 76.75) {
                                votes[46] = 5;
                            } else {
                                votes[46] = 5;
                            }
                        } else {
                            votes[46] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 8.621502876281738) {
                        if (diastolic_time <= 73.75) {
                            if (diastolic_time <= 48.0) {
                                votes[46] = 3;
                            } else {
                                if (rr_median <= 30.5) {
                                    if (num_peaks <= 89.5) {
                                        votes[46] = 0;
                                    } else {
                                        votes[46] = 0;
                                    }
                                } else {
                                    votes[46] = 2;
                                }
                            }
                        } else {
                            if (rr_median <= 89.0) {
                                votes[46] = 5;
                            } else {
                                votes[46] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 50.5) {
                            if (rr_median <= 80.5) {
                                votes[46] = 3;
                            } else {
                                votes[46] = 5;
                            }
                        } else {
                            if (num_peaks <= 87.5) {
                                if (num_valleys <= 91.5) {
                                    votes[46] = 4;
                                } else {
                                    votes[46] = 0;
                                }
                            } else {
                                if (num_valleys <= 90.5) {
                                    if (rr_median <= 74.25) {
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
                }
            }
        }
    } else {
        if (rr_median <= 349.5) {
            if (rr_std <= 67.05539321899414) {
                if (rr_median <= 154.5) {
                    if (diastolic_time <= 115.0) {
                        if (num_peaks <= 75.0) {
                            if (num_peaks <= 58.0) {
                                votes[46] = 5;
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
                    if (diastolic_time <= 56.25) {
                        votes[46] = 1;
                    } else {
                        if (diastolic_time <= 101.75) {
                            votes[46] = 0;
                        } else {
                            if (diastolic_time <= 172.0) {
                                votes[46] = 1;
                            } else {
                                votes[46] = 1;
                            }
                        }
                    }
                }
            } else {
                votes[46] = 3;
            }
        } else {
            votes[46] = 5;
        }
    }
// Decision rules for tree 47
    if (rr_median <= 128.75) {
        if (num_peaks <= 73.5) {
            if (num_valleys <= 85.5) {
                if (rr_median <= 61.5) {
                    if (rr_median <= 53.75) {
                        if (diastolic_time <= 48.5) {
                            votes[47] = 5;
                        } else {
                            if (num_valleys <= 82.5) {
                                votes[47] = 5;
                            } else {
                                votes[47] = 5;
                            }
                        }
                    } else {
                        votes[47] = 3;
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (diastolic_time <= 70.5) {
                            if (rr_std <= 0.47034794092178345) {
                                votes[47] = 2;
                            } else {
                                if (num_valleys <= 79.5) {
                                    votes[47] = 2;
                                } else {
                                    if (diastolic_time <= 66.5) {
                                        votes[47] = 2;
                                    } else {
                                        votes[47] = 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 73.5) {
                                votes[47] = 2;
                            } else {
                                votes[47] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 84.0) {
                            votes[47] = 5;
                        } else {
                            votes[47] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 261.5) {
                    if (diastolic_time <= 117.5) {
                        if (rr_std <= 21.01315402984619) {
                            if (diastolic_time <= 32.5) {
                                if (diastolic_time <= 10.0) {
                                    votes[47] = 4;
                                } else {
                                    votes[47] = 4;
                                }
                            } else {
                                if (rr_median <= 113.5) {
                                    if (num_peaks <= 50.5) {
                                        if (diastolic_time <= 53.25) {
                                            votes[47] = 4;
                                        } else {
                                            votes[47] = 2;
                                        }
                                    } else {
                                        if (diastolic_time <= 83.75) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 5;
                                        }
                                    }
                                } else {
                                    votes[47] = 2;
                                }
                            }
                        } else {
                            if (diastolic_time <= 68.0) {
                                if (num_peaks <= 63.5) {
                                    if (num_peaks <= 49.5) {
                                        votes[47] = 4;
                                    } else {
                                        if (rr_median <= 100.5) {
                                            votes[47] = 1;
                                        } else {
                                            votes[47] = 4;
                                        }
                                    }
                                } else {
                                    votes[47] = 0;
                                }
                            } else {
                                if (num_peaks <= 66.5) {
                                    if (rr_std <= 33.45811462402344) {
                                        votes[47] = 5;
                                    } else {
                                        votes[47] = 4;
                                    }
                                } else {
                                    votes[47] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 109.0) {
                            votes[47] = 1;
                        } else {
                            votes[47] = 1;
                        }
                    }
                } else {
                    votes[47] = 4;
                }
            }
        } else {
            if (num_peaks <= 85.5) {
                if (rr_median <= 100.5) {
                    if (num_valleys <= 88.5) {
                        if (rr_median <= 64.5) {
                            if (rr_median <= 20.5) {
                                votes[47] = 3;
                            } else {
                                if (rr_std <= 12.246093273162842) {
                                    votes[47] = 3;
                                } else {
                                    votes[47] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 0.8999770283699036) {
                                if (diastolic_time <= 67.0) {
                                    votes[47] = 5;
                                } else {
                                    votes[47] = 2;
                                }
                            } else {
                                if (diastolic_time <= 78.0) {
                                    if (rr_median <= 76.5) {
                                        votes[47] = 3;
                                    } else {
                                        votes[47] = 3;
                                    }
                                } else {
                                    votes[47] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 7.053381443023682) {
                            if (rr_std <= 0.5678778290748596) {
                                if (num_peaks <= 80.5) {
                                    votes[47] = 0;
                                } else {
                                    votes[47] = 3;
                                }
                            } else {
                                if (rr_median <= 79.25) {
                                    votes[47] = 3;
                                } else {
                                    votes[47] = 3;
                                }
                            }
                        } else {
                            if (rr_median <= 66.0) {
                                if (rr_std <= 17.697373867034912) {
                                    votes[47] = 3;
                                } else {
                                    votes[47] = 0;
                                }
                            } else {
                                if (rr_std <= 21.830957412719727) {
                                    if (rr_median <= 76.75) {
                                        votes[47] = 0;
                                    } else {
                                        votes[47] = 0;
                                    }
                                } else {
                                    votes[47] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 112.0) {
                        if (num_peaks <= 81.5) {
                            if (rr_std <= 8.678907871246338) {
                                votes[47] = 5;
                            } else {
                                votes[47] = 5;
                            }
                        } else {
                            votes[47] = 1;
                        }
                    } else {
                        votes[47] = 2;
                    }
                }
            } else {
                if (diastolic_time <= 52.5) {
                    if (num_peaks <= 91.5) {
                        if (num_peaks <= 87.5) {
                            if (rr_median <= 33.25) {
                                votes[47] = 0;
                            } else {
                                votes[47] = 5;
                            }
                        } else {
                            if (rr_median <= 76.25) {
                                if (rr_std <= 11.690744876861572) {
                                    votes[47] = 3;
                                } else {
                                    votes[47] = 3;
                                }
                            } else {
                                votes[47] = 3;
                            }
                        }
                    } else {
                        votes[47] = 2;
                    }
                } else {
                    if (rr_std <= 8.847529888153076) {
                        if (rr_median <= 74.5) {
                            if (diastolic_time <= 60.5) {
                                votes[47] = 0;
                            } else {
                                if (num_valleys <= 88.5) {
                                    votes[47] = 2;
                                } else {
                                    votes[47] = 0;
                                }
                            }
                        } else {
                            votes[47] = 5;
                        }
                    } else {
                        if (rr_std <= 47.64307403564453) {
                            if (rr_median <= 57.25) {
                                votes[47] = 0;
                            } else {
                                if (num_valleys <= 90.5) {
                                    if (num_peaks <= 88.5) {
                                        votes[47] = 0;
                                    } else {
                                        votes[47] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 67.5) {
                                        votes[47] = 0;
                                    } else {
                                        votes[47] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[47] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 56.53682518005371) {
            if (num_peaks <= 50.5) {
                if (num_valleys <= 89.5) {
                    votes[47] = 1;
                } else {
                    votes[47] = 5;
                }
            } else {
                if (rr_std <= 0.8920692205429077) {
                    votes[47] = 1;
                } else {
                    if (num_valleys <= 93.0) {
                        if (rr_std <= 30.487016677856445) {
                            if (rr_std <= 2.253662586212158) {
                                votes[47] = 1;
                            } else {
                                votes[47] = 1;
                            }
                        } else {
                            votes[47] = 1;
                        }
                    } else {
                        votes[47] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 82.5) {
                votes[47] = 1;
            } else {
                votes[47] = 0;
            }
        }
    }
// Decision rules for tree 48
    if (rr_median <= 105.75) {
        if (num_valleys <= 84.5) {
            if (num_peaks <= 63.5) {
                if (rr_median <= 66.0) {
                    if (diastolic_time <= 62.75) {
                        if (num_peaks <= 45.0) {
                            votes[48] = 4;
                        } else {
                            votes[48] = 3;
                        }
                    } else {
                        votes[48] = 5;
                    }
                } else {
                    if (rr_std <= 0.7192845046520233) {
                        if (rr_median <= 71.0) {
                            if (rr_std <= 0.5252767652273178) {
                                votes[48] = 2;
                            } else {
                                votes[48] = 2;
                            }
                        } else {
                            if (num_peaks <= 58.0) {
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
                if (rr_std <= 9.240886211395264) {
                    if (rr_std <= 0.583409309387207) {
                        if (rr_median <= 73.0) {
                            if (rr_median <= 33.5) {
                                votes[48] = 2;
                            } else {
                                votes[48] = 2;
                            }
                        } else {
                            votes[48] = 5;
                        }
                    } else {
                        if (num_peaks <= 80.5) {
                            if (rr_std <= 0.7985606789588928) {
                                votes[48] = 5;
                            } else {
                                votes[48] = 3;
                            }
                        } else {
                            if (rr_median <= 77.0) {
                                votes[48] = 5;
                            } else {
                                votes[48] = 3;
                            }
                        }
                    }
                } else {
                    votes[48] = 1;
                }
            }
        } else {
            if (num_peaks <= 73.5) {
                if (diastolic_time <= 76.5) {
                    if (rr_median <= 40.75) {
                        if (diastolic_time <= 54.0) {
                            if (diastolic_time <= 37.5) {
                                if (diastolic_time <= 10.0) {
                                    votes[48] = 4;
                                } else {
                                    if (diastolic_time <= 35.5) {
                                        votes[48] = 4;
                                    } else {
                                        votes[48] = 4;
                                    }
                                }
                            } else {
                                if (num_valleys <= 87.5) {
                                    votes[48] = 5;
                                } else {
                                    if (diastolic_time <= 39.75) {
                                        votes[48] = 4;
                                    } else {
                                        votes[48] = 4;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 63.0) {
                                if (num_valleys <= 90.5) {
                                    if (diastolic_time <= 57.5) {
                                        votes[48] = 2;
                                    } else {
                                        votes[48] = 2;
                                    }
                                } else {
                                    votes[48] = 2;
                                }
                            } else {
                                if (diastolic_time <= 69.5) {
                                    votes[48] = 0;
                                } else {
                                    votes[48] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 65.75) {
                            if (diastolic_time <= 54.0) {
                                if (num_peaks <= 58.5) {
                                    votes[48] = 3;
                                } else {
                                    if (num_peaks <= 62.5) {
                                        votes[48] = 1;
                                    } else {
                                        votes[48] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 10.31530237197876) {
                                    votes[48] = 2;
                                } else {
                                    votes[48] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 0.5664172768592834) {
                                votes[48] = 2;
                            } else {
                                if (rr_std <= 9.058522701263428) {
                                    if (rr_std <= 1.0796633958816528) {
                                        votes[48] = 5;
                                    } else {
                                        if (rr_median <= 77.75) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 64.75) {
                                        if (rr_std <= 15.542180061340332) {
                                            votes[48] = 0;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 20.401320457458496) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.388028144836426) {
                        if (diastolic_time <= 235.5) {
                            if (diastolic_time <= 110.5) {
                                if (num_peaks <= 53.0) {
                                    if (diastolic_time <= 91.25) {
                                        votes[48] = 1;
                                    } else {
                                        votes[48] = 5;
                                    }
                                } else {
                                    if (rr_median <= 91.5) {
                                        votes[48] = 5;
                                    } else {
                                        votes[48] = 5;
                                    }
                                }
                            } else {
                                votes[48] = 1;
                            }
                        } else {
                            votes[48] = 4;
                        }
                    } else {
                        if (diastolic_time <= 101.75) {
                            if (rr_std <= 29.90772247314453) {
                                if (rr_median <= 82.0) {
                                    if (rr_median <= 74.5) {
                                        votes[48] = 4;
                                    } else {
                                        votes[48] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 87.0) {
                                        votes[48] = 0;
                                    } else {
                                        votes[48] = 4;
                                    }
                                }
                            } else {
                                votes[48] = 4;
                            }
                        } else {
                            votes[48] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 54.75) {
                    if (rr_median <= 78.0) {
                        if (num_peaks <= 76.5) {
                            votes[48] = 0;
                        } else {
                            if (rr_std <= 11.735752582550049) {
                                if (num_peaks <= 86.5) {
                                    if (diastolic_time <= 41.25) {
                                        votes[48] = 3;
                                    } else {
                                        votes[48] = 3;
                                    }
                                } else {
                                    if (rr_median <= 54.0) {
                                        votes[48] = 0;
                                    } else {
                                        votes[48] = 0;
                                    }
                                }
                            } else {
                                votes[48] = 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 83.0) {
                            votes[48] = 5;
                        } else {
                            if (rr_median <= 90.5) {
                                votes[48] = 3;
                            } else {
                                votes[48] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 84.5) {
                        if (num_valleys <= 88.5) {
                            if (rr_std <= 22.6520037651062) {
                                if (rr_std <= 1.042243778705597) {
                                    votes[48] = 3;
                                } else {
                                    votes[48] = 5;
                                }
                            } else {
                                votes[48] = 5;
                            }
                        } else {
                            if (rr_std <= 21.830957412719727) {
                                if (num_valleys <= 91.5) {
                                    if (diastolic_time <= 89.0) {
                                        if (rr_std <= 5.984555006027222) {
                                            votes[48] = 0;
                                        } else {
                                            votes[48] = 0;
                                        }
                                    } else {
                                        votes[48] = 5;
                                    }
                                } else {
                                    votes[48] = 3;
                                }
                            } else {
                                votes[48] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 9.296514511108398) {
                            if (rr_std <= 7.392052888870239) {
                                if (num_peaks <= 89.5) {
                                    if (rr_median <= 30.5) {
                                        votes[48] = 0;
                                    } else {
                                        votes[48] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 71.0) {
                                        votes[48] = 2;
                                    } else {
                                        votes[48] = 2;
                                    }
                                }
                            } else {
                                votes[48] = 5;
                            }
                        } else {
                            if (num_peaks <= 88.5) {
                                if (rr_std <= 17.49994659423828) {
                                    votes[48] = 0;
                                } else {
                                    votes[48] = 4;
                                }
                            } else {
                                if (rr_median <= 96.5) {
                                    if (num_peaks <= 89.5) {
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
    } else {
        if (num_valleys <= 91.5) {
            if (rr_std <= 72.50964736938477) {
                if (rr_median <= 134.25) {
                    if (num_valleys <= 90.5) {
                        if (num_peaks <= 90.5) {
                            if (num_peaks <= 52.0) {
                                if (rr_std <= 9.557718276977539) {
                                    if (rr_median <= 121.5) {
                                        votes[48] = 1;
                                    } else {
                                        votes[48] = 2;
                                    }
                                } else {
                                    votes[48] = 1;
                                }
                            } else {
                                if (diastolic_time <= 62.0) {
                                    votes[48] = 5;
                                } else {
                                    if (num_peaks <= 71.5) {
                                        votes[48] = 1;
                                    } else {
                                        if (num_peaks <= 81.5) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[48] = 0;
                        }
                    } else {
                        votes[48] = 4;
                    }
                } else {
                    if (num_peaks <= 85.0) {
                        if (rr_std <= 2.0801234245300293) {
                            votes[48] = 1;
                        } else {
                            votes[48] = 1;
                        }
                    } else {
                        votes[48] = 0;
                    }
                }
            } else {
                votes[48] = 3;
            }
        } else {
            if (diastolic_time <= 104.25) {
                if (rr_median <= 157.0) {
                    if (rr_std <= 33.04390525817871) {
                        votes[48] = 5;
                    } else {
                        votes[48] = 4;
                    }
                } else {
                    if (diastolic_time <= 48.75) {
                        votes[48] = 1;
                    } else {
                        if (rr_median <= 193.75) {
                            votes[48] = 0;
                        } else {
                            votes[48] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 117.5) {
                    votes[48] = 2;
                } else {
                    votes[48] = 2;
                }
            }
        }
    }
// Decision rules for tree 49
    if (num_peaks <= 77.5) {
        if (num_valleys <= 84.5) {
            if (rr_median <= 64.0) {
                if (diastolic_time <= 66.5) {
                    if (num_peaks <= 55.5) {
                        votes[49] = 4;
                    } else {
                        votes[49] = 3;
                    }
                } else {
                    votes[49] = 5;
                }
            } else {
                if (rr_median <= 75.5) {
                    if (rr_std <= 0.7192845046520233) {
                        if (num_peaks <= 58.0) {
                            votes[49] = 2;
                        } else {
                            if (rr_std <= 0.545406848192215) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 2;
                            }
                        }
                    } else {
                        votes[49] = 5;
                    }
                } else {
                    votes[49] = 1;
                }
            }
        } else {
            if (rr_median <= 126.5) {
                if (diastolic_time <= 108.75) {
                    if (rr_std <= 33.59971809387207) {
                        if (diastolic_time <= 10.0) {
                            if (num_peaks <= 44.5) {
                                votes[49] = 4;
                            } else {
                                votes[49] = 4;
                            }
                        } else {
                            if (diastolic_time <= 83.75) {
                                if (num_peaks <= 24.0) {
                                    votes[49] = 4;
                                } else {
                                    if (rr_std <= 9.002352714538574) {
                                        if (diastolic_time <= 55.25) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 2;
                                        }
                                    } else {
                                        if (diastolic_time <= 70.5) {
                                            votes[49] = 0;
                                        } else {
                                            votes[49] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 3.5854196548461914) {
                                    if (diastolic_time <= 101.25) {
                                        if (num_peaks <= 52.0) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    } else {
                                        votes[49] = 5;
                                    }
                                } else {
                                    if (rr_median <= 110.5) {
                                        if (rr_median <= 90.5) {
                                            votes[49] = 4;
                                        } else {
                                            votes[49] = 1;
                                        }
                                    } else {
                                        votes[49] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 56.5) {
                            votes[49] = 4;
                        } else {
                            if (diastolic_time <= 85.5) {
                                if (diastolic_time <= 48.0) {
                                    votes[49] = 1;
                                } else {
                                    votes[49] = 5;
                                }
                            } else {
                                votes[49] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 327.0) {
                        if (rr_median <= 118.25) {
                            if (num_peaks <= 55.0) {
                                votes[49] = 1;
                            } else {
                                votes[49] = 1;
                            }
                        } else {
                            votes[49] = 2;
                        }
                    } else {
                        votes[49] = 4;
                    }
                }
            } else {
                if (num_valleys <= 94.5) {
                    if (rr_std <= 51.943071365356445) {
                        if (rr_median <= 259.25) {
                            if (rr_median <= 134.25) {
                                votes[49] = 1;
                            } else {
                                votes[49] = 1;
                            }
                        } else {
                            votes[49] = 2;
                        }
                    } else {
                        votes[49] = 5;
                    }
                } else {
                    votes[49] = 4;
                }
            }
        }
    } else {
        if (num_valleys <= 86.5) {
            if (rr_median <= 98.5) {
                if (diastolic_time <= 83.0) {
                    if (diastolic_time <= 41.0) {
                        votes[49] = 5;
                    } else {
                        if (diastolic_time <= 72.0) {
                            if (diastolic_time <= 54.75) {
                                votes[49] = 3;
                            } else {
                                votes[49] = 3;
                            }
                        } else {
                            votes[49] = 5;
                        }
                    }
                } else {
                    votes[49] = 1;
                }
            } else {
                if (num_peaks <= 90.5) {
                    if (rr_std <= 13.66476845741272) {
                        votes[49] = 1;
                    } else {
                        votes[49] = 1;
                    }
                } else {
                    votes[49] = 0;
                }
            }
        } else {
            if (num_peaks <= 85.5) {
                if (rr_median <= 21.0) {
                    if (num_peaks <= 81.5) {
                        votes[49] = 0;
                    } else {
                        votes[49] = 3;
                    }
                } else {
                    if (rr_median <= 63.5) {
                        if (rr_std <= 14.893295288085938) {
                            votes[49] = 3;
                        } else {
                            votes[49] = 3;
                        }
                    } else {
                        if (diastolic_time <= 67.25) {
                            if (rr_median <= 147.0) {
                                if (rr_median <= 97.0) {
                                    votes[49] = 5;
                                } else {
                                    votes[49] = 5;
                                }
                            } else {
                                votes[49] = 1;
                            }
                        } else {
                            if (rr_median <= 73.0) {
                                votes[49] = 3;
                            } else {
                                if (rr_median <= 102.5) {
                                    if (rr_std <= 5.997331976890564) {
                                        votes[49] = 3;
                                    } else {
                                        votes[49] = 0;
                                    }
                                } else {
                                    votes[49] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 52.75) {
                    if (rr_median <= 91.25) {
                        if (diastolic_time <= 41.5) {
                            votes[49] = 2;
                        } else {
                            if (rr_std <= 9.234754085540771) {
                                votes[49] = 3;
                            } else {
                                votes[49] = 0;
                            }
                        }
                    } else {
                        votes[49] = 1;
                    }
                } else {
                    if (rr_std <= 8.847529888153076) {
                        if (rr_median <= 30.5) {
                            if (diastolic_time <= 65.0) {
                                votes[49] = 0;
                            } else {
                                votes[49] = 0;
                            }
                        } else {
                            if (rr_median <= 100.0) {
                                if (diastolic_time <= 69.5) {
                                    votes[49] = 2;
                                } else {
                                    votes[49] = 5;
                                }
                            } else {
                                votes[49] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 29.730782508850098) {
                            votes[49] = 0;
                        } else {
                            if (rr_std <= 35.183067321777344) {
                                votes[49] = 0;
                            } else {
                                if (rr_std <= 77.95402908325195) {
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
