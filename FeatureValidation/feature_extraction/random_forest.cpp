#include <vector>
using namespace std;

int random_forest_predict(float diastolic_time, float rr_std, float num_peaks, float rr_median, float num_valleys) {
    int votes[50] = {0};
// Decision rules for tree 0
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 86.25) {
            if (rr_std <= 15.967272281646729) {
                if (rr_median <= 68.75) {
                    if (num_peaks <= 134.5) {
                        if (diastolic_time <= 0.04982705041766167) {
                            votes[0] = 4;
                        } else {
                            if (diastolic_time <= 0.07075580582022667) {
                                votes[0] = 1;
                            } else {
                                if (num_peaks <= 128.5) {
                                    if (diastolic_time <= 0.16897402703762054) {
                                        if (diastolic_time <= 0.1428452953696251) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 3;
                                        }
                                    } else {
                                        votes[0] = 1;
                                    }
                                } else {
                                    votes[0] = 3;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 71.0) {
                            votes[0] = 3;
                        } else {
                            votes[0] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.15220587700605392) {
                        if (rr_std <= 12.72519063949585) {
                            if (num_valleys <= 59.0) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 5;
                            }
                        } else {
                            votes[0] = 3;
                        }
                    } else {
                        votes[0] = 3;
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (num_valleys <= 72.5) {
                        if (diastolic_time <= 0.0433704387396574) {
                            votes[0] = 4;
                        } else {
                            if (diastolic_time <= 0.10220186412334442) {
                                votes[0] = 3;
                            } else {
                                if (num_valleys <= 66.0) {
                                    if (rr_median <= 71.75) {
                                        votes[0] = 4;
                                    } else {
                                        votes[0] = 4;
                                    }
                                } else {
                                    if (rr_std <= 20.23473834991455) {
                                        votes[0] = 4;
                                    } else {
                                        if (diastolic_time <= 0.11999798193573952) {
                                            votes[0] = 4;
                                        } else {
                                            votes[0] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.1378421038389206) {
                            if (diastolic_time <= 0.09821410104632378) {
                                votes[0] = 3;
                            } else {
                                votes[0] = 5;
                            }
                        } else {
                            votes[0] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 33.164541244506836) {
                        if (rr_median <= 73.0) {
                            if (rr_median <= 63.0) {
                                votes[0] = 3;
                            } else {
                                votes[0] = 3;
                            }
                        } else {
                            votes[0] = 5;
                        }
                    } else {
                        votes[0] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 102.5) {
                if (diastolic_time <= 0.016639344394207) {
                    votes[0] = 0;
                } else {
                    if (rr_median <= 90.5) {
                        if (diastolic_time <= 0.15550000220537186) {
                            if (rr_median <= 88.25) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 3;
                            }
                        } else {
                            votes[0] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.12937965989112854) {
                            if (diastolic_time <= 0.07681074365973473) {
                                if (num_peaks <= 123.5) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 5;
                                }
                            } else {
                                if (num_peaks <= 131.0) {
                                    votes[0] = 3;
                                } else {
                                    votes[0] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 6.370946645736694) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_valleys <= 59.5) {
                    if (num_peaks <= 86.5) {
                        votes[0] = 1;
                    } else {
                        if (rr_std <= 47.17119789123535) {
                            votes[0] = 4;
                        } else {
                            votes[0] = 4;
                        }
                    }
                } else {
                    if (rr_median <= 194.5) {
                        if (diastolic_time <= 0.09277376160025597) {
                            if (rr_std <= 3.1194859743118286) {
                                votes[0] = 1;
                            } else {
                                if (rr_median <= 111.75) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 4.090392708778381) {
                                votes[0] = 1;
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
    } else {
        if (num_peaks <= 123.5) {
            if (rr_median <= 74.25) {
                if (num_peaks <= 105.5) {
                    if (rr_median <= 69.5) {
                        if (diastolic_time <= 0.38250717520713806) {
                            if (rr_median <= 64.0) {
                                votes[0] = 2;
                            } else {
                                if (diastolic_time <= 0.28859828412532806) {
                                    votes[0] = 2;
                                } else {
                                    votes[0] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 17.923524856567383) {
                                votes[0] = 5;
                            } else {
                                votes[0] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 5.543994575738907) {
                            votes[0] = 2;
                        } else {
                            if (num_valleys <= 45.5) {
                                votes[0] = 2;
                            } else {
                                votes[0] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.895294666290283) {
                        if (rr_std <= 0.6533262431621552) {
                            votes[0] = 2;
                        } else {
                            votes[0] = 5;
                        }
                    } else {
                        if (rr_median <= 65.0) {
                            votes[0] = 3;
                        } else {
                            votes[0] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8063111007213593) {
                    if (rr_std <= 11.572530746459961) {
                        if (num_valleys <= 64.5) {
                            if (num_peaks <= 101.5) {
                                if (rr_std <= 0.6405124962329865) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 1;
                                }
                            } else {
                                votes[0] = 2;
                            }
                        } else {
                            votes[0] = 5;
                        }
                    } else {
                        if (num_peaks <= 101.0) {
                            if (diastolic_time <= 0.4613676518201828) {
                                if (rr_median <= 78.25) {
                                    votes[0] = 2;
                                } else {
                                    if (diastolic_time <= 0.27169762551784515) {
                                        votes[0] = 2;
                                    } else {
                                        if (rr_median <= 88.5) {
                                            votes[0] = 4;
                                        } else {
                                            votes[0] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[0] = 1;
                            }
                        } else {
                            if (rr_median <= 84.25) {
                                votes[0] = 0;
                            } else {
                                votes[0] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 82.5) {
                        votes[0] = 1;
                    } else {
                        votes[0] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 6.212265491485596) {
                if (num_valleys <= 80.5) {
                    votes[0] = 5;
                } else {
                    votes[0] = 2;
                }
            } else {
                if (rr_median <= 52.25) {
                    votes[0] = 0;
                } else {
                    if (diastolic_time <= 0.26275861263275146) {
                        votes[0] = 0;
                    } else {
                        if (num_valleys <= 70.5) {
                            votes[0] = 0;
                        } else {
                            if (rr_std <= 75.2062873840332) {
                                if (num_valleys <= 77.5) {
                                    if (num_peaks <= 142.5) {
                                        if (rr_std <= 25.6747465133667) {
                                            votes[0] = 0;
                                        } else {
                                            votes[0] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 28.74302577972412) {
                                            votes[0] = 0;
                                        } else {
                                            votes[0] = 0;
                                        }
                                    }
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
// Decision rules for tree 1
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 99.25) {
            if (rr_std <= 16.006247520446777) {
                if (rr_median <= 69.5) {
                    if (rr_std <= 9.712274551391602) {
                        if (num_peaks <= 109.5) {
                            votes[1] = 3;
                        } else {
                            if (rr_std <= 1.2250682711601257) {
                                votes[1] = 3;
                            } else {
                                votes[1] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.041125111281871796) {
                            votes[1] = 4;
                        } else {
                            if (rr_std <= 10.75985860824585) {
                                if (num_peaks <= 131.0) {
                                    votes[1] = 1;
                                } else {
                                    votes[1] = 3;
                                }
                            } else {
                                if (num_peaks <= 131.5) {
                                    votes[1] = 3;
                                } else {
                                    if (diastolic_time <= 0.11782040074467659) {
                                        votes[1] = 3;
                                    } else {
                                        votes[1] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 142.5) {
                        if (diastolic_time <= 0.12970967590808868) {
                            if (diastolic_time <= 0.11579376086592674) {
                                if (rr_std <= 0.7490730583667755) {
                                    votes[1] = 3;
                                } else {
                                    if (num_peaks <= 108.5) {
                                        votes[1] = 5;
                                    } else {
                                        if (rr_median <= 79.25) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[1] = 1;
                            }
                        } else {
                            if (rr_median <= 90.0) {
                                if (rr_median <= 85.5) {
                                    if (diastolic_time <= 0.15283332765102386) {
                                        votes[1] = 5;
                                    } else {
                                        votes[1] = 3;
                                    }
                                } else {
                                    votes[1] = 1;
                                }
                            } else {
                                votes[1] = 5;
                            }
                        }
                    } else {
                        votes[1] = 0;
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (rr_median <= 88.0) {
                        if (rr_std <= 54.46346092224121) {
                            if (num_valleys <= 70.5) {
                                if (rr_median <= 74.25) {
                                    if (diastolic_time <= 0.1783255785703659) {
                                        votes[1] = 4;
                                    } else {
                                        votes[1] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 0.14971555024385452) {
                                        votes[1] = 4;
                                    } else {
                                        if (num_peaks <= 122.0) {
                                            votes[1] = 4;
                                        } else {
                                            votes[1] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.12312282994389534) {
                                    if (rr_std <= 24.952019691467285) {
                                        votes[1] = 4;
                                    } else {
                                        votes[1] = 5;
                                    }
                                } else {
                                    if (rr_std <= 26.574122428894043) {
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
                        if (diastolic_time <= 0.1368035078048706) {
                            if (diastolic_time <= 0.07268283143639565) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 3;
                            }
                        } else {
                            votes[1] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 25.733302116394043) {
                        if (diastolic_time <= 0.10931947827339172) {
                            votes[1] = 3;
                        } else {
                            votes[1] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.08476190268993378) {
                            votes[1] = 1;
                        } else {
                            if (rr_median <= 77.0) {
                                votes[1] = 4;
                            } else {
                                votes[1] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 114.5) {
                if (num_valleys <= 62.5) {
                    if (num_valleys <= 49.5) {
                        if (num_valleys <= 46.5) {
                            votes[1] = 4;
                        } else {
                            votes[1] = 1;
                        }
                    } else {
                        votes[1] = 4;
                    }
                } else {
                    if (diastolic_time <= 0.054581938311457634) {
                        votes[1] = 1;
                    } else {
                        votes[1] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.028688150458037853) {
                    votes[1] = 1;
                } else {
                    if (num_valleys <= 81.5) {
                        if (rr_std <= 55.85837936401367) {
                            if (diastolic_time <= 0.09784131869673729) {
                                if (diastolic_time <= 0.08385755866765976) {
                                    if (rr_std <= 3.0510069131851196) {
                                        votes[1] = 1;
                                    } else {
                                        votes[1] = 1;
                                    }
                                } else {
                                    votes[1] = 1;
                                }
                            } else {
                                votes[1] = 1;
                            }
                        } else {
                            votes[1] = 1;
                        }
                    } else {
                        votes[1] = 1;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 74.25) {
                if (num_peaks <= 90.5) {
                    if (diastolic_time <= 0.31576666235923767) {
                        votes[1] = 2;
                    } else {
                        if (diastolic_time <= 0.572615385055542) {
                            votes[1] = 2;
                        } else {
                            votes[1] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 0.6533262431621552) {
                        if (num_peaks <= 101.5) {
                            votes[1] = 3;
                        } else {
                            if (num_peaks <= 109.0) {
                                votes[1] = 2;
                            } else {
                                votes[1] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 13.463215351104736) {
                            votes[1] = 5;
                        } else {
                            if (rr_median <= 65.25) {
                                if (diastolic_time <= 0.3355964869260788) {
                                    votes[1] = 3;
                                } else {
                                    votes[1] = 1;
                                }
                            } else {
                                if (rr_std <= 18.100350379943848) {
                                    votes[1] = 0;
                                } else {
                                    votes[1] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6142461597919464) {
                    if (rr_std <= 12.73497724533081) {
                        if (rr_median <= 86.5) {
                            votes[1] = 5;
                        } else {
                            votes[1] = 5;
                        }
                    } else {
                        if (num_peaks <= 88.5) {
                            if (num_valleys <= 44.5) {
                                votes[1] = 5;
                            } else {
                                if (diastolic_time <= 0.32107333838939667) {
                                    votes[1] = 2;
                                } else {
                                    if (rr_median <= 89.5) {
                                        votes[1] = 4;
                                    } else {
                                        votes[1] = 4;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 32.50613784790039) {
                                votes[1] = 2;
                            } else {
                                votes[1] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 1.9654526114463806) {
                        votes[1] = 5;
                    } else {
                        if (rr_std <= 36.49445152282715) {
                            if (rr_median <= 100.25) {
                                votes[1] = 2;
                            } else {
                                votes[1] = 1;
                            }
                        } else {
                            votes[1] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 7.789663076400757) {
                if (num_peaks <= 125.0) {
                    votes[1] = 5;
                } else {
                    if (diastolic_time <= 0.2819974422454834) {
                        votes[1] = 5;
                    } else {
                        if (num_valleys <= 77.5) {
                            votes[1] = 3;
                        } else {
                            votes[1] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.7667555510997772) {
                    if (num_peaks <= 124.5) {
                        if (num_peaks <= 120.5) {
                            votes[1] = 0;
                        } else {
                            votes[1] = 5;
                        }
                    } else {
                        if (rr_median <= 55.75) {
                            if (rr_std <= 12.149984359741211) {
                                votes[1] = 3;
                            } else {
                                votes[1] = 0;
                            }
                        } else {
                            if (diastolic_time <= 0.3249802440404892) {
                                if (num_peaks <= 142.5) {
                                    votes[1] = 0;
                                } else {
                                    votes[1] = 2;
                                }
                            } else {
                                if (num_peaks <= 132.5) {
                                    votes[1] = 0;
                                } else {
                                    if (rr_median <= 84.25) {
                                        votes[1] = 0;
                                    } else {
                                        if (rr_median <= 86.25) {
                                            votes[1] = 0;
                                        } else {
                                            votes[1] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    votes[1] = 2;
                }
            }
        }
    }
// Decision rules for tree 2
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 68.5) {
            if (num_peaks <= 130.5) {
                if (rr_std <= 14.249356746673584) {
                    if (num_peaks <= 119.5) {
                        if (num_peaks <= 100.5) {
                            votes[2] = 3;
                        } else {
                            votes[2] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.0995987094938755) {
                            votes[2] = 3;
                        } else {
                            votes[2] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.04353921487927437) {
                        votes[2] = 4;
                    } else {
                        if (diastolic_time <= 0.13974253088235855) {
                            if (num_valleys <= 72.5) {
                                if (rr_median <= 58.25) {
                                    votes[2] = 3;
                                } else {
                                    votes[2] = 4;
                                }
                            } else {
                                votes[2] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.17156464606523514) {
                                votes[2] = 4;
                            } else {
                                votes[2] = 4;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.526742935180664) {
                    votes[2] = 3;
                } else {
                    if (rr_median <= 53.5) {
                        if (rr_median <= 48.5) {
                            votes[2] = 3;
                        } else {
                            votes[2] = 3;
                        }
                    } else {
                        if (rr_median <= 55.5) {
                            votes[2] = 1;
                        } else {
                            if (num_peaks <= 135.5) {
                                votes[2] = 3;
                            } else {
                                votes[2] = 3;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.07656653225421906) {
                if (diastolic_time <= 0.03483176417648792) {
                    if (num_valleys <= 68.5) {
                        if (num_valleys <= 54.5) {
                            votes[2] = 4;
                        } else {
                            if (num_valleys <= 62.5) {
                                votes[2] = 4;
                            } else {
                                votes[2] = 4;
                            }
                        }
                    } else {
                        if (num_peaks <= 138.5) {
                            votes[2] = 1;
                        } else {
                            votes[2] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 0.97945836186409) {
                        votes[2] = 5;
                    } else {
                        if (rr_median <= 82.75) {
                            votes[2] = 3;
                        } else {
                            if (num_peaks <= 145.5) {
                                if (num_valleys <= 66.0) {
                                    votes[2] = 1;
                                } else {
                                    if (diastolic_time <= 0.06851428747177124) {
                                        votes[2] = 1;
                                    } else {
                                        votes[2] = 1;
                                    }
                                }
                            } else {
                                votes[2] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 16.15445613861084) {
                    if (rr_median <= 101.0) {
                        if (rr_median <= 95.5) {
                            if (num_valleys <= 63.5) {
                                if (diastolic_time <= 0.14981481432914734) {
                                    votes[2] = 1;
                                } else {
                                    votes[2] = 5;
                                }
                            } else {
                                if (num_peaks <= 126.5) {
                                    if (rr_std <= 0.9802728891372681) {
                                        votes[2] = 5;
                                    } else {
                                        votes[2] = 5;
                                    }
                                } else {
                                    if (rr_std <= 8.72032880783081) {
                                        votes[2] = 3;
                                    } else {
                                        if (num_peaks <= 136.5) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[2] = 3;
                        }
                    } else {
                        if (rr_std <= 4.928553104400635) {
                            votes[2] = 1;
                        } else {
                            votes[2] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.12940926104784012) {
                        if (rr_median <= 129.0) {
                            if (diastolic_time <= 0.10326851531863213) {
                                if (diastolic_time <= 0.08592132478952408) {
                                    votes[2] = 5;
                                } else {
                                    votes[2] = 5;
                                }
                            } else {
                                votes[2] = 5;
                            }
                        } else {
                            votes[2] = 4;
                        }
                    } else {
                        if (num_peaks <= 133.5) {
                            if (num_peaks <= 116.5) {
                                votes[2] = 4;
                            } else {
                                if (num_peaks <= 125.5) {
                                    votes[2] = 4;
                                } else {
                                    votes[2] = 4;
                                }
                            }
                        } else {
                            votes[2] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.6426666676998138) {
                if (rr_std <= 0.6796177625656128) {
                    if (rr_median <= 69.5) {
                        if (diastolic_time <= 0.25194166600704193) {
                            votes[2] = 2;
                        } else {
                            votes[2] = 3;
                        }
                    } else {
                        if (rr_median <= 73.5) {
                            votes[2] = 2;
                        } else {
                            votes[2] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 14.375516891479492) {
                        if (rr_std <= 11.769414901733398) {
                            if (rr_std <= 1.0798233449459076) {
                                if (rr_std <= 0.782414048910141) {
                                    votes[2] = 5;
                                } else {
                                    votes[2] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.3404333293437958) {
                                    votes[2] = 5;
                                } else {
                                    votes[2] = 5;
                                }
                            }
                        } else {
                            votes[2] = 0;
                        }
                    } else {
                        if (rr_std <= 31.09544563293457) {
                            if (rr_std <= 16.58848762512207) {
                                votes[2] = 0;
                            } else {
                                if (rr_median <= 92.0) {
                                    if (num_valleys <= 52.5) {
                                        if (num_peaks <= 80.5) {
                                            votes[2] = 2;
                                        } else {
                                            votes[2] = 2;
                                        }
                                    } else {
                                        votes[2] = 2;
                                    }
                                } else {
                                    votes[2] = 4;
                                }
                            }
                        } else {
                            if (num_peaks <= 88.5) {
                                if (rr_median <= 98.25) {
                                    votes[2] = 4;
                                } else {
                                    votes[2] = 4;
                                }
                            } else {
                                if (rr_median <= 74.5) {
                                    votes[2] = 3;
                                } else {
                                    votes[2] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.918952226638794) {
                    votes[2] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[2] = 1;
                    } else {
                        votes[2] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.493313550949097) {
                if (rr_std <= 2.130906343460083) {
                    votes[2] = 3;
                } else {
                    votes[2] = 5;
                }
            } else {
                if (diastolic_time <= 0.8386666774749756) {
                    if (rr_median <= 53.25) {
                        votes[2] = 0;
                    } else {
                        if (num_peaks <= 124.5) {
                            if (diastolic_time <= 0.43380555510520935) {
                                votes[2] = 0;
                            } else {
                                votes[2] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.2967362552881241) {
                                votes[2] = 0;
                            } else {
                                if (rr_std <= 8.946646213531494) {
                                    votes[2] = 0;
                                } else {
                                    if (diastolic_time <= 0.627787858247757) {
                                        if (num_valleys <= 77.5) {
                                            votes[2] = 0;
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
                    votes[2] = 1;
                }
            }
        }
    }
// Decision rules for tree 3
    if (diastolic_time <= 0.27618804574012756) {
        if (rr_std <= 15.9564790725708) {
            if (rr_median <= 81.5) {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.22144444286823273) {
                        if (rr_median <= 54.25) {
                            if (diastolic_time <= 0.15659704059362411) {
                                if (rr_median <= 48.0) {
                                    votes[3] = 4;
                                } else {
                                    votes[3] = 3;
                                }
                            } else {
                                votes[3] = 1;
                            }
                        } else {
                            if (num_peaks <= 114.0) {
                                if (num_valleys <= 60.5) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 3;
                                }
                            } else {
                                if (rr_std <= 13.146369934082031) {
                                    if (rr_median <= 68.75) {
                                        votes[3] = 3;
                                    } else {
                                        if (num_peaks <= 126.5) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 5;
                                        }
                                    }
                                } else {
                                    votes[3] = 3;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 0.6802743673324585) {
                            if (diastolic_time <= 0.2364264726638794) {
                                votes[3] = 2;
                            } else {
                                votes[3] = 2;
                            }
                        } else {
                            votes[3] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 10.199249267578125) {
                        if (num_valleys <= 82.0) {
                            votes[3] = 3;
                        } else {
                            votes[3] = 3;
                        }
                    } else {
                        if (num_peaks <= 141.0) {
                            votes[3] = 3;
                        } else {
                            votes[3] = 3;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.011158470064401627) {
                    votes[3] = 0;
                } else {
                    if (rr_median <= 99.25) {
                        if (num_valleys <= 64.5) {
                            if (rr_median <= 88.25) {
                                votes[3] = 1;
                            } else {
                                votes[3] = 1;
                            }
                        } else {
                            if (num_peaks <= 128.5) {
                                if (num_valleys <= 71.5) {
                                    votes[3] = 5;
                                } else {
                                    if (num_valleys <= 75.5) {
                                        votes[3] = 5;
                                    } else {
                                        votes[3] = 5;
                                    }
                                }
                            } else {
                                votes[3] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 0.8548933863639832) {
                            votes[3] = 4;
                        } else {
                            if (rr_median <= 136.0) {
                                if (rr_median <= 113.5) {
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
            }
        } else {
            if (num_valleys <= 72.5) {
                if (num_peaks <= 136.5) {
                    if (diastolic_time <= 0.0355516392737627) {
                        if (num_peaks <= 120.5) {
                            votes[3] = 4;
                        } else {
                            votes[3] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.11527971178293228) {
                            if (diastolic_time <= 0.08003240078687668) {
                                if (rr_median <= 84.5) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 1;
                                }
                            } else {
                                if (num_peaks <= 124.5) {
                                    if (rr_std <= 40.02992630004883) {
                                        votes[3] = 4;
                                    } else {
                                        votes[3] = 4;
                                    }
                                } else {
                                    votes[3] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 56.5) {
                                votes[3] = 3;
                            } else {
                                if (rr_std <= 48.8396110534668) {
                                    if (num_peaks <= 133.5) {
                                        if (num_valleys <= 45.5) {
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
                            }
                        }
                    }
                } else {
                    if (rr_median <= 86.0) {
                        votes[3] = 3;
                    } else {
                        votes[3] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.11685507372021675) {
                    if (diastolic_time <= 0.013421053066849709) {
                        votes[3] = 3;
                    } else {
                        if (rr_std <= 32.73895263671875) {
                            if (rr_median <= 91.5) {
                                if (diastolic_time <= 0.08809523656964302) {
                                    votes[3] = 3;
                                } else {
                                    votes[3] = 1;
                                }
                            } else {
                                votes[3] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.06851428747177124) {
                                votes[3] = 1;
                            } else {
                                votes[3] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 133.0) {
                        if (diastolic_time <= 0.14506593346595764) {
                            votes[3] = 5;
                        } else {
                            votes[3] = 4;
                        }
                    } else {
                        votes[3] = 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_time <= 0.6157333254814148) {
                if (rr_median <= 95.5) {
                    if (num_peaks <= 90.5) {
                        if (rr_median <= 74.25) {
                            if (diastolic_time <= 0.5076166689395905) {
                                votes[3] = 2;
                            } else {
                                votes[3] = 2;
                            }
                        } else {
                            if (rr_std <= 26.0638427734375) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 63.0) {
                            votes[3] = 3;
                        } else {
                            if (rr_std <= 0.43653950095176697) {
                                votes[3] = 2;
                            } else {
                                if (rr_std <= 13.801342964172363) {
                                    if (num_peaks <= 106.5) {
                                        if (diastolic_time <= 0.41171929240226746) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 5;
                                        }
                                    } else {
                                        if (num_peaks <= 124.5) {
                                            votes[3] = 2;
                                        } else {
                                            votes[3] = 5;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 108.0) {
                                        votes[3] = 2;
                                    } else {
                                        votes[3] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.3290476053953171) {
                        votes[3] = 5;
                    } else {
                        if (num_peaks <= 82.5) {
                            votes[3] = 4;
                        } else {
                            votes[3] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 9.653970956802368) {
                    votes[3] = 5;
                } else {
                    if (rr_median <= 80.5) {
                        votes[3] = 1;
                    } else {
                        votes[3] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 6.039847135543823) {
                votes[3] = 3;
            } else {
                if (diastolic_time <= 0.8466666638851166) {
                    if (diastolic_time <= 0.31310606002807617) {
                        if (rr_std <= 15.846619606018066) {
                            votes[3] = 0;
                        } else {
                            votes[3] = 5;
                        }
                    } else {
                        if (rr_median <= 52.25) {
                            votes[3] = 0;
                        } else {
                            if (num_peaks <= 124.5) {
                                if (diastolic_time <= 0.4484852999448776) {
                                    votes[3] = 0;
                                } else {
                                    votes[3] = 0;
                                }
                            } else {
                                if (num_valleys <= 71.5) {
                                    votes[3] = 0;
                                } else {
                                    if (num_valleys <= 77.5) {
                                        if (diastolic_time <= 0.4744117707014084) {
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
                } else {
                    votes[3] = 1;
                }
            }
        }
    }
// Decision rules for tree 4
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 85.75) {
            if (rr_std <= 14.180799007415771) {
                if (rr_median <= 72.5) {
                    if (num_peaks <= 129.5) {
                        if (rr_std <= 0.6211358308792114) {
                            if (num_valleys <= 62.5) {
                                if (diastolic_time <= 0.22695424407720566) {
                                    votes[4] = 2;
                                } else {
                                    votes[4] = 2;
                                }
                            } else {
                                votes[4] = 3;
                            }
                        } else {
                            if (rr_median <= 54.75) {
                                if (diastolic_time <= 0.08456484600901604) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 3;
                                }
                            } else {
                                if (num_valleys <= 68.5) {
                                    votes[4] = 3;
                                } else {
                                    votes[4] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 10.06764030456543) {
                            votes[4] = 3;
                        } else {
                            if (rr_median <= 54.5) {
                                votes[4] = 1;
                            } else {
                                votes[4] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 79.5) {
                        votes[4] = 5;
                    } else {
                        votes[4] = 5;
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (diastolic_time <= 0.04353921487927437) {
                        if (rr_std <= 52.625877380371094) {
                            votes[4] = 4;
                        } else {
                            votes[4] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.09131110832095146) {
                            if (num_peaks <= 109.0) {
                                votes[4] = 4;
                            } else {
                                votes[4] = 3;
                            }
                        } else {
                            if (rr_median <= 56.5) {
                                votes[4] = 3;
                            } else {
                                if (rr_median <= 69.75) {
                                    if (rr_std <= 28.695899963378906) {
                                        votes[4] = 4;
                                    } else {
                                        votes[4] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 118.5) {
                                        votes[4] = 5;
                                    } else {
                                        if (rr_median <= 79.0) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.15583999454975128) {
                        if (rr_std <= 26.39880657196045) {
                            if (rr_median <= 67.0) {
                                votes[4] = 3;
                            } else {
                                votes[4] = 5;
                            }
                        } else {
                            if (num_valleys <= 73.5) {
                                votes[4] = 4;
                            } else {
                                votes[4] = 1;
                            }
                        }
                    } else {
                        votes[4] = 4;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.1607535481452942) {
                if (diastolic_time <= 0.011158470064401627) {
                    votes[4] = 0;
                } else {
                    if (num_valleys <= 62.5) {
                        if (rr_median <= 96.25) {
                            votes[4] = 1;
                        } else {
                            if (diastolic_time <= 0.04293741285800934) {
                                votes[4] = 4;
                            } else {
                                if (rr_median <= 137.25) {
                                    votes[4] = 5;
                                } else {
                                    votes[4] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 101.0) {
                            if (num_peaks <= 124.0) {
                                if (rr_median <= 95.25) {
                                    votes[4] = 1;
                                } else {
                                    votes[4] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.11448147520422935) {
                                    votes[4] = 3;
                                } else {
                                    votes[4] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.08774392679333687) {
                                if (rr_std <= 2.7739559412002563) {
                                    votes[4] = 1;
                                } else {
                                    if (rr_median <= 174.5) {
                                        votes[4] = 1;
                                    } else {
                                        votes[4] = 1;
                                    }
                                }
                            } else {
                                if (num_peaks <= 131.5) {
                                    votes[4] = 5;
                                } else {
                                    votes[4] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 129.5) {
                    if (rr_std <= 18.177473068237305) {
                        if (rr_std <= 0.7067402601242065) {
                            votes[4] = 5;
                        } else {
                            votes[4] = 5;
                        }
                    } else {
                        votes[4] = 4;
                    }
                } else {
                    votes[4] = 1;
                }
            }
        }
    } else {
        if (num_valleys <= 70.5) {
            if (diastolic_time <= 0.6471076905727386) {
                if (rr_median <= 75.25) {
                    if (num_peaks <= 90.0) {
                        if (diastolic_time <= 0.5302857160568237) {
                            if (rr_std <= 27.415703773498535) {
                                if (rr_median <= 73.5) {
                                    votes[4] = 2;
                                } else {
                                    votes[4] = 2;
                                }
                            } else {
                                votes[4] = 2;
                            }
                        } else {
                            votes[4] = 5;
                        }
                    } else {
                        if (rr_median <= 63.5) {
                            if (rr_median <= 60.5) {
                                votes[4] = 2;
                            } else {
                                votes[4] = 3;
                            }
                        } else {
                            if (rr_std <= 0.45024123787879944) {
                                votes[4] = 2;
                            } else {
                                if (rr_std <= 9.56583547592163) {
                                    if (rr_std <= 0.698858767747879) {
                                        votes[4] = 5;
                                    } else {
                                        votes[4] = 5;
                                    }
                                } else {
                                    if (num_valleys <= 59.5) {
                                        votes[4] = 2;
                                    } else {
                                        votes[4] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 12.053974628448486) {
                        if (num_peaks <= 114.5) {
                            votes[4] = 5;
                        } else {
                            votes[4] = 5;
                        }
                    } else {
                        if (rr_std <= 43.61960983276367) {
                            if (num_peaks <= 82.5) {
                                if (num_peaks <= 72.5) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.33052173256874084) {
                                    votes[4] = 2;
                                } else {
                                    if (num_peaks <= 92.5) {
                                        votes[4] = 4;
                                    } else {
                                        votes[4] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[4] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 79.5) {
                    votes[4] = 2;
                } else {
                    if (rr_std <= 12.08653736114502) {
                        votes[4] = 5;
                    } else {
                        if (diastolic_time <= 0.7906666696071625) {
                            votes[4] = 1;
                        } else {
                            votes[4] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 5.452739238739014) {
                if (diastolic_time <= 0.5301904678344727) {
                    votes[4] = 3;
                } else {
                    votes[4] = 5;
                }
            } else {
                if (diastolic_time <= 0.8386666774749756) {
                    if (rr_median <= 54.5) {
                        if (rr_std <= 11.219136714935303) {
                            votes[4] = 3;
                        } else {
                            votes[4] = 0;
                        }
                    } else {
                        if (rr_median <= 144.0) {
                            if (rr_std <= 8.86708927154541) {
                                votes[4] = 0;
                            } else {
                                if (num_valleys <= 85.5) {
                                    if (rr_median <= 56.5) {
                                        votes[4] = 0;
                                    } else {
                                        if (num_peaks <= 124.5) {
                                            votes[4] = 0;
                                        } else {
                                            votes[4] = 0;
                                        }
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
                    votes[4] = 1;
                }
            }
        }
    }
// Decision rules for tree 5
    if (diastolic_time <= 0.2494804635643959) {
        if (rr_median <= 76.25) {
            if (num_peaks <= 130.5) {
                if (rr_std <= 12.6700439453125) {
                    if (rr_median <= 47.75) {
                        votes[5] = 4;
                    } else {
                        if (rr_median <= 53.25) {
                            votes[5] = 3;
                        } else {
                            if (diastolic_time <= 0.07884017750620842) {
                                votes[5] = 1;
                            } else {
                                if (num_peaks <= 113.0) {
                                    if (diastolic_time <= 0.20603418350219727) {
                                        votes[5] = 3;
                                    } else {
                                        votes[5] = 2;
                                    }
                                } else {
                                    if (diastolic_time <= 0.18388745188713074) {
                                        votes[5] = 5;
                                    } else {
                                        votes[5] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.04334873892366886) {
                        votes[5] = 4;
                    } else {
                        if (rr_median <= 56.5) {
                            votes[5] = 3;
                        } else {
                            if (diastolic_time <= 0.12230705097317696) {
                                if (diastolic_time <= 0.09425641223788261) {
                                    votes[5] = 3;
                                } else {
                                    votes[5] = 5;
                                }
                            } else {
                                if (rr_median <= 65.5) {
                                    votes[5] = 4;
                                } else {
                                    votes[5] = 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 20.73285961151123) {
                    if (num_peaks <= 132.5) {
                        votes[5] = 5;
                    } else {
                        if (num_peaks <= 146.5) {
                            votes[5] = 3;
                        } else {
                            votes[5] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.1173725500702858) {
                        votes[5] = 1;
                    } else {
                        votes[5] = 3;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.08629557490348816) {
                if (diastolic_time <= 0.03470567613840103) {
                    if (num_peaks <= 107.5) {
                        if (num_valleys <= 53.5) {
                            votes[5] = 4;
                        } else {
                            votes[5] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.013421053066849709) {
                            if (num_valleys <= 77.0) {
                                votes[5] = 3;
                            } else {
                                votes[5] = 0;
                            }
                        } else {
                            votes[5] = 1;
                        }
                    }
                } else {
                    if (rr_median <= 101.0) {
                        if (rr_std <= 38.044015884399414) {
                            if (num_valleys <= 60.5) {
                                votes[5] = 1;
                            } else {
                                if (num_valleys <= 78.5) {
                                    if (rr_median <= 98.25) {
                                        if (rr_median <= 86.25) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    } else {
                                        votes[5] = 5;
                                    }
                                } else {
                                    votes[5] = 3;
                                }
                            }
                        } else {
                            votes[5] = 1;
                        }
                    } else {
                        if (num_valleys <= 62.0) {
                            votes[5] = 1;
                        } else {
                            if (rr_std <= 2.7739559412002563) {
                                votes[5] = 1;
                            } else {
                                if (rr_median <= 112.75) {
                                    votes[5] = 1;
                                } else {
                                    votes[5] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 16.551016807556152) {
                    if (rr_median <= 85.25) {
                        votes[5] = 5;
                    } else {
                        if (num_peaks <= 135.5) {
                            if (num_peaks <= 130.5) {
                                if (rr_median <= 89.75) {
                                    votes[5] = 1;
                                } else {
                                    if (num_peaks <= 116.5) {
                                        votes[5] = 5;
                                    } else {
                                        votes[5] = 1;
                                    }
                                }
                            } else {
                                votes[5] = 3;
                            }
                        } else {
                            votes[5] = 1;
                        }
                    }
                } else {
                    if (num_valleys <= 73.5) {
                        if (rr_std <= 36.29998016357422) {
                            if (num_valleys <= 63.5) {
                                votes[5] = 4;
                            } else {
                                if (num_valleys <= 67.0) {
                                    votes[5] = 4;
                                } else {
                                    votes[5] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.13510876893997192) {
                                votes[5] = 4;
                            } else {
                                votes[5] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 100.5) {
                            if (num_peaks <= 132.5) {
                                votes[5] = 4;
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
        if (num_peaks <= 128.0) {
            if (rr_std <= 0.6467249393463135) {
                if (rr_median <= 74.25) {
                    if (rr_std <= 0.3970015197992325) {
                        votes[5] = 2;
                    } else {
                        votes[5] = 2;
                    }
                } else {
                    votes[5] = 5;
                }
            } else {
                if (diastolic_time <= 0.6340000033378601) {
                    if (rr_std <= 15.429126739501953) {
                        if (num_peaks <= 122.5) {
                            if (num_valleys <= 45.5) {
                                votes[5] = 2;
                            } else {
                                if (rr_std <= 10.337450981140137) {
                                    if (diastolic_time <= 0.3118399977684021) {
                                        votes[5] = 5;
                                    } else {
                                        if (num_valleys <= 65.5) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 5;
                                        }
                                    }
                                } else {
                                    votes[5] = 5;
                                }
                            }
                        } else {
                            votes[5] = 0;
                        }
                    } else {
                        if (rr_median <= 73.25) {
                            if (num_valleys <= 62.0) {
                                if (num_peaks <= 87.5) {
                                    votes[5] = 2;
                                } else {
                                    votes[5] = 2;
                                }
                            } else {
                                votes[5] = 3;
                            }
                        } else {
                            if (num_peaks <= 88.5) {
                                if (num_valleys <= 45.5) {
                                    votes[5] = 4;
                                } else {
                                    if (rr_median <= 88.5) {
                                        votes[5] = 4;
                                    } else {
                                        if (diastolic_time <= 0.3655324727296829) {
                                            votes[5] = 4;
                                        } else {
                                            votes[5] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 33.76094627380371) {
                                    votes[5] = 2;
                                } else {
                                    votes[5] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.479978561401367) {
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
            if (rr_std <= 7.622419357299805) {
                if (diastolic_time <= 0.40551111102104187) {
                    votes[5] = 3;
                } else {
                    votes[5] = 5;
                }
            } else {
                if (num_peaks <= 153.5) {
                    if (rr_median <= 53.25) {
                        votes[5] = 0;
                    } else {
                        if (rr_median <= 111.25) {
                            if (diastolic_time <= 0.32698024809360504) {
                                votes[5] = 0;
                            } else {
                                if (rr_median <= 61.25) {
                                    if (rr_std <= 13.028947353363037) {
                                        if (rr_std <= 10.669104099273682) {
                                            votes[5] = 0;
                                        } else {
                                            votes[5] = 0;
                                        }
                                    } else {
                                        votes[5] = 0;
                                    }
                                } else {
                                    if (rr_std <= 9.916780471801758) {
                                        votes[5] = 0;
                                    } else {
                                        if (diastolic_time <= 0.6642000079154968) {
                                            votes[5] = 0;
                                        } else {
                                            votes[5] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[5] = 0;
                        }
                    }
                } else {
                    votes[5] = 2;
                }
            }
        }
    }
// Decision rules for tree 6
    if (diastolic_time <= 0.263750821352005) {
        if (rr_median <= 83.25) {
            if (rr_std <= 14.180799007415771) {
                if (num_peaks <= 131.5) {
                    if (rr_median <= 53.25) {
                        if (diastolic_time <= 0.08145387843251228) {
                            votes[6] = 4;
                        } else {
                            if (rr_std <= 8.052742958068848) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 0.730077862739563) {
                            if (num_peaks <= 107.5) {
                                votes[6] = 2;
                            } else {
                                if (rr_std <= 0.581251710653305) {
                                    votes[6] = 3;
                                } else {
                                    votes[6] = 3;
                                }
                            }
                        } else {
                            if (num_valleys <= 73.5) {
                                if (diastolic_time <= 0.09338385239243507) {
                                    votes[6] = 5;
                                } else {
                                    votes[6] = 5;
                                }
                            } else {
                                if (rr_std <= 8.896557331085205) {
                                    votes[6] = 3;
                                } else {
                                    if (rr_std <= 11.246116638183594) {
                                        votes[6] = 1;
                                    } else {
                                        votes[6] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 69.5) {
                        if (num_peaks <= 145.5) {
                            if (num_valleys <= 78.5) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        } else {
                            votes[6] = 3;
                        }
                    } else {
                        votes[6] = 3;
                    }
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (diastolic_time <= 0.04684057831764221) {
                        votes[6] = 4;
                    } else {
                        if (diastolic_time <= 0.13846635073423386) {
                            if (rr_median <= 78.0) {
                                if (rr_median <= 70.0) {
                                    if (num_peaks <= 123.0) {
                                        if (rr_std <= 21.610736846923828) {
                                            votes[6] = 3;
                                        } else {
                                            votes[6] = 4;
                                        }
                                    } else {
                                        votes[6] = 4;
                                    }
                                } else {
                                    votes[6] = 5;
                                }
                            } else {
                                votes[6] = 3;
                            }
                        } else {
                            if (rr_median <= 63.5) {
                                votes[6] = 2;
                            } else {
                                if (rr_median <= 77.75) {
                                    votes[6] = 4;
                                } else {
                                    votes[6] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.15328603982925415) {
                        if (rr_std <= 31.516523361206055) {
                            if (rr_median <= 55.25) {
                                votes[6] = 3;
                            } else {
                                votes[6] = 3;
                            }
                        } else {
                            votes[6] = 1;
                        }
                    } else {
                        votes[6] = 5;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.1296430081129074) {
                if (num_valleys <= 62.5) {
                    if (rr_std <= 49.69587516784668) {
                        if (rr_std <= 1.7536361813545227) {
                            votes[6] = 4;
                        } else {
                            votes[6] = 1;
                        }
                    } else {
                        if (num_valleys <= 52.0) {
                            votes[6] = 4;
                        } else {
                            votes[6] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.013421053066849709) {
                        if (rr_std <= 19.98945140838623) {
                            votes[6] = 0;
                        } else {
                            votes[6] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.0738704577088356) {
                            if (rr_std <= 2.7739559412002563) {
                                if (diastolic_time <= 0.06370619684457779) {
                                    votes[6] = 1;
                                } else {
                                    votes[6] = 1;
                                }
                            } else {
                                if (rr_median <= 114.75) {
                                    votes[6] = 1;
                                } else {
                                    votes[6] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 94.75) {
                                if (num_valleys <= 73.0) {
                                    votes[6] = 1;
                                } else {
                                    votes[6] = 3;
                                }
                            } else {
                                if (rr_std <= 25.396553993225098) {
                                    if (rr_std <= 15.559373378753662) {
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
            } else {
                if (rr_std <= 18.177473068237305) {
                    if (rr_median <= 115.0) {
                        if (diastolic_time <= 0.1596766710281372) {
                            if (num_valleys <= 73.5) {
                                votes[6] = 1;
                            } else {
                                votes[6] = 5;
                            }
                        } else {
                            if (num_peaks <= 120.5) {
                                votes[6] = 5;
                            } else {
                                votes[6] = 5;
                            }
                        }
                    } else {
                        votes[6] = 1;
                    }
                } else {
                    if (num_peaks <= 125.5) {
                        if (rr_std <= 46.553218841552734) {
                            votes[6] = 4;
                        } else {
                            votes[6] = 4;
                        }
                    } else {
                        votes[6] = 5;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 127.5) {
            if (diastolic_time <= 0.6243076920509338) {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.5076166689395905) {
                            if (rr_std <= 26.6060152053833) {
                                votes[6] = 2;
                            } else {
                                votes[6] = 2;
                            }
                        } else {
                            votes[6] = 2;
                        }
                    } else {
                        if (rr_std <= 10.22716999053955) {
                            if (rr_median <= 64.0) {
                                votes[6] = 3;
                            } else {
                                if (rr_std <= 0.6633186936378479) {
                                    if (num_peaks <= 106.5) {
                                        votes[6] = 2;
                                    } else {
                                        votes[6] = 2;
                                    }
                                } else {
                                    if (rr_median <= 70.5) {
                                        votes[6] = 5;
                                    } else {
                                        votes[6] = 5;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 108.0) {
                                votes[6] = 2;
                            } else {
                                if (diastolic_time <= 0.3945079445838928) {
                                    votes[6] = 0;
                                } else {
                                    votes[6] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 11.572530746459961) {
                        if (num_peaks <= 101.5) {
                            votes[6] = 5;
                        } else {
                            votes[6] = 2;
                        }
                    } else {
                        if (num_peaks <= 96.0) {
                            if (rr_median <= 88.5) {
                                if (diastolic_time <= 0.32100000977516174) {
                                    votes[6] = 2;
                                } else {
                                    votes[6] = 4;
                                }
                            } else {
                                if (num_peaks <= 78.0) {
                                    votes[6] = 4;
                                } else {
                                    votes[6] = 4;
                                }
                            }
                        } else {
                            votes[6] = 0;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[6] = 5;
                } else {
                    if (diastolic_time <= 0.8889999985694885) {
                        votes[6] = 1;
                    } else {
                        votes[6] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 8.07284927368164) {
                if (num_valleys <= 77.5) {
                    votes[6] = 3;
                } else {
                    votes[6] = 0;
                }
            } else {
                if (num_peaks <= 153.5) {
                    if (rr_median <= 52.25) {
                        votes[6] = 3;
                    } else {
                        if (diastolic_time <= 0.6289999783039093) {
                            if (rr_median <= 56.25) {
                                votes[6] = 0;
                            } else {
                                if (num_valleys <= 74.5) {
                                    if (rr_std <= 12.787421703338623) {
                                        votes[6] = 0;
                                    } else {
                                        if (rr_std <= 20.38645648956299) {
                                            votes[6] = 0;
                                        } else {
                                            votes[6] = 0;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.33081573247909546) {
                                        votes[6] = 0;
                                    } else {
                                        if (rr_std <= 58.99506950378418) {
                                            votes[6] = 0;
                                        } else {
                                            votes[6] = 0;
                                        }
                                    }
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
// Decision rules for tree 7
    if (rr_std <= 0.6238199770450592) {
        if (rr_median <= 66.5) {
            if (diastolic_time <= 0.20624754577875137) {
                votes[7] = 3;
            } else {
                votes[7] = 3;
            }
        } else {
            if (rr_median <= 74.25) {
                if (num_peaks <= 89.0) {
                    if (diastolic_time <= 0.5275961458683014) {
                        votes[7] = 2;
                    } else {
                        votes[7] = 2;
                    }
                } else {
                    if (num_valleys <= 59.5) {
                        votes[7] = 3;
                    } else {
                        if (num_peaks <= 106.0) {
                            votes[7] = 2;
                        } else {
                            votes[7] = 2;
                        }
                    }
                }
            } else {
                if (rr_median <= 148.5) {
                    if (diastolic_time <= 0.15412000566720963) {
                        votes[7] = 1;
                    } else {
                        votes[7] = 5;
                    }
                } else {
                    votes[7] = 4;
                }
            }
        }
    } else {
        if (diastolic_time <= 0.2809973508119583) {
            if (rr_median <= 82.75) {
                if (rr_std <= 14.17724084854126) {
                    if (num_peaks <= 131.5) {
                        if (rr_median <= 54.5) {
                            if (rr_median <= 47.75) {
                                votes[7] = 1;
                            } else {
                                votes[7] = 3;
                            }
                        } else {
                            if (rr_std <= 6.094745635986328) {
                                if (rr_median <= 65.75) {
                                    votes[7] = 1;
                                } else {
                                    votes[7] = 3;
                                }
                            } else {
                                if (num_valleys <= 73.0) {
                                    votes[7] = 5;
                                } else {
                                    votes[7] = 5;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 79.5) {
                            if (num_peaks <= 143.5) {
                                votes[7] = 3;
                            } else {
                                votes[7] = 3;
                            }
                        } else {
                            if (rr_std <= 8.803699016571045) {
                                votes[7] = 5;
                            } else {
                                votes[7] = 3;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.037985505536198616) {
                        if (diastolic_time <= 0.03325968608260155) {
                            votes[7] = 4;
                        } else {
                            votes[7] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.15008603781461716) {
                            if (rr_median <= 76.75) {
                                if (rr_std <= 20.73285961151123) {
                                    if (num_peaks <= 130.5) {
                                        if (rr_median <= 66.0) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 1;
                                        }
                                    } else {
                                        votes[7] = 3;
                                    }
                                } else {
                                    if (num_valleys <= 66.5) {
                                        votes[7] = 3;
                                    } else {
                                        if (diastolic_time <= 0.11563387885689735) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.12302971258759499) {
                                    votes[7] = 5;
                                } else {
                                    votes[7] = 4;
                                }
                            }
                        } else {
                            if (num_peaks <= 137.5) {
                                if (rr_median <= 59.0) {
                                    votes[7] = 2;
                                } else {
                                    if (diastolic_time <= 0.2090643271803856) {
                                        votes[7] = 4;
                                    } else {
                                        votes[7] = 4;
                                    }
                                }
                            } else {
                                votes[7] = 5;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.12836424261331558) {
                    if (diastolic_time <= 0.012326284311711788) {
                        if (rr_std <= 17.638755798339844) {
                            votes[7] = 0;
                        } else {
                            votes[7] = 0;
                        }
                    } else {
                        if (num_valleys <= 62.5) {
                            if (rr_std <= 31.7065372467041) {
                                if (diastolic_time <= 0.057008616626262665) {
                                    votes[7] = 1;
                                } else {
                                    votes[7] = 5;
                                }
                            } else {
                                if (diastolic_time <= 0.03390371426939964) {
                                    votes[7] = 4;
                                } else {
                                    votes[7] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.06091477908194065) {
                                if (rr_median <= 112.75) {
                                    if (num_peaks <= 122.0) {
                                        votes[7] = 1;
                                    } else {
                                        votes[7] = 1;
                                    }
                                } else {
                                    votes[7] = 1;
                                }
                            } else {
                                if (diastolic_time <= 0.06549717858433723) {
                                    votes[7] = 5;
                                } else {
                                    if (rr_median <= 92.75) {
                                        if (diastolic_time <= 0.07739384844899178) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 17.91472625732422) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 16.262849807739258) {
                        if (rr_median <= 119.5) {
                            if (rr_median <= 90.0) {
                                votes[7] = 5;
                            } else {
                                if (diastolic_time <= 0.17834285646677017) {
                                    votes[7] = 5;
                                } else {
                                    votes[7] = 5;
                                }
                            }
                        } else {
                            votes[7] = 1;
                        }
                    } else {
                        if (num_peaks <= 125.5) {
                            if (rr_median <= 114.0) {
                                if (diastolic_time <= 0.1800103336572647) {
                                    votes[7] = 4;
                                } else {
                                    votes[7] = 4;
                                }
                            } else {
                                votes[7] = 5;
                            }
                        } else {
                            votes[7] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 69.5) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (rr_std <= 15.572783946990967) {
                        if (rr_std <= 11.769414901733398) {
                            if (num_valleys <= 60.5) {
                                if (num_peaks <= 88.5) {
                                    votes[7] = 5;
                                } else {
                                    votes[7] = 5;
                                }
                            } else {
                                if (rr_std <= 0.906762957572937) {
                                    votes[7] = 5;
                                } else {
                                    votes[7] = 2;
                                }
                            }
                        } else {
                            votes[7] = 0;
                        }
                    } else {
                        if (rr_median <= 81.75) {
                            if (rr_std <= 40.97027397155762) {
                                if (num_valleys <= 53.0) {
                                    votes[7] = 2;
                                } else {
                                    votes[7] = 2;
                                }
                            } else {
                                votes[7] = 1;
                            }
                        } else {
                            if (rr_std <= 40.12184715270996) {
                                if (diastolic_time <= 0.3556181788444519) {
                                    votes[7] = 4;
                                } else {
                                    votes[7] = 4;
                                }
                            } else {
                                votes[7] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 41.50863838195801) {
                        if (rr_median <= 105.0) {
                            votes[7] = 2;
                        } else {
                            votes[7] = 1;
                        }
                    } else {
                        votes[7] = 1;
                    }
                }
            } else {
                if (rr_std <= 4.967562675476074) {
                    if (num_peaks <= 133.5) {
                        votes[7] = 5;
                    } else {
                        votes[7] = 3;
                    }
                } else {
                    if (num_peaks <= 111.0) {
                        votes[7] = 1;
                    } else {
                        if (rr_median <= 52.25) {
                            votes[7] = 3;
                        } else {
                            if (num_peaks <= 151.5) {
                                if (num_peaks <= 124.5) {
                                    if (num_peaks <= 121.5) {
                                        votes[7] = 0;
                                    } else {
                                        votes[7] = 5;
                                    }
                                } else {
                                    if (num_valleys <= 77.5) {
                                        if (num_peaks <= 144.5) {
                                            votes[7] = 0;
                                        } else {
                                            votes[7] = 0;
                                        }
                                    } else {
                                        votes[7] = 0;
                                    }
                                }
                            } else {
                                votes[7] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 8
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 102.5) {
            if (rr_std <= 16.006247520446777) {
                if (rr_median <= 68.5) {
                    if (rr_median <= 44.5) {
                        votes[8] = 1;
                    } else {
                        if (rr_std <= 9.50971794128418) {
                            if (rr_std <= 1.0854631960391998) {
                                votes[8] = 3;
                            } else {
                                votes[8] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.04828491620719433) {
                                votes[8] = 4;
                            } else {
                                if (rr_std <= 10.791455745697021) {
                                    if (rr_std <= 10.06764030456543) {
                                        votes[8] = 3;
                                    } else {
                                        votes[8] = 1;
                                    }
                                } else {
                                    if (diastolic_time <= 0.10418522730469704) {
                                        votes[8] = 3;
                                    } else {
                                        votes[8] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.018020618706941605) {
                        votes[8] = 0;
                    } else {
                        if (diastolic_time <= 0.12970967590808868) {
                            if (diastolic_time <= 0.08130636438727379) {
                                if (num_peaks <= 118.5) {
                                    votes[8] = 5;
                                } else {
                                    votes[8] = 5;
                                }
                            } else {
                                if (diastolic_time <= 0.11173837631940842) {
                                    if (rr_median <= 81.5) {
                                        votes[8] = 3;
                                    } else {
                                        votes[8] = 3;
                                    }
                                } else {
                                    votes[8] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 75.5) {
                                votes[8] = 3;
                            } else {
                                if (rr_std <= 0.6516379714012146) {
                                    votes[8] = 5;
                                } else {
                                    if (diastolic_time <= 0.16838771104812622) {
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
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.04353921487927437) {
                        if (num_valleys <= 67.5) {
                            votes[8] = 4;
                        } else {
                            votes[8] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.11842244863510132) {
                            if (diastolic_time <= 0.10007629916071892) {
                                if (rr_std <= 33.61519813537598) {
                                    if (num_valleys <= 70.5) {
                                        votes[8] = 3;
                                    } else {
                                        votes[8] = 3;
                                    }
                                } else {
                                    votes[8] = 1;
                                }
                            } else {
                                votes[8] = 5;
                            }
                        } else {
                            if (rr_median <= 59.75) {
                                votes[8] = 3;
                            } else {
                                if (diastolic_time <= 0.1454830765724182) {
                                    if (rr_std <= 26.71805477142334) {
                                        votes[8] = 4;
                                    } else {
                                        votes[8] = 4;
                                    }
                                } else {
                                    if (rr_median <= 76.5) {
                                        votes[8] = 4;
                                    } else {
                                        if (rr_median <= 83.75) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.020783504471182823) {
                        votes[8] = 0;
                    } else {
                        if (rr_median <= 75.0) {
                            if (diastolic_time <= 0.09970110654830933) {
                                votes[8] = 1;
                            } else {
                                votes[8] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.08592132478952408) {
                                votes[8] = 1;
                            } else {
                                votes[8] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 110.5) {
                if (diastolic_time <= 0.11868323013186455) {
                    if (rr_std <= 50.21156883239746) {
                        if (rr_median <= 193.25) {
                            votes[8] = 1;
                        } else {
                            votes[8] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.03395289555191994) {
                            votes[8] = 4;
                        } else {
                            votes[8] = 4;
                        }
                    }
                } else {
                    votes[8] = 5;
                }
            } else {
                if (rr_median <= 190.0) {
                    if (num_valleys <= 74.5) {
                        if (num_valleys <= 65.5) {
                            votes[8] = 1;
                        } else {
                            votes[8] = 1;
                        }
                    } else {
                        if (num_peaks <= 137.5) {
                            if (num_peaks <= 130.5) {
                                votes[8] = 1;
                            } else {
                                if (rr_std <= 23.156907081604004) {
                                    votes[8] = 1;
                                } else {
                                    votes[8] = 5;
                                }
                            }
                        } else {
                            votes[8] = 1;
                        }
                    }
                } else {
                    votes[8] = 1;
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_std <= 0.6796177625656128) {
                if (rr_median <= 73.5) {
                    if (rr_median <= 69.5) {
                        if (diastolic_time <= 0.2758871763944626) {
                            votes[8] = 2;
                        } else {
                            votes[8] = 3;
                        }
                    } else {
                        votes[8] = 2;
                    }
                } else {
                    votes[8] = 2;
                }
            } else {
                if (diastolic_time <= 0.6426666676998138) {
                    if (rr_std <= 14.375516891479492) {
                        if (num_peaks <= 97.5) {
                            if (diastolic_time <= 0.46549999713897705) {
                                votes[8] = 5;
                            } else {
                                votes[8] = 5;
                            }
                        } else {
                            if (num_peaks <= 112.0) {
                                votes[8] = 2;
                            } else {
                                votes[8] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 75.75) {
                            if (rr_std <= 42.48208808898926) {
                                if (num_valleys <= 57.5) {
                                    if (num_valleys <= 48.5) {
                                        votes[8] = 2;
                                    } else {
                                        votes[8] = 2;
                                    }
                                } else {
                                    if (rr_median <= 68.5) {
                                        votes[8] = 3;
                                    } else {
                                        votes[8] = 0;
                                    }
                                }
                            } else {
                                votes[8] = 1;
                            }
                        } else {
                            if (num_peaks <= 92.5) {
                                if (rr_median <= 107.5) {
                                    if (rr_median <= 88.5) {
                                        if (rr_std <= 27.152664184570312) {
                                            votes[8] = 2;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    } else {
                                        if (num_peaks <= 80.5) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    }
                                } else {
                                    votes[8] = 5;
                                }
                            } else {
                                votes[8] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 80.5) {
                        votes[8] = 2;
                    } else {
                        if (num_valleys <= 55.5) {
                            votes[8] = 1;
                        } else {
                            votes[8] = 5;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 5.509567975997925) {
                if (rr_std <= 1.6088087558746338) {
                    votes[8] = 3;
                } else {
                    votes[8] = 5;
                }
            } else {
                if (num_peaks <= 124.5) {
                    if (diastolic_time <= 0.8124000132083893) {
                        if (rr_median <= 83.75) {
                            votes[8] = 0;
                        } else {
                            votes[8] = 5;
                        }
                    } else {
                        votes[8] = 1;
                    }
                } else {
                    if (diastolic_time <= 0.351935938000679) {
                        if (rr_median <= 62.5) {
                            votes[8] = 3;
                        } else {
                            if (num_peaks <= 137.0) {
                                votes[8] = 0;
                            } else {
                                votes[8] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.6698181629180908) {
                            if (rr_median <= 55.75) {
                                votes[8] = 0;
                            } else {
                                if (rr_median <= 61.25) {
                                    if (num_peaks <= 145.5) {
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
        }
    }
// Decision rules for tree 9
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 75.25) {
            if (rr_std <= 16.9524507522583) {
                if (num_peaks <= 118.5) {
                    if (rr_std <= 8.325955629348755) {
                        if (diastolic_time <= 0.20709484815597534) {
                            if (diastolic_time <= 0.10866690799593925) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 3;
                            }
                        } else {
                            if (num_peaks <= 104.5) {
                                votes[9] = 2;
                            } else {
                                votes[9] = 2;
                            }
                        }
                    } else {
                        if (num_valleys <= 58.0) {
                            votes[9] = 4;
                        } else {
                            votes[9] = 4;
                        }
                    }
                } else {
                    if (rr_median <= 53.25) {
                        if (rr_median <= 45.75) {
                            votes[9] = 3;
                        } else {
                            if (num_peaks <= 127.5) {
                                votes[9] = 3;
                            } else {
                                votes[9] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 54.5) {
                            votes[9] = 1;
                        } else {
                            if (num_peaks <= 135.5) {
                                if (num_peaks <= 127.0) {
                                    votes[9] = 3;
                                } else {
                                    if (rr_std <= 11.891860485076904) {
                                        if (diastolic_time <= 0.09746332094073296) {
                                            votes[9] = 1;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    } else {
                                        votes[9] = 3;
                                    }
                                }
                            } else {
                                votes[9] = 3;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.0) {
                    if (diastolic_time <= 0.2058960497379303) {
                        if (num_valleys <= 74.5) {
                            if (rr_median <= 69.75) {
                                if (num_peaks <= 104.5) {
                                    if (rr_median <= 57.25) {
                                        votes[9] = 4;
                                    } else {
                                        votes[9] = 4;
                                    }
                                } else {
                                    votes[9] = 4;
                                }
                            } else {
                                if (rr_std <= 24.142004013061523) {
                                    votes[9] = 4;
                                } else {
                                    votes[9] = 4;
                                }
                            }
                        } else {
                            votes[9] = 4;
                        }
                    } else {
                        votes[9] = 3;
                    }
                } else {
                    if (rr_std <= 26.322372436523438) {
                        if (rr_median <= 63.25) {
                            votes[9] = 3;
                        } else {
                            votes[9] = 3;
                        }
                    } else {
                        votes[9] = 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.08700050041079521) {
                if (rr_median <= 211.75) {
                    if (diastolic_time <= 0.011158470064401627) {
                        if (num_valleys <= 77.5) {
                            votes[9] = 2;
                        } else {
                            votes[9] = 0;
                        }
                    } else {
                        if (rr_median <= 82.0) {
                            votes[9] = 5;
                        } else {
                            if (num_valleys <= 62.5) {
                                if (rr_std <= 35.85346984863281) {
                                    if (num_valleys <= 58.5) {
                                        votes[9] = 1;
                                    } else {
                                        votes[9] = 3;
                                    }
                                } else {
                                    votes[9] = 4;
                                }
                            } else {
                                if (rr_std <= 2.7739559412002563) {
                                    if (diastolic_time <= 0.06941517814993858) {
                                        votes[9] = 5;
                                    } else {
                                        votes[9] = 1;
                                    }
                                } else {
                                    if (rr_median <= 113.75) {
                                        if (rr_median <= 99.0) {
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
                    }
                } else {
                    votes[9] = 4;
                }
            } else {
                if (rr_std <= 16.253864288330078) {
                    if (rr_median <= 94.25) {
                        if (rr_std <= 0.6694315373897552) {
                            votes[9] = 1;
                        } else {
                            if (num_valleys <= 69.5) {
                                votes[9] = 5;
                            } else {
                                if (diastolic_time <= 0.15328655391931534) {
                                    votes[9] = 5;
                                } else {
                                    votes[9] = 3;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 102.25) {
                            votes[9] = 3;
                        } else {
                            if (rr_std <= 3.6505132913589478) {
                                votes[9] = 1;
                            } else {
                                votes[9] = 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.12640546262264252) {
                        if (rr_median <= 99.0) {
                            votes[9] = 5;
                        } else {
                            votes[9] = 5;
                        }
                    } else {
                        if (num_peaks <= 126.5) {
                            if (rr_median <= 85.75) {
                                if (num_peaks <= 116.5) {
                                    votes[9] = 4;
                                } else {
                                    votes[9] = 4;
                                }
                            } else {
                                if (rr_median <= 94.5) {
                                    votes[9] = 2;
                                } else {
                                    votes[9] = 4;
                                }
                            }
                        } else {
                            if (rr_std <= 28.736105918884277) {
                                votes[9] = 4;
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
            if (rr_median <= 79.5) {
                if (num_peaks <= 90.5) {
                    if (rr_median <= 74.25) {
                        if (diastolic_time <= 0.5302857160568237) {
                            votes[9] = 2;
                        } else {
                            votes[9] = 2;
                        }
                    } else {
                        votes[9] = 2;
                    }
                } else {
                    if (rr_std <= 11.769414901733398) {
                        if (rr_std <= 0.6533262431621552) {
                            if (num_valleys <= 57.5) {
                                votes[9] = 5;
                            } else {
                                if (num_peaks <= 107.5) {
                                    votes[9] = 2;
                                } else {
                                    votes[9] = 2;
                                }
                            }
                        } else {
                            if (rr_median <= 70.5) {
                                votes[9] = 5;
                            } else {
                                votes[9] = 2;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.44015686213970184) {
                            votes[9] = 1;
                        } else {
                            votes[9] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6350666582584381) {
                    if (rr_std <= 13.0559720993042) {
                        votes[9] = 5;
                    } else {
                        if (rr_median <= 87.5) {
                            votes[9] = 2;
                        } else {
                            if (rr_median <= 98.5) {
                                votes[9] = 4;
                            } else {
                                votes[9] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.918952226638794) {
                        votes[9] = 5;
                    } else {
                        votes[9] = 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.7655999958515167) {
                if (rr_std <= 7.789663076400757) {
                    if (diastolic_time <= 0.40551111102104187) {
                        votes[9] = 3;
                    } else {
                        votes[9] = 0;
                    }
                } else {
                    if (rr_median <= 52.75) {
                        votes[9] = 3;
                    } else {
                        if (rr_std <= 68.63360023498535) {
                            if (num_valleys <= 77.5) {
                                if (diastolic_time <= 0.4826500117778778) {
                                    if (num_peaks <= 141.5) {
                                        if (rr_median <= 81.0) {
                                            votes[9] = 0;
                                        } else {
                                            votes[9] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 144.5) {
                                            votes[9] = 3;
                                        } else {
                                            votes[9] = 0;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 138.0) {
                                        votes[9] = 0;
                                    } else {
                                        if (rr_median <= 59.75) {
                                            votes[9] = 0;
                                        } else {
                                            votes[9] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[9] = 0;
                            }
                        } else {
                            votes[9] = 0;
                        }
                    }
                }
            } else {
                if (rr_std <= 35.543914794921875) {
                    votes[9] = 2;
                } else {
                    votes[9] = 1;
                }
            }
        }
    }
// Decision rules for tree 10
    if (diastolic_time <= 0.22240635007619858) {
        if (num_valleys <= 70.5) {
            if (rr_std <= 14.367665767669678) {
                if (rr_std <= 0.24845199286937714) {
                    votes[10] = 4;
                } else {
                    if (rr_median <= 68.75) {
                        if (diastolic_time <= 0.11575842648744583) {
                            if (rr_std <= 9.495952606201172) {
                                votes[10] = 3;
                            } else {
                                votes[10] = 4;
                            }
                        } else {
                            votes[10] = 1;
                        }
                    } else {
                        if (rr_median <= 99.25) {
                            if (rr_std <= 0.6694315373897552) {
                                votes[10] = 1;
                            } else {
                                if (num_peaks <= 118.5) {
                                    if (diastolic_time <= 0.09416255727410316) {
                                        votes[10] = 5;
                                    } else {
                                        votes[10] = 1;
                                    }
                                } else {
                                    votes[10] = 5;
                                }
                            }
                        } else {
                            votes[10] = 1;
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (diastolic_time <= 0.03550100512802601) {
                        if (diastolic_time <= 0.03305843472480774) {
                            votes[10] = 4;
                        } else {
                            votes[10] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.11275941878557205) {
                            if (rr_std <= 19.7650728225708) {
                                votes[10] = 3;
                            } else {
                                if (rr_median <= 73.5) {
                                    votes[10] = 4;
                                } else {
                                    if (rr_median <= 82.5) {
                                        votes[10] = 5;
                                    } else {
                                        if (rr_std <= 50.21156883239746) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 56.5) {
                                votes[10] = 2;
                            } else {
                                if (rr_std <= 50.87445640563965) {
                                    if (diastolic_time <= 0.13786030560731888) {
                                        if (rr_std <= 25.068167686462402) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    } else {
                                        if (num_peaks <= 127.0) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    }
                                } else {
                                    votes[10] = 4;
                                }
                            }
                        }
                    }
                } else {
                    votes[10] = 1;
                }
            }
        } else {
            if (rr_median <= 65.5) {
                if (rr_std <= 21.24972438812256) {
                    if (num_peaks <= 126.5) {
                        votes[10] = 3;
                    } else {
                        if (rr_std <= 10.076533794403076) {
                            votes[10] = 3;
                        } else {
                            if (rr_std <= 11.87785005569458) {
                                votes[10] = 3;
                            } else {
                                votes[10] = 3;
                            }
                        }
                    }
                } else {
                    votes[10] = 1;
                }
            } else {
                if (rr_median <= 99.0) {
                    if (diastolic_time <= 0.0932711623609066) {
                        if (num_peaks <= 142.5) {
                            if (rr_std <= 36.1543025970459) {
                                votes[10] = 3;
                            } else {
                                if (num_valleys <= 77.5) {
                                    votes[10] = 1;
                                } else {
                                    votes[10] = 1;
                                }
                            }
                        } else {
                            votes[10] = 0;
                        }
                    } else {
                        if (rr_std <= 16.58222484588623) {
                            if (rr_median <= 72.5) {
                                votes[10] = 3;
                            } else {
                                if (num_peaks <= 124.5) {
                                    votes[10] = 5;
                                } else {
                                    if (rr_std <= 10.16571044921875) {
                                        votes[10] = 5;
                                    } else {
                                        votes[10] = 5;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 132.5) {
                                if (diastolic_time <= 0.14703628420829773) {
                                    votes[10] = 4;
                                } else {
                                    votes[10] = 4;
                                }
                            } else {
                                votes[10] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 2.2488457560539246) {
                        votes[10] = 1;
                    } else {
                        if (diastolic_time <= 0.100657619535923) {
                            if (rr_median <= 114.25) {
                                votes[10] = 5;
                            } else {
                                if (num_peaks <= 138.0) {
                                    if (num_peaks <= 130.5) {
                                        votes[10] = 1;
                                    } else {
                                        votes[10] = 1;
                                    }
                                } else {
                                    votes[10] = 1;
                                }
                            }
                        } else {
                            votes[10] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.6350666582584381) {
                if (rr_std <= 0.6796177625656128) {
                    if (rr_median <= 66.5) {
                        votes[10] = 3;
                    } else {
                        if (rr_median <= 74.25) {
                            if (num_peaks <= 105.5) {
                                if (num_peaks <= 91.5) {
                                    votes[10] = 2;
                                } else {
                                    if (diastolic_time <= 0.22695424407720566) {
                                        votes[10] = 2;
                                    } else {
                                        votes[10] = 2;
                                    }
                                }
                            } else {
                                votes[10] = 2;
                            }
                        } else {
                            votes[10] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 16.58848762512207) {
                        if (rr_std <= 7.943047523498535) {
                            if (num_peaks <= 105.5) {
                                votes[10] = 3;
                            } else {
                                if (rr_median <= 75.5) {
                                    votes[10] = 5;
                                } else {
                                    votes[10] = 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 99.0) {
                                votes[10] = 5;
                            } else {
                                votes[10] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 87.5) {
                            if (num_peaks <= 105.0) {
                                if (rr_std <= 27.152664184570312) {
                                    votes[10] = 2;
                                } else {
                                    if (num_peaks <= 83.5) {
                                        votes[10] = 4;
                                    } else {
                                        if (diastolic_time <= 0.38501252233982086) {
                                            votes[10] = 2;
                                        } else {
                                            votes[10] = 2;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 116.0) {
                                    votes[10] = 3;
                                } else {
                                    votes[10] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 47.85641670227051) {
                                if (num_valleys <= 56.5) {
                                    if (diastolic_time <= 0.3420476168394089) {
                                        votes[10] = 4;
                                    } else {
                                        votes[10] = 4;
                                    }
                                } else {
                                    votes[10] = 2;
                                }
                            } else {
                                votes[10] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    votes[10] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[10] = 1;
                    } else {
                        votes[10] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 6.724537372589111) {
                if (rr_median <= 87.25) {
                    votes[10] = 3;
                } else {
                    votes[10] = 5;
                }
            } else {
                if (diastolic_time <= 0.7667555510997772) {
                    if (diastolic_time <= 0.2809973508119583) {
                        if (num_valleys <= 78.5) {
                            votes[10] = 3;
                        } else {
                            votes[10] = 5;
                        }
                    } else {
                        if (rr_std <= 46.05039596557617) {
                            if (diastolic_time <= 0.3309130519628525) {
                                votes[10] = 0;
                            } else {
                                if (num_valleys <= 77.5) {
                                    if (diastolic_time <= 0.4046526402235031) {
                                        votes[10] = 0;
                                    } else {
                                        if (diastolic_time <= 0.44091665744781494) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_median <= 54.5) {
                                        votes[10] = 0;
                                    } else {
                                        votes[10] = 0;
                                    }
                                }
                            }
                        } else {
                            votes[10] = 0;
                        }
                    }
                } else {
                    if (num_peaks <= 133.5) {
                        votes[10] = 1;
                    } else {
                        votes[10] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 11
    if (diastolic_time <= 0.22144444286823273) {
        if (rr_median <= 99.25) {
            if (rr_std <= 14.180799007415771) {
                if (rr_median <= 68.5) {
                    if (rr_median <= 47.75) {
                        if (num_peaks <= 125.0) {
                            votes[11] = 4;
                        } else {
                            votes[11] = 3;
                        }
                    } else {
                        if (rr_median <= 53.25) {
                            votes[11] = 3;
                        } else {
                            if (rr_median <= 55.75) {
                                votes[11] = 1;
                            } else {
                                if (num_peaks <= 132.5) {
                                    if (num_peaks <= 126.5) {
                                        votes[11] = 3;
                                    } else {
                                        votes[11] = 3;
                                    }
                                } else {
                                    votes[11] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 141.5) {
                        if (num_peaks <= 108.5) {
                            if (rr_std <= 0.9186051487922668) {
                                if (num_peaks <= 101.5) {
                                    votes[11] = 5;
                                } else {
                                    votes[11] = 1;
                                }
                            } else {
                                votes[11] = 5;
                            }
                        } else {
                            if (num_peaks <= 113.5) {
                                votes[11] = 3;
                            } else {
                                if (num_peaks <= 129.0) {
                                    if (diastolic_time <= 0.1379685401916504) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 5;
                                    }
                                } else {
                                    if (num_valleys <= 78.5) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[11] = 0;
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.03923880495131016) {
                        votes[11] = 4;
                    } else {
                        if (diastolic_time <= 0.12302971258759499) {
                            if (rr_std <= 19.44614601135254) {
                                if (num_peaks <= 117.0) {
                                    votes[11] = 1;
                                } else {
                                    votes[11] = 3;
                                }
                            } else {
                                if (rr_median <= 70.25) {
                                    if (rr_median <= 65.5) {
                                        votes[11] = 4;
                                    } else {
                                        votes[11] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 0.09909114241600037) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 60.25) {
                                votes[11] = 3;
                            } else {
                                if (rr_median <= 77.5) {
                                    votes[11] = 4;
                                } else {
                                    if (diastolic_time <= 0.1547200009226799) {
                                        votes[11] = 4;
                                    } else {
                                        if (num_valleys <= 66.5) {
                                            votes[11] = 4;
                                        } else {
                                            votes[11] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.07333928719162941) {
                        if (diastolic_time <= 0.044458549469709396) {
                            votes[11] = 0;
                        } else {
                            votes[11] = 3;
                        }
                    } else {
                        if (rr_median <= 83.5) {
                            if (diastolic_time <= 0.13141754269599915) {
                                if (rr_std <= 20.68031597137451) {
                                    votes[11] = 3;
                                } else {
                                    votes[11] = 1;
                                }
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
            if (num_peaks <= 114.5) {
                if (diastolic_time <= 0.03473631665110588) {
                    if (rr_median <= 119.0) {
                        votes[11] = 4;
                    } else {
                        votes[11] = 4;
                    }
                } else {
                    if (diastolic_time <= 0.11400000005960464) {
                        votes[11] = 1;
                    } else {
                        votes[11] = 4;
                    }
                }
            } else {
                if (num_valleys <= 75.5) {
                    if (diastolic_time <= 0.03667447715997696) {
                        votes[11] = 1;
                    } else {
                        if (diastolic_time <= 0.09073241800069809) {
                            votes[11] = 1;
                        } else {
                            votes[11] = 1;
                        }
                    }
                } else {
                    if (rr_median <= 123.25) {
                        if (rr_std <= 15.628058910369873) {
                            votes[11] = 1;
                        } else {
                            votes[11] = 5;
                        }
                    } else {
                        if (num_peaks <= 133.0) {
                            votes[11] = 1;
                        } else {
                            votes[11] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (rr_median <= 89.0) {
                if (rr_std <= 38.265153884887695) {
                    if (num_valleys <= 61.5) {
                        if (rr_std <= 0.3932367116212845) {
                            votes[11] = 3;
                        } else {
                            if (diastolic_time <= 0.5076166689395905) {
                                if (rr_std <= 28.138333320617676) {
                                    if (num_peaks <= 105.5) {
                                        if (rr_std <= 2.9589418470859528) {
                                            votes[11] = 2;
                                        } else {
                                            votes[11] = 2;
                                        }
                                    } else {
                                        votes[11] = 2;
                                    }
                                } else {
                                    votes[11] = 2;
                                }
                            } else {
                                if (rr_std <= 18.66116952896118) {
                                    if (rr_std <= 2.3619269728660583) {
                                        votes[11] = 2;
                                    } else {
                                        if (num_valleys <= 53.5) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 0;
                                        }
                                    }
                                } else {
                                    votes[11] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 20.356587409973145) {
                            if (rr_std <= 11.962382793426514) {
                                if (rr_std <= 0.9095041155815125) {
                                    votes[11] = 2;
                                } else {
                                    votes[11] = 5;
                                }
                            } else {
                                votes[11] = 0;
                            }
                        } else {
                            votes[11] = 2;
                        }
                    }
                } else {
                    if (num_valleys <= 57.0) {
                        votes[11] = 1;
                    } else {
                        votes[11] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.45313236117362976) {
                    if (rr_std <= 13.059131145477295) {
                        votes[11] = 5;
                    } else {
                        if (rr_std <= 43.61960983276367) {
                            if (rr_median <= 97.75) {
                                votes[11] = 4;
                            } else {
                                votes[11] = 4;
                            }
                        } else {
                            votes[11] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 109.5) {
                        if (rr_std <= 9.230199575424194) {
                            votes[11] = 1;
                        } else {
                            if (rr_median <= 110.5) {
                                votes[11] = 1;
                            } else {
                                votes[11] = 1;
                            }
                        }
                    } else {
                        votes[11] = 2;
                    }
                }
            }
        } else {
            if (rr_std <= 8.86708927154541) {
                if (num_peaks <= 124.5) {
                    votes[11] = 5;
                } else {
                    if (diastolic_time <= 0.387452632188797) {
                        if (diastolic_time <= 0.2819974422454834) {
                            votes[11] = 5;
                        } else {
                            votes[11] = 3;
                        }
                    } else {
                        if (rr_std <= 6.560080528259277) {
                            votes[11] = 5;
                        } else {
                            votes[11] = 0;
                        }
                    }
                }
            } else {
                if (num_peaks <= 108.5) {
                    votes[11] = 1;
                } else {
                    if (diastolic_time <= 0.26275861263275146) {
                        votes[11] = 5;
                    } else {
                        if (rr_std <= 46.05039596557617) {
                            if (rr_std <= 10.051913261413574) {
                                votes[11] = 0;
                            } else {
                                if (num_peaks <= 124.5) {
                                    if (num_valleys <= 74.5) {
                                        votes[11] = 0;
                                    } else {
                                        votes[11] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 142.5) {
                                        votes[11] = 0;
                                    } else {
                                        if (num_valleys <= 77.5) {
                                            votes[11] = 0;
                                        } else {
                                            votes[11] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 95.5) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 12
    if (diastolic_time <= 0.20975074917078018) {
        if (rr_median <= 85.75) {
            if (num_peaks <= 132.5) {
                if (rr_std <= 16.006247520446777) {
                    if (rr_median <= 52.75) {
                        if (rr_median <= 47.75) {
                            votes[12] = 4;
                        } else {
                            if (diastolic_time <= 0.06843705847859383) {
                                votes[12] = 3;
                            } else {
                                votes[12] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 68.0) {
                            if (rr_median <= 57.5) {
                                votes[12] = 5;
                            } else {
                                if (num_peaks <= 121.5) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.169693261384964) {
                                if (rr_std <= 8.08211064338684) {
                                    if (rr_std <= 1.0714037418365479) {
                                        votes[12] = 5;
                                    } else {
                                        votes[12] = 5;
                                    }
                                } else {
                                    votes[12] = 5;
                                }
                            } else {
                                votes[12] = 3;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.13964805752038956) {
                        if (diastolic_time <= 0.04921538382768631) {
                            if (diastolic_time <= 0.03325968608260155) {
                                votes[12] = 4;
                            } else {
                                votes[12] = 4;
                            }
                        } else {
                            if (rr_std <= 32.9789924621582) {
                                if (num_valleys <= 67.5) {
                                    votes[12] = 3;
                                } else {
                                    if (diastolic_time <= 0.09531578794121742) {
                                        votes[12] = 3;
                                    } else {
                                        if (rr_median <= 67.0) {
                                            votes[12] = 4;
                                        } else {
                                            votes[12] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[12] = 4;
                            }
                        }
                    } else {
                        if (num_valleys <= 63.5) {
                            votes[12] = 4;
                        } else {
                            votes[12] = 4;
                        }
                    }
                }
            } else {
                if (num_peaks <= 149.5) {
                    if (rr_std <= 25.69298267364502) {
                        if (rr_median <= 69.0) {
                            if (rr_std <= 20.15297508239746) {
                                votes[12] = 3;
                            } else {
                                votes[12] = 3;
                            }
                        } else {
                            votes[12] = 3;
                        }
                    } else {
                        if (num_valleys <= 75.5) {
                            votes[12] = 3;
                        } else {
                            votes[12] = 1;
                        }
                    }
                } else {
                    votes[12] = 1;
                }
            }
        } else {
            if (diastolic_time <= 0.012326284311711788) {
                votes[12] = 0;
            } else {
                if (diastolic_time <= 0.1139594204723835) {
                    if (rr_median <= 203.5) {
                        if (diastolic_time <= 0.034525828436017036) {
                            if (diastolic_time <= 0.03307482786476612) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 4;
                            }
                        } else {
                            if (rr_std <= 0.9163804054260254) {
                                votes[12] = 5;
                            } else {
                                if (diastolic_time <= 0.09073016047477722) {
                                    if (diastolic_time <= 0.0566201563924551) {
                                        votes[12] = 1;
                                    } else {
                                        if (num_valleys <= 75.5) {
                                            votes[12] = 1;
                                        } else {
                                            votes[12] = 1;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.09792516008019447) {
                                        votes[12] = 5;
                                    } else {
                                        votes[12] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[12] = 4;
                    }
                } else {
                    if (rr_std <= 19.524513244628906) {
                        if (num_valleys <= 71.5) {
                            if (num_peaks <= 115.0) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 1;
                            }
                        } else {
                            if (num_peaks <= 129.0) {
                                if (rr_std <= 1.0121890604496002) {
                                    votes[12] = 5;
                                } else {
                                    votes[12] = 5;
                                }
                            } else {
                                votes[12] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 32.97445297241211) {
                            votes[12] = 4;
                        } else {
                            if (num_peaks <= 112.5) {
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
            if (diastolic_time <= 0.6243076920509338) {
                if (rr_std <= 0.6296193599700928) {
                    if (num_peaks <= 86.5) {
                        votes[12] = 2;
                    } else {
                        if (num_valleys <= 57.5) {
                            if (num_peaks <= 89.5) {
                                votes[12] = 2;
                            } else {
                                votes[12] = 3;
                            }
                        } else {
                            if (num_peaks <= 105.5) {
                                votes[12] = 2;
                            } else {
                                votes[12] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 15.560819149017334) {
                        if (rr_std <= 11.769414901733398) {
                            if (rr_median <= 64.0) {
                                votes[12] = 3;
                            } else {
                                if (num_valleys <= 68.5) {
                                    if (rr_median <= 88.75) {
                                        if (rr_median <= 72.5) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    } else {
                                        votes[12] = 5;
                                    }
                                } else {
                                    votes[12] = 3;
                                }
                            }
                        } else {
                            votes[12] = 0;
                        }
                    } else {
                        if (rr_median <= 88.5) {
                            if (num_valleys <= 61.5) {
                                if (rr_std <= 32.22794723510742) {
                                    if (rr_median <= 76.5) {
                                        votes[12] = 2;
                                    } else {
                                        if (num_valleys <= 47.0) {
                                            votes[12] = 2;
                                        } else {
                                            votes[12] = 4;
                                        }
                                    }
                                } else {
                                    votes[12] = 1;
                                }
                            } else {
                                if (rr_median <= 67.0) {
                                    votes[12] = 3;
                                } else {
                                    votes[12] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 42.878671646118164) {
                                if (diastolic_time <= 0.3338913023471832) {
                                    votes[12] = 5;
                                } else {
                                    votes[12] = 4;
                                }
                            } else {
                                votes[12] = 3;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    if (num_valleys <= 55.5) {
                        votes[12] = 1;
                    } else {
                        votes[12] = 5;
                    }
                } else {
                    if (rr_median <= 79.25) {
                        votes[12] = 1;
                    } else {
                        votes[12] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 5.509567975997925) {
                if (num_valleys <= 78.5) {
                    votes[12] = 5;
                } else {
                    votes[12] = 3;
                }
            } else {
                if (rr_median <= 53.25) {
                    votes[12] = 1;
                } else {
                    if (num_peaks <= 152.0) {
                        if (num_valleys <= 70.5) {
                            if (rr_median <= 73.5) {
                                votes[12] = 0;
                            } else {
                                votes[12] = 0;
                            }
                        } else {
                            if (diastolic_time <= 0.3249802440404892) {
                                if (num_valleys <= 76.5) {
                                    votes[12] = 0;
                                } else {
                                    votes[12] = 0;
                                }
                            } else {
                                if (num_peaks <= 132.5) {
                                    votes[12] = 0;
                                } else {
                                    if (rr_std <= 68.63360023498535) {
                                        if (num_valleys <= 74.5) {
                                            votes[12] = 0;
                                        } else {
                                            votes[12] = 0;
                                        }
                                    } else {
                                        votes[12] = 0;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[12] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 13
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 85.75) {
            if (rr_std <= 16.190052032470703) {
                if (rr_median <= 68.5) {
                    if (num_peaks <= 132.5) {
                        if (diastolic_time <= 0.05568786524236202) {
                            votes[13] = 4;
                        } else {
                            if (num_peaks <= 128.5) {
                                if (diastolic_time <= 0.1638452410697937) {
                                    if (num_peaks <= 105.5) {
                                        votes[13] = 4;
                                    } else {
                                        if (diastolic_time <= 0.08463096618652344) {
                                            votes[13] = 3;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    }
                                } else {
                                    votes[13] = 1;
                                }
                            } else {
                                if (diastolic_time <= 0.1259370855987072) {
                                    votes[13] = 1;
                                } else {
                                    votes[13] = 5;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 146.0) {
                            votes[13] = 3;
                        } else {
                            votes[13] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 13.34977388381958) {
                        if (diastolic_time <= 0.15604308247566223) {
                            if (rr_std <= 7.845821380615234) {
                                votes[13] = 5;
                            } else {
                                votes[13] = 5;
                            }
                        } else {
                            votes[13] = 3;
                        }
                    } else {
                        votes[13] = 3;
                    }
                }
            } else {
                if (num_peaks <= 134.0) {
                    if (rr_median <= 74.25) {
                        if (num_valleys <= 44.5) {
                            votes[13] = 3;
                        } else {
                            if (num_valleys <= 74.5) {
                                if (diastolic_time <= 0.17410390824079514) {
                                    if (rr_median <= 70.0) {
                                        if (num_peaks <= 127.5) {
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
                                votes[13] = 4;
                            }
                        }
                    } else {
                        if (rr_median <= 78.5) {
                            votes[13] = 5;
                        } else {
                            if (diastolic_time <= 0.13036631047725677) {
                                votes[13] = 3;
                            } else {
                                if (diastolic_time <= 0.17884444445371628) {
                                    votes[13] = 4;
                                } else {
                                    votes[13] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 32.416404724121094) {
                        if (num_valleys <= 73.0) {
                            votes[13] = 3;
                        } else {
                            votes[13] = 3;
                        }
                    } else {
                        votes[13] = 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.011158470064401627) {
                if (rr_std <= 15.233009338378906) {
                    votes[13] = 0;
                } else {
                    votes[13] = 0;
                }
            } else {
                if (rr_std <= 52.37446403503418) {
                    if (diastolic_time <= 0.09073016047477722) {
                        if (rr_std <= 0.7185138463973999) {
                            votes[13] = 4;
                        } else {
                            if (rr_median <= 135.25) {
                                if (num_peaks <= 126.5) {
                                    if (num_peaks <= 115.5) {
                                        votes[13] = 1;
                                    } else {
                                        votes[13] = 1;
                                    }
                                } else {
                                    if (rr_median <= 102.5) {
                                        votes[13] = 5;
                                    } else {
                                        votes[13] = 1;
                                    }
                                }
                            } else {
                                votes[13] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 13.420379161834717) {
                            if (rr_median <= 101.5) {
                                if (diastolic_time <= 0.11680784821510315) {
                                    votes[13] = 3;
                                } else {
                                    if (rr_median <= 90.5) {
                                        votes[13] = 1;
                                    } else {
                                        if (num_peaks <= 123.5) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 136.5) {
                                    votes[13] = 1;
                                } else {
                                    votes[13] = 1;
                                }
                            }
                        } else {
                            if (num_valleys <= 73.5) {
                                votes[13] = 4;
                            } else {
                                if (num_peaks <= 130.0) {
                                    votes[13] = 5;
                                } else {
                                    votes[13] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 67.5) {
                        if (num_peaks <= 92.5) {
                            votes[13] = 4;
                        } else {
                            votes[13] = 4;
                        }
                    } else {
                        votes[13] = 1;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_time <= 0.6426666676998138) {
                if (rr_median <= 75.25) {
                    if (rr_median <= 63.5) {
                        if (diastolic_time <= 0.347524031996727) {
                            if (rr_median <= 54.75) {
                                votes[13] = 3;
                            } else {
                                votes[13] = 3;
                            }
                        } else {
                            votes[13] = 2;
                        }
                    } else {
                        if (num_peaks <= 105.5) {
                            if (diastolic_time <= 0.5116166770458221) {
                                if (rr_median <= 69.25) {
                                    if (diastolic_time <= 0.34610000252723694) {
                                        if (num_valleys <= 57.5) {
                                            votes[13] = 2;
                                        } else {
                                            votes[13] = 2;
                                        }
                                    } else {
                                        votes[13] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 0.275111123919487) {
                                        votes[13] = 2;
                                    } else {
                                        votes[13] = 2;
                                    }
                                }
                            } else {
                                if (num_valleys <= 48.5) {
                                    votes[13] = 2;
                                } else {
                                    votes[13] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 6.500688284635544) {
                                if (rr_median <= 72.5) {
                                    votes[13] = 2;
                                } else {
                                    votes[13] = 5;
                                }
                            } else {
                                votes[13] = 0;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 11.306460857391357) {
                        if (rr_median <= 90.25) {
                            votes[13] = 5;
                        } else {
                            votes[13] = 5;
                        }
                    } else {
                        if (rr_std <= 52.389719009399414) {
                            if (num_peaks <= 96.0) {
                                if (rr_median <= 88.5) {
                                    if (rr_median <= 79.5) {
                                        votes[13] = 4;
                                    } else {
                                        votes[13] = 2;
                                    }
                                } else {
                                    votes[13] = 4;
                                }
                            } else {
                                votes[13] = 2;
                            }
                        } else {
                            votes[13] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 4.59311056137085) {
                    votes[13] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[13] = 1;
                    } else {
                        if (diastolic_time <= 0.7491111159324646) {
                            votes[13] = 1;
                        } else {
                            votes[13] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 7.609926223754883) {
                if (diastolic_time <= 0.46839216351509094) {
                    if (rr_median <= 73.5) {
                        votes[13] = 5;
                    } else {
                        votes[13] = 3;
                    }
                } else {
                    votes[13] = 5;
                }
            } else {
                if (diastolic_time <= 0.7767555415630341) {
                    if (diastolic_time <= 0.31310606002807617) {
                        if (rr_std <= 12.908605575561523) {
                            votes[13] = 3;
                        } else {
                            votes[13] = 0;
                        }
                    } else {
                        if (rr_median <= 52.25) {
                            votes[13] = 0;
                        } else {
                            if (rr_std <= 8.86708927154541) {
                                votes[13] = 0;
                            } else {
                                if (num_valleys <= 77.5) {
                                    if (num_valleys <= 73.5) {
                                        votes[13] = 0;
                                    } else {
                                        if (rr_std <= 13.166399002075195) {
                                            votes[13] = 0;
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
                } else {
                    votes[13] = 1;
                }
            }
        }
    }
// Decision rules for tree 14
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 99.25) {
            if (rr_std <= 14.17724084854126) {
                if (rr_median <= 68.5) {
                    if (num_valleys <= 69.0) {
                        if (num_valleys <= 62.5) {
                            votes[14] = 3;
                        } else {
                            if (rr_median <= 52.25) {
                                votes[14] = 3;
                            } else {
                                votes[14] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 9.712274551391602) {
                            votes[14] = 3;
                        } else {
                            if (rr_std <= 10.85793685913086) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 3;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.033569009974598885) {
                        votes[14] = 0;
                    } else {
                        if (num_peaks <= 96.0) {
                            votes[14] = 3;
                        } else {
                            if (num_valleys <= 58.5) {
                                votes[14] = 5;
                            } else {
                                if (rr_std <= 0.6495611071586609) {
                                    votes[14] = 5;
                                } else {
                                    if (rr_std <= 0.936164528131485) {
                                        votes[14] = 3;
                                    } else {
                                        if (num_peaks <= 131.0) {
                                            votes[14] = 5;
                                        } else {
                                            votes[14] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 129.5) {
                    if (diastolic_time <= 0.0433704387396574) {
                        if (rr_median <= 77.75) {
                            votes[14] = 4;
                        } else {
                            votes[14] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.11674128845334053) {
                            if (rr_median <= 66.0) {
                                if (rr_std <= 20.263039588928223) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 4;
                                }
                            } else {
                                if (num_valleys <= 64.5) {
                                    votes[14] = 5;
                                } else {
                                    if (rr_median <= 79.5) {
                                        votes[14] = 3;
                                    } else {
                                        votes[14] = 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 59.5) {
                                votes[14] = 4;
                            } else {
                                if (rr_std <= 17.628786087036133) {
                                    votes[14] = 4;
                                } else {
                                    if (diastolic_time <= 0.14667320251464844) {
                                        votes[14] = 4;
                                    } else {
                                        votes[14] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 32.416404724121094) {
                        if (rr_median <= 79.25) {
                            if (rr_median <= 55.25) {
                                votes[14] = 3;
                            } else {
                                if (rr_median <= 67.25) {
                                    votes[14] = 3;
                                } else {
                                    votes[14] = 3;
                                }
                            }
                        } else {
                            votes[14] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.11685507372021675) {
                            if (num_valleys <= 75.5) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 1;
                            }
                        } else {
                            votes[14] = 4;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 109.0) {
                if (num_peaks <= 86.0) {
                    votes[14] = 1;
                } else {
                    if (num_valleys <= 60.0) {
                        if (rr_median <= 158.75) {
                            votes[14] = 4;
                        } else {
                            votes[14] = 4;
                        }
                    } else {
                        votes[14] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.013421053066849709) {
                    votes[14] = 0;
                } else {
                    if (diastolic_time <= 0.09277376160025597) {
                        if (rr_median <= 111.0) {
                            if (rr_std <= 5.4211519956588745) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 1;
                            }
                        } else {
                            if (rr_median <= 176.5) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 12.992045402526855) {
                            votes[14] = 1;
                        } else {
                            votes[14] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_time <= 0.6243076920509338) {
                if (rr_std <= 0.6796177625656128) {
                    if (rr_median <= 74.25) {
                        if (rr_std <= 0.3970015197992325) {
                            votes[14] = 2;
                        } else {
                            if (num_peaks <= 91.0) {
                                votes[14] = 2;
                            } else {
                                if (num_valleys <= 59.5) {
                                    votes[14] = 2;
                                } else {
                                    if (num_peaks <= 104.0) {
                                        votes[14] = 2;
                                    } else {
                                        votes[14] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[14] = 5;
                    }
                } else {
                    if (rr_std <= 14.330915927886963) {
                        if (rr_median <= 64.0) {
                            votes[14] = 3;
                        } else {
                            if (rr_std <= 8.929394721984863) {
                                if (num_valleys <= 64.5) {
                                    votes[14] = 5;
                                } else {
                                    votes[14] = 5;
                                }
                            } else {
                                if (num_peaks <= 97.0) {
                                    votes[14] = 5;
                                } else {
                                    votes[14] = 0;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 89.5) {
                            if (num_peaks <= 104.5) {
                                if (num_valleys <= 46.5) {
                                    votes[14] = 2;
                                } else {
                                    if (num_peaks <= 88.0) {
                                        if (rr_std <= 26.761244773864746) {
                                            votes[14] = 2;
                                        } else {
                                            votes[14] = 4;
                                        }
                                    } else {
                                        if (rr_median <= 78.25) {
                                            votes[14] = 2;
                                        } else {
                                            votes[14] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 65.5) {
                                    votes[14] = 3;
                                } else {
                                    if (rr_std <= 26.525656700134277) {
                                        votes[14] = 0;
                                    } else {
                                        votes[14] = 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 43.795976638793945) {
                                if (diastolic_time <= 0.330499991774559) {
                                    votes[14] = 4;
                                } else {
                                    votes[14] = 4;
                                }
                            } else {
                                votes[14] = 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 11.351518630981445) {
                    votes[14] = 5;
                } else {
                    votes[14] = 1;
                }
            }
        } else {
            if (rr_std <= 7.493313550949097) {
                if (rr_median <= 70.0) {
                    votes[14] = 5;
                } else {
                    if (diastolic_time <= 0.4606666713953018) {
                        if (num_valleys <= 74.5) {
                            votes[14] = 3;
                        } else {
                            votes[14] = 3;
                        }
                    } else {
                        votes[14] = 5;
                    }
                }
            } else {
                if (rr_median <= 53.25) {
                    votes[14] = 1;
                } else {
                    if (diastolic_time <= 0.6281211972236633) {
                        if (rr_median <= 120.25) {
                            if (diastolic_time <= 0.29153968393802643) {
                                if (num_peaks <= 136.0) {
                                    votes[14] = 0;
                                } else {
                                    votes[14] = 0;
                                }
                            } else {
                                if (num_peaks <= 132.5) {
                                    if (num_valleys <= 73.5) {
                                        votes[14] = 0;
                                    } else {
                                        votes[14] = 0;
                                    }
                                } else {
                                    if (rr_std <= 27.78263759613037) {
                                        votes[14] = 0;
                                    } else {
                                        if (rr_std <= 30.57636260986328) {
                                            votes[14] = 0;
                                        } else {
                                            votes[14] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[14] = 0;
                        }
                    } else {
                        votes[14] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 15
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 99.25) {
            if (rr_std <= 16.006247520446777) {
                if (rr_median <= 68.75) {
                    if (num_valleys <= 51.5) {
                        votes[15] = 4;
                    } else {
                        if (rr_median <= 45.5) {
                            votes[15] = 1;
                        } else {
                            if (rr_std <= 10.030611991882324) {
                                if (num_peaks <= 132.5) {
                                    if (rr_median <= 52.25) {
                                        votes[15] = 3;
                                    } else {
                                        if (num_peaks <= 122.5) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 1;
                                        }
                                    }
                                } else {
                                    votes[15] = 3;
                                }
                            } else {
                                if (rr_std <= 10.75985860824585) {
                                    votes[15] = 1;
                                } else {
                                    if (num_peaks <= 127.5) {
                                        votes[15] = 3;
                                    } else {
                                        if (rr_median <= 56.75) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.01662295125424862) {
                        votes[15] = 0;
                    } else {
                        if (num_valleys <= 68.5) {
                            if (num_valleys <= 64.5) {
                                if (rr_median <= 90.5) {
                                    if (num_peaks <= 108.0) {
                                        votes[15] = 1;
                                    } else {
                                        votes[15] = 1;
                                    }
                                } else {
                                    votes[15] = 5;
                                }
                            } else {
                                votes[15] = 5;
                            }
                        } else {
                            if (rr_std <= 1.7382908463478088) {
                                votes[15] = 5;
                            } else {
                                if (rr_std <= 8.777254581451416) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 133.5) {
                    if (rr_median <= 75.5) {
                        if (num_valleys <= 72.5) {
                            if (diastolic_time <= 0.04952521063387394) {
                                votes[15] = 4;
                            } else {
                                if (diastolic_time <= 0.09831578657031059) {
                                    votes[15] = 3;
                                } else {
                                    if (num_peaks <= 109.0) {
                                        votes[15] = 4;
                                    } else {
                                        votes[15] = 4;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.14058974385261536) {
                                votes[15] = 4;
                            } else {
                                votes[15] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.10326851531863213) {
                            if (num_valleys <= 65.5) {
                                if (diastolic_time <= 0.05837116949260235) {
                                    votes[15] = 4;
                                } else {
                                    votes[15] = 5;
                                }
                            } else {
                                if (rr_std <= 35.009098052978516) {
                                    votes[15] = 3;
                                } else {
                                    votes[15] = 1;
                                }
                            }
                        } else {
                            if (rr_median <= 78.5) {
                                votes[15] = 5;
                            } else {
                                if (num_peaks <= 116.5) {
                                    votes[15] = 3;
                                } else {
                                    if (diastolic_time <= 0.1395789459347725) {
                                        votes[15] = 4;
                                    } else {
                                        votes[15] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.08476190268993378) {
                        if (num_valleys <= 75.5) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 1;
                        }
                    } else {
                        if (rr_median <= 83.5) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 64.5) {
                if (rr_std <= 39.50735664367676) {
                    if (rr_std <= 2.9892642498016357) {
                        votes[15] = 1;
                    } else {
                        votes[15] = 1;
                    }
                } else {
                    if (diastolic_time <= 0.05029345117509365) {
                        votes[15] = 4;
                    } else {
                        votes[15] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 0.11359436437487602) {
                    if (diastolic_time <= 0.027697463519871235) {
                        votes[15] = 0;
                    } else {
                        if (rr_std <= 70.67321395874023) {
                            if (rr_median <= 135.25) {
                                if (rr_std <= 27.325082778930664) {
                                    if (rr_std <= 8.816354751586914) {
                                        votes[15] = 1;
                                    } else {
                                        votes[15] = 1;
                                    }
                                } else {
                                    votes[15] = 1;
                                }
                            } else {
                                votes[15] = 1;
                            }
                        } else {
                            votes[15] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 13.420379161834717) {
                        votes[15] = 1;
                    } else {
                        votes[15] = 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (rr_std <= 31.09544563293457) {
                if (rr_median <= 88.0) {
                    if (num_valleys <= 61.5) {
                        if (diastolic_time <= 0.5394285917282104) {
                            if (rr_std <= 0.41066253185272217) {
                                votes[15] = 3;
                            } else {
                                if (num_valleys <= 51.5) {
                                    if (diastolic_time <= 0.4794999957084656) {
                                        if (rr_median <= 74.25) {
                                            votes[15] = 2;
                                        } else {
                                            votes[15] = 2;
                                        }
                                    } else {
                                        votes[15] = 2;
                                    }
                                } else {
                                    if (num_valleys <= 52.5) {
                                        votes[15] = 5;
                                    } else {
                                        if (num_peaks <= 86.0) {
                                            votes[15] = 2;
                                        } else {
                                            votes[15] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 70.5) {
                                votes[15] = 0;
                            } else {
                                votes[15] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 9.56583547592163) {
                            if (rr_std <= 1.0798233449459076) {
                                votes[15] = 3;
                            } else {
                                votes[15] = 5;
                            }
                        } else {
                            votes[15] = 0;
                        }
                    }
                } else {
                    if (rr_std <= 1.9654526114463806) {
                        votes[15] = 5;
                    } else {
                        if (rr_median <= 97.5) {
                            votes[15] = 4;
                        } else {
                            if (diastolic_time <= 0.7002908885478973) {
                                votes[15] = 1;
                            } else {
                                votes[15] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.7160444557666779) {
                    if (num_peaks <= 90.5) {
                        if (rr_median <= 98.25) {
                            votes[15] = 4;
                        } else {
                            votes[15] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.3180105835199356) {
                            votes[15] = 3;
                        } else {
                            if (num_peaks <= 117.5) {
                                votes[15] = 5;
                            } else {
                                votes[15] = 1;
                            }
                        }
                    }
                } else {
                    votes[15] = 1;
                }
            }
        } else {
            if (rr_std <= 7.789663076400757) {
                if (rr_std <= 5.344250917434692) {
                    if (num_valleys <= 76.5) {
                        votes[15] = 5;
                    } else {
                        if (diastolic_time <= 0.4219333380460739) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 5;
                        }
                    }
                } else {
                    votes[15] = 3;
                }
            } else {
                if (diastolic_time <= 0.2605561763048172) {
                    votes[15] = 5;
                } else {
                    if (diastolic_time <= 0.8386666774749756) {
                        if (num_peaks <= 124.5) {
                            if (diastolic_time <= 0.43648529052734375) {
                                votes[15] = 0;
                            } else {
                                votes[15] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.3309130519628525) {
                                if (num_peaks <= 139.0) {
                                    votes[15] = 0;
                                } else {
                                    votes[15] = 2;
                                }
                            } else {
                                if (num_valleys <= 74.5) {
                                    if (rr_std <= 13.310247421264648) {
                                        votes[15] = 0;
                                    } else {
                                        if (rr_std <= 28.456273078918457) {
                                            votes[15] = 0;
                                        } else {
                                            votes[15] = 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 53.22070121765137) {
                                        if (rr_std <= 11.857729434967041) {
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
                    } else {
                        votes[15] = 1;
                    }
                }
            }
        }
    }
// Decision rules for tree 16
    if (diastolic_time <= 0.23638258129358292) {
        if (rr_std <= 15.9564790725708) {
            if (rr_median <= 101.0) {
                if (rr_median <= 75.5) {
                    if (num_peaks <= 131.5) {
                        if (num_valleys <= 55.0) {
                            votes[16] = 4;
                        } else {
                            if (rr_median <= 54.5) {
                                if (diastolic_time <= 0.0995987094938755) {
                                    votes[16] = 3;
                                } else {
                                    votes[16] = 1;
                                }
                            } else {
                                if (num_valleys <= 76.0) {
                                    if (num_peaks <= 127.0) {
                                        if (diastolic_time <= 0.2158830389380455) {
                                            votes[16] = 3;
                                        } else {
                                            votes[16] = 2;
                                        }
                                    } else {
                                        votes[16] = 5;
                                    }
                                } else {
                                    votes[16] = 3;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 69.0) {
                            votes[16] = 3;
                        } else {
                            votes[16] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.03718486428260803) {
                        votes[16] = 0;
                    } else {
                        if (num_peaks <= 107.5) {
                            if (diastolic_time <= 0.1436040848493576) {
                                votes[16] = 1;
                            } else {
                                votes[16] = 5;
                            }
                        } else {
                            if (num_peaks <= 138.0) {
                                if (num_peaks <= 126.0) {
                                    if (diastolic_time <= 0.12221627682447433) {
                                        votes[16] = 5;
                                    } else {
                                        votes[16] = 5;
                                    }
                                } else {
                                    if (num_valleys <= 73.0) {
                                        votes[16] = 5;
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
                if (rr_std <= 0.5858343243598938) {
                    votes[16] = 4;
                } else {
                    if (diastolic_time <= 0.11791817471385002) {
                        if (rr_median <= 108.75) {
                            votes[16] = 1;
                        } else {
                            votes[16] = 1;
                        }
                    } else {
                        votes[16] = 1;
                    }
                }
            }
        } else {
            if (num_valleys <= 72.5) {
                if (diastolic_time <= 0.035669781267642975) {
                    if (diastolic_time <= 0.03305843472480774) {
                        votes[16] = 4;
                    } else {
                        votes[16] = 4;
                    }
                } else {
                    if (diastolic_time <= 0.08376157283782959) {
                        if (rr_median <= 78.0) {
                            votes[16] = 3;
                        } else {
                            if (num_valleys <= 62.5) {
                                votes[16] = 5;
                            } else {
                                votes[16] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 56.5) {
                            votes[16] = 3;
                        } else {
                            if (num_valleys <= 45.0) {
                                votes[16] = 4;
                            } else {
                                if (diastolic_time <= 0.12177366390824318) {
                                    if (rr_std <= 23.055084228515625) {
                                        votes[16] = 3;
                                    } else {
                                        votes[16] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 134.0) {
                                        if (rr_std <= 48.92392158508301) {
                                            votes[16] = 4;
                                        } else {
                                            votes[16] = 4;
                                        }
                                    } else {
                                        votes[16] = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.1267327293753624) {
                    if (rr_std <= 38.044015884399414) {
                        if (diastolic_time <= 0.07333928719162941) {
                            votes[16] = 3;
                        } else {
                            if (num_peaks <= 132.0) {
                                votes[16] = 5;
                            } else {
                                if (diastolic_time <= 0.08978527039289474) {
                                    votes[16] = 1;
                                } else {
                                    votes[16] = 1;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.03130515106022358) {
                            votes[16] = 1;
                        } else {
                            if (num_valleys <= 76.5) {
                                votes[16] = 1;
                            } else {
                                votes[16] = 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 131.0) {
                        if (diastolic_time <= 0.1484430804848671) {
                            votes[16] = 4;
                        } else {
                            votes[16] = 4;
                        }
                    } else {
                        votes[16] = 5;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 127.5) {
            if (diastolic_time <= 0.6263999938964844) {
                if (num_peaks <= 90.5) {
                    if (rr_median <= 89.0) {
                        if (rr_std <= 27.6544189453125) {
                            if (diastolic_time <= 0.5116166770458221) {
                                if (rr_median <= 74.25) {
                                    votes[16] = 2;
                                } else {
                                    votes[16] = 2;
                                }
                            } else {
                                votes[16] = 2;
                            }
                        } else {
                            votes[16] = 4;
                        }
                    } else {
                        if (rr_median <= 98.5) {
                            if (num_peaks <= 83.5) {
                                votes[16] = 4;
                            } else {
                                votes[16] = 4;
                            }
                        } else {
                            votes[16] = 5;
                        }
                    }
                } else {
                    if (num_valleys <= 69.5) {
                        if (rr_median <= 63.5) {
                            if (rr_median <= 54.75) {
                                votes[16] = 2;
                            } else {
                                votes[16] = 3;
                            }
                        } else {
                            if (rr_std <= 0.46826171875) {
                                votes[16] = 2;
                            } else {
                                if (rr_std <= 13.801342964172363) {
                                    if (rr_std <= 0.6467249393463135) {
                                        if (rr_median <= 71.0) {
                                            votes[16] = 3;
                                        } else {
                                            votes[16] = 2;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.4186588227748871) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 17.888453483581543) {
                                        votes[16] = 0;
                                    } else {
                                        if (num_valleys <= 50.0) {
                                            votes[16] = 4;
                                        } else {
                                            votes[16] = 2;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.31335116922855377) {
                            votes[16] = 5;
                        } else {
                            if (rr_std <= 11.879781246185303) {
                                votes[16] = 0;
                            } else {
                                votes[16] = 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    votes[16] = 5;
                } else {
                    if (rr_std <= 36.49445152282715) {
                        votes[16] = 1;
                    } else {
                        votes[16] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.789663076400757) {
                if (diastolic_time <= 0.40551111102104187) {
                    votes[16] = 3;
                } else {
                    votes[16] = 5;
                }
            } else {
                if (num_peaks <= 153.5) {
                    if (rr_median <= 54.75) {
                        if (diastolic_time <= 0.3765619099140167) {
                            votes[16] = 3;
                        } else {
                            votes[16] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.6289999783039093) {
                            if (diastolic_time <= 0.2809973508119583) {
                                votes[16] = 0;
                            } else {
                                if (diastolic_time <= 0.3249802440404892) {
                                    votes[16] = 0;
                                } else {
                                    if (rr_std <= 27.746240615844727) {
                                        votes[16] = 0;
                                    } else {
                                        if (rr_std <= 30.81499481201172) {
                                            votes[16] = 0;
                                        } else {
                                            votes[16] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 29.834999084472656) {
                                votes[16] = 0;
                            } else {
                                votes[16] = 2;
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
    if (diastolic_time <= 0.27653968334198) {
        if (rr_std <= 15.9564790725708) {
            if (rr_median <= 75.5) {
                if (diastolic_time <= 0.22217777371406555) {
                    if (rr_std <= 9.712274551391602) {
                        if (rr_std <= 1.2250682711601257) {
                            if (num_peaks <= 113.5) {
                                votes[17] = 3;
                            } else {
                                votes[17] = 1;
                            }
                        } else {
                            if (num_peaks <= 118.5) {
                                votes[17] = 3;
                            } else {
                                votes[17] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 10.75985860824585) {
                            if (rr_median <= 54.25) {
                                if (diastolic_time <= 0.10574347153306007) {
                                    votes[17] = 4;
                                } else {
                                    votes[17] = 1;
                                }
                            } else {
                                votes[17] = 5;
                            }
                        } else {
                            if (rr_median <= 53.0) {
                                votes[17] = 3;
                            } else {
                                if (rr_std <= 13.763606071472168) {
                                    votes[17] = 5;
                                } else {
                                    if (rr_std <= 15.036002159118652) {
                                        votes[17] = 3;
                                    } else {
                                        votes[17] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.6215836405754089) {
                        if (rr_std <= 0.5958648025989532) {
                            votes[17] = 2;
                        } else {
                            votes[17] = 2;
                        }
                    } else {
                        if (diastolic_time <= 0.2592346966266632) {
                            votes[17] = 3;
                        } else {
                            votes[17] = 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 99.25) {
                    if (diastolic_time <= 0.12759999930858612) {
                        if (diastolic_time <= 0.037549443542957306) {
                            votes[17] = 0;
                        } else {
                            if (num_peaks <= 106.0) {
                                votes[17] = 1;
                            } else {
                                if (num_peaks <= 135.5) {
                                    if (diastolic_time <= 0.0880114920437336) {
                                        votes[17] = 3;
                                    } else {
                                        votes[17] = 3;
                                    }
                                } else {
                                    votes[17] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 0.936164528131485) {
                            if (diastolic_time <= 0.16475510597229004) {
                                votes[17] = 1;
                            } else {
                                votes[17] = 5;
                            }
                        } else {
                            if (num_peaks <= 107.5) {
                                votes[17] = 5;
                            } else {
                                if (rr_median <= 77.75) {
                                    votes[17] = 5;
                                } else {
                                    votes[17] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.20786985754966736) {
                        votes[17] = 4;
                    } else {
                        if (diastolic_time <= 0.107558973133564) {
                            votes[17] = 1;
                        } else {
                            if (diastolic_time <= 0.14846289157867432) {
                                votes[17] = 5;
                            } else {
                                votes[17] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 72.5) {
                if (diastolic_time <= 0.035669781267642975) {
                    if (num_peaks <= 121.5) {
                        if (rr_median <= 107.25) {
                            votes[17] = 4;
                        } else {
                            votes[17] = 4;
                        }
                    } else {
                        votes[17] = 0;
                    }
                } else {
                    if (diastolic_time <= 0.10220186412334442) {
                        if (diastolic_time <= 0.06848334148526192) {
                            if (rr_median <= 92.5) {
                                votes[17] = 3;
                            } else {
                                votes[17] = 5;
                            }
                        } else {
                            if (num_peaks <= 102.5) {
                                votes[17] = 4;
                            } else {
                                if (num_valleys <= 63.5) {
                                    votes[17] = 5;
                                } else {
                                    if (rr_std <= 27.468436241149902) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.20452631264925003) {
                            if (num_peaks <= 133.5) {
                                if (rr_std <= 17.92826271057129) {
                                    votes[17] = 3;
                                } else {
                                    if (diastolic_time <= 0.11476721242070198) {
                                        votes[17] = 4;
                                    } else {
                                        if (num_peaks <= 117.0) {
                                            votes[17] = 4;
                                        } else {
                                            votes[17] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[17] = 3;
                            }
                        } else {
                            if (rr_std <= 28.581640243530273) {
                                votes[17] = 2;
                            } else {
                                if (rr_std <= 46.54218673706055) {
                                    votes[17] = 4;
                                } else {
                                    votes[17] = 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.07656653225421906) {
                    if (num_peaks <= 132.0) {
                        votes[17] = 1;
                    } else {
                        if (rr_median <= 103.75) {
                            votes[17] = 1;
                        } else {
                            votes[17] = 1;
                        }
                    }
                } else {
                    if (rr_median <= 83.25) {
                        if (rr_median <= 66.75) {
                            votes[17] = 3;
                        } else {
                            if (diastolic_time <= 0.1378421038389206) {
                                votes[17] = 5;
                            } else {
                                votes[17] = 4;
                            }
                        }
                    } else {
                        if (rr_median <= 124.0) {
                            if (diastolic_time <= 0.08876939490437508) {
                                votes[17] = 5;
                            } else {
                                votes[17] = 5;
                            }
                        } else {
                            votes[17] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 122.5) {
            if (diastolic_time <= 0.6157333254814148) {
                if (rr_median <= 81.75) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.5116166770458221) {
                            if (rr_median <= 74.25) {
                                votes[17] = 2;
                            } else {
                                votes[17] = 2;
                            }
                        } else {
                            votes[17] = 2;
                        }
                    } else {
                        if (rr_std <= 9.877063751220703) {
                            if (rr_std <= 2.6440684497356415) {
                                if (rr_median <= 69.5) {
                                    votes[17] = 3;
                                } else {
                                    if (rr_std <= 0.43653950095176697) {
                                        votes[17] = 2;
                                    } else {
                                        votes[17] = 2;
                                    }
                                }
                            } else {
                                votes[17] = 5;
                            }
                        } else {
                            if (num_peaks <= 107.5) {
                                if (diastolic_time <= 0.5327999889850616) {
                                    votes[17] = 2;
                                } else {
                                    votes[17] = 5;
                                }
                            } else {
                                if (diastolic_time <= 0.3632380962371826) {
                                    votes[17] = 0;
                                } else {
                                    votes[17] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 94.5) {
                        if (rr_median <= 98.5) {
                            if (diastolic_time <= 0.35681818425655365) {
                                votes[17] = 4;
                            } else {
                                votes[17] = 4;
                            }
                        } else {
                            votes[17] = 4;
                        }
                    } else {
                        votes[17] = 5;
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[17] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[17] = 1;
                    } else {
                        votes[17] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.789663076400757) {
                if (rr_median <= 77.5) {
                    votes[17] = 3;
                } else {
                    votes[17] = 5;
                }
            } else {
                if (rr_median <= 52.25) {
                    votes[17] = 3;
                } else {
                    if (rr_median <= 110.25) {
                        if (diastolic_time <= 0.7491999864578247) {
                            if (num_peaks <= 124.5) {
                                votes[17] = 0;
                            } else {
                                if (diastolic_time <= 0.3283478319644928) {
                                    votes[17] = 0;
                                } else {
                                    if (num_peaks <= 142.5) {
                                        votes[17] = 0;
                                    } else {
                                        if (num_peaks <= 144.5) {
                                            votes[17] = 0;
                                        } else {
                                            votes[17] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[17] = 0;
                        }
                    } else {
                        votes[17] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 18
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 82.75) {
            if (rr_std <= 16.190052032470703) {
                if (rr_median <= 62.75) {
                    if (rr_median <= 44.5) {
                        votes[18] = 1;
                    } else {
                        if (rr_std <= 11.44447660446167) {
                            if (rr_std <= 9.9332857131958) {
                                if (rr_median <= 47.5) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 3;
                                }
                            } else {
                                if (rr_median <= 51.75) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 3;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.07640722766518593) {
                                votes[18] = 4;
                            } else {
                                if (num_peaks <= 131.5) {
                                    votes[18] = 5;
                                } else {
                                    votes[18] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.6215836405754089) {
                        if (diastolic_time <= 0.22695424407720566) {
                            votes[18] = 2;
                        } else {
                            votes[18] = 2;
                        }
                    } else {
                        if (diastolic_time <= 0.06750373542308807) {
                            votes[18] = 1;
                        } else {
                            if (diastolic_time <= 0.2301277294754982) {
                                if (rr_std <= 6.931256055831909) {
                                    if (rr_std <= 1.2454505562782288) {
                                        votes[18] = 3;
                                    } else {
                                        votes[18] = 3;
                                    }
                                } else {
                                    if (rr_std <= 13.426971435546875) {
                                        votes[18] = 5;
                                    } else {
                                        votes[18] = 3;
                                    }
                                }
                            } else {
                                votes[18] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 134.0) {
                    if (diastolic_time <= 0.2394995093345642) {
                        if (rr_std <= 19.443531036376953) {
                            if (diastolic_time <= 0.13846635073423386) {
                                votes[18] = 3;
                            } else {
                                votes[18] = 4;
                            }
                        } else {
                            if (rr_median <= 76.0) {
                                if (num_valleys <= 72.5) {
                                    if (diastolic_time <= 0.16422530263662338) {
                                        if (rr_median <= 70.5) {
                                            votes[18] = 4;
                                        } else {
                                            votes[18] = 4;
                                        }
                                    } else {
                                        votes[18] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 0.1484430804848671) {
                                        votes[18] = 4;
                                    } else {
                                        votes[18] = 4;
                                    }
                                }
                            } else {
                                if (rr_std <= 34.20921516418457) {
                                    votes[18] = 3;
                                } else {
                                    votes[18] = 4;
                                }
                            }
                        }
                    } else {
                        votes[18] = 3;
                    }
                } else {
                    if (num_valleys <= 73.5) {
                        votes[18] = 3;
                    } else {
                        if (rr_median <= 69.5) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 5;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.0879238098859787) {
                if (diastolic_time <= 0.012326284311711788) {
                    if (rr_median <= 100.0) {
                        votes[18] = 0;
                    } else {
                        votes[18] = 2;
                    }
                } else {
                    if (rr_median <= 203.5) {
                        if (num_valleys <= 62.5) {
                            if (diastolic_time <= 0.034525828436017036) {
                                votes[18] = 4;
                            } else {
                                if (num_valleys <= 53.5) {
                                    votes[18] = 1;
                                } else {
                                    votes[18] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 106.75) {
                                if (rr_std <= 38.044015884399414) {
                                    if (num_peaks <= 121.0) {
                                        votes[18] = 1;
                                    } else {
                                        if (diastolic_time <= 0.07238928601145744) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 1;
                                        }
                                    }
                                } else {
                                    votes[18] = 1;
                                }
                            } else {
                                if (rr_std <= 4.818255186080933) {
                                    votes[18] = 1;
                                } else {
                                    votes[18] = 1;
                                }
                            }
                        }
                    } else {
                        votes[18] = 4;
                    }
                }
            } else {
                if (rr_std <= 14.049257755279541) {
                    if (rr_median <= 101.5) {
                        if (diastolic_time <= 0.15559059381484985) {
                            if (num_valleys <= 72.5) {
                                votes[18] = 1;
                            } else {
                                votes[18] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.20358973741531372) {
                                votes[18] = 5;
                            } else {
                                votes[18] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.14583589881658554) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 1;
                        }
                    }
                } else {
                    if (num_valleys <= 73.5) {
                        if (rr_median <= 114.0) {
                            if (rr_std <= 18.988520622253418) {
                                votes[18] = 3;
                            } else {
                                if (num_valleys <= 70.0) {
                                    if (num_valleys <= 58.0) {
                                        votes[18] = 4;
                                    } else {
                                        votes[18] = 4;
                                    }
                                } else {
                                    votes[18] = 4;
                                }
                            }
                        } else {
                            votes[18] = 5;
                        }
                    } else {
                        if (rr_median <= 120.0) {
                            if (rr_median <= 97.0) {
                                votes[18] = 5;
                            } else {
                                votes[18] = 5;
                            }
                        } else {
                            votes[18] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (rr_median <= 81.75) {
                if (num_peaks <= 90.5) {
                    if (rr_std <= 31.615514755249023) {
                        if (diastolic_time <= 0.5076166689395905) {
                            if (rr_median <= 74.25) {
                                votes[18] = 2;
                            } else {
                                votes[18] = 2;
                            }
                        } else {
                            if (num_valleys <= 47.0) {
                                votes[18] = 5;
                            } else {
                                votes[18] = 2;
                            }
                        }
                    } else {
                        votes[18] = 1;
                    }
                } else {
                    if (rr_median <= 69.5) {
                        if (rr_median <= 64.75) {
                            votes[18] = 3;
                        } else {
                            if (rr_std <= 11.769414901733398) {
                                votes[18] = 5;
                            } else {
                                votes[18] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 1.1070356667041779) {
                            if (diastolic_time <= 0.4156000018119812) {
                                votes[18] = 2;
                            } else {
                                votes[18] = 2;
                            }
                        } else {
                            if (num_valleys <= 59.0) {
                                votes[18] = 2;
                            } else {
                                if (diastolic_time <= 0.3320838063955307) {
                                    votes[18] = 0;
                                } else {
                                    votes[18] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6040922999382019) {
                    if (rr_std <= 3.639171063899994) {
                        votes[18] = 5;
                    } else {
                        if (num_peaks <= 94.5) {
                            if (rr_median <= 98.5) {
                                if (rr_median <= 92.0) {
                                    votes[18] = 4;
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                votes[18] = 4;
                            }
                        } else {
                            votes[18] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 7.973716974258423) {
                        votes[18] = 5;
                    } else {
                        if (num_peaks <= 98.0) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 5.734574556350708) {
                votes[18] = 5;
            } else {
                if (diastolic_time <= 0.8091999888420105) {
                    if (diastolic_time <= 0.350758895277977) {
                        if (rr_median <= 60.25) {
                            votes[18] = 3;
                        } else {
                            if (rr_std <= 14.726224422454834) {
                                votes[18] = 0;
                            } else {
                                votes[18] = 0;
                            }
                        }
                    } else {
                        if (num_peaks <= 132.5) {
                            if (rr_std <= 17.032129764556885) {
                                votes[18] = 0;
                            } else {
                                votes[18] = 0;
                            }
                        } else {
                            if (num_valleys <= 77.5) {
                                if (rr_median <= 55.75) {
                                    votes[18] = 0;
                                } else {
                                    if (num_valleys <= 76.5) {
                                        if (rr_median <= 61.5) {
                                            votes[18] = 0;
                                        } else {
                                            votes[18] = 0;
                                        }
                                    } else {
                                        votes[18] = 0;
                                    }
                                }
                            } else {
                                votes[18] = 0;
                            }
                        }
                    }
                } else {
                    votes[18] = 1;
                }
            }
        }
    }
// Decision rules for tree 19
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 86.25) {
            if (rr_std <= 16.939903259277344) {
                if (rr_median <= 66.5) {
                    if (num_peaks <= 130.0) {
                        if (rr_std <= 9.218300342559814) {
                            if (num_valleys <= 67.0) {
                                votes[19] = 3;
                            } else {
                                votes[19] = 3;
                            }
                        } else {
                            if (rr_std <= 10.51915693283081) {
                                votes[19] = 1;
                            } else {
                                if (num_peaks <= 117.5) {
                                    votes[19] = 4;
                                } else {
                                    votes[19] = 3;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 146.5) {
                            if (rr_median <= 62.0) {
                                if (rr_std <= 11.394558429718018) {
                                    votes[19] = 3;
                                } else {
                                    votes[19] = 3;
                                }
                            } else {
                                votes[19] = 3;
                            }
                        } else {
                            votes[19] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 67.5) {
                        votes[19] = 2;
                    } else {
                        if (rr_std <= 14.71822214126587) {
                            if (rr_median <= 75.5) {
                                if (num_peaks <= 106.5) {
                                    votes[19] = 5;
                                } else {
                                    if (rr_std <= 8.458691596984863) {
                                        if (num_peaks <= 122.5) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        votes[19] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.17560217529535294) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 3;
                                }
                            }
                        } else {
                            votes[19] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (diastolic_time <= 0.1808118373155594) {
                        if (num_valleys <= 72.5) {
                            if (num_peaks <= 112.0) {
                                if (diastolic_time <= 0.043277012184262276) {
                                    votes[19] = 4;
                                } else {
                                    if (num_peaks <= 89.5) {
                                        votes[19] = 4;
                                    } else {
                                        votes[19] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 19.974384307861328) {
                                    votes[19] = 4;
                                } else {
                                    votes[19] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.14058974385261536) {
                                if (diastolic_time <= 0.09821410104632378) {
                                    votes[19] = 1;
                                } else {
                                    votes[19] = 5;
                                }
                            } else {
                                votes[19] = 4;
                            }
                        }
                    } else {
                        if (rr_median <= 64.0) {
                            votes[19] = 3;
                        } else {
                            if (num_valleys <= 66.0) {
                                votes[19] = 4;
                            } else {
                                votes[19] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 63.0) {
                        votes[19] = 1;
                    } else {
                        if (rr_median <= 78.5) {
                            votes[19] = 3;
                        } else {
                            votes[19] = 5;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.011158470064401627) {
                if (rr_median <= 100.0) {
                    votes[19] = 0;
                } else {
                    votes[19] = 4;
                }
            } else {
                if (diastolic_time <= 0.09073016047477722) {
                    if (rr_median <= 203.5) {
                        if (rr_median <= 136.75) {
                            if (diastolic_time <= 0.03425883129239082) {
                                if (diastolic_time <= 0.029631484299898148) {
                                    votes[19] = 1;
                                } else {
                                    votes[19] = 4;
                                }
                            } else {
                                if (num_valleys <= 75.5) {
                                    if (num_valleys <= 68.5) {
                                        if (num_valleys <= 58.5) {
                                            votes[19] = 1;
                                        } else {
                                            votes[19] = 1;
                                        }
                                    } else {
                                        votes[19] = 1;
                                    }
                                } else {
                                    if (rr_median <= 104.5) {
                                        votes[19] = 1;
                                    } else {
                                        votes[19] = 5;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.04359431006014347) {
                                votes[19] = 1;
                            } else {
                                votes[19] = 1;
                            }
                        }
                    } else {
                        votes[19] = 4;
                    }
                } else {
                    if (rr_std <= 19.230527877807617) {
                        if (rr_median <= 102.5) {
                            if (diastolic_time <= 0.15559059381484985) {
                                if (num_peaks <= 120.0) {
                                    votes[19] = 1;
                                } else {
                                    votes[19] = 5;
                                }
                            } else {
                                votes[19] = 5;
                            }
                        } else {
                            if (rr_std <= 7.0045366287231445) {
                                votes[19] = 1;
                            } else {
                                votes[19] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 132.0) {
                            if (diastolic_time <= 0.1273948699235916) {
                                votes[19] = 1;
                            } else {
                                if (rr_std <= 51.25558280944824) {
                                    if (num_valleys <= 68.0) {
                                        votes[19] = 4;
                                    } else {
                                        votes[19] = 4;
                                    }
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
        }
    } else {
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.6243076920509338) {
                if (rr_median <= 75.25) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.5076166689395905) {
                            if (rr_median <= 73.5) {
                                votes[19] = 2;
                            } else {
                                votes[19] = 2;
                            }
                        } else {
                            if (diastolic_time <= 0.5596923232078552) {
                                votes[19] = 5;
                            } else {
                                votes[19] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 63.5) {
                            votes[19] = 3;
                        } else {
                            if (rr_std <= 0.45024123787879944) {
                                votes[19] = 2;
                            } else {
                                if (rr_std <= 14.375516891479492) {
                                    if (num_valleys <= 54.0) {
                                        votes[19] = 5;
                                    } else {
                                        if (rr_std <= 0.6633186936378479) {
                                            votes[19] = 2;
                                        } else {
                                            votes[19] = 5;
                                        }
                                    }
                                } else {
                                    votes[19] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 14.40456771850586) {
                        if (rr_median <= 89.25) {
                            votes[19] = 5;
                        } else {
                            votes[19] = 5;
                        }
                    } else {
                        if (rr_median <= 88.5) {
                            if (diastolic_time <= 0.3336363583803177) {
                                votes[19] = 2;
                            } else {
                                if (rr_std <= 29.722362518310547) {
                                    votes[19] = 4;
                                } else {
                                    votes[19] = 2;
                                }
                            }
                        } else {
                            if (rr_median <= 98.5) {
                                votes[19] = 4;
                            } else {
                                votes[19] = 4;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    votes[19] = 1;
                } else {
                    if (rr_median <= 79.5) {
                        votes[19] = 1;
                    } else {
                        votes[19] = 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.8351111114025116) {
                if (rr_std <= 4.10710084438324) {
                    votes[19] = 5;
                } else {
                    if (diastolic_time <= 0.3460632413625717) {
                        if (rr_median <= 65.5) {
                            votes[19] = 3;
                        } else {
                            votes[19] = 0;
                        }
                    } else {
                        if (num_peaks <= 124.5) {
                            votes[19] = 0;
                        } else {
                            if (rr_std <= 33.35643196105957) {
                                if (num_valleys <= 74.5) {
                                    votes[19] = 0;
                                } else {
                                    if (rr_std <= 27.906907081604004) {
                                        votes[19] = 0;
                                    } else {
                                        if (rr_std <= 29.91045093536377) {
                                            votes[19] = 0;
                                        } else {
                                            votes[19] = 0;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 89.75) {
                                    votes[19] = 0;
                                } else {
                                    votes[19] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                votes[19] = 1;
            }
        }
    }
// Decision rules for tree 20
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_std <= 14.178498268127441) {
            if (rr_median <= 76.25) {
                if (rr_median <= 47.75) {
                    if (diastolic_time <= 0.08759864047169685) {
                        votes[20] = 4;
                    } else {
                        votes[20] = 1;
                    }
                } else {
                    if (rr_median <= 68.75) {
                        if (diastolic_time <= 0.21377193182706833) {
                            if (rr_std <= 9.910547733306885) {
                                if (diastolic_time <= 0.07075580582022667) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 3;
                                }
                            } else {
                                if (rr_std <= 10.75985860824585) {
                                    votes[20] = 1;
                                } else {
                                    votes[20] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 109.0) {
                                votes[20] = 2;
                            } else {
                                votes[20] = 1;
                            }
                        }
                    } else {
                        if (num_valleys <= 65.5) {
                            votes[20] = 5;
                        } else {
                            if (rr_median <= 69.5) {
                                votes[20] = 5;
                            } else {
                                if (rr_std <= 8.777254581451416) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 99.5) {
                    if (diastolic_time <= 0.034256696701049805) {
                        votes[20] = 0;
                    } else {
                        if (diastolic_time <= 0.16641546040773392) {
                            if (rr_median <= 85.0) {
                                votes[20] = 5;
                            } else {
                                if (rr_median <= 95.5) {
                                    if (num_peaks <= 112.5) {
                                        votes[20] = 1;
                                    } else {
                                        votes[20] = 1;
                                    }
                                } else {
                                    votes[20] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.2031794860959053) {
                                votes[20] = 5;
                            } else {
                                votes[20] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.3499270975589752) {
                        votes[20] = 4;
                    } else {
                        if (rr_median <= 133.5) {
                            votes[20] = 1;
                        } else {
                            votes[20] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 73.5) {
                if (num_peaks <= 134.0) {
                    if (diastolic_time <= 0.035669781267642975) {
                        if (num_peaks <= 120.5) {
                            votes[20] = 4;
                        } else {
                            votes[20] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.1139594204723835) {
                            if (diastolic_time <= 0.06186790019273758) {
                                votes[20] = 1;
                            } else {
                                if (rr_std <= 26.47059440612793) {
                                    if (rr_median <= 67.5) {
                                        votes[20] = 4;
                                    } else {
                                        votes[20] = 3;
                                    }
                                } else {
                                    if (rr_median <= 98.5) {
                                        votes[20] = 5;
                                    } else {
                                        votes[20] = 1;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.23049747943878174) {
                                if (rr_median <= 59.0) {
                                    votes[20] = 2;
                                } else {
                                    if (diastolic_time <= 0.14667320251464844) {
                                        if (num_peaks <= 124.5) {
                                            votes[20] = 3;
                                        } else {
                                            votes[20] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 52.12205505371094) {
                                            votes[20] = 4;
                                        } else {
                                            votes[20] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[20] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 80.0) {
                        votes[20] = 3;
                    } else {
                        votes[20] = 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.12519486993551254) {
                    if (rr_median <= 112.0) {
                        if (rr_std <= 39.516366958618164) {
                            if (diastolic_time <= 0.0949917696416378) {
                                if (num_peaks <= 137.5) {
                                    votes[20] = 3;
                                } else {
                                    votes[20] = 5;
                                }
                            } else {
                                votes[20] = 1;
                            }
                        } else {
                            votes[20] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.08332240208983421) {
                            votes[20] = 1;
                        } else {
                            votes[20] = 1;
                        }
                    }
                } else {
                    if (rr_median <= 83.25) {
                        if (num_peaks <= 131.0) {
                            votes[20] = 4;
                        } else {
                            votes[20] = 0;
                        }
                    } else {
                        votes[20] = 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 81.75) {
                if (num_peaks <= 99.0) {
                    if (diastolic_time <= 0.5116166770458221) {
                        if (num_peaks <= 90.5) {
                            if (rr_std <= 28.37512969970703) {
                                votes[20] = 2;
                            } else {
                                votes[20] = 2;
                            }
                        } else {
                            if (rr_median <= 69.5) {
                                votes[20] = 5;
                            } else {
                                votes[20] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 21.091126441955566) {
                            votes[20] = 5;
                        } else {
                            if (num_valleys <= 48.5) {
                                votes[20] = 1;
                            } else {
                                votes[20] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 11.763140678405762) {
                        if (rr_std <= 0.6533262431621552) {
                            if (rr_std <= 0.48975545167922974) {
                                votes[20] = 2;
                            } else {
                                votes[20] = 2;
                            }
                        } else {
                            votes[20] = 5;
                        }
                    } else {
                        if (rr_median <= 67.5) {
                            votes[20] = 1;
                        } else {
                            votes[20] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8445000052452087) {
                    if (rr_std <= 9.653970956802368) {
                        if (num_peaks <= 81.5) {
                            votes[20] = 5;
                        } else {
                            votes[20] = 5;
                        }
                    } else {
                        if (num_valleys <= 59.0) {
                            if (rr_median <= 98.5) {
                                if (rr_median <= 88.5) {
                                    votes[20] = 2;
                                } else {
                                    votes[20] = 4;
                                }
                            } else {
                                votes[20] = 1;
                            }
                        } else {
                            votes[20] = 2;
                        }
                    }
                } else {
                    votes[20] = 1;
                }
            }
        } else {
            if (diastolic_time <= 0.8351111114025116) {
                if (rr_std <= 5.734574556350708) {
                    if (rr_median <= 87.25) {
                        votes[20] = 3;
                    } else {
                        votes[20] = 5;
                    }
                } else {
                    if (rr_median <= 53.25) {
                        if (diastolic_time <= 0.3765619099140167) {
                            votes[20] = 3;
                        } else {
                            votes[20] = 0;
                        }
                    } else {
                        if (rr_std <= 8.86708927154541) {
                            if (num_valleys <= 72.5) {
                                votes[20] = 5;
                            } else {
                                votes[20] = 0;
                            }
                        } else {
                            if (diastolic_time <= 0.31310606002807617) {
                                if (rr_median <= 74.75) {
                                    votes[20] = 0;
                                } else {
                                    votes[20] = 5;
                                }
                            } else {
                                if (num_valleys <= 77.5) {
                                    if (num_valleys <= 73.5) {
                                        if (rr_median <= 87.0) {
                                            votes[20] = 0;
                                        } else {
                                            votes[20] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 136.5) {
                                            votes[20] = 0;
                                        } else {
                                            votes[20] = 0;
                                        }
                                    }
                                } else {
                                    votes[20] = 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 83.5) {
                    votes[20] = 1;
                } else {
                    votes[20] = 1;
                }
            }
        }
    }
// Decision rules for tree 21
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_median <= 99.25) {
            if (rr_std <= 16.006247520446777) {
                if (rr_median <= 69.5) {
                    if (num_peaks <= 131.5) {
                        if (diastolic_time <= 0.05568786524236202) {
                            votes[21] = 4;
                        } else {
                            if (rr_median <= 66.5) {
                                if (num_peaks <= 128.5) {
                                    if (num_peaks <= 119.5) {
                                        if (num_valleys <= 59.5) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 123.5) {
                                            votes[21] = 1;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    }
                                } else {
                                    votes[21] = 5;
                                }
                            } else {
                                votes[21] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 10.076533794403076) {
                            votes[21] = 3;
                        } else {
                            if (rr_std <= 11.178122520446777) {
                                votes[21] = 1;
                            } else {
                                votes[21] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 142.5) {
                        if (num_valleys <= 66.5) {
                            if (rr_std <= 8.08211064338684) {
                                if (rr_std <= 1.0319172739982605) {
                                    if (rr_median <= 89.75) {
                                        if (rr_median <= 85.0) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 1;
                                        }
                                    } else {
                                        votes[21] = 5;
                                    }
                                } else {
                                    votes[21] = 5;
                                }
                            } else {
                                votes[21] = 1;
                            }
                        } else {
                            if (num_valleys <= 71.5) {
                                if (num_peaks <= 118.5) {
                                    votes[21] = 3;
                                } else {
                                    votes[21] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.16369444876909256) {
                                    if (num_peaks <= 131.5) {
                                        if (rr_std <= 9.842913627624512) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    } else {
                                        votes[21] = 5;
                                    }
                                } else {
                                    votes[21] = 3;
                                }
                            }
                        }
                    } else {
                        votes[21] = 0;
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (rr_median <= 75.5) {
                        if (num_valleys <= 73.5) {
                            if (num_valleys <= 61.5) {
                                if (rr_median <= 63.0) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 4;
                                }
                            } else {
                                if (rr_std <= 20.045766830444336) {
                                    votes[21] = 4;
                                } else {
                                    if (rr_median <= 70.5) {
                                        votes[21] = 4;
                                    } else {
                                        votes[21] = 4;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.12265978753566742) {
                                votes[21] = 1;
                            } else {
                                votes[21] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.11986895278096199) {
                            if (rr_std <= 25.029911994934082) {
                                votes[21] = 3;
                            } else {
                                if (num_valleys <= 73.0) {
                                    if (diastolic_time <= 0.07771603763103485) {
                                        votes[21] = 4;
                                    } else {
                                        votes[21] = 5;
                                    }
                                } else {
                                    votes[21] = 1;
                                }
                            }
                        } else {
                            if (num_peaks <= 117.0) {
                                votes[21] = 3;
                            } else {
                                if (rr_median <= 78.5) {
                                    votes[21] = 4;
                                } else {
                                    if (diastolic_time <= 0.14836926758289337) {
                                        votes[21] = 4;
                                    } else {
                                        votes[21] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 82.5) {
                        if (diastolic_time <= 0.10128447785973549) {
                            if (diastolic_time <= 0.07976863533258438) {
                                votes[21] = 3;
                            } else {
                                votes[21] = 1;
                            }
                        } else {
                            votes[21] = 3;
                        }
                    } else {
                        votes[21] = 0;
                    }
                }
            }
        } else {
            if (num_valleys <= 59.5) {
                if (num_peaks <= 86.0) {
                    votes[21] = 3;
                } else {
                    if (rr_std <= 39.50735664367676) {
                        votes[21] = 4;
                    } else {
                        if (num_valleys <= 51.0) {
                            votes[21] = 4;
                        } else {
                            votes[21] = 4;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.09277376160025597) {
                    if (diastolic_time <= 0.030695132911205292) {
                        votes[21] = 2;
                    } else {
                        if (rr_std <= 2.7739559412002563) {
                            votes[21] = 1;
                        } else {
                            if (num_valleys <= 70.0) {
                                if (diastolic_time <= 0.05308840051293373) {
                                    votes[21] = 1;
                                } else {
                                    votes[21] = 1;
                                }
                            } else {
                                votes[21] = 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 4.660868167877197) {
                        votes[21] = 1;
                    } else {
                        if (num_valleys <= 76.5) {
                            votes[21] = 1;
                        } else {
                            votes[21] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_time <= 0.6167076826095581) {
                if (num_peaks <= 101.0) {
                    if (rr_median <= 74.25) {
                        if (diastolic_time <= 0.4794999957084656) {
                            if (num_peaks <= 90.0) {
                                votes[21] = 2;
                            } else {
                                votes[21] = 2;
                            }
                        } else {
                            if (num_peaks <= 82.5) {
                                votes[21] = 2;
                            } else {
                                if (diastolic_time <= 0.5596923232078552) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 13.485650062561035) {
                            votes[21] = 5;
                        } else {
                            if (rr_median <= 88.5) {
                                if (rr_median <= 81.75) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 2;
                                }
                            } else {
                                if (rr_median <= 98.5) {
                                    votes[21] = 4;
                                } else {
                                    votes[21] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.6533262431621552) {
                        if (diastolic_time <= 0.3394387364387512) {
                            votes[21] = 2;
                        } else {
                            votes[21] = 2;
                        }
                    } else {
                        if (num_peaks <= 113.5) {
                            if (rr_median <= 64.0) {
                                votes[21] = 3;
                            } else {
                                if (rr_std <= 11.930315971374512) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 0;
                                }
                            }
                        } else {
                            if (rr_std <= 14.905333995819092) {
                                votes[21] = 5;
                            } else {
                                if (rr_median <= 74.0) {
                                    votes[21] = 0;
                                } else {
                                    votes[21] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 10.160232543945312) {
                    if (num_valleys <= 55.5) {
                        votes[21] = 1;
                    } else {
                        votes[21] = 5;
                    }
                } else {
                    if (rr_std <= 34.10536193847656) {
                        votes[21] = 1;
                    } else {
                        votes[21] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.789663076400757) {
                if (num_valleys <= 74.5) {
                    votes[21] = 5;
                } else {
                    if (num_valleys <= 77.5) {
                        votes[21] = 3;
                    } else {
                        votes[21] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.7767555415630341) {
                    if (diastolic_time <= 0.2809973508119583) {
                        votes[21] = 5;
                    } else {
                        if (rr_median <= 52.25) {
                            votes[21] = 0;
                        } else {
                            if (num_valleys <= 70.5) {
                                if (num_peaks <= 143.0) {
                                    votes[21] = 0;
                                } else {
                                    votes[21] = 2;
                                }
                            } else {
                                if (num_valleys <= 77.5) {
                                    if (num_valleys <= 75.5) {
                                        if (diastolic_time <= 0.32698024809360504) {
                                            votes[21] = 0;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.47201667726039886) {
                                            votes[21] = 0;
                                        } else {
                                            votes[21] = 0;
                                        }
                                    }
                                } else {
                                    votes[21] = 0;
                                }
                            }
                        }
                    }
                } else {
                    votes[21] = 2;
                }
            }
        }
    }
// Decision rules for tree 22
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_std <= 15.967272281646729) {
            if (rr_median <= 68.75) {
                if (num_peaks <= 131.5) {
                    if (num_peaks <= 127.5) {
                        if (rr_median <= 47.75) {
                            votes[22] = 4;
                        } else {
                            if (rr_std <= 9.02013874053955) {
                                if (diastolic_time <= 0.07557966932654381) {
                                    votes[22] = 3;
                                } else {
                                    votes[22] = 3;
                                }
                            } else {
                                votes[22] = 3;
                            }
                        }
                    } else {
                        votes[22] = 5;
                    }
                } else {
                    if (num_valleys <= 82.0) {
                        votes[22] = 3;
                    } else {
                        votes[22] = 3;
                    }
                }
            } else {
                if (rr_median <= 99.25) {
                    if (num_peaks <= 142.5) {
                        if (num_peaks <= 107.5) {
                            if (rr_median <= 76.25) {
                                votes[22] = 3;
                            } else {
                                if (rr_median <= 90.0) {
                                    votes[22] = 1;
                                } else {
                                    votes[22] = 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.12970967590808868) {
                                if (diastolic_time <= 0.07170557230710983) {
                                    votes[22] = 5;
                                } else {
                                    if (rr_median <= 94.25) {
                                        votes[22] = 3;
                                    } else {
                                        votes[22] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 7.664135932922363) {
                                    if (rr_std <= 0.67787766456604) {
                                        votes[22] = 5;
                                    } else {
                                        votes[22] = 3;
                                    }
                                } else {
                                    votes[22] = 5;
                                }
                            }
                        }
                    } else {
                        votes[22] = 0;
                    }
                } else {
                    if (rr_std <= 0.37796446681022644) {
                        votes[22] = 4;
                    } else {
                        if (diastolic_time <= 0.11229859292507172) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 128.5) {
                if (rr_median <= 86.5) {
                    if (rr_median <= 75.5) {
                        if (num_valleys <= 71.5) {
                            if (rr_median <= 56.5) {
                                if (diastolic_time <= 0.03336065448820591) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 3;
                                }
                            } else {
                                votes[22] = 4;
                            }
                        } else {
                            if (diastolic_time <= 0.11432542279362679) {
                                votes[22] = 4;
                            } else {
                                votes[22] = 4;
                            }
                        }
                    } else {
                        if (rr_median <= 78.5) {
                            votes[22] = 5;
                        } else {
                            if (diastolic_time <= 0.13158470392227173) {
                                votes[22] = 3;
                            } else {
                                if (diastolic_time <= 0.17884444445371628) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 67.5) {
                        if (rr_std <= 37.85541915893555) {
                            votes[22] = 1;
                        } else {
                            if (diastolic_time <= 0.0355516392737627) {
                                if (rr_std <= 75.10125732421875) {
                                    votes[22] = 4;
                                } else {
                                    votes[22] = 4;
                                }
                            } else {
                                votes[22] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 38.995399475097656) {
                            votes[22] = 3;
                        } else {
                            votes[22] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.11685507372021675) {
                    if (rr_median <= 113.25) {
                        if (num_peaks <= 132.0) {
                            votes[22] = 5;
                        } else {
                            if (rr_std <= 20.73285961151123) {
                                votes[22] = 3;
                            } else {
                                if (diastolic_time <= 0.021452631801366806) {
                                    votes[22] = 0;
                                } else {
                                    if (num_peaks <= 136.5) {
                                        votes[22] = 1;
                                    } else {
                                        votes[22] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.07647693157196045) {
                            votes[22] = 1;
                        } else {
                            votes[22] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 131.5) {
                        votes[22] = 4;
                    } else {
                        if (rr_std <= 32.416404724121094) {
                            votes[22] = 3;
                        } else {
                            votes[22] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 70.5) {
            if (diastolic_time <= 0.7064000070095062) {
                if (rr_std <= 0.6467249393463135) {
                    if (rr_std <= 0.41066253185272217) {
                        votes[22] = 3;
                    } else {
                        if (rr_median <= 74.25) {
                            if (rr_median <= 69.5) {
                                if (rr_std <= 0.5734450221061707) {
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
                    }
                } else {
                    if (rr_std <= 11.753142356872559) {
                        if (rr_median <= 96.5) {
                            if (num_peaks <= 82.5) {
                                votes[22] = 2;
                            } else {
                                if (rr_std <= 0.906762957572937) {
                                    if (rr_std <= 0.7440522015094757) {
                                        votes[22] = 5;
                                    } else {
                                        votes[22] = 5;
                                    }
                                } else {
                                    if (diastolic_time <= 0.5056000053882599) {
                                        votes[22] = 5;
                                    } else {
                                        votes[22] = 5;
                                    }
                                }
                            }
                        } else {
                            votes[22] = 1;
                        }
                    } else {
                        if (rr_median <= 87.5) {
                            if (num_peaks <= 90.5) {
                                if (rr_std <= 31.615514755249023) {
                                    if (num_peaks <= 80.5) {
                                        votes[22] = 2;
                                    } else {
                                        votes[22] = 2;
                                    }
                                } else {
                                    votes[22] = 4;
                                }
                            } else {
                                if (rr_median <= 67.5) {
                                    if (num_peaks <= 118.5) {
                                        votes[22] = 3;
                                    } else {
                                        votes[22] = 1;
                                    }
                                } else {
                                    if (diastolic_time <= 0.40955741703510284) {
                                        votes[22] = 0;
                                    } else {
                                        votes[22] = 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 43.795976638793945) {
                                if (rr_median <= 98.5) {
                                    if (diastolic_time <= 0.3282399922609329) {
                                        votes[22] = 4;
                                    } else {
                                        votes[22] = 4;
                                    }
                                } else {
                                    votes[22] = 2;
                                }
                            } else {
                                votes[22] = 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 29.08578395843506) {
                    votes[22] = 1;
                } else {
                    if (diastolic_time <= 0.9165000021457672) {
                        votes[22] = 1;
                    } else {
                        votes[22] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 6.039847135543823) {
                if (diastolic_time <= 0.5301904678344727) {
                    votes[22] = 3;
                } else {
                    votes[22] = 5;
                }
            } else {
                if (diastolic_time <= 0.8466666638851166) {
                    if (diastolic_time <= 0.26275861263275146) {
                        votes[22] = 5;
                    } else {
                        if (rr_median <= 55.75) {
                            if (rr_std <= 12.079430103302002) {
                                votes[22] = 3;
                            } else {
                                votes[22] = 0;
                            }
                        } else {
                            if (num_peaks <= 124.5) {
                                if (rr_std <= 12.384367942810059) {
                                    votes[22] = 0;
                                } else {
                                    votes[22] = 0;
                                }
                            } else {
                                if (rr_std <= 33.35643196105957) {
                                    if (num_peaks <= 133.0) {
                                        votes[22] = 0;
                                    } else {
                                        votes[22] = 0;
                                    }
                                } else {
                                    if (num_valleys <= 77.5) {
                                        votes[22] = 0;
                                    } else {
                                        votes[22] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    votes[22] = 1;
                }
            }
        }
    }
// Decision rules for tree 23
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_median <= 99.25) {
            if (rr_std <= 15.760297775268555) {
                if (rr_median <= 68.75) {
                    if (rr_std <= 9.50971794128418) {
                        if (num_valleys <= 59.0) {
                            votes[23] = 3;
                        } else {
                            if (rr_std <= 1.0854631960391998) {
                                votes[23] = 3;
                            } else {
                                votes[23] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.04828491620719433) {
                            votes[23] = 4;
                        } else {
                            if (rr_std <= 10.75985860824585) {
                                if (num_peaks <= 135.5) {
                                    votes[23] = 1;
                                } else {
                                    votes[23] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.10418522730469704) {
                                    votes[23] = 3;
                                } else {
                                    votes[23] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 85.5) {
                        if (diastolic_time <= 0.15283332765102386) {
                            if (rr_std <= 11.633378982543945) {
                                if (rr_median <= 75.0) {
                                    votes[23] = 5;
                                } else {
                                    votes[23] = 5;
                                }
                            } else {
                                votes[23] = 5;
                            }
                        } else {
                            if (rr_std <= 0.9208018481731415) {
                                votes[23] = 5;
                            } else {
                                votes[23] = 3;
                            }
                        }
                    } else {
                        if (rr_median <= 90.75) {
                            if (diastolic_time <= 0.08075384795665741) {
                                votes[23] = 3;
                            } else {
                                votes[23] = 1;
                            }
                        } else {
                            if (rr_std <= 2.6642407178878784) {
                                if (rr_median <= 94.25) {
                                    votes[23] = 5;
                                } else {
                                    votes[23] = 5;
                                }
                            } else {
                                votes[23] = 0;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (rr_median <= 76.0) {
                        if (num_valleys <= 44.5) {
                            votes[23] = 4;
                        } else {
                            if (diastolic_time <= 0.1783255785703659) {
                                if (num_valleys <= 72.5) {
                                    if (num_peaks <= 125.5) {
                                        if (num_valleys <= 70.5) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    } else {
                                        votes[23] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 0.14058974385261536) {
                                        votes[23] = 5;
                                    } else {
                                        votes[23] = 4;
                                    }
                                }
                            } else {
                                votes[23] = 2;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.1395789459347725) {
                            if (rr_std <= 26.233665466308594) {
                                if (num_valleys <= 66.5) {
                                    votes[23] = 1;
                                } else {
                                    votes[23] = 3;
                                }
                            } else {
                                if (num_valleys <= 72.5) {
                                    if (diastolic_time <= 0.07268283143639565) {
                                        votes[23] = 4;
                                    } else {
                                        votes[23] = 5;
                                    }
                                } else {
                                    votes[23] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 25.92537212371826) {
                                votes[23] = 4;
                            } else {
                                votes[23] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 80.75) {
                        if (num_peaks <= 135.5) {
                            votes[23] = 4;
                        } else {
                            if (num_peaks <= 139.5) {
                                votes[23] = 3;
                            } else {
                                votes[23] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.08592132478952408) {
                            votes[23] = 0;
                        } else {
                            votes[23] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (rr_median <= 117.0) {
                    votes[23] = 1;
                } else {
                    if (num_peaks <= 94.5) {
                        votes[23] = 4;
                    } else {
                        votes[23] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 0.0939403809607029) {
                    if (diastolic_time <= 0.027379386126995087) {
                        votes[23] = 1;
                    } else {
                        if (num_valleys <= 80.0) {
                            votes[23] = 1;
                        } else {
                            votes[23] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 12.992045402526855) {
                        votes[23] = 1;
                    } else {
                        if (diastolic_time <= 0.12722455710172653) {
                            votes[23] = 5;
                        } else {
                            votes[23] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (rr_median <= 74.25) {
                if (num_valleys <= 61.5) {
                    if (diastolic_time <= 0.5302857160568237) {
                        if (num_peaks <= 90.0) {
                            if (rr_median <= 64.0) {
                                votes[23] = 2;
                            } else {
                                votes[23] = 2;
                            }
                        } else {
                            if (num_peaks <= 98.0) {
                                votes[23] = 5;
                            } else {
                                if (rr_std <= 0.6225122213363647) {
                                    votes[23] = 2;
                                } else {
                                    votes[23] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 14.604972839355469) {
                            votes[23] = 5;
                        } else {
                            votes[23] = 2;
                        }
                    }
                } else {
                    if (rr_median <= 63.5) {
                        votes[23] = 3;
                    } else {
                        if (rr_std <= 0.9153895676136017) {
                            votes[23] = 2;
                        } else {
                            if (rr_std <= 10.626997947692871) {
                                votes[23] = 5;
                            } else {
                                votes[23] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6142461597919464) {
                    if (rr_std <= 3.639171063899994) {
                        if (diastolic_time <= 0.4091540724039078) {
                            votes[23] = 5;
                        } else {
                            votes[23] = 5;
                        }
                    } else {
                        if (num_peaks <= 92.5) {
                            if (rr_median <= 88.5) {
                                if (rr_std <= 28.296297073364258) {
                                    if (diastolic_time <= 0.3423217386007309) {
                                        votes[23] = 2;
                                    } else {
                                        votes[23] = 2;
                                    }
                                } else {
                                    votes[23] = 4;
                                }
                            } else {
                                if (num_peaks <= 72.5) {
                                    votes[23] = 5;
                                } else {
                                    if (diastolic_time <= 0.2958846241235733) {
                                        votes[23] = 4;
                                    } else {
                                        if (rr_median <= 97.25) {
                                            votes[23] = 4;
                                        } else {
                                            votes[23] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[23] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 8.479978561401367) {
                        if (num_valleys <= 55.5) {
                            votes[23] = 5;
                        } else {
                            votes[23] = 5;
                        }
                    } else {
                        if (rr_median <= 80.25) {
                            votes[23] = 1;
                        } else {
                            votes[23] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 5.285987377166748) {
                if (diastolic_time <= 0.3105600029230118) {
                    votes[23] = 5;
                } else {
                    votes[23] = 5;
                }
            } else {
                if (diastolic_time <= 0.350758895277977) {
                    if (rr_median <= 63.25) {
                        votes[23] = 3;
                    } else {
                        if (num_peaks <= 139.5) {
                            if (rr_std <= 14.372107982635498) {
                                votes[23] = 0;
                            } else {
                                votes[23] = 0;
                            }
                        } else {
                            votes[23] = 2;
                        }
                    }
                } else {
                    if (num_valleys <= 70.5) {
                        votes[23] = 0;
                    } else {
                        if (num_peaks <= 149.5) {
                            if (diastolic_time <= 0.4826500117778778) {
                                if (diastolic_time <= 0.47251667082309723) {
                                    if (rr_median <= 61.25) {
                                        if (diastolic_time <= 0.42266666889190674) {
                                            votes[23] = 0;
                                        } else {
                                            votes[23] = 0;
                                        }
                                    } else {
                                        votes[23] = 0;
                                    }
                                } else {
                                    votes[23] = 0;
                                }
                            } else {
                                votes[23] = 0;
                            }
                        } else {
                            votes[23] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 24
    if (diastolic_time <= 0.20907823741436005) {
        if (rr_median <= 82.75) {
            if (rr_std <= 20.21463394165039) {
                if (num_valleys <= 54.5) {
                    votes[24] = 4;
                } else {
                    if (rr_median <= 68.75) {
                        if (rr_std <= 9.526742935180664) {
                            if (num_peaks <= 123.5) {
                                if (num_valleys <= 64.0) {
                                    votes[24] = 3;
                                } else {
                                    votes[24] = 3;
                                }
                            } else {
                                votes[24] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.04828491620719433) {
                                votes[24] = 4;
                            } else {
                                if (rr_std <= 11.87785005569458) {
                                    if (num_valleys <= 75.0) {
                                        votes[24] = 1;
                                    } else {
                                        votes[24] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 128.0) {
                                        votes[24] = 3;
                                    } else {
                                        votes[24] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 78.25) {
                            if (diastolic_time <= 0.16919927299022675) {
                                if (num_valleys <= 65.5) {
                                    votes[24] = 3;
                                } else {
                                    votes[24] = 5;
                                }
                            } else {
                                votes[24] = 3;
                            }
                        } else {
                            votes[24] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.0) {
                    if (rr_median <= 76.0) {
                        if (num_peaks <= 100.0) {
                            votes[24] = 4;
                        } else {
                            if (num_valleys <= 72.5) {
                                if (rr_median <= 71.5) {
                                    votes[24] = 4;
                                } else {
                                    votes[24] = 4;
                                }
                            } else {
                                votes[24] = 4;
                            }
                        }
                    } else {
                        votes[24] = 5;
                    }
                } else {
                    if (num_valleys <= 72.5) {
                        votes[24] = 3;
                    } else {
                        votes[24] = 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.011158470064401627) {
                votes[24] = 0;
            } else {
                if (rr_median <= 203.5) {
                    if (rr_median <= 134.5) {
                        if (diastolic_time <= 0.16033843904733658) {
                            if (diastolic_time <= 0.0386678222566843) {
                                votes[24] = 4;
                            } else {
                                if (rr_std <= 17.39704418182373) {
                                    if (num_valleys <= 70.5) {
                                        if (num_valleys <= 63.5) {
                                            votes[24] = 1;
                                        } else {
                                            votes[24] = 1;
                                        }
                                    } else {
                                        if (rr_median <= 99.5) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 1;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.08592132478952408) {
                                        if (rr_std <= 38.044015884399414) {
                                            votes[24] = 1;
                                        } else {
                                            votes[24] = 1;
                                        }
                                    } else {
                                        if (num_peaks <= 129.5) {
                                            votes[24] = 4;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 14.970335006713867) {
                                votes[24] = 5;
                            } else {
                                if (rr_std <= 32.97445297241211) {
                                    votes[24] = 4;
                                } else {
                                    votes[24] = 5;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 107.5) {
                            votes[24] = 1;
                        } else {
                            votes[24] = 1;
                        }
                    }
                } else {
                    votes[24] = 4;
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.6350666582584381) {
                if (rr_std <= 0.6296193599700928) {
                    if (rr_median <= 74.25) {
                        if (rr_std <= 0.41066253185272217) {
                            votes[24] = 2;
                        } else {
                            if (num_peaks <= 91.0) {
                                votes[24] = 2;
                            } else {
                                if (rr_std <= 0.5364768803119659) {
                                    if (num_peaks <= 108.5) {
                                        votes[24] = 5;
                                    } else {
                                        votes[24] = 2;
                                    }
                                } else {
                                    votes[24] = 2;
                                }
                            }
                        }
                    } else {
                        votes[24] = 5;
                    }
                } else {
                    if (rr_std <= 14.36455774307251) {
                        if (num_valleys <= 45.5) {
                            votes[24] = 2;
                        } else {
                            if (num_peaks <= 128.0) {
                                if (diastolic_time <= 0.4932333379983902) {
                                    if (rr_median <= 68.0) {
                                        votes[24] = 5;
                                    } else {
                                        if (rr_std <= 0.8811143934726715) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                } else {
                                    votes[24] = 5;
                                }
                            } else {
                                votes[24] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 76.75) {
                            if (rr_std <= 45.97701072692871) {
                                if (rr_std <= 16.513909339904785) {
                                    votes[24] = 0;
                                } else {
                                    if (num_peaks <= 107.0) {
                                        if (diastolic_time <= 0.3269913047552109) {
                                            votes[24] = 2;
                                        } else {
                                            votes[24] = 2;
                                        }
                                    } else {
                                        votes[24] = 2;
                                    }
                                }
                            } else {
                                votes[24] = 1;
                            }
                        } else {
                            if (num_peaks <= 89.5) {
                                if (rr_median <= 88.5) {
                                    if (rr_median <= 83.5) {
                                        votes[24] = 4;
                                    } else {
                                        votes[24] = 2;
                                    }
                                } else {
                                    if (num_valleys <= 45.0) {
                                        votes[24] = 4;
                                    } else {
                                        votes[24] = 4;
                                    }
                                }
                            } else {
                                if (num_valleys <= 54.0) {
                                    votes[24] = 4;
                                } else {
                                    votes[24] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    votes[24] = 5;
                } else {
                    if (rr_median <= 80.5) {
                        votes[24] = 1;
                    } else {
                        if (num_peaks <= 110.0) {
                            votes[24] = 1;
                        } else {
                            votes[24] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 8.305138111114502) {
                if (diastolic_time <= 0.5011428594589233) {
                    if (diastolic_time <= 0.2819974422454834) {
                        votes[24] = 5;
                    } else {
                        if (rr_median <= 75.0) {
                            votes[24] = 3;
                        } else {
                            votes[24] = 3;
                        }
                    }
                } else {
                    votes[24] = 5;
                }
            } else {
                if (diastolic_time <= 0.2809973508119583) {
                    votes[24] = 5;
                } else {
                    if (diastolic_time <= 0.8351111114025116) {
                        if (rr_median <= 52.25) {
                            votes[24] = 3;
                        } else {
                            if (num_peaks <= 124.5) {
                                if (num_valleys <= 74.0) {
                                    votes[24] = 0;
                                } else {
                                    votes[24] = 0;
                                }
                            } else {
                                if (num_peaks <= 142.5) {
                                    votes[24] = 0;
                                } else {
                                    if (num_peaks <= 144.5) {
                                        if (rr_median <= 63.0) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 0;
                                        }
                                    } else {
                                        if (num_valleys <= 75.5) {
                                            votes[24] = 0;
                                        } else {
                                            votes[24] = 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        votes[24] = 1;
                    }
                }
            }
        }
    }
// Decision rules for tree 25
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_median <= 82.75) {
            if (rr_std <= 14.573368549346924) {
                if (rr_median <= 75.5) {
                    if (num_peaks <= 132.5) {
                        if (rr_median <= 47.5) {
                            votes[25] = 4;
                        } else {
                            if (num_peaks <= 113.5) {
                                if (diastolic_time <= 0.20211923867464066) {
                                    if (num_peaks <= 107.5) {
                                        votes[25] = 3;
                                    } else {
                                        votes[25] = 3;
                                    }
                                } else {
                                    votes[25] = 2;
                                }
                            } else {
                                if (rr_median <= 52.75) {
                                    votes[25] = 3;
                                } else {
                                    if (rr_std <= 10.51915693283081) {
                                        if (rr_std <= 8.190521240234375) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 1;
                                        }
                                    } else {
                                        votes[25] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 145.5) {
                            votes[25] = 3;
                        } else {
                            votes[25] = 3;
                        }
                    }
                } else {
                    if (num_valleys <= 67.5) {
                        votes[25] = 5;
                    } else {
                        votes[25] = 5;
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (num_valleys <= 72.5) {
                        if (num_valleys <= 64.0) {
                            if (diastolic_time <= 0.0433704387396574) {
                                votes[25] = 4;
                            } else {
                                if (num_valleys <= 58.5) {
                                    if (rr_median <= 66.0) {
                                        votes[25] = 4;
                                    } else {
                                        votes[25] = 3;
                                    }
                                } else {
                                    votes[25] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 18.350539207458496) {
                                votes[25] = 4;
                            } else {
                                if (diastolic_time <= 0.09575552865862846) {
                                    if (rr_std <= 30.36477279663086) {
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
                        if (diastolic_time <= 0.10701298713684082) {
                            votes[25] = 3;
                        } else {
                            votes[25] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.09970110654830933) {
                        votes[25] = 1;
                    } else {
                        votes[25] = 3;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.011158470064401627) {
                if (rr_median <= 105.0) {
                    votes[25] = 0;
                } else {
                    votes[25] = 3;
                }
            } else {
                if (diastolic_time <= 0.08629557490348816) {
                    if (num_valleys <= 62.5) {
                        if (diastolic_time <= 0.057008616626262665) {
                            if (rr_median <= 114.75) {
                                votes[25] = 1;
                            } else {
                                votes[25] = 4;
                            }
                        } else {
                            votes[25] = 5;
                        }
                    } else {
                        if (rr_median <= 112.75) {
                            if (rr_std <= 38.044015884399414) {
                                if (rr_median <= 96.5) {
                                    votes[25] = 3;
                                } else {
                                    if (diastolic_time <= 0.06995571777224541) {
                                        votes[25] = 1;
                                    } else {
                                        votes[25] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 49.22466468811035) {
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
                    if (rr_std <= 13.033396244049072) {
                        if (diastolic_time <= 0.1596766710281372) {
                            if (rr_median <= 87.5) {
                                votes[25] = 1;
                            } else {
                                if (num_peaks <= 134.5) {
                                    votes[25] = 1;
                                } else {
                                    votes[25] = 1;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.185114286839962) {
                                votes[25] = 5;
                            } else {
                                votes[25] = 1;
                            }
                        }
                    } else {
                        if (num_valleys <= 73.5) {
                            if (diastolic_time <= 0.1485121250152588) {
                                if (num_valleys <= 57.5) {
                                    votes[25] = 4;
                                } else {
                                    if (rr_median <= 93.0) {
                                        votes[25] = 4;
                                    } else {
                                        votes[25] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.18206239491701126) {
                                    votes[25] = 4;
                                } else {
                                    votes[25] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 100.5) {
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
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.6980000138282776) {
                if (rr_std <= 0.6296193599700928) {
                    if (rr_median <= 66.5) {
                        votes[25] = 3;
                    } else {
                        if (diastolic_time <= 0.30092307925224304) {
                            if (diastolic_time <= 0.2736825495958328) {
                                votes[25] = 2;
                            } else {
                                votes[25] = 2;
                            }
                        } else {
                            if (rr_std <= 0.3970015197992325) {
                                votes[25] = 2;
                            } else {
                                if (rr_median <= 71.0) {
                                    votes[25] = 2;
                                } else {
                                    votes[25] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 14.615931987762451) {
                        if (rr_std <= 11.753142356872559) {
                            if (num_valleys <= 66.5) {
                                if (num_peaks <= 82.5) {
                                    votes[25] = 2;
                                } else {
                                    if (num_valleys <= 61.5) {
                                        votes[25] = 5;
                                    } else {
                                        votes[25] = 5;
                                    }
                                }
                            } else {
                                votes[25] = 3;
                            }
                        } else {
                            votes[25] = 0;
                        }
                    } else {
                        if (rr_median <= 87.5) {
                            if (num_peaks <= 104.5) {
                                if (num_peaks <= 78.5) {
                                    votes[25] = 2;
                                } else {
                                    if (rr_std <= 31.861740112304688) {
                                        votes[25] = 2;
                                    } else {
                                        votes[25] = 2;
                                    }
                                }
                            } else {
                                if (rr_median <= 65.5) {
                                    votes[25] = 3;
                                } else {
                                    votes[25] = 0;
                                }
                            }
                        } else {
                            if (rr_median <= 97.75) {
                                votes[25] = 4;
                            } else {
                                if (num_valleys <= 50.5) {
                                    votes[25] = 5;
                                } else {
                                    votes[25] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 10.28257942199707) {
                    votes[25] = 5;
                } else {
                    if (rr_std <= 29.105377197265625) {
                        votes[25] = 1;
                    } else {
                        votes[25] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.609926223754883) {
                if (num_valleys <= 74.5) {
                    votes[25] = 5;
                } else {
                    if (diastolic_time <= 0.3669999986886978) {
                        votes[25] = 3;
                    } else {
                        votes[25] = 0;
                    }
                }
            } else {
                if (num_peaks <= 109.5) {
                    votes[25] = 1;
                } else {
                    if (rr_median <= 53.5) {
                        votes[25] = 3;
                    } else {
                        if (diastolic_time <= 0.2809973508119583) {
                            votes[25] = 0;
                        } else {
                            if (num_peaks <= 149.5) {
                                if (num_peaks <= 133.0) {
                                    if (rr_median <= 81.0) {
                                        if (num_peaks <= 121.5) {
                                            votes[25] = 0;
                                        } else {
                                            votes[25] = 0;
                                        }
                                    } else {
                                        votes[25] = 3;
                                    }
                                } else {
                                    if (diastolic_time <= 0.33081573247909546) {
                                        votes[25] = 0;
                                    } else {
                                        if (rr_median <= 61.5) {
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
                }
            }
        }
    }
// Decision rules for tree 26
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_median <= 98.5) {
            if (rr_std <= 16.939903259277344) {
                if (rr_median <= 68.5) {
                    if (rr_median <= 65.75) {
                        if (rr_median <= 46.5) {
                            votes[26] = 4;
                        } else {
                            if (rr_std <= 9.526742935180664) {
                                if (rr_median <= 58.5) {
                                    votes[26] = 3;
                                } else {
                                    votes[26] = 3;
                                }
                            } else {
                                if (rr_std <= 11.919236660003662) {
                                    if (num_peaks <= 136.5) {
                                        votes[26] = 1;
                                    } else {
                                        votes[26] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 129.5) {
                                        if (diastolic_time <= 0.08174891769886017) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 3;
                                        }
                                    } else {
                                        votes[26] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[26] = 2;
                    }
                } else {
                    if (diastolic_time <= 0.01662295125424862) {
                        votes[26] = 0;
                    } else {
                        if (num_valleys <= 64.5) {
                            if (rr_median <= 88.25) {
                                if (rr_median <= 77.5) {
                                    votes[26] = 2;
                                } else {
                                    votes[26] = 1;
                                }
                            } else {
                                votes[26] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.16850177198648453) {
                                if (rr_median <= 85.0) {
                                    if (num_peaks <= 118.5) {
                                        votes[26] = 3;
                                    } else {
                                        if (rr_median <= 74.5) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 126.5) {
                                        votes[26] = 3;
                                    } else {
                                        votes[26] = 3;
                                    }
                                }
                            } else {
                                if (rr_median <= 76.5) {
                                    if (rr_median <= 71.5) {
                                        votes[26] = 5;
                                    } else {
                                        votes[26] = 3;
                                    }
                                } else {
                                    if (rr_median <= 90.0) {
                                        votes[26] = 5;
                                    } else {
                                        votes[26] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.0435333326458931) {
                        if (diastolic_time <= 0.03325968608260155) {
                            votes[26] = 4;
                        } else {
                            votes[26] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.09358823299407959) {
                            if (num_valleys <= 66.0) {
                                votes[26] = 5;
                            } else {
                                if (rr_std <= 28.778273582458496) {
                                    votes[26] = 3;
                                } else {
                                    votes[26] = 3;
                                }
                            }
                        } else {
                            if (rr_median <= 59.25) {
                                if (diastolic_time <= 0.18998412787914276) {
                                    votes[26] = 3;
                                } else {
                                    votes[26] = 2;
                                }
                            } else {
                                if (rr_std <= 33.743621826171875) {
                                    if (num_peaks <= 116.5) {
                                        votes[26] = 4;
                                    } else {
                                        if (num_valleys <= 63.5) {
                                            votes[26] = 4;
                                        } else {
                                            votes[26] = 4;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 68.0) {
                                        votes[26] = 4;
                                    } else {
                                        votes[26] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 66.5) {
                        votes[26] = 3;
                    } else {
                        if (rr_median <= 69.5) {
                            if (num_valleys <= 75.0) {
                                votes[26] = 3;
                            } else {
                                votes[26] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.08197023719549179) {
                                votes[26] = 1;
                            } else {
                                votes[26] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (rr_std <= 39.50735664367676) {
                    if (rr_std <= 6.241060018539429) {
                        votes[26] = 4;
                    } else {
                        votes[26] = 1;
                    }
                } else {
                    if (num_valleys <= 47.5) {
                        votes[26] = 4;
                    } else {
                        votes[26] = 4;
                    }
                }
            } else {
                if (num_peaks <= 145.5) {
                    if (diastolic_time <= 0.02993280068039894) {
                        votes[26] = 2;
                    } else {
                        if (rr_std <= 72.99546813964844) {
                            if (diastolic_time <= 0.09013073518872261) {
                                if (rr_std <= 2.7739559412002563) {
                                    votes[26] = 1;
                                } else {
                                    votes[26] = 1;
                                }
                            } else {
                                if (rr_std <= 15.652370929718018) {
                                    if (rr_std <= 0.9652059376239777) {
                                        votes[26] = 1;
                                    } else {
                                        votes[26] = 1;
                                    }
                                } else {
                                    votes[26] = 5;
                                }
                            }
                        } else {
                            votes[26] = 4;
                        }
                    }
                } else {
                    votes[26] = 5;
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 88.25) {
                if (num_peaks <= 88.5) {
                    if (rr_std <= 27.6544189453125) {
                        if (diastolic_time <= 0.5076166689395905) {
                            if (rr_median <= 79.0) {
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
                    if (rr_std <= 38.265153884887695) {
                        if (rr_median <= 69.5) {
                            if (rr_median <= 64.0) {
                                votes[26] = 3;
                            } else {
                                if (rr_std <= 11.769414901733398) {
                                    votes[26] = 5;
                                } else {
                                    votes[26] = 0;
                                }
                            }
                        } else {
                            if (rr_std <= 0.48377497494220734) {
                                votes[26] = 2;
                            } else {
                                if (rr_std <= 24.789010047912598) {
                                    if (num_valleys <= 62.5) {
                                        votes[26] = 2;
                                    } else {
                                        votes[26] = 5;
                                    }
                                } else {
                                    votes[26] = 2;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 61.0) {
                            votes[26] = 1;
                        } else {
                            votes[26] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6350666582584381) {
                    if (rr_median <= 98.5) {
                        if (rr_std <= 21.58934211730957) {
                            votes[26] = 4;
                        } else {
                            votes[26] = 4;
                        }
                    } else {
                        if (rr_median <= 107.5) {
                            votes[26] = 5;
                        } else {
                            votes[26] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 8.918952226638794) {
                        votes[26] = 5;
                    } else {
                        votes[26] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 6.039847135543823) {
                if (num_peaks <= 131.5) {
                    votes[26] = 5;
                } else {
                    votes[26] = 3;
                }
            } else {
                if (diastolic_time <= 0.8466666638851166) {
                    if (diastolic_time <= 0.350758895277977) {
                        if (rr_median <= 65.5) {
                            votes[26] = 3;
                        } else {
                            if (rr_median <= 78.0) {
                                votes[26] = 0;
                            } else {
                                votes[26] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 133.0) {
                            if (rr_std <= 26.20562744140625) {
                                if (diastolic_time <= 0.45223529636859894) {
                                    votes[26] = 0;
                                } else {
                                    votes[26] = 0;
                                }
                            } else {
                                votes[26] = 5;
                            }
                        } else {
                            if (rr_median <= 108.75) {
                                if (rr_std <= 8.305138111114502) {
                                    votes[26] = 0;
                                } else {
                                    if (rr_median <= 55.75) {
                                        if (rr_std <= 15.698661804199219) {
                                            votes[26] = 0;
                                        } else {
                                            votes[26] = 0;
                                        }
                                    } else {
                                        votes[26] = 0;
                                    }
                                }
                            } else {
                                votes[26] = 0;
                            }
                        }
                    }
                } else {
                    votes[26] = 1;
                }
            }
        }
    }
// Decision rules for tree 27
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_median <= 98.5) {
            if (rr_std <= 15.967272281646729) {
                if (rr_median <= 62.25) {
                    if (rr_median <= 47.5) {
                        if (diastolic_time <= 0.04230467416346073) {
                            votes[27] = 4;
                        } else {
                            votes[27] = 1;
                        }
                    } else {
                        if (num_valleys <= 69.0) {
                            if (rr_median <= 53.25) {
                                if (rr_median <= 49.5) {
                                    votes[27] = 3;
                                } else {
                                    votes[27] = 3;
                                }
                            } else {
                                votes[27] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.16881375014781952) {
                                votes[27] = 3;
                            } else {
                                votes[27] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 142.5) {
                        if (num_valleys <= 63.5) {
                            if (num_valleys <= 51.5) {
                                votes[27] = 4;
                            } else {
                                if (diastolic_time <= 0.19153288006782532) {
                                    if (diastolic_time <= 0.10274680331349373) {
                                        votes[27] = 1;
                                    } else {
                                        votes[27] = 1;
                                    }
                                } else {
                                    votes[27] = 2;
                                }
                            }
                        } else {
                            if (num_valleys <= 82.5) {
                                if (diastolic_time <= 0.0900554284453392) {
                                    votes[27] = 3;
                                } else {
                                    if (num_valleys <= 75.5) {
                                        if (rr_std <= 1.002501904964447) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    } else {
                                        votes[27] = 3;
                                    }
                                }
                            } else {
                                if (num_peaks <= 128.5) {
                                    votes[27] = 5;
                                } else {
                                    votes[27] = 5;
                                }
                            }
                        }
                    } else {
                        votes[27] = 0;
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (rr_median <= 75.5) {
                        if (num_valleys <= 72.5) {
                            if (rr_median <= 56.25) {
                                if (diastolic_time <= 0.07400102354586124) {
                                    votes[27] = 4;
                                } else {
                                    votes[27] = 3;
                                }
                            } else {
                                if (rr_median <= 72.0) {
                                    votes[27] = 4;
                                } else {
                                    votes[27] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.14058974385261536) {
                                votes[27] = 5;
                            } else {
                                votes[27] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.12177366390824318) {
                            if (rr_std <= 33.01816940307617) {
                                votes[27] = 3;
                            } else {
                                if (diastolic_time <= 0.0693628340959549) {
                                    votes[27] = 1;
                                } else {
                                    votes[27] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 78.5) {
                                votes[27] = 4;
                            } else {
                                if (num_peaks <= 116.5) {
                                    votes[27] = 4;
                                } else {
                                    votes[27] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 20.73285961151123) {
                        votes[27] = 3;
                    } else {
                        if (diastolic_time <= 0.11302980780601501) {
                            if (diastolic_time <= 0.07333928719162941) {
                                votes[27] = 3;
                            } else {
                                if (diastolic_time <= 0.09326904639601707) {
                                    votes[27] = 1;
                                } else {
                                    votes[27] = 1;
                                }
                            }
                        } else {
                            votes[27] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (num_peaks <= 86.5) {
                    votes[27] = 1;
                } else {
                    if (rr_median <= 158.75) {
                        votes[27] = 4;
                    } else {
                        if (diastolic_time <= 0.04957479424774647) {
                            votes[27] = 4;
                        } else {
                            votes[27] = 4;
                        }
                    }
                }
            } else {
                if (rr_median <= 112.75) {
                    if (num_valleys <= 74.0) {
                        if (diastolic_time <= 0.06549717858433723) {
                            votes[27] = 1;
                        } else {
                            votes[27] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.09129735454916954) {
                            votes[27] = 5;
                        } else {
                            votes[27] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 194.5) {
                        if (diastolic_time <= 0.09277376160025597) {
                            if (rr_std <= 3.423721432685852) {
                                votes[27] = 1;
                            } else {
                                votes[27] = 1;
                            }
                        } else {
                            votes[27] = 1;
                        }
                    } else {
                        votes[27] = 2;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 70.5) {
            if (rr_std <= 0.6296193599700928) {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 91.0) {
                        votes[27] = 2;
                    } else {
                        if (num_valleys <= 59.5) {
                            votes[27] = 2;
                        } else {
                            if (num_valleys <= 64.5) {
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
                if (diastolic_time <= 0.6167076826095581) {
                    if (rr_std <= 14.330915927886963) {
                        if (num_peaks <= 132.5) {
                            if (rr_median <= 73.5) {
                                if (diastolic_time <= 0.524152398109436) {
                                    if (num_valleys <= 56.0) {
                                        votes[27] = 2;
                                    } else {
                                        votes[27] = 5;
                                    }
                                } else {
                                    votes[27] = 5;
                                }
                            } else {
                                if (rr_median <= 88.5) {
                                    votes[27] = 5;
                                } else {
                                    votes[27] = 5;
                                }
                            }
                        } else {
                            votes[27] = 0;
                        }
                    } else {
                        if (rr_std <= 30.8172550201416) {
                            if (rr_std <= 16.58848762512207) {
                                votes[27] = 0;
                            } else {
                                if (rr_median <= 88.5) {
                                    if (num_peaks <= 104.0) {
                                        if (rr_median <= 76.0) {
                                            votes[27] = 2;
                                        } else {
                                            votes[27] = 2;
                                        }
                                    } else {
                                        votes[27] = 3;
                                    }
                                } else {
                                    votes[27] = 4;
                                }
                            }
                        } else {
                            if (rr_median <= 75.75) {
                                votes[27] = 1;
                            } else {
                                if (rr_std <= 52.67464637756348) {
                                    votes[27] = 4;
                                } else {
                                    votes[27] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.777674913406372) {
                        votes[27] = 5;
                    } else {
                        if (rr_std <= 43.62726402282715) {
                            if (rr_std <= 29.127543449401855) {
                                votes[27] = 1;
                            } else {
                                votes[27] = 2;
                            }
                        } else {
                            votes[27] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 5.285987377166748) {
                if (diastolic_time <= 0.47525712847709656) {
                    votes[27] = 3;
                } else {
                    votes[27] = 5;
                }
            } else {
                if (rr_median <= 53.25) {
                    votes[27] = 3;
                } else {
                    if (diastolic_time <= 0.8466666638851166) {
                        if (diastolic_time <= 0.2809973508119583) {
                            votes[27] = 5;
                        } else {
                            if (num_peaks <= 125.5) {
                                if (diastolic_time <= 0.43648529052734375) {
                                    votes[27] = 0;
                                } else {
                                    votes[27] = 5;
                                }
                            } else {
                                if (diastolic_time <= 0.33045850694179535) {
                                    votes[27] = 0;
                                } else {
                                    votes[27] = 0;
                                }
                            }
                        }
                    } else {
                        votes[27] = 1;
                    }
                }
            }
        }
    }
// Decision rules for tree 28
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_std <= 15.967272281646729) {
            if (rr_median <= 75.5) {
                if (num_peaks <= 106.5) {
                    if (rr_std <= 0.9120471775531769) {
                        votes[28] = 2;
                    } else {
                        votes[28] = 5;
                    }
                } else {
                    if (rr_std <= 10.10113000869751) {
                        if (diastolic_time <= 0.24245161563158035) {
                            if (num_peaks <= 131.5) {
                                if (diastolic_time <= 0.07242517918348312) {
                                    votes[28] = 3;
                                } else {
                                    if (diastolic_time <= 0.16850177198648453) {
                                        votes[28] = 3;
                                    } else {
                                        votes[28] = 3;
                                    }
                                }
                            } else {
                                votes[28] = 3;
                            }
                        } else {
                            votes[28] = 3;
                        }
                    } else {
                        if (rr_std <= 10.72160291671753) {
                            votes[28] = 1;
                        } else {
                            if (num_valleys <= 71.5) {
                                votes[28] = 3;
                            } else {
                                if (rr_std <= 13.8314208984375) {
                                    votes[28] = 3;
                                } else {
                                    votes[28] = 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 99.5) {
                    if (diastolic_time <= 0.016946058720350266) {
                        votes[28] = 0;
                    } else {
                        if (num_peaks <= 121.0) {
                            if (rr_std <= 0.7657397091388702) {
                                if (rr_std <= 0.5975595414638519) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 3;
                                }
                            } else {
                                votes[28] = 1;
                            }
                        } else {
                            if (num_peaks <= 128.5) {
                                if (num_peaks <= 124.5) {
                                    votes[28] = 3;
                                } else {
                                    votes[28] = 5;
                                }
                            } else {
                                if (num_peaks <= 134.5) {
                                    votes[28] = 3;
                                } else {
                                    votes[28] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.20786985754966736) {
                        votes[28] = 4;
                    } else {
                        if (rr_std <= 2.2488457560539246) {
                            votes[28] = 1;
                        } else {
                            if (num_valleys <= 72.0) {
                                votes[28] = 1;
                            } else {
                                if (num_peaks <= 134.0) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 5;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 132.5) {
                if (rr_median <= 87.25) {
                    if (num_valleys <= 45.0) {
                        votes[28] = 3;
                    } else {
                        if (diastolic_time <= 0.06037834659218788) {
                            votes[28] = 4;
                        } else {
                            if (diastolic_time <= 0.09086363390088081) {
                                votes[28] = 3;
                            } else {
                                if (rr_median <= 57.5) {
                                    votes[28] = 3;
                                } else {
                                    if (diastolic_time <= 0.12177366390824318) {
                                        if (rr_median <= 70.0) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.2394995093345642) {
                                            votes[28] = 4;
                                        } else {
                                            votes[28] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 105.11534881591797) {
                        if (diastolic_time <= 0.06501374393701553) {
                            if (num_valleys <= 68.0) {
                                votes[28] = 4;
                            } else {
                                votes[28] = 1;
                            }
                        } else {
                            if (rr_median <= 132.0) {
                                if (rr_std <= 45.12018585205078) {
                                    if (diastolic_time <= 0.10957469791173935) {
                                        votes[28] = 5;
                                    } else {
                                        votes[28] = 4;
                                    }
                                } else {
                                    votes[28] = 3;
                                }
                            } else {
                                votes[28] = 5;
                            }
                        }
                    } else {
                        votes[28] = 4;
                    }
                }
            } else {
                if (rr_std <= 42.292510986328125) {
                    if (num_valleys <= 72.5) {
                        if (rr_std <= 25.068167686462402) {
                            votes[28] = 3;
                        } else {
                            if (rr_median <= 90.0) {
                                votes[28] = 4;
                            } else {
                                votes[28] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 20.38021945953369) {
                            votes[28] = 5;
                        } else {
                            if (diastolic_time <= 0.16982439160346985) {
                                if (rr_std <= 27.766839027404785) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 1;
                                }
                            } else {
                                votes[28] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 104.0) {
                        votes[28] = 1;
                    } else {
                        votes[28] = 1;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 74.25) {
                if (num_peaks <= 90.5) {
                    if (diastolic_time <= 0.5200357139110565) {
                        votes[28] = 2;
                    } else {
                        votes[28] = 2;
                    }
                } else {
                    if (rr_median <= 64.0) {
                        if (rr_median <= 60.0) {
                            votes[28] = 1;
                        } else {
                            votes[28] = 3;
                        }
                    } else {
                        if (rr_std <= 0.6533262431621552) {
                            if (rr_std <= 0.45024123787879944) {
                                votes[28] = 2;
                            } else {
                                votes[28] = 2;
                            }
                        } else {
                            if (rr_std <= 14.375516891479492) {
                                if (diastolic_time <= 0.482000008225441) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 5;
                                }
                            } else {
                                votes[28] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6426666676998138) {
                    if (rr_std <= 12.053974628448486) {
                        if (num_peaks <= 115.5) {
                            votes[28] = 5;
                        } else {
                            votes[28] = 5;
                        }
                    } else {
                        if (rr_median <= 87.5) {
                            if (rr_std <= 24.789010047912598) {
                                votes[28] = 5;
                            } else {
                                if (rr_median <= 79.25) {
                                    votes[28] = 2;
                                } else {
                                    votes[28] = 2;
                                }
                            }
                        } else {
                            if (rr_median <= 98.5) {
                                if (rr_std <= 21.026947021484375) {
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
                    if (num_valleys <= 48.5) {
                        votes[28] = 1;
                    } else {
                        if (diastolic_time <= 1.0042857229709625) {
                            votes[28] = 2;
                        } else {
                            votes[28] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 6.4607093334198) {
                votes[28] = 5;
            } else {
                if (num_peaks <= 124.5) {
                    if (diastolic_time <= 0.7503736019134521) {
                        if (rr_median <= 78.0) {
                            votes[28] = 0;
                        } else {
                            votes[28] = 5;
                        }
                    } else {
                        votes[28] = 1;
                    }
                } else {
                    if (rr_median <= 55.75) {
                        if (rr_std <= 11.857729434967041) {
                            votes[28] = 3;
                        } else {
                            votes[28] = 0;
                        }
                    } else {
                        if (rr_std <= 64.09635353088379) {
                            if (num_peaks <= 146.5) {
                                if (num_valleys <= 74.5) {
                                    if (num_peaks <= 142.5) {
                                        votes[28] = 0;
                                    } else {
                                        votes[28] = 0;
                                    }
                                } else {
                                    votes[28] = 0;
                                }
                            } else {
                                if (rr_std <= 33.25319862365723) {
                                    if (rr_std <= 21.50139045715332) {
                                        votes[28] = 0;
                                    } else {
                                        votes[28] = 0;
                                    }
                                } else {
                                    votes[28] = 0;
                                }
                            }
                        } else {
                            votes[28] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 29
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 65.5) {
            if (rr_std <= 15.860590934753418) {
                if (num_peaks <= 131.5) {
                    if (num_peaks <= 127.5) {
                        if (rr_median <= 47.75) {
                            votes[29] = 4;
                        } else {
                            if (diastolic_time <= 0.07640722766518593) {
                                votes[29] = 3;
                            } else {
                                if (num_peaks <= 121.5) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 3;
                                }
                            }
                        }
                    } else {
                        votes[29] = 1;
                    }
                } else {
                    if (num_peaks <= 146.5) {
                        votes[29] = 3;
                    } else {
                        votes[29] = 3;
                    }
                }
            } else {
                if (diastolic_time <= 0.03734069690108299) {
                    votes[29] = 4;
                } else {
                    if (rr_median <= 54.5) {
                        votes[29] = 3;
                    } else {
                        if (num_valleys <= 74.5) {
                            if (num_peaks <= 79.5) {
                                votes[29] = 4;
                            } else {
                                if (num_valleys <= 66.5) {
                                    votes[29] = 3;
                                } else {
                                    if (num_peaks <= 128.0) {
                                        votes[29] = 4;
                                    } else {
                                        votes[29] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[29] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 101.5) {
                if (rr_std <= 10.758873462677002) {
                    if (rr_median <= 68.5) {
                        if (num_peaks <= 104.0) {
                            votes[29] = 2;
                        } else {
                            votes[29] = 2;
                        }
                    } else {
                        if (rr_median <= 77.75) {
                            if (num_valleys <= 67.0) {
                                if (rr_std <= 1.0432418286800385) {
                                    votes[29] = 2;
                                } else {
                                    votes[29] = 5;
                                }
                            } else {
                                if (diastolic_time <= 0.17474224418401718) {
                                    votes[29] = 5;
                                } else {
                                    votes[29] = 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 107.5) {
                                if (num_peaks <= 100.5) {
                                    votes[29] = 5;
                                } else {
                                    votes[29] = 1;
                                }
                            } else {
                                if (num_valleys <= 80.0) {
                                    if (num_valleys <= 71.5) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 5;
                                    }
                                } else {
                                    votes[29] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.14045130461454391) {
                        if (diastolic_time <= 0.037572138011455536) {
                            if (diastolic_time <= 0.03225495107471943) {
                                votes[29] = 0;
                            } else {
                                votes[29] = 4;
                            }
                        } else {
                            if (rr_median <= 95.5) {
                                if (rr_median <= 86.25) {
                                    if (diastolic_time <= 0.08809523656964302) {
                                        if (rr_std <= 28.92833423614502) {
                                            votes[29] = 3;
                                        } else {
                                            votes[29] = 1;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.10877149924635887) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 119.5) {
                                        votes[29] = 1;
                                    } else {
                                        votes[29] = 1;
                                    }
                                }
                            } else {
                                votes[29] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 137.5) {
                            if (diastolic_time <= 0.21273399889469147) {
                                if (rr_std <= 33.1990966796875) {
                                    if (diastolic_time <= 0.14667320251464844) {
                                        votes[29] = 4;
                                    } else {
                                        if (num_valleys <= 63.5) {
                                            votes[29] = 4;
                                        } else {
                                            votes[29] = 4;
                                        }
                                    }
                                } else {
                                    votes[29] = 4;
                                }
                            } else {
                                if (num_valleys <= 52.0) {
                                    votes[29] = 4;
                                } else {
                                    votes[29] = 5;
                                }
                            }
                        } else {
                            votes[29] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 115.0) {
                    if (rr_std <= 74.5959587097168) {
                        if (rr_std <= 1.658312350511551) {
                            votes[29] = 4;
                        } else {
                            if (rr_median <= 148.25) {
                                votes[29] = 3;
                            } else {
                                votes[29] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 159.0) {
                            votes[29] = 4;
                        } else {
                            votes[29] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.013421053066849709) {
                        votes[29] = 3;
                    } else {
                        if (num_valleys <= 81.5) {
                            if (rr_std <= 72.11761474609375) {
                                if (num_peaks <= 138.0) {
                                    if (num_valleys <= 76.5) {
                                        if (num_valleys <= 68.5) {
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
        if (num_peaks <= 108.5) {
            if (rr_median <= 76.75) {
                if (num_peaks <= 86.5) {
                    if (diastolic_time <= 0.5076166689395905) {
                        if (rr_std <= 27.415703773498535) {
                            if (rr_median <= 73.5) {
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
                } else {
                    if (rr_std <= 3.590860813856125) {
                        if (rr_median <= 69.5) {
                            votes[29] = 3;
                        } else {
                            votes[29] = 2;
                        }
                    } else {
                        if (rr_std <= 14.886125564575195) {
                            votes[29] = 5;
                        } else {
                            votes[29] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6142461597919464) {
                    if (rr_std <= 8.398299276828766) {
                        votes[29] = 5;
                    } else {
                        if (diastolic_time <= 0.317440003156662) {
                            votes[29] = 2;
                        } else {
                            if (rr_std <= 37.05986404418945) {
                                if (num_peaks <= 88.5) {
                                    if (num_peaks <= 82.5) {
                                        votes[29] = 4;
                                    } else {
                                        votes[29] = 4;
                                    }
                                } else {
                                    votes[29] = 4;
                                }
                            } else {
                                votes[29] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 6.874311208724976) {
                        votes[29] = 5;
                    } else {
                        if (rr_median <= 87.5) {
                            votes[29] = 1;
                        } else {
                            votes[29] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 8.86708927154541) {
                if (num_valleys <= 71.5) {
                    if (num_valleys <= 65.5) {
                        votes[29] = 5;
                    } else {
                        votes[29] = 5;
                    }
                } else {
                    if (diastolic_time <= 0.3890315741300583) {
                        votes[29] = 3;
                    } else {
                        votes[29] = 0;
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (rr_median <= 81.75) {
                        if (rr_std <= 16.1232008934021) {
                            if (num_valleys <= 74.0) {
                                votes[29] = 0;
                            } else {
                                votes[29] = 0;
                            }
                        } else {
                            votes[29] = 0;
                        }
                    } else {
                        if (num_peaks <= 123.5) {
                            votes[29] = 5;
                        } else {
                            votes[29] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 151.5) {
                        if (rr_median <= 54.75) {
                            votes[29] = 0;
                        } else {
                            if (rr_median <= 84.25) {
                                votes[29] = 0;
                            } else {
                                if (rr_median <= 86.25) {
                                    votes[29] = 0;
                                } else {
                                    votes[29] = 0;
                                }
                            }
                        }
                    } else {
                        votes[29] = 0;
                    }
                }
            }
        }
    }
// Decision rules for tree 30
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 83.25) {
            if (rr_std <= 14.177024841308594) {
                if (rr_median <= 45.75) {
                    votes[30] = 1;
                } else {
                    if (rr_median <= 68.75) {
                        if (rr_std <= 9.713683605194092) {
                            if (diastolic_time <= 0.1582598015666008) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 3;
                            }
                        } else {
                            if (num_peaks <= 134.5) {
                                if (rr_std <= 10.72160291671753) {
                                    votes[30] = 1;
                                } else {
                                    votes[30] = 3;
                                }
                            } else {
                                votes[30] = 3;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.1717803031206131) {
                            if (rr_std <= 1.9138723611831665) {
                                votes[30] = 3;
                            } else {
                                if (rr_std <= 9.702898502349854) {
                                    votes[30] = 5;
                                } else {
                                    votes[30] = 5;
                                }
                            }
                        } else {
                            votes[30] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (diastolic_time <= 0.04520588181912899) {
                        votes[30] = 4;
                    } else {
                        if (diastolic_time <= 0.13846635073423386) {
                            if (rr_median <= 73.5) {
                                if (num_peaks <= 121.5) {
                                    if (rr_std <= 23.08088207244873) {
                                        votes[30] = 3;
                                    } else {
                                        votes[30] = 4;
                                    }
                                } else {
                                    votes[30] = 4;
                                }
                            } else {
                                votes[30] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.1744764894247055) {
                                if (rr_std <= 25.92537212371826) {
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
                    if (rr_median <= 74.5) {
                        if (num_valleys <= 76.5) {
                            if (rr_median <= 63.25) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 3;
                            }
                        } else {
                            if (num_valleys <= 79.5) {
                                votes[30] = 1;
                            } else {
                                votes[30] = 3;
                            }
                        }
                    } else {
                        votes[30] = 4;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.08629557490348816) {
                if (diastolic_time <= 0.03483176417648792) {
                    if (num_peaks <= 138.0) {
                        if (diastolic_time <= 0.03229610249400139) {
                            if (rr_std <= 40.109575271606445) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 1;
                            }
                        } else {
                            if (rr_median <= 102.5) {
                                votes[30] = 4;
                            } else {
                                votes[30] = 4;
                            }
                        }
                    } else {
                        votes[30] = 0;
                    }
                } else {
                    if (num_valleys <= 62.5) {
                        if (rr_std <= 7.651505410671234) {
                            votes[30] = 4;
                        } else {
                            votes[30] = 1;
                        }
                    } else {
                        if (rr_median <= 94.5) {
                            votes[30] = 1;
                        } else {
                            if (num_peaks <= 144.5) {
                                if (rr_std <= 67.69816589355469) {
                                    if (rr_std <= 2.7739559412002563) {
                                        votes[30] = 1;
                                    } else {
                                        votes[30] = 1;
                                    }
                                } else {
                                    votes[30] = 1;
                                }
                            } else {
                                votes[30] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 12.992045402526855) {
                    if (rr_median <= 102.5) {
                        if (diastolic_time <= 0.12032372131943703) {
                            votes[30] = 3;
                        } else {
                            if (diastolic_time <= 0.15559059381484985) {
                                votes[30] = 1;
                            } else {
                                votes[30] = 5;
                            }
                        }
                    } else {
                        votes[30] = 1;
                    }
                } else {
                    if (num_valleys <= 72.5) {
                        if (diastolic_time <= 0.1485121250152588) {
                            if (rr_median <= 114.0) {
                                votes[30] = 4;
                            } else {
                                votes[30] = 5;
                            }
                        } else {
                            if (rr_median <= 86.75) {
                                votes[30] = 4;
                            } else {
                                votes[30] = 4;
                            }
                        }
                    } else {
                        votes[30] = 5;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (rr_median <= 73.5) {
                if (num_valleys <= 61.5) {
                    if (diastolic_time <= 0.5076166689395905) {
                        if (num_peaks <= 90.0) {
                            if (diastolic_time <= 0.2795555591583252) {
                                votes[30] = 2;
                            } else {
                                votes[30] = 2;
                            }
                        } else {
                            if (rr_std <= 0.5364768803119659) {
                                votes[30] = 3;
                            } else {
                                if (diastolic_time <= 0.2684476226568222) {
                                    votes[30] = 2;
                                } else {
                                    votes[30] = 2;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.5596923232078552) {
                            votes[30] = 5;
                        } else {
                            votes[30] = 2;
                        }
                    }
                } else {
                    if (rr_median <= 64.0) {
                        votes[30] = 3;
                    } else {
                        if (rr_std <= 0.6188721358776093) {
                            votes[30] = 2;
                        } else {
                            if (rr_std <= 7.923735857009888) {
                                votes[30] = 5;
                            } else {
                                votes[30] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6441818177700043) {
                    if (rr_std <= 14.369081497192383) {
                        if (rr_std <= 0.49925926327705383) {
                            votes[30] = 2;
                        } else {
                            if (num_valleys <= 68.5) {
                                if (rr_std <= 1.0510259568691254) {
                                    votes[30] = 5;
                                } else {
                                    votes[30] = 5;
                                }
                            } else {
                                votes[30] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 56.91145324707031) {
                            if (rr_median <= 88.5) {
                                if (num_valleys <= 62.0) {
                                    if (rr_std <= 27.550633430480957) {
                                        if (rr_std <= 24.789010047912598) {
                                            votes[30] = 2;
                                        } else {
                                            votes[30] = 2;
                                        }
                                    } else {
                                        votes[30] = 2;
                                    }
                                } else {
                                    votes[30] = 0;
                                }
                            } else {
                                if (rr_median <= 97.75) {
                                    votes[30] = 4;
                                } else {
                                    votes[30] = 4;
                                }
                            }
                        } else {
                            votes[30] = 5;
                        }
                    }
                } else {
                    if (rr_std <= 6.321124792098999) {
                        votes[30] = 5;
                    } else {
                        if (rr_median <= 80.25) {
                            votes[30] = 1;
                        } else {
                            votes[30] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 8.07284927368164) {
                if (num_valleys <= 74.5) {
                    votes[30] = 5;
                } else {
                    if (rr_std <= 1.7413411736488342) {
                        votes[30] = 3;
                    } else {
                        votes[30] = 3;
                    }
                }
            } else {
                if (diastolic_time <= 0.2513815388083458) {
                    votes[30] = 5;
                } else {
                    if (diastolic_time <= 0.704800009727478) {
                        if (rr_median <= 54.75) {
                            if (diastolic_time <= 0.36342857778072357) {
                                votes[30] = 3;
                            } else {
                                votes[30] = 0;
                            }
                        } else {
                            if (rr_median <= 130.75) {
                                if (num_peaks <= 133.5) {
                                    if (num_peaks <= 130.5) {
                                        votes[30] = 0;
                                    } else {
                                        votes[30] = 0;
                                    }
                                } else {
                                    if (diastolic_time <= 0.3283478319644928) {
                                        votes[30] = 0;
                                    } else {
                                        if (rr_median <= 84.0) {
                                            votes[30] = 0;
                                        } else {
                                            votes[30] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[30] = 0;
                            }
                        }
                    } else {
                        votes[30] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 31
    if (diastolic_time <= 0.2538642883300781) {
        if (rr_median <= 83.25) {
            if (rr_std <= 16.9524507522583) {
                if (rr_median <= 68.75) {
                    if (num_valleys <= 51.5) {
                        votes[31] = 4;
                    } else {
                        if (rr_median <= 66.5) {
                            if (rr_std <= 9.526742935180664) {
                                if (rr_std <= 1.2250682711601257) {
                                    votes[31] = 3;
                                } else {
                                    if (num_peaks <= 123.5) {
                                        votes[31] = 3;
                                    } else {
                                        votes[31] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 10.791455745697021) {
                                    if (rr_std <= 10.06764030456543) {
                                        votes[31] = 3;
                                    } else {
                                        votes[31] = 1;
                                    }
                                } else {
                                    if (num_peaks <= 131.5) {
                                        votes[31] = 3;
                                    } else {
                                        votes[31] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[31] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 5.8439013957977295) {
                        if (num_valleys <= 68.0) {
                            votes[31] = 5;
                        } else {
                            votes[31] = 3;
                        }
                    } else {
                        if (rr_std <= 13.398627281188965) {
                            if (num_peaks <= 127.5) {
                                votes[31] = 5;
                            } else {
                                votes[31] = 5;
                            }
                        } else {
                            votes[31] = 5;
                        }
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (diastolic_time <= 0.04520588181912899) {
                        votes[31] = 4;
                    } else {
                        if (diastolic_time <= 0.07599236816167831) {
                            votes[31] = 3;
                        } else {
                            if (rr_median <= 59.5) {
                                if (num_peaks <= 108.5) {
                                    votes[31] = 3;
                                } else {
                                    votes[31] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.11842244863510132) {
                                    if (rr_median <= 73.5) {
                                        if (num_valleys <= 72.5) {
                                            votes[31] = 4;
                                        } else {
                                            votes[31] = 3;
                                        }
                                    } else {
                                        votes[31] = 5;
                                    }
                                } else {
                                    if (num_peaks <= 131.5) {
                                        if (num_valleys <= 72.5) {
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
                } else {
                    if (num_valleys <= 73.5) {
                        votes[31] = 3;
                    } else {
                        if (rr_std <= 26.347627639770508) {
                            votes[31] = 3;
                        } else {
                            votes[31] = 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.08850273117423058) {
                if (num_valleys <= 62.5) {
                    if (rr_median <= 114.75) {
                        if (num_valleys <= 58.0) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 5;
                        }
                    } else {
                        if (num_peaks <= 94.5) {
                            votes[31] = 4;
                        } else {
                            votes[31] = 4;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.013421053066849709) {
                        votes[31] = 0;
                    } else {
                        if (rr_median <= 112.75) {
                            if (rr_std <= 39.516366958618164) {
                                if (rr_median <= 96.5) {
                                    votes[31] = 5;
                                } else {
                                    if (rr_std <= 1.746669590473175) {
                                        votes[31] = 1;
                                    } else {
                                        votes[31] = 1;
                                    }
                                }
                            } else {
                                if (rr_median <= 96.5) {
                                    votes[31] = 1;
                                } else {
                                    votes[31] = 1;
                                }
                            }
                        } else {
                            votes[31] = 1;
                        }
                    }
                }
            } else {
                if (num_valleys <= 65.5) {
                    if (rr_std <= 18.06674289703369) {
                        if (rr_median <= 90.25) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 5;
                        }
                    } else {
                        if (num_valleys <= 54.5) {
                            votes[31] = 3;
                        } else {
                            votes[31] = 4;
                        }
                    }
                } else {
                    if (rr_median <= 123.5) {
                        if (num_valleys <= 75.5) {
                            if (diastolic_time <= 0.16147059202194214) {
                                if (diastolic_time <= 0.12647312134504318) {
                                    votes[31] = 3;
                                } else {
                                    votes[31] = 4;
                                }
                            } else {
                                votes[31] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.11912769451737404) {
                                votes[31] = 5;
                            } else {
                                votes[31] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.12430280819535255) {
                            votes[31] = 5;
                        } else {
                            votes[31] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 70.5) {
            if (rr_std <= 39.30656623840332) {
                if (rr_std <= 0.6986072361469269) {
                    if (rr_median <= 74.25) {
                        if (rr_median <= 67.5) {
                            votes[31] = 3;
                        } else {
                            if (rr_median <= 71.0) {
                                votes[31] = 2;
                            } else {
                                votes[31] = 2;
                            }
                        }
                    } else {
                        votes[31] = 5;
                    }
                } else {
                    if (rr_std <= 14.157156467437744) {
                        if (num_valleys <= 68.5) {
                            if (rr_median <= 100.0) {
                                if (rr_median <= 66.75) {
                                    votes[31] = 5;
                                } else {
                                    if (rr_std <= 9.863298892974854) {
                                        votes[31] = 5;
                                    } else {
                                        votes[31] = 5;
                                    }
                                }
                            } else {
                                votes[31] = 5;
                            }
                        } else {
                            votes[31] = 0;
                        }
                    } else {
                        if (rr_median <= 88.5) {
                            if (num_peaks <= 105.0) {
                                if (rr_median <= 75.5) {
                                    votes[31] = 2;
                                } else {
                                    if (rr_median <= 79.5) {
                                        votes[31] = 4;
                                    } else {
                                        if (diastolic_time <= 0.32100000977516174) {
                                            votes[31] = 2;
                                        } else {
                                            votes[31] = 2;
                                        }
                                    }
                                }
                            } else {
                                votes[31] = 0;
                            }
                        } else {
                            if (diastolic_time <= 0.6688484847545624) {
                                if (rr_median <= 98.5) {
                                    if (diastolic_time <= 0.3449999988079071) {
                                        votes[31] = 4;
                                    } else {
                                        votes[31] = 4;
                                    }
                                } else {
                                    votes[31] = 2;
                                }
                            } else {
                                votes[31] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.4041333347558975) {
                    votes[31] = 5;
                } else {
                    if (diastolic_time <= 0.6784444451332092) {
                        votes[31] = 1;
                    } else {
                        votes[31] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 6.039847135543823) {
                if (num_peaks <= 136.0) {
                    votes[31] = 5;
                } else {
                    votes[31] = 3;
                }
            } else {
                if (rr_median <= 53.25) {
                    votes[31] = 0;
                } else {
                    if (num_peaks <= 124.5) {
                        if (diastolic_time <= 0.43648529052734375) {
                            votes[31] = 0;
                        } else {
                            votes[31] = 1;
                        }
                    } else {
                        if (num_peaks <= 151.5) {
                            if (rr_median <= 144.0) {
                                if (rr_std <= 27.78263759613037) {
                                    votes[31] = 0;
                                } else {
                                    if (rr_std <= 29.960651397705078) {
                                        votes[31] = 0;
                                    } else {
                                        votes[31] = 0;
                                    }
                                }
                            } else {
                                votes[31] = 0;
                            }
                        } else {
                            votes[31] = 0;
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 32
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_std <= 14.180799007415771) {
            if (rr_median <= 98.5) {
                if (rr_median <= 68.75) {
                    if (rr_std <= 9.526742935180664) {
                        if (rr_std <= 1.2250682711601257) {
                            votes[32] = 3;
                        } else {
                            votes[32] = 3;
                        }
                    } else {
                        if (rr_std <= 10.429742813110352) {
                            if (rr_std <= 10.06764030456543) {
                                votes[32] = 1;
                            } else {
                                votes[32] = 1;
                            }
                        } else {
                            if (rr_median <= 53.0) {
                                votes[32] = 3;
                            } else {
                                votes[32] = 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.1596766710281372) {
                        if (rr_median <= 85.25) {
                            if (rr_median <= 75.75) {
                                if (num_valleys <= 66.5) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 3;
                                }
                            } else {
                                votes[32] = 5;
                            }
                        } else {
                            if (num_peaks <= 112.5) {
                                votes[32] = 1;
                            } else {
                                if (diastolic_time <= 0.11680784821510315) {
                                    if (num_peaks <= 138.5) {
                                        votes[32] = 3;
                                    } else {
                                        votes[32] = 0;
                                    }
                                } else {
                                    votes[32] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 87.5) {
                            votes[32] = 3;
                        } else {
                            if (diastolic_time <= 0.18917769938707352) {
                                votes[32] = 5;
                            } else {
                                votes[32] = 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 0.5948760658502579) {
                    votes[32] = 4;
                } else {
                    if (num_valleys <= 80.0) {
                        if (num_valleys <= 68.5) {
                            votes[32] = 1;
                        } else {
                            votes[32] = 1;
                        }
                    } else {
                        votes[32] = 1;
                    }
                }
            }
        } else {
            if (num_valleys <= 72.5) {
                if (diastolic_time <= 0.035669781267642975) {
                    if (diastolic_time <= 0.030581284314393997) {
                        votes[32] = 4;
                    } else {
                        votes[32] = 4;
                    }
                } else {
                    if (diastolic_time <= 0.10749129951000214) {
                        if (rr_std <= 23.800901412963867) {
                            if (rr_median <= 63.5) {
                                votes[32] = 4;
                            } else {
                                votes[32] = 3;
                            }
                        } else {
                            if (num_valleys <= 64.5) {
                                if (rr_median <= 98.0) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 4;
                                }
                            } else {
                                if (rr_std <= 29.224910736083984) {
                                    votes[32] = 1;
                                } else {
                                    votes[32] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 61.0) {
                            votes[32] = 3;
                        } else {
                            if (rr_median <= 83.5) {
                                if (num_peaks <= 131.5) {
                                    if (rr_median <= 77.5) {
                                        votes[32] = 4;
                                    } else {
                                        votes[32] = 4;
                                    }
                                } else {
                                    votes[32] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.12985136359930038) {
                                    votes[32] = 3;
                                } else {
                                    if (num_peaks <= 117.0) {
                                        votes[32] = 4;
                                    } else {
                                        votes[32] = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.08897850662469864) {
                    if (rr_median <= 82.75) {
                        votes[32] = 3;
                    } else {
                        if (rr_std <= 27.08780288696289) {
                            votes[32] = 1;
                        } else {
                            votes[32] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 27.766839027404785) {
                        if (rr_median <= 69.25) {
                            votes[32] = 1;
                        } else {
                            if (rr_std <= 22.680052757263184) {
                                votes[32] = 5;
                            } else {
                                votes[32] = 4;
                            }
                        }
                    } else {
                        if (num_peaks <= 133.5) {
                            votes[32] = 5;
                        } else {
                            votes[32] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 70.5) {
            if (diastolic_time <= 0.6350666582584381) {
                if (rr_median <= 75.25) {
                    if (rr_median <= 66.75) {
                        if (num_peaks <= 90.5) {
                            votes[32] = 2;
                        } else {
                            if (diastolic_time <= 0.3548608720302582) {
                                if (rr_median <= 58.0) {
                                    votes[32] = 3;
                                } else {
                                    votes[32] = 3;
                                }
                            } else {
                                votes[32] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 0.7004843354225159) {
                            if (rr_median <= 73.5) {
                                if (rr_median <= 67.5) {
                                    if (rr_std <= 0.6036281585693359) {
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
                        } else {
                            if (rr_std <= 19.161816596984863) {
                                if (rr_std <= 11.788589477539062) {
                                    if (rr_std <= 2.3987138867378235) {
                                        votes[32] = 5;
                                    } else {
                                        votes[32] = 5;
                                    }
                                } else {
                                    votes[32] = 0;
                                }
                            } else {
                                if (rr_std <= 28.37512969970703) {
                                    votes[32] = 2;
                                } else {
                                    votes[32] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 88.5) {
                        if (rr_median <= 98.5) {
                            if (rr_median <= 89.5) {
                                if (rr_std <= 27.94385814666748) {
                                    votes[32] = 2;
                                } else {
                                    votes[32] = 4;
                                }
                            } else {
                                votes[32] = 4;
                            }
                        } else {
                            votes[32] = 5;
                        }
                    } else {
                        if (rr_std <= 3.639171063899994) {
                            if (rr_median <= 86.75) {
                                votes[32] = 5;
                            } else {
                                votes[32] = 5;
                            }
                        } else {
                            if (rr_std <= 33.76094627380371) {
                                if (rr_std <= 16.730151653289795) {
                                    votes[32] = 5;
                                } else {
                                    votes[32] = 2;
                                }
                            } else {
                                votes[32] = 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 11.227814674377441) {
                    votes[32] = 5;
                } else {
                    if (rr_std <= 40.75847053527832) {
                        if (rr_median <= 104.25) {
                            votes[32] = 2;
                        } else {
                            votes[32] = 1;
                        }
                    } else {
                        votes[32] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.5058066844940186) {
                if (rr_std <= 4.67800235748291) {
                    votes[32] = 5;
                } else {
                    votes[32] = 3;
                }
            } else {
                if (diastolic_time <= 0.7655999958515167) {
                    if (rr_median <= 53.25) {
                        if (rr_std <= 11.745954990386963) {
                            votes[32] = 3;
                        } else {
                            votes[32] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.2809973508119583) {
                            votes[32] = 0;
                        } else {
                            if (num_peaks <= 124.5) {
                                votes[32] = 0;
                            } else {
                                if (num_valleys <= 77.5) {
                                    if (diastolic_time <= 0.4744117707014084) {
                                        if (num_peaks <= 144.5) {
                                            votes[32] = 0;
                                        } else {
                                            votes[32] = 0;
                                        }
                                    } else {
                                        if (num_peaks <= 145.0) {
                                            votes[32] = 0;
                                        } else {
                                            votes[32] = 0;
                                        }
                                    }
                                } else {
                                    votes[32] = 0;
                                }
                            }
                        }
                    }
                } else {
                    votes[32] = 1;
                }
            }
        }
    }
// Decision rules for tree 33
    if (diastolic_time <= 0.24945376813411713) {
        if (rr_median <= 76.25) {
            if (num_peaks <= 130.5) {
                if (rr_std <= 9.374951362609863) {
                    if (rr_median <= 68.75) {
                        if (rr_std <= 4.745859622955322) {
                            if (diastolic_time <= 0.14912693202495575) {
                                votes[33] = 3;
                            } else {
                                votes[33] = 1;
                            }
                        } else {
                            votes[33] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.1795330047607422) {
                            votes[33] = 5;
                        } else {
                            votes[33] = 3;
                        }
                    }
                } else {
                    if (num_valleys <= 71.5) {
                        if (diastolic_time <= 0.049693986773490906) {
                            votes[33] = 4;
                        } else {
                            if (rr_median <= 60.5) {
                                if (num_peaks <= 84.5) {
                                    votes[33] = 4;
                                } else {
                                    votes[33] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.11359020695090294) {
                                    votes[33] = 4;
                                } else {
                                    if (num_valleys <= 64.5) {
                                        votes[33] = 4;
                                    } else {
                                        votes[33] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 10.968176364898682) {
                            votes[33] = 1;
                        } else {
                            if (rr_std <= 16.25361442565918) {
                                votes[33] = 3;
                            } else {
                                if (diastolic_time <= 0.13211148604750633) {
                                    votes[33] = 5;
                                } else {
                                    votes[33] = 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 26.347627639770508) {
                    if (rr_std <= 10.193246841430664) {
                        votes[33] = 3;
                    } else {
                        if (diastolic_time <= 0.12883508205413818) {
                            if (diastolic_time <= 0.08834806084632874) {
                                votes[33] = 3;
                            } else {
                                if (rr_median <= 54.5) {
                                    votes[33] = 1;
                                } else {
                                    votes[33] = 5;
                                }
                            }
                        } else {
                            votes[33] = 3;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.09195434674620628) {
                        votes[33] = 3;
                    } else {
                        votes[33] = 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.11361012607812881) {
                if (diastolic_time <= 0.03449518792331219) {
                    if (diastolic_time <= 0.03305843472480774) {
                        if (diastolic_time <= 0.01281012687832117) {
                            if (rr_median <= 98.75) {
                                votes[33] = 0;
                            } else {
                                votes[33] = 3;
                            }
                        } else {
                            votes[33] = 1;
                        }
                    } else {
                        votes[33] = 4;
                    }
                } else {
                    if (rr_median <= 85.75) {
                        if (rr_std <= 10.538313865661621) {
                            votes[33] = 5;
                        } else {
                            if (diastolic_time <= 0.0786360390484333) {
                                votes[33] = 1;
                            } else {
                                votes[33] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 97.5) {
                            if (num_valleys <= 70.5) {
                                if (rr_median <= 95.25) {
                                    votes[33] = 1;
                                } else {
                                    votes[33] = 5;
                                }
                            } else {
                                votes[33] = 3;
                            }
                        } else {
                            if (num_valleys <= 64.5) {
                                votes[33] = 4;
                            } else {
                                if (diastolic_time <= 0.06091477908194065) {
                                    if (rr_std <= 27.40385627746582) {
                                        votes[33] = 1;
                                    } else {
                                        votes[33] = 1;
                                    }
                                } else {
                                    if (rr_std <= 17.39704418182373) {
                                        if (diastolic_time <= 0.07739413529634476) {
                                            votes[33] = 1;
                                        } else {
                                            votes[33] = 1;
                                        }
                                    } else {
                                        votes[33] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 16.262849807739258) {
                    if (rr_median <= 119.5) {
                        if (diastolic_time <= 0.14225972443819046) {
                            votes[33] = 1;
                        } else {
                            if (num_valleys <= 81.0) {
                                if (num_peaks <= 109.0) {
                                    votes[33] = 5;
                                } else {
                                    votes[33] = 5;
                                }
                            } else {
                                votes[33] = 5;
                            }
                        }
                    } else {
                        votes[33] = 1;
                    }
                } else {
                    if (num_peaks <= 135.5) {
                        if (rr_median <= 79.25) {
                            votes[33] = 5;
                        } else {
                            if (num_peaks <= 120.5) {
                                if (num_valleys <= 66.5) {
                                    votes[33] = 4;
                                } else {
                                    votes[33] = 5;
                                }
                            } else {
                                if (rr_median <= 94.5) {
                                    votes[33] = 4;
                                } else {
                                    votes[33] = 4;
                                }
                            }
                        }
                    } else {
                        votes[33] = 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_time <= 0.6426666676998138) {
                if (rr_median <= 88.5) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.5076166689395905) {
                            if (rr_std <= 28.4000825881958) {
                                if (rr_median <= 74.25) {
                                    votes[33] = 2;
                                } else {
                                    if (rr_std <= 26.10076332092285) {
                                        votes[33] = 2;
                                    } else {
                                        votes[33] = 2;
                                    }
                                }
                            } else {
                                votes[33] = 4;
                            }
                        } else {
                            votes[33] = 5;
                        }
                    } else {
                        if (rr_std <= 0.6576194167137146) {
                            if (rr_median <= 67.5) {
                                votes[33] = 3;
                            } else {
                                if (rr_std <= 0.43653950095176697) {
                                    votes[33] = 2;
                                } else {
                                    votes[33] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 14.375516891479492) {
                                if (diastolic_time <= 0.3367878794670105) {
                                    votes[33] = 5;
                                } else {
                                    votes[33] = 5;
                                }
                            } else {
                                if (rr_std <= 16.885509490966797) {
                                    votes[33] = 0;
                                } else {
                                    if (rr_std <= 39.341705322265625) {
                                        if (rr_std <= 21.24723243713379) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 2;
                                        }
                                    } else {
                                        votes[33] = 1;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 14.144267559051514) {
                        votes[33] = 5;
                    } else {
                        if (rr_median <= 98.5) {
                            votes[33] = 4;
                        } else {
                            votes[33] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 7.973716974258423) {
                    votes[33] = 5;
                } else {
                    if (rr_std <= 41.50863838195801) {
                        if (rr_std <= 25.261651039123535) {
                            votes[33] = 1;
                        } else {
                            votes[33] = 2;
                        }
                    } else {
                        votes[33] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.802156209945679) {
                if (diastolic_time <= 0.46839216351509094) {
                    if (num_peaks <= 139.5) {
                        votes[33] = 3;
                    } else {
                        votes[33] = 3;
                    }
                } else {
                    votes[33] = 5;
                }
            } else {
                if (diastolic_time <= 0.7556000053882599) {
                    if (diastolic_time <= 0.32037879526615143) {
                        if (num_peaks <= 122.0) {
                            votes[33] = 5;
                        } else {
                            if (rr_std <= 14.372107982635498) {
                                votes[33] = 3;
                            } else {
                                votes[33] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 55.75) {
                            if (num_valleys <= 76.5) {
                                votes[33] = 3;
                            } else {
                                votes[33] = 0;
                            }
                        } else {
                            if (num_peaks <= 132.5) {
                                if (rr_median <= 81.75) {
                                    if (num_peaks <= 123.5) {
                                        votes[33] = 0;
                                    } else {
                                        votes[33] = 0;
                                    }
                                } else {
                                    votes[33] = 0;
                                }
                            } else {
                                if (rr_median <= 144.0) {
                                    if (rr_median <= 83.25) {
                                        votes[33] = 0;
                                    } else {
                                        if (rr_median <= 86.5) {
                                            votes[33] = 0;
                                        } else {
                                            votes[33] = 0;
                                        }
                                    }
                                } else {
                                    votes[33] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 129.5) {
                        votes[33] = 1;
                    } else {
                        votes[33] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 34
    if (diastolic_time <= 0.20919519662857056) {
        if (rr_median <= 99.25) {
            if (rr_std <= 14.178498268127441) {
                if (rr_median <= 68.5) {
                    if (num_peaks <= 132.5) {
                        if (rr_median <= 47.75) {
                            votes[34] = 1;
                        } else {
                            if (num_peaks <= 120.5) {
                                votes[34] = 3;
                            } else {
                                if (rr_median <= 54.25) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 60.25) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 3;
                        }
                    }
                } else {
                    if (num_peaks <= 141.5) {
                        if (num_peaks <= 129.0) {
                            if (diastolic_time <= 0.15904156863689423) {
                                if (diastolic_time <= 0.07034611701965332) {
                                    votes[34] = 5;
                                } else {
                                    if (num_valleys <= 75.5) {
                                        if (rr_std <= 1.077792763710022) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 1;
                                        }
                                    } else {
                                        votes[34] = 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 114.5) {
                                    votes[34] = 5;
                                } else {
                                    votes[34] = 5;
                                }
                            }
                        } else {
                            if (num_valleys <= 78.5) {
                                votes[34] = 3;
                            } else {
                                votes[34] = 3;
                            }
                        }
                    } else {
                        votes[34] = 0;
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (rr_median <= 74.0) {
                        if (num_valleys <= 71.5) {
                            if (rr_std <= 53.32942581176758) {
                                if (num_peaks <= 124.5) {
                                    votes[34] = 4;
                                } else {
                                    if (num_peaks <= 127.0) {
                                        votes[34] = 4;
                                    } else {
                                        votes[34] = 4;
                                    }
                                }
                            } else {
                                votes[34] = 4;
                            }
                        } else {
                            if (rr_median <= 66.25) {
                                votes[34] = 3;
                            } else {
                                votes[34] = 4;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.11986895278096199) {
                            if (rr_std <= 26.233665466308594) {
                                votes[34] = 3;
                            } else {
                                if (num_valleys <= 69.5) {
                                    votes[34] = 5;
                                } else {
                                    if (num_peaks <= 127.5) {
                                        votes[34] = 3;
                                    } else {
                                        votes[34] = 1;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 117.5) {
                                votes[34] = 5;
                            } else {
                                if (rr_median <= 78.5) {
                                    votes[34] = 4;
                                } else {
                                    if (rr_std <= 20.1679630279541) {
                                        votes[34] = 4;
                                    } else {
                                        votes[34] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 67.5) {
                        if (diastolic_time <= 0.09230434894561768) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.0794583335518837) {
                            votes[34] = 0;
                        } else {
                            votes[34] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 59.5) {
                if (rr_std <= 16.382503032684326) {
                    votes[34] = 1;
                } else {
                    if (num_valleys <= 46.5) {
                        votes[34] = 3;
                    } else {
                        votes[34] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 0.10200454294681549) {
                    if (diastolic_time <= 0.03425883129239082) {
                        votes[34] = 1;
                    } else {
                        if (rr_std <= 12.704443454742432) {
                            votes[34] = 1;
                        } else {
                            if (rr_std <= 18.914443016052246) {
                                votes[34] = 5;
                            } else {
                                if (diastolic_time <= 0.058425815775990486) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 15.518022537231445) {
                        votes[34] = 1;
                    } else {
                        votes[34] = 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 74.25) {
                if (num_valleys <= 61.5) {
                    if (diastolic_time <= 0.5237500071525574) {
                        if (num_peaks <= 90.0) {
                            if (rr_median <= 68.5) {
                                if (num_peaks <= 84.0) {
                                    votes[34] = 2;
                                } else {
                                    votes[34] = 2;
                                }
                            } else {
                                votes[34] = 2;
                            }
                        } else {
                            if (num_peaks <= 101.5) {
                                votes[34] = 3;
                            } else {
                                if (rr_median <= 71.0) {
                                    votes[34] = 2;
                                } else {
                                    votes[34] = 2;
                                }
                            }
                        }
                    } else {
                        votes[34] = 5;
                    }
                } else {
                    if (rr_median <= 66.25) {
                        if (diastolic_time <= 0.3355964869260788) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.30338461697101593) {
                            votes[34] = 5;
                        } else {
                            votes[34] = 0;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6116923093795776) {
                    if (rr_std <= 3.639171063899994) {
                        votes[34] = 5;
                    } else {
                        if (rr_median <= 87.5) {
                            if (rr_std <= 31.58354949951172) {
                                if (rr_std <= 24.789010047912598) {
                                    votes[34] = 2;
                                } else {
                                    votes[34] = 2;
                                }
                            } else {
                                votes[34] = 4;
                            }
                        } else {
                            if (rr_std <= 47.85641670227051) {
                                if (rr_median <= 98.5) {
                                    if (rr_std <= 23.45696449279785) {
                                        votes[34] = 4;
                                    } else {
                                        votes[34] = 4;
                                    }
                                } else {
                                    votes[34] = 4;
                                }
                            } else {
                                votes[34] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 7.973716974258423) {
                        votes[34] = 5;
                    } else {
                        if (rr_median <= 82.5) {
                            votes[34] = 1;
                        } else {
                            votes[34] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 8.515140533447266) {
                if (rr_median <= 90.75) {
                    if (rr_std <= 2.130906343460083) {
                        votes[34] = 3;
                    } else {
                        if (diastolic_time <= 0.38945263624191284) {
                            votes[34] = 5;
                        } else {
                            votes[34] = 0;
                        }
                    }
                } else {
                    votes[34] = 5;
                }
            } else {
                if (diastolic_time <= 0.8466666638851166) {
                    if (diastolic_time <= 0.3309130519628525) {
                        if (num_peaks <= 142.0) {
                            if (num_peaks <= 124.0) {
                                votes[34] = 1;
                            } else {
                                if (num_valleys <= 75.5) {
                                    votes[34] = 0;
                                } else {
                                    votes[34] = 0;
                                }
                            }
                        } else {
                            votes[34] = 3;
                        }
                    } else {
                        if (num_peaks <= 132.5) {
                            if (num_peaks <= 128.5) {
                                if (diastolic_time <= 0.45223529636859894) {
                                    votes[34] = 0;
                                } else {
                                    votes[34] = 0;
                                }
                            } else {
                                votes[34] = 1;
                            }
                        } else {
                            if (diastolic_time <= 0.6935636401176453) {
                                if (rr_std <= 58.99506950378418) {
                                    if (rr_std <= 27.78263759613037) {
                                        votes[34] = 0;
                                    } else {
                                        if (rr_std <= 30.81499481201172) {
                                            votes[34] = 0;
                                        } else {
                                            votes[34] = 0;
                                        }
                                    }
                                } else {
                                    votes[34] = 0;
                                }
                            } else {
                                votes[34] = 0;
                            }
                        }
                    }
                } else {
                    votes[34] = 1;
                }
            }
        }
    }
// Decision rules for tree 35
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 75.25) {
            if (rr_std <= 20.21463394165039) {
                if (rr_median <= 66.25) {
                    if (num_valleys <= 51.0) {
                        votes[35] = 4;
                    } else {
                        if (diastolic_time <= 0.057522380724549294) {
                            if (num_peaks <= 127.0) {
                                votes[35] = 4;
                            } else {
                                votes[35] = 3;
                            }
                        } else {
                            if (rr_median <= 53.25) {
                                votes[35] = 3;
                            } else {
                                if (rr_median <= 55.5) {
                                    votes[35] = 1;
                                } else {
                                    if (num_valleys <= 69.5) {
                                        votes[35] = 3;
                                    } else {
                                        if (num_valleys <= 73.5) {
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
                    if (rr_std <= 0.6215836405754089) {
                        if (rr_std <= 0.5289374887943268) {
                            votes[35] = 3;
                        } else {
                            votes[35] = 2;
                        }
                    } else {
                        if (rr_std <= 2.3031705021858215) {
                            votes[35] = 3;
                        } else {
                            if (rr_std <= 10.758873462677002) {
                                votes[35] = 5;
                            } else {
                                if (num_valleys <= 70.5) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.23742718249559402) {
                        if (num_valleys <= 74.5) {
                            if (num_valleys <= 45.5) {
                                votes[35] = 4;
                            } else {
                                if (rr_std <= 52.28030967712402) {
                                    if (num_peaks <= 123.5) {
                                        votes[35] = 4;
                                    } else {
                                        if (rr_std <= 23.54753017425537) {
                                            votes[35] = 4;
                                        } else {
                                            votes[35] = 4;
                                        }
                                    }
                                } else {
                                    votes[35] = 4;
                                }
                            }
                        } else {
                            votes[35] = 4;
                        }
                    } else {
                        votes[35] = 3;
                    }
                } else {
                    if (rr_median <= 61.75) {
                        votes[35] = 1;
                    } else {
                        votes[35] = 3;
                    }
                }
            }
        } else {
            if (rr_median <= 101.0) {
                if (rr_std <= 15.716776847839355) {
                    if (num_valleys <= 63.5) {
                        if (num_valleys <= 52.5) {
                            votes[35] = 5;
                        } else {
                            votes[35] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.12759999930858612) {
                            if (diastolic_time <= 0.10020945966243744) {
                                if (rr_median <= 87.75) {
                                    votes[35] = 5;
                                } else {
                                    votes[35] = 1;
                                }
                            } else {
                                votes[35] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.21989189833402634) {
                                if (num_peaks <= 119.0) {
                                    votes[35] = 5;
                                } else {
                                    if (num_valleys <= 73.0) {
                                        votes[35] = 5;
                                    } else {
                                        votes[35] = 5;
                                    }
                                }
                            } else {
                                votes[35] = 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.12971946597099304) {
                        if (num_peaks <= 140.0) {
                            if (rr_std <= 33.01816940307617) {
                                if (num_peaks <= 118.0) {
                                    votes[35] = 1;
                                } else {
                                    votes[35] = 3;
                                }
                            } else {
                                if (num_valleys <= 71.5) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 1;
                                }
                            }
                        } else {
                            votes[35] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.1736646518111229) {
                            if (rr_std <= 25.933131217956543) {
                                votes[35] = 4;
                            } else {
                                votes[35] = 4;
                            }
                        } else {
                            if (num_valleys <= 69.5) {
                                if (diastolic_time <= 0.2260403409600258) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 4;
                                }
                            } else {
                                votes[35] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 115.5) {
                    if (diastolic_time <= 0.03229610249400139) {
                        votes[35] = 1;
                    } else {
                        if (rr_std <= 22.7636775970459) {
                            votes[35] = 1;
                        } else {
                            if (num_valleys <= 48.5) {
                                votes[35] = 3;
                            } else {
                                if (rr_median <= 117.0) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.013421053066849709) {
                        votes[35] = 3;
                    } else {
                        if (diastolic_time <= 0.11823563277721405) {
                            if (diastolic_time <= 0.08349999785423279) {
                                votes[35] = 1;
                            } else {
                                votes[35] = 1;
                            }
                        } else {
                            if (rr_std <= 3.7685245275497437) {
                                votes[35] = 1;
                            } else {
                                votes[35] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_time <= 0.6263999938964844) {
                if (rr_std <= 0.6467249393463135) {
                    if (rr_std <= 0.41066253185272217) {
                        votes[35] = 2;
                    } else {
                        if (rr_median <= 73.5) {
                            if (num_peaks <= 91.0) {
                                votes[35] = 2;
                            } else {
                                if (num_peaks <= 106.5) {
                                    votes[35] = 2;
                                } else {
                                    votes[35] = 2;
                                }
                            }
                        } else {
                            votes[35] = 2;
                        }
                    }
                } else {
                    if (num_peaks <= 94.0) {
                        if (rr_median <= 81.75) {
                            if (diastolic_time <= 0.4682333320379257) {
                                if (rr_median <= 75.5) {
                                    if (rr_median <= 69.0) {
                                        votes[35] = 2;
                                    } else {
                                        votes[35] = 2;
                                    }
                                } else {
                                    votes[35] = 2;
                                }
                            } else {
                                votes[35] = 5;
                            }
                        } else {
                            if (rr_std <= 21.00195598602295) {
                                votes[35] = 5;
                            } else {
                                if (rr_median <= 98.5) {
                                    if (rr_median <= 90.0) {
                                        votes[35] = 4;
                                    } else {
                                        votes[35] = 4;
                                    }
                                } else {
                                    votes[35] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 64.5) {
                            votes[35] = 3;
                        } else {
                            if (rr_std <= 11.14601182937622) {
                                if (rr_std <= 0.906762957572937) {
                                    votes[35] = 5;
                                } else {
                                    votes[35] = 5;
                                }
                            } else {
                                if (num_peaks <= 108.0) {
                                    votes[35] = 5;
                                } else {
                                    if (num_peaks <= 120.5) {
                                        if (num_peaks <= 113.5) {
                                            votes[35] = 0;
                                        } else {
                                            votes[35] = 0;
                                        }
                                    } else {
                                        votes[35] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[35] = 5;
                } else {
                    votes[35] = 1;
                }
            }
        } else {
            if (rr_std <= 4.967223405838013) {
                if (num_valleys <= 74.0) {
                    votes[35] = 5;
                } else {
                    votes[35] = 3;
                }
            } else {
                if (num_peaks <= 151.5) {
                    if (rr_median <= 52.25) {
                        votes[35] = 0;
                    } else {
                        if (diastolic_time <= 0.29407407343387604) {
                            votes[35] = 0;
                        } else {
                            if (num_valleys <= 70.5) {
                                votes[35] = 0;
                            } else {
                                if (num_valleys <= 77.5) {
                                    if (rr_std <= 27.954304695129395) {
                                        if (num_peaks <= 142.5) {
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
                } else {
                    votes[35] = 2;
                }
            }
        }
    }
// Decision rules for tree 36
    if (diastolic_time <= 0.2631056606769562) {
        if (rr_median <= 98.5) {
            if (rr_std <= 16.839214324951172) {
                if (rr_median <= 66.5) {
                    if (num_peaks <= 134.5) {
                        if (rr_std <= 9.031359672546387) {
                            if (rr_median <= 47.5) {
                                votes[36] = 3;
                            } else {
                                if (diastolic_time <= 0.12316322699189186) {
                                    votes[36] = 3;
                                } else {
                                    votes[36] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 10.213472843170166) {
                                votes[36] = 1;
                            } else {
                                if (num_peaks <= 125.0) {
                                    if (diastolic_time <= 0.09748261049389839) {
                                        votes[36] = 4;
                                    } else {
                                        votes[36] = 3;
                                    }
                                } else {
                                    votes[36] = 5;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 146.5) {
                            votes[36] = 3;
                        } else {
                            votes[36] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 68.5) {
                        votes[36] = 2;
                    } else {
                        if (diastolic_time <= 0.034643569961190224) {
                            votes[36] = 0;
                        } else {
                            if (num_valleys <= 58.5) {
                                votes[36] = 1;
                            } else {
                                if (num_peaks <= 128.5) {
                                    if (rr_std <= 12.727213382720947) {
                                        if (rr_std <= 1.0241613984107971) {
                                            votes[36] = 5;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    } else {
                                        votes[36] = 3;
                                    }
                                } else {
                                    if (rr_std <= 10.326161861419678) {
                                        if (num_peaks <= 134.5) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 3;
                                        }
                                    } else {
                                        votes[36] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (rr_median <= 90.5) {
                        if (diastolic_time <= 0.04520588181912899) {
                            votes[36] = 4;
                        } else {
                            if (diastolic_time <= 0.12177366390824318) {
                                if (diastolic_time <= 0.07771603763103485) {
                                    votes[36] = 3;
                                } else {
                                    if (diastolic_time <= 0.10995616391301155) {
                                        if (rr_median <= 70.25) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    } else {
                                        votes[36] = 1;
                                    }
                                }
                            } else {
                                if (rr_median <= 59.0) {
                                    votes[36] = 2;
                                } else {
                                    if (num_valleys <= 64.0) {
                                        if (num_peaks <= 90.0) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    } else {
                                        if (diastolic_time <= 0.13935714960098267) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 32.78684616088867) {
                            votes[36] = 5;
                        } else {
                            votes[36] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 33.164541244506836) {
                        if (num_valleys <= 66.5) {
                            votes[36] = 3;
                        } else {
                            if (diastolic_time <= 0.10940739139914513) {
                                votes[36] = 5;
                            } else {
                                votes[36] = 4;
                            }
                        }
                    } else {
                        if (num_valleys <= 75.5) {
                            if (rr_median <= 82.75) {
                                votes[36] = 2;
                            } else {
                                votes[36] = 1;
                            }
                        } else {
                            votes[36] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 59.5) {
                if (rr_median <= 112.75) {
                    votes[36] = 1;
                } else {
                    if (num_peaks <= 86.0) {
                        votes[36] = 3;
                    } else {
                        if (rr_median <= 158.75) {
                            votes[36] = 4;
                        } else {
                            votes[36] = 4;
                        }
                    }
                }
            } else {
                if (rr_std <= 13.908481121063232) {
                    if (num_valleys <= 80.0) {
                        votes[36] = 1;
                    } else {
                        votes[36] = 1;
                    }
                } else {
                    if (diastolic_time <= 0.09277376160025597) {
                        if (rr_median <= 112.75) {
                            votes[36] = 1;
                        } else {
                            if (diastolic_time <= 0.07647693157196045) {
                                votes[36] = 1;
                            } else {
                                votes[36] = 1;
                            }
                        }
                    } else {
                        if (num_valleys <= 75.5) {
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
            if (diastolic_time <= 0.6167076826095581) {
                if (rr_median <= 87.5) {
                    if (num_peaks <= 99.5) {
                        if (diastolic_time <= 0.5084166526794434) {
                            if (rr_median <= 69.25) {
                                if (rr_std <= 15.427282810211182) {
                                    votes[36] = 2;
                                } else {
                                    votes[36] = 2;
                                }
                            } else {
                                if (rr_std <= 20.98497486114502) {
                                    votes[36] = 2;
                                } else {
                                    if (num_valleys <= 52.0) {
                                        if (rr_median <= 80.5) {
                                            votes[36] = 2;
                                        } else {
                                            votes[36] = 2;
                                        }
                                    } else {
                                        votes[36] = 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 73.5) {
                                votes[36] = 2;
                            } else {
                                votes[36] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.4641617685556412) {
                            if (rr_median <= 68.0) {
                                if (num_peaks <= 114.5) {
                                    votes[36] = 3;
                                } else {
                                    votes[36] = 2;
                                }
                            } else {
                                if (rr_std <= 3.4244357347488403) {
                                    votes[36] = 5;
                                } else {
                                    votes[36] = 0;
                                }
                            }
                        } else {
                            votes[36] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 8.648204028606415) {
                        votes[36] = 5;
                    } else {
                        if (rr_std <= 42.674232482910156) {
                            if (num_peaks <= 77.0) {
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
                if (rr_std <= 4.59311056137085) {
                    votes[36] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[36] = 1;
                    } else {
                        votes[36] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.985414028167725) {
                if (num_valleys <= 77.5) {
                    votes[36] = 3;
                } else {
                    if (rr_median <= 77.5) {
                        votes[36] = 0;
                    } else {
                        votes[36] = 2;
                    }
                }
            } else {
                if (num_peaks <= 108.5) {
                    votes[36] = 1;
                } else {
                    if (rr_median <= 52.25) {
                        votes[36] = 3;
                    } else {
                        if (diastolic_time <= 0.32698024809360504) {
                            if (num_peaks <= 142.0) {
                                votes[36] = 0;
                            } else {
                                votes[36] = 2;
                            }
                        } else {
                            if (diastolic_time <= 0.7767555415630341) {
                                if (num_valleys <= 77.5) {
                                    if (diastolic_time <= 0.484250009059906) {
                                        if (diastolic_time <= 0.42579565942287445) {
                                            votes[36] = 0;
                                        } else {
                                            votes[36] = 0;
                                        }
                                    } else {
                                        if (rr_std <= 11.507200241088867) {
                                            votes[36] = 0;
                                        } else {
                                            votes[36] = 0;
                                        }
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
    }
// Decision rules for tree 37
    if (diastolic_time <= 0.23782209306955338) {
        if (rr_std <= 18.38014793395996) {
            if (rr_median <= 85.75) {
                if (num_peaks <= 129.5) {
                    if (rr_median <= 47.75) {
                        if (rr_std <= 8.194443702697754) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 4;
                        }
                    } else {
                        if (rr_median <= 53.25) {
                            if (num_valleys <= 60.5) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 3;
                            }
                        } else {
                            if (num_peaks <= 121.5) {
                                if (diastolic_time <= 0.20603418350219727) {
                                    if (rr_std <= 7.608973264694214) {
                                        if (rr_median <= 68.75) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 5;
                                        }
                                    } else {
                                        if (num_valleys <= 65.5) {
                                            votes[37] = 4;
                                        } else {
                                            votes[37] = 3;
                                        }
                                    }
                                } else {
                                    votes[37] = 2;
                                }
                            } else {
                                if (rr_median <= 61.5) {
                                    votes[37] = 1;
                                } else {
                                    votes[37] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 74.5) {
                        if (num_peaks <= 133.0) {
                            if (diastolic_time <= 0.14523356407880783) {
                                votes[37] = 1;
                            } else {
                                votes[37] = 3;
                            }
                        } else {
                            if (num_peaks <= 146.0) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 3;
                            }
                        }
                    } else {
                        votes[37] = 3;
                    }
                }
            } else {
                if (rr_median <= 102.0) {
                    if (num_peaks <= 121.0) {
                        if (rr_median <= 90.25) {
                            votes[37] = 1;
                        } else {
                            if (diastolic_time <= 0.11587554961442947) {
                                votes[37] = 1;
                            } else {
                                votes[37] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.06508324295282364) {
                            votes[37] = 0;
                        } else {
                            if (rr_std <= 1.7382908463478088) {
                                if (num_peaks <= 126.0) {
                                    votes[37] = 3;
                                } else {
                                    votes[37] = 5;
                                }
                            } else {
                                votes[37] = 3;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 114.5) {
                        votes[37] = 4;
                    } else {
                        if (num_valleys <= 81.5) {
                            if (diastolic_time <= 0.06877552717924118) {
                                votes[37] = 1;
                            } else {
                                votes[37] = 1;
                            }
                        } else {
                            votes[37] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 132.5) {
                if (num_valleys <= 72.5) {
                    if (diastolic_time <= 0.035669781267642975) {
                        if (num_peaks <= 120.5) {
                            votes[37] = 4;
                        } else {
                            votes[37] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.08196304738521576) {
                            if (num_valleys <= 64.0) {
                                votes[37] = 5;
                            } else {
                                votes[37] = 1;
                            }
                        } else {
                            if (rr_median <= 62.5) {
                                votes[37] = 3;
                            } else {
                                if (rr_median <= 93.75) {
                                    if (num_peaks <= 116.5) {
                                        votes[37] = 4;
                                    } else {
                                        if (diastolic_time <= 0.14667320251464844) {
                                            votes[37] = 4;
                                        } else {
                                            votes[37] = 4;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 77.04608154296875) {
                                        votes[37] = 3;
                                    } else {
                                        votes[37] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.14232658594846725) {
                        if (diastolic_time <= 0.06568754836916924) {
                            votes[37] = 1;
                        } else {
                            if (rr_median <= 69.75) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 5;
                            }
                        }
                    } else {
                        votes[37] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 0.11950793489813805) {
                    if (rr_median <= 96.5) {
                        if (num_peaks <= 145.5) {
                            if (num_peaks <= 140.0) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 1;
                            }
                        } else {
                            votes[37] = 5;
                        }
                    } else {
                        if (rr_median <= 124.5) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 1;
                        }
                    }
                } else {
                    if (rr_median <= 77.0) {
                        votes[37] = 3;
                    } else {
                        if (diastolic_time <= 0.16714739054441452) {
                            votes[37] = 5;
                        } else {
                            votes[37] = 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.6167076826095581) {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.5076166689395905) {
                            if (num_valleys <= 39.5) {
                                votes[37] = 2;
                            } else {
                                votes[37] = 2;
                            }
                        } else {
                            if (num_peaks <= 85.5) {
                                votes[37] = 5;
                            } else {
                                votes[37] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 63.5) {
                            if (rr_std <= 8.81463286280632) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 3;
                            }
                        } else {
                            if (rr_std <= 0.6533262431621552) {
                                if (num_peaks <= 101.0) {
                                    votes[37] = 2;
                                } else {
                                    votes[37] = 2;
                                }
                            } else {
                                if (rr_std <= 13.463215351104736) {
                                    if (diastolic_time <= 0.482000008225441) {
                                        votes[37] = 5;
                                    } else {
                                        votes[37] = 5;
                                    }
                                } else {
                                    if (rr_std <= 17.181248664855957) {
                                        votes[37] = 0;
                                    } else {
                                        votes[37] = 2;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 13.48249101638794) {
                        if (num_peaks <= 111.0) {
                            votes[37] = 5;
                        } else {
                            votes[37] = 5;
                        }
                    } else {
                        if (rr_median <= 88.5) {
                            if (rr_std <= 31.58354949951172) {
                                if (diastolic_time <= 0.3336363583803177) {
                                    votes[37] = 2;
                                } else {
                                    votes[37] = 2;
                                }
                            } else {
                                votes[37] = 4;
                            }
                        } else {
                            if (rr_median <= 98.5) {
                                if (diastolic_time <= 0.36950239539146423) {
                                    votes[37] = 4;
                                } else {
                                    votes[37] = 4;
                                }
                            } else {
                                if (num_valleys <= 51.0) {
                                    votes[37] = 1;
                                } else {
                                    votes[37] = 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 5.3011627197265625) {
                    votes[37] = 5;
                } else {
                    if (diastolic_time <= 0.7264444530010223) {
                        votes[37] = 1;
                    } else {
                        votes[37] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.609926223754883) {
                if (num_peaks <= 130.0) {
                    votes[37] = 5;
                } else {
                    if (rr_median <= 77.5) {
                        votes[37] = 3;
                    } else {
                        votes[37] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.7767555415630341) {
                    if (diastolic_time <= 0.350758895277977) {
                        if (rr_median <= 55.75) {
                            votes[37] = 3;
                        } else {
                            if (rr_std <= 15.846619606018066) {
                                votes[37] = 0;
                            } else {
                                votes[37] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 43.716609954833984) {
                            if (num_peaks <= 124.5) {
                                votes[37] = 0;
                            } else {
                                if (rr_std <= 8.988080501556396) {
                                    votes[37] = 0;
                                } else {
                                    if (rr_std <= 27.78263759613037) {
                                        votes[37] = 0;
                                    } else {
                                        if (rr_std <= 29.506502151489258) {
                                            votes[37] = 0;
                                        } else {
                                            votes[37] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[37] = 0;
                        }
                    }
                } else {
                    votes[37] = 2;
                }
            }
        }
    }
// Decision rules for tree 38
    if (diastolic_time <= 0.22909558564424515) {
        if (rr_median <= 98.5) {
            if (rr_std <= 14.180799007415771) {
                if (rr_median <= 68.5) {
                    if (diastolic_time <= 0.21377193182706833) {
                        if (rr_median <= 47.75) {
                            if (num_peaks <= 121.5) {
                                votes[38] = 4;
                            } else {
                                votes[38] = 3;
                            }
                        } else {
                            if (rr_median <= 53.25) {
                                if (diastolic_time <= 0.07420262321829796) {
                                    votes[38] = 3;
                                } else {
                                    votes[38] = 3;
                                }
                            } else {
                                if (rr_median <= 54.5) {
                                    votes[38] = 1;
                                } else {
                                    if (diastolic_time <= 0.07242517918348312) {
                                        votes[38] = 3;
                                    } else {
                                        if (rr_median <= 57.75) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        votes[38] = 2;
                    }
                } else {
                    if (diastolic_time <= 0.21829189360141754) {
                        if (diastolic_time <= 0.034643569961190224) {
                            votes[38] = 0;
                        } else {
                            if (rr_std <= 4.62381649017334) {
                                if (num_valleys <= 68.5) {
                                    if (diastolic_time <= 0.07646872103214264) {
                                        votes[38] = 5;
                                    } else {
                                        votes[38] = 1;
                                    }
                                } else {
                                    if (diastolic_time <= 0.1597033366560936) {
                                        votes[38] = 3;
                                    } else {
                                        votes[38] = 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.11142051592469215) {
                                    votes[38] = 5;
                                } else {
                                    if (num_valleys <= 74.5) {
                                        votes[38] = 5;
                                    } else {
                                        votes[38] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[38] = 3;
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (num_valleys <= 77.5) {
                        if (diastolic_time <= 0.13846635073423386) {
                            if (diastolic_time <= 0.03740336187183857) {
                                votes[38] = 4;
                            } else {
                                if (diastolic_time <= 0.0752510353922844) {
                                    if (rr_median <= 76.25) {
                                        votes[38] = 3;
                                    } else {
                                        votes[38] = 1;
                                    }
                                } else {
                                    if (num_peaks <= 89.5) {
                                        votes[38] = 4;
                                    } else {
                                        if (num_valleys <= 67.5) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.1736646518111229) {
                                if (diastolic_time <= 0.14667320251464844) {
                                    votes[38] = 4;
                                } else {
                                    votes[38] = 4;
                                }
                            } else {
                                if (diastolic_time <= 0.18094611167907715) {
                                    votes[38] = 4;
                                } else {
                                    votes[38] = 4;
                                }
                            }
                        }
                    } else {
                        votes[38] = 5;
                    }
                } else {
                    if (num_valleys <= 66.5) {
                        votes[38] = 3;
                    } else {
                        if (diastolic_time <= 0.11232410371303558) {
                            if (rr_std <= 27.468436241149902) {
                                votes[38] = 0;
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
            if (rr_std <= 71.71626663208008) {
                if (num_valleys <= 47.5) {
                    votes[38] = 4;
                } else {
                    if (rr_median <= 99.75) {
                        votes[38] = 5;
                    } else {
                        if (diastolic_time <= 0.0355225782841444) {
                            votes[38] = 1;
                        } else {
                            if (diastolic_time <= 0.06091477908194065) {
                                votes[38] = 1;
                            } else {
                                if (num_peaks <= 116.0) {
                                    votes[38] = 1;
                                } else {
                                    if (diastolic_time <= 0.07218858227133751) {
                                        votes[38] = 1;
                                    } else {
                                        if (diastolic_time <= 0.17135202884674072) {
                                            votes[38] = 1;
                                        } else {
                                            votes[38] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.09915941953659058) {
                    votes[38] = 4;
                } else {
                    votes[38] = 3;
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (rr_std <= 0.6796177625656128) {
                if (rr_median <= 74.25) {
                    if (rr_median <= 69.5) {
                        if (rr_std <= 0.5364768803119659) {
                            votes[38] = 2;
                        } else {
                            votes[38] = 2;
                        }
                    } else {
                        if (num_peaks <= 105.5) {
                            votes[38] = 2;
                        } else {
                            votes[38] = 2;
                        }
                    }
                } else {
                    votes[38] = 5;
                }
            } else {
                if (rr_std <= 13.212031841278076) {
                    if (rr_median <= 66.25) {
                        votes[38] = 5;
                    } else {
                        if (rr_median <= 97.5) {
                            if (rr_median <= 76.25) {
                                votes[38] = 5;
                            } else {
                                votes[38] = 5;
                            }
                        } else {
                            votes[38] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.7013818323612213) {
                        if (rr_median <= 89.5) {
                            if (num_peaks <= 94.0) {
                                if (rr_std <= 31.615514755249023) {
                                    if (num_valleys <= 52.0) {
                                        votes[38] = 2;
                                    } else {
                                        if (num_peaks <= 85.5) {
                                            votes[38] = 4;
                                        } else {
                                            votes[38] = 2;
                                        }
                                    }
                                } else {
                                    votes[38] = 4;
                                }
                            } else {
                                if (rr_median <= 65.5) {
                                    votes[38] = 2;
                                } else {
                                    if (rr_median <= 80.0) {
                                        if (num_valleys <= 64.0) {
                                            votes[38] = 0;
                                        } else {
                                            votes[38] = 0;
                                        }
                                    } else {
                                        votes[38] = 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 43.910762786865234) {
                                if (diastolic_time <= 0.3290476053953171) {
                                    votes[38] = 4;
                                } else {
                                    votes[38] = 4;
                                }
                            } else {
                                votes[38] = 1;
                            }
                        }
                    } else {
                        if (rr_median <= 79.75) {
                            votes[38] = 1;
                        } else {
                            votes[38] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 8.07284927368164) {
                if (rr_median <= 87.5) {
                    if (rr_std <= 5.509567975997925) {
                        votes[38] = 3;
                    } else {
                        votes[38] = 3;
                    }
                } else {
                    votes[38] = 5;
                }
            } else {
                if (rr_median <= 53.25) {
                    if (diastolic_time <= 0.43709804117679596) {
                        votes[38] = 3;
                    } else {
                        votes[38] = 0;
                    }
                } else {
                    if (num_valleys <= 67.5) {
                        votes[38] = 2;
                    } else {
                        if (diastolic_time <= 0.3249802440404892) {
                            if (num_peaks <= 139.5) {
                                votes[38] = 0;
                            } else {
                                votes[38] = 0;
                            }
                        } else {
                            if (num_peaks <= 152.5) {
                                if (rr_median <= 61.25) {
                                    if (num_valleys <= 76.5) {
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
                        }
                    }
                }
            }
        }
    }
// Decision rules for tree 39
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 85.75) {
            if (rr_std <= 20.162090301513672) {
                if (rr_median <= 68.75) {
                    if (num_peaks <= 124.5) {
                        if (diastolic_time <= 0.050115374848246574) {
                            votes[39] = 4;
                        } else {
                            if (num_peaks <= 119.5) {
                                if (num_peaks <= 95.0) {
                                    votes[39] = 4;
                                } else {
                                    votes[39] = 3;
                                }
                            } else {
                                votes[39] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 9.526742935180664) {
                            if (rr_std <= 4.13929545879364) {
                                votes[39] = 3;
                            } else {
                                votes[39] = 3;
                            }
                        } else {
                            if (rr_std <= 10.791455745697021) {
                                if (rr_std <= 10.051065444946289) {
                                    votes[39] = 3;
                                } else {
                                    votes[39] = 1;
                                }
                            } else {
                                if (num_peaks <= 130.0) {
                                    votes[39] = 3;
                                } else {
                                    if (rr_median <= 55.25) {
                                        votes[39] = 3;
                                    } else {
                                        votes[39] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 15.727570056915283) {
                        if (diastolic_time <= 0.15283332765102386) {
                            if (diastolic_time <= 0.08875897526741028) {
                                if (rr_std <= 6.372097730636597) {
                                    votes[39] = 5;
                                } else {
                                    votes[39] = 3;
                                }
                            } else {
                                votes[39] = 5;
                            }
                        } else {
                            if (rr_median <= 73.0) {
                                votes[39] = 3;
                            } else {
                                votes[39] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.14075803011655807) {
                            votes[39] = 3;
                        } else {
                            votes[39] = 4;
                        }
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (rr_median <= 67.5) {
                        if (rr_std <= 41.56219482421875) {
                            if (diastolic_time <= 0.15850353240966797) {
                                if (num_peaks <= 125.5) {
                                    votes[39] = 4;
                                } else {
                                    votes[39] = 4;
                                }
                            } else {
                                votes[39] = 4;
                            }
                        } else {
                            votes[39] = 4;
                        }
                    } else {
                        if (rr_std <= 26.53919219970703) {
                            if (diastolic_time <= 0.1251739114522934) {
                                votes[39] = 3;
                            } else {
                                votes[39] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.11110234633088112) {
                                if (diastolic_time <= 0.047286514192819595) {
                                    votes[39] = 4;
                                } else {
                                    votes[39] = 1;
                                }
                            } else {
                                votes[39] = 4;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 75.0) {
                        votes[39] = 3;
                    } else {
                        if (diastolic_time <= 0.10779324918985367) {
                            votes[39] = 1;
                        } else {
                            votes[39] = 1;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 62.5) {
                if (rr_median <= 106.75) {
                    if (rr_median <= 88.5) {
                        votes[39] = 1;
                    } else {
                        votes[39] = 5;
                    }
                } else {
                    if (num_peaks <= 86.0) {
                        votes[39] = 3;
                    } else {
                        if (rr_median <= 203.0) {
                            votes[39] = 4;
                        } else {
                            votes[39] = 4;
                        }
                    }
                }
            } else {
                if (rr_median <= 112.25) {
                    if (diastolic_time <= 0.07620153203606606) {
                        if (num_peaks <= 144.5) {
                            if (num_valleys <= 70.5) {
                                votes[39] = 1;
                            } else {
                                votes[39] = 1;
                            }
                        } else {
                            votes[39] = 0;
                        }
                    } else {
                        if (num_peaks <= 124.5) {
                            if (diastolic_time <= 0.1314893364906311) {
                                votes[39] = 1;
                            } else {
                                votes[39] = 5;
                            }
                        } else {
                            if (rr_std <= 26.47059440612793) {
                                votes[39] = 5;
                            } else {
                                votes[39] = 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.09277376160025597) {
                        if (diastolic_time <= 0.08288947120308876) {
                            votes[39] = 1;
                        } else {
                            votes[39] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.13014639914035797) {
                            votes[39] = 5;
                        } else {
                            votes[39] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (rr_median <= 74.25) {
                if (num_peaks <= 90.5) {
                    if (diastolic_time <= 0.5076166689395905) {
                        if (rr_median <= 68.5) {
                            votes[39] = 2;
                        } else {
                            votes[39] = 2;
                        }
                    } else {
                        votes[39] = 5;
                    }
                } else {
                    if (rr_std <= 0.6723157167434692) {
                        if (num_valleys <= 57.5) {
                            votes[39] = 3;
                        } else {
                            if (diastolic_time <= 0.3171170651912689) {
                                votes[39] = 2;
                            } else {
                                votes[39] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 64.5) {
                            votes[39] = 2;
                        } else {
                            if (rr_std <= 9.56583547592163) {
                                votes[39] = 5;
                            } else {
                                if (rr_median <= 67.5) {
                                    votes[39] = 5;
                                } else {
                                    if (rr_std <= 16.010982036590576) {
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
                if (diastolic_time <= 0.8301111161708832) {
                    if (rr_std <= 11.679095268249512) {
                        if (rr_median <= 89.0) {
                            votes[39] = 5;
                        } else {
                            if (rr_median <= 100.5) {
                                votes[39] = 5;
                            } else {
                                votes[39] = 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 92.5) {
                            if (rr_median <= 108.0) {
                                if (rr_median <= 87.5) {
                                    if (diastolic_time <= 0.3336363583803177) {
                                        votes[39] = 2;
                                    } else {
                                        votes[39] = 4;
                                    }
                                } else {
                                    if (num_valleys <= 45.0) {
                                        votes[39] = 4;
                                    } else {
                                        if (rr_std <= 23.95493507385254) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[39] = 1;
                            }
                        } else {
                            if (num_peaks <= 129.5) {
                                votes[39] = 5;
                            } else {
                                votes[39] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 86.0) {
                        votes[39] = 1;
                    } else {
                        votes[39] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 6.039847135543823) {
                if (rr_median <= 71.5) {
                    votes[39] = 5;
                } else {
                    if (num_valleys <= 80.5) {
                        votes[39] = 3;
                    } else {
                        votes[39] = 2;
                    }
                }
            } else {
                if (num_peaks <= 124.5) {
                    if (diastolic_time <= 0.5804615318775177) {
                        votes[39] = 0;
                    } else {
                        votes[39] = 1;
                    }
                } else {
                    if (diastolic_time <= 0.2715664952993393) {
                        votes[39] = 5;
                    } else {
                        if (rr_median <= 55.75) {
                            if (rr_std <= 11.857729434967041) {
                                votes[39] = 3;
                            } else {
                                votes[39] = 0;
                            }
                        } else {
                            if (num_peaks <= 132.5) {
                                votes[39] = 0;
                            } else {
                                if (rr_std <= 75.2062873840332) {
                                    if (rr_std <= 21.92912483215332) {
                                        votes[39] = 0;
                                    } else {
                                        if (rr_std <= 24.151626586914062) {
                                            votes[39] = 0;
                                        } else {
                                            votes[39] = 0;
                                        }
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
// Decision rules for tree 40
    if (diastolic_time <= 0.27718518674373627) {
        if (rr_median <= 82.75) {
            if (rr_std <= 14.666455268859863) {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.2119971588253975) {
                        if (rr_std <= 8.713873386383057) {
                            if (rr_median <= 68.75) {
                                if (rr_median <= 48.25) {
                                    votes[40] = 3;
                                } else {
                                    if (diastolic_time <= 0.07242517918348312) {
                                        votes[40] = 3;
                                    } else {
                                        votes[40] = 3;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.17264023423194885) {
                                    votes[40] = 5;
                                } else {
                                    votes[40] = 3;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.08396660536527634) {
                                votes[40] = 4;
                            } else {
                                if (rr_median <= 54.25) {
                                    votes[40] = 1;
                                } else {
                                    votes[40] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 0.6626740097999573) {
                            if (diastolic_time <= 0.24724848568439484) {
                                votes[40] = 2;
                            } else {
                                votes[40] = 2;
                            }
                        } else {
                            if (diastolic_time <= 0.25399331748485565) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 10.082536220550537) {
                        if (rr_median <= 66.5) {
                            votes[40] = 3;
                        } else {
                            votes[40] = 3;
                        }
                    } else {
                        if (rr_std <= 12.833183288574219) {
                            votes[40] = 1;
                        } else {
                            votes[40] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 130.5) {
                    if (num_peaks <= 114.5) {
                        if (rr_median <= 55.5) {
                            votes[40] = 3;
                        } else {
                            if (rr_median <= 75.5) {
                                if (diastolic_time <= 0.11646666377782822) {
                                    votes[40] = 4;
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                votes[40] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 20.109789848327637) {
                            if (rr_std <= 18.97059154510498) {
                                if (rr_std <= 16.190052032470703) {
                                    votes[40] = 4;
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                votes[40] = 4;
                            }
                        } else {
                            if (num_valleys <= 74.0) {
                                if (num_peaks <= 125.5) {
                                    votes[40] = 4;
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                votes[40] = 4;
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 66.5) {
                        votes[40] = 3;
                    } else {
                        if (diastolic_time <= 0.12100952491164207) {
                            if (rr_std <= 20.68031597137451) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 1;
                            }
                        } else {
                            votes[40] = 5;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.1606702134013176) {
                if (diastolic_time <= 0.03473631665110588) {
                    if (diastolic_time <= 0.03305843472480774) {
                        if (diastolic_time <= 0.011158470064401627) {
                            votes[40] = 0;
                        } else {
                            votes[40] = 1;
                        }
                    } else {
                        votes[40] = 4;
                    }
                } else {
                    if (diastolic_time <= 0.0879238098859787) {
                        if (rr_std <= 0.97945836186409) {
                            if (rr_median <= 98.0) {
                                votes[40] = 5;
                            } else {
                                votes[40] = 1;
                            }
                        } else {
                            if (rr_median <= 134.75) {
                                if (num_peaks <= 116.0) {
                                    votes[40] = 3;
                                } else {
                                    if (rr_std <= 38.044015884399414) {
                                        if (rr_median <= 96.5) {
                                            votes[40] = 1;
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
                        }
                    } else {
                        if (rr_std <= 13.420379161834717) {
                            if (num_peaks <= 119.0) {
                                votes[40] = 1;
                            } else {
                                if (rr_median <= 94.75) {
                                    votes[40] = 3;
                                } else {
                                    votes[40] = 1;
                                }
                            }
                        } else {
                            if (num_valleys <= 72.5) {
                                if (rr_std <= 25.006773948669434) {
                                    votes[40] = 3;
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                if (num_valleys <= 75.5) {
                                    votes[40] = 5;
                                } else {
                                    votes[40] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 14.351483345031738) {
                    if (num_peaks <= 118.0) {
                        votes[40] = 5;
                    } else {
                        if (rr_median <= 93.5) {
                            votes[40] = 5;
                        } else {
                            votes[40] = 1;
                        }
                    }
                } else {
                    if (num_peaks <= 126.5) {
                        if (num_peaks <= 116.5) {
                            if (diastolic_time <= 0.25173237174749374) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 4;
                            }
                        } else {
                            votes[40] = 4;
                        }
                    } else {
                        votes[40] = 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_time <= 0.6350666582584381) {
                if (rr_median <= 88.5) {
                    if (num_peaks <= 90.5) {
                        if (rr_median <= 76.75) {
                            if (diastolic_time <= 0.5076166689395905) {
                                if (num_valleys <= 40.0) {
                                    votes[40] = 2;
                                } else {
                                    votes[40] = 2;
                                }
                            } else {
                                if (num_peaks <= 85.5) {
                                    votes[40] = 2;
                                } else {
                                    votes[40] = 2;
                                }
                            }
                        } else {
                            votes[40] = 2;
                        }
                    } else {
                        if (rr_std <= 0.6533262431621552) {
                            if (num_peaks <= 102.5) {
                                votes[40] = 2;
                            } else {
                                votes[40] = 2;
                            }
                        } else {
                            if (rr_std <= 0.906762957572937) {
                                votes[40] = 5;
                            } else {
                                if (diastolic_time <= 0.5334666669368744) {
                                    if (num_valleys <= 64.5) {
                                        if (rr_std <= 26.40086555480957) {
                                            votes[40] = 2;
                                        } else {
                                            votes[40] = 1;
                                        }
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
                    if (rr_std <= 6.792185962200165) {
                        votes[40] = 5;
                    } else {
                        if (rr_median <= 98.5) {
                            if (rr_median <= 96.75) {
                                votes[40] = 4;
                            } else {
                                votes[40] = 4;
                            }
                        } else {
                            votes[40] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 4.59311056137085) {
                    votes[40] = 5;
                } else {
                    if (diastolic_time <= 0.9359285533428192) {
                        if (num_peaks <= 88.5) {
                            votes[40] = 1;
                        } else {
                            votes[40] = 2;
                        }
                    } else {
                        votes[40] = 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.8351111114025116) {
                if (rr_std <= 8.929394721984863) {
                    if (diastolic_time <= 0.5015203654766083) {
                        if (rr_std <= 3.216941237449646) {
                            votes[40] = 3;
                        } else {
                            votes[40] = 3;
                        }
                    } else {
                        if (num_peaks <= 130.5) {
                            votes[40] = 5;
                        } else {
                            votes[40] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 55.75) {
                        if (rr_std <= 12.079430103302002) {
                            votes[40] = 3;
                        } else {
                            if (rr_median <= 52.25) {
                                votes[40] = 0;
                            } else {
                                votes[40] = 0;
                            }
                        }
                    } else {
                        if (rr_std <= 64.09635353088379) {
                            if (num_peaks <= 124.5) {
                                if (diastolic_time <= 0.4188352972269058) {
                                    votes[40] = 0;
                                } else {
                                    votes[40] = 0;
                                }
                            } else {
                                if (diastolic_time <= 0.32698024809360504) {
                                    votes[40] = 0;
                                } else {
                                    if (diastolic_time <= 0.4826500117778778) {
                                        if (diastolic_time <= 0.4297254830598831) {
                                            votes[40] = 0;
                                        } else {
                                            votes[40] = 0;
                                        }
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
            } else {
                votes[40] = 1;
            }
        }
    }
// Decision rules for tree 41
    if (diastolic_time <= 0.26343898475170135) {
        if (rr_std <= 20.299455642700195) {
            if (rr_median <= 66.25) {
                if (num_peaks <= 132.5) {
                    if (num_peaks <= 127.5) {
                        if (diastolic_time <= 0.05087499879300594) {
                            votes[41] = 4;
                        } else {
                            if (diastolic_time <= 0.15745588392019272) {
                                if (num_valleys <= 60.5) {
                                    votes[41] = 3;
                                } else {
                                    if (rr_median <= 55.0) {
                                        votes[41] = 3;
                                    } else {
                                        votes[41] = 3;
                                    }
                                }
                            } else {
                                if (rr_median <= 54.75) {
                                    votes[41] = 1;
                                } else {
                                    votes[41] = 3;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.10138701274991035) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 5;
                        }
                    }
                } else {
                    if (num_valleys <= 68.5) {
                        votes[41] = 3;
                    } else {
                        if (num_peaks <= 137.0) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 3;
                        }
                    }
                }
            } else {
                if (rr_median <= 104.5) {
                    if (rr_median <= 68.75) {
                        if (rr_std <= 0.6680447459220886) {
                            votes[41] = 2;
                        } else {
                            votes[41] = 4;
                        }
                    } else {
                        if (diastolic_time <= 0.018020618706941605) {
                            votes[41] = 0;
                        } else {
                            if (diastolic_time <= 0.12366250157356262) {
                                if (diastolic_time <= 0.06326871924102306) {
                                    votes[41] = 5;
                                } else {
                                    if (rr_median <= 78.75) {
                                        votes[41] = 5;
                                    } else {
                                        if (rr_std <= 1.8667672276496887) {
                                            votes[41] = 1;
                                        } else {
                                            votes[41] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 15.866289138793945) {
                                    if (diastolic_time <= 0.15018735826015472) {
                                        if (num_valleys <= 75.5) {
                                            votes[41] = 1;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    } else {
                                        if (rr_median <= 88.5) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_time <= 0.16939130425453186) {
                                        votes[41] = 4;
                                    } else {
                                        votes[41] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 0.20786985754966736) {
                        votes[41] = 4;
                    } else {
                        if (rr_std <= 2.395332455635071) {
                            votes[41] = 1;
                        } else {
                            if (diastolic_time <= 0.08556164056062698) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 72.5) {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.22696450352668762) {
                        if (rr_median <= 142.25) {
                            if (diastolic_time <= 0.03555321879684925) {
                                votes[41] = 4;
                            } else {
                                if (diastolic_time <= 0.08196304738521576) {
                                    votes[41] = 1;
                                } else {
                                    if (rr_median <= 76.0) {
                                        if (rr_std <= 29.048532485961914) {
                                            votes[41] = 4;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    } else {
                                        if (rr_median <= 79.5) {
                                            votes[41] = 4;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        votes[41] = 3;
                    }
                } else {
                    if (rr_median <= 75.75) {
                        votes[41] = 3;
                    } else {
                        votes[41] = 0;
                    }
                }
            } else {
                if (diastolic_time <= 0.07455082982778549) {
                    if (rr_median <= 87.5) {
                        votes[41] = 1;
                    } else {
                        if (diastolic_time <= 0.03319427743554115) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.15959183126688004) {
                        if (num_valleys <= 76.5) {
                            if (num_peaks <= 128.5) {
                                votes[41] = 5;
                            } else {
                                votes[41] = 5;
                            }
                        } else {
                            if (rr_std <= 29.306010246276855) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 5;
                            }
                        }
                    } else {
                        votes[41] = 4;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_time <= 0.652848482131958) {
                if (rr_std <= 0.6467249393463135) {
                    if (rr_median <= 69.5) {
                        votes[41] = 2;
                    } else {
                        if (diastolic_time <= 0.5327999889850616) {
                            votes[41] = 2;
                        } else {
                            votes[41] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 11.753142356872559) {
                        if (rr_std <= 0.6923945546150208) {
                            votes[41] = 5;
                        } else {
                            if (rr_median <= 68.75) {
                                votes[41] = 5;
                            } else {
                                if (rr_std <= 0.906762957572937) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 77.25) {
                            if (num_peaks <= 92.5) {
                                if (rr_std <= 27.415703773498535) {
                                    votes[41] = 2;
                                } else {
                                    votes[41] = 2;
                                }
                            } else {
                                if (rr_std <= 18.732505798339844) {
                                    votes[41] = 0;
                                } else {
                                    votes[41] = 0;
                                }
                            }
                        } else {
                            if (rr_median <= 88.5) {
                                if (rr_median <= 81.75) {
                                    votes[41] = 4;
                                } else {
                                    votes[41] = 2;
                                }
                            } else {
                                if (rr_median <= 109.5) {
                                    if (rr_median <= 98.5) {
                                        if (rr_std <= 25.283352851867676) {
                                            votes[41] = 4;
                                        } else {
                                            votes[41] = 4;
                                        }
                                    } else {
                                        votes[41] = 4;
                                    }
                                } else {
                                    votes[41] = 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_valleys <= 57.5) {
                    if (rr_median <= 97.0) {
                        if (rr_std <= 46.335418701171875) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 1;
                        }
                    } else {
                        votes[41] = 1;
                    }
                } else {
                    votes[41] = 5;
                }
            }
        } else {
            if (rr_std <= 7.789663076400757) {
                if (num_valleys <= 79.5) {
                    if (rr_std <= 4.967562675476074) {
                        votes[41] = 3;
                    } else {
                        votes[41] = 3;
                    }
                } else {
                    votes[41] = 5;
                }
            } else {
                if (diastolic_time <= 0.8386666774749756) {
                    if (rr_median <= 54.75) {
                        if (rr_std <= 11.745954990386963) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 0;
                        }
                    } else {
                        if (num_peaks <= 124.5) {
                            if (rr_median <= 81.75) {
                                votes[41] = 0;
                            } else {
                                votes[41] = 5;
                            }
                        } else {
                            if (rr_median <= 131.25) {
                                if (diastolic_time <= 0.2846190482378006) {
                                    votes[41] = 0;
                                } else {
                                    if (rr_median <= 61.25) {
                                        if (num_peaks <= 144.5) {
                                            votes[41] = 0;
                                        } else {
                                            votes[41] = 0;
                                        }
                                    } else {
                                        if (num_valleys <= 71.5) {
                                            votes[41] = 0;
                                        } else {
                                            votes[41] = 0;
                                        }
                                    }
                                }
                            } else {
                                votes[41] = 0;
                            }
                        }
                    }
                } else {
                    votes[41] = 1;
                }
            }
        }
    }
// Decision rules for tree 42
    if (diastolic_time <= 0.27618804574012756) {
        if (rr_std <= 16.939903259277344) {
            if (rr_median <= 98.5) {
                if (rr_median <= 65.5) {
                    if (num_valleys <= 51.5) {
                        votes[42] = 4;
                    } else {
                        if (rr_median <= 53.25) {
                            if (rr_median <= 45.25) {
                                votes[42] = 3;
                            } else {
                                if (num_peaks <= 123.5) {
                                    votes[42] = 3;
                                } else {
                                    votes[42] = 3;
                                }
                            }
                        } else {
                            if (rr_median <= 54.5) {
                                votes[42] = 1;
                            } else {
                                if (num_peaks <= 135.5) {
                                    if (num_peaks <= 125.0) {
                                        votes[42] = 3;
                                    } else {
                                        if (num_peaks <= 130.5) {
                                            votes[42] = 5;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    }
                                } else {
                                    votes[42] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 67.5) {
                        votes[42] = 2;
                    } else {
                        if (diastolic_time <= 0.016946058720350266) {
                            votes[42] = 0;
                        } else {
                            if (num_peaks <= 108.0) {
                                if (rr_median <= 89.75) {
                                    if (rr_std <= 0.7569259405136108) {
                                        votes[42] = 2;
                                    } else {
                                        votes[42] = 1;
                                    }
                                } else {
                                    votes[42] = 5;
                                }
                            } else {
                                if (rr_std <= 0.5975595414638519) {
                                    votes[42] = 5;
                                } else {
                                    if (num_peaks <= 137.0) {
                                        if (num_peaks <= 129.5) {
                                            votes[42] = 5;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    } else {
                                        votes[42] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 0.20786985754966736) {
                    votes[42] = 4;
                } else {
                    if (rr_median <= 143.25) {
                        if (diastolic_time <= 0.057563865557312965) {
                            votes[42] = 1;
                        } else {
                            if (rr_std <= 2.2488457560539246) {
                                if (rr_median <= 99.75) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 1;
                                }
                            } else {
                                votes[42] = 5;
                            }
                        }
                    } else {
                        votes[42] = 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 132.5) {
                if (rr_median <= 95.75) {
                    if (num_valleys <= 80.5) {
                        if (diastolic_time <= 0.22764349728822708) {
                            if (diastolic_time <= 0.04520588181912899) {
                                votes[42] = 4;
                            } else {
                                if (diastolic_time <= 0.13566666841506958) {
                                    if (num_peaks <= 106.5) {
                                        votes[42] = 4;
                                    } else {
                                        if (diastolic_time <= 0.0881747454404831) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 4;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 63.5) {
                                        votes[42] = 4;
                                    } else {
                                        if (diastolic_time <= 0.18245264142751694) {
                                            votes[42] = 4;
                                        } else {
                                            votes[42] = 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[42] = 3;
                        }
                    } else {
                        votes[42] = 3;
                    }
                } else {
                    if (diastolic_time <= 0.062315670773386955) {
                        if (num_valleys <= 67.5) {
                            votes[42] = 1;
                        } else {
                            votes[42] = 1;
                        }
                    } else {
                        if (rr_median <= 115.5) {
                            if (num_peaks <= 111.0) {
                                votes[42] = 4;
                            } else {
                                votes[42] = 5;
                            }
                        } else {
                            if (rr_std <= 45.55488204956055) {
                                votes[42] = 1;
                            } else {
                                votes[42] = 4;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.16714739054441452) {
                    if (rr_median <= 82.5) {
                        if (num_valleys <= 73.5) {
                            votes[42] = 3;
                        } else {
                            if (rr_std <= 26.347627639770508) {
                                votes[42] = 3;
                            } else {
                                votes[42] = 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.04589707590639591) {
                            votes[42] = 0;
                        } else {
                            if (rr_median <= 97.75) {
                                votes[42] = 1;
                            } else {
                                if (num_valleys <= 78.0) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 1;
                                }
                            }
                        }
                    }
                } else {
                    votes[42] = 5;
                }
            }
        }
    } else {
        if (num_peaks <= 127.5) {
            if (diastolic_time <= 0.705381840467453) {
                if (rr_median <= 82.5) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.5116166770458221) {
                            if (rr_std <= 28.37512969970703) {
                                votes[42] = 2;
                            } else {
                                votes[42] = 2;
                            }
                        } else {
                            if (num_peaks <= 84.0) {
                                votes[42] = 5;
                            } else {
                                votes[42] = 2;
                            }
                        }
                    } else {
                        if (rr_std <= 12.300418376922607) {
                            if (rr_std <= 0.45024123787879944) {
                                votes[42] = 2;
                            } else {
                                if (diastolic_time <= 0.4727500081062317) {
                                    votes[42] = 5;
                                } else {
                                    votes[42] = 2;
                                }
                            }
                        } else {
                            if (num_peaks <= 107.5) {
                                votes[42] = 2;
                            } else {
                                if (rr_std <= 16.58848762512207) {
                                    votes[42] = 0;
                                } else {
                                    votes[42] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 99.5) {
                        if (rr_median <= 110.0) {
                            if (rr_std <= 19.725729942321777) {
                                votes[42] = 5;
                            } else {
                                if (diastolic_time <= 0.3556181788444519) {
                                    votes[42] = 4;
                                } else {
                                    votes[42] = 4;
                                }
                            }
                        } else {
                            votes[42] = 1;
                        }
                    } else {
                        if (num_peaks <= 117.5) {
                            votes[42] = 5;
                        } else {
                            votes[42] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[42] = 5;
                } else {
                    if (rr_median <= 79.5) {
                        votes[42] = 1;
                    } else {
                        votes[42] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 6.039847135543823) {
                votes[42] = 3;
            } else {
                if (num_peaks <= 153.5) {
                    if (rr_median <= 52.25) {
                        votes[42] = 0;
                    } else {
                        if (num_valleys <= 70.5) {
                            votes[42] = 0;
                        } else {
                            if (diastolic_time <= 0.3309130519628525) {
                                if (num_peaks <= 139.0) {
                                    votes[42] = 0;
                                } else {
                                    votes[42] = 0;
                                }
                            } else {
                                if (rr_std <= 54.212120056152344) {
                                    if (rr_median <= 81.75) {
                                        votes[42] = 0;
                                    } else {
                                        if (rr_median <= 85.25) {
                                            votes[42] = 0;
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
                } else {
                    votes[42] = 2;
                }
            }
        }
    }
// Decision rules for tree 43
    if (diastolic_time <= 0.2627938240766525) {
        if (rr_median <= 99.25) {
            if (rr_std <= 15.967272281646729) {
                if (rr_median <= 75.5) {
                    if (num_peaks <= 117.5) {
                        if (diastolic_time <= 0.2000153809785843) {
                            if (diastolic_time <= 0.08918168395757675) {
                                votes[43] = 4;
                            } else {
                                if (num_peaks <= 108.5) {
                                    votes[43] = 3;
                                } else {
                                    votes[43] = 3;
                                }
                            }
                        } else {
                            if (num_valleys <= 62.5) {
                                votes[43] = 2;
                            } else {
                                votes[43] = 5;
                            }
                        }
                    } else {
                        if (rr_median <= 45.5) {
                            votes[43] = 1;
                        } else {
                            if (rr_std <= 10.082536220550537) {
                                if (rr_std <= 1.9871660470962524) {
                                    votes[43] = 3;
                                } else {
                                    if (num_peaks <= 132.5) {
                                        votes[43] = 3;
                                    } else {
                                        votes[43] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 10.791455745697021) {
                                    votes[43] = 1;
                                } else {
                                    if (rr_median <= 65.5) {
                                        if (rr_median <= 55.0) {
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
                    if (rr_std <= 8.961504936218262) {
                        if (num_peaks <= 130.5) {
                            if (rr_std <= 0.6687435507774353) {
                                if (diastolic_time <= 0.15412000566720963) {
                                    votes[43] = 3;
                                } else {
                                    votes[43] = 5;
                                }
                            } else {
                                if (num_peaks <= 107.5) {
                                    votes[43] = 5;
                                } else {
                                    votes[43] = 5;
                                }
                            }
                        } else {
                            votes[43] = 3;
                        }
                    } else {
                        if (rr_median <= 86.0) {
                            if (num_valleys <= 71.5) {
                                votes[43] = 3;
                            } else {
                                votes[43] = 5;
                            }
                        } else {
                            votes[43] = 1;
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (diastolic_time <= 0.04353921487927437) {
                        votes[43] = 4;
                    } else {
                        if (diastolic_time <= 0.11547445878386497) {
                            if (rr_std <= 33.01816940307617) {
                                if (diastolic_time <= 0.08349999785423279) {
                                    votes[43] = 3;
                                } else {
                                    if (num_valleys <= 67.0) {
                                        votes[43] = 3;
                                    } else {
                                        votes[43] = 1;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.07572102546691895) {
                                    votes[43] = 1;
                                } else {
                                    votes[43] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 60.25) {
                                votes[43] = 3;
                            } else {
                                if (num_peaks <= 116.5) {
                                    if (rr_median <= 80.5) {
                                        votes[43] = 4;
                                    } else {
                                        votes[43] = 3;
                                    }
                                } else {
                                    if (num_valleys <= 66.0) {
                                        votes[43] = 4;
                                    } else {
                                        votes[43] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 66.5) {
                        votes[43] = 3;
                    } else {
                        if (diastolic_time <= 0.08224999904632568) {
                            votes[43] = 1;
                        } else {
                            if (rr_median <= 67.5) {
                                votes[43] = 1;
                            } else {
                                if (num_peaks <= 140.0) {
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
            if (num_peaks <= 115.5) {
                if (diastolic_time <= 0.09487137570977211) {
                    if (rr_std <= 0.4145781099796295) {
                        votes[43] = 4;
                    } else {
                        if (rr_std <= 28.275991916656494) {
                            votes[43] = 1;
                        } else {
                            votes[43] = 4;
                        }
                    }
                } else {
                    votes[43] = 5;
                }
            } else {
                if (diastolic_time <= 0.013421053066849709) {
                    votes[43] = 3;
                } else {
                    if (num_valleys <= 74.5) {
                        votes[43] = 1;
                    } else {
                        if (rr_std <= 16.09141731262207) {
                            if (rr_std <= 3.355242371559143) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 1;
                            }
                        } else {
                            if (rr_median <= 123.5) {
                                votes[43] = 5;
                            } else {
                                votes[43] = 1;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_time <= 0.6340000033378601) {
                if (rr_median <= 74.25) {
                    if (num_peaks <= 90.5) {
                        if (diastolic_time <= 0.5076166689395905) {
                            if (num_valleys <= 39.5) {
                                votes[43] = 2;
                            } else {
                                votes[43] = 2;
                            }
                        } else {
                            votes[43] = 2;
                        }
                    } else {
                        if (rr_std <= 0.6533262431621552) {
                            if (rr_median <= 69.5) {
                                votes[43] = 3;
                            } else {
                                votes[43] = 2;
                            }
                        } else {
                            if (rr_std <= 14.636199474334717) {
                                if (rr_std <= 9.651066303253174) {
                                    if (diastolic_time <= 0.4210117608308792) {
                                        votes[43] = 5;
                                    } else {
                                        votes[43] = 5;
                                    }
                                } else {
                                    votes[43] = 5;
                                }
                            } else {
                                if (rr_median <= 67.5) {
                                    votes[43] = 3;
                                } else {
                                    votes[43] = 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 11.572530746459961) {
                        if (num_peaks <= 106.5) {
                            votes[43] = 5;
                        } else {
                            votes[43] = 2;
                        }
                    } else {
                        if (num_peaks <= 95.0) {
                            if (rr_median <= 107.5) {
                                if (rr_median <= 87.5) {
                                    if (num_peaks <= 81.5) {
                                        votes[43] = 4;
                                    } else {
                                        if (diastolic_time <= 0.3423217386007309) {
                                            votes[43] = 2;
                                        } else {
                                            votes[43] = 2;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 83.5) {
                                        votes[43] = 4;
                                    } else {
                                        votes[43] = 4;
                                    }
                                }
                            } else {
                                votes[43] = 5;
                            }
                        } else {
                            votes[43] = 0;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    votes[43] = 5;
                } else {
                    if (rr_median <= 79.25) {
                        votes[43] = 1;
                    } else {
                        votes[43] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 5.452739238739014) {
                if (rr_median <= 87.5) {
                    votes[43] = 3;
                } else {
                    votes[43] = 5;
                }
            } else {
                if (rr_median <= 52.25) {
                    votes[43] = 0;
                } else {
                    if (diastolic_time <= 0.3404545485973358) {
                        if (num_peaks <= 139.5) {
                            votes[43] = 0;
                        } else {
                            votes[43] = 2;
                        }
                    } else {
                        if (num_valleys <= 68.5) {
                            votes[43] = 0;
                        } else {
                            if (rr_std <= 8.07284927368164) {
                                votes[43] = 0;
                            } else {
                                if (num_peaks <= 132.5) {
                                    votes[43] = 0;
                                } else {
                                    if (rr_median <= 61.25) {
                                        if (rr_median <= 59.25) {
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
        }
    }
// Decision rules for tree 44
    if (rr_std <= 0.6253483891487122) {
        if (diastolic_time <= 0.212393157184124) {
            if (num_valleys <= 65.0) {
                votes[44] = 1;
            } else {
                if (num_peaks <= 113.5) {
                    votes[44] = 3;
                } else {
                    votes[44] = 5;
                }
            }
        } else {
            if (rr_median <= 74.25) {
                if (rr_std <= 0.3970015197992325) {
                    votes[44] = 2;
                } else {
                    if (num_peaks <= 91.0) {
                        votes[44] = 2;
                    } else {
                        if (rr_std <= 0.5364768803119659) {
                            votes[44] = 2;
                        } else {
                            votes[44] = 2;
                        }
                    }
                }
            } else {
                votes[44] = 5;
            }
        }
    } else {
        if (diastolic_time <= 0.2809973508119583) {
            if (rr_std <= 18.38014793395996) {
                if (rr_median <= 69.5) {
                    if (diastolic_time <= 0.19531868398189545) {
                        if (num_valleys <= 63.5) {
                            votes[44] = 4;
                        } else {
                            if (rr_median <= 46.75) {
                                votes[44] = 3;
                            } else {
                                if (num_valleys <= 67.5) {
                                    votes[44] = 3;
                                } else {
                                    if (rr_std <= 10.076533794403076) {
                                        votes[44] = 3;
                                    } else {
                                        if (rr_std <= 11.307078838348389) {
                                            votes[44] = 1;
                                        } else {
                                            votes[44] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 59.0) {
                            votes[44] = 2;
                        } else {
                            votes[44] = 5;
                        }
                    }
                } else {
                    if (rr_median <= 98.5) {
                        if (diastolic_time <= 0.016946058720350266) {
                            votes[44] = 0;
                        } else {
                            if (rr_std <= 16.779091835021973) {
                                if (rr_std <= 0.692467451095581) {
                                    votes[44] = 1;
                                } else {
                                    if (num_valleys <= 75.5) {
                                        if (rr_std <= 8.961504936218262) {
                                            votes[44] = 5;
                                        } else {
                                            votes[44] = 1;
                                        }
                                    } else {
                                        if (rr_median <= 86.0) {
                                            votes[44] = 5;
                                        } else {
                                            votes[44] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.16062260419130325) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 12.01602840423584) {
                            if (rr_median <= 133.5) {
                                if (num_peaks <= 123.5) {
                                    votes[44] = 1;
                                } else {
                                    if (num_peaks <= 137.5) {
                                        votes[44] = 1;
                                    } else {
                                        votes[44] = 1;
                                    }
                                }
                            } else {
                                votes[44] = 1;
                            }
                        } else {
                            votes[44] = 5;
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (rr_median <= 86.5) {
                        if (num_valleys <= 45.0) {
                            votes[44] = 4;
                        } else {
                            if (diastolic_time <= 0.20697297155857086) {
                                if (diastolic_time <= 0.1454830765724182) {
                                    if (diastolic_time <= 0.0625236164778471) {
                                        votes[44] = 4;
                                    } else {
                                        if (diastolic_time <= 0.0881747454404831) {
                                            votes[44] = 3;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    }
                                } else {
                                    if (num_valleys <= 66.0) {
                                        votes[44] = 4;
                                    } else {
                                        votes[44] = 4;
                                    }
                                }
                            } else {
                                votes[44] = 4;
                            }
                        }
                    } else {
                        if (num_valleys <= 59.5) {
                            if (num_valleys <= 45.5) {
                                votes[44] = 2;
                            } else {
                                if (num_peaks <= 95.0) {
                                    votes[44] = 4;
                                } else {
                                    votes[44] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.0822526328265667) {
                                if (rr_median <= 113.75) {
                                    if (num_valleys <= 68.0) {
                                        votes[44] = 4;
                                    } else {
                                        votes[44] = 1;
                                    }
                                } else {
                                    votes[44] = 1;
                                }
                            } else {
                                if (rr_median <= 100.5) {
                                    votes[44] = 4;
                                } else {
                                    votes[44] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.11978412419557571) {
                        if (rr_median <= 114.75) {
                            if (num_peaks <= 145.5) {
                                if (num_peaks <= 137.5) {
                                    votes[44] = 3;
                                } else {
                                    votes[44] = 1;
                                }
                            } else {
                                votes[44] = 5;
                            }
                        } else {
                            votes[44] = 1;
                        }
                    } else {
                        votes[44] = 5;
                    }
                }
            }
        } else {
            if (num_peaks <= 125.5) {
                if (diastolic_time <= 0.6263999938964844) {
                    if (num_peaks <= 106.5) {
                        if (rr_median <= 89.5) {
                            if (rr_std <= 15.124015808105469) {
                                if (diastolic_time <= 0.43755263090133667) {
                                    votes[44] = 2;
                                } else {
                                    votes[44] = 5;
                                }
                            } else {
                                if (rr_median <= 76.75) {
                                    if (rr_median <= 73.5) {
                                        votes[44] = 2;
                                    } else {
                                        votes[44] = 2;
                                    }
                                } else {
                                    if (rr_std <= 24.829846382141113) {
                                        votes[44] = 4;
                                    } else {
                                        votes[44] = 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 100.0) {
                                if (rr_std <= 21.58934211730957) {
                                    votes[44] = 4;
                                } else {
                                    votes[44] = 4;
                                }
                            } else {
                                votes[44] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 10.876260757446289) {
                            if (num_valleys <= 68.5) {
                                votes[44] = 5;
                            } else {
                                votes[44] = 5;
                            }
                        } else {
                            if (rr_median <= 83.75) {
                                if (rr_median <= 67.5) {
                                    votes[44] = 1;
                                } else {
                                    if (num_peaks <= 119.0) {
                                        votes[44] = 0;
                                    } else {
                                        votes[44] = 0;
                                    }
                                }
                            } else {
                                votes[44] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.479978561401367) {
                        votes[44] = 5;
                    } else {
                        if (rr_median <= 79.25) {
                            votes[44] = 2;
                        } else {
                            votes[44] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 5.452739238739014) {
                    votes[44] = 3;
                } else {
                    if (num_peaks <= 151.5) {
                        if (num_valleys <= 70.5) {
                            votes[44] = 0;
                        } else {
                            if (rr_std <= 7.789663076400757) {
                                votes[44] = 0;
                            } else {
                                if (rr_median <= 65.75) {
                                    if (diastolic_time <= 0.3575238138437271) {
                                        votes[44] = 0;
                                    } else {
                                        if (num_peaks <= 143.5) {
                                            votes[44] = 0;
                                        } else {
                                            votes[44] = 0;
                                        }
                                    }
                                } else {
                                    votes[44] = 0;
                                }
                            }
                        }
                    } else {
                        votes[44] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 45
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 99.25) {
            if (rr_std <= 16.006247520446777) {
                if (rr_median <= 75.5) {
                    if (rr_median <= 45.25) {
                        votes[45] = 1;
                    } else {
                        if (rr_std <= 9.526742935180664) {
                            if (diastolic_time <= 0.16850177198648453) {
                                if (num_peaks <= 118.5) {
                                    if (rr_std <= 0.5918871760368347) {
                                        votes[45] = 3;
                                    } else {
                                        votes[45] = 3;
                                    }
                                } else {
                                    votes[45] = 3;
                                }
                            } else {
                                votes[45] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.04982705041766167) {
                                votes[45] = 4;
                            } else {
                                if (rr_std <= 10.89619255065918) {
                                    if (num_peaks <= 135.0) {
                                        votes[45] = 1;
                                    } else {
                                        votes[45] = 3;
                                    }
                                } else {
                                    if (rr_std <= 14.377581119537354) {
                                        if (rr_std <= 11.87785005569458) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    } else {
                                        votes[45] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.020238805562257767) {
                        votes[45] = 0;
                    } else {
                        if (num_valleys <= 58.5) {
                            votes[45] = 1;
                        } else {
                            if (diastolic_time <= 0.0923495925962925) {
                                votes[45] = 3;
                            } else {
                                if (num_valleys <= 75.5) {
                                    if (num_valleys <= 69.5) {
                                        votes[45] = 5;
                                    } else {
                                        if (rr_std <= 1.7382908463478088) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    }
                                } else {
                                    if (num_peaks <= 126.5) {
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
                if (num_peaks <= 135.5) {
                    if (rr_median <= 87.25) {
                        if (diastolic_time <= 0.06037834659218788) {
                            if (rr_median <= 67.5) {
                                votes[45] = 4;
                            } else {
                                votes[45] = 4;
                            }
                        } else {
                            if (diastolic_time <= 0.11527971178293228) {
                                if (diastolic_time <= 0.09357894584536552) {
                                    votes[45] = 3;
                                } else {
                                    votes[45] = 5;
                                }
                            } else {
                                if (rr_median <= 59.75) {
                                    votes[45] = 3;
                                } else {
                                    if (num_valleys <= 72.5) {
                                        if (diastolic_time <= 0.1736646518111229) {
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
                        if (diastolic_time <= 0.09220728278160095) {
                            if (num_peaks <= 125.0) {
                                votes[45] = 1;
                            } else {
                                votes[45] = 5;
                            }
                        } else {
                            votes[45] = 3;
                        }
                    }
                } else {
                    if (rr_median <= 77.0) {
                        if (num_valleys <= 75.0) {
                            votes[45] = 3;
                        } else {
                            votes[45] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.08592132478952408) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 5;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 59.5) {
                if (rr_std <= 16.382503032684326) {
                    votes[45] = 1;
                } else {
                    if (num_peaks <= 88.5) {
                        votes[45] = 4;
                    } else {
                        votes[45] = 4;
                    }
                }
            } else {
                if (diastolic_time <= 0.08774392679333687) {
                    if (rr_median <= 111.0) {
                        if (rr_median <= 104.5) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 5;
                        }
                    } else {
                        if (rr_median <= 193.25) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 1;
                        }
                    }
                } else {
                    if (rr_std <= 13.420379161834717) {
                        votes[45] = 1;
                    } else {
                        votes[45] = 5;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (rr_std <= 0.6296193599700928) {
                if (num_peaks <= 89.5) {
                    if (rr_median <= 73.5) {
                        votes[45] = 2;
                    } else {
                        votes[45] = 2;
                    }
                } else {
                    if (num_valleys <= 57.5) {
                        votes[45] = 3;
                    } else {
                        if (rr_median <= 71.0) {
                            if (num_peaks <= 106.0) {
                                votes[45] = 2;
                            } else {
                                votes[45] = 2;
                            }
                        } else {
                            votes[45] = 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6157333254814148) {
                    if (rr_std <= 15.560819149017334) {
                        if (rr_std <= 10.170947551727295) {
                            if (rr_median <= 67.0) {
                                votes[45] = 3;
                            } else {
                                if (num_peaks <= 83.0) {
                                    votes[45] = 5;
                                } else {
                                    if (num_valleys <= 67.5) {
                                        votes[45] = 5;
                                    } else {
                                        votes[45] = 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 67.5) {
                                votes[45] = 5;
                            } else {
                                votes[45] = 0;
                            }
                        }
                    } else {
                        if (rr_median <= 76.0) {
                            if (num_valleys <= 61.5) {
                                if (rr_std <= 27.415703773498535) {
                                    if (rr_std <= 20.462517738342285) {
                                        votes[45] = 2;
                                    } else {
                                        votes[45] = 2;
                                    }
                                } else {
                                    votes[45] = 2;
                                }
                            } else {
                                if (rr_median <= 70.0) {
                                    votes[45] = 2;
                                } else {
                                    votes[45] = 0;
                                }
                            }
                        } else {
                            if (rr_std <= 43.795976638793945) {
                                if (diastolic_time <= 0.317440003156662) {
                                    if (rr_std <= 27.151413917541504) {
                                        votes[45] = 2;
                                    } else {
                                        votes[45] = 4;
                                    }
                                } else {
                                    if (num_peaks <= 87.0) {
                                        if (num_valleys <= 52.5) {
                                            votes[45] = 4;
                                        } else {
                                            votes[45] = 4;
                                        }
                                    } else {
                                        votes[45] = 4;
                                    }
                                }
                            } else {
                                votes[45] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.425213813781738) {
                        votes[45] = 5;
                    } else {
                        if (rr_median <= 79.25) {
                            votes[45] = 1;
                        } else {
                            votes[45] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 7.789663076400757) {
                if (diastolic_time <= 0.4906666576862335) {
                    if (num_valleys <= 74.5) {
                        votes[45] = 5;
                    } else {
                        if (rr_std <= 3.239554703235626) {
                            votes[45] = 3;
                        } else {
                            votes[45] = 3;
                        }
                    }
                } else {
                    votes[45] = 5;
                }
            } else {
                if (rr_median <= 110.25) {
                    if (rr_median <= 54.75) {
                        if (num_valleys <= 76.0) {
                            votes[45] = 3;
                        } else {
                            votes[45] = 0;
                        }
                    } else {
                        if (diastolic_time <= 0.7113818228244781) {
                            if (diastolic_time <= 0.2809973508119583) {
                                votes[45] = 0;
                            } else {
                                if (num_peaks <= 132.5) {
                                    if (diastolic_time <= 0.417805552482605) {
                                        votes[45] = 0;
                                    } else {
                                        votes[45] = 0;
                                    }
                                } else {
                                    if (num_peaks <= 142.5) {
                                        votes[45] = 0;
                                    } else {
                                        if (num_peaks <= 144.5) {
                                            votes[45] = 0;
                                        } else {
                                            votes[45] = 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[45] = 0;
                        }
                    }
                } else {
                    votes[45] = 2;
                }
            }
        }
    }
// Decision rules for tree 46
    if (diastolic_time <= 0.26494623720645905) {
        if (rr_median <= 65.5) {
            if (num_peaks <= 131.5) {
                if (diastolic_time <= 0.05753508768975735) {
                    if (rr_std <= 12.258616924285889) {
                        votes[46] = 4;
                    } else {
                        votes[46] = 4;
                    }
                } else {
                    if (num_peaks <= 124.5) {
                        if (num_valleys <= 51.0) {
                            votes[46] = 4;
                        } else {
                            if (num_peaks <= 113.5) {
                                if (rr_std <= 11.739551067352295) {
                                    votes[46] = 3;
                                } else {
                                    votes[46] = 3;
                                }
                            } else {
                                if (rr_std <= 7.264467716217041) {
                                    votes[46] = 1;
                                } else {
                                    votes[46] = 3;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 14.187021732330322) {
                            votes[46] = 1;
                        } else {
                            votes[46] = 3;
                        }
                    }
                }
            } else {
                if (rr_std <= 26.75359535217285) {
                    if (num_peaks <= 146.5) {
                        if (num_peaks <= 134.5) {
                            votes[46] = 3;
                        } else {
                            votes[46] = 3;
                        }
                    } else {
                        votes[46] = 3;
                    }
                } else {
                    votes[46] = 1;
                }
            }
        } else {
            if (rr_median <= 102.5) {
                if (rr_std <= 14.367665767669678) {
                    if (rr_median <= 68.25) {
                        votes[46] = 2;
                    } else {
                        if (diastolic_time <= 0.01662295125424862) {
                            votes[46] = 0;
                        } else {
                            if (rr_median <= 76.25) {
                                if (rr_median <= 70.5) {
                                    votes[46] = 5;
                                } else {
                                    if (rr_std <= 5.8864099979400635) {
                                        votes[46] = 3;
                                    } else {
                                        votes[46] = 5;
                                    }
                                }
                            } else {
                                if (rr_median <= 85.25) {
                                    votes[46] = 5;
                                } else {
                                    if (diastolic_time <= 0.16641546040773392) {
                                        if (rr_median <= 96.25) {
                                            votes[46] = 1;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    } else {
                                        votes[46] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 131.5) {
                        if (rr_median <= 75.75) {
                            if (rr_std <= 19.35448932647705) {
                                votes[46] = 4;
                            } else {
                                if (num_valleys <= 72.5) {
                                    if (num_valleys <= 61.5) {
                                        votes[46] = 4;
                                    } else {
                                        votes[46] = 4;
                                    }
                                } else {
                                    votes[46] = 4;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.14878641068935394) {
                                if (rr_median <= 80.5) {
                                    votes[46] = 5;
                                } else {
                                    if (num_peaks <= 113.5) {
                                        votes[46] = 4;
                                    } else {
                                        if (diastolic_time <= 0.08491476625204086) {
                                            votes[46] = 1;
                                        } else {
                                            votes[46] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 116.5) {
                                    votes[46] = 3;
                                } else {
                                    if (rr_std <= 20.640552520751953) {
                                        votes[46] = 4;
                                    } else {
                                        votes[46] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.08224999904632568) {
                            if (diastolic_time <= 0.020783504471182823) {
                                votes[46] = 0;
                            } else {
                                votes[46] = 1;
                            }
                        } else {
                            if (rr_median <= 83.0) {
                                if (diastolic_time <= 0.13371946662664413) {
                                    votes[46] = 5;
                                } else {
                                    votes[46] = 3;
                                }
                            } else {
                                votes[46] = 5;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 115.5) {
                    if (rr_std <= 1.2437342405319214) {
                        votes[46] = 4;
                    } else {
                        if (rr_std <= 16.62067461013794) {
                            votes[46] = 1;
                        } else {
                            if (rr_std <= 74.5959587097168) {
                                votes[46] = 3;
                            } else {
                                votes[46] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.027160183526575565) {
                        votes[46] = 3;
                    } else {
                        if (diastolic_time <= 0.060149287804961205) {
                            votes[46] = 1;
                        } else {
                            if (rr_std <= 16.60909938812256) {
                                if (rr_median <= 131.5) {
                                    votes[46] = 1;
                                } else {
                                    votes[46] = 1;
                                }
                            } else {
                                votes[46] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (diastolic_time <= 0.6350666582584381) {
                if (rr_median <= 87.5) {
                    if (num_peaks <= 90.5) {
                        if (rr_median <= 73.5) {
                            if (diastolic_time <= 0.572615385055542) {
                                if (num_valleys <= 39.5) {
                                    votes[46] = 2;
                                } else {
                                    if (diastolic_time <= 0.5073499977588654) {
                                        votes[46] = 2;
                                    } else {
                                        votes[46] = 2;
                                    }
                                }
                            } else {
                                votes[46] = 2;
                            }
                        } else {
                            if (rr_std <= 16.438838005065918) {
                                votes[46] = 5;
                            } else {
                                if (num_valleys <= 48.5) {
                                    votes[46] = 2;
                                } else {
                                    votes[46] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 0.6633186936378479) {
                            if (num_valleys <= 57.5) {
                                votes[46] = 3;
                            } else {
                                if (num_peaks <= 107.5) {
                                    votes[46] = 2;
                                } else {
                                    votes[46] = 2;
                                }
                            }
                        } else {
                            if (rr_std <= 20.955665588378906) {
                                if (num_peaks <= 107.0) {
                                    votes[46] = 5;
                                } else {
                                    if (rr_std <= 7.722705125808716) {
                                        votes[46] = 5;
                                    } else {
                                        votes[46] = 0;
                                    }
                                }
                            } else {
                                votes[46] = 2;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 95.0) {
                        if (num_peaks <= 79.0) {
                            votes[46] = 4;
                        } else {
                            votes[46] = 4;
                        }
                    } else {
                        votes[46] = 5;
                    }
                }
            } else {
                if (rr_std <= 12.08653736114502) {
                    votes[46] = 1;
                } else {
                    if (rr_std <= 41.50863838195801) {
                        if (num_peaks <= 89.5) {
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
            if (num_peaks <= 108.5) {
                votes[46] = 1;
            } else {
                if (rr_std <= 7.789663076400757) {
                    if (diastolic_time <= 0.46133333444595337) {
                        votes[46] = 3;
                    } else {
                        votes[46] = 5;
                    }
                } else {
                    if (rr_median <= 53.5) {
                        votes[46] = 3;
                    } else {
                        if (diastolic_time <= 0.3283478319644928) {
                            if (num_peaks <= 139.0) {
                                votes[46] = 0;
                            } else {
                                votes[46] = 2;
                            }
                        } else {
                            if (num_peaks <= 124.5) {
                                votes[46] = 0;
                            } else {
                                if (num_valleys <= 74.5) {
                                    if (num_valleys <= 73.5) {
                                        if (rr_std <= 27.813172340393066) {
                                            votes[46] = 0;
                                        } else {
                                            votes[46] = 0;
                                        }
                                    } else {
                                        votes[46] = 3;
                                    }
                                } else {
                                    if (rr_median <= 55.75) {
                                        votes[46] = 0;
                                    } else {
                                        if (diastolic_time <= 0.7204000055789948) {
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
    }
// Decision rules for tree 47
    if (diastolic_time <= 0.22240635007619858) {
        if (rr_median <= 75.5) {
            if (rr_std <= 15.860590934753418) {
                if (num_peaks <= 87.0) {
                    votes[47] = 4;
                } else {
                    if (num_peaks <= 132.5) {
                        if (rr_median <= 47.75) {
                            votes[47] = 4;
                        } else {
                            if (rr_median <= 53.25) {
                                if (rr_std <= 9.059996604919434) {
                                    votes[47] = 3;
                                } else {
                                    votes[47] = 3;
                                }
                            } else {
                                if (diastolic_time <= 0.07242517918348312) {
                                    votes[47] = 1;
                                } else {
                                    if (rr_median <= 56.5) {
                                        votes[47] = 1;
                                    } else {
                                        if (rr_std <= 1.256184458732605) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 146.5) {
                            if (rr_median <= 62.5) {
                                votes[47] = 3;
                            } else {
                                votes[47] = 3;
                            }
                        } else {
                            votes[47] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 133.5) {
                    if (num_peaks <= 104.0) {
                        if (rr_median <= 58.5) {
                            votes[47] = 3;
                        } else {
                            votes[47] = 4;
                        }
                    } else {
                        if (num_valleys <= 72.5) {
                            if (diastolic_time <= 0.16895651817321777) {
                                if (rr_median <= 72.0) {
                                    votes[47] = 4;
                                } else {
                                    votes[47] = 4;
                                }
                            } else {
                                votes[47] = 2;
                            }
                        } else {
                            if (rr_std <= 23.196980476379395) {
                                votes[47] = 4;
                            } else {
                                votes[47] = 5;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 138.5) {
                        votes[47] = 3;
                    } else {
                        votes[47] = 3;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.013421053066849709) {
                votes[47] = 0;
            } else {
                if (rr_median <= 99.25) {
                    if (rr_std <= 15.716776847839355) {
                        if (diastolic_time <= 0.12970967590808868) {
                            if (diastolic_time <= 0.10020945966243744) {
                                if (num_peaks <= 118.5) {
                                    votes[47] = 1;
                                } else {
                                    votes[47] = 5;
                                }
                            } else {
                                votes[47] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.1595982387661934) {
                                if (num_valleys <= 75.5) {
                                    votes[47] = 1;
                                } else {
                                    votes[47] = 5;
                                }
                            } else {
                                votes[47] = 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.09909114241600037) {
                            if (diastolic_time <= 0.07656653225421906) {
                                if (num_valleys <= 67.5) {
                                    votes[47] = 1;
                                } else {
                                    votes[47] = 1;
                                }
                            } else {
                                votes[47] = 5;
                            }
                        } else {
                            if (rr_std <= 33.12907028198242) {
                                if (diastolic_time <= 0.13509347289800644) {
                                    votes[47] = 4;
                                } else {
                                    if (num_valleys <= 71.5) {
                                        votes[47] = 4;
                                    } else {
                                        votes[47] = 4;
                                    }
                                }
                            } else {
                                if (rr_median <= 85.5) {
                                    votes[47] = 4;
                                } else {
                                    votes[47] = 5;
                                }
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 64.5) {
                        if (diastolic_time <= 0.0355516392737627) {
                            votes[47] = 4;
                        } else {
                            if (num_peaks <= 93.5) {
                                votes[47] = 5;
                            } else {
                                votes[47] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 72.99546813964844) {
                            if (num_valleys <= 82.5) {
                                if (diastolic_time <= 0.08714224398136139) {
                                    if (rr_std <= 18.396760940551758) {
                                        if (diastolic_time <= 0.06653829663991928) {
                                            votes[47] = 1;
                                        } else {
                                            votes[47] = 1;
                                        }
                                    } else {
                                        votes[47] = 1;
                                    }
                                } else {
                                    if (diastolic_time <= 0.11966153979301453) {
                                        votes[47] = 5;
                                    } else {
                                        votes[47] = 1;
                                    }
                                }
                            } else {
                                votes[47] = 1;
                            }
                        } else {
                            votes[47] = 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 74.25) {
                if (num_valleys <= 61.5) {
                    if (diastolic_time <= 0.5396190583705902) {
                        if (rr_median <= 66.75) {
                            if (rr_std <= 13.802763938903809) {
                                votes[47] = 3;
                            } else {
                                votes[47] = 2;
                            }
                        } else {
                            if (num_peaks <= 105.5) {
                                if (diastolic_time <= 0.5073499977588654) {
                                    votes[47] = 2;
                                } else {
                                    votes[47] = 2;
                                }
                            } else {
                                votes[47] = 2;
                            }
                        }
                    } else {
                        if (rr_median <= 67.75) {
                            votes[47] = 5;
                        } else {
                            votes[47] = 2;
                        }
                    }
                } else {
                    if (rr_median <= 63.5) {
                        votes[47] = 3;
                    } else {
                        if (num_peaks <= 112.5) {
                            votes[47] = 5;
                        } else {
                            votes[47] = 2;
                        }
                    }
                }
            } else {
                if (rr_std <= 10.894550800323486) {
                    if (rr_std <= 0.6280325353145599) {
                        votes[47] = 2;
                    } else {
                        if (rr_std <= 1.7731034755706787) {
                            votes[47] = 5;
                        } else {
                            votes[47] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.6350666582584381) {
                        if (rr_std <= 44.53691482543945) {
                            if (rr_median <= 88.5) {
                                if (rr_median <= 79.25) {
                                    if (num_peaks <= 88.5) {
                                        votes[47] = 4;
                                    } else {
                                        votes[47] = 5;
                                    }
                                } else {
                                    if (num_valleys <= 46.5) {
                                        votes[47] = 2;
                                    } else {
                                        votes[47] = 2;
                                    }
                                }
                            } else {
                                if (rr_median <= 96.75) {
                                    votes[47] = 4;
                                } else {
                                    votes[47] = 4;
                                }
                            }
                        } else {
                            votes[47] = 5;
                        }
                    } else {
                        if (diastolic_time <= 0.7484444677829742) {
                            votes[47] = 1;
                        } else {
                            votes[47] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 7.493313550949097) {
                if (rr_median <= 71.5) {
                    votes[47] = 5;
                } else {
                    if (rr_median <= 77.5) {
                        votes[47] = 3;
                    } else {
                        votes[47] = 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.8466666638851166) {
                    if (rr_median <= 53.5) {
                        if (diastolic_time <= 0.4020952433347702) {
                            votes[47] = 3;
                        } else {
                            votes[47] = 0;
                        }
                    } else {
                        if (num_peaks <= 124.5) {
                            if (rr_median <= 80.0) {
                                votes[47] = 0;
                            } else {
                                votes[47] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.31309881806373596) {
                                votes[47] = 0;
                            } else {
                                if (rr_median <= 55.75) {
                                    votes[47] = 0;
                                } else {
                                    if (num_peaks <= 132.5) {
                                        votes[47] = 0;
                                    } else {
                                        votes[47] = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    votes[47] = 1;
                }
            }
        }
    }
// Decision rules for tree 48
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 85.75) {
            if (rr_std <= 14.17724084854126) {
                if (rr_median <= 75.5) {
                    if (rr_median <= 45.5) {
                        votes[48] = 1;
                    } else {
                        if (diastolic_time <= 0.06067962385714054) {
                            if (rr_median <= 60.0) {
                                votes[48] = 3;
                            } else {
                                votes[48] = 5;
                            }
                        } else {
                            if (rr_std <= 9.50971794128418) {
                                if (rr_std <= 0.6320604085922241) {
                                    votes[48] = 3;
                                } else {
                                    votes[48] = 3;
                                }
                            } else {
                                if (num_peaks <= 132.5) {
                                    if (rr_std <= 10.72160291671753) {
                                        votes[48] = 1;
                                    } else {
                                        votes[48] = 3;
                                    }
                                } else {
                                    if (num_peaks <= 144.0) {
                                        votes[48] = 3;
                                    } else {
                                        votes[48] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.13691489398479462) {
                        votes[48] = 5;
                    } else {
                        votes[48] = 5;
                    }
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (diastolic_time <= 0.04520588181912899) {
                        votes[48] = 4;
                    } else {
                        if (diastolic_time <= 0.13974253088235855) {
                            if (num_valleys <= 72.5) {
                                if (num_valleys <= 64.0) {
                                    if (rr_median <= 70.75) {
                                        votes[48] = 4;
                                    } else {
                                        votes[48] = 5;
                                    }
                                } else {
                                    if (rr_std <= 19.85218334197998) {
                                        votes[48] = 3;
                                    } else {
                                        if (diastolic_time <= 0.10556524991989136) {
                                            votes[48] = 4;
                                        } else {
                                            votes[48] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 67.0) {
                                    votes[48] = 3;
                                } else {
                                    votes[48] = 5;
                                }
                            }
                        } else {
                            if (rr_median <= 83.25) {
                                if (diastolic_time <= 0.17886868119239807) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 4;
                                }
                            } else {
                                votes[48] = 4;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 25.422072410583496) {
                        if (rr_median <= 68.5) {
                            votes[48] = 3;
                        } else {
                            votes[48] = 3;
                        }
                    } else {
                        if (diastolic_time <= 0.09230434894561768) {
                            votes[48] = 3;
                        } else {
                            votes[48] = 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.012326284311711788) {
                if (rr_median <= 96.75) {
                    votes[48] = 0;
                } else {
                    votes[48] = 0;
                }
            } else {
                if (num_peaks <= 99.0) {
                    if (rr_std <= 37.85541915893555) {
                        if (rr_std <= 6.241060018539429) {
                            votes[48] = 4;
                        } else {
                            votes[48] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.08949853479862213) {
                            votes[48] = 4;
                        } else {
                            votes[48] = 4;
                        }
                    }
                } else {
                    if (rr_median <= 107.25) {
                        if (rr_std <= 39.516366958618164) {
                            if (diastolic_time <= 0.16641546040773392) {
                                if (diastolic_time <= 0.06863817945122719) {
                                    votes[48] = 5;
                                } else {
                                    if (num_valleys <= 67.5) {
                                        votes[48] = 1;
                                    } else {
                                        if (diastolic_time <= 0.08808713406324387) {
                                            votes[48] = 1;
                                        } else {
                                            votes[48] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 5.438465774059296) {
                                    votes[48] = 5;
                                } else {
                                    votes[48] = 4;
                                }
                            }
                        } else {
                            votes[48] = 1;
                        }
                    } else {
                        if (num_valleys <= 62.5) {
                            votes[48] = 4;
                        } else {
                            if (num_valleys <= 81.5) {
                                if (num_peaks <= 144.5) {
                                    votes[48] = 1;
                                } else {
                                    votes[48] = 1;
                                }
                            } else {
                                votes[48] = 1;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 74.25) {
                if (num_peaks <= 104.0) {
                    if (rr_std <= 28.313719749450684) {
                        if (rr_median <= 69.5) {
                            if (diastolic_time <= 0.40012121200561523) {
                                if (rr_median <= 64.0) {
                                    votes[48] = 2;
                                } else {
                                    if (diastolic_time <= 0.2758871763944626) {
                                        votes[48] = 2;
                                    } else {
                                        votes[48] = 2;
                                    }
                                }
                            } else {
                                votes[48] = 5;
                            }
                        } else {
                            if (diastolic_time <= 0.5526153743267059) {
                                votes[48] = 2;
                            } else {
                                votes[48] = 2;
                            }
                        }
                    } else {
                        votes[48] = 1;
                    }
                } else {
                    if (num_peaks <= 119.0) {
                        if (rr_median <= 67.5) {
                            if (diastolic_time <= 0.29731428623199463) {
                                votes[48] = 2;
                            } else {
                                votes[48] = 3;
                            }
                        } else {
                            if (rr_std <= 0.6684935390949249) {
                                votes[48] = 2;
                            } else {
                                votes[48] = 0;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.35271769762039185) {
                            votes[48] = 5;
                        } else {
                            votes[48] = 1;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6350666582584381) {
                    if (rr_std <= 13.485650062561035) {
                        if (num_peaks <= 103.5) {
                            votes[48] = 5;
                        } else {
                            votes[48] = 5;
                        }
                    } else {
                        if (num_peaks <= 92.5) {
                            if (num_peaks <= 74.5) {
                                votes[48] = 5;
                            } else {
                                if (rr_median <= 88.5) {
                                    if (rr_std <= 28.034547805786133) {
                                        votes[48] = 2;
                                    } else {
                                        votes[48] = 4;
                                    }
                                } else {
                                    if (diastolic_time <= 0.3929292857646942) {
                                        votes[48] = 4;
                                    } else {
                                        votes[48] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[48] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 7.973716974258423) {
                        votes[48] = 5;
                    } else {
                        if (num_valleys <= 48.5) {
                            votes[48] = 1;
                        } else {
                            if (diastolic_time <= 0.9591428339481354) {
                                votes[48] = 2;
                            } else {
                                votes[48] = 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 6.724537372589111) {
                if (num_peaks <= 129.5) {
                    if (rr_median <= 72.5) {
                        votes[48] = 5;
                    } else {
                        votes[48] = 5;
                    }
                } else {
                    votes[48] = 3;
                }
            } else {
                if (num_peaks <= 124.5) {
                    if (rr_median <= 80.25) {
                        if (num_peaks <= 115.0) {
                            votes[48] = 0;
                        } else {
                            votes[48] = 0;
                        }
                    } else {
                        if (num_peaks <= 108.5) {
                            votes[48] = 1;
                        } else {
                            votes[48] = 5;
                        }
                    }
                } else {
                    if (num_peaks <= 152.5) {
                        if (diastolic_time <= 0.2809973508119583) {
                            votes[48] = 0;
                        } else {
                            if (rr_median <= 54.75) {
                                if (diastolic_time <= 0.4582500010728836) {
                                    votes[48] = 0;
                                } else {
                                    votes[48] = 0;
                                }
                            } else {
                                if (diastolic_time <= 0.6944727301597595) {
                                    if (rr_std <= 54.212120056152344) {
                                        if (num_valleys <= 75.5) {
                                            votes[48] = 0;
                                        } else {
                                            votes[48] = 0;
                                        }
                                    } else {
                                        votes[48] = 0;
                                    }
                                } else {
                                    votes[48] = 0;
                                }
                            }
                        }
                    } else {
                        votes[48] = 2;
                    }
                }
            }
        }
    }
// Decision rules for tree 49
    if (diastolic_time <= 0.20981507748365402) {
        if (rr_median <= 75.5) {
            if (rr_std <= 15.860590934753418) {
                if (num_valleys <= 57.0) {
                    votes[49] = 4;
                } else {
                    if (rr_median <= 68.75) {
                        if (num_peaks <= 146.5) {
                            if (rr_median <= 46.5) {
                                votes[49] = 1;
                            } else {
                                if (num_peaks <= 130.0) {
                                    if (diastolic_time <= 0.0741954892873764) {
                                        if (diastolic_time <= 0.05568786524236202) {
                                            votes[49] = 4;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    } else {
                                        if (num_peaks <= 123.0) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    }
                                } else {
                                    votes[49] = 3;
                                }
                            }
                        } else {
                            votes[49] = 1;
                        }
                    } else {
                        if (diastolic_time <= 0.15604308247566223) {
                            votes[49] = 5;
                        } else {
                            votes[49] = 3;
                        }
                    }
                }
            } else {
                if (num_peaks <= 132.5) {
                    if (rr_std <= 54.40053176879883) {
                        if (num_valleys <= 72.5) {
                            if (rr_std <= 17.88373851776123) {
                                votes[49] = 4;
                            } else {
                                if (num_peaks <= 122.5) {
                                    votes[49] = 4;
                                } else {
                                    if (rr_std <= 23.701791763305664) {
                                        votes[49] = 4;
                                    } else {
                                        votes[49] = 4;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 75.5) {
                                votes[49] = 4;
                            } else {
                                votes[49] = 4;
                            }
                        }
                    } else {
                        votes[49] = 3;
                    }
                } else {
                    if (num_valleys <= 74.0) {
                        votes[49] = 3;
                    } else {
                        votes[49] = 1;
                    }
                }
            }
        } else {
            if (rr_median <= 98.5) {
                if (diastolic_time <= 0.1368035078048706) {
                    if (diastolic_time <= 0.03367033787071705) {
                        votes[49] = 4;
                    } else {
                        if (rr_median <= 82.0) {
                            if (diastolic_time <= 0.10083608329296112) {
                                votes[49] = 5;
                            } else {
                                votes[49] = 3;
                            }
                        } else {
                            if (diastolic_time <= 0.07518888637423515) {
                                if (rr_std <= 12.439560234546661) {
                                    votes[49] = 5;
                                } else {
                                    votes[49] = 1;
                                }
                            } else {
                                if (rr_std <= 26.47059440612793) {
                                    if (rr_std <= 13.86924934387207) {
                                        if (diastolic_time <= 0.11188732460141182) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 1;
                                        }
                                    } else {
                                        votes[49] = 3;
                                    }
                                } else {
                                    votes[49] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 16.262849807739258) {
                        if (num_peaks <= 120.0) {
                            votes[49] = 5;
                        } else {
                            if (diastolic_time <= 0.16838771104812622) {
                                votes[49] = 3;
                            } else {
                                votes[49] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 33.41944122314453) {
                            if (num_valleys <= 68.5) {
                                votes[49] = 4;
                            } else {
                                votes[49] = 4;
                            }
                        } else {
                            votes[49] = 5;
                        }
                    }
                }
            } else {
                if (num_valleys <= 62.5) {
                    if (num_peaks <= 86.5) {
                        votes[49] = 1;
                    } else {
                        if (diastolic_time <= 0.039690328761935234) {
                            votes[49] = 4;
                        } else {
                            if (diastolic_time <= 0.0708560198545456) {
                                votes[49] = 1;
                            } else {
                                votes[49] = 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.027160183526575565) {
                        votes[49] = 3;
                    } else {
                        if (diastolic_time <= 0.08774392679333687) {
                            if (rr_median <= 112.75) {
                                if (rr_median <= 104.5) {
                                    votes[49] = 1;
                                } else {
                                    votes[49] = 1;
                                }
                            } else {
                                if (diastolic_time <= 0.05948329530656338) {
                                    votes[49] = 1;
                                } else {
                                    if (rr_median <= 129.75) {
                                        votes[49] = 1;
                                    } else {
                                        votes[49] = 1;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 17.601766109466553) {
                                votes[49] = 1;
                            } else {
                                votes[49] = 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (rr_median <= 75.25) {
                if (num_peaks <= 104.0) {
                    if (rr_median <= 64.0) {
                        votes[49] = 2;
                    } else {
                        if (diastolic_time <= 0.5302857160568237) {
                            if (rr_std <= 27.415703773498535) {
                                if (rr_std <= 7.463724762201309) {
                                    if (rr_median <= 73.5) {
                                        votes[49] = 2;
                                    } else {
                                        votes[49] = 2;
                                    }
                                } else {
                                    if (num_valleys <= 47.5) {
                                        votes[49] = 2;
                                    } else {
                                        votes[49] = 2;
                                    }
                                }
                            } else {
                                votes[49] = 2;
                            }
                        } else {
                            votes[49] = 2;
                        }
                    }
                } else {
                    if (rr_std <= 8.392127990722656) {
                        if (rr_std <= 0.6533262431621552) {
                            if (diastolic_time <= 0.3394387364387512) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 2;
                            }
                        } else {
                            votes[49] = 5;
                        }
                    } else {
                        if (rr_std <= 17.181248664855957) {
                            votes[49] = 0;
                        } else {
                            if (rr_median <= 65.25) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6426666676998138) {
                    if (rr_std <= 20.463601112365723) {
                        if (num_valleys <= 51.5) {
                            votes[49] = 5;
                        } else {
                            if (num_valleys <= 64.5) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 5;
                            }
                        }
                    } else {
                        if (rr_std <= 48.99055290222168) {
                            if (rr_std <= 25.343911170959473) {
                                votes[49] = 4;
                            } else {
                                if (rr_std <= 33.892330169677734) {
                                    if (num_peaks <= 82.0) {
                                        votes[49] = 4;
                                    } else {
                                        if (diastolic_time <= 0.32483333349227905) {
                                            votes[49] = 2;
                                        } else {
                                            votes[49] = 4;
                                        }
                                    }
                                } else {
                                    votes[49] = 4;
                                }
                            }
                        } else {
                            votes[49] = 5;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.7990666627883911) {
                        votes[49] = 1;
                    } else {
                        votes[49] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 8.86708927154541) {
                if (num_valleys <= 74.5) {
                    if (diastolic_time <= 0.2476371005177498) {
                        votes[49] = 5;
                    } else {
                        votes[49] = 5;
                    }
                } else {
                    if (rr_std <= 5.16317892074585) {
                        votes[49] = 3;
                    } else {
                        votes[49] = 0;
                    }
                }
            } else {
                if (diastolic_time <= 0.8431110978126526) {
                    if (diastolic_time <= 0.26275861263275146) {
                        votes[49] = 5;
                    } else {
                        if (rr_median <= 53.25) {
                            votes[49] = 0;
                        } else {
                            if (num_peaks <= 124.5) {
                                if (rr_median <= 76.0) {
                                    votes[49] = 0;
                                } else {
                                    votes[49] = 0;
                                }
                            } else {
                                if (num_peaks <= 142.5) {
                                    votes[49] = 0;
                                } else {
                                    if (num_valleys <= 77.5) {
                                        if (diastolic_time <= 0.40850526094436646) {
                                            votes[49] = 0;
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
                    votes[49] = 1;
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
