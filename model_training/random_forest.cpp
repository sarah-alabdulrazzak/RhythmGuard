#include <vector>
using namespace std;

int random_forest_predict(vector<float>& features) {
    int votes[50] = {0};
    votes[0] = (
// Decision rules for tree 0
    if (pp_interval <= 0.2941666543483734) {
        if (rr_median <= 61.75) {
            if (diff_median <= 0.009135794825851917) {
                if (systolic_area <= 5.348297595977783) {
                    return 4;
                } else {
                    return 3;
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (dist_std <= 0.05795348063111305) {
                        return 5;
                    } else {
                        if (fwhm <= 5.588000059127808) {
                            return 3;
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (diff_median <= 0.01811191439628601) {
                        return 3;
                    } else{
                        return 3;
                    }
                }
            }
        } else {
            if (fwhm <= 6.419999837875366) {
                if (num_peaks <= 138.5) {
                    if (systolic_area <= 75.09727096557617) {
                        if (fwhm <= 0.42400000989437103) {
                            if (diff_median <= 0.010879465844482183) {
                                if (pp_interval <= 0.00800000037997961) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (dist_median <= -0.000336319615598768) {
                                if (diastolic_amp <= -2.249913811683655) {
                                    return 4;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (systolic_area <= 30.33690357208252) {
                                    return 5;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (rr_median <= 94.25) {
                        return 0;
                    } else {
                        return 0;
                    }
                }
            } else {
                if (dist_std <= 0.11637548729777336) {
                    if (ss_median <= 101.0) {
                        if (diastolic_area <= -57.72442436218262) {
                            return 5;
                        } else {
                            if (diastolic_amp <= -2.009765326976776) {
                                if (diastolic_amp <= -2.8259133100509644) {
                                    return 4;
                                } else {
                                    if (systolic_amp <= 4.059525966644287) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            } else {
                                if (diff_median <= 0.010986130218952894) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            }
                        }
                    } else {
                        return 4;
                    }
                } else {
                    return 5;
                }
            }
        }
    } else {
        if (rr_std <= 0.6467249393463135) {
            if (diastolic_time <= 0.2111777737736702) {
                if (systolic_time <= 0.509109228849411) {
                    return 3;
                } else {
                    return 5;
                }
            } else {
                if (ss_median <= 66.5) {
                    return 3;
                } else {
                    if (ss_median <= 73.75) {
                        if (diastolic_time <= 0.30092307925224304) {
                            if (diastolic_amp <= -2.4232016801834106) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        if (dist_median <= -0.0014829406281933188) {
                            return 2;
                        } else {
                            return 5;
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 81.25) {
                if (dist_std <= 0.05776873417198658) {
                    if (diastolic_area <= -28.164544105529785) {
                        if (rr_median <= 76.75) {
                            if (systolic_time <= 0.680400013923645) {
                                if (pp_interval <= 0.3625619113445282) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if (diastolic_area <= -79.11644744873047) {
                                return 1;
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (num_valleys <= 62.0) {
                            if (systolic_amp <= 4.487900495529175) {
                                return 5;
                            } else {
                                return 2;
                            }
                        } else {
                            if (diastolic_time <= 0.2513815388083458) {
                                return 5;
                            } else {
                                if (rr_median <= 55.75) {
                                    if (systolic_amp <= 4.171128034591675) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if (pp_interval <= 0.48250000178813934) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_valleys <= 47.0) {
                        if (ss_std <= 18.02114486694336) {
                            if (num_valleys <= 40.0) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (rr_median <= 111.75) {
                            if (systolic_area <= 22.300650596618652) {
                                if (diastolic_time <= 0.182676762342453) {
                                    if (dist_median <= -8.321217319462448e-05) {
                                        if (ss_std <= 17.0556697845459) {
                                            return 3;
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        if (num_peaks <= 132.0) {
                                            return 1;
                                        } else {
                                            return 1;
                                        }
                                    }
                                } else {
                                    if (dist_std <= 0.07709776982665062) {
                                        if (ss_median <= 56.75) {
                                            return 0;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        if (ss_median <= 66.25) {
                                            return 2;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            } else {
                                if (ss_std <= 7.662967205047607) {
                                    return 3;
                                } else {
                                    if (dist_std <= 0.10907281935214996) {
                                        if (num_valleys <= 71.5) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        if (ss_std <= 19.39671230316162) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (diff_median <= 0.015167183708399534) {
                    if (diastolic_time <= 0.0885377936065197) {
                        if (diastolic_time <= 0.055579058825969696) {
                            return 1;
                        } else {
                            if (num_valleys <= 73.0) {
                                return 3;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diastolic_area <= -13.769023895263672) {
                            if (ss_median <= 137.5) {
                                if (diastolic_amp <= -1.5882980227470398) {
                                    if (diastolic_amp <= -2.168413996696472) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (fwhm <= 7.259999990463257) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (dist_median <= -0.0002269497126690112) {
                                    return 1;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (ss_median <= 100.0) {
                                return 0;
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 0.02957307454198599) {
                        if (systolic_time <= 0.6331515312194824) {
                            if (num_valleys <= 64.5) {
                                return 2;
                            } else {
                                if (diastolic_amp <= -1.3422760963439941) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (num_valleys <= 80.5) {
                                if (rr_median <= 107.25) {
                                    return 1;
                                } else {
                                    if (diastolic_amp <= -1.3090549111366272) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (pp_interval <= 0.6259999871253967) {
                            if (pulse_interval <= 0.3873583823442459) {
                                return 4;
                            } else {
                                return 5;
                            }
                        } else {
                            if (systolic_amp <= 3.9092907905578613) {
                                return 1;
                            } else {
                                return 2;
                            }
                        }
                    }
                }
            }
        }
    }
    );
    votes[1] = (
// Decision rules for tree 1
    if (diastolic_time <= 0.2538642883300781) {
        if (pp_interval <= 0.24652199447155) {
            if (num_valleys <= 73.5) {
                if (rr_std <= 9.973143577575684) {
                    if (rr_median <= 68.75) {
                        if (rr_std <= 2.4680213928222656) {
                            return 3;
                        } else {
                            return 3;
                        }
                    } else {
                        if (rr_std <= 0.6502490937709808) {
                            return 3;
                        } else {
                            if (ss_median <= 77.0) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 135.5) {
                        if (dist_median <= -0.0008298010507132858) {
                            return 3;
                        } else {
                            if (diastolic_area <= -36.2943229675293) {
                                if (pp_interval <= 0.11357618868350983) {
                                    return 1;
                                } else {
                                    if (diastolic_amp <= -2.6425585746765137) {
                                        if (num_valleys <= 68.0) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        if (dist_std <= 0.03589186631143093) {
                                            return 4;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            } else {
                                if (num_valleys <= 44.5) {
                                    return 4;
                                } else {
                                    if (fwhm <= 0.024000000208616257) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        }
                    } else {
                        return 3;
                    }
                }
            } else {
                if (pp_interval <= 0.018777777440845966) {
                    if (ss_median <= 55.25) {
                        return 3;
                    } else {
                        return 0;
                    }
                } else {
                    if (rr_std <= 16.268128871917725) {
                        if (dist_std <= 0.048200298100709915) {
                            return 5;
                        } else {
                            return 3;
                        }
                    } else {
                        if (rr_median <= 79.25) {
                            return 4;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 99.25) {
                if (num_peaks <= 79.5) {
                    return 4;
                } else {
                    if (diastolic_time <= 0.15976469963788986) {
                        if (dist_median <= -0.0002827872958732769) {
                            if (rr_median <= 73.25) {
                                if (systolic_area <= 16.098732948303223) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (num_valleys <= 70.0) {
                                    return 5;
                                } else {
                                    if (dist_median <= -0.00051229348173365) {
                                        return 1;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 82.5) {
                                if (dist_std <= 0.07100479677319527) {
                                    if (rr_std <= 21.743791580200195) {
                                        if (dist_std <= 0.041130512952804565) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    if (diff_median <= 0.009415379259735346) {
                                        return 3;
                                    } else {
                                        return 1;
                                    }
                                }
                            } else {
                                if (fwhm <= 6.563999891281128) {
                                    return 3;
                                } else {
                                    if (num_valleys <= 69.5) {
                                        return 1;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.5434285700321198) {
                            if (diastolic_area <= -22.96308708190918) {
                                if (pulse_interval <= 0.3049599975347519) {
                                    return 2;
                                } else {
                                    if (diastolic_amp <= -1.7286319732666016) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (rr_median <= 81.25) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            if (diastolic_area <= -39.59907150268555) {
                                return 1;
                            } else {
                                if (rr_std <= 14.71822214126587) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -31.92300319671631) {
                    if (systolic_amp <= 4.308265209197998) {
                        if (diastolic_time <= 0.11359436437487602) {
                            if (pulse_interval <= 0.45257142186164856) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            if (systolic_area <= 18.010327339172363) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (systolic_amp <= 4.58938193321228) {
                            return 5;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    return 4;
                }
            }
        }
    } else {
        if (rr_std <= 0.6796177625656128) {
            if (rr_median <= 73.5) {
                if (ss_median <= 67.25) {
                    return 2;
                } else {
                    if (dist_std <= 0.12614641338586807) {
                        return 2;
                    } else {
                        return 2;
                    }
                }
            } else {
                return 2;
            }
        } else {
            if (diastolic_time <= 0.8301111161708832) {
                if (num_peaks <= 124.5) {
                    if (systolic_time <= 0.2970365136861801) {
                        if (rr_std <= 20.9439640045166) {
                            return 5;
                        } else {
                            if (systolic_area <= 34.739423751831055) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        if (rr_std <= 13.756742000579834) {
                            if (pp_interval <= 0.7982222139835358) {
                                if (pulse_interval <= 0.40402477979660034) {
                                    return 5;
                                } else {
                                    if (ss_std <= 10.86326551437378) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (num_peaks <= 103.0) {
                                if (rr_std <= 44.17820930480957) {
                                    if (pulse_interval <= 0.44738560914993286) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    return 1;
                                }
                            } else {
                                if (pp_interval <= 0.5031346082687378) {
                                    return 3;
                                } else {
                                    if (rr_std <= 18.638473510742188) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 5.509567975997925) {
                        if (dist_std <= 0.07209363207221031) {
                            return 5;
                        } else {
                            if (pp_interval <= 0.4870000034570694) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.4550588130950928) {
                            return 3;
                        } else {
                            if (dist_std <= 0.06627212278544903) {
                                if (systolic_time <= 0.5855757594108582) {
                                    if (systolic_time <= 0.5614944994449615) {
                                        return 0;
                                    } else {
                                        if (num_valleys <= 76.5) {
                                            return 3;
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 10.558023452758789) {
                                        return 0;
                                    } else {
                                        if (systolic_time <= 0.9522857069969177) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            } else {
                                return 2;
                            }
                        }
                    }
                }
            } else {
                if (ss_std <= 34.23951721191406) {
                    return 1;
                } else {
                    return 1;
                }
            }
        }
    }
    );
    votes[2] = (
// Decision rules for tree 2
    if (systolic_time <= 0.2819257229566574) {
        if (num_peaks <= 131.5) {
            if (dist_std <= 0.10151227936148643) {
                if (diastolic_area <= -55.6682186126709) {
                    if (diastolic_time <= 0.09717484563589096) {
                        if (ss_std <= 14.420795917510986) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (dist_median <= -0.0012107071815989912) {
                        if (num_peaks <= 88.0) {
                            return 4;
                        } else {
                            return 5;
                        }
                    } else {
                        if (dist_std <= 0.058204442262649536) {
                            if (num_valleys <= 72.5) {
                                if (systolic_time <= 0.2604781538248062) {
                                    if (ss_std <= 27.987926483154297) {
                                        return 4;
                                    } else {
                                        if (dist_median <= -0.0001256471914530266) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            if (rr_median <= 83.5) {
                                if (diff_median <= 0.010152585338801146) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 48.75) {
                    return 4;
                } else {
                    if (systolic_area <= 31.607922554016113) {
                        return 5;
                    } else {
                        if (pulse_interval <= 0.20109999924898148) {
                            if (diastolic_area <= -35.89443588256836) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            return 2;
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 60.25) {
                if (diastolic_amp <= -1.963813602924347) {
                    return 3;
                } else {
                    return 3;
                }
            } else {
                if (fwhm <= 0.06800000369548798) {
                    return 0;
                } else {
                    if (diastolic_area <= -31.705618858337402) {
                        return 4;
                    } else {
                        return 1;
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.1141279898583889) {
            if (diastolic_time <= 0.23541472107172012) {
                if (systolic_time <= 0.6301515400409698) {
                    if (diastolic_time <= 0.08659757301211357) {
                        if (rr_median <= 76.5) {
                            return 3;
                        } else {
                            if (rr_std <= 1.746669590473175) {
                                return 1;
                            } else {
                                if (first_peak_freq <= 0.30517578125) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.51161003112793) {
                            if (rr_median <= 83.5) {
                                if (diff_median <= 0.011275985278189182) {
                                    return 3;
                                } else {
                                    if (num_valleys <= 69.0) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (pulse_interval <= 0.38517460227012634) {
                                return 4;
                            } else {
                                if (dist_std <= 0.058776892721652985) {
                                    if (systolic_area <= 23.27738666534424) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 3;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 100.5) {
                        if (num_peaks <= 138.5) {
                            if (diastolic_area <= -68.4649887084961) {
                                if (rr_median <= 82.75) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (diastolic_time <= 0.13846635073423386) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (diastolic_area <= -45.34360885620117) {
                            if (num_peaks <= 127.5) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 5;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -16.897536277770996) {
                    if (dist_std <= 0.054308392107486725) {
                        if (num_peaks <= 108.0) {
                            if (pp_interval <= 0.5709610283374786) {
                                return 5;
                            } else {
                                return 2;
                            }
                        } else {
                            if (pulse_interval <= 0.493883341550827) {
                                return 3;
                            } else {
                                if (rr_median <= 75.75) {
                                    return 0;
                                } else {
                                    if (systolic_amp <= 3.650385856628418) {
                                        return 3;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 52.0) {
                            if (fwhm <= 7.776000022888184) {
                                if (rr_std <= 27.126089096069336) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            if (ss_median <= 63.75) {
                                if (pp_interval <= 0.5316666662693024) {
                                    return 3;
                                } else {
                                    return 0;
                                }
                            } else {
                                if (pp_interval <= 0.5803076922893524) {
                                    if (systolic_time <= 0.49879999458789825) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 2;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 124.0) {
                        if (diastolic_area <= -13.208370208740234) {
                            if (ss_std <= 54.20251274108887) {
                                if (pulse_interval <= 0.8084444403648376) {
                                    return 5;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if (pulse_interval <= 0.7621333301067352) {
                                if (rr_median <= 82.0) {
                                    return 0;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.7435999810695648) {
                            if (ss_std <= 12.494685173034668) {
                                if (ss_median <= 54.5) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                if (systolic_time <= 0.862666666507721) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            return 2;
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 78.5) {
                if (diastolic_time <= 0.22144444286823273) {
                    if (num_peaks <= 120.0) {
                        return 5;
                    } else {
                        return 1;
                    }
                } else {
                    if (diastolic_amp <= -2.432178258895874) {
                        return 3;
                    } else {
                        if (num_valleys <= 69.0) {
                            if (diff_median <= 0.006499657640233636) {
                                return 2;
                            } else {
                                if (num_peaks <= 110.5) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            return 2;
                        }
                    }
                }
            } else {
                if (ss_std <= 43.17038917541504) {
                    if (dist_median <= -0.00012290564700379036) {
                        return 5;
                    } else {
                        return 5;
                    }
                } else {
                    return 3;
                }
            }
        }
    }
    );
    votes[3] = (
// Decision rules for tree 3
    if (systolic_time <= 0.3967999964952469) {
        if (systolic_time <= 0.29591651260852814) {
            if (num_peaks <= 131.5) {
                if (rr_std <= 14.177024841308594) {
                    if (rr_std <= 0.6516379714012146) {
                        if (ss_median <= 78.75) {
                            return 2;
                        } else {
                            return 4;
                        }
                    } else {
                        if (dist_median <= -0.00011859610822284594) {
                            if (diastolic_time <= 0.05851350724697113) {
                                return 1;
                            } else {
                                if (diastolic_area <= -30.14892864227295) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (fwhm <= 0.6599999964237213) {
                                return 5;
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.08704012632369995) {
                        if (diastolic_area <= -55.763240814208984) {
                            return 1;
                        } else {
                            if (diff_median <= 0.04549573175609112) {
                                if (systolic_area <= 62.2814998626709) {
                                    if (rr_std <= 16.10599136352539) {
                                        return 4;
                                    } else {
                                        if (ss_std <= 12.346752643585205) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                } else {
                                    return 4;
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (systolic_area <= 41.99240684509277) {
                            if (num_valleys <= 66.0) {
                                if (dist_median <= -0.00015527081995969638) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            return 3;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.00800000037997961) {
                    if (rr_median <= 88.0) {
                        return 3;
                    } else {
                        return 0;
                    }
                } else {
                    if (rr_std <= 25.66772747039795) {
                        if (diastolic_amp <= -2.6828489303588867) {
                            return 3;
                        } else {
                            if (pulse_interval <= 0.13824526220560074) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        return 4;
                    }
                }
            }
        } else {
            if (rr_median <= 76.5) {
                if (dist_std <= 0.13625690340995789) {
                    if (systolic_area <= 33.994089126586914) {
                        if (fwhm <= 6.0879998207092285) {
                            return 3;
                        } else {
                            if (pp_interval <= 0.3378484845161438) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        return 4;
                    }
                } else {
                    return 2;
                }
            } else {
                if (rr_median <= 111.0) {
                    if (ss_median <= 91.0) {
                        return 5;
                    } else {
                        return 5;
                    }
                } else {
                    return 1;
                }
            }
        }
    } else {
        if (dist_std <= 0.054036643356084824) {
            if (rr_median <= 105.25) {
                if (num_peaks <= 107.0) {
                    if (systolic_area <= 18.64594268798828) {
                        if (rr_median <= 79.5) {
                            return 2;
                        } else {
                            return 1;
                        }
                    } else {
                        if (pulse_interval <= 0.4378666579723358) {
                            return 5;
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (pp_interval <= 0.5729230642318726) {
                        if (num_valleys <= 70.5) {
                            return 3;
                        } else {
                            if (diastolic_area <= -15.56245470046997) {
                                if (dist_median <= -0.0005426303250715137) {
                                    return 1;
                                } else {
                                    if (rr_median <= 67.0) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if (first_peak_freq <= 0.42724609375) {
                            if (diastolic_time <= 0.25761380046606064) {
                                return 5;
                            } else {
                                if (pulse_interval <= 0.8066666722297668) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.2612057849764824) {
                                return 3;
                            } else {
                                if (rr_std <= 13.212324619293213) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 123.25) {
                    if (num_valleys <= 83.0) {
                        return 1;
                    } else {
                        return 5;
                    }
                } else {
                    if (diff_median <= 0.01619583461433649) {
                        if (diastolic_area <= -36.93985939025879) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        return 0;
                    }
                }
            }
        } else {
            if (num_peaks <= 87.5) {
                if (rr_median <= 74.25) {
                    if (fwhm <= 6.680000066757202) {
                        return 2;
                    } else {
                        if (diastolic_time <= 0.5073499977588654) {
                            return 2;
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (diastolic_area <= -13.669111728668213) {
                        if (diff_median <= 0.013851436786353588) {
                            return 5;
                        } else {
                            return 2;
                        }
                    } else {
                        return 1;
                    }
                }
            } else {
                if (dist_std <= 0.13315143436193466) {
                    if (rr_median <= 85.5) {
                        if (pp_interval <= 0.6386666595935822) {
                            if (num_peaks <= 129.5) {
                                if (rr_median <= 62.5) {
                                    return 3;
                                } else {
                                    if (first_peak_freq <= 0.30517578125) {
                                        if (ss_std <= 17.184367179870605) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        if (systolic_area <= 25.02311897277832) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            } else {
                                if (ss_std <= 23.774338722229004) {
                                    if (dist_std <= 0.07043033838272095) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            if (num_valleys <= 80.0) {
                                if (ss_median <= 83.75) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diff_median <= 0.007672873558476567) {
                            return 5;
                        } else {
                            if (num_peaks <= 121.5) {
                                if (diff_median <= 0.011680657509714365) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (diastolic_area <= -45.349609375) {
                                    if (ss_std <= 18.523762702941895) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    if (diastolic_area <= -30.769665718078613) {
                                        return 3;
                                    } else {
                                        if (diff_median <= 0.015718314331024885) {
                                            return 2;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (ss_std <= 11.061220169067383) {
                        return 2;
                    } else {
                        return 3;
                    }
                }
            }
        }
    }
    );
    votes[4] = (
// Decision rules for tree 4
    if (pulse_interval <= 0.39466315507888794) {
        if (num_peaks <= 131.5) {
            if (rr_std <= 14.500072002410889) {
                if (ss_std <= 12.455376625061035) {
                    if (rr_std <= 0.6215836405754089) {
                        if (second_peak_freq <= 0.91552734375) {
                            return 2;
                        } else {
                            return 2;
                        }
                    } else {
                        if (diastolic_time <= 0.231095589697361) {
                            return 3;
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (systolic_amp <= 5.157564878463745) {
                        if (dist_std <= 0.06380119919776917) {
                            if (dist_median <= -0.00021776399080408737) {
                                return 3;
                            } else {
                                return 4;
                            }
                        } else {
                            if (rr_median <= 79.0) {
                                return 5;
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (num_valleys <= 66.5) {
                            return 4;
                        } else {
                            if (pp_interval <= 0.29061999917030334) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -118.90383911132812) {
                    return 1;
                } else {
                    if (ss_std <= 9.943518161773682) {
                        if (systolic_amp <= 3.4904948472976685) {
                            return 2;
                        } else {
                            return 3;
                        }
                    } else {
                        if (pp_interval <= 0.2581428587436676) {
                            if (diastolic_amp <= -2.3679851293563843) {
                                if (diastolic_time <= 0.14667320251464844) {
                                    if (diastolic_amp <= -2.7208155393600464) {
                                        if (rr_std <= 47.554298400878906) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (diastolic_amp <= -2.575832724571228) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            } else {
                                if (dist_median <= 1.9985503683983552e-05) {
                                    if (num_peaks <= 78.0) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    if (diastolic_area <= -2.043399453163147) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_area <= -22.244314193725586) {
                                if (systolic_amp <= 5.6547815799713135) {
                                    return 5;
                                } else {
                                    return 4;
                                }
                            } else {
                                if (first_peak_freq <= 0.18310546875) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.00800000037997961) {
                if (ss_std <= 19.584875106811523) {
                    return 0;
                } else {
                    return 0;
                }
            } else {
                if (rr_median <= 67.0) {
                    return 3;
                } else {
                    if (rr_std <= 4.10038685798645) {
                        return 1;
                    } else {
                        if (ss_std <= 24.865721702575684) {
                            if (rr_std <= 21.034062385559082) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            return 5;
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.055564550682902336) {
            if (rr_median <= 102.0) {
                if (diastolic_time <= 0.22764947265386581) {
                    if (rr_median <= 68.5) {
                        return 3;
                    } else {
                        if (systolic_amp <= 3.858785629272461) {
                            return 1;
                        } else {
                            if (dist_median <= -0.00023848289129091427) {
                                return 3;
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -17.884400367736816) {
                        if (num_peaks <= 104.5) {
                            return 2;
                        } else {
                            if (systolic_amp <= 4.003066420555115) {
                                return 5;
                            } else {
                                if (ss_median <= 68.75) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    } else {
                        if (pp_interval <= 1.1011428833007812) {
                            if (fwhm <= 8.087999820709229) {
                                if (num_peaks <= 108.5) {
                                    return 0;
                                } else {
                                    if (dist_median <= 6.043912799214013e-05) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (systolic_amp <= 3.7882280349731445) {
                    if (dist_median <= -9.773965075510205e-06) {
                        if (diff_median <= 0.01886586006730795) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        return 5;
                    }
                } else {
                    if (diastolic_area <= -15.35072946548462) {
                        if (num_peaks <= 135.0) {
                            return 5;
                        } else {
                            return 1;
                        }
                    } else {
                        return 0;
                    }
                }
            }
        } else {
            if (num_peaks <= 88.5) {
                if (ss_median <= 102.0) {
                    if (dist_std <= 0.09839120134711266) {
                        if (dist_std <= 0.07612456008791924) {
                            return 2;
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_time <= 0.529442310333252) {
                            return 2;
                        } else {
                            return 2;
                        }
                    }
                } else {
                    return 1;
                }
            } else {
                if (diastolic_time <= 0.975428581237793) {
                    if (diastolic_amp <= -1.4802352786064148) {
                        if (diastolic_time <= 0.13893406093120575) {
                            if (rr_median <= 96.5) {
                                if (pp_interval <= 0.6075384616851807) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (systolic_time <= 0.867166668176651) {
                                if (ss_std <= 5.705451011657715) {
                                    if (fwhm <= 7.796000003814697) {
                                        if (num_peaks <= 111.5) {
                                            return 2;
                                        } else {
                                            return 2;
                                        }
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (diastolic_amp <= -1.6181727051734924) {
                                        if (num_peaks <= 136.0) {
                                            return 5;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.31135334074497223) {
                            if (pulse_interval <= 0.8733888864517212) {
                                if (fwhm <= 7.920000076293945) {
                                    if (diff_median <= 0.009557281155139208) {
                                        return 5;
                                    } else {
                                        if (systolic_amp <= 3.9430958032608032) {
                                            return 1;
                                        } else {
                                            return 1;
                                        }
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (dist_median <= -0.0003142700297757983) {
                                return 2;
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    return 1;
                }
            }
        }
    }
    );
    votes[5] = (
// Decision rules for tree 5
    if (dist_std <= 0.094605702906847) {
        if (pp_interval <= 0.4656209200620651) {
            if (rr_median <= 59.75) {
                if (num_peaks <= 136.5) {
                    if (systolic_area <= 11.05991816520691) {
                        return 4;
                    } else {
                        if (fwhm <= 6.983999967575073) {
                            if (rr_median <= 49.25) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            return 3;
                        }
                    }
                } else {
                    return 3;
                }
            } else {
                if (diastolic_amp <= -2.163183331489563) {
                    if (diastolic_time <= 0.08335080742835999) {
                        return 1;
                    } else {
                        if (first_peak_freq <= 0.54931640625) {
                            if (ss_std <= 15.985311031341553) {
                                return 4;
                            } else {
                                if (fwhm <= 7.876000165939331) {
                                    if (systolic_amp <= 4.075649976730347) {
                                        return 4;
                                    } else {
                                        if (fwhm <= 5.488000154495239) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.18203617632389069) {
                                        return 4;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 91.0) {
                                return 4;
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_amp <= -0.2596624009311199) {
                        if (diastolic_time <= 0.06756005808711052) {
                            if (rr_median <= 82.25) {
                                return 3;
                            } else {
                                if (diastolic_area <= -50.30001640319824) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (rr_median <= 91.25) {
                                if (rr_std <= 26.53696060180664) {
                                    if (pp_interval <= 0.29570014774799347) {
                                        return 3;
                                    } else {
                                        if (dist_median <= -0.00022265784355113283) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    }
                                } else {
                                    return 1;
                                }
                            } else {
                                if (systolic_time <= 0.3948117643594742) {
                                    if (systolic_area <= 30.076292991638184) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 0.011625217273831367) {
                            if (second_peak_freq <= 0.79345703125) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            if (dist_std <= 0.062214335426688194) {
                                return 0;
                            } else {
                                return 2;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 101.25) {
                if (diastolic_area <= -18.536481857299805) {
                    if (ss_median <= 59.25) {
                        if (diastolic_area <= -45.257585525512695) {
                            return 1;
                        } else {
                            return 3;
                        }
                    } else {
                        if (systolic_amp <= 3.5669500827789307) {
                            if (diff_median <= 0.011978573631495237) {
                                return 3;
                            } else {
                                if (diastolic_amp <= -1.3457316160202026) {
                                    return 0;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (num_peaks <= 94.5) {
                                return 2;
                            } else {
                                if (systolic_amp <= 4.0320515632629395) {
                                    if (rr_std <= 16.669012546539307) {
                                        if (diff_median <= 0.015153974294662476) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (pp_interval <= 0.6252727210521698) {
                                        if (systolic_time <= 0.5391428768634796) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        if (diastolic_area <= -46.21884059906006) {
                                            return 5;
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 1.043500006198883) {
                        if (dist_std <= 0.05554366298019886) {
                            if (num_valleys <= 67.5) {
                                if (diastolic_amp <= -1.6386570930480957) {
                                    return 5;
                                } else {
                                    return 0;
                                }
                            } else {
                                if (fwhm <= 2.180000066757202) {
                                    return 0;
                                } else {
                                    if (pp_interval <= 0.5039285719394684) {
                                        return 0;
                                    } else {
                                        if (rr_std <= 8.988080501556396) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 14.586586952209473) {
                                return 5;
                            } else {
                                if (ss_std <= 23.59778594970703) {
                                    return 0;
                                } else {
                                    return 2;
                                }
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            } else {
                if (diastolic_area <= -45.34360885620117) {
                    if (diastolic_time <= 0.08774392679333687) {
                        return 1;
                    } else {
                        if (fwhm <= 7.496000051498413) {
                            return 5;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (num_peaks <= 119.0) {
                        if (pulse_interval <= 0.8212222158908844) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        if (dist_median <= -0.0002036374862655066) {
                            return 5;
                        } else {
                            return 0;
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 0.6242677867412567) {
            if (diastolic_area <= -30.337130546569824) {
                if (ss_std <= 10.734235286712646) {
                    return 2;
                } else {
                    if (diastolic_amp <= -1.4025532007217407) {
                        return 3;
                    } else {
                        return 5;
                    }
                }
            } else {
                if (fwhm <= 7.315999984741211) {
                    if (rr_std <= 0.609120637178421) {
                        return 2;
                    } else {
                        return 2;
                    }
                } else {
                    if (systolic_amp <= 3.398781895637512) {
                        return 2;
                    } else {
                        return 2;
                    }
                }
            }
        } else {
            if (ss_median <= 80.5) {
                if (pp_interval <= 0.5391809642314911) {
                    if (systolic_time <= 0.48213332891464233) {
                        if (diastolic_time <= 0.257935494184494) {
                            if (num_peaks <= 126.5) {
                                if (second_peak_freq <= 1.28173828125) {
                                    if (diff_median <= 0.008225107099860907) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (dist_median <= -0.0002154961257474497) {
                                return 2;
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (diastolic_area <= -22.789812088012695) {
                        return 5;
                    } else {
                        if (diff_median <= 0.015250835102051497) {
                            return 2;
                        } else {
                            return 2;
                        }
                    }
                }
            } else {
                if (systolic_area <= 19.041499137878418) {
                    if (systolic_time <= 0.5274000018835068) {
                        return 1;
                    } else {
                        return 1;
                    }
                } else {
                    if (dist_std <= 0.11017760261893272) {
                        return 1;
                    } else {
                        return 5;
                    }
                }
            }
        }
    }
    );
    votes[6] = (
// Decision rules for tree 6
    if (diastolic_time <= 0.2627938240766525) {
        if (pp_interval <= 0.26671428978443146) {
            if (ss_std <= 20.34165096282959) {
                if (fwhm <= 8.124000072479248) {
                    if (diff_median <= 0.012128625996410847) {
                        if (dist_std <= 0.06652444787323475) {
                            if (ss_median <= 81.0) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            if (fwhm <= 0.4359999895095825) {
                                return 4;
                            } else {
                                if (second_peak_freq <= 1.15966796875) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 66.25) {
                            if (fwhm <= 7.380000114440918) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (systolic_amp <= 4.441660642623901) {
                                if (num_valleys <= 67.0) {
                                    return 1;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (dist_median <= -0.00036414770875126123) {
                        return 3;
                    } else {
                        return 4;
                    }
                }
            } else {
                if (rr_std <= 16.15445613861084) {
                    if (num_peaks <= 140.5) {
                        if (systolic_amp <= 3.8941049575805664) {
                            if (pp_interval <= 0.11940372362732887) {
                                return 5;
                            } else {
                                return 1;
                            }
                        } else {
                            if (systolic_time <= 0.20303846150636673) {
                                return 3;
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if (num_peaks <= 133.5) {
                        if (fwhm <= 4.960000038146973) {
                            return 4;
                        } else {
                            if (systolic_area <= 53.65345764160156) {
                                return 4;
                            } else {
                                if (systolic_amp <= 4.440307140350342) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            }
                        }
                    } else {
                        return 3;
                    }
                }
            }
        } else {
            if (rr_median <= 98.5) {
                if (num_peaks <= 105.5) {
                    if (num_valleys <= 56.5) {
                        if (pulse_interval <= 0.4166666567325592) {
                            return 4;
                        } else {
                            return 3;
                        }
                    } else {
                        if (ss_std <= 0.6161034107208252) {
                            return 2;
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.08861545845866203) {
                        if (rr_median <= 82.75) {
                            if (dist_std <= 0.08452514186501503) {
                                if (dist_median <= -0.00026567402528598905) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (ss_median <= 81.25) {
                                return 3;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (rr_median <= 66.25) {
                            if (pulse_interval <= 0.679999977350235) {
                                if (systolic_amp <= 3.698792576789856) {
                                    return 3;
                                } else {
                                    if (systolic_area <= 29.873493194580078) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (pp_interval <= 0.609743595123291) {
                                if (fwhm <= 7.819999933242798) {
                                    if (pp_interval <= 0.45649999380111694) {
                                        if (rr_median <= 73.5) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        if (systolic_amp <= 3.567054867744446) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    }
                                } else {
                                    if (fwhm <= 8.003999948501587) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (ss_std <= 18.309670448303223) {
                                    return 5;
                                } else {
                                    if (dist_std <= 0.1028139628469944) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 0.009529873263090849) {
                    if (diastolic_time <= 0.10176902636885643) {
                        return 1;
                    } else {
                        return 5;
                    }
                } else {
                    if (systolic_amp <= 3.8615951538085938) {
                        if (systolic_amp <= 3.119483232498169) {
                            return 1;
                        } else {
                            if (pulse_interval <= 0.5850000083446503) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (ss_median <= 98.0) {
                            return 1;
                        } else {
                            return 5;
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05718790926039219) {
            if (systolic_time <= 0.41801171004772186) {
                if (dist_std <= 0.04495196230709553) {
                    if (dist_median <= -0.0003858360869344324) {
                        return 1;
                    } else {
                        return 5;
                    }
                } else {
                    return 4;
                }
            } else {
                if (num_valleys <= 67.5) {
                    if (pp_interval <= 0.7720000147819519) {
                        if (systolic_amp <= 4.002125978469849) {
                            return 0;
                        } else {
                            return 5;
                        }
                    } else {
                        if (diff_median <= 0.027295933105051517) {
                            if (rr_std <= 25.621490478515625) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (rr_median <= 53.75) {
                        return 0;
                    } else {
                        if (diastolic_area <= -18.629676818847656) {
                            if (pp_interval <= 0.5784615576267242) {
                                return 0;
                            } else {
                                return 0;
                            }
                        } else {
                            if (rr_std <= 8.851558208465576) {
                                return 0;
                            } else {
                                return 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.09371098503470421) {
                if (diastolic_area <= -12.954282283782959) {
                    if (systolic_time <= 0.8404444456100464) {
                        if (num_peaks <= 84.5) {
                            return 2;
                        } else {
                            if (rr_std <= 1.6015737056732178) {
                                return 3;
                            } else {
                                if (systolic_time <= 0.5665238201618195) {
                                    if (num_peaks <= 126.5) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (diastolic_time <= 0.4941166788339615) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        }
                    } else {
                        return 2;
                    }
                } else {
                    if (ss_median <= 66.25) {
                        return 0;
                    } else {
                        if (systolic_amp <= 3.8600491285324097) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (ss_median <= 74.25) {
                    if (diastolic_amp <= -2.4281569719314575) {
                        return 2;
                    } else {
                        if (pulse_interval <= 0.38549524545669556) {
                            return 2;
                        } else {
                            if (pp_interval <= 0.4904000014066696) {
                                if (systolic_area <= 27.82376003265381) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 2;
                            }
                        }
                    }
                } else {
                    if (dist_median <= -0.00026030718436231837) {
                        return 5;
                    } else {
                        return 5;
                    }
                }
            }
        }
    }
    );
    votes[7] = (
// Decision rules for tree 7
    if (diastolic_time <= 0.27718518674373627) {
        if (pulse_interval <= 0.2459999993443489) {
            if (rr_std <= 9.717729091644287) {
                if (rr_median <= 102.0) {
                    if (num_valleys <= 57.0) {
                        return 1;
                    } else {
                        if (diff_median <= 0.00889565795660019) {
                            return 5;
                        } else {
                            if (fwhm <= 0.12399999797344208) {
                                return 3;
                            } else {
                                if (systolic_time <= 0.19387545436620712) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_median <= -0.00020405746181495488) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            } else {
                if (rr_median <= 86.25) {
                    if (systolic_area <= 58.02784538269043) {
                        if (num_valleys <= 71.5) {
                            if (ss_median <= 72.5) {
                                return 4;
                            } else {
                                if (diastolic_area <= -26.526673316955566) {
                                    if (num_peaks <= 125.0) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    return 4;
                                }
                            }
                        } else {
                            if (ss_std <= 16.703447818756104) {
                                return 5;
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        if (fwhm <= 6.759999990463257) {
                            if (second_peak_freq <= 0.67138671875) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (fwhm <= 7.691999912261963) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.1139594204723835) {
                        if (diastolic_area <= -5.5284810066223145) {
                            if (rr_std <= 31.369194984436035) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        return 4;
                    }
                }
            }
        } else {
            if (pp_interval <= 0.6341515183448792) {
                if (num_peaks <= 86.0) {
                    if (diastolic_amp <= -2.1866406202316284) {
                        return 4;
                    } else {
                        return 3;
                    }
                } else {
                    if (diastolic_amp <= -1.127256155014038) {
                        if (rr_median <= 66.5) {
                            if (rr_std <= 2.3625587224960327) {
                                return 3;
                            } else {
                                if (systolic_time <= 0.3144487291574478) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (dist_std <= 0.1429893523454666) {
                                if (fwhm <= 7.880000114440918) {
                                    if (diff_median <= 0.030779550783336163) {
                                        if (systolic_area <= 35.812618255615234) {
                                            return 5;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    if (pp_interval <= 0.4300522804260254) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        if (num_valleys <= 68.5) {
                            return 3;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (diastolic_amp <= -1.156074583530426) {
                    if (rr_median <= 65.5) {
                        if (dist_std <= 0.07363537698984146) {
                            return 3;
                        } else {
                            return 1;
                        }
                    } else {
                        if (diastolic_time <= 0.09341412410140038) {
                            if (ss_std <= 23.478455543518066) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            if (systolic_amp <= 3.559744358062744) {
                                if (systolic_area <= 17.543869972229004) {
                                    return 5;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (rr_std <= 18.444225311279297) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    }
                } else {
                    if (dist_median <= -0.0004285106697352603) {
                        return 1;
                    } else {
                        if (diastolic_time <= 0.07849263399839401) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 107.5) {
            if (rr_median <= 76.75) {
                if (diff_median <= 0.03205103054642677) {
                    if (num_peaks <= 98.5) {
                        if (ss_median <= 74.25) {
                            if (rr_median <= 68.5) {
                                if (systolic_time <= 0.470611110329628) {
                                    return 2;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        return 5;
                    }
                } else {
                    if (systolic_time <= 0.7187333405017853) {
                        return 5;
                    } else {
                        return 2;
                    }
                }
            } else {
                if (pp_interval <= 0.42920124530792236) {
                    if (diastolic_amp <= -2.38169264793396) {
                        if (systolic_amp <= 4.8749425411224365) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        if (second_peak_freq <= 1.03759765625) {
                            return 5;
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (diastolic_area <= -13.699831485748291) {
                        return 2;
                    } else {
                        if (ss_median <= 80.5) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (ss_std <= 6.580931663513184) {
                if (diastolic_amp <= -1.7417515516281128) {
                    return 5;
                } else {
                    return 2;
                }
            } else {
                if (num_valleys <= 69.5) {
                    if (diastolic_area <= -13.390963554382324) {
                        if (diastolic_area <= -22.09404945373535) {
                            return 5;
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_time <= 0.5849523842334747) {
                            return 0;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.7435999810695648) {
                        if (dist_std <= 0.06295835040509701) {
                            if (rr_std <= 7.789663076400757) {
                                return 0;
                            } else {
                                if (pp_interval <= 0.5756922960281372) {
                                    if (num_valleys <= 76.5) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        if (rr_std <= 24.808798789978027) {
                            return 5;
                        } else {
                            return 0;
                        }
                    }
                }
            }
        }
    }
    );
    votes[8] = (
// Decision rules for tree 8
    if (pulse_interval <= 0.2972898483276367) {
        if (fwhm <= 6.471999883651733) {
            if (rr_median <= 62.75) {
                if (num_peaks <= 126.0) {
                    if (pp_interval <= 0.10184848308563232) {
                        if (dist_median <= 2.045901055680588e-05) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        if (systolic_area <= 46.533830642700195) {
                            return 4;
                        } else {
                            return 3;
                        }
                    }
                } else {
                    if (dist_std <= 0.04178030230104923) {
                        return 3;
                    } else {
                        return 3;
                    }
                }
            } else {
                if (rr_median <= 110.0) {
                    if (num_valleys <= 75.5) {
                        if (systolic_area <= 56.43019485473633) {
                            if (rr_std <= 36.59113121032715) {
                                if (fwhm <= 3.8480000495910645) {
                                    return 1;
                                } else {
                                    if (ss_std <= 17.422779083251953) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if (num_peaks <= 103.0) {
                        return 4;
                    } else {
                        if (dist_std <= 0.05708997882902622) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 16.551016807556152) {
                if (num_valleys <= 66.0) {
                    if (fwhm <= 7.808000087738037) {
                        return 1;
                    } else {
                        return 4;
                    }
                } else {
                    if (ss_std <= 10.080981731414795) {
                        return 3;
                    } else {
                        if (ss_std <= 17.922081470489502) {
                            return 5;
                        } else {
                            return 3;
                        }
                    }
                }
            } else {
                if (systolic_amp <= 4.059525966644287) {
                    if (pulse_interval <= 0.0758360642939806) {
                        return 4;
                    } else {
                        if (diastolic_time <= 0.1172574907541275) {
                            return 3;
                        } else {
                            return 4;
                        }
                    }
                } else {
                    if (dist_std <= 0.07716631144285202) {
                        if (pulse_interval <= 0.15439970046281815) {
                            if (ss_std <= 23.770651817321777) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        return 4;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 61.5) {
            if (diastolic_area <= -17.6787166595459) {
                if (rr_std <= 0.6896102130413055) {
                    if (num_valleys <= 51.5) {
                        if (dist_std <= 0.10264686867594719) {
                            return 2;
                        } else {
                            return 2;
                        }
                    } else {
                        if (ss_median <= 73.5) {
                            if (diastolic_amp <= -1.6100274920463562) {
                                if (rr_std <= 0.4740213602781296) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (pulse_interval <= 0.5365714430809021) {
                        if (rr_std <= 15.978317260742188) {
                            if (num_peaks <= 113.5) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            if (fwhm <= 7.696000099182129) {
                                if (rr_std <= 49.621246337890625) {
                                    return 4;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (rr_median <= 80.0) {
                                    return 2;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    } else {
                        if (diastolic_amp <= -2.1901865005493164) {
                            if (ss_median <= 71.25) {
                                return 2;
                            } else {
                                return 5;
                            }
                        } else {
                            if (diastolic_amp <= -1.916340947151184) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.632515162229538) {
                    if (diff_median <= 0.027618450112640858) {
                        return 1;
                    } else {
                        if (dist_median <= -0.000780390837462619) {
                            return 4;
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (dist_std <= 0.055559322237968445) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.3020738512277603) {
                if (fwhm <= 7.920000076293945) {
                    if (diastolic_area <= -70.65959167480469) {
                        if (dist_std <= 0.03575030155479908) {
                            return 3;
                        } else {
                            if (diff_median <= 0.007976612774655223) {
                                return 3;
                            } else {
                                if (diff_median <= 0.025157696567475796) {
                                    if (diastolic_amp <= -1.3091170191764832) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        if (pp_interval <= 0.5866410434246063) {
                            if (rr_median <= 67.0) {
                                if (rr_median <= 59.5) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (num_peaks <= 119.0) {
                                    if (systolic_time <= 0.409894734621048) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (diastolic_time <= 0.09157699719071388) {
                                        return 1;
                                    } else {
                                        if (systolic_amp <= 4.183424234390259) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.2513815388083458) {
                                if (dist_std <= 0.04567505232989788) {
                                    if (diff_median <= 0.015488408971577883) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (diff_median <= 0.015495699364691973) {
                                        if (diastolic_amp <= -1.3937780261039734) {
                                            return 5;
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        return 1;
                                    }
                                }
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    if (pp_interval <= 0.7028000056743622) {
                        if (systolic_area <= 27.944384574890137) {
                            if (systolic_time <= 0.41621051728725433) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        return 5;
                    }
                }
            } else {
                if (dist_std <= 0.060476282611489296) {
                    if (systolic_time <= 1.0462857484817505) {
                        if (ss_median <= 86.5) {
                            if (systolic_time <= 0.4508529454469681) {
                                return 0;
                            } else {
                                if (rr_median <= 53.5) {
                                    return 0;
                                } else {
                                    if (diastolic_area <= -21.6139497756958) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (systolic_time <= 1.242133378982544) {
                        if (systolic_time <= 0.8676666617393494) {
                            if (num_peaks <= 131.0) {
                                if (ss_std <= 13.681445598602295) {
                                    return 2;
                                } else {
                                    if (systolic_amp <= 3.702173352241516) {
                                        return 2;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        return 1;
                    }
                }
            }
        }
    }
    );
    votes[9] = (
// Decision rules for tree 9
    if (pulse_interval <= 0.3946749120950699) {
        if (num_valleys <= 75.5) {
            if (rr_std <= 14.641603469848633) {
                if (fwhm <= 7.772000074386597) {
                    if (dist_std <= 0.13744955509901047) {
                        if (rr_median <= 75.5) {
                            if (systolic_time <= 0.18833699077367783) {
                                return 3;
                            } else {
                                if (systolic_area <= 32.14590644836426) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.22385776042938232) {
                                if (dist_median <= -0.0002994863025378436) {
                                    return 1;
                                } else {
                                    if (systolic_amp <= 4.418820142745972) {
                                        return 5;
                                    } else {
                                        return 1;
                                    }
                                }
                            } else {
                                if (diastolic_area <= -23.081324577331543) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        return 2;
                    }
                } else {
                    if (rr_std <= 0.3162277638912201) {
                        return 4;
                    } else {
                        return 5;
                    }
                }
            } else {
                if (ss_median <= 50.25) {
                    if (diff_median <= 0.010897983331233263) {
                        return 4;
                    } else {
                        return 2;
                    }
                } else {
                    if (dist_std <= 0.07249128818511963) {
                        if (num_peaks <= 135.5) {
                            if (systolic_time <= 0.36080382764339447) {
                                if (ss_std <= 13.515647411346436) {
                                    return 4;
                                } else {
                                    if (diff_median <= 0.01709190383553505) {
                                        return 4;
                                    } else {
                                        if (systolic_time <= 0.15443049371242523) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        if (rr_median <= 81.5) {
                            if (systolic_area <= 22.484688758850098) {
                                return 4;
                            } else {
                                return 3;
                            }
                        } else {
                            if (ss_std <= 33.82824230194092) {
                                return 5;
                            } else {
                                return 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 92.0) {
                if (rr_std <= 10.066006660461426) {
                    return 3;
                } else {
                    if (systolic_time <= 0.19738571345806122) {
                        if (ss_median <= 77.5) {
                            return 3;
                        } else {
                            return 4;
                        }
                    } else {
                        return 5;
                    }
                }
            } else {
                if (num_peaks <= 142.0) {
                    return 3;
                } else {
                    return 0;
                }
            }
        }
    } else {
        if (num_peaks <= 93.5) {
            if (ss_std <= 31.04358673095703) {
                if (rr_median <= 91.0) {
                    if (diff_median <= 0.03819665499031544) {
                        if (systolic_amp <= 3.3365622758865356) {
                            return 2;
                        } else {
                            if (diastolic_time <= 0.5073499977588654) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        return 5;
                    }
                } else {
                    return 3;
                }
            } else {
                if (diastolic_time <= 0.6504895091056824) {
                    if (fwhm <= 6.376000165939331) {
                        return 1;
                    } else {
                        if (systolic_amp <= 4.325915813446045) {
                            if (diastolic_time <= 0.32180869579315186) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            return 4;
                        }
                    }
                } else {
                    if (dist_std <= 0.053227439522743225) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.054036643356084824) {
                if (diastolic_time <= 0.24830107390880585) {
                    if (diastolic_time <= 0.08616039529442787) {
                        if (rr_median <= 81.0) {
                            return 3;
                        } else {
                            if (dist_median <= -0.000129083295178134) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (rr_median <= 68.5) {
                            return 3;
                        } else {
                            if (ss_std <= 45.91019630432129) {
                                if (diff_median <= 0.0118496916256845) {
                                    return 5;
                                } else {
                                    if (fwhm <= 7.436000108718872) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.257308006286621) {
                        return 3;
                    } else {
                        if (num_valleys <= 62.0) {
                            return 5;
                        } else {
                            if (pulse_interval <= 1.0066428780555725) {
                                if (rr_median <= 55.75) {
                                    if (diastolic_area <= -13.592630386352539) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                return 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.22788234800100327) {
                    if (rr_median <= 99.25) {
                        if (num_peaks <= 129.5) {
                            if (diastolic_amp <= -1.1995591521263123) {
                                if (systolic_area <= 20.931891441345215) {
                                    if (dist_median <= -0.00011268242451478727) {
                                        return 3;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    if (diastolic_amp <= -1.7613717913627625) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (first_peak_freq <= 0.18310546875) {
                                if (diff_median <= 0.019769529812037945) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (rr_std <= 13.053532600402832) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (pp_interval <= 1.234000027179718) {
                        if (dist_std <= 0.13315143436193466) {
                            if (diastolic_amp <= -1.7368536591529846) {
                                if (pulse_interval <= 0.5346095263957977) {
                                    if (ss_std <= 23.54149627685547) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (ss_std <= 40.39628601074219) {
                                        if (diastolic_time <= 0.387452632188797) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if (num_peaks <= 117.5) {
                                    if (diastolic_area <= -17.240696907043457) {
                                        return 5;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    if (diff_median <= 0.01957891695201397) {
                                        if (systolic_time <= 0.6096153855323792) {
                                            return 2;
                                        } else {
                                            return 2;
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        return 1;
                    }
                }
            }
        }
    }
    );
    votes[10] = (
// Decision rules for tree 10
    if (pulse_interval <= 0.445333331823349) {
        if (rr_std <= 16.939903259277344) {
            if (dist_std <= 0.13744955509901047) {
                if (diastolic_time <= 0.12666666507720947) {
                    if (rr_median <= 66.25) {
                        if (diastolic_area <= -18.088499069213867) {
                            if (fwhm <= 6.599999904632568) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (diastolic_area <= -2.765597105026245) {
                                return 4;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (num_peaks <= 118.5) {
                            if (diff_median <= 0.008200110867619514) {
                                return 4;
                            } else {
                                if (diastolic_amp <= -1.3388440608978271) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (pulse_interval <= 0.03135593235492706) {
                                return 0;
                            } else {
                                if (ss_median <= 78.25) {
                                    return 5;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    }
                } else {
                    if (ss_median <= 72.5) {
                        if (fwhm <= 6.9079999923706055) {
                            if (systolic_time <= 0.2462456077337265) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (ss_std <= 12.199512004852295) {
                                return 3;
                            } else {
                                if (rr_median <= 71.25) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        if (diastolic_amp <= -2.3976441621780396) {
                            return 4;
                        } else {
                            if (rr_std <= 2.252985179424286) {
                                if (diastolic_amp <= -2.0407568216323853) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            } else {
                if (pulse_interval <= 0.26417454332113266) {
                    return 4;
                } else {
                    return 2;
                }
            }
        } else {
            if (diastolic_area <= -52.084999084472656) {
                if (diastolic_time <= 0.060092344880104065) {
                    return 1;
                } else {
                    if (diastolic_amp <= -2.5697288513183594) {
                        return 4;
                    } else {
                        if (ss_std <= 17.633935928344727) {
                            return 5;
                        } else {
                            return 5;
                        }
                    }
                }
            } else {
                if (diastolic_amp <= -2.2451313734054565) {
                    if (ss_std <= 15.552210807800293) {
                        return 4;
                    } else {
                        if (first_peak_freq <= 0.54931640625) {
                            if (dist_std <= 0.09226283431053162) {
                                if (fwhm <= 0.9000000208616257) {
                                    return 4;
                                } else {
                                    if (first_peak_freq <= 0.42724609375) {
                                        return 4;
                                    } else {
                                        if (num_valleys <= 66.0) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            if (fwhm <= 6.679999828338623) {
                                return 3;
                            } else {
                                return 4;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -6.107598543167114) {
                        if (systolic_amp <= 3.7787729501724243) {
                            if (diastolic_area <= -25.422627449035645) {
                                return 1;
                            } else {
                                return 5;
                            }
                        } else {
                            if (second_peak_freq <= 0.91552734375) {
                                return 4;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (rr_median <= 77.75) {
                            return 4;
                        } else {
                            if (diastolic_time <= 0.01662295125424862) {
                                return 0;
                            } else {
                                return 4;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_median <= 95.5) {
            if (num_peaks <= 93.5) {
                if (diastolic_time <= 0.26494623720645905) {
                    return 3;
                } else {
                    if (diastolic_amp <= -2.4331451654434204) {
                        return 5;
                    } else {
                        if (dist_std <= 0.04213029891252518) {
                            return 2;
                        } else {
                            if (ss_median <= 107.0) {
                                if (diastolic_time <= 0.5378461480140686) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 2;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -18.29942226409912) {
                    if (diastolic_time <= 0.17768710106611252) {
                        if (rr_std <= 39.516366958618164) {
                            if (diastolic_area <= -51.005733489990234) {
                                if (pulse_interval <= 0.5873846113681793) {
                                    return 1;
                                } else {
                                    if (diff_median <= 0.010637551546096802) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.07570435106754303) {
                                    return 3;
                                } else {
                                    if (diastolic_time <= 0.1447599232196808) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (systolic_amp <= 4.1328606605529785) {
                            if (systolic_amp <= 3.567054867744446) {
                                if (pulse_interval <= 0.5560879111289978) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (diastolic_area <= -21.347256660461426) {
                                    if (systolic_time <= 0.565846174955368) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            if (pulse_interval <= 0.5536923110485077) {
                                if (num_valleys <= 72.0) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (systolic_amp <= 5.760134696960449) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 7.802156209945679) {
                        return 2;
                    } else {
                        if (num_valleys <= 68.5) {
                            if (systolic_time <= 0.7969777882099152) {
                                return 0;
                            } else {
                                return 2;
                            }
                        } else {
                            if (dist_std <= 0.06214325316250324) {
                                if (dist_median <= -0.0008704389620106667) {
                                    if (dist_median <= -0.0012229671701788902) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if (diff_median <= 0.03695639781653881) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                return 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 69.5) {
                if (diastolic_time <= 0.2837927117943764) {
                    if (diff_median <= 0.010532759595662355) {
                        return 3;
                    } else {
                        return 1;
                    }
                } else {
                    if (diastolic_time <= 0.6266666650772095) {
                        return 0;
                    } else {
                        return 5;
                    }
                }
            } else {
                if (diastolic_time <= 0.08757942169904709) {
                    return 1;
                } else {
                    if (num_valleys <= 56.0) {
                        if (first_peak_freq <= 0.42724609375) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        if (ss_median <= 87.75) {
                            return 1;
                        } else {
                            if (num_peaks <= 112.5) {
                                return 4;
                            } else {
                                if (diastolic_time <= 0.15904156863689423) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    );
    votes[11] = (
// Decision rules for tree 11
    if (diastolic_time <= 0.20975074917078018) {
        if (rr_std <= 16.006247520446777) {
            if (rr_median <= 98.5) {
                if (pulse_interval <= 0.5475384593009949) {
                    if (num_valleys <= 51.0) {
                        return 5;
                    } else {
                        if (diastolic_area <= -14.251502513885498) {
                            if (rr_median <= 76.5) {
                                if (dist_median <= -0.0004926589172100648) {
                                    if (rr_median <= 55.25) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (dist_std <= 0.12247582897543907) {
                                        if (second_peak_freq <= 0.54931640625) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        if (ss_std <= 17.823904991149902) {
                                            return 3;
                                        } else {
                                            return 1;
                                        }
                                    }
                                }
                            } else {
                                if (rr_median <= 85.0) {
                                    return 5;
                                } else {
                                    if (num_valleys <= 69.5) {
                                        return 1;
                                    } else {
                                        return 3;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 60.75) {
                                if (dist_std <= 0.040377141907811165) {
                                    return 3;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (fwhm <= 7.819999933242798) {
                        if (ss_median <= 63.0) {
                            return 1;
                        } else {
                            if (systolic_amp <= 3.6246871948242188) {
                                return 1;
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            } else {
                if (diff_median <= 0.00762487668544054) {
                    return 5;
                } else {
                    if (diastolic_area <= -31.358856201171875) {
                        if (diastolic_amp <= -1.4309828281402588) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (pulse_interval <= 0.38517460227012634) {
                if (ss_std <= 10.320959091186523) {
                    if (systolic_area <= 39.64590835571289) {
                        return 3;
                    } else {
                        return 1;
                    }
                } else {
                    if (fwhm <= 6.819999933242798) {
                        if (systolic_time <= 0.04510638304054737) {
                            if (diff_median <= 0.014957138802856207) {
                                return 4;
                            } else {
                                return 0;
                            }
                        } else {
                            if (diastolic_amp <= -3.1710983514785767) {
                                return 4;
                            } else {
                                if (systolic_amp <= 4.388101100921631) {
                                    return 3;
                                } else {
                                    if (rr_std <= 36.425981521606445) {
                                        return 5;
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 72.5) {
                            return 4;
                        } else {
                            if (systolic_amp <= 4.827471494674683) {
                                return 5;
                            } else {
                                return 4;
                            }
                        }
                    }
                }
            } else {
                if (systolic_time <= 0.659854531288147) {
                    if (ss_std <= 6.205724239349365) {
                        return 3;
                    } else {
                        if (ss_median <= 144.5) {
                            if (diastolic_amp <= -1.329953372478485) {
                                if (systolic_area <= 21.83487892150879) {
                                    return 5;
                                } else {
                                    if (second_peak_freq <= 0.67138671875) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (systolic_amp <= 4.110514402389526) {
                        if (fwhm <= 7.0960001945495605) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        return 3;
                    }
                }
            }
        }
    } else {
        if (ss_std <= 8.873210430145264) {
            if (dist_std <= 0.11216330155730247) {
                if (ss_std <= 0.6057399213314056) {
                    return 3;
                } else {
                    if (num_valleys <= 64.0) {
                        return 2;
                    } else {
                        if (second_peak_freq <= 1.0986328125) {
                            return 5;
                        } else {
                            return 3;
                        }
                    }
                }
            } else {
                if (ss_median <= 66.5) {
                    return 3;
                } else {
                    if (diff_median <= 0.015148946549743414) {
                        if (ss_median <= 73.25) {
                            return 2;
                        } else {
                            return 2;
                        }
                    } else {
                        return 2;
                    }
                }
            }
        } else {
            if (num_valleys <= 69.5) {
                if (diastolic_area <= -19.293121337890625) {
                    if (rr_median <= 89.0) {
                        if (systolic_time <= 0.4992000013589859) {
                            if (systolic_time <= 0.41031746566295624) {
                                if (num_peaks <= 99.0) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (num_peaks <= 84.5) {
                                return 2;
                            } else {
                                if (num_valleys <= 50.5) {
                                    return 2;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        return 5;
                    }
                } else {
                    if (pulse_interval <= 0.7720000147819519) {
                        if (num_peaks <= 84.5) {
                            if (diff_median <= 0.02951063960790634) {
                                return 1;
                            } else {
                                return 4;
                            }
                        } else {
                            if (diastolic_amp <= -1.6386570930480957) {
                                if (ss_std <= 45.11021041870117) {
                                    if (diastolic_amp <= -2.0413806438446045) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 2;
                                }
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if (diff_median <= 0.03670371323823929) {
                            if (diastolic_area <= -14.280874252319336) {
                                return 2;
                            } else {
                                if (diastolic_time <= 0.652848482131958) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            return 2;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.06027412973344326) {
                    if (rr_median <= 54.75) {
                        if (diastolic_amp <= -1.632126808166504) {
                            return 3;
                        } else {
                            return 0;
                        }
                    } else {
                        if (pulse_interval <= 0.5815238058567047) {
                            if (pp_interval <= 0.5242461562156677) {
                                if (pulse_interval <= 0.4998333305120468) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                if (ss_median <= 64.0) {
                                    return 0;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            return 0;
                        }
                    }
                } else {
                    if (pp_interval <= 0.8451666533946991) {
                        if (ss_std <= 15.21457576751709) {
                            return 3;
                        } else {
                            if (diastolic_amp <= -1.7286319732666016) {
                                return 5;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            }
        }
    }
    );
    votes[12] = (
// Decision rules for tree 12
    if (systolic_time <= 0.3704962432384491) {
        if (num_valleys <= 73.5) {
            if (dist_median <= 8.805510515230708e-05) {
                if (dist_std <= 0.06922420114278793) {
                    if (num_peaks <= 135.5) {
                        if (diastolic_amp <= -2.2451313734054565) {
                            if (rr_std <= 14.569810390472412) {
                                return 4;
                            } else {
                                if (systolic_time <= 0.15461764484643936) {
                                    if (systolic_area <= 56.60658645629883) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    if (second_peak_freq <= 1.03759765625) {
                                        return 4;
                                    } else {
                                        if (dist_median <= -0.00022848253865959123) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.0344534944742918) {
                                if (ss_std <= 12.829484462738037) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                if (first_peak_freq <= 0.42724609375) {
                                    return 5;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (pulse_interval <= 0.022502923384308815) {
                        if (ss_median <= 73.0) {
                            if (diff_median <= 0.008315532002598047) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        if (ss_median <= 76.0) {
                            if (dist_median <= -0.0009603849321138114) {
                                return 2;
                            } else {
                                if (dist_std <= 0.13271800428628922) {
                                    if (dist_std <= 0.0973854586482048) {
                                        return 3;
                                    } else {
                                        if (systolic_area <= 42.214548110961914) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    }
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            if (second_peak_freq <= 0.91552734375) {
                                if (dist_median <= -0.0007694197993259877) {
                                    return 4;
                                } else {
                                    if (diastolic_time <= 0.1695319190621376) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            } else {
                if (fwhm <= 6.323999881744385) {
                    return 5;
                } else {
                    return 2;
                }
            }
        } else {
            if (rr_median <= 62.0) {
                if (rr_std <= 10.06864881515503) {
                    return 3;
                } else {
                    if (second_peak_freq <= 0.91552734375) {
                        return 3;
                    } else {
                        return 1;
                    }
                }
            } else {
                if (systolic_time <= 0.017277486622333527) {
                    return 0;
                } else {
                    if (fwhm <= 6.75600004196167) {
                        if (diastolic_time <= 0.07042810320854187) {
                            return 1;
                        } else {
                            return 3;
                        }
                    } else {
                        if (dist_std <= 0.04001377336680889) {
                            return 4;
                        } else {
                            if (second_peak_freq <= 0.9765625) {
                                return 5;
                            } else {
                                return 3;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.05406352877616882) {
            if (rr_median <= 101.5) {
                if (num_valleys <= 68.5) {
                    if (diastolic_time <= 0.5459780395030975) {
                        if (dist_std <= 0.03730127401649952) {
                            return 5;
                        } else {
                            if (diastolic_time <= 0.1960594654083252) {
                                return 3;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (pulse_interval <= 0.5710769295692444) {
                        if (diastolic_amp <= -2.4147526025772095) {
                            return 0;
                        } else {
                            if (diastolic_area <= -16.864482879638672) {
                                if (rr_median <= 67.0) {
                                    return 3;
                                } else {
                                    if (rr_std <= 17.994556427001953) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                if (num_peaks <= 143.0) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.24748387187719345) {
                            return 5;
                        } else {
                            if (pulse_interval <= 0.812888890504837) {
                                return 0;
                            } else {
                                if (rr_median <= 64.0) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (num_valleys <= 83.0) {
                    if (diastolic_amp <= -1.5693431496620178) {
                        return 1;
                    } else {
                        if (diastolic_amp <= -1.4203379154205322) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    return 0;
                }
            }
        } else {
            if (rr_std <= 0.6796177625656128) {
                if (diastolic_time <= 0.21579185128211975) {
                    if (rr_std <= 0.5182230323553085) {
                        return 1;
                    } else {
                        return 5;
                    }
                } else {
                    if (rr_std <= 0.41066253185272217) {
                        return 3;
                    } else {
                        if (dist_median <= -0.0002243880880996585) {
                            return 2;
                        } else {
                            if (dist_std <= 0.12405568733811378) {
                                return 2;
                            } else {
                                if (num_valleys <= 56.0) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            }
                        }
                    }
                }
            } else {
                if (pulse_interval <= 0.6078666746616364) {
                    if (num_peaks <= 108.5) {
                        if (num_valleys <= 58.0) {
                            if (diastolic_amp <= -1.7406203746795654) {
                                if (diff_median <= 0.026007404550909996) {
                                    if (systolic_time <= 0.5214000046253204) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    return 4;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (dist_std <= 0.09532159194350243) {
                                return 5;
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.4916153848171234) {
                            if (ss_std <= 19.656704902648926) {
                                if (systolic_time <= 0.3979894816875458) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (ss_median <= 101.0) {
                                    return 1;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 124.5) {
                                if (dist_std <= 0.10574328154325485) {
                                    if (first_peak_freq <= 0.30517578125) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                if (dist_std <= 0.07079287990927696) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    }
                } else {
                    if (diff_median <= 0.01557933771982789) {
                        if (diastolic_area <= -22.919312477111816) {
                            if (systolic_amp <= 3.564511775970459) {
                                return 1;
                            } else {
                                if (diastolic_time <= 0.13032258301973343) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.8137777745723724) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        if (diff_median <= 0.036149222403764725) {
                            if (ss_median <= 64.5) {
                                if (systolic_amp <= 3.9346853494644165) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (dist_median <= -0.0006210598512552679) {
                                    return 1;
                                } else {
                                    if (dist_median <= -7.643790377187543e-05) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                }
                            }
                        } else {
                            if (ss_std <= 21.240532875061035) {
                                return 0;
                            } else {
                                return 2;
                            }
                        }
                    }
                }
            }
        }
    }
    );
    votes[13] = (
// Decision rules for tree 13
    if (diastolic_time <= 0.20975074917078018) {
        if (pulse_interval <= 0.20149999856948853) {
            if (num_peaks <= 135.5) {
                if (rr_std <= 14.367665767669678) {
                    if (rr_median <= 55.5) {
                        return 3;
                    } else {
                        if (diff_median <= 0.011606486979871988) {
                            return 4;
                        } else {
                            if (diff_median <= 0.020100077614188194) {
                                return 1;
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 107.75) {
                        if (rr_median <= 86.5) {
                            if (diff_median <= 0.006139917764812708) {
                                return 4;
                            } else {
                                if (num_valleys <= 49.5) {
                                    return 4;
                                } else {
                                    if (diastolic_time <= 0.1736646518111229) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        if (diff_median <= 0.00791156361810863) {
                            return 4;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 76.5) {
                    return 3;
                } else {
                    if (fwhm <= 2.052000045776367) {
                        return 0;
                    } else {
                        return 5;
                    }
                }
            }
        } else {
            if (systolic_time <= 0.5478241741657257) {
                if (rr_median <= 75.5) {
                    if (num_valleys <= 60.5) {
                        return 4;
                    } else {
                        if (rr_std <= 16.70757293701172) {
                            if (diastolic_amp <= -2.6884864568710327) {
                                if (diastolic_amp <= -2.7494088411331177) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (systolic_time <= 0.44551634788513184) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            return 3;
                        }
                    }
                } else {
                    if (diastolic_amp <= -3.072096347808838) {
                        if (ss_std <= 44.52843475341797) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        if (pp_interval <= 0.5018681287765503) {
                            if (diastolic_time <= 0.10325859114527702) {
                                if (num_valleys <= 69.5) {
                                    if (diastolic_amp <= -1.3460158109664917) {
                                        return 5;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    return 1;
                                }
                            } else {
                                if (diastolic_area <= -33.433226585388184) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            return 3;
                        }
                    }
                }
            } else {
                if (systolic_amp <= 3.6821848154067993) {
                    if (diff_median <= 0.006370201939716935) {
                        return 3;
                    } else {
                        if (diastolic_amp <= -1.114095151424408) {
                            if (rr_std <= 11.63471794128418) {
                                if (fwhm <= 7.796000003814697) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (second_peak_freq <= 0.91552734375) {
                                    return 4;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (diastolic_amp <= -1.2394924759864807) {
                        if (rr_median <= 73.25) {
                            if (ss_median <= 67.0) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            if (diastolic_time <= 0.11783192306756973) {
                                return 5;
                            } else {
                                if (ss_std <= 22.95826816558838) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        return 3;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 123.5) {
            if (diastolic_time <= 0.6167076826095581) {
                if (dist_std <= 0.094605702906847) {
                    if (pp_interval <= 0.29591651260852814) {
                        if (systolic_area <= 34.20865821838379) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        if (systolic_time <= 0.8407777845859528) {
                            if (diff_median <= 0.012933425605297089) {
                                if (rr_median <= 65.0) {
                                    return 3;
                                } else {
                                    if (dist_std <= 0.05487700179219246) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                if (systolic_amp <= 4.029024839401245) {
                                    if (pulse_interval <= 0.5947412550449371) {
                                        return 5;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if (pp_interval <= 0.5186666548252106) {
                                        if (rr_median <= 74.0) {
                                            return 2;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 2;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_area <= -16.952696323394775) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    }
                } else {
                    if (ss_median <= 74.25) {
                        if (diastolic_amp <= -2.5844839811325073) {
                            return 3;
                        } else {
                            if (diastolic_amp <= -1.5932953357696533) {
                                if (num_peaks <= 113.0) {
                                    if (diff_median <= 0.015266608912497759) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    return 2;
                                }
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (dist_std <= 0.11564602702856064) {
                            return 5;
                        } else {
                            return 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    return 5;
                } else {
                    return 1;
                }
            }
        } else {
            if (pulse_interval <= 0.5590329766273499) {
                if (diastolic_area <= -16.864482879638672) {
                    if (fwhm <= 6.19599986076355) {
                        return 0;
                    } else {
                        if (diastolic_amp <= -1.9998128414154053) {
                            return 5;
                        } else {
                            return 3;
                        }
                    }
                } else {
                    if (second_peak_freq <= 0.54931640625) {
                        return 2;
                    } else {
                        if (diff_median <= 0.01272552227601409) {
                            return 0;
                        } else {
                            return 0;
                        }
                    }
                }
            } else {
                if (systolic_area <= 14.169904232025146) {
                    if (ss_std <= 15.991678237915039) {
                        if (fwhm <= 7.528000116348267) {
                            return 3;
                        } else {
                            return 0;
                        }
                    } else {
                        if (rr_std <= 29.587679862976074) {
                            if (num_peaks <= 138.5) {
                                return 0;
                            } else {
                                return 0;
                            }
                        } else {
                            return 0;
                        }
                    }
                } else {
                    if (pp_interval <= 0.6255897283554077) {
                        if (ss_median <= 73.75) {
                            if (diastolic_amp <= -1.6583428978919983) {
                                return 0;
                            } else {
                                return 0;
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        if (systolic_time <= 0.8453333079814911) {
                            return 0;
                        } else {
                            return 0;
                        }
                    }
                }
            }
        }
    }
    );
    votes[14] = (
// Decision rules for tree 14
    if (pulse_interval <= 0.39510931074619293) {
        if (rr_std <= 16.9524507522583) {
            if (rr_median <= 66.5) {
                if (pulse_interval <= 0.2356363609433174) {
                    if (num_valleys <= 79.5) {
                        if (rr_median <= 54.25) {
                            if (systolic_area <= 18.312738180160522) {
                                return 4;
                            } else {
                                return 3;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (diastolic_time <= 0.2309802621603012) {
                        return 3;
                    } else {
                        return 3;
                    }
                }
            } else {
                if (dist_std <= 0.13755935430526733) {
                    if (diff_median <= 0.014734620228409767) {
                        if (diff_median <= 0.010454586707055569) {
                            if (dist_std <= 0.09727730229496956) {
                                if (num_valleys <= 66.5) {
                                    return 5;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (pp_interval <= 0.24620258063077927) {
                                return 5;
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (diastolic_area <= -73.2785415649414) {
                            return 3;
                        } else {
                            if (fwhm <= 1.903999924659729) {
                                return 0;
                            } else {
                                if (ss_std <= 30.051005363464355) {
                                    if (dist_median <= -0.0005426521238405257) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    return 4;
                                }
                            }
                        }
                    }
                } else {
                    if (fwhm <= 4.555999994277954) {
                        return 2;
                    } else {
                        return 2;
                    }
                }
            }
        } else {
            if (pulse_interval <= 0.2589162588119507) {
                if (num_peaks <= 135.5) {
                    if (ss_std <= 10.318543434143066) {
                        if (ss_median <= 66.0) {
                            return 3;
                        } else {
                            return 1;
                        }
                    } else {
                        if (fwhm <= 6.763999938964844) {
                            if (diastolic_area <= -28.420459747314453) {
                                return 4;
                            } else {
                                if (fwhm <= 3.2840000316500664) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            }
                        } else {
                            if (diastolic_area <= -37.72231674194336) {
                                if (num_valleys <= 66.5) {
                                    return 4;
                                } else {
                                    if (systolic_amp <= 4.243030071258545) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            } else {
                                return 4;
                            }
                        }
                    }
                } else {
                    return 3;
                }
            } else {
                if (diastolic_area <= -22.0206356048584) {
                    if (rr_median <= 78.25) {
                        return 3;
                    } else {
                        if (ss_std <= 25.94610023498535) {
                            return 5;
                        } else {
                            return 4;
                        }
                    }
                } else {
                    if (diff_median <= 0.027410907670855522) {
                        return 2;
                    } else {
                        if (diastolic_area <= -14.052624225616455) {
                            return 4;
                        } else {
                            return 4;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 93.5) {
            if (rr_median <= 88.5) {
                if (ss_std <= 45.346426010131836) {
                    if (dist_std <= 0.04410666972398758) {
                        return 5;
                    } else {
                        if (diastolic_amp <= -2.431745409965515) {
                            return 2;
                        } else {
                            if (diff_median <= 0.007965333759784698) {
                                if (diastolic_amp <= -1.7953367829322815) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 2;
                            }
                        }
                    }
                } else {
                    return 1;
                }
            } else {
                if (systolic_area <= 18.584320068359375) {
                    return 1;
                } else {
                    return 5;
                }
            }
        } else {
            if (diastolic_time <= 0.27446305751800537) {
                if (diastolic_amp <= -1.3487675786018372) {
                    if (ss_median <= 61.5) {
                        if (dist_std <= 0.04925171099603176) {
                            if (systolic_time <= 0.5199999958276749) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (systolic_time <= 0.5750476121902466) {
                                return 3;
                            } else {
                                if (diastolic_time <= 0.12482580542564392) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.8994999825954437) {
                            if (pp_interval <= 0.6780302822589874) {
                                if (rr_std <= 7.7437756061553955) {
                                    if (rr_std <= 0.7051750719547272) {
                                        return 2;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (ss_std <= 19.401426315307617) {
                                        if (diastolic_time <= 0.15046153962612152) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        if (rr_std <= 19.090039253234863) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_area <= -63.33639907836914) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (fwhm <= 7.9679999351501465) {
                        if (pulse_interval <= 0.5077333152294159) {
                            if (ss_median <= 77.0) {
                                return 3;
                            } else {
                                return 1;
                            }
                        } else {
                            if (diff_median <= 0.007835156517103314) {
                                return 3;
                            } else {
                                if (diff_median <= 0.009624040685594082) {
                                    return 1;
                                } else {
                                    if (ss_median <= 72.25) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                }
                            }
                        }
                    } else {
                        return 3;
                    }
                }
            } else {
                if (dist_std <= 0.05531284213066101) {
                    if (rr_median <= 55.75) {
                        if (diastolic_area <= -13.339514255523682) {
                            return 3;
                        } else {
                            return 0;
                        }
                    } else {
                        if (num_peaks <= 108.5) {
                            return 0;
                        } else {
                            if (num_valleys <= 70.5) {
                                return 0;
                            } else {
                                if (pulse_interval <= 0.5027619153261185) {
                                    return 0;
                                } else {
                                    if (diastolic_area <= -18.90355396270752) {
                                        if (diastolic_amp <= -1.9753443598747253) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 1.2440000176429749) {
                        if (pp_interval <= 0.835999995470047) {
                            if (diastolic_area <= -15.314306259155273) {
                                if (ss_std <= 24.081833839416504) {
                                    if (dist_std <= 0.1142980121076107) {
                                        if (fwhm <= 7.555999994277954) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    if (diastolic_area <= -19.751242637634277) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                if (ss_median <= 57.0) {
                                    return 0;
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            if (ss_std <= 29.120022773742676) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            }
        }
    }
    );
    votes[15] = (
// Decision rules for tree 15
    if (pp_interval <= 0.31316085159778595) {
        if (dist_std <= 0.05604507401585579) {
            if (num_valleys <= 73.5) {
                if (diastolic_area <= -69.9339599609375) {
                    return 3;
                } else {
                    if (rr_std <= 16.551016807556152) {
                        if (first_peak_freq <= 0.42724609375) {
                            return 1;
                        } else {
                            return 4;
                        }
                    } else {
                        if (num_peaks <= 125.5) {
                            if (dist_median <= -0.0011951802298426628) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            if (num_valleys <= 64.5) {
                                return 4;
                            } else {
                                if (second_peak_freq <= 1.03759765625) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 61.75) {
                    return 3;
                } else {
                    if (fwhm <= 7.235999822616577) {
                        if (num_peaks <= 129.5) {
                            return 1;
                        } else {
                            return 5;
                        }
                    } else {
                        if (second_peak_freq <= 1.03759765625) {
                            return 4;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.717729091644287) {
                if (systolic_time <= 0.20609049499034882) {
                    if (diff_median <= 0.007786217611283064) {
                        return 5;
                    } else {
                        if (diastolic_area <= -15.783143997192383) {
                            if (rr_median <= 81.0) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (systolic_amp <= 0.5467243790626526) {
                                return 3;
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.13815417885780334) {
                        if (systolic_amp <= 4.872324228286743) {
                            return 5;
                        } else {
                            return 1;
                        }
                    } else {
                        return 2;
                    }
                }
            } else {
                if (diff_median <= 0.006647665286436677) {
                    return 3;
                } else {
                    if (dist_std <= 0.11760768294334412) {
                        if (diastolic_area <= -28.139100074768066) {
                            return 1;
                        } else {
                            if (diastolic_time <= 0.03325968608260155) {
                                return 4;
                            } else {
                                if (rr_std <= 19.4868221282959) {
                                    return 4;
                                } else {
                                    if (systolic_amp <= 4.5881569385528564) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        }
                    } else {
                        return 3;
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 98.5) {
            if (rr_median <= 88.0) {
                if (rr_std <= 46.62442398071289) {
                    if (pulse_interval <= 0.44511111080646515) {
                        if (diastolic_area <= -22.200722694396973) {
                            return 2;
                        } else {
                            return 4;
                        }
                    } else {
                        if (num_peaks <= 93.5) {
                            if (diastolic_amp <= -1.553559958934784) {
                                if (diff_median <= 0.019163358956575394) {
                                    if (systolic_area <= 26.634854316711426) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    if (rr_std <= 18.691308975219727) {
                                        return 5;
                                    } else {
                                        return 2;
                                    }
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            return 5;
                        }
                    }
                } else {
                    return 1;
                }
            } else {
                if (diastolic_time <= 0.42093421518802643) {
                    if (diff_median <= 0.007486589252948761) {
                        if (rr_std <= 21.204010009765625) {
                            return 5;
                        } else {
                            return 3;
                        }
                    } else {
                        return 4;
                    }
                } else {
                    return 1;
                }
            }
        } else {
            if (diastolic_time <= 0.22788234800100327) {
                if (rr_median <= 94.25) {
                    if (systolic_amp <= 3.9627346992492676) {
                        if (diastolic_time <= 0.16908510774374008) {
                            if (diastolic_area <= -29.96957778930664) {
                                if (diastolic_time <= 0.09090476110577583) {
                                    if (ss_std <= 17.543071269989014) {
                                        return 3;
                                    } else {
                                        if (rr_std <= 29.430190086364746) {
                                            return 3;
                                        } else {
                                            return 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 0.012112068943679333) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_time <= 0.08755594491958618) {
                            return 3;
                        } else {
                            if (diff_median <= 0.011361839715391397) {
                                if (systolic_area <= 26.077688217163086) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (fwhm <= 7.868000030517578) {
                                    if (dist_std <= 0.06599730625748634) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 3;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -45.34360885620117) {
                        if (pp_interval <= 0.4524264633655548) {
                            return 1;
                        } else {
                            if (dist_median <= 7.326834020204842e-05) {
                                if (num_peaks <= 113.0) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (rr_median <= 118.25) {
                            return 5;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (num_peaks <= 127.0) {
                    if (dist_std <= 0.13581082969903946) {
                        if (pulse_interval <= 0.9900000095367432) {
                            if (rr_std <= 11.14601182937622) {
                                if (ss_median <= 66.0) {
                                    if (rr_median <= 70.5) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (second_peak_freq <= 1.28173828125) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                if (dist_median <= -0.0005034189525758848) {
                                    return 2;
                                } else {
                                    if (pp_interval <= 0.5777662396430969) {
                                        return 3;
                                    } else {
                                        if (diff_median <= 0.013866794295608997) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        return 2;
                    }
                } else {
                    if (dist_std <= 0.06707930192351341) {
                        if (rr_std <= 6.560080528259277) {
                            return 5;
                        } else {
                            if (diff_median <= 0.02389319147914648) {
                                if (diastolic_amp <= -1.162774682044983) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                if (pulse_interval <= 0.4527352899312973) {
                                    return 3;
                                } else {
                                    if (first_peak_freq <= 0.42724609375) {
                                        if (pulse_interval <= 0.5698461532592773) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (pp_interval <= 0.7928999960422516) {
                            return 3;
                        } else {
                            return 2;
                        }
                    }
                }
            }
        }
    }
    );
    votes[16] = (
// Decision rules for tree 16
    if (dist_std <= 0.13074832409620285) {
        if (systolic_time <= 0.39466315507888794) {
            if (rr_std <= 14.178498268127441) {
                if (rr_std <= 3.5655574798583984) {
                    if (diastolic_time <= 0.16242434829473495) {
                        if (first_peak_freq <= 0.54931640625) {
                            if (rr_median <= 102.5) {
                                if (ss_median <= 82.75) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (systolic_amp <= 4.73024845123291) {
                            return 5;
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (dist_std <= 0.04528452828526497) {
                        if (dist_median <= -5.000061537430156e-05) {
                            if (dist_median <= -0.0006144710932858288) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        if (diastolic_area <= -15.27731990814209) {
                            if (diff_median <= 0.013409323059022427) {
                                return 5;
                            } else {
                                if (fwhm <= 7.019999980926514) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.05166579782962799) {
                                return 0;
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 136.0) {
                    if (fwhm <= 6.415999889373779) {
                        if (ss_median <= 98.25) {
                            if (first_peak_freq <= 0.54931640625) {
                                if (diastolic_area <= -67.61252784729004) {
                                    return 3;
                                } else {
                                    if (diastolic_amp <= -2.2489415407180786) {
                                        if (dist_median <= -0.00016186384891625494) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (ss_std <= 68.75301933288574) {
                                return 4;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (pp_interval <= 0.3101806044578552) {
                            if (rr_std <= 16.15445613861084) {
                                return 4;
                            } else {
                                if (dist_std <= 0.10892915353178978) {
                                    if (diastolic_area <= -37.72231674194336) {
                                        if (systolic_amp <= 4.338537931442261) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        if (ss_median <= 110.0) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                } else {
                                    return 4;
                                }
                            }
                        } else {
                            if (ss_median <= 91.0) {
                                return 5;
                            } else {
                                return 4;
                            }
                        }
                    }
                } else {
                    if (systolic_amp <= 1.3802016973495483) {
                        return 0;
                    } else {
                        if (rr_median <= 72.5) {
                            return 3;
                        } else {
                            return 5;
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 80.25) {
                if (diastolic_time <= 0.26275861263275146) {
                    if (diastolic_time <= 0.2266250029206276) {
                        if (pp_interval <= 0.6077435910701752) {
                            if (second_peak_freq <= 0.91552734375) {
                                if (rr_median <= 75.5) {
                                    if (pulse_interval <= 0.48839999735355377) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                if (systolic_area <= 22.676063537597656) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            if (diastolic_area <= -61.019004821777344) {
                                if (ss_std <= 21.730074882507324) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (num_valleys <= 78.5) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        return 5;
                    }
                } else {
                    if (num_valleys <= 67.5) {
                        if (systolic_area <= 13.2809739112854) {
                            return 1;
                        } else {
                            if (num_valleys <= 56.0) {
                                if (diastolic_amp <= -2.432463765144348) {
                                    return 2;
                                } else {
                                    if (fwhm <= 7.827999830245972) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                }
                            } else {
                                if (systolic_amp <= 3.765776038169861) {
                                    return 5;
                                } else {
                                    return 2;
                                }
                            }
                        }
                    } else {
                        if (diastolic_amp <= -1.9260369539260864) {
                            if (diastolic_time <= 0.5428571403026581) {
                                if (dist_std <= 0.059773705899715424) {
                                    if (ss_median <= 60.75) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (rr_std <= 8.848776817321777) {
                                return 3;
                            } else {
                                if (dist_std <= 0.05479286052286625) {
                                    if (ss_median <= 73.75) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.7982222139835358) {
                    if (diastolic_time <= 0.08774392679333687) {
                        if (rr_median <= 86.0) {
                            return 3;
                        } else {
                            if (dist_std <= 0.03590793162584305) {
                                return 1;
                            } else {
                                if (dist_std <= 0.07826506718993187) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.3292272686958313) {
                            if (second_peak_freq <= 1.03759765625) {
                                if (diff_median <= 0.009924672078341246) {
                                    return 5;
                                } else {
                                    if (systolic_time <= 0.5206538587808609) {
                                        return 4;
                                    } else {
                                        if (rr_std <= 23.40339469909668) {
                                            return 1;
                                        } else {
                                            return 1;
                                        }
                                    }
                                }
                            } else {
                                if (num_peaks <= 131.0) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            if (dist_std <= 0.04533033072948456) {
                                if (pulse_interval <= 0.709090918302536) {
                                    if (systolic_area <= 16.004365921020508) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if (systolic_time <= 0.7991110980510712) {
                                    if (diff_median <= 0.021049597300589085) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (second_peak_freq <= 0.79345703125) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    return 1;
                }
            }
        }
    } else {
        if (num_valleys <= 61.5) {
            if (systolic_area <= 17.953574180603027) {
                return 5;
            } else {
                if (pulse_interval <= 0.283547580242157) {
                    return 3;
                } else {
                    if (rr_std <= 0.7125815749168396) {
                        return 2;
                    } else {
                        if (diastolic_time <= 0.31407999992370605) {
                            return 3;
                        } else {
                            if (diastolic_amp <= -2.0368890166282654) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 120.0) {
                if (systolic_amp <= 3.5950233936309814) {
                    return 3;
                } else {
                    return 5;
                }
            } else {
                return 1;
            }
        }
    }
    );
    votes[17] = (
// Decision rules for tree 17
    if (pp_interval <= 0.38647863268852234) {
        if (rr_std <= 14.668342590332031) {
            if (rr_median <= 66.5) {
                if (diff_median <= 0.008609989192336798) {
                    return 4;
                } else {
                    if (diastolic_amp <= -2.6907280683517456) {
                        if (fwhm <= 6.808000087738037) {
                            return 3;
                        } else {
                            return 5;
                        }
                    } else {
                        if (dist_std <= 0.0714314803481102) {
                            return 3;
                        } else {
                            return 3;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.13755935430526733) {
                    if (dist_std <= 0.03736886568367481) {
                        return 4;
                    } else {
                        if (num_valleys <= 77.0) {
                            if (systolic_time <= 0.23074082285165787) {
                                if (ss_median <= 82.75) {
                                    return 0;
                                } else {
                                    if (diff_median <= 0.008822099305689335) {
                                        return 5;
                                    } else {
                                        return 1;
                                    }
                                }
                            } else {
                                if (num_peaks <= 114.0) {
                                    return 3;
                                } else {
                                    if (diastolic_amp <= -1.8111693263053894) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        } else {
                            return 3;
                        }
                    }
                } else {
                    if (rr_median <= 68.25) {
                        return 2;
                    } else {
                        return 2;
                    }
                }
            }
        } else {
            if (num_peaks <= 132.5) {
                if (ss_std <= 9.943518161773682) {
                    if (systolic_area <= 29.421441078186035) {
                        return 2;
                    } else {
                        return 3;
                    }
                } else {
                    if (dist_std <= 0.12036266922950745) {
                        if (ss_std <= 86.60757446289062) {
                            if (systolic_area <= 36.01823806762695) {
                                if (rr_std <= 17.53319549560547) {
                                    return 4;
                                } else {
                                    if (dist_std <= 0.10825156047940254) {
                                        if (diff_median <= 0.03900523483753204) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                }
                            } else {
                                if (fwhm <= 6.4679999351501465) {
                                    if (dist_median <= -0.0002447838633088395) {
                                        return 4;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (systolic_time <= 0.14170370250940323) {
                                        return 4;
                                    } else {
                                        if (ss_std <= 23.422679901123047) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        return 3;
                    }
                }
            } else {
                if (ss_std <= 12.624486923217773) {
                    return 3;
                } else {
                    if (diastolic_time <= 0.050619710236787796) {
                        return 0;
                    } else {
                        if (pp_interval <= 0.18115942180156708) {
                            return 4;
                        } else {
                            return 5;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 99.0) {
            if (rr_median <= 88.5) {
                if (diastolic_time <= 0.8889999985694885) {
                    if (systolic_time <= 0.5004000067710876) {
                        if (diastolic_amp <= -1.8150324821472168) {
                            if (systolic_area <= 21.081734657287598) {
                                return 4;
                            } else {
                                return 2;
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        if (diastolic_time <= 0.5082666575908661) {
                            if (num_valleys <= 54.0) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            if (diastolic_area <= -20.038636207580566) {
                                return 5;
                            } else {
                                return 2;
                            }
                        }
                    }
                } else {
                    return 1;
                }
            } else {
                if (systolic_area <= 19.264857292175293) {
                    if (fwhm <= 7.088000059127808) {
                        return 1;
                    } else {
                        return 1;
                    }
                } else {
                    if (rr_std <= 16.9443302154541) {
                        return 5;
                    } else {
                        return 4;
                    }
                }
            }
        } else {
            if (diastolic_area <= -18.536481857299805) {
                if (diastolic_area <= -110.88398742675781) {
                    if (systolic_area <= 18.336193084716797) {
                        return 1;
                    } else {
                        return 1;
                    }
                } else {
                    if (dist_std <= 0.13605239242315292) {
                        if (rr_median <= 97.75) {
                            if (systolic_area <= 22.06136703491211) {
                                if (diastolic_area <= -78.8017692565918) {
                                    return 3;
                                } else {
                                    if (diastolic_time <= 0.17768710106611252) {
                                        if (rr_median <= 74.75) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.7069090902805328) {
                                            return 3;
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            } else {
                                if (fwhm <= 7.940000057220459) {
                                    if (dist_median <= -0.00011837708007078618) {
                                        if (num_valleys <= 75.0) {
                                            return 5;
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (pulse_interval <= 0.6981000006198883) {
                                if (pulse_interval <= 0.410526305437088) {
                                    return 1;
                                } else {
                                    if (diastolic_time <= 0.08537334948778152) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                }
                            } else {
                                if (fwhm <= 7.588000059127808) {
                                    return 5;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 63.0) {
                            return 2;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (systolic_time <= 1.1893333792686462) {
                    if (diastolic_time <= 0.2513815388083458) {
                        return 3;
                    } else {
                        if (num_valleys <= 69.5) {
                            if (rr_median <= 76.0) {
                                return 0;
                            } else {
                                if (dist_std <= 0.07361392304301262) {
                                    return 5;
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            if (rr_std <= 6.977894067764282) {
                                return 5;
                            } else {
                                if (systolic_time <= 0.8789999783039093) {
                                    if (diastolic_area <= -15.56245470046997) {
                                        if (dist_median <= -0.00025568513956386596) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if (num_peaks <= 151.0) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 8.519771099090576) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            }
        }
    }
    );
    votes[18] = (
// Decision rules for tree 18
    if (dist_std <= 0.13868313282728195) {
        if (systolic_time <= 0.5080000162124634) {
            if (rr_median <= 64.75) {
                if (rr_std <= 15.860590934753418) {
                    if (systolic_amp <= 4.155973196029663) {
                        if (diastolic_area <= -11.353760719299316) {
                            return 3;
                        } else {
                            if (rr_median <= 50.0) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (dist_std <= 0.12570735812187195) {
                            if (num_peaks <= 137.0) {
                                if (dist_median <= -0.0004330029769334942) {
                                    return 5;
                                } else {
                                    if (ss_std <= 13.731160163879395) {
                                        return 4;
                                    } else {
                                        return 1;
                                    }
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            return 3;
                        }
                    }
                } else {
                    if (num_peaks <= 130.5) {
                        if (ss_median <= 50.25) {
                            return 2;
                        } else {
                            if (dist_median <= -0.00029962361440993845) {
                                return 4;
                            } else {
                                if (dist_median <= -0.00017189362552016973) {
                                    return 3;
                                } else {
                                    return 4;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 25.032052993774414) {
                            return 3;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (diastolic_amp <= -2.153824806213379) {
                    if (dist_std <= 0.066342793405056) {
                        if (diastolic_area <= -64.20404243469238) {
                            return 5;
                        } else {
                            if (rr_std <= 16.644373893737793) {
                                if (rr_std <= 5.943382501602173) {
                                    return 4;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (systolic_area <= 19.330310821533203) {
                                    return 4;
                                } else {
                                    if (fwhm <= 5.875999927520752) {
                                        return 4;
                                    } else {
                                        if (rr_median <= 97.5) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 8.529312670230865) {
                            if (first_peak_freq <= 0.18310546875) {
                                return 5;
                            } else {
                                return 3;
                            }
                        } else {
                            if (diastolic_area <= -13.646232604980469) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 102.0) {
                        if (fwhm <= 0.03999999910593033) {
                            return 0;
                        } else {
                            if (ss_std <= 12.239972591400146) {
                                if (first_peak_freq <= 0.18310546875) {
                                    return 2;
                                } else {
                                    if (diff_median <= 0.009930933825671673) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (diff_median <= 0.0057387868873775005) {
                                    return 3;
                                } else {
                                    if (dist_std <= 0.06497367098927498) {
                                        if (diff_median <= 0.029101946391165257) {
                                            return 5;
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        if (rr_std <= 0.7013915777206421) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -5.066644906997681) {
                            if (dist_median <= -5.642944233841263e-05) {
                                if (rr_std <= 99.22379302978516) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (ss_std <= 41.65056228637695) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.23015757650136948) {
                if (systolic_amp <= 3.5447518825531006) {
                    if (diastolic_time <= 0.07419078797101974) {
                        return 1;
                    } else {
                        if (pp_interval <= 0.7027999758720398) {
                            if (pulse_interval <= 0.5604615211486816) {
                                return 3;
                            } else {
                                if (dist_std <= 0.08354291319847107) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (rr_std <= 10.925183773040771) {
                        if (systolic_area <= 18.432762145996094) {
                            if (fwhm <= 7.128000020980835) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        if (num_valleys <= 71.5) {
                            if (rr_std <= 31.781184196472168) {
                                return 3;
                            } else {
                                return 1;
                            }
                        } else {
                            if (ss_std <= 38.77768516540527) {
                                if (diff_median <= 0.013328228611499071) {
                                    return 5;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 0.06015915982425213) {
                    if (num_peaks <= 108.5) {
                        if (rr_median <= 88.25) {
                            if (pulse_interval <= 0.6353333294391632) {
                                return 5;
                            } else {
                                return 2;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (rr_std <= 8.07284927368164) {
                            return 5;
                        } else {
                            if (rr_median <= 53.5) {
                                return 0;
                            } else {
                                if (dist_std <= 0.027514055371284485) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    if (diff_median <= 0.01675277203321457) {
                        if (dist_median <= -0.0005391183367464691) {
                            if (rr_median <= 82.0) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            if (ss_std <= 15.95255184173584) {
                                if (pulse_interval <= 0.5715824067592621) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (diastolic_area <= -13.986048221588135) {
                            if (diastolic_time <= 0.4880000054836273) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            if (diastolic_amp <= -1.69111829996109) {
                                return 1;
                            } else {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 33.49746608734131) {
            if (ss_std <= 13.034229755401611) {
                if (diastolic_amp <= -2.4243797063827515) {
                    return 2;
                } else {
                    return 2;
                }
            } else {
                if (dist_median <= -0.0001467894107918255) {
                    return 2;
                } else {
                    return 2;
                }
            }
        } else {
            return 3;
        }
    }
    );
    votes[19] = (
// Decision rules for tree 19
    if (pp_interval <= 0.39466315507888794) {
        if (rr_std <= 14.177024841308594) {
            if (num_peaks <= 106.5) {
                if (systolic_amp <= 5.858319997787476) {
                    if (rr_median <= 70.5) {
                        return 2;
                    } else {
                        if (rr_median <= 105.75) {
                            return 5;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    return 4;
                }
            } else {
                if (fwhm <= 1.9479999542236328) {
                    if (rr_std <= 6.5191497802734375) {
                        if (rr_median <= 52.0) {
                            return 3;
                        } else {
                            return 3;
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if (second_peak_freq <= 0.79345703125) {
                        if (num_valleys <= 68.5) {
                            return 5;
                        } else {
                            if (rr_median <= 70.5) {
                                if (diastolic_area <= -24.220667839050293) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (pp_interval <= 0.20450806617736816) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 0.012240181677043438) {
                                return 4;
                            } else {
                                if (rr_std <= 8.846220016479492) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (pp_interval <= 0.2951538413763046) {
                                return 1;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (ss_std <= 10.320959091186523) {
                if (dist_std <= 0.07690014690160751) {
                    return 1;
                } else {
                    return 3;
                }
            } else {
                if (diastolic_amp <= -2.2451313734054565) {
                    if (ss_median <= 53.75) {
                        return 3;
                    } else {
                        if (ss_std <= 15.301939964294434) {
                            return 5;
                        } else {
                            if (rr_median <= 59.75) {
                                return 4;
                            } else {
                                if (fwhm <= 5.476000070571899) {
                                    return 4;
                                } else {
                                    if (fwhm <= 7.69599986076355) {
                                        return 4;
                                    } else {
                                        if (ss_std <= 26.977651596069336) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (pp_interval <= 0.027106383815407753) {
                        if (num_valleys <= 71.5) {
                            if (fwhm <= 5.23199987411499) {
                                if (ss_median <= 52.25) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        if (diastolic_amp <= -1.9522655606269836) {
                            return 5;
                        } else {
                            if (fwhm <= 7.644000053405762) {
                                if (rr_median <= 68.5) {
                                    return 3;
                                } else {
                                    if (diff_median <= 0.008697197772562504) {
                                        return 3;
                                    } else {
                                        return 1;
                                    }
                                }
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.11415177583694458) {
            if (diastolic_area <= -28.193462371826172) {
                if (diastolic_amp <= -1.3487675786018372) {
                    if (rr_median <= 84.25) {
                        if (systolic_amp <= 3.833222985267639) {
                            if (pp_interval <= 0.6521538496017456) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (rr_median <= 65.5) {
                                if (dist_std <= 0.0536578930914402) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (rr_std <= 9.702898502349854) {
                                    return 5;
                                } else {
                                    if (diastolic_area <= -54.90530586242676) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.5958461463451385) {
                            if (diastolic_amp <= -1.732816219329834) {
                                return 1;
                            } else {
                                return 3;
                            }
                        } else {
                            if (ss_median <= 122.5) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (ss_median <= 69.5) {
                        if (rr_median <= 94.25) {
                            return 3;
                        } else {
                            return 1;
                        }
                    } else {
                        if (dist_median <= -0.00012830040941480547) {
                            if (diff_median <= 0.020434866659343243) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            if (num_peaks <= 136.5) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            } else {
                if (pulse_interval <= 1.0479999780654907) {
                    if (dist_std <= 0.062360743060708046) {
                        if (num_valleys <= 60.0) {
                            if (pp_interval <= 0.5249333381652832) {
                                if (ss_std <= 31.77053737640381) {
                                    return 5;
                                } else {
                                    return 4;
                                }
                            } else {
                                if (systolic_amp <= 3.9456169605255127) {
                                    return 1;
                                } else {
                                    if (systolic_amp <= 4.124427795410156) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 8.146059036254883) {
                                if (diastolic_time <= 0.5011428594589233) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (systolic_time <= 0.44721008837223053) {
                                    return 5;
                                } else {
                                    if (diastolic_time <= 0.25655172020196915) {
                                        return 5;
                                    } else {
                                        if (ss_std <= 9.244351387023926) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 46.5) {
                            if (diastolic_area <= -16.220943927764893) {
                                if (ss_median <= 70.5) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (systolic_time <= 0.8191111087799072) {
                                if (ss_std <= 5.6504963636398315) {
                                    return 3;
                                } else {
                                    if (second_peak_freq <= 0.79345703125) {
                                        if (fwhm <= 7.75600004196167) {
                                            return 2;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        if (ss_median <= 69.75) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            } else {
                                return 2;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 9.248073101043701) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (diastolic_area <= -28.390324592590332) {
                if (rr_std <= 0.5734450221061707) {
                    return 2;
                } else {
                    if (ss_median <= 67.0) {
                        return 3;
                    } else {
                        return 5;
                    }
                }
            } else {
                if (num_peaks <= 108.5) {
                    if (systolic_amp <= 4.662553310394287) {
                        return 2;
                    } else {
                        return 2;
                    }
                } else {
                    if (diff_median <= 0.009838271886110306) {
                        return 5;
                    } else {
                        return 2;
                    }
                }
            }
        }
    }
    );
    votes[20] = (
// Decision rules for tree 20
    if (diastolic_time <= 0.22217777371406555) {
        if (rr_std <= 14.367665767669678) {
            if (pulse_interval <= 0.5841794908046722) {
                if (rr_median <= 68.75) {
                    if (systolic_amp <= 5.160669803619385) {
                        if (systolic_area <= 6.259524583816528) {
                            return 3;
                        } else {
                            if (dist_median <= -0.0007722204318270087) {
                                return 3;
                            } else {
                                if (dist_std <= 0.09395883977413177) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 0.10724886134266853) {
                            return 3;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (rr_std <= 0.2474358230829239) {
                        return 4;
                    } else {
                        if (fwhm <= 6.2799999713897705) {
                            if (dist_median <= 5.232182957115583e-05) {
                                if (pp_interval <= 0.20642424374818802) {
                                    return 0;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (rr_median <= 100.0) {
                                if (systolic_time <= 0.3502608686685562) {
                                    return 5;
                                } else {
                                    if (rr_std <= 0.9387441277503967) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 0.01109861908480525) {
                    if (systolic_time <= 0.7649333477020264) {
                        if (diff_median <= 0.008554288186132908) {
                            return 5;
                        } else {
                            return 5;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (systolic_amp <= 4.182975769042969) {
                        if (rr_median <= 89.25) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        return 3;
                    }
                }
            }
        } else {
            if (systolic_time <= 0.24570434540510178) {
                if (rr_median <= 86.5) {
                    if (num_valleys <= 78.5) {
                        if (dist_std <= 0.11350099742412567) {
                            if (diastolic_area <= -43.2501220703125) {
                                if (diff_median <= 0.011001736391335726) {
                                    return 3;
                                } else {
                                    if (diastolic_time <= 0.14177986979484558) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            } else {
                                if (num_peaks <= 127.5) {
                                    if (systolic_time <= 0.1993170753121376) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    if (systolic_amp <= 4.217864513397217) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (ss_median <= 98.0) {
                        if (diastolic_time <= 0.01662295125424862) {
                            return 0;
                        } else {
                            if (systolic_area <= 46.25031280517578) {
                                if (num_valleys <= 56.5) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            } else {
                if (diastolic_amp <= -3.1684367656707764) {
                    return 4;
                } else {
                    if (dist_std <= 0.06663938984274864) {
                        if (diastolic_time <= 0.06129005737602711) {
                            if (diastolic_time <= 0.0514309536665678) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            if (num_valleys <= 73.5) {
                                if (rr_median <= 98.5) {
                                    return 3;
                                } else {
                                    return 4;
                                }
                            } else {
                                if (ss_std <= 18.985389709472656) {
                                    return 3;
                                } else {
                                    if (pulse_interval <= 0.675599992275238) {
                                        if (pulse_interval <= 0.58338463306427) {
                                            return 1;
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 70.25) {
                            if (diastolic_area <= -28.10493564605713) {
                                return 1;
                            } else {
                                return 4;
                            }
                        } else {
                            if (systolic_time <= 0.5898461639881134) {
                                return 5;
                            } else {
                                return 3;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 69.5) {
            if (dist_std <= 0.10507572442293167) {
                if (pulse_interval <= 0.762800008058548) {
                    if (diastolic_area <= -18.789921760559082) {
                        if (pulse_interval <= 0.5061333179473877) {
                            if (num_peaks <= 97.0) {
                                return 5;
                            } else {
                                return 3;
                            }
                        } else {
                            if (systolic_amp <= 3.954023838043213) {
                                return 5;
                            } else {
                                if (num_valleys <= 51.5) {
                                    return 2;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.4982333332300186) {
                            if (systolic_amp <= 3.853032350540161) {
                                return 1;
                            } else {
                                if (ss_std <= 31.77053737640381) {
                                    return 4;
                                } else {
                                    if (num_peaks <= 83.5) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 59.0) {
                                return 5;
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    if (ss_std <= 47.688331604003906) {
                        if (systolic_area <= 10.914262771606445) {
                            return 1;
                        } else {
                            if (ss_std <= 29.4137601852417) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            } else {
                if (ss_median <= 73.75) {
                    if (diastolic_time <= 0.2603214383125305) {
                        if (fwhm <= 7.7159998416900635) {
                            return 2;
                        } else {
                            return 2;
                        }
                    } else {
                        if (diastolic_amp <= -2.2543327808380127) {
                            if (first_peak_freq <= 0.54931640625) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.33301976323127747) {
                        return 5;
                    } else {
                        return 5;
                    }
                }
            }
        } else {
            if (dist_std <= 0.06375966034829617) {
                if (diastolic_time <= 0.2809973508119583) {
                    return 5;
                } else {
                    if (diastolic_time <= 0.29956695437431335) {
                        return 0;
                    } else {
                        if (diastolic_time <= 0.7475999891757965) {
                            if (diastolic_area <= -17.05986213684082) {
                                if (dist_median <= -0.0004938824567943811) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            return 0;
                        }
                    }
                }
            } else {
                if (pulse_interval <= 0.8330000042915344) {
                    if (systolic_amp <= 4.626971006393433) {
                        if (rr_median <= 69.5) {
                            return 5;
                        } else {
                            return 5;
                        }
                    } else {
                        return 3;
                    }
                } else {
                    return 2;
                }
            }
        }
    }
    );
    votes[21] = (
// Decision rules for tree 21
    if (pulse_interval <= 0.29445651173591614) {
        if (rr_std <= 15.973519802093506) {
            if (rr_median <= 66.5) {
                if (diastolic_amp <= -2.68006694316864) {
                    if (fwhm <= 4.48799991607666) {
                        return 3;
                    } else {
                        return 5;
                    }
                } else {
                    if (diastolic_area <= -5.164334297180176) {
                        return 3;
                    } else {
                        return 3;
                    }
                }
            } else {
                if (systolic_amp <= 1.5624383687973022) {
                    if (fwhm <= 1.1519999504089355) {
                        return 0;
                    } else {
                        return 4;
                    }
                } else {
                    if (systolic_area <= 38.11027908325195) {
                        if (rr_std <= 1.4471983909606934) {
                            return 5;
                        } else {
                            return 5;
                        }
                    } else {
                        if (systolic_time <= 0.13947708904743195) {
                            return 5;
                        } else {
                            return 3;
                        }
                    }
                }
            }
        } else {
            if (fwhm <= 6.471999883651733) {
                if (num_peaks <= 127.0) {
                    if (systolic_area <= 46.35080146789551) {
                        if (diastolic_time <= 0.0435333326458931) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (systolic_amp <= 4.645691633224487) {
                        return 3;
                    } else {
                        return 5;
                    }
                }
            } else {
                if (ss_median <= 54.25) {
                    return 4;
                } else {
                    if (num_valleys <= 72.5) {
                        if (num_valleys <= 47.5) {
                            return 4;
                        } else {
                            if (num_peaks <= 127.0) {
                                return 4;
                            } else {
                                if (rr_median <= 69.5) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 54.689674377441406) {
                            return 5;
                        } else {
                            return 4;
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 0.6821505725383759) {
            if (ss_median <= 74.25) {
                if (num_peaks <= 89.5) {
                    return 2;
                } else {
                    if (dist_std <= 0.13129416853189468) {
                        if (systolic_time <= 0.4991999864578247) {
                            return 3;
                        } else {
                            return 5;
                        }
                    } else {
                        return 2;
                    }
                }
            } else {
                if (rr_std <= 0.4989648014307022) {
                    return 1;
                } else {
                    return 5;
                }
            }
        } else {
            if (diastolic_time <= 0.27103449404239655) {
                if (diastolic_area <= -37.11674118041992) {
                    if (rr_median <= 97.75) {
                        if (ss_std <= 73.09004211425781) {
                            if (diff_median <= 0.020000292919576168) {
                                if (rr_median <= 67.0) {
                                    if (ss_std <= 17.01806926727295) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (num_peaks <= 109.5) {
                                        return 5;
                                    } else {
                                        if (diastolic_area <= -79.68040084838867) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            } else {
                                if (dist_std <= 0.0652759987860918) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (diastolic_area <= -81.4401626586914) {
                            if (systolic_amp <= 4.289059400558472) {
                                if (systolic_area <= 19.208431243896484) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (systolic_amp <= 3.5607370138168335) {
                                if (first_peak_freq <= 0.30517578125) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (pulse_interval <= 0.6504999995231628) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 74.0) {
                        if (rr_std <= 12.600176334381104) {
                            if (num_peaks <= 129.5) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_amp <= -1.9258712530136108) {
                            return 5;
                        } else {
                            if (ss_median <= 73.0) {
                                return 5;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 113.75) {
                    if (rr_std <= 7.789663076400757) {
                        if (fwhm <= 7.04800009727478) {
                            return 3;
                        } else {
                            if (fwhm <= 7.871999979019165) {
                                if (fwhm <= 7.575999975204468) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 108.5) {
                            if (diastolic_time <= 0.6147333383560181) {
                                if (diastolic_area <= -18.127933502197266) {
                                    if (diastolic_amp <= -2.4903833866119385) {
                                        return 2;
                                    } else {
                                        if (systolic_time <= 0.5004833340644836) {
                                            return 2;
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 104.0) {
                                        return 5;
                                    } else {
                                        if (diastolic_time <= 0.41626667976379395) {
                                            return 4;
                                        } else {
                                            return 2;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 0.027637090533971786) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.8466666638851166) {
                                if (pp_interval <= 0.5729230642318726) {
                                    if (pp_interval <= 0.551890105009079) {
                                        if (systolic_time <= 0.4508529454469681) {
                                            return 3;
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (dist_std <= 0.0768120251595974) {
                                        if (rr_std <= 54.212120056152344) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        return 2;
                                    }
                                }
                            } else {
                                return 2;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.6236623227596283) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            }
        }
    }
    );
    votes[22] = (
// Decision rules for tree 22
    if (diastolic_time <= 0.22240635007619858) {
        if (pp_interval <= 0.3188347816467285) {
            if (num_valleys <= 73.5) {
                if (fwhm <= 6.419999837875366) {
                    if (fwhm <= 2.388000011444092) {
                        if (num_peaks <= 122.5) {
                            if (rr_std <= 3.8571856021881104) {
                                if (diastolic_time <= 0.07126403227448463) {
                                    return 5;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (rr_median <= 69.5) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        if (dist_median <= -0.00028103905788157135) {
                            if (systolic_amp <= 3.8552197217941284) {
                                return 3;
                            } else {
                                return 4;
                            }
                        } else {
                            if (dist_std <= 0.09984607249498367) {
                                if (num_peaks <= 119.5) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.08144533634185791) {
                        if (pp_interval <= 0.22060317546129227) {
                            if (diff_median <= 0.01526530459523201) {
                                if (diastolic_amp <= -2.8215065002441406) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                if (dist_median <= -0.0003468597133178264) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        if (rr_std <= 8.392322778701782) {
                            return 1;
                        } else {
                            if (ss_median <= 52.5) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 33.61528205871582) {
                    if (systolic_amp <= 3.816194534301758) {
                        if (rr_std <= 9.46110486984253) {
                            return 3;
                        } else {
                            return 0;
                        }
                    } else {
                        if (ss_std <= 23.093924522399902) {
                            if (rr_std <= 16.077144145965576) {
                                if (diastolic_amp <= -2.6753041744232178) {
                                    return 5;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            return 4;
                        }
                    }
                } else {
                    return 1;
                }
            }
        } else {
            if (diastolic_area <= -81.2696418762207) {
                if (rr_median <= 81.0) {
                    return 3;
                } else {
                    if (ss_median <= 67.75) {
                        return 1;
                    } else {
                        if (diff_median <= 0.0178361926227808) {
                            return 1;
                        } else {
                            if (rr_median <= 106.75) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            } else {
                if (fwhm <= 7.5920000076293945) {
                    if (systolic_amp <= 3.70255970954895) {
                        if (num_peaks <= 135.0) {
                            if (rr_median <= 93.5) {
                                if (rr_std <= 7.235489130020142) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (num_peaks <= 87.5) {
                            return 4;
                        } else {
                            if (rr_median <= 67.0) {
                                if (diastolic_area <= -39.8634090423584) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (systolic_amp <= 4.619338750839233) {
                                    if (diastolic_area <= -54.049808502197266) {
                                        return 5;
                                    } else {
                                        if (diastolic_area <= -29.193279266357422) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    }
                                } else {
                                    if (fwhm <= 6.539999961853027) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (fwhm <= 7.96399998664856) {
                        if (diff_median <= 0.01096124667674303) {
                            return 5;
                        } else {
                            if (pulse_interval <= 0.5477142632007599) {
                                return 1;
                            } else {
                                if (dist_std <= 0.09625465422868729) {
                                    if (num_peaks <= 135.5) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        if (rr_median <= 76.75) {
                            return 3;
                        } else {
                            return 5;
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.055107664316892624) {
            if (num_peaks <= 105.5) {
                if (systolic_area <= 27.43330478668213) {
                    if (pulse_interval <= 0.5947412550449371) {
                        if (dist_median <= -0.00028638268122449517) {
                            return 5;
                        } else {
                            return 5;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (dist_median <= -0.0003483799227979034) {
                        return 4;
                    } else {
                        return 4;
                    }
                }
            } else {
                if (pp_interval <= 0.39808186888694763) {
                    return 3;
                } else {
                    if (diff_median <= 0.024141669273376465) {
                        if (diastolic_time <= 0.6487272679805756) {
                            if (rr_median <= 55.25) {
                                return 0;
                            } else {
                                return 0;
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        if (diastolic_time <= 0.35759006440639496) {
                            return 3;
                        } else {
                            if (rr_median <= 55.75) {
                                return 0;
                            } else {
                                if (diastolic_area <= -18.24729347229004) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 74.25) {
                if (rr_std <= 0.6896102130413055) {
                    if (dist_std <= 0.09838484227657318) {
                        return 3;
                    } else {
                        return 2;
                    }
                } else {
                    if (rr_std <= 13.895294666290283) {
                        if (dist_median <= -0.0002538664048188366) {
                            if (diastolic_amp <= -2.253459334373474) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            if (rr_std <= 1.326809287071228) {
                                return 5;
                            } else {
                                if (dist_std <= 0.11079715564846992) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 90.5) {
                            return 2;
                        } else {
                            if (first_peak_freq <= 0.30517578125) {
                                if (systolic_amp <= 3.735258460044861) {
                                    return 2;
                                } else {
                                    return 0;
                                }
                            } else {
                                if (ss_median <= 52.5) {
                                    return 0;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (systolic_area <= 19.103812217712402) {
                    if (diastolic_area <= -14.837610721588135) {
                        if (dist_median <= -0.0005044199788244441) {
                            return 2;
                        } else {
                            return 5;
                        }
                    } else {
                        if (fwhm <= 7.307999849319458) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (diff_median <= 0.020748826675117016) {
                        if (dist_median <= -0.000509671910549514) {
                            return 5;
                        } else {
                            return 5;
                        }
                    } else {
                        if (dist_std <= 0.08473194390535355) {
                            return 4;
                        } else {
                            return 4;
                        }
                    }
                }
            }
        }
    }
    );
    votes[23] = (
// Decision rules for tree 23
    if (systolic_time <= 0.39411763846874237) {
        if (rr_std <= 14.878895282745361) {
            if (rr_median <= 76.25) {
                if (num_peaks <= 106.5) {
                    if (num_peaks <= 93.0) {
                        return 4;
                    } else {
                        if (dist_std <= 0.13852431625127792) {
                            return 2;
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (systolic_time <= 0.24387096613645554) {
                        if (diff_median <= 0.013345255982130766) {
                            if (systolic_amp <= 0.8332108855247498) {
                                return 4;
                            } else {
                                return 5;
                            }
                        } else {
                            if (diastolic_amp <= -2.0910101532936096) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (systolic_amp <= 4.455759763717651) {
                            return 3;
                        } else {
                            if (dist_median <= 6.248770114325453e-05) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    }
                }
            } else {
                if (pulse_interval <= 0.23357366770505905) {
                    if (rr_std <= 0.6673546731472015) {
                        return 3;
                    } else {
                        if (diastolic_time <= 0.023484754376113415) {
                            return 0;
                        } else {
                            if (diff_median <= 0.011710476595908403) {
                                return 5;
                            } else {
                                if (fwhm <= 6.628000020980835) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_amp <= 4.7459001541137695) {
                        if (ss_std <= 20.807283401489258) {
                            return 5;
                        } else {
                            return 5;
                        }
                    } else {
                        return 3;
                    }
                }
            }
        } else {
            if (dist_std <= 0.0726485326886177) {
                if (fwhm <= 5.583999872207642) {
                    if (systolic_area <= 46.25031280517578) {
                        if (num_peaks <= 126.0) {
                            return 4;
                        } else {
                            return 0;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (ss_median <= 54.25) {
                        return 1;
                    } else {
                        if (ss_median <= 101.25) {
                            if (diastolic_amp <= -3.060145616531372) {
                                return 4;
                            } else {
                                if (systolic_amp <= 4.294923543930054) {
                                    if (systolic_amp <= 4.224756717681885) {
                                        if (diastolic_area <= -41.51703453063965) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    return 4;
                                }
                            }
                        } else {
                            return 4;
                        }
                    }
                }
            } else {
                if (diff_median <= 0.029712499119341373) {
                    if (diastolic_time <= 0.04472222179174423) {
                        if (dist_median <= -0.00013931746798334643) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        if (rr_median <= 92.0) {
                            if (num_peaks <= 111.5) {
                                return 3;
                            } else {
                                return 2;
                            }
                        } else {
                            return 5;
                        }
                    }
                } else {
                    return 4;
                }
            }
        }
    } else {
        if (num_peaks <= 93.5) {
            if (diastolic_time <= 0.634489506483078) {
                if (diastolic_amp <= -2.4603978395462036) {
                    return 5;
                } else {
                    if (ss_std <= 47.59005355834961) {
                        if (systolic_area <= 26.634854316711426) {
                            if (systolic_area <= 17.686028480529785) {
                                if (dist_median <= -0.00036422845732886344) {
                                    return 2;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (diff_median <= 0.02335935737937689) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        return 4;
                    }
                }
            } else {
                if (rr_median <= 79.5) {
                    return 1;
                } else {
                    return 1;
                }
            }
        } else {
            if (diastolic_time <= 0.2590344697237015) {
                if (diastolic_amp <= -1.3771947622299194) {
                    if (diff_median <= 0.023036478087306023) {
                        if (systolic_amp <= 3.408715844154358) {
                            return 3;
                        } else {
                            if (second_peak_freq <= 0.91552734375) {
                                if (first_peak_freq <= 0.18310546875) {
                                    return 5;
                                } else {
                                    if (second_peak_freq <= 0.67138671875) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (ss_median <= 67.5) {
                                    return 3;
                                } else {
                                    if (num_valleys <= 69.5) {
                                        return 1;
                                    } else {
                                        if (diastolic_amp <= -1.5878995656967163) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -31.070392608642578) {
                            if (fwhm <= 7.747999906539917) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (diastolic_area <= -40.95917510986328) {
                        if (rr_median <= 99.25) {
                            if (systolic_time <= 0.7221333384513855) {
                                if (diastolic_amp <= -1.1537044644355774) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (ss_median <= 326.25) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (pp_interval <= 0.5238928496837616) {
                            return 3;
                        } else {
                            if (ss_median <= 90.25) {
                                return 1;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            } else {
                if (pp_interval <= 1.1125714778900146) {
                    if (dist_std <= 0.062360743060708046) {
                        if (num_peaks <= 107.5) {
                            return 5;
                        } else {
                            if (ss_median <= 91.5) {
                                if (rr_std <= 7.789663076400757) {
                                    return 3;
                                } else {
                                    if (first_peak_freq <= 0.67138671875) {
                                        if (diff_median <= 0.028583619743585587) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.04463028348982334) {
                                    return 0;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.8711666464805603) {
                            if (ss_median <= 68.25) {
                                if (fwhm <= 7.5279998779296875) {
                                    return 0;
                                } else {
                                    if (dist_median <= -0.00018466006440576166) {
                                        return 2;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.12903816998004913) {
                                    return 5;
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            return 2;
                        }
                    }
                } else {
                    return 1;
                }
            }
        }
    }
    );
    votes[24] = (
// Decision rules for tree 24
    if (pp_interval <= 0.39163529872894287) {
        if (rr_std <= 14.178498268127441) {
            if (rr_median <= 76.5) {
                if (systolic_amp <= 6.032652378082275) {
                    if (num_peaks <= 106.5) {
                        if (num_valleys <= 56.0) {
                            return 5;
                        } else {
                            return 2;
                        }
                    } else {
                        if (dist_median <= -0.0007611631299369037) {
                            return 3;
                        } else {
                            if (systolic_area <= 41.968772888183594) {
                                if (ss_median <= 51.5) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 3;
                            }
                        }
                    }
                } else {
                    return 4;
                }
            } else {
                if (rr_std <= 0.297559529542923) {
                    return 4;
                } else {
                    if (rr_median <= 105.75) {
                        if (systolic_amp <= 0.5467243790626526) {
                            return 0;
                        } else {
                            if (systolic_area <= 79.25677490234375) {
                                if (rr_std <= 0.8516296148300171) {
                                    return 5;
                                } else {
                                    if (pulse_interval <= 0.32886363565921783) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (num_peaks <= 135.5) {
                if (systolic_time <= 0.22754285484552383) {
                    if (fwhm <= 5.555999994277954) {
                        if (systolic_area <= 45.28114128112793) {
                            if (rr_median <= 67.5) {
                                return 4;
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (pp_interval <= 0.13380606472492218) {
                            return 4;
                        } else {
                            if (systolic_amp <= 3.950466513633728) {
                                return 3;
                            } else {
                                if (dist_median <= -0.00039039968396537006) {
                                    if (pulse_interval <= 0.20149999856948853) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    if (diastolic_area <= -37.44649887084961) {
                                        if (systolic_amp <= 4.743870496749878) {
                                            return 5;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 102.0) {
                        if (dist_median <= -0.00021149738313397393) {
                            if (rr_std <= 53.462018966674805) {
                                if (systolic_amp <= 4.943906545639038) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        if (rr_std <= 36.30284881591797) {
                            if (rr_std <= 23.555675506591797) {
                                return 2;
                            } else {
                                return 3;
                            }
                        } else {
                            return 5;
                        }
                    }
                }
            } else {
                if (num_valleys <= 73.5) {
                    return 3;
                } else {
                    return 5;
                }
            }
        }
    } else {
        if (num_valleys <= 61.5) {
            if (diastolic_area <= -14.550369262695312) {
                if (ss_median <= 74.25) {
                    if (dist_std <= 0.09623928368091583) {
                        if (rr_std <= 16.17813014984131) {
                            if (rr_median <= 67.75) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        if (ss_median <= 69.5) {
                            if (diastolic_amp <= -2.2099382877349854) {
                                return 2;
                            } else {
                                return 3;
                            }
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (systolic_area <= 19.218514442443848) {
                        if (ss_std <= 32.46206474304199) {
                            return 2;
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_area <= -27.431289672851562) {
                            return 5;
                        } else {
                            if (dist_std <= 0.04983473662286997) {
                                return 5;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 97.25) {
                    if (systolic_time <= 1.035999983549118) {
                        if (systolic_area <= 14.988815307617188) {
                            return 2;
                        } else {
                            return 4;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    return 1;
                }
            }
        } else {
            if (pp_interval <= 1.065333366394043) {
                if (diastolic_area <= -28.193462371826172) {
                    if (rr_median <= 99.25) {
                        if (num_peaks <= 130.5) {
                            if (systolic_amp <= 3.680895209312439) {
                                if (diastolic_time <= 0.16088725626468658) {
                                    if (systolic_area <= 19.205504417419434) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                if (ss_std <= 8.998369216918945) {
                                    return 2;
                                } else {
                                    if (rr_median <= 69.75) {
                                        return 1;
                                    } else {
                                        if (ss_median <= 67.5) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (pp_interval <= 0.6500666439533234) {
                                if (pulse_interval <= 0.4502222239971161) {
                                    return 5;
                                } else {
                                    if (num_valleys <= 75.5) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (pp_interval <= 0.8595555424690247) {
                                    return 1;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 100.5) {
                            return 1;
                        } else {
                            if (diastolic_area <= -66.98958778381348) {
                                if (dist_median <= -0.00018824692233465612) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.061293257400393486) {
                        if (pp_interval <= 0.5634945034980774) {
                            if (diastolic_area <= -16.825124740600586) {
                                if (rr_median <= 63.5) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (fwhm <= 7.391999959945679) {
                                    if (fwhm <= 5.480000019073486) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            if (num_valleys <= 68.0) {
                                return 0;
                            } else {
                                if (systolic_amp <= 6.017248868942261) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    } else {
                        if (pp_interval <= 0.8711666464805603) {
                            if (diastolic_area <= -19.956785202026367) {
                                if (systolic_time <= 0.4872500002384186) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (systolic_amp <= 3.8064496517181396) {
                                    return 2;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            return 2;
                        }
                    }
                }
            } else {
                if (systolic_amp <= 3.4452797174453735) {
                    return 1;
                } else {
                    return 1;
                }
            }
        }
    }
    );
    votes[25] = (
// Decision rules for tree 25
    if (pp_interval <= 0.39466315507888794) {
        if (ss_median <= 72.25) {
            if (rr_std <= 14.668342590332031) {
                if (dist_std <= 0.1360260546207428) {
                    if (diastolic_time <= 0.00800000037997961) {
                        if (rr_median <= 82.0) {
                            return 3;
                        } else {
                            return 0;
                        }
                    } else {
                        if (dist_median <= -0.0001727027993183583) {
                            if (fwhm <= 6.700000047683716) {
                                return 3;
                            } else {
                                if (systolic_time <= 0.24387096613645554) {
                                    return 5;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (systolic_amp <= 3.931866407394409) {
                                return 5;
                            } else {
                                if (dist_std <= 0.11708926036953926) {
                                    if (systolic_amp <= 5.2448930740356445) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 1;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 1.917849987745285) {
                        return 2;
                    } else {
                        return 4;
                    }
                }
            } else {
                if (ss_std <= 10.320959091186523) {
                    return 3;
                } else {
                    if (num_peaks <= 136.5) {
                        if (systolic_time <= 0.21785663068294525) {
                            if (dist_std <= 0.09223727136850357) {
                                if (num_peaks <= 129.5) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        return 5;
                    }
                }
            }
        } else {
            if (ss_std <= 13.510254383087158) {
                if (diastolic_time <= 0.06281871907413006) {
                    return 1;
                } else {
                    return 5;
                }
            } else {
                if (rr_std <= 16.15445613861084) {
                    if (systolic_area <= 18.737204551696777) {
                        return 4;
                    } else {
                        if (rr_std <= 1.0993655920028687) {
                            if (diastolic_amp <= -2.2785452604293823) {
                                return 4;
                            } else {
                                return 5;
                            }
                        } else {
                            if (diastolic_area <= -28.529789924621582) {
                                return 3;
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 133.5) {
                        if (ss_std <= 66.13612747192383) {
                            if (diastolic_amp <= -2.2451313734054565) {
                                if (diff_median <= 0.04142606444656849) {
                                    if (systolic_amp <= 4.294923543930054) {
                                        if (ss_median <= 84.0) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    return 4;
                                }
                            } else {
                                if (rr_std <= 41.97377014160156) {
                                    return 5;
                                } else {
                                    return 4;
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        return 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 61.5) {
            if (rr_median <= 84.0) {
                if (dist_std <= 0.13048150390386581) {
                    if (ss_std <= 43.575904846191406) {
                        if (pulse_interval <= 0.5061333477497101) {
                            if (pulse_interval <= 0.4727500081062317) {
                                return 2;
                            } else {
                                return 3;
                            }
                        } else {
                            if (dist_median <= -0.0005326781247276813) {
                                if (diff_median <= 0.01329701766371727) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                if (systolic_amp <= 4.238099455833435) {
                                    if (dist_std <= 0.11163022369146347) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (diastolic_amp <= -2.4281569719314575) {
                        return 5;
                    } else {
                        return 2;
                    }
                }
            } else {
                if (systolic_area <= 22.718785285949707) {
                    if (fwhm <= 7.312000036239624) {
                        if (systolic_amp <= 4.306889295578003) {
                            return 5;
                        } else {
                            return 4;
                        }
                    } else {
                        if (fwhm <= 7.851999998092651) {
                            if (systolic_amp <= 3.975100874900818) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    }
                } else {
                    return 5;
                }
            }
        } else {
            if (diastolic_area <= -28.193462371826172) {
                if (systolic_area <= 18.335881233215332) {
                    if (systolic_time <= 0.675599992275238) {
                        if (rr_median <= 77.5) {
                            if (fwhm <= 5.732000112533569) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (diastolic_area <= -83.29877471923828) {
                            if (systolic_time <= 1.0527619123458862) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            if (ss_median <= 86.75) {
                                if (dist_std <= 0.07184911891818047) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (systolic_amp <= 3.550679564476013) {
                        if (systolic_time <= 0.5558900833129883) {
                            return 3;
                        } else {
                            return 1;
                        }
                    } else {
                        if (rr_median <= 67.0) {
                            return 3;
                        } else {
                            if (ss_std <= 18.125502586364746) {
                                if (rr_median <= 91.75) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (systolic_amp <= 3.882529854774475) {
                                    return 5;
                                } else {
                                    if (dist_median <= -0.0002496553206583485) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 0.06048966757953167) {
                    if (rr_median <= 51.25) {
                        return 1;
                    } else {
                        if (num_peaks <= 110.5) {
                            return 1;
                        } else {
                            if (dist_std <= 0.027760369703173637) {
                                return 0;
                            } else {
                                if (rr_std <= 8.391795873641968) {
                                    return 0;
                                } else {
                                    if (systolic_time <= 0.4805833250284195) {
                                        return 0;
                                    } else {
                                        if (systolic_time <= 0.5165333151817322) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (pp_interval <= 0.8404444456100464) {
                        if (num_peaks <= 129.5) {
                            if (systolic_amp <= 4.150139570236206) {
                                if (ss_std <= 27.253642082214355) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (second_peak_freq <= 0.79345703125) {
                                if (ss_std <= 12.590867519378662) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 119.0) {
                            return 1;
                        } else {
                            return 2;
                        }
                    }
                }
            }
        }
    }
    );
    votes[26] = (
// Decision rules for tree 26
    if (diastolic_time <= 0.20919519662857056) {
        if (rr_median <= 82.75) {
            if (systolic_time <= 0.21438094973564148) {
                if (num_peaks <= 135.5) {
                    if (rr_std <= 13.809631824493408) {
                        if (rr_std <= 2.2720543146133423) {
                            return 3;
                        } else {
                            if (diff_median <= 0.011264841072261333) {
                                return 4;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (pp_interval <= 0.18225297331809998) {
                            if (diff_median <= 0.022031608037650585) {
                                if (ss_std <= 12.840123176574707) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            return 4;
                        }
                    }
                } else {
                    if (rr_median <= 66.5) {
                        return 3;
                    } else {
                        return 5;
                    }
                }
            } else {
                if (rr_std <= 32.4255428314209) {
                    if (dist_median <= 0.0005122197617311031) {
                        if (systolic_area <= 15.56130599975586) {
                            if (systolic_area <= 14.018250465393066) {
                                return 3;
                            } else {
                                return 1;
                            }
                        } else {
                            if (systolic_time <= 0.6558545529842377) {
                                if (systolic_area <= 29.071261405944824) {
                                    if (ss_std <= 77.08591842651367) {
                                        if (rr_std <= 1.0293864607810974) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (rr_median <= 66.5) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (num_peaks <= 120.5) {
                        return 4;
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (dist_std <= 0.034346047788858414) {
                if (pulse_interval <= 0.4003690481185913) {
                    if (ss_std <= 48.58255958557129) {
                        if (num_peaks <= 123.0) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    return 5;
                }
            } else {
                if (pulse_interval <= 0.5300659537315369) {
                    if (diastolic_time <= 0.012326284311711788) {
                        if (rr_std <= 21.30432415008545) {
                            return 0;
                        } else {
                            return 0;
                        }
                    } else {
                        if (systolic_amp <= 7.013828277587891) {
                            if (pulse_interval <= 0.00800000037997961) {
                                return 4;
                            } else {
                                if (dist_median <= 0.00012733476251014508) {
                                    if (ss_median <= 172.25) {
                                        if (dist_median <= -0.00012021832299069501) {
                                            return 5;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            return 4;
                        }
                    }
                } else {
                    if (diastolic_amp <= -1.321727216243744) {
                        if (systolic_amp <= 3.9959299564361572) {
                            return 5;
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_area <= -45.29954719543457) {
                            if (dist_std <= 0.06874027475714684) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.060476282611489296) {
            if (pp_interval <= 0.45610713958740234) {
                if (diff_median <= 0.017688102088868618) {
                    return 5;
                } else {
                    if (rr_std <= 16.29444456100464) {
                        return 3;
                    } else {
                        if (diastolic_amp <= -2.3531869649887085) {
                            return 4;
                        } else {
                            return 0;
                        }
                    }
                }
            } else {
                if (num_valleys <= 65.5) {
                    if (systolic_time <= 0.764088898897171) {
                        if (ss_std <= 63.96192169189453) {
                            if (dist_std <= 0.042379213497042656) {
                                return 5;
                            } else {
                                return 4;
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        if (rr_median <= 81.5) {
                            return 2;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (pulse_interval <= 0.9911428689956665) {
                        if (diastolic_area <= -17.05986213684082) {
                            if (systolic_area <= 14.204782962799072) {
                                return 3;
                            } else {
                                if (systolic_amp <= 4.050557374954224) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            if (systolic_area <= 22.833460807800293) {
                                return 0;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        return 0;
                    }
                }
            }
        } else {
            if (num_valleys <= 63.5) {
                if (ss_median <= 73.75) {
                    if (diastolic_time <= 0.641969233751297) {
                        if (systolic_area <= 24.028996467590332) {
                            if (ss_median <= 63.5) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            if (second_peak_freq <= 0.79345703125) {
                                return 2;
                            } else {
                                if (fwhm <= 6.684000015258789) {
                                    return 2;
                                } else {
                                    if (diff_median <= 0.009727727621793747) {
                                        return 5;
                                    } else {
                                        return 2;
                                    }
                                }
                            }
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (diastolic_time <= 0.6264923214912415) {
                        if (systolic_time <= 0.5087999999523163) {
                            if (dist_median <= -0.0005560103163588792) {
                                if (rr_median <= 86.0) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (pp_interval <= 0.5499999821186066) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        if (ss_std <= 61.16836738586426) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (systolic_time <= 0.7933333218097687) {
                    if (dist_median <= -0.0002805811382131651) {
                        if (num_valleys <= 75.5) {
                            return 5;
                        } else {
                            return 3;
                        }
                    } else {
                        if (dist_std <= 0.08631082624197006) {
                            if (fwhm <= 7.424000024795532) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            if (dist_std <= 0.13267826288938522) {
                                if (systolic_amp <= 4.187720060348511) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 2;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 0.015718314331024885) {
                        return 2;
                    } else {
                        if (systolic_area <= 11.81385087966919) {
                            return 1;
                        } else {
                            return 0;
                        }
                    }
                }
            }
        }
    }
    );
    votes[27] = (
// Decision rules for tree 27
    if (systolic_time <= 0.41874998807907104) {
        if (num_peaks <= 131.5) {
            if (diastolic_area <= -15.292630195617676) {
                if (diastolic_amp <= -2.1461493968963623) {
                    if (rr_median <= 58.75) {
                        if (diastolic_time <= 0.18173865228891373) {
                            return 4;
                        } else {
                            return 3;
                        }
                    } else {
                        if (dist_std <= 0.06516701728105545) {
                            if (first_peak_freq <= 0.54931640625) {
                                if (rr_median <= 77.5) {
                                    if (systolic_time <= 0.14170370250940323) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    if (rr_median <= 79.5) {
                                        return 5;
                                    } else {
                                        if (num_valleys <= 71.0) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (rr_std <= 13.636902809143066) {
                                if (systolic_amp <= 4.865742921829224) {
                                    return 2;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 4;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 67.5) {
                        if (num_valleys <= 65.0) {
                            return 3;
                        } else {
                            return 3;
                        }
                    } else {
                        if (diastolic_area <= -66.10249710083008) {
                            if (diastolic_time <= 0.04607747681438923) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            if (diastolic_amp <= -1.5357372760772705) {
                                if (diastolic_time <= 0.12111498042941093) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            } else {
                if (ss_std <= 9.783548831939697) {
                    return 2;
                } else {
                    if (pulse_interval <= 0.04250292293727398) {
                        return 4;
                    } else {
                        if (systolic_amp <= 3.991636872291565) {
                            return 5;
                        } else {
                            if (dist_std <= 0.07591843977570534) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 64.5) {
                if (ss_median <= 58.25) {
                    return 3;
                } else {
                    if (diastolic_time <= 0.12821920961141586) {
                        return 3;
                    } else {
                        return 3;
                    }
                }
            } else {
                if (systolic_time <= 0.03135593235492706) {
                    return 0;
                } else {
                    if (pulse_interval <= 0.18211179971694946) {
                        if (rr_std <= 16.888758182525635) {
                            return 5;
                        } else {
                            return 4;
                        }
                    } else {
                        if (rr_median <= 96.0) {
                            return 5;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        }
    } else {
        if (diastolic_area <= -18.766629219055176) {
            if (num_valleys <= 61.5) {
                if (diastolic_area <= -28.390324592590332) {
                    if (diastolic_amp <= -2.3618346452713013) {
                        return 2;
                    } else {
                        if (rr_median <= 73.0) {
                            return 3;
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (ss_median <= 74.25) {
                        if (ss_median <= 73.75) {
                            if (diff_median <= 0.017948743887245655) {
                                if (diastolic_amp <= -1.602583110332489) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        if (dist_median <= -0.0005594302783720195) {
                            return 2;
                        } else {
                            return 5;
                        }
                    }
                }
            } else {
                if (rr_median <= 99.25) {
                    if (systolic_time <= 0.5445714294910431) {
                        if (dist_median <= -0.0006604329100809991) {
                            return 5;
                        } else {
                            if (systolic_area <= 26.08424949645996) {
                                if (diastolic_amp <= -2.1347358226776123) {
                                    return 3;
                                } else {
                                    if (diastolic_area <= -55.12590980529785) {
                                        return 3;
                                    } else {
                                        if (ss_std <= 31.176067352294922) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    }
                                }
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (diastolic_area <= -29.52444553375244) {
                            if (rr_median <= 92.0) {
                                if (diff_median <= 0.01909969560801983) {
                                    if (rr_median <= 86.5) {
                                        if (second_peak_freq <= 0.67138671875) {
                                            return 5;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    if (dist_std <= 0.048554157838225365) {
                                        return 3;
                                    } else {
                                        return 1;
                                    }
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (diff_median <= 0.022770288400352) {
                                if (ss_std <= 20.12417221069336) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 3;
                            }
                        }
                    }
                } else {
                    if (diastolic_amp <= -1.430774986743927) {
                        return 5;
                    } else {
                        if (ss_median <= 114.25) {
                            return 1;
                        } else {
                            if (ss_std <= 53.64520072937012) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 70.0) {
                if (diastolic_time <= 0.6243076920509338) {
                    if (pulse_interval <= 0.7991999983787537) {
                        if (diastolic_amp <= -1.702517807483673) {
                            if (dist_median <= -0.000501013666507788) {
                                return 4;
                            } else {
                                return 5;
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        return 2;
                    }
                } else {
                    if (num_peaks <= 119.0) {
                        return 1;
                    } else {
                        return 5;
                    }
                }
            } else {
                if (dist_std <= 0.06048966757953167) {
                    if (rr_std <= 8.257102727890015) {
                        return 0;
                    } else {
                        if (diastolic_amp <= -2.2061885595321655) {
                            if (systolic_amp <= 5.014195680618286) {
                                return 0;
                            } else {
                                return 0;
                            }
                        } else {
                            return 0;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.73298180103302) {
                        return 3;
                    } else {
                        return 5;
                    }
                }
            }
        }
    }
    );
    votes[28] = (
// Decision rules for tree 28
    if (pulse_interval <= 0.24972307682037354) {
        if (rr_std <= 20.21463394165039) {
            if (pp_interval <= 0.04647361859679222) {
                if (num_peaks <= 128.5) {
                    if (diastolic_time <= 0.032289618626236916) {
                        return 3;
                    } else {
                        return 4;
                    }
                } else {
                    if (rr_std <= 9.379612445831299) {
                        return 3;
                    } else {
                        return 0;
                    }
                }
            } else {
                if (num_peaks <= 131.5) {
                    if (dist_std <= 0.05535639449954033) {
                        if (rr_std <= 16.551016807556152) {
                            return 5;
                        } else {
                            return 4;
                        }
                    } else {
                        if (rr_median <= 68.75) {
                            if (pulse_interval <= 0.19048461318016052) {
                                return 3;
                            } else {
                                return 2;
                            }
                        } else {
                            if (diastolic_amp <= -2.257010579109192) {
                                return 3;
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 0.01511240703985095) {
                        return 3;
                    } else {
                        if (pulse_interval <= 0.1237332634627819) {
                            return 3;
                        } else {
                            if (diff_median <= 0.026130186393857002) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_median <= 100.0) {
                if (diastolic_area <= -49.72542762756348) {
                    return 3;
                } else {
                    if (ss_median <= 116.5) {
                        if (dist_std <= 0.09273966774344444) {
                            if (rr_std <= 26.247801780700684) {
                                if (fwhm <= 5.272000074386597) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        return 4;
                    }
                }
            } else {
                if (ss_median <= 95.25) {
                    if (num_peaks <= 107.5) {
                        return 4;
                    } else {
                        return 2;
                    }
                } else {
                    return 1;
                }
            }
        }
    } else {
        if (num_valleys <= 61.5) {
            if (rr_median <= 88.5) {
                if (diastolic_time <= 0.20919519662857056) {
                    if (systolic_time <= 0.433159664273262) {
                        return 4;
                    } else {
                        return 3;
                    }
                } else {
                    if (num_peaks <= 90.5) {
                        if (ss_median <= 74.25) {
                            if (diastolic_area <= -18.574596405029297) {
                                if (diastolic_amp <= -2.4263681173324585) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            if (pulse_interval <= 0.5743516385555267) {
                                return 4;
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        if (dist_std <= 0.13581082969903946) {
                            if (pp_interval <= 0.5817619264125824) {
                                if (rr_median <= 64.25) {
                                    return 3;
                                } else {
                                    if (systolic_area <= 24.623258590698242) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            return 2;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.42093421518802643) {
                    if (diff_median <= 0.027618450112640858) {
                        if (rr_median <= 112.5) {
                            if (dist_std <= 0.10193534567952156) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        if (diastolic_time <= 0.28457407653331757) {
                            return 4;
                        } else {
                            return 4;
                        }
                    }
                } else {
                    if (rr_median <= 110.0) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.26600000262260437) {
                if (rr_median <= 101.0) {
                    if (rr_median <= 75.5) {
                        if (systolic_time <= 0.679999977350235) {
                            if (diastolic_time <= 0.16850177198648453) {
                                if (rr_std <= 16.931042671203613) {
                                    if (ss_median <= 63.5) {
                                        if (num_peaks <= 131.5) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (pp_interval <= 0.4580444395542145) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (pp_interval <= 0.4257213622331619) {
                                    if (ss_median <= 49.5) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (dist_median <= -0.0007147836440708488) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 77.5) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.12887301295995712) {
                            if (first_peak_freq <= 0.30517578125) {
                                if (systolic_amp <= 4.064780950546265) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (diff_median <= 0.014857490547001362) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (dist_median <= -0.00021489129721885547) {
                                if (first_peak_freq <= 0.30517578125) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_time <= 0.10200454294681549) {
                        if (dist_median <= 1.7213955061379238e-05) {
                            if (systolic_amp <= 3.1814463138580322) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (dist_std <= 0.07317448034882545) {
                            return 5;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (pp_interval <= 1.1926667094230652) {
                    if (dist_std <= 0.05706220865249634) {
                        if (systolic_area <= 24.91326904296875) {
                            if (systolic_amp <= 3.4002978801727295) {
                                if (rr_std <= 7.802156209945679) {
                                    return 3;
                                } else {
                                    if (rr_median <= 81.0) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.56142857670784) {
                                    return 0;
                                } else {
                                    if (num_valleys <= 73.5) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        if (diastolic_amp <= -1.7255731225013733) {
                            if (num_peaks <= 131.5) {
                                if (fwhm <= 7.5920000076293945) {
                                    if (num_peaks <= 115.0) {
                                        return 2;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (num_peaks <= 138.0) {
                                return 0;
                            } else {
                                if (fwhm <= 7.283999919891357) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            }
                        }
                    }
                } else {
                    return 1;
                }
            }
        }
    }
    );
    votes[29] = (
// Decision rules for tree 29
    if (systolic_time <= 0.445333331823349) {
        if (rr_median <= 70.25) {
            if (pulse_interval <= 0.2155555561184883) {
                if (rr_std <= 9.526742935180664) {
                    if (second_peak_freq <= 0.79345703125) {
                        return 3;
                    } else {
                        return 3;
                    }
                } else {
                    if (num_valleys <= 71.5) {
                        if (ss_std <= 33.83902931213379) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        if (systolic_amp <= 4.630688190460205) {
                            return 4;
                        } else {
                            if (ss_std <= 14.201849460601807) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            } else {
                if (num_peaks <= 106.5) {
                    if (ss_std <= 2.8168416619300842) {
                        return 2;
                    } else {
                        return 2;
                    }
                } else {
                    if (systolic_amp <= 5.515118598937988) {
                        if (fwhm <= 6.43999981880188) {
                            return 3;
                        } else {
                            if (second_peak_freq <= 1.15966796875) {
                                if (pp_interval <= 0.40554797649383545) {
                                    if (systolic_amp <= 4.721651077270508) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        return 0;
                    }
                }
            }
        } else {
            if (dist_std <= 0.05570308305323124) {
                if (pulse_interval <= 0.29983149468898773) {
                    if (num_peaks <= 137.5) {
                        if (ss_median <= 167.75) {
                            if (first_peak_freq <= 0.30517578125) {
                                if (ss_std <= 22.15377902984619) {
                                    return 5;
                                } else {
                                    return 4;
                                }
                            } else {
                                if (diastolic_time <= 0.09865296632051468) {
                                    if (pulse_interval <= 0.057999998331069946) {
                                        return 4;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    if (fwhm <= 7.876000165939331) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if (ss_median <= 106.5) {
                        if (num_valleys <= 72.0) {
                            if (num_peaks <= 100.5) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        return 4;
                    }
                }
            } else {
                if (num_valleys <= 63.5) {
                    if (diastolic_amp <= -2.2602269649505615) {
                        if (ss_median <= 83.75) {
                            return 2;
                        } else {
                            if (num_peaks <= 86.0) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        if (diff_median <= 0.007692499319091439) {
                            return 4;
                        } else {
                            if (diastolic_amp <= -1.6673011183738708) {
                                return 5;
                            } else {
                                if (dist_median <= -0.00026868024724535644) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    }
                } else {
                    if (pp_interval <= 0.10582040995359421) {
                        return 0;
                    } else {
                        if (diff_median <= 0.009662362281233072) {
                            if (diff_median <= 0.0061282801907509565) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            if (ss_median <= 89.25) {
                                if (diastolic_area <= -24.328292846679688) {
                                    if (fwhm <= 6.139999866485596) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 91.5) {
            if (diastolic_time <= 0.589410275220871) {
                if (fwhm <= 6.712000131607056) {
                    return 4;
                } else {
                    if (diastolic_time <= 0.27618804574012756) {
                        return 2;
                    } else {
                        if (diastolic_time <= 0.5076166689395905) {
                            return 2;
                        } else {
                            return 2;
                        }
                    }
                }
            } else {
                if (ss_median <= 76.75) {
                    return 1;
                } else {
                    if (num_valleys <= 45.5) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.2768571376800537) {
                if (rr_median <= 99.25) {
                    if (diff_median <= 0.019699063152074814) {
                        if (systolic_amp <= 4.529261589050293) {
                            if (diastolic_amp <= -1.127256155014038) {
                                if (num_peaks <= 127.0) {
                                    if (ss_median <= 67.5) {
                                        return 3;
                                    } else {
                                        if (num_peaks <= 108.0) {
                                            return 1;
                                        } else {
                                            return 5;
                                        }
                                    }
                                } else {
                                    if (diastolic_amp <= -1.554808497428894) {
                                        return 3;
                                    } else {
                                        if (rr_median <= 74.0) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        if (dist_std <= 0.04744444414973259) {
                            return 3;
                        } else {
                            if (rr_std <= 9.456094741821289) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (fwhm <= 7.335999965667725) {
                        if (rr_median <= 134.25) {
                            return 5;
                        } else {
                            return 1;
                        }
                    } else {
                        return 1;
                    }
                }
            } else {
                if (systolic_time <= 1.234000027179718) {
                    if (rr_std <= 5.452739238739014) {
                        if (dist_std <= 0.13213153183460236) {
                            if (diff_median <= 0.011246861889958382) {
                                return 5;
                            } else {
                                if (diastolic_time <= 0.46839216351509094) {
                                    return 3;
                                } else {
                                    if (diff_median <= 0.021924762055277824) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        if (num_valleys <= 69.5) {
                            if (rr_std <= 16.773290634155273) {
                                if (fwhm <= 7.823999881744385) {
                                    return 0;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (dist_median <= -0.00038158270763233304) {
                                    return 2;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            if (rr_median <= 53.5) {
                                return 0;
                            } else {
                                if (systolic_time <= 0.9660000205039978) {
                                    if (diff_median <= 0.010975053068250418) {
                                        if (diastolic_area <= -16.865077018737793) {
                                            return 3;
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.5075619220733643) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    return 1;
                }
            }
        }
    }
    );
    votes[30] = (
// Decision rules for tree 30
    if (rr_std <= 0.6935192346572876) {
        if (rr_median <= 82.0) {
            if (diastolic_amp <= -1.4739898443222046) {
                if (diastolic_area <= -36.59299087524414) {
                    return 5;
                } else {
                    if (ss_median <= 74.25) {
                        if (dist_std <= 0.10264686867594719) {
                            return 2;
                        } else {
                            return 2;
                        }
                    } else {
                        return 5;
                    }
                }
            } else {
                return 3;
            }
        } else {
            if (systolic_time <= 0.3216654509305954) {
                return 3;
            } else {
                if (ss_median <= 92.5) {
                    return 1;
                } else {
                    return 5;
                }
            }
        }
    } else {
        if (diastolic_time <= 0.263750821352005) {
            if (pulse_interval <= 0.21576540917158127) {
                if (num_peaks <= 135.5) {
                    if (rr_std <= 14.295872688293457) {
                        if (ss_std <= 31.60111713409424) {
                            if (diff_median <= 0.011236452031880617) {
                                return 4;
                            } else {
                                if (num_peaks <= 108.0) {
                                    return 1;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (diff_median <= 0.023146672174334526) {
                            if (rr_median <= 122.5) {
                                if (rr_std <= 16.006247520446777) {
                                    return 4;
                                } else {
                                    if (dist_median <= 7.229790924156987e-06) {
                                        if (ss_std <= 11.431175231933594) {
                                            return 1;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (fwhm <= 0.06800000369548798) {
                        if (ss_median <= 56.0) {
                            return 3;
                        } else {
                            return 0;
                        }
                    } else {
                        if (rr_median <= 66.5) {
                            return 3;
                        } else {
                            return 3;
                        }
                    }
                }
            } else {
                if (pulse_interval <= 0.6301515400409698) {
                    if (rr_std <= 26.162800788879395) {
                        if (rr_std <= 3.4082432985305786) {
                            if (diastolic_time <= 0.09224999696016312) {
                                if (ss_median <= 91.0) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (pulse_interval <= 0.45764705538749695) {
                                    return 5;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.19298722594976425) {
                                if (systolic_amp <= 4.0490875244140625) {
                                    if (rr_median <= 80.75) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (num_valleys <= 64.0) {
                                        return 5;
                                    } else {
                                        if (fwhm <= 6.823999881744385) {
                                            return 3;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            } else {
                                if (diastolic_amp <= -1.8563070893287659) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        if (diastolic_amp <= -2.1976969242095947) {
                            if (num_peaks <= 100.5) {
                                return 4;
                            } else {
                                return 3;
                            }
                        } else {
                            if (diastolic_amp <= -1.1716217398643494) {
                                if (dist_median <= -0.0002383620012551546) {
                                    return 1;
                                } else {
                                    if (pp_interval <= 0.4859333336353302) {
                                        if (diastolic_time <= 0.09617044404149055) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_amp <= -1.3487034440040588) {
                        if (rr_median <= 62.75) {
                            if (dist_std <= 0.0768376849591732) {
                                return 3;
                            } else {
                                return 1;
                            }
                        } else {
                            if (diastolic_time <= 0.08913843706250191) {
                                return 1;
                            } else {
                                if (ss_std <= 22.57649517059326) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        if (ss_std <= 18.668832778930664) {
                            return 1;
                        } else {
                            if (systolic_amp <= 3.2556334733963013) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.05770806223154068) {
                if (num_peaks <= 107.5) {
                    if (diastolic_amp <= -2.4381892681121826) {
                        if (diastolic_time <= 0.41760000586509705) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        if (diastolic_time <= 0.6243076920509338) {
                            if (systolic_area <= 18.788989067077637) {
                                if (systolic_area <= 14.118247032165527) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (pp_interval <= 1.0025714635849) {
                        if (pulse_interval <= 0.4508529454469681) {
                            return 0;
                        } else {
                            if (systolic_time <= 0.6189230680465698) {
                                if (rr_std <= 8.44036054611206) {
                                    return 0;
                                } else {
                                    if (ss_median <= 53.75) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            } else {
                if (diastolic_area <= -12.916272640228271) {
                    if (dist_median <= -0.0004984616243746132) {
                        if (pulse_interval <= 0.41415204107761383) {
                            return 4;
                        } else {
                            if (systolic_time <= 0.4976000040769577) {
                                return 2;
                            } else {
                                if (num_valleys <= 75.5) {
                                    if (fwhm <= 7.164000034332275) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    return 0;
                                }
                            }
                        }
                    } else {
                        if (second_peak_freq <= 0.79345703125) {
                            if (pulse_interval <= 0.4870000034570694) {
                                return 5;
                            } else {
                                if (dist_std <= 0.07195750996470451) {
                                    return 0;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (ss_std <= 10.515968322753906) {
                                return 3;
                            } else {
                                if (dist_median <= 2.735973794187885e-07) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.8214444518089294) {
                        if (num_peaks <= 102.5) {
                            return 1;
                        } else {
                            return 0;
                        }
                    } else {
                        if (systolic_area <= 11.820463180541992) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    );
    votes[31] = (
// Decision rules for tree 31
    if (pp_interval <= 0.39466315507888794) {
        if (diastolic_area <= -15.292630195617676) {
            if (ss_std <= 17.548457145690918) {
                if (ss_median <= 65.5) {
                    if (num_peaks <= 130.5) {
                        if (diastolic_time <= 0.18998412787914276) {
                            if (num_peaks <= 118.5) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        if (fwhm <= 7.368000030517578) {
                            return 3;
                        } else {
                            return 3;
                        }
                    }
                } else {
                    if (num_peaks <= 106.5) {
                        if (first_peak_freq <= 0.42724609375) {
                            return 2;
                        } else {
                            return 2;
                        }
                    } else {
                        if (diastolic_area <= -34.391157150268555) {
                            if (ss_std <= 11.94719648361206) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            return 5;
                        }
                    }
                }
            } else {
                if (diastolic_amp <= -2.1496055126190186) {
                    if (pp_interval <= 0.11888155713677406) {
                        return 1;
                    } else {
                        if (rr_std <= 14.834352493286133) {
                            if (rr_median <= 64.5) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (pp_interval <= 0.24984242767095566) {
                                if (pp_interval <= 0.14170370250940323) {
                                    return 4;
                                } else {
                                    if (num_valleys <= 66.0) {
                                        if (fwhm <= 7.607999801635742) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                }
                            } else {
                                if (ss_std <= 34.46138000488281) {
                                    return 5;
                                } else {
                                    return 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_median <= 71.25) {
                        return 3;
                    } else {
                        if (ss_std <= 59.69797897338867) {
                            if (pp_interval <= 0.3223571330308914) {
                                if (num_valleys <= 70.5) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 128.5) {
                if (diastolic_time <= 0.1224323995411396) {
                    if (num_valleys <= 54.5) {
                        if (dist_std <= 0.048321306705474854) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        return 4;
                    }
                } else {
                    if (rr_std <= 18.611149787902832) {
                        return 5;
                    } else {
                        if (diastolic_area <= -12.064583778381348) {
                            if (diastolic_amp <= -2.532506227493286) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            return 4;
                        }
                    }
                }
            } else {
                if (fwhm <= 0.06800000369548798) {
                    if (ss_std <= 17.486162662506104) {
                        return 0;
                    } else {
                        return 0;
                    }
                } else {
                    return 3;
                }
            }
        }
    } else {
        if (dist_std <= 0.054036643356084824) {
            if (diastolic_time <= 0.2513815388083458) {
                if (diastolic_time <= 0.09179404005408287) {
                    if (diastolic_amp <= -1.1105066537857056) {
                        if (dist_std <= 0.03813265822827816) {
                            return 1;
                        } else {
                            return 3;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (diastolic_time <= 0.1737780123949051) {
                        if (ss_median <= 70.5) {
                            return 3;
                        } else {
                            return 5;
                        }
                    } else {
                        return 5;
                    }
                }
            } else {
                if (num_valleys <= 67.5) {
                    if (systolic_area <= 17.032511711120605) {
                        if (ss_std <= 29.697958946228027) {
                            return 2;
                        } else {
                            return 0;
                        }
                    } else {
                        if (dist_median <= -0.0003264158294769004) {
                            return 4;
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (num_peaks <= 123.0) {
                        return 0;
                    } else {
                        if (ss_std <= 11.1380934715271) {
                            return 0;
                        } else {
                            if (diastolic_area <= -18.922856330871582) {
                                if (systolic_amp <= 4.438953161239624) {
                                    return 3;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 0;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 56.5) {
                if (diastolic_area <= -14.241752624511719) {
                    if (diastolic_amp <= -1.5611794590950012) {
                        if (ss_median <= 74.25) {
                            if (dist_std <= 0.08843713253736496) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            if (systolic_area <= 17.908655166625977) {
                                return 2;
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (systolic_time <= 0.7720000147819519) {
                        return 1;
                    } else {
                        if (diastolic_time <= 0.7156444489955902) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (diastolic_amp <= -1.3497320413589478) {
                    if (systolic_time <= 0.6939999759197235) {
                        if (dist_std <= 0.13053783029317856) {
                            if (num_peaks <= 129.5) {
                                if (dist_median <= -0.00012051458907080814) {
                                    if (num_peaks <= 119.5) {
                                        if (systolic_time <= 0.4937833398580551) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (rr_median <= 66.5) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                if (ss_std <= 6.185829162597656) {
                                    return 3;
                                } else {
                                    if (dist_std <= 0.06993517279624939) {
                                        return 5;
                                    } else {
                                        if (diff_median <= 0.01915088389068842) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (ss_std <= 7.776890516281128) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        if (diastolic_amp <= -1.4626182913780212) {
                            if (systolic_time <= 0.929500013589859) {
                                if (diastolic_amp <= -1.7122169733047485) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (fwhm <= 7.616000175476074) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            return 0;
                        }
                    }
                } else {
                    if (diastolic_area <= -30.190268516540527) {
                        if (diff_median <= 0.009378952905535698) {
                            return 5;
                        } else {
                            if (ss_median <= 69.25) {
                                return 1;
                            } else {
                                if (diastolic_time <= 0.06995571777224541) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 82.75) {
                            return 3;
                        } else {
                            return 2;
                        }
                    }
                }
            }
        }
    }
    );
    votes[32] = (
// Decision rules for tree 32
    if (pulse_interval <= 0.39466315507888794) {
        if (systolic_area <= 18.916014671325684) {
            if (num_valleys <= 71.0) {
                if (diff_median <= 0.020312221720814705) {
                    if (rr_std <= 2.634317457675934) {
                        return 4;
                    } else {
                        if (diastolic_area <= -8.74268627166748) {
                            return 4;
                        } else {
                            return 4;
                        }
                    }
                } else {
                    return 0;
                }
            } else {
                if (diastolic_time <= 0.00800000037997961) {
                    return 0;
                } else {
                    return 3;
                }
            }
        } else {
            if (rr_std <= 16.939903259277344) {
                if (rr_median <= 68.75) {
                    if (dist_std <= 0.1390446275472641) {
                        if (ss_median <= 82.5) {
                            if (rr_std <= 10.023207187652588) {
                                if (diastolic_amp <= -2.5387156009674072) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (dist_std <= 0.039113499224185944) {
                                    return 5;
                                } else {
                                    if (dist_median <= -0.00019140398944728076) {
                                        return 3;
                                    } else {
                                        return 1;
                                    }
                                }
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        return 2;
                    }
                } else {
                    if (diastolic_area <= -24.328292846679688) {
                        if (ss_std <= 33.08590221405029) {
                            if (rr_median <= 97.5) {
                                if (diff_median <= 0.00858934666030109) {
                                    return 5;
                                } else {
                                    if (rr_std <= 5.5788280963897705) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        if (pp_interval <= 0.3711746037006378) {
                            if (rr_std <= 8.478996992111206) {
                                if (ss_std <= 16.96210765838623) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            return 2;
                        }
                    }
                }
            } else {
                if (diastolic_amp <= -2.110901355743408) {
                    if (ss_std <= 13.65144395828247) {
                        return 5;
                    } else {
                        if (systolic_amp <= 5.763124227523804) {
                            if (systolic_amp <= 4.059525966644287) {
                                return 4;
                            } else {
                                if (num_valleys <= 66.0) {
                                    if (pulse_interval <= 0.2649892419576645) {
                                        if (fwhm <= 7.643999814987183) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    return 4;
                                }
                            }
                        } else {
                            if (systolic_amp <= 8.444361209869385) {
                                return 1;
                            } else {
                                return 4;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 0.008295097853988409) {
                        return 3;
                    } else {
                        if (dist_std <= 0.0692981481552124) {
                            if (num_peaks <= 135.5) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 2;
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.055107664316892624) {
            if (ss_median <= 86.25) {
                if (diastolic_area <= -28.686402320861816) {
                    if (rr_median <= 72.5) {
                        if (diastolic_time <= 0.10043729096651077) {
                            return 3;
                        } else {
                            return 3;
                        }
                    } else {
                        if (ss_std <= 15.580658435821533) {
                            return 5;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (num_valleys <= 58.0) {
                        return 5;
                    } else {
                        if (rr_std <= 11.827144622802734) {
                            if (pp_interval <= 0.5748791396617889) {
                                if (rr_median <= 57.25) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if (systolic_area <= 24.734718322753906) {
                                if (rr_median <= 52.75) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 0;
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 82.25) {
                    if (dist_std <= 0.03778165578842163) {
                        return 0;
                    } else {
                        return 2;
                    }
                } else {
                    if (systolic_amp <= 3.8339247703552246) {
                        if (rr_std <= 9.781404256820679) {
                            return 1;
                        } else {
                            if (systolic_area <= 17.875566482543945) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.41465000808238983) {
                            if (diastolic_amp <= -2.215219497680664) {
                                return 5;
                            } else {
                                if (fwhm <= 7.028000116348267) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_area <= -28.40711212158203) {
                if (diff_median <= 0.009557281155139208) {
                    if (ss_median <= 87.75) {
                        if (fwhm <= 7.516000032424927) {
                            return 3;
                        } else {
                            return 5;
                        }
                    } else {
                        return 5;
                    }
                } else {
                    if (ss_std <= 14.095777034759521) {
                        if (dist_std <= 0.13053783029317856) {
                            if (diff_median <= 0.019769529812037945) {
                                return 3;
                            } else {
                                return 1;
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        if (rr_median <= 88.5) {
                            if (num_valleys <= 77.0) {
                                if (pp_interval <= 0.5645274817943573) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (systolic_time <= 0.5952564179897308) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 0.09427259489893913) {
                    if (rr_median <= 112.0) {
                        if (rr_std <= 17.070897102355957) {
                            if (systolic_amp <= 3.5132648944854736) {
                                return 3;
                            } else {
                                if (systolic_amp <= 4.069248795509338) {
                                    if (systolic_time <= 0.5717802345752716) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            if (rr_std <= 35.70273208618164) {
                                if (num_peaks <= 131.0) {
                                    if (rr_std <= 28.18776798248291) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                if (diastolic_area <= -11.399440288543701) {
                                    return 5;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (ss_std <= 43.7891960144043) {
                        if (diff_median <= 0.01906259637326002) {
                            if (rr_median <= 91.75) {
                                if (num_valleys <= 56.5) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        return 4;
                    }
                }
            }
        }
    }
    );
    votes[33] = (
// Decision rules for tree 33
    if (rr_std <= 0.6935192346572876) {
        if (pp_interval <= 0.37231746315956116) {
            if (ss_median <= 56.25) {
                return 3;
            } else {
                if (diastolic_time <= 0.15634449571371078) {
                    return 4;
                } else {
                    if (ss_median <= 71.0) {
                        return 2;
                    } else {
                        return 5;
                    }
                }
            }
        } else {
            if (ss_median <= 74.25) {
                if (diastolic_area <= -31.378009796142578) {
                    return 2;
                } else {
                    if (diastolic_amp <= -1.5932953357696533) {
                        if (dist_std <= 0.10264686867594719) {
                            return 2;
                        } else {
                            return 2;
                        }
                    } else {
                        return 2;
                    }
                }
            } else {
                if (diastolic_time <= 0.1708979606628418) {
                    return 1;
                } else {
                    return 5;
                }
            }
        }
    } else {
        if (pulse_interval <= 0.5428571701049805) {
            if (pp_interval <= 0.25086450576782227) {
                if (fwhm <= 6.419999837875366) {
                    if (fwhm <= 0.20799999684095383) {
                        if (diastolic_time <= 0.023666667751967907) {
                            if (ss_median <= 49.5) {
                                return 3;
                            } else {
                                if (num_peaks <= 143.5) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        if (rr_median <= 68.75) {
                            if (diastolic_area <= -38.91835594177246) {
                                if (rr_median <= 54.0) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            if (rr_median <= 144.75) {
                                if (rr_std <= 35.38729476928711) {
                                    if (diastolic_area <= -41.33802604675293) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 1;
                                }
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 135.5) {
                        if (ss_std <= 8.4323890209198) {
                            return 3;
                        } else {
                            if (pp_interval <= 0.22754285484552383) {
                                if (rr_std <= 12.098763942718506) {
                                    return 5;
                                } else {
                                    if (ss_median <= 51.5) {
                                        return 4;
                                    } else {
                                        if (fwhm <= 6.991999864578247) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        return 3;
                    }
                }
            } else {
                if (diastolic_time <= 0.2596402019262314) {
                    if (diastolic_area <= -58.97080612182617) {
                        if (ss_median <= 104.0) {
                            if (pp_interval <= 0.33183398842811584) {
                                return 5;
                            } else {
                                if (rr_std <= 11.72912883758545) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (ss_median <= 76.25) {
                            if (diff_median <= 0.02634106855839491) {
                                if (rr_std <= 1.8012535572052002) {
                                    return 3;
                                } else {
                                    if (ss_median <= 53.5) {
                                        if (diastolic_amp <= -2.2117403745651245) {
                                            return 3;
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        if (dist_std <= 0.0605449303984642) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    }
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (systolic_amp <= 5.046988010406494) {
                                if (fwhm <= 6.327999830245972) {
                                    return 5;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 4;
                            }
                        }
                    }
                } else {
                    if (ss_median <= 94.25) {
                        if (num_peaks <= 131.0) {
                            if (rr_std <= 23.720540046691895) {
                                if (systolic_amp <= 4.5555641651153564) {
                                    if (dist_median <= -0.0001284381069126539) {
                                        return 5;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                if (rr_std <= 30.1149320602417) {
                                    return 2;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.3890315741300583) {
                                return 3;
                            } else {
                                if (diastolic_time <= 0.4974117577075958) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 0.01853510830551386) {
                            return 5;
                        } else {
                            if (systolic_amp <= 4.385320425033569) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 69.5) {
                if (ss_std <= 37.61568260192871) {
                    if (rr_std <= 16.663230895996094) {
                        if (diastolic_time <= 0.18583882600069046) {
                            return 1;
                        } else {
                            if (num_peaks <= 112.5) {
                                return 5;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if (systolic_area <= 9.557212829589844) {
                            return 5;
                        } else {
                            if (rr_median <= 99.0) {
                                if (diastolic_time <= 0.3020384609699249) {
                                    return 2;
                                } else {
                                    if (ss_std <= 7.064442157745361) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.6122121214866638) {
                        return 0;
                    } else {
                        if (diastolic_time <= 0.5838666558265686) {
                            if (num_valleys <= 63.5) {
                                return 2;
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -29.94918441772461) {
                    if (diastolic_amp <= -1.3367379903793335) {
                        if (rr_median <= 71.0) {
                            return 1;
                        } else {
                            if (diastolic_amp <= -1.509168565273285) {
                                return 5;
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.8693333268165588) {
                            if (diastolic_time <= 0.11885590478777885) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (dist_std <= 0.0670287050306797) {
                        if (pp_interval <= 1.018071472644806) {
                            if (rr_std <= 8.07284927368164) {
                                return 5;
                            } else {
                                if (systolic_time <= 0.5673589706420898) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (rr_std <= 18.88806915283203) {
                            return 5;
                        } else {
                            return 2;
                        }
                    }
                }
            }
        }
    }
    );
    votes[34] = (
// Decision rules for tree 34
    if (pp_interval <= 0.39466315507888794) {
        if (rr_std <= 17.026229858398438) {
            if (ss_median <= 66.25) {
                if (rr_median <= 91.0) {
                    if (diastolic_amp <= 0.00189301953651011) {
                        if (first_peak_freq <= 0.42724609375) {
                            if (second_peak_freq <= 0.54931640625) {
                                return 3;
                            } else {
                                if (ss_median <= 59.25) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (num_peaks <= 123.0) {
                                if (first_peak_freq <= 0.54931640625) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        return 4;
                    }
                } else {
                    if (systolic_time <= 0.1911180056631565) {
                        return 0;
                    } else {
                        return 5;
                    }
                }
            } else {
                if (ss_median <= 70.5) {
                    if (pulse_interval <= 0.26417454332113266) {
                        return 0;
                    } else {
                        return 2;
                    }
                } else {
                    if (rr_median <= 105.75) {
                        if (diastolic_amp <= -3.352286458015442) {
                            return 4;
                        } else {
                            if (num_valleys <= 55.5) {
                                return 5;
                            } else {
                                if (rr_median <= 76.5) {
                                    if (dist_median <= -0.00017216838750755414) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (dist_std <= 0.08914041146636009) {
                                        return 5;
                                    } else {
                                        return 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (dist_std <= 0.04482884332537651) {
                            return 4;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 136.5) {
                if (diastolic_area <= -69.57123374938965) {
                    if (num_peaks <= 124.0) {
                        return 1;
                    } else {
                        return 3;
                    }
                } else {
                    if (ss_std <= 9.943518161773682) {
                        return 2;
                    } else {
                        if (fwhm <= 6.420000076293945) {
                            if (fwhm <= 3.8480000495910645) {
                                if (fwhm <= 0.13200000673532486) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                if (second_peak_freq <= 0.8544921875) {
                                    return 4;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            if (rr_median <= 109.5) {
                                if (diastolic_time <= 0.4385000020265579) {
                                    if (diastolic_time <= 0.13466666638851166) {
                                        return 4;
                                    } else {
                                        if (diastolic_time <= 0.14667320251464844) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.06474740989506245) {
                    return 0;
                } else {
                    return 5;
                }
            }
        }
    } else {
        if (ss_std <= 5.008764266967773) {
            if (rr_median <= 63.5) {
                return 3;
            } else {
                if (diastolic_time <= 0.22788234800100327) {
                    if (diastolic_time <= 0.08349514380097389) {
                        return 1;
                    } else {
                        return 3;
                    }
                } else {
                    if (dist_std <= 0.08514067158102989) {
                        return 5;
                    } else {
                        if (diff_median <= 0.01543031632900238) {
                            if (diastolic_area <= -27.22755718231201) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            return 2;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 67.5) {
                if (pp_interval <= 0.6758333444595337) {
                    if (num_valleys <= 50.5) {
                        if (diastolic_area <= -17.956480026245117) {
                            if (pp_interval <= 0.48715001344680786) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            if (rr_median <= 82.5) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (ss_std <= 81.39895248413086) {
                            if (diastolic_time <= 0.1352037489414215) {
                                if (second_peak_freq <= 1.03759765625) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (num_peaks <= 84.5) {
                                    return 2;
                                } else {
                                    if (pp_interval <= 0.57309889793396) {
                                        if (pulse_interval <= 0.5018666684627533) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        if (num_valleys <= 62.5) {
                                            return 2;
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            return 0;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.6147333383560181) {
                        if (diastolic_time <= 0.3192533403635025) {
                            if (systolic_area <= 9.977188110351562) {
                                return 5;
                            } else {
                                if (diastolic_amp <= -1.3009265065193176) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (diff_median <= 0.03496808744966984) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        if (ss_std <= 34.85891246795654) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (pp_interval <= 0.5062285661697388) {
                    if (diastolic_area <= -9.865449905395508) {
                        if (pp_interval <= 0.443472221493721) {
                            if (fwhm <= 5.776000022888184) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            if (diastolic_amp <= -1.251980721950531) {
                                if (rr_median <= 68.5) {
                                    return 3;
                                } else {
                                    if (dist_std <= 0.08510830253362656) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if (diastolic_area <= -29.762370109558105) {
                        if (rr_median <= 101.0) {
                            if (ss_median <= 68.0) {
                                if (dist_std <= 0.07365160807967186) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (diastolic_area <= -69.32133865356445) {
                                    return 1;
                                } else {
                                    if (diastolic_amp <= -1.4978511929512024) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.03991451486945152) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (dist_std <= 0.06272408924996853) {
                            if (systolic_time <= 0.9911428689956665) {
                                if (diastolic_time <= 0.2807618975639343) {
                                    return 5;
                                } else {
                                    if (rr_std <= 8.84694766998291) {
                                        return 0;
                                    } else {
                                        if (diff_median <= 0.028583619743585587) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if (pulse_interval <= 0.6613333225250244) {
                                return 3;
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    );
    votes[35] = (
// Decision rules for tree 35
    if (pp_interval <= 0.3954170048236847) {
        if (rr_std <= 14.297130107879639) {
            if (ss_median <= 62.25) {
                if (diff_median <= 0.008525189012289047) {
                    return 5;
                } else {
                    if (rr_median <= 69.75) {
                        if (diff_median <= 0.012200064491480589) {
                            return 3;
                        } else {
                            if (systolic_area <= 40.101139068603516) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        return 0;
                    }
                }
            } else {
                if (ss_median <= 70.5) {
                    if (dist_std <= 0.1348654106259346) {
                        return 0;
                    } else {
                        return 2;
                    }
                } else {
                    if (diastolic_area <= -26.989418029785156) {
                        if (ss_std <= 33.08590221405029) {
                            if (rr_median <= 92.75) {
                                return 3;
                            } else {
                                return 1;
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        if (rr_std <= 0.24494896829128265) {
                            return 4;
                        } else {
                            if (systolic_amp <= 4.28619384765625) {
                                if (dist_median <= -0.00040224025724455714) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (num_peaks <= 132.5) {
                if (dist_std <= 0.12217835336923599) {
                    if (pulse_interval <= 0.28508831560611725) {
                        if (diastolic_area <= -55.763240814208984) {
                            return 1;
                        } else {
                            if (fwhm <= 6.483999967575073) {
                                if (second_peak_freq <= 1.28173828125) {
                                    if (num_valleys <= 52.0) {
                                        return 1;
                                    } else {
                                        if (second_peak_freq <= 0.9765625) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                } else {
                                    return 2;
                                }
                            } else {
                                if (diastolic_area <= -32.308223724365234) {
                                    if (diastolic_time <= 0.17212648689746857) {
                                        if (fwhm <= 7.871999979019165) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    return 4;
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 90.0) {
                            return 4;
                        } else {
                            if (dist_std <= 0.05894632823765278) {
                                return 3;
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    return 5;
                }
            } else {
                if (num_peaks <= 138.5) {
                    if (rr_std <= 30.880839347839355) {
                        return 4;
                    } else {
                        return 3;
                    }
                } else {
                    return 5;
                }
            }
        }
    } else {
        if (num_valleys <= 62.5) {
            if (ss_median <= 74.25) {
                if (rr_std <= 42.28405570983887) {
                    if (diastolic_amp <= -1.5370411276817322) {
                        if (diastolic_time <= 0.5076166689395905) {
                            if (diastolic_area <= -28.40711212158203) {
                                return 2;
                            } else {
                                if (systolic_area <= 19.354406356811523) {
                                    return 2;
                                } else {
                                    if (dist_std <= 0.08929256722331047) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 54.5) {
                                return 2;
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        return 3;
                    }
                } else {
                    return 1;
                }
            } else {
                if (diastolic_time <= 0.6980000138282776) {
                    if (ss_median <= 105.0) {
                        if (num_peaks <= 100.0) {
                            if (systolic_area <= 18.648919105529785) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (pulse_interval <= 0.6353333592414856) {
                            if (diastolic_amp <= -2.2154934406280518) {
                                return 4;
                            } else {
                                return 0;
                            }
                        } else {
                            if (dist_std <= 0.055811816826462746) {
                                return 2;
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    return 1;
                }
            }
        } else {
            if (diastolic_time <= 0.2768571376800537) {
                if (diastolic_amp <= -1.1333153247833252) {
                    if (ss_median <= 59.25) {
                        if (dist_std <= 0.07748997583985329) {
                            if (second_peak_freq <= 0.54931640625) {
                                return 1;
                            } else {
                                return 3;
                            }
                        } else {
                            if (diastolic_time <= 0.1501382514834404) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diastolic_amp <= -1.428479552268982) {
                            if (fwhm <= 7.687999963760376) {
                                if (ss_median <= 67.5) {
                                    if (dist_median <= -0.0003003361343871802) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (rr_median <= 102.0) {
                                        if (ss_std <= 20.47061538696289) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                if (diastolic_time <= 0.1367160864174366) {
                                    return 1;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (rr_std <= 0.6661548614501953) {
                                return 5;
                            } else {
                                if (rr_median <= 98.0) {
                                    if (systolic_amp <= 4.047275543212891) {
                                        if (first_peak_freq <= 0.30517578125) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (diastolic_amp <= -1.256017029285431) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -67.03025817871094) {
                        return 1;
                    } else {
                        if (systolic_area <= 15.952743530273438) {
                            return 5;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (pp_interval <= 1.2230857610702515) {
                    if (systolic_time <= 0.5784615576267242) {
                        if (num_peaks <= 123.0) {
                            return 5;
                        } else {
                            if (dist_std <= 0.057930925861001015) {
                                if (rr_median <= 78.0) {
                                    if (diastolic_time <= 0.5077333152294159) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (num_valleys <= 69.5) {
                            if (dist_std <= 0.07956066355109215) {
                                if (rr_std <= 15.43813419342041) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            if (rr_std <= 7.802156209945679) {
                                return 5;
                            } else {
                                if (ss_median <= 83.25) {
                                    return 0;
                                } else {
                                    if (ss_std <= 55.266530990600586) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    return 1;
                }
            }
        }
    }
    );
    votes[36] = (
// Decision rules for tree 36
    if (diastolic_time <= 0.22240635007619858) {
        if (systolic_time <= 0.25333333015441895) {
            if (num_peaks <= 136.5) {
                if (fwhm <= 6.711999893188477) {
                    if (fwhm <= 0.5839999914169312) {
                        if (diastolic_area <= -2.3719913959503174) {
                            if (diastolic_area <= -8.607444763183594) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_time <= 0.07042810320854187) {
                            if (dist_std <= 0.05993743613362312) {
                                return 1;
                            } else {
                                return 5;
                            }
                        } else {
                            if (ss_std <= 24.664998054504395) {
                                return 3;
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (ss_std <= 13.066861152648926) {
                        if (diastolic_amp <= -1.1722216606140137) {
                            return 3;
                        } else {
                            return 1;
                        }
                    } else {
                        if (pp_interval <= 0.2008170709013939) {
                            if (diff_median <= 0.015299269463866949) {
                                if (rr_std <= 12.376441955566406) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                if (diastolic_amp <= -2.7564449310302734) {
                                    return 4;
                                } else {
                                    if (fwhm <= 7.639999866485596) {
                                        return 4;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        } else {
                            return 4;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.00800000037997961) {
                    if (ss_median <= 52.0) {
                        return 3;
                    } else {
                        return 0;
                    }
                } else {
                    if (ss_std <= 16.534043312072754) {
                        return 5;
                    } else {
                        return 3;
                    }
                }
            }
        } else {
            if (rr_median <= 98.5) {
                if (rr_median <= 72.75) {
                    if (systolic_time <= 0.6356666684150696) {
                        if (diff_median <= 0.02663191221654415) {
                            if (systolic_area <= 30.005340576171875) {
                                if (diastolic_time <= 0.11768634989857674) {
                                    if (systolic_area <= 19.756674766540527) {
                                        if (rr_median <= 61.25) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (pp_interval <= 0.5112000107765198) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        if (num_valleys <= 78.5) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (diastolic_area <= -70.08413696289062) {
                        if (diff_median <= 0.014677163679152727) {
                            if (systolic_area <= 22.81603240966797) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (fwhm <= 7.1600000858306885) {
                            if (second_peak_freq <= 1.03759765625) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            if (second_peak_freq <= 0.79345703125) {
                                return 5;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            } else {
                if (systolic_amp <= 3.029995560646057) {
                    return 4;
                } else {
                    if (diastolic_amp <= -1.4324424266815186) {
                        if (systolic_area <= 22.290980339050293) {
                            return 1;
                        } else {
                            return 5;
                        }
                    } else {
                        if (fwhm <= 6.7159998416900635) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_area <= -17.762471199035645) {
                if (rr_median <= 66.25) {
                    if (num_valleys <= 51.5) {
                        return 2;
                    } else {
                        if (diastolic_time <= 0.3285942077636719) {
                            return 3;
                        } else {
                            return 3;
                        }
                    }
                } else {
                    if (ss_std <= 22.000972747802734) {
                        if (diff_median <= 0.03141077049076557) {
                            if (num_peaks <= 115.5) {
                                if (num_peaks <= 105.5) {
                                    if (rr_median <= 86.5) {
                                        if (first_peak_freq <= 0.91552734375) {
                                            return 2;
                                        } else {
                                            return 2;
                                        }
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    return 2;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_area <= -20.776066780090332) {
                            if (dist_std <= 0.12705186754465103) {
                                if (pp_interval <= 0.47974999248981476) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (diastolic_area <= -19.766736030578613) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6350666582584381) {
                    if (num_peaks <= 94.5) {
                        if (systolic_area <= 20.948699951171875) {
                            return 2;
                        } else {
                            if (ss_median <= 96.5) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        if (rr_median <= 76.0) {
                            if (rr_std <= 16.010982036590576) {
                                return 0;
                            } else {
                                return 2;
                            }
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (systolic_area <= 15.269032001495361) {
                        if (dist_std <= 0.07877739518880844) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        if (rr_std <= 8.125082731246948) {
                            return 5;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (dist_std <= 0.059801796451210976) {
                if (systolic_time <= 0.4527352899312973) {
                    if (diff_median <= 0.0298029612749815) {
                        return 5;
                    } else {
                        return 3;
                    }
                } else {
                    if (rr_std <= 8.07284927368164) {
                        return 0;
                    } else {
                        if (diastolic_area <= -15.2860107421875) {
                            if (systolic_time <= 0.5906666815280914) {
                                return 0;
                            } else {
                                if (rr_std <= 11.656665325164795) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            return 0;
                        }
                    }
                }
            } else {
                if (systolic_area <= 12.951149940490723) {
                    return 1;
                } else {
                    if (dist_std <= 0.07209363207221031) {
                        if (num_peaks <= 136.0) {
                            return 5;
                        } else {
                            return 0;
                        }
                    } else {
                        if (diastolic_area <= -19.353843688964844) {
                            if (num_valleys <= 74.5) {
                                return 5;
                            } else {
                                return 3;
                            }
                        } else {
                            return 5;
                        }
                    }
                }
            }
        }
    }
    );
    votes[37] = (
// Decision rules for tree 37
    if (pp_interval <= 0.29445651173591614) {
        if (rr_std <= 16.8529052734375) {
            if (rr_std <= 0.15713484585285187) {
                return 4;
            } else {
                if (fwhm <= 0.04399999976158142) {
                    if (rr_median <= 82.0) {
                        return 3;
                    } else {
                        return 0;
                    }
                } else {
                    if (rr_median <= 68.75) {
                        if (diff_median <= 0.011758338194340467) {
                            return 4;
                        } else {
                            if (rr_std <= 9.862521648406982) {
                                if (dist_std <= 0.06261307932436466) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (rr_median <= 55.25) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 61.37664985656738) {
                            if (ss_std <= 37.43960762023926) {
                                if (dist_std <= 0.09558088332414627) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (rr_std <= 5.074783563613892) {
                                return 3;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (ss_std <= 10.318543434143066) {
                if (second_peak_freq <= 1.15966796875) {
                    return 3;
                } else {
                    return 2;
                }
            } else {
                if (num_peaks <= 135.5) {
                    if (fwhm <= 6.415999889373779) {
                        if (fwhm <= 0.30800000578165054) {
                            return 4;
                        } else {
                            if (ss_std <= 25.323762893676758) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.13429655134677887) {
                            return 4;
                        } else {
                            if (diastolic_amp <= -2.4214062690734863) {
                                if (ss_std <= 34.777849197387695) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                if (diastolic_amp <= -2.327431082725525) {
                                    return 4;
                                } else {
                                    if (second_peak_freq <= 0.732421875) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    return 5;
                }
            }
        }
    } else {
        if (num_valleys <= 61.5) {
            if (diastolic_area <= -18.025259017944336) {
                if (ss_median <= 74.25) {
                    if (rr_median <= 66.0) {
                        if (ss_std <= 6.090713024139404) {
                            return 3;
                        } else {
                            return 2;
                        }
                    } else {
                        if (diastolic_area <= -31.72511386871338) {
                            return 5;
                        } else {
                            if (diff_median <= 0.02105989307165146) {
                                if (rr_std <= 27.003253936767578) {
                                    if (dist_std <= 0.10264686867594719) {
                                        return 2;
                                    } else {
                                        if (ss_std <= 23.00343418121338) {
                                            return 2;
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    return 2;
                                }
                            } else {
                                return 2;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 20.942448616027832) {
                        if (diastolic_time <= 0.226028673350811) {
                            return 4;
                        } else {
                            return 2;
                        }
                    } else {
                        if (rr_std <= 21.353434562683105) {
                            if (diastolic_time <= 0.2750203013420105) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            return 4;
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.6233333349227905) {
                    if (rr_std <= 18.469050884246826) {
                        return 0;
                    } else {
                        if (systolic_area <= 19.61982250213623) {
                            if (diastolic_time <= 0.41805000603199005) {
                                return 1;
                            } else {
                                return 2;
                            }
                        } else {
                            return 4;
                        }
                    }
                } else {
                    if (diff_median <= 0.033440178260207176) {
                        if (rr_median <= 111.75) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        return 2;
                    }
                }
            }
        } else {
            if (ss_median <= 81.75) {
                if (dist_std <= 0.06410246528685093) {
                    if (diastolic_area <= -28.193462371826172) {
                        if (rr_median <= 72.5) {
                            if (systolic_time <= 0.6463333368301392) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (diastolic_area <= -86.28232192993164) {
                                return 1;
                            } else {
                                if (diastolic_amp <= -1.4089500904083252) {
                                    return 5;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.44948528707027435) {
                            if (rr_median <= 65.5) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            if (diastolic_time <= 0.2591056674718857) {
                                return 0;
                            } else {
                                if (ss_std <= 9.087397575378418) {
                                    return 0;
                                } else {
                                    if (rr_std <= 8.869647979736328) {
                                        return 0;
                                    } else {
                                        if (rr_median <= 52.75) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (ss_std <= 11.765705585479736) {
                        if (rr_median <= 64.5) {
                            if (systolic_area <= 19.061039924621582) {
                                return 1;
                            } else {
                                return 3;
                            }
                        } else {
                            if (diff_median <= 0.014727110508829355) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (systolic_area <= 20.5807466506958) {
                            if (diastolic_area <= -27.67568302154541) {
                                if (pulse_interval <= 0.6781454682350159) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            if (dist_median <= -0.00011769811317208223) {
                                if (dist_median <= -0.000507835007738322) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 3;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.0996599942445755) {
                    if (ss_median <= 96.75) {
                        return 3;
                    } else {
                        if (dist_std <= 0.03948493115603924) {
                            return 1;
                        } else {
                            if (pulse_interval <= 0.4078461527824402) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (pulse_interval <= 1.1633333563804626) {
                        if (diastolic_amp <= -1.3217154741287231) {
                            if (diastolic_time <= 0.2983376532793045) {
                                if (pp_interval <= 0.5707692503929138) {
                                    if (fwhm <= 7.128000020980835) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                if (systolic_amp <= 4.0691200494766235) {
                                    if (diastolic_area <= -10.602683544158936) {
                                        return 5;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            if (diff_median <= 0.008816244546324015) {
                                return 5;
                            } else {
                                if (num_peaks <= 131.0) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            }
        }
    }
    );
    votes[38] = (
// Decision rules for tree 38
    if (pulse_interval <= 0.31316085159778595) {
        if (num_valleys <= 72.5) {
            if (rr_std <= 12.6700439453125) {
                if (dist_std <= 0.03867989592254162) {
                    return 4;
                } else {
                    if (systolic_amp <= 4.971599578857422) {
                        if (rr_median <= 105.75) {
                            if (ss_std <= 8.89062237739563) {
                                return 2;
                            } else {
                                if (diastolic_area <= -6.598896741867065) {
                                    return 5;
                                } else {
                                    return 4;
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (num_peaks <= 113.5) {
                            return 3;
                        } else {
                            return 3;
                        }
                    }
                }
            } else {
                if (ss_std <= 10.432629585266113) {
                    return 3;
                } else {
                    if (rr_median <= 86.25) {
                        if (diastolic_time <= 0.1736646518111229) {
                            if (num_valleys <= 51.0) {
                                return 4;
                            } else {
                                if (diastolic_time <= 0.14426908642053604) {
                                    return 4;
                                } else {
                                    if (systolic_amp <= 4.294923543930054) {
                                        return 4;
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        } else {
                            if (diastolic_amp <= -2.4346117973327637) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        if (fwhm <= 6.380000114440918) {
                            if (fwhm <= 1.5720000267028809) {
                                return 0;
                            } else {
                                return 1;
                            }
                        } else {
                            if (dist_median <= -0.00022176198399392888) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (ss_std <= 20.47457981109619) {
                if (systolic_amp <= 4.611430883407593) {
                    if (rr_median <= 78.75) {
                        return 3;
                    } else {
                        return 1;
                    }
                } else {
                    return 5;
                }
            } else {
                if (diastolic_area <= -15.105939865112305) {
                    if (pulse_interval <= 0.18341196328401566) {
                        return 4;
                    } else {
                        if (rr_std <= 13.791637420654297) {
                            return 3;
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (diff_median <= 0.017655604518949986) {
                        return 1;
                    } else {
                        return 0;
                    }
                }
            }
        }
    } else {
        if (diastolic_time <= 0.2615884244441986) {
            if (diastolic_area <= -70.02167892456055) {
                if (rr_median <= 88.75) {
                    if (ss_std <= 27.66844654083252) {
                        return 3;
                    } else {
                        return 1;
                    }
                } else {
                    if (ss_std <= 16.118875980377197) {
                        return 1;
                    } else {
                        if (dist_std <= 0.07603618130087852) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (rr_median <= 66.25) {
                    if (pp_interval <= 0.6383076906204224) {
                        if (fwhm <= 5.799999952316284) {
                            if (systolic_area <= 20.514619827270508) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (systolic_time <= 0.49266667664051056) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (rr_median <= 99.5) {
                        if (dist_median <= -0.000492426916025579) {
                            if (diastolic_time <= 0.16088725626468658) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            if (systolic_amp <= 3.567054867744446) {
                                if (second_peak_freq <= 0.79345703125) {
                                    return 5;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (dist_median <= 6.214366658241488e-05) {
                                    if (ss_std <= 15.016972064971924) {
                                        return 5;
                                    } else {
                                        if (diastolic_amp <= -1.762186884880066) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    }
                                } else {
                                    return 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 25.231708526611328) {
                            if (systolic_time <= 0.7056000232696533) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 3;
                        }
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.6636363565921783) {
                if (num_valleys <= 69.5) {
                    if (ss_std <= 31.069954872131348) {
                        if (diastolic_area <= -16.232748985290527) {
                            if (diastolic_amp <= -2.5170446634292603) {
                                return 5;
                            } else {
                                if (num_peaks <= 98.5) {
                                    if (diff_median <= 0.007991257589310408) {
                                        if (dist_std <= 0.1339973583817482) {
                                            return 5;
                                        } else {
                                            return 2;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.49790000915527344) {
                                            return 2;
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.573846161365509) {
                                        if (first_peak_freq <= 0.30517578125) {
                                            return 5;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 2;
                                    }
                                }
                            }
                        } else {
                            if (pulse_interval <= 0.7969777882099152) {
                                return 0;
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        if (rr_std <= 46.04456329345703) {
                            if (pp_interval <= 0.660400003194809) {
                                if (diastolic_amp <= -1.7817176580429077) {
                                    if (diff_median <= 0.025214292109012604) {
                                        return 5;
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (dist_std <= 0.06396328657865524) {
                        if (rr_median <= 55.75) {
                            if (num_valleys <= 76.5) {
                                return 3;
                            } else {
                                return 0;
                            }
                        } else {
                            if (systolic_amp <= 3.0811315774917603) {
                                return 0;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.596190482378006) {
                            return 5;
                        } else {
                            return 2;
                        }
                    }
                }
            } else {
                if (rr_std <= 8.479978561401367) {
                    if (systolic_area <= 16.030516624450684) {
                        return 5;
                    } else {
                        return 5;
                    }
                } else {
                    if (num_valleys <= 69.0) {
                        if (rr_median <= 79.5) {
                            return 1;
                        } else {
                            if (diastolic_amp <= -1.581746518611908) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.9715000092983246) {
                            return 0;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    );
    votes[39] = (
// Decision rules for tree 39
    if (diastolic_time <= 0.26343898475170135) {
        if (pulse_interval <= 0.3188347816467285) {
            if (ss_std <= 10.413447380065918) {
                if (diastolic_time <= 0.19751843065023422) {
                    if (num_peaks <= 130.5) {
                        if (diastolic_area <= -40.44354438781738) {
                            return 1;
                        } else {
                            return 4;
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (dist_std <= 0.14430928230285645) {
                        return 2;
                    } else {
                        return 2;
                    }
                }
            } else {
                if (rr_std <= 16.826666831970215) {
                    if (diastolic_amp <= -0.06367583200335503) {
                        if (ss_median <= 57.25) {
                            if (diff_median <= 0.008685328532010317) {
                                return 1;
                            } else {
                                if (fwhm <= 2.7479999661445618) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            if (rr_median <= 68.75) {
                                if (ss_std <= 29.51645565032959) {
                                    return 4;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (fwhm <= 2.515999913215637) {
                                    return 1;
                                } else {
                                    if (diastolic_area <= -4.43813955783844) {
                                        return 5;
                                    } else {
                                        return 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (num_peaks <= 132.0) {
                            if (diff_median <= 0.010256996378302574) {
                                return 4;
                            } else {
                                return 3;
                            }
                        } else {
                            return 0;
                        }
                    }
                } else {
                    if (diastolic_area <= -58.084672927856445) {
                        if (num_peaks <= 127.0) {
                            return 1;
                        } else {
                            return 5;
                        }
                    } else {
                        if (num_valleys <= 72.5) {
                            if (num_peaks <= 132.5) {
                                if (pp_interval <= 0.22765714675188065) {
                                    if (diastolic_amp <= -2.372348427772522) {
                                        if (systolic_amp <= 5.070106506347656) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            if (diff_median <= 0.015415837056934834) {
                                return 4;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (systolic_time <= 0.6472727358341217) {
                if (systolic_area <= 22.676063537597656) {
                    if (diff_median <= 0.02635531034320593) {
                        if (diastolic_amp <= -1.137259066104889) {
                            if (rr_median <= 100.25) {
                                if (dist_median <= 0.00010325627954443917) {
                                    if (ss_median <= 86.5) {
                                        if (num_peaks <= 118.5) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        return 4;
                    }
                } else {
                    if (fwhm <= 7.880000114440918) {
                        if (diastolic_amp <= -1.4288590550422668) {
                            if (diff_median <= 0.012211340479552746) {
                                if (diff_median <= 0.007524868007749319) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (systolic_area <= 29.417163848876953) {
                                return 1;
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (num_peaks <= 125.5) {
                            return 3;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (diastolic_area <= -71.95707321166992) {
                    if (rr_median <= 81.0) {
                        return 1;
                    } else {
                        if (rr_median <= 106.5) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (ss_median <= 62.25) {
                        if (rr_median <= 55.0) {
                            return 1;
                        } else {
                            return 3;
                        }
                    } else {
                        if (fwhm <= 7.364000082015991) {
                            return 5;
                        } else {
                            if (diastolic_area <= -45.38540840148926) {
                                return 1;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (rr_std <= 0.6796177625656128) {
            if (ss_median <= 69.5) {
                if (systolic_amp <= 4.063703894615173) {
                    return 3;
                } else {
                    return 2;
                }
            } else {
                if (diastolic_time <= 0.5084166526794434) {
                    return 2;
                } else {
                    return 2;
                }
            }
        } else {
            if (num_peaks <= 128.0) {
                if (pulse_interval <= 0.7982222139835358) {
                    if (ss_median <= 79.5) {
                        if (dist_median <= -0.0004392179980641231) {
                            if (num_peaks <= 90.0) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            if (diastolic_time <= 0.4564705938100815) {
                                if (dist_std <= 0.07436930760741234) {
                                    return 0;
                                } else {
                                    if (dist_median <= -7.939347233332228e-05) {
                                        return 2;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (first_peak_freq <= 0.30517578125) {
                                    return 2;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        if (diastolic_amp <= -2.20712149143219) {
                            if (systolic_amp <= 4.94647216796875) {
                                if (diastolic_amp <= -2.387160301208496) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            if (pulse_interval <= 0.53206667304039) {
                                if (pulse_interval <= 0.44058333337306976) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (ss_std <= 61.12092208862305) {
                                    return 5;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 35.60639572143555) {
                        if (diastolic_time <= 0.6016484797000885) {
                            return 2;
                        } else {
                            if (num_valleys <= 48.5) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (first_peak_freq <= 0.30517578125) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 7.609926223754883) {
                    return 3;
                } else {
                    if (dist_std <= 0.05554366298019886) {
                        if (rr_median <= 55.75) {
                            if (diastolic_amp <= -1.692125141620636) {
                                return 3;
                            } else {
                                return 0;
                            }
                        } else {
                            if (num_peaks <= 133.0) {
                                return 0;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        return 2;
                    }
                }
            }
        }
    }
    );
    votes[40] = (
// Decision rules for tree 40
    if (pp_interval <= 0.3946749120950699) {
        if (rr_median <= 64.5) {
            if (num_valleys <= 73.5) {
                if (rr_std <= 14.177024841308594) {
                    if (diastolic_time <= 0.14697887748479843) {
                        if (fwhm <= 0.8760000169277191) {
                            return 3;
                        } else {
                            return 3;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (pulse_interval <= 0.2209460362792015) {
                        if (diastolic_area <= -46.6078987121582) {
                            return 3;
                        } else {
                            if (rr_std <= 17.142677307128906) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        if (fwhm <= 7.039999961853027) {
                            return 3;
                        } else {
                            return 2;
                        }
                    }
                }
            } else {
                if (num_peaks <= 133.5) {
                    if (diastolic_time <= 0.12883508205413818) {
                        return 1;
                    } else {
                        return 3;
                    }
                } else {
                    if (dist_std <= 0.05125879496335983) {
                        return 3;
                    } else {
                        return 3;
                    }
                }
            }
        } else {
            if (rr_std <= 14.367665767669678) {
                if (rr_median <= 103.5) {
                    if (rr_median <= 68.25) {
                        return 2;
                    } else {
                        if (systolic_amp <= 1.3799352645874023) {
                            return 0;
                        } else {
                            if (systolic_amp <= 4.845610618591309) {
                                if (pulse_interval <= 0.3476017415523529) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (dist_std <= 0.07083985581994057) {
                                    return 5;
                                } else {
                                    if (first_peak_freq <= 0.18310546875) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 21.88162899017334) {
                        return 4;
                    } else {
                        return 1;
                    }
                }
            } else {
                if (num_valleys <= 72.5) {
                    if (num_peaks <= 127.5) {
                        if (fwhm <= 5.415999889373779) {
                            if (systolic_area <= 36.371437072753906) {
                                return 4;
                            } else {
                                return 1;
                            }
                        } else {
                            if (rr_std <= 16.78186798095703) {
                                return 4;
                            } else {
                                if (num_valleys <= 44.5) {
                                    return 4;
                                } else {
                                    if (dist_std <= 0.09089192375540733) {
                                        if (second_peak_freq <= 1.03759765625) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 45.72131156921387) {
                            return 3;
                        } else {
                            return 4;
                        }
                    }
                } else {
                    if (pulse_interval <= 0.19797179847955704) {
                        if (diastolic_amp <= -1.8345494270324707) {
                            return 4;
                        } else {
                            return 3;
                        }
                    } else {
                        return 5;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 62.5) {
            if (diastolic_area <= -17.762471199035645) {
                if (diastolic_area <= -28.390324592590332) {
                    if (fwhm <= 7.7840001583099365) {
                        if (diastolic_amp <= -1.5463312864303589) {
                            if (diastolic_amp <= -2.2327468395233154) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (diastolic_time <= 0.4794999957084656) {
                        if (rr_std <= 27.415703773498535) {
                            if (systolic_amp <= 3.398781895637512) {
                                return 2;
                            } else {
                                if (diff_median <= 0.006769327912479639) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            return 2;
                        }
                    } else {
                        if (systolic_amp <= 3.71173357963562) {
                            return 2;
                        } else {
                            if (diastolic_area <= -21.287994384765625) {
                                return 5;
                            } else {
                                return 2;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 0.03644131124019623) {
                    if (num_peaks <= 91.5) {
                        if (diff_median <= 0.03219367749989033) {
                            return 1;
                        } else {
                            return 1;
                        }
                    } else {
                        if (diastolic_time <= 0.7520000040531158) {
                            return 2;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    return 2;
                }
            }
        } else {
            if (dist_std <= 0.06017766892910004) {
                if (num_peaks <= 133.5) {
                    if (ss_std <= 18.11159324645996) {
                        if (ss_median <= 73.75) {
                            if (second_peak_freq <= 0.67138671875) {
                                return 0;
                            } else {
                                return 0;
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        if (rr_std <= 29.329044342041016) {
                            if (diastolic_time <= 0.3219693526625633) {
                                if (diastolic_area <= -66.76284217834473) {
                                    if (rr_median <= 101.5) {
                                        return 3;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if (diastolic_amp <= -1.8334973454475403) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.5983333587646484) {
                        if (fwhm <= 6.955999851226807) {
                            if (diastolic_time <= 0.27589333057403564) {
                                return 3;
                            } else {
                                return 0;
                            }
                        } else {
                            if (diastolic_time <= 0.3890315741300583) {
                                if (fwhm <= 7.7840001583099365) {
                                    return 5;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (diastolic_time <= 0.4957999885082245) {
                                    return 0;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -29.58330249786377) {
                            if (rr_median <= 123.5) {
                                if (rr_std <= 21.447056770324707) {
                                    if (diastolic_amp <= -1.509168565273285) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 1;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (pulse_interval <= 0.812888890504837) {
                                return 0;
                            } else {
                                if (dist_std <= 0.03969132341444492) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -48.15698432922363) {
                    if (systolic_amp <= 3.564511775970459) {
                        return 1;
                    } else {
                        if (dist_std <= 0.08056047558784485) {
                            return 1;
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (pp_interval <= 0.8404444456100464) {
                        if (num_peaks <= 129.5) {
                            if (dist_std <= 0.09519394859671593) {
                                if (diff_median <= 0.010269626043736935) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (systolic_area <= 20.837289810180664) {
                                    if (diastolic_time <= 0.22549103945493698) {
                                        return 1;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    if (diastolic_amp <= -1.7051917910575867) {
                                        return 3;
                                    } else {
                                        return 5;
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.680363655090332) {
                                if (systolic_area <= 24.827271461486816) {
                                    if (rr_std <= 1.1714500784873962) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.8235555589199066) {
                            return 2;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    );
    votes[41] = (
// Decision rules for tree 41
    if (num_peaks <= 131.5) {
        if (systolic_time <= 0.3683454543352127) {
            if (rr_std <= 13.915556907653809) {
                if (diastolic_amp <= -0.8687350749969482) {
                    if (dist_std <= 0.1390446275472641) {
                        if (ss_median <= 81.0) {
                            if (diff_median <= 0.0066953597124665976) {
                                return 5;
                            } else {
                                if (num_peaks <= 119.5) {
                                    if (fwhm <= 6.328000068664551) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (systolic_amp <= 5.457833528518677) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 86.5) {
                                return 4;
                            } else {
                                if (diastolic_time <= 0.15811915695667267) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        return 2;
                    }
                } else {
                    if (dist_median <= -0.00011159232235513628) {
                        return 4;
                    } else {
                        return 5;
                    }
                }
            } else {
                if (ss_median <= 181.25) {
                    if (ss_std <= 7.395183563232422) {
                        return 3;
                    } else {
                        if (num_valleys <= 72.5) {
                            if (diff_median <= 0.04018101468682289) {
                                if (num_peaks <= 74.5) {
                                    return 4;
                                } else {
                                    if (systolic_area <= 36.01823806762695) {
                                        if (num_peaks <= 79.5) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        if (ss_median <= 58.0) {
                                            return 3;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 81.0) {
                                    return 1;
                                } else {
                                    return 4;
                                }
                            }
                        } else {
                            if (rr_std <= 30.020880699157715) {
                                if (rr_median <= 71.5) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    return 1;
                }
            }
        } else {
            if (diastolic_time <= 0.6263999938964844) {
                if (diastolic_time <= 0.24945376813411713) {
                    if (diff_median <= 0.019855324178934097) {
                        if (diastolic_amp <= -1.3217154741287231) {
                            if (fwhm <= 6.960000038146973) {
                                if (diastolic_amp <= -2.1794763803482056) {
                                    return 4;
                                } else {
                                    if (dist_median <= -0.00020303294149925932) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.423184394836426) {
                                    if (num_peaks <= 114.5) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (dist_std <= 0.11761898174881935) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 84.75) {
                                if (num_peaks <= 121.0) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (dist_median <= -0.00016430368850706145) {
                                    if (fwhm <= 7.523999929428101) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 0.02877100557088852) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (num_peaks <= 97.5) {
                        if (systolic_time <= 0.4414744973182678) {
                            return 5;
                        } else {
                            if (ss_median <= 74.25) {
                                if (num_valleys <= 54.5) {
                                    return 2;
                                } else {
                                    if (diff_median <= 0.00947092054411769) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                }
                            } else {
                                if (rr_std <= 15.449340343475342) {
                                    return 5;
                                } else {
                                    if (second_peak_freq <= 0.67138671875) {
                                        return 1;
                                    } else {
                                        return 2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_std <= 8.998369216918945) {
                            if (dist_std <= 0.13581082969903946) {
                                return 5;
                            } else {
                                return 2;
                            }
                        } else {
                            if (pp_interval <= 0.53206667304039) {
                                if (fwhm <= 6.559999942779541) {
                                    return 0;
                                } else {
                                    if (diastolic_area <= -23.376140594482422) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                if (dist_median <= -0.0005972820799797773) {
                                    return 2;
                                } else {
                                    if (dist_std <= 0.04533375985920429) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (ss_std <= 26.84052848815918) {
                    return 1;
                } else {
                    if (systolic_amp <= 3.916599988937378) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            }
        }
    } else {
        if (diastolic_time <= 0.2809973508119583) {
            if (ss_median <= 64.25) {
                if (rr_median <= 67.25) {
                    if (dist_std <= 0.06529655307531357) {
                        if (diff_median <= 0.013345255982130766) {
                            return 3;
                        } else {
                            return 3;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (diastolic_amp <= -0.3189898729324341) {
                        if (dist_std <= 0.06657166965305805) {
                            return 1;
                        } else {
                            return 3;
                        }
                    } else {
                        return 0;
                    }
                }
            } else {
                if (diastolic_amp <= -1.4309828281402588) {
                    if (ss_std <= 13.217352390289307) {
                        return 3;
                    } else {
                        if (num_valleys <= 72.5) {
                            if (rr_std <= 9.509005546569824) {
                                return 1;
                            } else {
                                return 4;
                            }
                        } else {
                            if (ss_std <= 26.95235252380371) {
                                if (diff_median <= 0.013643932528793812) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (ss_std <= 25.400927543640137) {
                        if (diastolic_time <= 0.1279486119747162) {
                            return 1;
                        } else {
                            return 5;
                        }
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.6999636292457581) {
                if (rr_std <= 7.802156209945679) {
                    if (systolic_area <= 19.527265548706055) {
                        return 5;
                    } else {
                        return 3;
                    }
                } else {
                    if (pp_interval <= 0.46050000190734863) {
                        return 3;
                    } else {
                        if (dist_std <= 0.06811406090855598) {
                            if (diff_median <= 0.028583619743585587) {
                                return 0;
                            } else {
                                if (ss_std <= 13.408280849456787) {
                                    if (diastolic_time <= 0.5061333328485489) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            return 2;
                        }
                    }
                }
            } else {
                return 2;
            }
        }
    }
    );
    votes[42] = (
// Decision rules for tree 42
    if (num_peaks <= 133.5) {
        if (ss_median <= 74.25) {
            if (num_valleys <= 61.5) {
                if (systolic_area <= 13.384815216064453) {
                    if (rr_std <= 25.52720832824707) {
                        return 4;
                    } else {
                        return 1;
                    }
                } else {
                    if (diastolic_time <= 0.20749928802251816) {
                        if (dist_std <= 0.10125984624028206) {
                            return 5;
                        } else {
                            return 3;
                        }
                    } else {
                        if (diastolic_amp <= -1.5735769867897034) {
                            if (diff_median <= 0.031204579398036003) {
                                if (ss_median <= 61.25) {
                                    return 2;
                                } else {
                                    if (num_peaks <= 88.5) {
                                        return 2;
                                    } else {
                                        if (pp_interval <= 0.3209018111228943) {
                                            return 2;
                                        } else {
                                            return 2;
                                        }
                                    }
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            return 3;
                        }
                    }
                }
            } else {
                if (pulse_interval <= 0.22159477323293686) {
                    if (fwhm <= 7.46399998664856) {
                        if (num_valleys <= 72.5) {
                            if (dist_std <= 0.08802777156233788) {
                                if (ss_std <= 15.25638484954834) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            return 3;
                        }
                    } else {
                        if (diastolic_amp <= -2.3684221506118774) {
                            if (systolic_area <= 54.957902908325195) {
                                return 5;
                            } else {
                                return 4;
                            }
                        } else {
                            return 4;
                        }
                    }
                } else {
                    if (systolic_area <= 22.589107513427734) {
                        if (dist_std <= 0.0834432803094387) {
                            if (diastolic_area <= -28.495018005371094) {
                                if (num_peaks <= 126.5) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (dist_median <= -8.748353138798848e-06) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            if (diastolic_time <= 0.18358585983514786) {
                                return 1;
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        if (pulse_interval <= 0.48000000417232513) {
                            if (diastolic_time <= 0.25399331748485565) {
                                if (diff_median <= 0.0077444075141102076) {
                                    return 5;
                                } else {
                                    if (fwhm <= 7.180000066757202) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 10.031668186187744) {
                                    return 5;
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            return 5;
                        }
                    }
                }
            }
        } else {
            if (pp_interval <= 0.39466315507888794) {
                if (diastolic_time <= 0.1139594204723835) {
                    if (systolic_time <= 0.04647361859679222) {
                        if (fwhm <= 7.968000173568726) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        if (systolic_amp <= 4.821296453475952) {
                            if (pp_interval <= 0.27485714852809906) {
                                if (ss_median <= 79.0) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (rr_median <= 87.0) {
                                return 3;
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (diastolic_amp <= -2.1707065105438232) {
                        if (rr_std <= 17.30941104888916) {
                            return 5;
                        } else {
                            if (dist_std <= 0.08233557268977165) {
                                if (rr_median <= 78.75) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.2076607123017311) {
                            return 4;
                        } else {
                            return 5;
                        }
                    }
                }
            } else {
                if (ss_median <= 103.5) {
                    if (rr_median <= 111.25) {
                        if (dist_median <= -0.00040993244329001755) {
                            if (systolic_area <= 16.41725730895996) {
                                return 2;
                            } else {
                                if (diastolic_amp <= -1.4293074011802673) {
                                    return 5;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (ss_median <= 91.75) {
                                if (ss_median <= 85.5) {
                                    if (num_peaks <= 104.0) {
                                        return 5;
                                    } else {
                                        if (diastolic_amp <= -1.5395753383636475) {
                                            return 1;
                                        } else {
                                            return 5;
                                        }
                                    }
                                } else {
                                    return 1;
                                }
                            } else {
                                if (diff_median <= 0.013761989306658506) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (rr_median <= 80.25) {
                        if (dist_std <= 0.0362950824201107) {
                            return 0;
                        } else {
                            if (systolic_area <= 13.270267963409424) {
                                return 2;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diff_median <= 0.010473390109837055) {
                            if (dist_std <= 0.06292484328150749) {
                                return 1;
                            } else {
                                return 5;
                            }
                        } else {
                            if (dist_median <= -0.0009435117826797068) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (systolic_time <= 0.46844445168972015) {
            if (diastolic_amp <= -0.051213815808296204) {
                if (rr_median <= 66.5) {
                    if (ss_std <= 20.553022384643555) {
                        if (rr_std <= 8.803699016571045) {
                            return 3;
                        } else {
                            return 3;
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (rr_median <= 91.5) {
                        if (ss_median <= 73.25) {
                            return 5;
                        } else {
                            return 3;
                        }
                    } else {
                        if (num_valleys <= 74.5) {
                            return 5;
                        } else {
                            return 5;
                        }
                    }
                }
            } else {
                if (first_peak_freq <= 0.18310546875) {
                    return 3;
                } else {
                    return 0;
                }
            }
        } else {
            if (diastolic_area <= -28.164544105529785) {
                if (diastolic_area <= -73.45933532714844) {
                    if (diastolic_amp <= -1.1746655702590942) {
                        return 1;
                    } else {
                        return 1;
                    }
                } else {
                    if (ss_std <= 13.678163528442383) {
                        return 3;
                    } else {
                        if (dist_std <= 0.035870665684342384) {
                            return 5;
                        } else {
                            if (systolic_amp <= 4.237628936767578) {
                                return 1;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            } else {
                if (dist_std <= 0.0642373152077198) {
                    if (pp_interval <= 0.5634945034980774) {
                        if (second_peak_freq <= 0.54931640625) {
                            return 2;
                        } else {
                            if (pp_interval <= 0.5221333205699921) {
                                return 0;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if (dist_median <= -0.0003172494034515694) {
                        return 2;
                    } else {
                        return 3;
                    }
                }
            }
        }
    }
    );
    votes[43] = (
// Decision rules for tree 43
    if (systolic_time <= 0.3921058773994446) {
        if (dist_std <= 0.05570308305323124) {
            if (diastolic_area <= -51.45614814758301) {
                if (diastolic_area <= -96.37032318115234) {
                    if (dist_median <= -0.0002853815822163597) {
                        return 5;
                    } else {
                        return 1;
                    }
                } else {
                    return 3;
                }
            } else {
                if (num_peaks <= 136.5) {
                    if (pulse_interval <= 0.31694546341896057) {
                        if (diff_median <= 0.013504157774150372) {
                            if (ss_std <= 60.63649559020996) {
                                if (first_peak_freq <= 0.54931640625) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            } else {
                                return 4;
                            }
                        } else {
                            if (diff_median <= 0.017812388949096203) {
                                if (diff_median <= 0.01526530459523201) {
                                    return 4;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (dist_median <= -0.0009217751503456384) {
                                    return 1;
                                } else {
                                    return 4;
                                }
                            }
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (rr_median <= 67.25) {
                        return 3;
                    } else {
                        if (systolic_time <= 0.07791666686534882) {
                            return 0;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (diastolic_amp <= -0.6782793700695038) {
                if (num_peaks <= 88.5) {
                    if (ss_median <= 83.5) {
                        return 3;
                    } else {
                        if (diastolic_time <= 0.3478809595108032) {
                            return 4;
                        } else {
                            return 4;
                        }
                    }
                } else {
                    if (ss_std <= 12.555360794067383) {
                        if (dist_median <= -0.00013522929657483473) {
                            if (diastolic_time <= 0.2526250034570694) {
                                if (fwhm <= 7.063999891281128) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            if (num_valleys <= 68.5) {
                                return 2;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (rr_median <= 75.0) {
                            if (systolic_time <= 0.1445709727704525) {
                                return 4;
                            } else {
                                if (dist_std <= 0.10543391108512878) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (systolic_amp <= 5.188109636306763) {
                                if (diastolic_time <= 0.1375754401087761) {
                                    if (diff_median <= 0.011603718623518944) {
                                        if (diastolic_amp <= -1.4324774146080017) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                if (num_peaks <= 126.0) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_median <= 76.25) {
                    if (rr_std <= 10.125677585601807) {
                        return 3;
                    } else {
                        return 4;
                    }
                } else {
                    if (num_valleys <= 68.5) {
                        return 4;
                    } else {
                        return 2;
                    }
                }
            }
        }
    } else {
        if (num_valleys <= 62.5) {
            if (diastolic_time <= 0.6243076920509338) {
                if (ss_median <= 74.25) {
                    if (ss_median <= 69.25) {
                        if (diastolic_amp <= -1.4918876886367798) {
                            if (diastolic_area <= -27.68989086151123) {
                                return 5;
                            } else {
                                if (diastolic_amp <= -2.2182376384735107) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            if (diastolic_amp <= -1.4183011651039124) {
                                return 3;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (systolic_amp <= 4.578664302825928) {
                            if (fwhm <= 7.635999917984009) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (ss_std <= 86.4481315612793) {
                        if (rr_std <= 15.449340343475342) {
                            if (diastolic_amp <= -1.8591147661209106) {
                                return 5;
                            } else {
                                return 1;
                            }
                        } else {
                            if (diff_median <= 0.015519838780164719) {
                                return 5;
                            } else {
                                if (pp_interval <= 0.5645274519920349) {
                                    return 4;
                                } else {
                                    if (pp_interval <= 0.8775000274181366) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                }
                            }
                        }
                    } else {
                        return 0;
                    }
                }
            } else {
                if (num_peaks <= 89.5) {
                    if (dist_median <= -0.0010547126294113696) {
                        return 1;
                    } else {
                        return 1;
                    }
                } else {
                    return 1;
                }
            }
        } else {
            if (dist_std <= 0.05842995084822178) {
                if (diastolic_area <= -30.2261381149292) {
                    if (diastolic_amp <= -1.1217657923698425) {
                        if (rr_median <= 85.0) {
                            if (diastolic_time <= 0.09252562373876572) {
                                return 3;
                            } else {
                                if (diastolic_time <= 0.1077297292649746) {
                                    return 5;
                                } else {
                                    if (systolic_area <= 18.78749942779541) {
                                        return 3;
                                    } else {
                                        return 1;
                                    }
                                }
                            }
                        } else {
                            if (dist_std <= 0.03385294787585735) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.07412328943610191) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (systolic_time <= 1.075785756111145) {
                        if (systolic_time <= 0.5634945034980774) {
                            if (diff_median <= 0.013911687768995762) {
                                if (dist_median <= -0.00024043645680649206) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                if (rr_median <= 58.0) {
                                    return 3;
                                } else {
                                    if (diastolic_area <= -16.864482879638672) {
                                        return 5;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            if (rr_median <= 53.5) {
                                return 3;
                            } else {
                                if (diastolic_time <= 0.28202298283576965) {
                                    return 0;
                                } else {
                                    if (dist_std <= 0.02820040751248598) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            } else {
                if (num_peaks <= 129.5) {
                    if (diff_median <= 0.01795648504048586) {
                        if (diastolic_amp <= -1.2066575288772583) {
                            if (ss_std <= 55.383670806884766) {
                                if (dist_std <= 0.12574288994073868) {
                                    if (pulse_interval <= 0.6919636428356171) {
                                        if (ss_std <= 30.78846836090088) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (pulse_interval <= 0.6224848628044128) {
                            return 1;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (diastolic_amp <= -1.1904261112213135) {
                        if (systolic_time <= 0.6780000030994415) {
                            if (systolic_area <= 24.827271461486816) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            if (diastolic_time <= 0.39673181623220444) {
                                return 1;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        return 1;
                    }
                }
            }
        }
    }
    );
    votes[44] = (
// Decision rules for tree 44
    if (diastolic_time <= 0.26275861263275146) {
        if (systolic_time <= 0.2155555561184883) {
            if (rr_std <= 16.15445613861084) {
                if (rr_median <= 90.75) {
                    if (diastolic_area <= -14.597774982452393) {
                        if (num_peaks <= 117.5) {
                            return 3;
                        } else {
                            if (systolic_area <= 71.70293045043945) {
                                if (diastolic_area <= -39.6158390045166) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        if (diff_median <= 0.011533988174051046) {
                            return 4;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (diastolic_time <= 0.012326284311711788) {
                        return 0;
                    } else {
                        if (diff_median <= 0.007196544436737895) {
                            return 4;
                        } else {
                            return 1;
                        }
                    }
                }
            } else {
                if (ss_median <= 97.75) {
                    if (ss_std <= 10.432629585266113) {
                        return 3;
                    } else {
                        if (diastolic_time <= 0.02462295163422823) {
                            return 0;
                        } else {
                            if (dist_std <= 0.09462304413318634) {
                                if (diff_median <= 0.01732842344790697) {
                                    if (ss_std <= 38.940269470214844) {
                                        if (diastolic_time <= 0.17329207062721252) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    if (dist_std <= 0.04201292805373669) {
                                        return 4;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 3;
                            }
                        }
                    }
                } else {
                    return 1;
                }
            }
        } else {
            if (diastolic_area <= -83.76430130004883) {
                if (rr_median <= 119.0) {
                    if (rr_median <= 76.5) {
                        return 3;
                    } else {
                        if (diastolic_amp <= -1.201494038105011) {
                            if (diastolic_time <= 0.07171283662319183) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            return 1;
                        }
                    }
                } else {
                    return 1;
                }
            } else {
                if (rr_median <= 72.25) {
                    if (num_valleys <= 51.5) {
                        return 4;
                    } else {
                        if (pulse_interval <= 0.6834545433521271) {
                            if (num_peaks <= 125.5) {
                                if (pp_interval <= 0.5087999999523163) {
                                    if (rr_median <= 59.0) {
                                        if (rr_std <= 11.080791473388672) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        if (ss_std <= 10.645902633666992) {
                                            return 2;
                                        } else {
                                            return 3;
                                        }
                                    }
                                } else {
                                    return 5;
                                }
                            } else {
                                if (rr_std <= 26.156354904174805) {
                                    if (num_valleys <= 69.5) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (fwhm <= 7.6519999504089355) {
                                return 3;
                            } else {
                                return 1;
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 91.5) {
                        return 4;
                    } else {
                        if (rr_median <= 102.5) {
                            if (ss_std <= 41.61481857299805) {
                                if (pp_interval <= 0.6134615242481232) {
                                    if (systolic_time <= 0.4393986910581589) {
                                        if (diff_median <= 0.011964249424636364) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        if (rr_median <= 89.5) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    }
                                } else {
                                    if (first_peak_freq <= 0.30517578125) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                if (dist_std <= 0.06619023159146309) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (dist_std <= 0.035870665684342384) {
                                return 4;
                            } else {
                                if (rr_std <= 29.82318687438965) {
                                    if (ss_std <= 14.10512638092041) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    return 5;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 124.5) {
            if (diastolic_time <= 0.6157333254814148) {
                if (systolic_time <= 0.29445651173591614) {
                    if (second_peak_freq <= 1.03759765625) {
                        return 4;
                    } else {
                        return 4;
                    }
                } else {
                    if (ss_median <= 73.75) {
                        if (dist_std <= 0.1016620397567749) {
                            if (ss_median <= 62.5) {
                                if (pp_interval <= 0.5174285769462585) {
                                    return 3;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (ss_std <= 20.36390209197998) {
                                if (num_valleys <= 61.5) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                if (systolic_time <= 0.5136000216007233) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            }
                        }
                    } else {
                        if (dist_median <= -0.00044664206507150084) {
                            if (pp_interval <= 0.49918332695961) {
                                return 4;
                            } else {
                                if (systolic_time <= 0.9697142839431763) {
                                    if (diastolic_time <= 0.4527333229780197) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            if (dist_std <= 0.056144699454307556) {
                                return 0;
                            } else {
                                if (systolic_amp <= 4.152977466583252) {
                                    if (diastolic_time <= 0.4385526329278946) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (systolic_time <= 0.7742666602134705) {
                    if (rr_std <= 29.105377197265625) {
                        return 5;
                    } else {
                        return 1;
                    }
                } else {
                    if (systolic_amp <= 3.969966173171997) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (pulse_interval <= 0.5645897388458252) {
                if (diff_median <= 0.012693190947175026) {
                    if (fwhm <= 7.395999908447266) {
                        return 0;
                    } else {
                        return 0;
                    }
                } else {
                    if (rr_median <= 65.5) {
                        return 3;
                    } else {
                        return 5;
                    }
                }
            } else {
                if (systolic_time <= 0.8709999918937683) {
                    if (diastolic_area <= -20.894965171813965) {
                        return 0;
                    } else {
                        if (dist_std <= 0.05928224138915539) {
                            if (pp_interval <= 0.8146666586399078) {
                                return 0;
                            } else {
                                return 0;
                            }
                        } else {
                            return 0;
                        }
                    }
                } else {
                    if (dist_median <= -0.00027037615654990077) {
                        return 2;
                    } else {
                        return 0;
                    }
                }
            }
        }
    }
    );
    votes[45] = (
// Decision rules for tree 45
    if (diastolic_time <= 0.27718518674373627) {
        if (pulse_interval <= 0.2459999993443489) {
            if (diastolic_area <= -59.78046417236328) {
                if (ss_median <= 147.5) {
                    if (dist_median <= -0.0002638719306560233) {
                        return 3;
                    } else {
                        return 3;
                    }
                } else {
                    return 1;
                }
            } else {
                if (fwhm <= 6.711999893188477) {
                    if (num_peaks <= 126.0) {
                        if (rr_std <= 16.51509952545166) {
                            if (num_valleys <= 51.5) {
                                return 4;
                            } else {
                                if (ss_std <= 20.73461151123047) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            if (dist_std <= 0.07983433455228806) {
                                return 4;
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        if (diastolic_amp <= -1.309823453426361) {
                            if (rr_median <= 71.75) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            if (rr_median <= 78.75) {
                                return 3;
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    if (dist_std <= 0.11760768294334412) {
                        if (ss_std <= 15.771332263946533) {
                            if (diff_median <= 0.012344400398433208) {
                                return 4;
                            } else {
                                return 5;
                            }
                        } else {
                            if (diastolic_area <= 1.684658408164978) {
                                if (first_peak_freq <= 0.42724609375) {
                                    return 4;
                                } else {
                                    if (num_peaks <= 123.5) {
                                        if (pulse_interval <= 0.16375362128019333) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    } else {
                                        if (pulse_interval <= 0.18411394953727722) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        return 3;
                    }
                }
            }
        } else {
            if (rr_median <= 83.0) {
                if (num_peaks <= 105.5) {
                    if (rr_median <= 54.5) {
                        return 3;
                    } else {
                        if (num_valleys <= 49.5) {
                            return 4;
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (rr_median <= 62.75) {
                        if (pulse_interval <= 0.679999977350235) {
                            if (rr_std <= 17.312787532806396) {
                                if (diastolic_amp <= -1.2482808232307434) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            } else {
                                return 2;
                            }
                        } else {
                            if (second_peak_freq <= 0.6103515625) {
                                return 1;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (systolic_amp <= 4.884790420532227) {
                            if (diastolic_amp <= -1.62675279378891) {
                                if (dist_std <= 0.10374732688069344) {
                                    if (num_peaks <= 133.5) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                if (systolic_time <= 0.553604394197464) {
                                    return 3;
                                } else {
                                    if (rr_median <= 74.75) {
                                        return 1;
                                    } else {
                                        return 3;
                                    }
                                }
                            }
                        } else {
                            if (num_valleys <= 68.5) {
                                return 5;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            } else {
                if (systolic_amp <= 6.4244067668914795) {
                    if (diastolic_time <= 0.12836424261331558) {
                        if (systolic_amp <= 3.0481319427490234) {
                            return 4;
                        } else {
                            if (systolic_amp <= 4.3378825187683105) {
                                if (dist_median <= 5.791521107312292e-05) {
                                    if (pulse_interval <= 0.40978947281837463) {
                                        return 1;
                                    } else {
                                        if (dist_std <= 0.08880380541086197) {
                                            return 1;
                                        } else {
                                            return 1;
                                        }
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                if (pp_interval <= 0.5177307724952698) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 0.02244428638368845) {
                            if (ss_median <= 82.0) {
                                if (diastolic_time <= 0.16033843904733658) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (diastolic_area <= -45.34360885620117) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            return 4;
                        }
                    }
                } else {
                    return 4;
                }
            }
        }
    } else {
        if (num_valleys <= 68.5) {
            if (diastolic_time <= 0.6154769361019135) {
                if (diastolic_amp <= -2.445903778076172) {
                    if (dist_median <= -0.00069664407055825) {
                        return 4;
                    } else {
                        if (fwhm <= 7.355999946594238) {
                            return 3;
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (diastolic_area <= -18.01252269744873) {
                        if (num_peaks <= 90.0) {
                            if (rr_median <= 74.25) {
                                return 2;
                            } else {
                                return 5;
                            }
                        } else {
                            if (dist_std <= 0.13581082969903946) {
                                if (rr_std <= 13.49876356124878) {
                                    if (pp_interval <= 0.4964499920606613) {
                                        return 5;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                return 2;
                            }
                        }
                    } else {
                        if (num_peaks <= 105.5) {
                            if (rr_std <= 23.68425750732422) {
                                return 5;
                            } else {
                                return 2;
                            }
                        } else {
                            if (dist_std <= 0.05461856536567211) {
                                return 0;
                            } else {
                                return 2;
                            }
                        }
                    }
                }
            } else {
                if (ss_std <= 30.668091773986816) {
                    if (dist_std <= 0.05687819607555866) {
                        return 1;
                    } else {
                        return 2;
                    }
                } else {
                    return 1;
                }
            }
        } else {
            if (dist_std <= 0.05531284213066101) {
                if (pulse_interval <= 0.4508529454469681) {
                    return 3;
                } else {
                    if (rr_std <= 8.305138111114502) {
                        return 0;
                    } else {
                        if (systolic_time <= 0.5729230642318726) {
                            if (systolic_time <= 0.5408571660518646) {
                                return 0;
                            } else {
                                return 0;
                            }
                        } else {
                            if (systolic_area <= 13.812397956848145) {
                                if (rr_std <= 13.61439323425293) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 0;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -12.627055168151855) {
                    if (systolic_amp <= 3.530192255973816) {
                        return 2;
                    } else {
                        if (diastolic_time <= 0.5091071277856827) {
                            return 3;
                        } else {
                            return 5;
                        }
                    }
                } else {
                    return 1;
                }
            }
        }
    }
    );
    votes[46] = (
// Decision rules for tree 46
    if (systolic_time <= 0.29591651260852814) {
        if (diastolic_time <= 0.02100688125938177) {
            if (ss_median <= 54.25) {
                if (second_peak_freq <= 0.79345703125) {
                    return 3;
                } else {
                    return 3;
                }
            } else {
                if (num_peaks <= 142.0) {
                    return 2;
                } else {
                    return 0;
                }
            }
        } else {
            if (systolic_area <= 70.65700149536133) {
                if (diastolic_time <= 0.03449518792331219) {
                    if (dist_median <= -0.00033606524812057614) {
                        return 4;
                    } else {
                        return 4;
                    }
                } else {
                    if (systolic_amp <= 3.9807578325271606) {
                        if (systolic_time <= 0.13097891956567764) {
                            return 1;
                        } else {
                            if (first_peak_freq <= 0.42724609375) {
                                return 5;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (ss_std <= 15.985311031341553) {
                            if (num_peaks <= 118.5) {
                                return 4;
                            } else {
                                if (diastolic_area <= -37.21088981628418) {
                                    return 3;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            if (diastolic_area <= -66.10375595092773) {
                                return 3;
                            } else {
                                if (diastolic_amp <= -2.0484275221824646) {
                                    if (rr_std <= 16.667449951171875) {
                                        return 4;
                                    } else {
                                        if (dist_std <= 0.08233557268977165) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                } else {
                                    return 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (fwhm <= 0.8159999847412109) {
                    return 1;
                } else {
                    if (diastolic_amp <= -2.6768743991851807) {
                        if (diastolic_time <= 0.10373684391379356) {
                            return 5;
                        } else {
                            return 4;
                        }
                    } else {
                        return 3;
                    }
                }
            }
        }
    } else {
        if (diastolic_area <= -18.47756004333496) {
            if (dist_std <= 0.1362379938364029) {
                if (num_valleys <= 55.5) {
                    if (pulse_interval <= 0.42384444177150726) {
                        return 4;
                    } else {
                        if (diastolic_area <= -23.167988777160645) {
                            return 3;
                        } else {
                            if (systolic_amp <= 4.5984416007995605) {
                                return 2;
                            } else {
                                return 2;
                            }
                        }
                    }
                } else {
                    if (rr_median <= 99.25) {
                        if (rr_median <= 64.75) {
                            if (diff_median <= 0.023164906539022923) {
                                if (pp_interval <= 0.6676666438579559) {
                                    if (diastolic_time <= 0.19919487088918686) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                if (pulse_interval <= 0.671999990940094) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (diastolic_amp <= -1.123275637626648) {
                                if (systolic_area <= 14.181972026824951) {
                                    if (dist_median <= -9.189203046844341e-05) {
                                        return 3;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if (first_peak_freq <= 0.8544921875) {
                                        if (rr_std <= 11.750908374786377) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (systolic_amp <= 4.088500499725342) {
                            if (diastolic_time <= 0.14064285159111023) {
                                if (systolic_amp <= 3.083069086074829) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (num_valleys <= 73.0) {
                                return 1;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            } else {
                if (diastolic_area <= -30.384922981262207) {
                    if (systolic_time <= 0.4694230705499649) {
                        return 3;
                    } else {
                        return 1;
                    }
                } else {
                    if (diastolic_amp <= -2.4243797063827515) {
                        return 2;
                    } else {
                        if (rr_std <= 20.462517738342285) {
                            return 2;
                        } else {
                            return 2;
                        }
                    }
                }
            }
        } else {
            if (num_valleys <= 69.5) {
                if (diastolic_area <= -13.569759368896484) {
                    if (rr_std <= 12.053974628448486) {
                        if (diastolic_amp <= -1.743806540966034) {
                            return 5;
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_amp <= -1.7219955921173096) {
                            if (systolic_time <= 0.605006992816925) {
                                return 4;
                            } else {
                                return 2;
                            }
                        } else {
                            return 0;
                        }
                    }
                } else {
                    if (dist_std <= 0.04560237377882004) {
                        return 0;
                    } else {
                        if (ss_std <= 27.92881488800049) {
                            return 2;
                        } else {
                            if (rr_median <= 72.5) {
                                return 1;
                            } else {
                                if (diastolic_area <= -9.10817289352417) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diastolic_time <= 0.8386666774749756) {
                    if (diastolic_time <= 0.2583314776420593) {
                        return 3;
                    } else {
                        if (diastolic_area <= -15.56245470046997) {
                            if (dist_std <= 0.058648062869906425) {
                                if (diastolic_area <= -16.399806022644043) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 5;
                            }
                        } else {
                            if (systolic_time <= 0.5027619153261185) {
                                return 0;
                            } else {
                                if (rr_std <= 8.988080501556396) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    return 1;
                }
            }
        }
    }
    );
    votes[47] = (
// Decision rules for tree 47
    if (pp_interval <= 0.29591651260852814) {
        if (num_peaks <= 135.5) {
            if (fwhm <= 7.115999937057495) {
                if (dist_std <= 0.08704012632369995) {
                    if (systolic_area <= 66.37311553955078) {
                        if (diastolic_amp <= -3.379301071166992) {
                            return 4;
                        } else {
                            if (num_peaks <= 129.5) {
                                if (diastolic_area <= -36.2943229675293) {
                                    if (num_peaks <= 117.5) {
                                        return 1;
                                    } else {
                                        return 4;
                                    }
                                } else {
                                    if (rr_std <= 16.51509952545166) {
                                        return 5;
                                    } else {
                                        if (num_valleys <= 67.5) {
                                            return 4;
                                        } else {
                                            return 4;
                                        }
                                    }
                                }
                            } else {
                                return 5;
                            }
                        }
                    } else {
                        return 1;
                    }
                } else {
                    if (diastolic_time <= 0.09008780494332314) {
                        if (rr_median <= 67.25) {
                            return 4;
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_time <= 0.1584925502538681) {
                            return 3;
                        } else {
                            return 5;
                        }
                    }
                }
            } else {
                if (dist_std <= 0.08180205896496773) {
                    if (diff_median <= 0.013423744589090347) {
                        if (diastolic_time <= 0.18394101411104202) {
                            return 4;
                        } else {
                            return 4;
                        }
                    } else {
                        if (num_valleys <= 72.5) {
                            if (diff_median <= 0.016404791735112667) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (systolic_area <= 18.027063369750977) {
                        return 4;
                    } else {
                        return 3;
                    }
                }
            }
        } else {
            if (rr_median <= 76.5) {
                if (systolic_area <= 49.83904838562012) {
                    return 3;
                } else {
                    return 3;
                }
            } else {
                if (pulse_interval <= 0.07747070491313934) {
                    if (dist_std <= 0.05127510987222195) {
                        return 0;
                    } else {
                        return 2;
                    }
                } else {
                    return 5;
                }
            }
        }
    } else {
        if (diastolic_area <= -18.696045875549316) {
            if (num_valleys <= 61.5) {
                if (diastolic_time <= 0.215999998152256) {
                    if (num_valleys <= 49.0) {
                        return 4;
                    } else {
                        if (systolic_area <= 25.5836181640625) {
                            return 3;
                        } else {
                            return 5;
                        }
                    }
                } else {
                    if (diastolic_amp <= -1.5473960041999817) {
                        if (rr_median <= 89.0) {
                            if (systolic_area <= 25.810664176940918) {
                                if (diastolic_amp <= -2.4331451654434204) {
                                    return 2;
                                } else {
                                    if (diastolic_area <= -28.40711212158203) {
                                        return 2;
                                    } else {
                                        if (diff_median <= 0.0074057073798030615) {
                                            return 2;
                                        } else {
                                            return 2;
                                        }
                                    }
                                }
                            } else {
                                if (ss_std <= 22.080463409423828) {
                                    if (ss_std <= 0.5844849348068237) {
                                        return 5;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        return 3;
                    }
                }
            } else {
                if (rr_median <= 101.0) {
                    if (rr_median <= 64.75) {
                        if (systolic_time <= 0.6834545433521271) {
                            if (dist_median <= -0.0005556755058933049) {
                                return 3;
                            } else {
                                if (rr_std <= 4.318333983421326) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (diastolic_area <= -70.66893768310547) {
                            if (num_valleys <= 73.5) {
                                if (diastolic_area <= -89.24246978759766) {
                                    return 1;
                                } else {
                                    return 3;
                                }
                            } else {
                                if (first_peak_freq <= 0.30517578125) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            }
                        } else {
                            if (num_peaks <= 130.5) {
                                if (ss_median <= 73.0) {
                                    if (num_peaks <= 120.0) {
                                        if (diastolic_amp <= -2.1345555782318115) {
                                            return 2;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        if (second_peak_freq <= 0.67138671875) {
                                            return 3;
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if (diastolic_amp <= -1.309331476688385) {
                                        if (systolic_area <= 21.779165267944336) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                if (pulse_interval <= 0.6255897283554077) {
                                    if (diastolic_area <= -31.515371322631836) {
                                        return 3;
                                    } else {
                                        if (ss_std <= 21.223103523254395) {
                                            return 5;
                                        } else {
                                            return 3;
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    if (num_peaks <= 117.0) {
                        return 5;
                    } else {
                        if (num_peaks <= 145.5) {
                            if (systolic_area <= 22.694777488708496) {
                                return 1;
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (systolic_time <= 1.050000011920929) {
                if (dist_std <= 0.05770806223154068) {
                    if (pp_interval <= 0.5106256306171417) {
                        if (dist_std <= 0.03338255546987057) {
                            return 5;
                        } else {
                            if (ss_median <= 87.25) {
                                return 0;
                            } else {
                                return 4;
                            }
                        }
                    } else {
                        if (num_peaks <= 107.5) {
                            if (diastolic_time <= 0.6243076920509338) {
                                return 5;
                            } else {
                                return 1;
                            }
                        } else {
                            if (systolic_amp <= 3.317741870880127) {
                                if (rr_std <= 10.808912754058838) {
                                    return 0;
                                } else {
                                    if (rr_median <= 67.75) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if (second_peak_freq <= 1.28173828125) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 10.328854084014893) {
                        if (diastolic_area <= -15.187784194946289) {
                            return 5;
                        } else {
                            return 3;
                        }
                    } else {
                        if (diff_median <= 0.010593153536319733) {
                            return 5;
                        } else {
                            if (ss_std <= 30.668091773986816) {
                                if (pp_interval <= 0.6708717942237854) {
                                    return 1;
                                } else {
                                    return 2;
                                }
                            } else {
                                if (diastolic_time <= 0.688981831073761) {
                                    return 4;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (pulse_interval <= 1.3776000142097473) {
                    return 1;
                } else {
                    return 1;
                }
            }
        }
    }
    );
    votes[48] = (
// Decision rules for tree 48
    if (pulse_interval <= 0.39466315507888794) {
        if (ss_median <= 75.5) {
            if (systolic_time <= 0.21785663068294525) {
                if (rr_std <= 13.662411212921143) {
                    if (rr_median <= 79.0) {
                        if (second_peak_freq <= 0.91552734375) {
                            if (rr_std <= 6.6925272941589355) {
                                return 3;
                            } else {
                                return 3;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if (fwhm <= 7.031999826431274) {
                        if (diastolic_area <= -37.54647445678711) {
                            return 5;
                        } else {
                            if (diastolic_area <= -2.878796339035034) {
                                return 4;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if (rr_median <= 77.5) {
                            if (ss_std <= 13.57580280303955) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            return 4;
                        }
                    }
                }
            } else {
                if (num_peaks <= 104.5) {
                    if (dist_std <= 0.13567228615283966) {
                        return 4;
                    } else {
                        return 2;
                    }
                } else {
                    if (fwhm <= 7.53600001335144) {
                        if (ss_median <= 54.5) {
                            return 1;
                        } else {
                            if (num_valleys <= 71.0) {
                                return 3;
                            } else {
                                if (pp_interval <= 0.31511999666690826) {
                                    return 3;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    } else {
                        if (num_valleys <= 67.5) {
                            return 3;
                        } else {
                            if (ss_std <= 18.195157051086426) {
                                return 5;
                            } else {
                                return 5;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 14.569594383239746) {
                if (rr_std <= 1.7294792532920837) {
                    if (diastolic_time <= 0.15906434506177902) {
                        if (diastolic_area <= -0.921453595161438) {
                            if (diastolic_area <= -47.66256141662598) {
                                return 1;
                            } else {
                                return 5;
                            }
                        } else {
                            return 4;
                        }
                    } else {
                        return 5;
                    }
                } else {
                    if (rr_median <= 108.0) {
                        return 3;
                    } else {
                        return 1;
                    }
                }
            } else {
                if (diastolic_area <= -62.12479782104492) {
                    return 1;
                } else {
                    if (diff_median <= 0.012807981576770544) {
                        if (systolic_time <= 0.2546013966202736) {
                            if (rr_median <= 87.75) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        if (diastolic_area <= -12.88620376586914) {
                            return 4;
                        } else {
                            return 4;
                        }
                    }
                }
            }
        }
    } else {
        if (num_peaks <= 93.5) {
            if (rr_std <= 36.49445152282715) {
                if (rr_median <= 89.0) {
                    if (diff_median <= 0.046096233651041985) {
                        if (diastolic_time <= 0.282670333981514) {
                            if (num_peaks <= 82.0) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            if (diastolic_amp <= -2.431745409965515) {
                                return 2;
                            } else {
                                if (dist_std <= 0.08607158437371254) {
                                    if (rr_median <= 71.5) {
                                        return 2;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    return 2;
                                }
                            }
                        }
                    } else {
                        return 5;
                    }
                } else {
                    if (systolic_time <= 0.5910153985023499) {
                        return 5;
                    } else {
                        return 1;
                    }
                }
            } else {
                if (diastolic_time <= 0.3594074100255966) {
                    return 3;
                } else {
                    return 1;
                }
            }
        } else {
            if (dist_std <= 0.06220810115337372) {
                if (diastolic_amp <= -1.2423641085624695) {
                    if (diastolic_area <= -28.193462371826172) {
                        if (ss_median <= 76.5) {
                            if (rr_median <= 76.75) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            if (dist_std <= 0.03658988140523434) {
                                return 5;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diastolic_time <= 0.7104000151157379) {
                            if (rr_median <= 52.25) {
                                return 3;
                            } else {
                                if (num_valleys <= 62.5) {
                                    return 5;
                                } else {
                                    if (diff_median <= 0.025094146840274334) {
                                        if (systolic_time <= 0.5442857146263123) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if (ss_median <= 65.25) {
                                            return 0;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (num_peaks <= 117.5) {
                                return 1;
                            } else {
                                return 5;
                            }
                        }
                    }
                } else {
                    if (diastolic_area <= -17.374751091003418) {
                        if (rr_median <= 83.5) {
                            return 3;
                        } else {
                            if (ss_median <= 122.75) {
                                if (diff_median <= 0.012297393288463354) {
                                    return 1;
                                } else {
                                    return 5;
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (dist_std <= 0.039562346413731575) {
                            return 0;
                        } else {
                            return 0;
                        }
                    }
                }
            } else {
                if (systolic_amp <= 3.5744080543518066) {
                    if (systolic_time <= 0.49975383281707764) {
                        return 3;
                    } else {
                        if (diastolic_time <= 0.22006666660308838) {
                            if (dist_std <= 0.07282855361700058) {
                                return 1;
                            } else {
                                if (rr_std <= 0.7464783191680908) {
                                    return 1;
                                } else {
                                    if (rr_std <= 5.288359045982361) {
                                        return 1;
                                    } else {
                                        return 1;
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.8082000017166138) {
                                return 3;
                            } else {
                                return 2;
                            }
                        }
                    }
                } else {
                    if (fwhm <= 7.336000204086304) {
                        if (rr_std <= 21.376572608947754) {
                            if (pulse_interval <= 0.4569411724805832) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            return 5;
                        }
                    } else {
                        if (diastolic_time <= 0.46180883049964905) {
                            if (diastolic_time <= 0.12003219500184059) {
                                return 1;
                            } else {
                                if (diastolic_area <= -23.083620071411133) {
                                    if (rr_std <= 0.6929454505443573) {
                                        return 2;
                                    } else {
                                        return 5;
                                    }
                                } else {
                                    if (rr_median <= 75.0) {
                                        return 2;
                                    } else {
                                        return 3;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 0.018723372370004654) {
                                return 2;
                            } else {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    );
    votes[49] = (
// Decision rules for tree 49
    if (diastolic_time <= 0.2627938240766525) {
        if (pulse_interval <= 0.18133557587862015) {
            if (diff_median <= 0.01663378905504942) {
                if (rr_std <= 8.55915355682373) {
                    if (rr_std <= 0.8677866756916046) {
                        if (ss_std <= 24.331422805786133) {
                            return 3;
                        } else {
                            return 4;
                        }
                    } else {
                        return 5;
                    }
                } else {
                    if (diastolic_time <= 0.02462295163422823) {
                        return 0;
                    } else {
                        if (num_valleys <= 63.5) {
                            if (systolic_area <= 22.233697474002838) {
                                return 4;
                            } else {
                                return 3;
                            }
                        } else {
                            if (diastolic_area <= -70.02483749389648) {
                                return 4;
                            } else {
                                if (ss_std <= 31.95657444000244) {
                                    return 4;
                                } else {
                                    return 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (ss_median <= 56.0) {
                    return 3;
                } else {
                    if (ss_median <= 76.5) {
                        if (rr_median <= 81.5) {
                            return 5;
                        } else {
                            return 0;
                        }
                    } else {
                        return 1;
                    }
                }
            }
        } else {
            if (diastolic_time <= 0.06091477908194065) {
                if (diastolic_area <= -110.13825607299805) {
                    return 1;
                } else {
                    return 1;
                }
            } else {
                if (rr_median <= 76.5) {
                    if (diastolic_amp <= -2.1596901416778564) {
                        if (num_peaks <= 99.5) {
                            return 4;
                        } else {
                            if (num_valleys <= 65.5) {
                                if (rr_std <= 0.5958648025989532) {
                                    return 2;
                                } else {
                                    return 2;
                                }
                            } else {
                                if (num_peaks <= 135.5) {
                                    if (ss_std <= 15.640666484832764) {
                                        return 5;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 3;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 0.02301501389592886) {
                            if (ss_median <= 126.5) {
                                if (rr_median <= 68.5) {
                                    if (systolic_area <= 15.373547077178955) {
                                        return 3;
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    if (num_valleys <= 77.5) {
                                        if (second_peak_freq <= 0.79345703125) {
                                            return 3;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        return 5;
                                    }
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            if (dist_std <= 0.05330773815512657) {
                                return 5;
                            } else {
                                if (dist_std <= 0.08837781473994255) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    }
                } else {
                    if (diastolic_amp <= -1.3493837118148804) {
                        if (diastolic_amp <= -2.6811368465423584) {
                            if (diastolic_area <= -49.00128173828125) {
                                return 4;
                            } else {
                                return 4;
                            }
                        } else {
                            if (rr_median <= 104.5) {
                                if (ss_std <= 17.029332160949707) {
                                    if (diastolic_area <= -48.47126770019531) {
                                        return 3;
                                    } else {
                                        if (num_valleys <= 69.5) {
                                            return 4;
                                        } else {
                                            return 5;
                                        }
                                    }
                                } else {
                                    if (systolic_amp <= 3.472690463066101) {
                                        return 3;
                                    } else {
                                        if (diastolic_amp <= -2.1999014616012573) {
                                            return 5;
                                        } else {
                                            return 5;
                                        }
                                    }
                                }
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        if (diff_median <= 0.0094640520401299) {
                            if (diastolic_time <= 0.09902608767151833) {
                                return 3;
                            } else {
                                return 5;
                            }
                        } else {
                            if (dist_std <= 0.052257511764764786) {
                                if (rr_median <= 123.5) {
                                    return 5;
                                } else {
                                    return 1;
                                }
                            } else {
                                if (dist_std <= 0.07541614770889282) {
                                    return 1;
                                } else {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (dist_std <= 0.055107664316892624) {
            if (num_valleys <= 65.5) {
                if (rr_std <= 44.3339900970459) {
                    if (systolic_area <= 18.50309467315674) {
                        if (systolic_amp <= 3.630659341812134) {
                            return 0;
                        } else {
                            return 2;
                        }
                    } else {
                        if (dist_std <= 0.035057563334703445) {
                            if (systolic_area <= 24.880279541015625) {
                                return 5;
                            } else {
                                return 5;
                            }
                        } else {
                            return 4;
                        }
                    }
                } else {
                    return 1;
                }
            } else {
                if (systolic_time <= 0.4508529454469681) {
                    return 3;
                } else {
                    if (fwhm <= 8.139999866485596) {
                        if (systolic_time <= 0.9390000104904175) {
                            if (diastolic_amp <= -2.0480018854141235) {
                                if (diastolic_amp <= -2.4147526025772095) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        return 0;
                    }
                }
            }
        } else {
            if (dist_std <= 0.09502121806144714) {
                if (diastolic_time <= 0.9000000059604645) {
                    if (pp_interval <= 0.867166668176651) {
                        if (rr_median <= 64.5) {
                            if (ss_std <= 2.5846327245235443) {
                                return 3;
                            } else {
                                return 2;
                            }
                        } else {
                            if (rr_std <= 12.2030668258667) {
                                if (num_peaks <= 125.5) {
                                    return 5;
                                } else {
                                    return 5;
                                }
                            } else {
                                if (systolic_area <= 24.359627723693848) {
                                    if (diastolic_amp <= -2.1264718770980835) {
                                        return 2;
                                    } else {
                                        if (rr_median <= 88.5) {
                                            return 5;
                                        } else {
                                            return 1;
                                        }
                                    }
                                } else {
                                    return 4;
                                }
                            }
                        }
                    } else {
                        if (diastolic_area <= -15.073957443237305) {
                            return 2;
                        } else {
                            return 1;
                        }
                    }
                } else {
                    if (diastolic_area <= -8.756585121154785) {
                        return 1;
                    } else {
                        return 1;
                    }
                }
            } else {
                if (ss_median <= 73.75) {
                    if (rr_std <= 0.6796177625656128) {
                        if (ss_median <= 69.5) {
                            return 2;
                        } else {
                            return 2;
                        }
                    } else {
                        if (num_peaks <= 114.5) {
                            if (second_peak_freq <= 0.91552734375) {
                                return 2;
                            } else {
                                return 2;
                            }
                        } else {
                            return 2;
                        }
                    }
                } else {
                    if (num_valleys <= 66.0) {
                        if (diastolic_time <= 0.3742285817861557) {
                            return 5;
                        } else {
                            return 1;
                        }
                    } else {
                        return 2;
                    }
                }
            }
        }
    }
    );
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
