#include "random_forest.h"


int random_forest_predict(float systolic_area, float diff_median, float ss_median, float systolic_time, float rr_std) {
    int votes[50] = {0};
// Decision rules for tree 0
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004066428868100047) {
            votes[0] = 1;
        } else {
            if (rr_std <= 7.024920225143433) {
                votes[0] = 0;
            } else {
                votes[0] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1144473.8125) {
                if (rr_std <= 14.978209018707275) {
                    if (systolic_time <= 0.2790663093328476) {
                        if (ss_median <= 48.75) {
                            if (systolic_time <= 0.06881735101342201) {
                                if (diff_median <= 3.635441780090332) {
                                    votes[0] = 4;
                                } else {
                                    if (rr_std <= 7.327278137207031) {
                                        votes[0] = 3;
                                    } else {
                                        if (rr_std <= 11.464153289794922) {
                                            votes[0] = 1;
                                        } else {
                                            votes[0] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 16.91290855407715) {
                                    if (ss_median <= 44.75) {
                                        if (rr_std <= 7.467838764190674) {
                                            votes[0] = 5;
                                        } else {
                                            votes[0] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 349760.1875) {
                                            votes[0] = 5;
                                        } else {
                                            votes[0] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 10.180902004241943) {
                                        if (diff_median <= 24.02391242980957) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= 295075.75) {
                                            votes[0] = 1;
                                        } else {
                                            votes[0] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.15661735832691193) {
                                if (systolic_area <= 16318.78515625) {
                                    votes[0] = 3;
                                } else {
                                    if (systolic_time <= 0.06501919403672218) {
                                        if (ss_median <= 55.25) {
                                            votes[0] = 1;
                                        } else {
                                            votes[0] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 30.575373649597168) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 144803.65625) {
                                    votes[0] = 1;
                                } else {
                                    if (diff_median <= 11.878318309783936) {
                                        votes[0] = 3;
                                    } else {
                                        if (systolic_area <= 319528.46875) {
                                            votes[0] = 3;
                                        } else {
                                            votes[0] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 5.163897752761841) {
                            if (diff_median <= 4.718117713928223) {
                                if (systolic_time <= 0.3538181781768799) {
                                    votes[0] = 4;
                                } else {
                                    votes[0] = 1;
                                }
                            } else {
                                votes[0] = 2;
                            }
                        } else {
                            if (systolic_area <= 122153.48828125) {
                                if (diff_median <= 7.4427971839904785) {
                                    votes[0] = 5;
                                } else {
                                    votes[0] = 5;
                                }
                            } else {
                                votes[0] = 3;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 27394.599609375) {
                        if (rr_std <= 24.86577606201172) {
                            if (systolic_time <= 1.1689143180847168) {
                                if (rr_std <= 20.33941078186035) {
                                    if (systolic_area <= 21243.7666015625) {
                                        votes[0] = 1;
                                    } else {
                                        if (ss_median <= 54.0) {
                                            votes[0] = 2;
                                        } else {
                                            votes[0] = 2;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 17772.1650390625) {
                                        votes[0] = 2;
                                    } else {
                                        votes[0] = 2;
                                    }
                                }
                            } else {
                                votes[0] = 1;
                            }
                        } else {
                            if (systolic_time <= 0.4417142868041992) {
                                votes[0] = 4;
                            } else {
                                if (systolic_time <= 0.7063636481761932) {
                                    votes[0] = 1;
                                } else {
                                    votes[0] = 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.08486853539943695) {
                            if (rr_std <= 16.677117347717285) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 1;
                            }
                        } else {
                            if (rr_std <= 22.402019500732422) {
                                if (systolic_time <= 0.16371088474988937) {
                                    if (systolic_area <= 255981.8046875) {
                                        votes[0] = 1;
                                    } else {
                                        votes[0] = 5;
                                    }
                                } else {
                                    if (systolic_area <= 51221.271484375) {
                                        votes[0] = 5;
                                    } else {
                                        if (diff_median <= 11.317700862884521) {
                                            votes[0] = 5;
                                        } else {
                                            votes[0] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 45731.693359375) {
                                    if (systolic_area <= 33082.626953125) {
                                        votes[0] = 4;
                                    } else {
                                        votes[0] = 4;
                                    }
                                } else {
                                    if (ss_median <= 48.5) {
                                        votes[0] = 5;
                                    } else {
                                        votes[0] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.13351345062256) {
                    if (systolic_area <= 1735374.8125) {
                        if (systolic_time <= 0.07731464132666588) {
                            if (systolic_area <= 1372491.625) {
                                votes[0] = 1;
                            } else {
                                votes[0] = 5;
                            }
                        } else {
                            if (rr_std <= 10.294044494628906) {
                                votes[0] = 4;
                            } else {
                                if (rr_std <= 13.930157661437988) {
                                    votes[0] = 4;
                                } else {
                                    votes[0] = 4;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 2275077.25) {
                            votes[0] = 4;
                        } else {
                            votes[0] = 4;
                        }
                    }
                } else {
                    if (systolic_area <= 1584333.125) {
                        votes[0] = 3;
                    } else {
                        votes[0] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 9.244638442993164) {
                if (systolic_area <= 180760.53125) {
                    if (ss_median <= 73.5) {
                        if (systolic_area <= 74396.34375) {
                            votes[0] = 2;
                        } else {
                            if (diff_median <= 4.148450970649719) {
                                votes[0] = 2;
                            } else {
                                if (systolic_time <= 0.4224444329738617) {
                                    votes[0] = 2;
                                } else {
                                    if (diff_median <= 8.149693727493286) {
                                        votes[0] = 2;
                                    } else {
                                        votes[0] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[0] = 5;
                    }
                } else {
                    if (diff_median <= 19.473225116729736) {
                        if (ss_median <= 72.0) {
                            votes[0] = 3;
                        } else {
                            votes[0] = 5;
                        }
                    } else {
                        votes[0] = 2;
                    }
                }
            } else {
                if (rr_std <= 18.028037071228027) {
                    if (diff_median <= 23.251953125) {
                        if (systolic_area <= 110541.31640625) {
                            votes[0] = 2;
                        } else {
                            votes[0] = 3;
                        }
                    } else {
                        votes[0] = 5;
                    }
                } else {
                    votes[0] = 4;
                }
            }
        }
    }
// Decision rules for tree 1
    if (diff_median <= 0.06968991085886955) {
        if (rr_std <= 4.194984555244446) {
            votes[1] = 0;
        } else {
            if (diff_median <= 0.004068076377734542) {
                votes[1] = 2;
            } else {
                votes[1] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1051481.9375) {
                if (systolic_area <= 45496.859375) {
                    if (systolic_time <= 0.27178163826465607) {
                        if (diff_median <= 11.950178146362305) {
                            if (ss_median <= 57.25) {
                                votes[1] = 4;
                            } else {
                                votes[1] = 4;
                            }
                        } else {
                            votes[1] = 3;
                        }
                    } else {
                        if (rr_std <= 24.649049758911133) {
                            if (systolic_area <= 20497.7763671875) {
                                if (ss_median <= 52.0) {
                                    votes[1] = 2;
                                } else {
                                    votes[1] = 2;
                                }
                            } else {
                                if (systolic_time <= 0.5885034799575806) {
                                    if (rr_std <= 17.43222713470459) {
                                        if (systolic_time <= 0.3989555537700653) {
                                            votes[1] = 2;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    } else {
                                        votes[1] = 2;
                                    }
                                } else {
                                    votes[1] = 1;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.6840909123420715) {
                                votes[1] = 1;
                            } else {
                                votes[1] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.07318959757685661) {
                        if (ss_median <= 44.25) {
                            if (diff_median <= 19.74024486541748) {
                                votes[1] = 5;
                            } else {
                                votes[1] = 1;
                            }
                        } else {
                            if (systolic_area <= 859035.46875) {
                                if (diff_median <= 12.199907779693604) {
                                    if (systolic_time <= 0.04192580096423626) {
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
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (systolic_time <= 0.17930232733488083) {
                                if (diff_median <= 11.615121841430664) {
                                    if (systolic_area <= 207961.9765625) {
                                        votes[1] = 5;
                                    } else {
                                        if (systolic_area <= 318818.03125) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 288594.390625) {
                                        if (systolic_time <= 0.16491666436195374) {
                                            votes[1] = 1;
                                        } else {
                                            votes[1] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 31.611705780029297) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 7.0533246994018555) {
                                    votes[1] = 5;
                                } else {
                                    votes[1] = 5;
                                }
                            }
                        } else {
                            if (systolic_area <= 98418.8515625) {
                                votes[1] = 5;
                            } else {
                                if (rr_std <= 14.866444110870361) {
                                    if (diff_median <= 12.70093297958374) {
                                        if (systolic_area <= 272396.78125) {
                                            votes[1] = 5;
                                        } else {
                                            votes[1] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 254925.90625) {
                                            votes[1] = 3;
                                        } else {
                                            votes[1] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 16.27730894088745) {
                                        votes[1] = 5;
                                    } else {
                                        votes[1] = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.13351345062256) {
                    if (systolic_time <= 0.0331330057233572) {
                        votes[1] = 1;
                    } else {
                        if (systolic_area <= 1727948.1875) {
                            if (systolic_time <= 0.07731464132666588) {
                                votes[1] = 5;
                            } else {
                                if (systolic_area <= 1211237.8125) {
                                    votes[1] = 4;
                                } else {
                                    votes[1] = 4;
                                }
                            }
                        } else {
                            votes[1] = 4;
                        }
                    }
                } else {
                    if (rr_std <= 10.3014817237854) {
                        votes[1] = 3;
                    } else {
                        votes[1] = 4;
                    }
                }
            }
        } else {
            if (systolic_area <= 176308.328125) {
                if (rr_std <= 16.601760864257812) {
                    if (ss_median <= 73.75) {
                        if (systolic_time <= 0.4757999926805496) {
                            if (systolic_time <= 0.23461750894784927) {
                                if (diff_median <= 11.089471817016602) {
                                    votes[1] = 2;
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
                        if (systolic_area <= 98824.15625) {
                            votes[1] = 2;
                        } else {
                            votes[1] = 3;
                        }
                    }
                } else {
                    if (systolic_area <= 38935.39453125) {
                        votes[1] = 4;
                    } else {
                        votes[1] = 4;
                    }
                }
            } else {
                if (systolic_time <= 0.24278844147920609) {
                    if (diff_median <= 24.366117477416992) {
                        if (systolic_time <= 0.1274036355316639) {
                            votes[1] = 3;
                        } else {
                            votes[1] = 3;
                        }
                    } else {
                        votes[1] = 2;
                    }
                } else {
                    votes[1] = 5;
                }
            }
        }
    }
// Decision rules for tree 2
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004094490082934499) {
            votes[2] = 0;
        } else {
            if (systolic_time <= 0.9535000026226044) {
                votes[2] = 0;
            } else {
                votes[2] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.28987911343574524) {
            if (systolic_area <= 1727948.1875) {
                if (systolic_area <= 47907.599609375) {
                    if (diff_median <= 9.28077220916748) {
                        if (rr_std <= 14.46856164932251) {
                            votes[2] = 4;
                        } else {
                            votes[2] = 4;
                        }
                    } else {
                        votes[2] = 3;
                    }
                } else {
                    if (rr_std <= 10.390209674835205) {
                        if (systolic_area <= 121077.94921875) {
                            votes[2] = 2;
                        } else {
                            if (diff_median <= 33.12479019165039) {
                                if (systolic_time <= 0.11958559975028038) {
                                    if (rr_std <= 9.718146324157715) {
                                        if (diff_median <= 8.799023628234863) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 50.75) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 4;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 66.5) {
                                        if (ss_median <= 49.25) {
                                            votes[2] = 5;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 71.0) {
                                            votes[2] = 2;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 51.5) {
                                    votes[2] = 1;
                                } else {
                                    votes[2] = 3;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 1030944.53125) {
                            if (systolic_time <= 0.07250925898551941) {
                                if (rr_std <= 12.557156085968018) {
                                    if (systolic_time <= 0.0503438338637352) {
                                        votes[2] = 1;
                                    } else {
                                        if (diff_median <= 20.17133617401123) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 1;
                                        }
                                    }
                                } else {
                                    votes[2] = 1;
                                }
                            } else {
                                if (systolic_area <= 412090.921875) {
                                    if (systolic_time <= 0.15372666716575623) {
                                        if (diff_median <= 15.983196258544922) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 156855.359375) {
                                            votes[2] = 1;
                                        } else {
                                            votes[2] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 14.499610424041748) {
                                        if (diff_median <= 21.395730018615723) {
                                            votes[2] = 3;
                                        } else {
                                            votes[2] = 3;
                                        }
                                    } else {
                                        votes[2] = 5;
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.07731464132666588) {
                                if (systolic_area <= 1208815.8125) {
                                    votes[2] = 4;
                                } else {
                                    votes[2] = 1;
                                }
                            } else {
                                if (rr_std <= 13.699369430541992) {
                                    votes[2] = 4;
                                } else {
                                    votes[2] = 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.287076473236084) {
                    votes[2] = 3;
                } else {
                    if (diff_median <= 12.310423851013184) {
                        votes[2] = 4;
                    } else {
                        votes[2] = 4;
                    }
                }
            }
        } else {
            if (ss_median <= 69.0) {
                if (systolic_area <= 38077.552734375) {
                    if (rr_std <= 24.649049758911133) {
                        if (systolic_time <= 1.1689143180847168) {
                            if (ss_median <= 47.75) {
                                votes[2] = 1;
                            } else {
                                if (systolic_time <= 0.4468235373497009) {
                                    if (systolic_time <= 0.3989555537700653) {
                                        if (rr_std <= 14.8978590965271) {
                                            votes[2] = 2;
                                        } else {
                                            votes[2] = 2;
                                        }
                                    } else {
                                        votes[2] = 5;
                                    }
                                } else {
                                    if (rr_std <= 17.251091957092285) {
                                        votes[2] = 2;
                                    } else {
                                        votes[2] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[2] = 1;
                        }
                    } else {
                        if (diff_median <= 0.9666398763656616) {
                            votes[2] = 1;
                        } else {
                            votes[2] = 1;
                        }
                    }
                } else {
                    if (systolic_area <= 110712.87890625) {
                        if (diff_median <= 7.392991781234741) {
                            votes[2] = 5;
                        } else {
                            votes[2] = 5;
                        }
                    } else {
                        if (systolic_area <= 154914.0859375) {
                            if (systolic_area <= 128113.703125) {
                                votes[2] = 2;
                            } else {
                                votes[2] = 3;
                            }
                        } else {
                            votes[2] = 5;
                        }
                    }
                }
            } else {
                if (rr_std <= 7.914649248123169) {
                    if (systolic_time <= 0.4251111000776291) {
                        votes[2] = 2;
                    } else {
                        if (systolic_area <= 82429.99609375) {
                            if (systolic_area <= 78379.32421875) {
                                votes[2] = 2;
                            } else {
                                votes[2] = 2;
                            }
                        } else {
                            votes[2] = 2;
                        }
                    }
                } else {
                    votes[2] = 5;
                }
            }
        }
    }
// Decision rules for tree 3
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004094490082934499) {
            votes[3] = 0;
        } else {
            if (rr_std <= 2.8213865607976913) {
                votes[3] = 0;
            } else {
                votes[3] = 0;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1036495.625) {
                if (systolic_area <= 40932.755859375) {
                    if (systolic_time <= 0.3418181836605072) {
                        if (diff_median <= 12.586799144744873) {
                            if (systolic_time <= 0.28039683401584625) {
                                if (ss_median <= 55.5) {
                                    if (systolic_time <= 0.18519512563943863) {
                                        votes[3] = 4;
                                    } else {
                                        votes[3] = 4;
                                    }
                                } else {
                                    votes[3] = 4;
                                }
                            } else {
                                votes[3] = 5;
                            }
                        } else {
                            votes[3] = 3;
                        }
                    } else {
                        if (ss_median <= 50.25) {
                            if (systolic_time <= 0.501714289188385) {
                                votes[3] = 2;
                            } else {
                                if (ss_median <= 47.75) {
                                    votes[3] = 1;
                                } else {
                                    votes[3] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 25.4495849609375) {
                                if (rr_std <= 15.087045669555664) {
                                    if (systolic_time <= 0.3989555537700653) {
                                        votes[3] = 2;
                                    } else {
                                        votes[3] = 5;
                                    }
                                } else {
                                    if (systolic_time <= 0.8662222325801849) {
                                        votes[3] = 2;
                                    } else {
                                        votes[3] = 2;
                                    }
                                }
                            } else {
                                votes[3] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.147232323884964) {
                        if (diff_median <= 20.57846164703369) {
                            if (ss_median <= 41.25) {
                                votes[3] = 5;
                            } else {
                                if (rr_std <= 15.079118728637695) {
                                    if (systolic_time <= 0.05637322552502155) {
                                        if (diff_median <= 6.635884523391724) {
                                            votes[3] = 1;
                                        } else {
                                            votes[3] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 54.75) {
                                            votes[3] = 3;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.0910583958029747) {
                                        votes[3] = 1;
                                    } else {
                                        votes[3] = 4;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 394549.296875) {
                                if (systolic_time <= 0.1315254271030426) {
                                    if (ss_median <= 51.25) {
                                        if (systolic_time <= 0.08168888837099075) {
                                            votes[3] = 1;
                                        } else {
                                            votes[3] = 1;
                                        }
                                    } else {
                                        votes[3] = 1;
                                    }
                                } else {
                                    votes[3] = 3;
                                }
                            } else {
                                if (systolic_time <= 0.07352760434150696) {
                                    if (rr_std <= 10.194355964660645) {
                                        votes[3] = 5;
                                    } else {
                                        votes[3] = 1;
                                    }
                                } else {
                                    votes[3] = 3;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 124825.64453125) {
                            if (diff_median <= 6.567801475524902) {
                                votes[3] = 1;
                            } else {
                                if (rr_std <= 19.519057273864746) {
                                    votes[3] = 5;
                                } else {
                                    votes[3] = 5;
                                }
                            }
                        } else {
                            if (ss_median <= 43.5) {
                                votes[3] = 5;
                            } else {
                                if (rr_std <= 12.32511568069458) {
                                    if (ss_median <= 49.5) {
                                        if (rr_std <= 8.735015392303467) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 56.5) {
                                            votes[3] = 3;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.16944681107997894) {
                                        votes[3] = 5;
                                    } else {
                                        if (systolic_area <= 243213.515625) {
                                            votes[3] = 5;
                                        } else {
                                            votes[3] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.625496864318848) {
                    if (diff_median <= 7.526423692703247) {
                        votes[3] = 1;
                    } else {
                        if (rr_std <= 8.537325382232666) {
                            votes[3] = 3;
                        } else {
                            votes[3] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 18.533626556396484) {
                        if (systolic_time <= 0.03255549818277359) {
                            votes[3] = 1;
                        } else {
                            if (ss_median <= 48.25) {
                                votes[3] = 4;
                            } else {
                                if (rr_std <= 10.356062889099121) {
                                    votes[3] = 4;
                                } else {
                                    votes[3] = 4;
                                }
                            }
                        }
                    } else {
                        votes[3] = 1;
                    }
                }
            }
        } else {
            if (systolic_area <= 180689.3984375) {
                if (rr_std <= 7.592450380325317) {
                    if (diff_median <= 3.699536919593811) {
                        votes[3] = 2;
                    } else {
                        if (ss_median <= 73.5) {
                            if (systolic_area <= 74396.34375) {
                                votes[3] = 2;
                            } else {
                                if (diff_median <= 12.488958358764648) {
                                    votes[3] = 2;
                                } else {
                                    if (rr_std <= 4.897813558578491) {
                                        votes[3] = 2;
                                    } else {
                                        votes[3] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[3] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 57897.447265625) {
                        votes[3] = 4;
                    } else {
                        if (systolic_time <= 0.246952585875988) {
                            votes[3] = 2;
                        } else {
                            if (diff_median <= 11.258798122406006) {
                                votes[3] = 5;
                            } else {
                                votes[3] = 5;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 23.58607292175293) {
                    if (systolic_time <= 0.1274036355316639) {
                        votes[3] = 3;
                    } else {
                        votes[3] = 3;
                    }
                } else {
                    votes[3] = 2;
                }
            }
        }
    }
// Decision rules for tree 4
    if (diff_median <= 0.06968991085886955) {
        if (diff_median <= 0.004080927232280374) {
            votes[4] = 0;
        } else {
            if (rr_std <= 3.005691275000572) {
                votes[4] = 0;
            } else {
                votes[4] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1144473.8125) {
                if (systolic_area <= 45731.693359375) {
                    if (systolic_time <= 0.2809777855873108) {
                        if (diff_median <= 14.12559986114502) {
                            if (systolic_area <= 32472.51953125) {
                                if (systolic_time <= 0.0730285719037056) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 1;
                                }
                            } else {
                                votes[4] = 4;
                            }
                        } else {
                            votes[4] = 3;
                        }
                    } else {
                        if (rr_std <= 24.649049758911133) {
                            if (systolic_time <= 1.1681143045425415) {
                                if (ss_median <= 48.75) {
                                    votes[4] = 1;
                                } else {
                                    if (systolic_time <= 0.4740000069141388) {
                                        if (systolic_time <= 0.4076105207204819) {
                                            votes[4] = 2;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 17.251091957092285) {
                                            votes[4] = 1;
                                        } else {
                                            votes[4] = 2;
                                        }
                                    }
                                }
                            } else {
                                votes[4] = 1;
                            }
                        } else {
                            if (ss_median <= 53.0) {
                                votes[4] = 1;
                            } else {
                                votes[4] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08486853539943695) {
                        if (rr_std <= 8.893284797668457) {
                            if (diff_median <= 28.170924186706543) {
                                if (systolic_area <= 739075.25) {
                                    if (ss_median <= 47.25) {
                                        votes[4] = 1;
                                    } else {
                                        votes[4] = 3;
                                    }
                                } else {
                                    votes[4] = 3;
                                }
                            } else {
                                if (rr_std <= 6.981604814529419) {
                                    votes[4] = 1;
                                } else {
                                    votes[4] = 1;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.05126349814236164) {
                                if (systolic_area <= 970766.0) {
                                    if (ss_median <= 54.5) {
                                        votes[4] = 1;
                                    } else {
                                        votes[4] = 1;
                                    }
                                } else {
                                    votes[4] = 1;
                                }
                            } else {
                                if (systolic_area <= 545476.5) {
                                    if (rr_std <= 14.23304557800293) {
                                        if (diff_median <= 18.175158500671387) {
                                            votes[4] = 3;
                                        } else {
                                            votes[4] = 1;
                                        }
                                    } else {
                                        votes[4] = 1;
                                    }
                                } else {
                                    votes[4] = 3;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (diff_median <= 16.069028854370117) {
                                if (ss_median <= 44.25) {
                                    if (systolic_area <= 157422.828125) {
                                        votes[4] = 5;
                                    } else {
                                        if (systolic_area <= 313950.953125) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 183337.28125) {
                                        votes[4] = 5;
                                    } else {
                                        if (rr_std <= 10.259229183197021) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.19648461043834686) {
                                    if (rr_std <= 10.180902004241943) {
                                        if (systolic_time <= 0.11682142689824104) {
                                            votes[4] = 5;
                                        } else {
                                            votes[4] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= 261971.0546875) {
                                            votes[4] = 1;
                                        } else {
                                            votes[4] = 3;
                                        }
                                    }
                                } else {
                                    votes[4] = 5;
                                }
                            }
                        } else {
                            if (systolic_area <= 98418.8515625) {
                                votes[4] = 5;
                            } else {
                                if (rr_std <= 14.866444110870361) {
                                    if (diff_median <= 9.043829917907715) {
                                        if (diff_median <= 6.747710704803467) {
                                            votes[4] = 3;
                                        } else {
                                            votes[4] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 8.868831634521484) {
                                            votes[4] = 3;
                                        } else {
                                            votes[4] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 22.631693840026855) {
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
                if (diff_median <= 18.21496868133545) {
                    if (systolic_time <= 0.0331330057233572) {
                        votes[4] = 1;
                    } else {
                        if (ss_median <= 48.75) {
                            if (systolic_area <= 2872763.375) {
                                votes[4] = 5;
                            } else {
                                votes[4] = 4;
                            }
                        } else {
                            if (rr_std <= 9.611593246459961) {
                                votes[4] = 1;
                            } else {
                                if (rr_std <= 10.294044494628906) {
                                    votes[4] = 4;
                                } else {
                                    votes[4] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 9.834675788879395) {
                        votes[4] = 3;
                    } else {
                        votes[4] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 7.592450380325317) {
                if (systolic_area <= 242029.390625) {
                    if (systolic_area <= 74396.34375) {
                        votes[4] = 5;
                    } else {
                        if (systolic_area <= 176308.328125) {
                            if (diff_median <= 4.148450970649719) {
                                votes[4] = 2;
                            } else {
                                if (systolic_time <= 0.41281871497631073) {
                                    votes[4] = 2;
                                } else {
                                    if (systolic_time <= 0.438104584813118) {
                                        votes[4] = 2;
                                    } else {
                                        votes[4] = 2;
                                    }
                                }
                            }
                        } else {
                            votes[4] = 2;
                        }
                    }
                } else {
                    votes[4] = 3;
                }
            } else {
                if (systolic_area <= 99285.99609375) {
                    if (systolic_time <= 0.3966274559497833) {
                        votes[4] = 2;
                    } else {
                        votes[4] = 5;
                    }
                } else {
                    if (diff_median <= 23.40548801422119) {
                        votes[4] = 3;
                    } else {
                        votes[4] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 5
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.00406027608551085) {
            votes[5] = 0;
        } else {
            if (ss_median <= 177.25) {
                votes[5] = 0;
            } else {
                if (ss_median <= 201.5) {
                    votes[5] = 0;
                } else {
                    votes[5] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1136458.3125) {
                if (systolic_area <= 40940.177734375) {
                    if (systolic_time <= 0.3418181836605072) {
                        if (diff_median <= 9.50985336303711) {
                            if (systolic_time <= 0.27971282601356506) {
                                if (ss_median <= 57.25) {
                                    if (systolic_time <= 0.017999999225139618) {
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
                        } else {
                            votes[5] = 3;
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (ss_median <= 44.25) {
                                votes[5] = 1;
                            } else {
                                votes[5] = 1;
                            }
                        } else {
                            if (systolic_time <= 1.0610476732254028) {
                                if (rr_std <= 28.075544357299805) {
                                    if (rr_std <= 13.585935592651367) {
                                        votes[5] = 5;
                                    } else {
                                        if (diff_median <= 2.659488558769226) {
                                            votes[5] = 2;
                                        } else {
                                            votes[5] = 2;
                                        }
                                    }
                                } else {
                                    votes[5] = 1;
                                }
                            } else {
                                votes[5] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08560100942850113) {
                        if (diff_median <= 12.785909175872803) {
                            if (systolic_time <= 0.05637322552502155) {
                                if (systolic_area <= 838177.15625) {
                                    votes[5] = 1;
                                } else {
                                    votes[5] = 1;
                                }
                            } else {
                                if (rr_std <= 11.555999755859375) {
                                    if (systolic_time <= 0.06661622226238251) {
                                        votes[5] = 3;
                                    } else {
                                        votes[5] = 3;
                                    }
                                } else {
                                    votes[5] = 1;
                                }
                            }
                        } else {
                            if (systolic_area <= 400028.015625) {
                                if (diff_median <= 18.704381942749023) {
                                    votes[5] = 1;
                                } else {
                                    if (rr_std <= 11.341573238372803) {
                                        if (ss_median <= 50.5) {
                                            votes[5] = 1;
                                        } else {
                                            votes[5] = 1;
                                        }
                                    } else {
                                        votes[5] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 10.24718952178955) {
                                    if (diff_median <= 23.205286026000977) {
                                        votes[5] = 1;
                                    } else {
                                        votes[5] = 5;
                                    }
                                } else {
                                    votes[5] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 16.734527587890625) {
                            if (systolic_area <= 110712.87890625) {
                                if (systolic_time <= 0.523028552532196) {
                                    votes[5] = 5;
                                } else {
                                    votes[5] = 5;
                                }
                            } else {
                                if (ss_median <= 49.75) {
                                    if (systolic_area <= 776996.8125) {
                                        if (diff_median <= 16.30537509918213) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    } else {
                                        votes[5] = 2;
                                    }
                                } else {
                                    if (rr_std <= 12.393282413482666) {
                                        if (systolic_time <= 0.1228371225297451) {
                                            votes[5] = 3;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 13.341158390045166) {
                                            votes[5] = 5;
                                        } else {
                                            votes[5] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 205629.3125) {
                                if (rr_std <= 19.39901828765869) {
                                    if (ss_median <= 50.5) {
                                        votes[5] = 1;
                                    } else {
                                        votes[5] = 5;
                                    }
                                } else {
                                    votes[5] = 1;
                                }
                            } else {
                                if (systolic_time <= 0.14563491940498352) {
                                    votes[5] = 4;
                                } else {
                                    votes[5] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.3821439743042) {
                    if (systolic_area <= 1599360.5625) {
                        votes[5] = 5;
                    } else {
                        if (diff_median <= 16.85677480697632) {
                            votes[5] = 3;
                        } else {
                            votes[5] = 3;
                        }
                    }
                } else {
                    if (ss_median <= 48.25) {
                        if (systolic_time <= 0.03401308134198189) {
                            votes[5] = 4;
                        } else {
                            votes[5] = 3;
                        }
                    } else {
                        if (systolic_area <= 1408954.375) {
                            if (systolic_time <= 0.09061052650213242) {
                                votes[5] = 1;
                            } else {
                                if (ss_median <= 58.5) {
                                    votes[5] = 4;
                                } else {
                                    votes[5] = 4;
                                }
                            }
                        } else {
                            if (rr_std <= 10.356534481048584) {
                                votes[5] = 4;
                            } else {
                                votes[5] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 10.052003860473633) {
                if (systolic_area <= 258959.46875) {
                    if (ss_median <= 73.5) {
                        if (systolic_time <= 0.4224444329738617) {
                            if (diff_median <= 4.156393885612488) {
                                votes[5] = 2;
                            } else {
                                if (systolic_area <= 175571.1875) {
                                    votes[5] = 2;
                                } else {
                                    votes[5] = 2;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.45197059214115143) {
                                votes[5] = 5;
                            } else {
                                if (ss_median <= 72.25) {
                                    votes[5] = 2;
                                } else {
                                    votes[5] = 2;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 92910.6015625) {
                            votes[5] = 2;
                        } else {
                            votes[5] = 3;
                        }
                    }
                } else {
                    votes[5] = 3;
                }
            } else {
                if (diff_median <= 23.43253803253174) {
                    if (rr_std <= 18.81850242614746) {
                        if (rr_std <= 13.313341617584229) {
                            votes[5] = 3;
                        } else {
                            votes[5] = 3;
                        }
                    } else {
                        votes[5] = 4;
                    }
                } else {
                    votes[5] = 5;
                }
            }
        }
    }
// Decision rules for tree 6
    if (diff_median <= 0.03039355669170618) {
        if (diff_median <= 0.004079991718754172) {
            votes[6] = 0;
        } else {
            if (rr_std <= 5.355673313140869) {
                votes[6] = 0;
            } else {
                if (rr_std <= 102.29393005371094) {
                    votes[6] = 0;
                } else {
                    votes[6] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 971634.75) {
                if (systolic_area <= 41123.59375) {
                    if (systolic_time <= 0.3966631442308426) {
                        if (diff_median <= 16.397000312805176) {
                            if (systolic_time <= 0.27971282601356506) {
                                if (ss_median <= 57.25) {
                                    if (rr_std <= 27.121949195861816) {
                                        votes[6] = 4;
                                    } else {
                                        votes[6] = 4;
                                    }
                                } else {
                                    votes[6] = 4;
                                }
                            } else {
                                if (diff_median <= 3.0059051513671875) {
                                    votes[6] = 4;
                                } else {
                                    votes[6] = 2;
                                }
                            }
                        } else {
                            votes[6] = 3;
                        }
                    } else {
                        if (ss_median <= 50.25) {
                            if (rr_std <= 20.167168617248535) {
                                votes[6] = 1;
                            } else {
                                votes[6] = 1;
                            }
                        } else {
                            if (rr_std <= 24.649049758911133) {
                                if (rr_std <= 17.43222713470459) {
                                    if (systolic_area <= 25692.751953125) {
                                        votes[6] = 5;
                                    } else {
                                        votes[6] = 2;
                                    }
                                } else {
                                    if (systolic_area <= 21647.173828125) {
                                        votes[6] = 2;
                                    } else {
                                        votes[6] = 2;
                                    }
                                }
                            } else {
                                votes[6] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.07976000010967255) {
                        if (ss_median <= 45.75) {
                            if (systolic_area <= 427530.359375) {
                                votes[6] = 1;
                            } else {
                                votes[6] = 3;
                            }
                        } else {
                            if (systolic_area <= 887508.5625) {
                                if (systolic_time <= 0.06246769055724144) {
                                    if (ss_median <= 51.5) {
                                        votes[6] = 1;
                                    } else {
                                        if (rr_std <= 10.980193614959717) {
                                            votes[6] = 1;
                                        } else {
                                            votes[6] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 304628.71875) {
                                        votes[6] = 1;
                                    } else {
                                        if (diff_median <= 31.09558391571045) {
                                            votes[6] = 3;
                                        } else {
                                            votes[6] = 1;
                                        }
                                    }
                                }
                            } else {
                                votes[6] = 3;
                            }
                        }
                    } else {
                        if (ss_median <= 47.75) {
                            if (systolic_time <= 0.21090109646320343) {
                                if (diff_median <= 20.71765422821045) {
                                    if (ss_median <= 45.75) {
                                        if (systolic_area <= 229990.90625) {
                                            votes[6] = 5;
                                        } else {
                                            votes[6] = 5;
                                        }
                                    } else {
                                        votes[6] = 4;
                                    }
                                } else {
                                    if (rr_std <= 13.706404209136963) {
                                        if (systolic_area <= 305720.46875) {
                                            votes[6] = 1;
                                        } else {
                                            votes[6] = 1;
                                        }
                                    } else {
                                        votes[6] = 4;
                                    }
                                }
                            } else {
                                if (ss_median <= 42.0) {
                                    votes[6] = 5;
                                } else {
                                    votes[6] = 5;
                                }
                            }
                        } else {
                            if (diff_median <= 49.23078155517578) {
                                if (systolic_area <= 111183.828125) {
                                    if (rr_std <= 13.937257766723633) {
                                        votes[6] = 5;
                                    } else {
                                        votes[6] = 1;
                                    }
                                } else {
                                    if (systolic_time <= 0.15661735832691193) {
                                        if (systolic_area <= 270213.1875) {
                                            votes[6] = 1;
                                        } else {
                                            votes[6] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 49.75) {
                                            votes[6] = 5;
                                        } else {
                                            votes[6] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[6] = 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.372697830200195) {
                    if (diff_median <= 19.74546527862549) {
                        if (systolic_time <= 0.053215669468045235) {
                            if (diff_median <= 6.027561187744141) {
                                votes[6] = 3;
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
                    if (diff_median <= 18.43701171875) {
                        if (systolic_area <= 1656005.0625) {
                            if (ss_median <= 53.0) {
                                if (systolic_time <= 0.05057777836918831) {
                                    votes[6] = 4;
                                } else {
                                    votes[6] = 5;
                                }
                            } else {
                                if (systolic_time <= 0.09110606089234352) {
                                    votes[6] = 4;
                                } else {
                                    votes[6] = 4;
                                }
                            }
                        } else {
                            votes[6] = 4;
                        }
                    } else {
                        votes[6] = 1;
                    }
                }
            }
        } else {
            if (systolic_area <= 230412.609375) {
                if (rr_std <= 9.440065383911133) {
                    if (ss_median <= 73.5) {
                        if (systolic_area <= 74053.2109375) {
                            votes[6] = 2;
                        } else {
                            if (systolic_area <= 176308.328125) {
                                if (systolic_time <= 0.4179298132658005) {
                                    if (diff_median <= 4.156393885612488) {
                                        votes[6] = 2;
                                    } else {
                                        votes[6] = 2;
                                    }
                                } else {
                                    if (systolic_area <= 82835.1796875) {
                                        votes[6] = 2;
                                    } else {
                                        votes[6] = 2;
                                    }
                                }
                            } else {
                                votes[6] = 2;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.42000000178813934) {
                            votes[6] = 5;
                        } else {
                            votes[6] = 2;
                        }
                    }
                } else {
                    if (systolic_time <= 0.2658115029335022) {
                        votes[6] = 4;
                    } else {
                        votes[6] = 2;
                    }
                }
            } else {
                if (diff_median <= 23.58607292175293) {
                    if (systolic_time <= 0.10066940635442734) {
                        votes[6] = 3;
                    } else {
                        votes[6] = 3;
                    }
                } else {
                    votes[6] = 5;
                }
            }
        }
    }
// Decision rules for tree 7
    if (diff_median <= 0.06968991085886955) {
        if (diff_median <= 0.004066428868100047) {
            votes[7] = 2;
        } else {
            if (rr_std <= 4.194984555244446) {
                votes[7] = 0;
            } else {
                if (rr_std <= 102.29393005371094) {
                    votes[7] = 0;
                } else {
                    votes[7] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1144473.8125) {
                if (rr_std <= 20.051213264465332) {
                    if (systolic_time <= 0.07799103856086731) {
                        if (systolic_area <= 20535.84765625) {
                            if (diff_median <= 7.254663467407227) {
                                votes[7] = 4;
                            } else {
                                votes[7] = 3;
                            }
                        } else {
                            if (diff_median <= 7.9117677211761475) {
                                if (rr_std <= 8.562669277191162) {
                                    votes[7] = 3;
                                } else {
                                    if (rr_std <= 11.06826114654541) {
                                        votes[7] = 4;
                                    } else {
                                        votes[7] = 1;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.07239452376961708) {
                                    if (ss_median <= 45.5) {
                                        if (systolic_area <= 374237.609375) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 5;
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
                        if (systolic_area <= 32801.705078125) {
                            if (diff_median <= 2.253009796142578) {
                                votes[7] = 4;
                            } else {
                                if (rr_std <= 13.585935592651367) {
                                    votes[7] = 5;
                                } else {
                                    if (systolic_area <= 22030.0830078125) {
                                        votes[7] = 2;
                                    } else {
                                        votes[7] = 2;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 48.75) {
                                if (diff_median <= 19.637072563171387) {
                                    if (systolic_time <= 0.12188585847616196) {
                                        if (systolic_area <= 316059.28125) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    } else {
                                        if (systolic_time <= 0.2392616644501686) {
                                            votes[7] = 5;
                                        } else {
                                            votes[7] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.19648461043834686) {
                                        if (diff_median <= 24.080496788024902) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    } else {
                                        votes[7] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.096088886260986) {
                                    if (diff_median <= 10.803021907806396) {
                                        if (systolic_time <= 0.1019778735935688) {
                                            votes[7] = 1;
                                        } else {
                                            votes[7] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 60.5) {
                                            votes[7] = 3;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 51.25) {
                                        votes[7] = 3;
                                    } else {
                                        if (ss_median <= 54.5) {
                                            votes[7] = 5;
                                        } else {
                                            votes[7] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.4236631542444229) {
                        if (systolic_area <= 48445.234375) {
                            if (systolic_area <= 31961.833984375) {
                                votes[7] = 4;
                            } else {
                                votes[7] = 4;
                            }
                        } else {
                            if (ss_median <= 47.5) {
                                votes[7] = 4;
                            } else {
                                if (systolic_time <= 0.0788184218108654) {
                                    votes[7] = 1;
                                } else {
                                    votes[7] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 24.649049758911133) {
                            if (systolic_area <= 19255.474609375) {
                                if (rr_std <= 21.95082950592041) {
                                    votes[7] = 2;
                                } else {
                                    votes[7] = 2;
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
                if (rr_std <= 9.296097755432129) {
                    if (diff_median <= 9.679653644561768) {
                        votes[7] = 4;
                    } else {
                        if (systolic_area <= 2104150.1875) {
                            votes[7] = 3;
                        } else {
                            votes[7] = 3;
                        }
                    }
                } else {
                    if (systolic_time <= 0.03255797550082207) {
                        votes[7] = 1;
                    } else {
                        if (ss_median <= 50.5) {
                            if (systolic_area <= 1826244.625) {
                                votes[7] = 5;
                            } else {
                                votes[7] = 4;
                            }
                        } else {
                            votes[7] = 4;
                        }
                    }
                }
            }
        } else {
            if (systolic_area <= 180689.3984375) {
                if (systolic_area <= 74396.34375) {
                    if (rr_std <= 17.917859077453613) {
                        votes[7] = 5;
                    } else {
                        votes[7] = 4;
                    }
                } else {
                    if (diff_median <= 18.279601573944092) {
                        if (diff_median <= 3.699536919593811) {
                            votes[7] = 2;
                        } else {
                            if (systolic_time <= 0.37747272849082947) {
                                votes[7] = 2;
                            } else {
                                if (ss_median <= 72.25) {
                                    votes[7] = 2;
                                } else {
                                    if (systolic_area <= 86279.87890625) {
                                        votes[7] = 2;
                                    } else {
                                        votes[7] = 2;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[7] = 2;
                    }
                }
            } else {
                if (systolic_time <= 0.10244156047701836) {
                    if (diff_median <= 12.11222219467163) {
                        votes[7] = 3;
                    } else {
                        votes[7] = 3;
                    }
                } else {
                    if (ss_median <= 68.75) {
                        votes[7] = 2;
                    } else {
                        votes[7] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 8
    if (diff_median <= 0.030496088787913322) {
        if (rr_std <= 4.010679841041565) {
            votes[8] = 2;
        } else {
            if (diff_median <= 0.004066428868100047) {
                votes[8] = 0;
            } else {
                if (rr_std <= 97.28718185424805) {
                    votes[8] = 0;
                } else {
                    votes[8] = 0;
                }
            }
        }
    } else {
        if (systolic_time <= 0.28987911343574524) {
            if (systolic_area <= 1318163.0625) {
                if (systolic_area <= 47907.599609375) {
                    if (diff_median <= 10.98346996307373) {
                        if (rr_std <= 10.280362606048584) {
                            votes[8] = 4;
                        } else {
                            if (systolic_area <= 32065.0126953125) {
                                if (systolic_area <= 23940.4140625) {
                                    votes[8] = 4;
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
                    if (systolic_time <= 0.0670887902379036) {
                        if (systolic_area <= 853798.53125) {
                            if (ss_median <= 44.5) {
                                votes[8] = 1;
                            } else {
                                if (rr_std <= 10.598057270050049) {
                                    votes[8] = 1;
                                } else {
                                    votes[8] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 11.209504127502441) {
                                if (diff_median <= 6.293206691741943) {
                                    votes[8] = 3;
                                } else {
                                    votes[8] = 3;
                                }
                            } else {
                                if (systolic_time <= 0.03253014013171196) {
                                    votes[8] = 4;
                                } else {
                                    votes[8] = 1;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (diff_median <= 17.756528854370117) {
                                if (rr_std <= 8.948293685913086) {
                                    if (systolic_area <= 364103.546875) {
                                        if (systolic_time <= 0.12721311300992966) {
                                            votes[8] = 5;
                                        } else {
                                            votes[8] = 5;
                                        }
                                    } else {
                                        votes[8] = 5;
                                    }
                                } else {
                                    if (rr_std <= 15.372120380401611) {
                                        if (diff_median <= 9.72336721420288) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 12.183470726013184) {
                                            votes[8] = 4;
                                        } else {
                                            votes[8] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 306321.296875) {
                                    if (systolic_time <= 0.17918182164430618) {
                                        if (ss_median <= 47.75) {
                                            votes[8] = 1;
                                        } else {
                                            votes[8] = 3;
                                        }
                                    } else {
                                        votes[8] = 5;
                                    }
                                } else {
                                    if (diff_median <= 32.17816925048828) {
                                        if (diff_median <= 21.97072982788086) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 3;
                                        }
                                    } else {
                                        votes[8] = 5;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 66.5) {
                                if (systolic_area <= 1004370.375) {
                                    if (systolic_time <= 0.08043722808361053) {
                                        votes[8] = 1;
                                    } else {
                                        if (rr_std <= 18.598291397094727) {
                                            votes[8] = 3;
                                        } else {
                                            votes[8] = 4;
                                        }
                                    }
                                } else {
                                    votes[8] = 4;
                                }
                            } else {
                                if (systolic_area <= 216288.9609375) {
                                    if (rr_std <= 7.053416967391968) {
                                        if (diff_median <= 8.532621383666992) {
                                            votes[8] = 2;
                                        } else {
                                            votes[8] = 2;
                                        }
                                    } else {
                                        votes[8] = 5;
                                    }
                                } else {
                                    if (systolic_time <= 0.10244156047701836) {
                                        votes[8] = 3;
                                    } else {
                                        votes[8] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 17.81293773651123) {
                    if (rr_std <= 9.488260269165039) {
                        votes[8] = 4;
                    } else {
                        if (ss_median <= 48.75) {
                            if (diff_median <= 10.053407669067383) {
                                votes[8] = 4;
                            } else {
                                votes[8] = 4;
                            }
                        } else {
                            if (rr_std <= 18.2642879486084) {
                                if (ss_median <= 61.75) {
                                    votes[8] = 4;
                                } else {
                                    votes[8] = 4;
                                }
                            } else {
                                votes[8] = 4;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 1806142.1875) {
                        votes[8] = 3;
                    } else {
                        votes[8] = 3;
                    }
                }
            }
        } else {
            if (diff_median <= 15.469798564910889) {
                if (rr_std <= 24.95895004272461) {
                    if (systolic_area <= 126581.0390625) {
                        if (ss_median <= 48.75) {
                            if (systolic_area <= 22439.1611328125) {
                                votes[8] = 1;
                            } else {
                                votes[8] = 5;
                            }
                        } else {
                            if (diff_median <= 4.61957049369812) {
                                if (diff_median <= 3.9372342824935913) {
                                    if (systolic_area <= 25161.6845703125) {
                                        votes[8] = 5;
                                    } else {
                                        if (diff_median <= 3.3828256130218506) {
                                            votes[8] = 2;
                                        } else {
                                            votes[8] = 2;
                                        }
                                    }
                                } else {
                                    votes[8] = 5;
                                }
                            } else {
                                if (ss_median <= 73.5) {
                                    if (ss_median <= 70.75) {
                                        if (systolic_area <= 27213.234375) {
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
                            }
                        }
                    } else {
                        votes[8] = 3;
                    }
                } else {
                    if (systolic_time <= 0.6757999956607819) {
                        votes[8] = 1;
                    } else {
                        votes[8] = 1;
                    }
                }
            } else {
                if (rr_std <= 19.0089750289917) {
                    if (systolic_area <= 101912.30078125) {
                        votes[8] = 5;
                    } else {
                        votes[8] = 3;
                    }
                } else {
                    votes[8] = 1;
                }
            }
        }
    }
// Decision rules for tree 9
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.003955815336667001) {
            votes[9] = 2;
        } else {
            if (rr_std <= 6.345560550689697) {
                votes[9] = 2;
            } else {
                votes[9] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.2760000079870224) {
            if (systolic_area <= 1146499.8125) {
                if (systolic_area <= 53340.630859375) {
                    if (diff_median <= 16.397000312805176) {
                        if (diff_median <= 2.3086659908294678) {
                            votes[9] = 4;
                        } else {
                            if (diff_median <= 3.2120081186294556) {
                                votes[9] = 4;
                            } else {
                                if (rr_std <= 23.737985610961914) {
                                    votes[9] = 4;
                                } else {
                                    votes[9] = 4;
                                }
                            }
                        }
                    } else {
                        votes[9] = 3;
                    }
                } else {
                    if (systolic_time <= 0.07345353066921234) {
                        if (ss_median <= 44.25) {
                            votes[9] = 3;
                        } else {
                            if (systolic_area <= 1041651.1875) {
                                if (ss_median <= 58.25) {
                                    if (systolic_area <= 447963.171875) {
                                        votes[9] = 1;
                                    } else {
                                        if (systolic_area <= 722909.625) {
                                            votes[9] = 1;
                                        } else {
                                            votes[9] = 1;
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
                        if (ss_median <= 48.75) {
                            if (diff_median <= 7.803195238113403) {
                                if (rr_std <= 9.223421573638916) {
                                    votes[9] = 5;
                                } else {
                                    votes[9] = 5;
                                }
                            } else {
                                if (systolic_time <= 0.1538461521267891) {
                                    if (diff_median <= 18.70326805114746) {
                                        if (systolic_area <= 234958.796875) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 11.437215328216553) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 1;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 47.5) {
                                        if (systolic_area <= 193914.3984375) {
                                            votes[9] = 5;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    } else {
                                        votes[9] = 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 15.785616397857666) {
                                if (ss_median <= 66.5) {
                                    if (ss_median <= 61.75) {
                                        if (rr_std <= 9.631169319152832) {
                                            votes[9] = 3;
                                        } else {
                                            votes[9] = 3;
                                        }
                                    } else {
                                        if (systolic_time <= 0.12781909108161926) {
                                            votes[9] = 3;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 7.0890419483184814) {
                                        if (ss_median <= 68.5) {
                                            votes[9] = 2;
                                        } else {
                                            votes[9] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 23.40548801422119) {
                                            votes[9] = 3;
                                        } else {
                                            votes[9] = 5;
                                        }
                                    }
                                }
                            } else {
                                votes[9] = 5;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.524711847305298) {
                    votes[9] = 3;
                } else {
                    if (systolic_area <= 1460716.75) {
                        if (systolic_time <= 0.09231007844209671) {
                            if (systolic_time <= 0.052914200350642204) {
                                votes[9] = 1;
                            } else {
                                votes[9] = 5;
                            }
                        } else {
                            votes[9] = 4;
                        }
                    } else {
                        if (diff_median <= 14.112196445465088) {
                            if (ss_median <= 59.5) {
                                votes[9] = 4;
                            } else {
                                votes[9] = 4;
                            }
                        } else {
                            votes[9] = 4;
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 66.5) {
                if (systolic_area <= 32047.890625) {
                    if (ss_median <= 50.25) {
                        if (systolic_time <= 0.4717019647359848) {
                            votes[9] = 4;
                        } else {
                            if (diff_median <= 2.682203531265259) {
                                votes[9] = 1;
                            } else {
                                votes[9] = 1;
                            }
                        }
                    } else {
                        if (systolic_time <= 1.0308571457862854) {
                            if (rr_std <= 25.4495849609375) {
                                if (ss_median <= 57.0) {
                                    if (rr_std <= 15.065435409545898) {
                                        votes[9] = 2;
                                    } else {
                                        votes[9] = 2;
                                    }
                                } else {
                                    if (diff_median <= 6.140036582946777) {
                                        votes[9] = 1;
                                    } else {
                                        votes[9] = 2;
                                    }
                                }
                            } else {
                                votes[9] = 1;
                            }
                        } else {
                            votes[9] = 1;
                        }
                    }
                } else {
                    if (systolic_area <= 125254.74609375) {
                        if (diff_median <= 7.113425970077515) {
                            votes[9] = 5;
                        } else {
                            votes[9] = 5;
                        }
                    } else {
                        if (systolic_time <= 0.29846152663230896) {
                            votes[9] = 4;
                        } else {
                            votes[9] = 3;
                        }
                    }
                }
            } else {
                if (ss_median <= 73.75) {
                    if (systolic_time <= 0.46441176533699036) {
                        if (systolic_area <= 119666.0) {
                            if (systolic_time <= 0.4224444329738617) {
                                votes[9] = 2;
                            } else {
                                if (systolic_area <= 82429.99609375) {
                                    votes[9] = 2;
                                } else {
                                    votes[9] = 2;
                                }
                            }
                        } else {
                            votes[9] = 2;
                        }
                    } else {
                        votes[9] = 2;
                    }
                } else {
                    votes[9] = 5;
                }
            }
        }
    }
// Decision rules for tree 10
    if (diff_median <= 0.03044529166072607) {
        if (diff_median <= 0.004066428868100047) {
            votes[10] = 2;
        } else {
            if (rr_std <= 8.064436435699463) {
                votes[10] = 0;
            } else {
                if (rr_std <= 96.6473503112793) {
                    votes[10] = 0;
                } else {
                    votes[10] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1203138.0) {
                if (systolic_area <= 47907.599609375) {
                    if (systolic_time <= 0.348181813955307) {
                        if (diff_median <= 12.45402479171753) {
                            if (systolic_time <= 0.27278853952884674) {
                                if (systolic_time <= 0.1867000013589859) {
                                    if (systolic_time <= 0.0730285719037056) {
                                        if (diff_median <= 1.6159321069717407) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 4;
                                        }
                                    } else {
                                        votes[10] = 5;
                                    }
                                } else {
                                    votes[10] = 4;
                                }
                            } else {
                                votes[10] = 5;
                            }
                        } else {
                            votes[10] = 3;
                        }
                    } else {
                        if (ss_median <= 51.0) {
                            if (systolic_time <= 0.5427692234516144) {
                                votes[10] = 2;
                            } else {
                                if (systolic_time <= 0.7513939440250397) {
                                    votes[10] = 1;
                                } else {
                                    votes[10] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 24.649049758911133) {
                                if (rr_std <= 13.090222358703613) {
                                    votes[10] = 5;
                                } else {
                                    if (ss_median <= 58.5) {
                                        votes[10] = 2;
                                    } else {
                                        votes[10] = 2;
                                    }
                                }
                            } else {
                                votes[10] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.1334463283419609) {
                        if (rr_std <= 9.839892387390137) {
                            if (ss_median <= 48.75) {
                                if (systolic_area <= 696451.375) {
                                    if (systolic_time <= 0.09391539543867111) {
                                        if (rr_std <= 5.8127405643463135) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 8.047057151794434) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 3;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 10.156028270721436) {
                                        votes[10] = 3;
                                    } else {
                                        votes[10] = 3;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.06007608212530613) {
                                    votes[10] = 1;
                                } else {
                                    if (diff_median <= 18.381444931030273) {
                                        if (rr_std <= 6.586509466171265) {
                                            votes[10] = 1;
                                        } else {
                                            votes[10] = 3;
                                        }
                                    } else {
                                        votes[10] = 1;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 43.0) {
                                votes[10] = 5;
                            } else {
                                if (systolic_area <= 316519.34375) {
                                    if (diff_median <= 12.187095642089844) {
                                        if (ss_median <= 52.5) {
                                            votes[10] = 4;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= 242131.2734375) {
                                            votes[10] = 1;
                                        } else {
                                            votes[10] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.06280690617859364) {
                                        if (diff_median <= 7.9117677211761475) {
                                            votes[10] = 1;
                                        } else {
                                            votes[10] = 1;
                                        }
                                    } else {
                                        if (systolic_time <= 0.10331204161047935) {
                                            votes[10] = 1;
                                        } else {
                                            votes[10] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (rr_std <= 6.493090629577637) {
                                votes[10] = 3;
                            } else {
                                if (systolic_time <= 0.21005982905626297) {
                                    if (diff_median <= 21.737714767456055) {
                                        if (systolic_time <= 0.1504853144288063) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 5;
                                        }
                                    } else {
                                        votes[10] = 1;
                                    }
                                } else {
                                    if (ss_median <= 42.5) {
                                        votes[10] = 5;
                                    } else {
                                        votes[10] = 5;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 96144.37890625) {
                                votes[10] = 5;
                            } else {
                                if (diff_median <= 11.812473773956299) {
                                    if (rr_std <= 6.0096540451049805) {
                                        votes[10] = 3;
                                    } else {
                                        if (systolic_area <= 235649.21875) {
                                            votes[10] = 5;
                                        } else {
                                            votes[10] = 2;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 43.7681884765625) {
                                        if (systolic_time <= 0.16290666162967682) {
                                            votes[10] = 3;
                                        } else {
                                            votes[10] = 3;
                                        }
                                    } else {
                                        votes[10] = 3;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.524711847305298) {
                    votes[10] = 3;
                } else {
                    if (systolic_area <= 1727948.1875) {
                        if (systolic_time <= 0.07731464132666588) {
                            if (systolic_time <= 0.05070512741804123) {
                                votes[10] = 1;
                            } else {
                                votes[10] = 5;
                            }
                        } else {
                            votes[10] = 4;
                        }
                    } else {
                        if (rr_std <= 9.46604299545288) {
                            votes[10] = 4;
                        } else {
                            votes[10] = 4;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.244638442993164) {
                if (systolic_area <= 242029.390625) {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 3.699536919593811) {
                            votes[10] = 2;
                        } else {
                            if (systolic_area <= 189480.5546875) {
                                if (diff_median <= 13.705848217010498) {
                                    if (systolic_area <= 90264.46875) {
                                        if (systolic_area <= 82429.99609375) {
                                            votes[10] = 2;
                                        } else {
                                            votes[10] = 2;
                                        }
                                    } else {
                                        votes[10] = 2;
                                    }
                                } else {
                                    votes[10] = 2;
                                }
                            } else {
                                votes[10] = 2;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.42000000178813934) {
                            votes[10] = 3;
                        } else {
                            votes[10] = 2;
                        }
                    }
                } else {
                    votes[10] = 3;
                }
            } else {
                if (systolic_time <= 0.10244156047701836) {
                    votes[10] = 3;
                } else {
                    if (ss_median <= 71.0) {
                        votes[10] = 4;
                    } else {
                        votes[10] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 11
    if (diff_median <= 0.03044529166072607) {
        if (rr_std <= 102.29393005371094) {
            if (systolic_time <= 0.9605000019073486) {
                if (ss_median <= 60.75) {
                    votes[11] = 0;
                } else {
                    votes[11] = 0;
                }
            } else {
                votes[11] = 0;
            }
        } else {
            votes[11] = 0;
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1267299.375) {
                if (rr_std <= 21.471281051635742) {
                    if (systolic_time <= 0.08722148090600967) {
                        if (systolic_area <= 24279.154296875) {
                            if (diff_median <= 7.187116622924805) {
                                votes[11] = 4;
                            } else {
                                votes[11] = 3;
                            }
                        } else {
                            if (rr_std <= 6.3677449226379395) {
                                if (systolic_area <= 738748.78125) {
                                    votes[11] = 1;
                                } else {
                                    votes[11] = 3;
                                }
                            } else {
                                if (ss_median <= 43.5) {
                                    votes[11] = 5;
                                } else {
                                    if (systolic_time <= 0.07239452376961708) {
                                        if (ss_median <= 46.5) {
                                            votes[11] = 1;
                                        } else {
                                            votes[11] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 400028.015625) {
                                            votes[11] = 1;
                                        } else {
                                            votes[11] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 36130.205078125) {
                            if (diff_median <= 2.311736822128296) {
                                votes[11] = 4;
                            } else {
                                if (diff_median <= 7.407515287399292) {
                                    if (systolic_area <= 22030.0830078125) {
                                        votes[11] = 1;
                                    } else {
                                        if (rr_std <= 15.740625858306885) {
                                            votes[11] = 2;
                                        } else {
                                            votes[11] = 2;
                                        }
                                    }
                                } else {
                                    votes[11] = 5;
                                }
                            }
                        } else {
                            if (ss_median <= 49.25) {
                                if (systolic_time <= 0.1761225312948227) {
                                    if (rr_std <= 2.5341391563415527) {
                                        votes[11] = 5;
                                    } else {
                                        if (diff_median <= 6.077291250228882) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.2790663093328476) {
                                        if (ss_median <= 47.5) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 9.161475658416748) {
                                            votes[11] = 5;
                                        } else {
                                            votes[11] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 14.913286209106445) {
                                    if (systolic_area <= 99900.75) {
                                        votes[11] = 5;
                                    } else {
                                        if (systolic_area <= 759003.90625) {
                                            votes[11] = 3;
                                        } else {
                                            votes[11] = 4;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 95152.453125) {
                                        votes[11] = 5;
                                    } else {
                                        votes[11] = 5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.3258095383644104) {
                        if (systolic_area <= 47394.4375) {
                            if (ss_median <= 46.75) {
                                votes[11] = 4;
                            } else {
                                if (systolic_area <= 32188.9501953125) {
                                    votes[11] = 1;
                                } else {
                                    votes[11] = 4;
                                }
                            }
                        } else {
                            if (systolic_area <= 254601.21875) {
                                votes[11] = 1;
                            } else {
                                votes[11] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 24.649049758911133) {
                            if (systolic_area <= 19255.474609375) {
                                votes[11] = 2;
                            } else {
                                votes[11] = 1;
                            }
                        } else {
                            if (systolic_time <= 0.6793636381626129) {
                                votes[11] = 1;
                            } else {
                                votes[11] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.453460693359375) {
                    if (ss_median <= 54.75) {
                        if (systolic_area <= 1548233.0625) {
                            if (systolic_time <= 0.05150292441248894) {
                                votes[11] = 1;
                            } else {
                                votes[11] = 5;
                            }
                        } else {
                            if (systolic_area <= 2503581.75) {
                                votes[11] = 4;
                            } else {
                                votes[11] = 4;
                            }
                        }
                    } else {
                        votes[11] = 4;
                    }
                } else {
                    votes[11] = 3;
                }
            }
        } else {
            if (rr_std <= 9.244638442993164) {
                if (systolic_area <= 176308.328125) {
                    if (diff_median <= 4.29285192489624) {
                        votes[11] = 2;
                    } else {
                        if (systolic_time <= 0.4251111000776291) {
                            if (ss_median <= 73.5) {
                                votes[11] = 2;
                            } else {
                                votes[11] = 2;
                            }
                        } else {
                            if (systolic_time <= 0.4557647109031677) {
                                votes[11] = 5;
                            } else {
                                votes[11] = 2;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 16.666950225830078) {
                        if (ss_median <= 70.75) {
                            votes[11] = 3;
                        } else {
                            votes[11] = 5;
                        }
                    } else {
                        votes[11] = 2;
                    }
                }
            } else {
                if (rr_std <= 19.15857696533203) {
                    if (diff_median <= 10.697125911712646) {
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
    if (diff_median <= 0.030496088787913322) {
        if (rr_std <= 4.010679841041565) {
            votes[12] = 0;
        } else {
            if (rr_std <= 95.39395141601562) {
                if (ss_median <= 60.75) {
                    votes[12] = 0;
                } else {
                    votes[12] = 0;
                }
            } else {
                votes[12] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1144473.8125) {
                if (systolic_area <= 40880.857421875) {
                    if (systolic_time <= 0.27178163826465607) {
                        if (diff_median <= 11.950178146362305) {
                            if (ss_median <= 48.75) {
                                votes[12] = 4;
                            } else {
                                votes[12] = 4;
                            }
                        } else {
                            votes[12] = 3;
                        }
                    } else {
                        if (rr_std <= 24.649049758911133) {
                            if (rr_std <= 15.065435409545898) {
                                if (systolic_time <= 0.3989555537700653) {
                                    votes[12] = 2;
                                } else {
                                    votes[12] = 5;
                                }
                            } else {
                                if (systolic_time <= 1.023714303970337) {
                                    if (diff_median <= 2.659488558769226) {
                                        votes[12] = 2;
                                    } else {
                                        if (ss_median <= 50.25) {
                                            votes[12] = 2;
                                        } else {
                                            votes[12] = 2;
                                        }
                                    }
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        } else {
                            if (diff_median <= 3.396470785140991) {
                                votes[12] = 1;
                            } else {
                                votes[12] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08486853539943695) {
                        if (rr_std <= 10.214312076568604) {
                            if (systolic_area <= 320136.859375) {
                                votes[12] = 1;
                            } else {
                                if (systolic_time <= 0.07149148359894753) {
                                    if (systolic_area <= 395767.984375) {
                                        if (diff_median <= 28.502914428710938) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 1;
                                        }
                                    } else {
                                        if (rr_std <= 7.533063173294067) {
                                            votes[12] = 3;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    }
                                } else {
                                    votes[12] = 3;
                                }
                            }
                        } else {
                            if (diff_median <= 32.49612903594971) {
                                if (diff_median <= 5.5962231159210205) {
                                    if (systolic_time <= 0.044741399586200714) {
                                        votes[12] = 1;
                                    } else {
                                        votes[12] = 3;
                                    }
                                } else {
                                    if (diff_median <= 18.004337310791016) {
                                        if (diff_median <= 10.047101974487305) {
                                            votes[12] = 1;
                                        } else {
                                            votes[12] = 1;
                                        }
                                    } else {
                                        votes[12] = 1;
                                    }
                                }
                            } else {
                                votes[12] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 15.087306499481201) {
                            if (systolic_area <= 109292.83984375) {
                                if (systolic_time <= 0.523028552532196) {
                                    votes[12] = 5;
                                } else {
                                    votes[12] = 5;
                                }
                            } else {
                                if (systolic_time <= 0.1873857080936432) {
                                    if (diff_median <= 34.943166732788086) {
                                        if (systolic_area <= 187679.9375) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 3;
                                        }
                                    } else {
                                        votes[12] = 1;
                                    }
                                } else {
                                    if (ss_median <= 56.0) {
                                        if (diff_median <= 8.84321665763855) {
                                            votes[12] = 3;
                                        } else {
                                            votes[12] = 3;
                                        }
                                    } else {
                                        votes[12] = 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 20.18163299560547) {
                                if (ss_median <= 44.25) {
                                    votes[12] = 5;
                                } else {
                                    if (systolic_time <= 0.14925303310155869) {
                                        votes[12] = 1;
                                    } else {
                                        if (rr_std <= 17.603208541870117) {
                                            votes[12] = 5;
                                        } else {
                                            votes[12] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 24.595863342285156) {
                                    votes[12] = 4;
                                } else {
                                    votes[12] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.13351345062256) {
                    if (rr_std <= 9.611593246459961) {
                        if (systolic_area <= 2248010.0) {
                            votes[12] = 1;
                        } else {
                            votes[12] = 4;
                        }
                    } else {
                        if (systolic_time <= 0.03255549818277359) {
                            votes[12] = 4;
                        } else {
                            if (ss_median <= 48.25) {
                                if (systolic_time <= 0.033687978982925415) {
                                    votes[12] = 4;
                                } else {
                                    votes[12] = 5;
                                }
                            } else {
                                if (rr_std <= 10.294044494628906) {
                                    votes[12] = 4;
                                } else {
                                    votes[12] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (ss_median <= 53.25) {
                        if (systolic_time <= 0.050268396735191345) {
                            votes[12] = 3;
                        } else {
                            votes[12] = 3;
                        }
                    } else {
                        votes[12] = 5;
                    }
                }
            }
        } else {
            if (systolic_area <= 216288.9609375) {
                if (ss_median <= 73.75) {
                    if (rr_std <= 9.244638442993164) {
                        if (systolic_area <= 74396.34375) {
                            votes[12] = 5;
                        } else {
                            if (diff_median <= 4.396815538406372) {
                                votes[12] = 2;
                            } else {
                                if (systolic_area <= 176308.328125) {
                                    if (systolic_time <= 0.4224444329738617) {
                                        votes[12] = 2;
                                    } else {
                                        if (systolic_time <= 0.45105883479118347) {
                                            votes[12] = 2;
                                        } else {
                                            votes[12] = 2;
                                        }
                                    }
                                } else {
                                    votes[12] = 2;
                                }
                            }
                        }
                    } else {
                        votes[12] = 5;
                    }
                } else {
                    if (rr_std <= 8.985702514648438) {
                        votes[12] = 5;
                    } else {
                        votes[12] = 4;
                    }
                }
            } else {
                if (diff_median <= 23.58607292175293) {
                    if (rr_std <= 7.243320465087891) {
                        votes[12] = 3;
                    } else {
                        votes[12] = 3;
                    }
                } else {
                    votes[12] = 5;
                }
            }
        }
    }
// Decision rules for tree 13
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004066428868100047) {
            votes[13] = 0;
        } else {
            if (rr_std <= 6.950989007949829) {
                votes[13] = 0;
            } else {
                votes[13] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.2760000079870224) {
            if (rr_std <= 9.625496864318848) {
                if (ss_median <= 48.75) {
                    if (systolic_area <= 911403.90625) {
                        if (systolic_time <= 0.0612226277589798) {
                            votes[13] = 4;
                        } else {
                            if (diff_median <= 5.0180206298828125) {
                                votes[13] = 5;
                            } else {
                                if (rr_std <= 2.967389941215515) {
                                    votes[13] = 5;
                                } else {
                                    if (systolic_area <= 313631.71875) {
                                        if (systolic_time <= 0.1529230773448944) {
                                            votes[13] = 1;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 22.628609657287598) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.03732307069003582) {
                            votes[13] = 3;
                        } else {
                            votes[13] = 3;
                        }
                    }
                } else {
                    if (ss_median <= 64.5) {
                        if (diff_median <= 9.351241111755371) {
                            if (diff_median <= 7.389857292175293) {
                                if (systolic_area <= 691861.1875) {
                                    votes[13] = 3;
                                } else {
                                    votes[13] = 1;
                                }
                            } else {
                                votes[13] = 5;
                            }
                        } else {
                            if (diff_median <= 34.3386173248291) {
                                if (rr_std <= 7.6239941120147705) {
                                    if (diff_median <= 10.957010746002197) {
                                        votes[13] = 3;
                                    } else {
                                        votes[13] = 3;
                                    }
                                } else {
                                    if (systolic_area <= 358998.1875) {
                                        votes[13] = 1;
                                    } else {
                                        votes[13] = 3;
                                    }
                                }
                            } else {
                                votes[13] = 1;
                            }
                        }
                    } else {
                        if (diff_median <= 8.226449966430664) {
                            if (rr_std <= 4.488285064697266) {
                                votes[13] = 3;
                            } else {
                                votes[13] = 3;
                            }
                        } else {
                            if (systolic_area <= 229997.53125) {
                                if (systolic_area <= 168062.8046875) {
                                    votes[13] = 2;
                                } else {
                                    votes[13] = 2;
                                }
                            } else {
                                votes[13] = 5;
                            }
                        }
                    }
                }
            } else {
                if (systolic_area <= 1136458.3125) {
                    if (systolic_area <= 48243.8984375) {
                        if (diff_median <= 11.950178146362305) {
                            if (systolic_area <= 32069.3935546875) {
                                if (rr_std <= 22.696273803710938) {
                                    if (diff_median <= 2.0635119676589966) {
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
                            votes[13] = 3;
                        }
                    } else {
                        if (systolic_time <= 0.08876864239573479) {
                            if (rr_std <= 11.178565502166748) {
                                if (rr_std <= 10.725848197937012) {
                                    if (rr_std <= 10.281567096710205) {
                                        votes[13] = 1;
                                    } else {
                                        votes[13] = 1;
                                    }
                                } else {
                                    votes[13] = 4;
                                }
                            } else {
                                if (systolic_time <= 0.0726071409881115) {
                                    if (ss_median <= 45.25) {
                                        votes[13] = 1;
                                    } else {
                                        if (ss_median <= 46.5) {
                                            votes[13] = 1;
                                        } else {
                                            votes[13] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 298446.46875) {
                                        votes[13] = 1;
                                    } else {
                                        if (systolic_area <= 533620.96875) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 137947.4453125) {
                                votes[13] = 1;
                            } else {
                                if (systolic_time <= 0.14585325121879578) {
                                    if (systolic_area <= 243330.6015625) {
                                        if (rr_std <= 13.454379558563232) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 1;
                                        }
                                    } else {
                                        if (systolic_time <= 0.09442857280373573) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 3;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 47.5) {
                                        if (rr_std <= 18.129616737365723) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 5;
                                        }
                                    } else {
                                        if (systolic_time <= 0.20088648051023483) {
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
                    if (systolic_area <= 1318097.3125) {
                        if (systolic_area <= 1233035.75) {
                            votes[13] = 4;
                        } else {
                            votes[13] = 1;
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (systolic_area <= 2986320.375) {
                                votes[13] = 3;
                            } else {
                                votes[13] = 4;
                            }
                        } else {
                            if (ss_median <= 61.75) {
                                votes[13] = 4;
                            } else {
                                votes[13] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 53.25) {
                if (rr_std <= 19.18777847290039) {
                    if (systolic_area <= 116096.4296875) {
                        if (rr_std <= 15.065435409545898) {
                            if (diff_median <= 4.004680275917053) {
                                votes[13] = 1;
                            } else {
                                if (diff_median <= 7.762387990951538) {
                                    votes[13] = 5;
                                } else {
                                    votes[13] = 5;
                                }
                            }
                        } else {
                            votes[13] = 2;
                        }
                    } else {
                        votes[13] = 3;
                    }
                } else {
                    if (systolic_time <= 0.44263529777526855) {
                        votes[13] = 5;
                    } else {
                        if (ss_median <= 50.25) {
                            votes[13] = 1;
                        } else {
                            votes[13] = 1;
                        }
                    }
                }
            } else {
                if (diff_median <= 15.469798564910889) {
                    if (rr_std <= 25.1250057220459) {
                        if (systolic_area <= 136601.02734375) {
                            if (ss_median <= 69.75) {
                                if (rr_std <= 17.6076602935791) {
                                    if (systolic_time <= 0.4076105207204819) {
                                        if (systolic_time <= 0.3213043510913849) {
                                            votes[13] = 2;
                                        } else {
                                            votes[13] = 2;
                                        }
                                    } else {
                                        if (diff_median <= 6.509806394577026) {
                                            votes[13] = 5;
                                        } else {
                                            votes[13] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 20.30789089202881) {
                                        votes[13] = 2;
                                    } else {
                                        votes[13] = 2;
                                    }
                                }
                            } else {
                                if (ss_median <= 73.75) {
                                    if (diff_median <= 3.699536919593811) {
                                        votes[13] = 2;
                                    } else {
                                        votes[13] = 2;
                                    }
                                } else {
                                    votes[13] = 2;
                                }
                            }
                        } else {
                            votes[13] = 3;
                        }
                    } else {
                        votes[13] = 1;
                    }
                } else {
                    if (rr_std <= 13.87187385559082) {
                        votes[13] = 5;
                    } else {
                        votes[13] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 14
    if (diff_median <= 0.12414451688528061) {
        if (rr_std <= 3.4454481452703476) {
            votes[14] = 0;
        } else {
            if (rr_std <= 97.28718185424805) {
                votes[14] = 0;
            } else {
                votes[14] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1318163.0625) {
                if (rr_std <= 17.943364143371582) {
                    if (systolic_time <= 0.07996039465069771) {
                        if (systolic_area <= 54731.349609375) {
                            if (diff_median <= 7.187116622924805) {
                                votes[14] = 4;
                            } else {
                                votes[14] = 3;
                            }
                        } else {
                            if (systolic_area <= 858309.625) {
                                if (systolic_time <= 0.06740190461277962) {
                                    if (ss_median <= 53.75) {
                                        if (ss_median <= 44.25) {
                                            votes[14] = 1;
                                        } else {
                                            votes[14] = 1;
                                        }
                                    } else {
                                        votes[14] = 1;
                                    }
                                } else {
                                    if (ss_median <= 49.25) {
                                        if (rr_std <= 10.551555156707764) {
                                            votes[14] = 4;
                                        } else {
                                            votes[14] = 3;
                                        }
                                    } else {
                                        votes[14] = 1;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.403343200683594) {
                                    if (ss_median <= 48.5) {
                                        votes[14] = 3;
                                    } else {
                                        votes[14] = 1;
                                    }
                                } else {
                                    votes[14] = 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 110712.87890625) {
                            if (rr_std <= 13.585935592651367) {
                                if (diff_median <= 5.163897752761841) {
                                    votes[14] = 5;
                                } else {
                                    votes[14] = 5;
                                }
                            } else {
                                if (ss_median <= 49.75) {
                                    votes[14] = 1;
                                } else {
                                    if (rr_std <= 16.21024179458618) {
                                        votes[14] = 2;
                                    } else {
                                        votes[14] = 5;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 48.75) {
                                if (diff_median <= 19.37495994567871) {
                                    if (systolic_time <= 0.12011655047535896) {
                                        if (systolic_area <= 295092.171875) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= 318934.71875) {
                                            votes[14] = 5;
                                        } else {
                                            votes[14] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 306321.296875) {
                                        if (systolic_time <= 0.13111049309372902) {
                                            votes[14] = 1;
                                        } else {
                                            votes[14] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 47.25) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 12.275354385375977) {
                                    if (systolic_area <= 880450.0) {
                                        if (rr_std <= 1.0456812679767609) {
                                            votes[14] = 3;
                                        } else {
                                            votes[14] = 3;
                                        }
                                    } else {
                                        votes[14] = 4;
                                    }
                                } else {
                                    if (ss_median <= 52.5) {
                                        votes[14] = 3;
                                    } else {
                                        if (systolic_area <= 289987.4375) {
                                            votes[14] = 5;
                                        } else {
                                            votes[14] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.43526315689086914) {
                        if (diff_median <= 12.497066974639893) {
                            if (rr_std <= 19.746889114379883) {
                                votes[14] = 1;
                            } else {
                                if (systolic_area <= 110960.83203125) {
                                    if (systolic_time <= 0.1867000013589859) {
                                        votes[14] = 4;
                                    } else {
                                        votes[14] = 4;
                                    }
                                } else {
                                    votes[14] = 4;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.0825292058289051) {
                                votes[14] = 1;
                            } else {
                                if (systolic_time <= 0.14461414515972137) {
                                    votes[14] = 4;
                                } else {
                                    votes[14] = 5;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 51.0) {
                            if (systolic_time <= 0.6454545259475708) {
                                votes[14] = 1;
                            } else {
                                votes[14] = 1;
                            }
                        } else {
                            if (systolic_area <= 22393.921875) {
                                if (rr_std <= 25.4495849609375) {
                                    votes[14] = 2;
                                } else {
                                    votes[14] = 1;
                                }
                            } else {
                                votes[14] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.81639575958252) {
                    if (rr_std <= 10.50492811203003) {
                        if (systolic_area <= 2582868.125) {
                            if (ss_median <= 51.25) {
                                votes[14] = 5;
                            } else {
                                votes[14] = 4;
                            }
                        } else {
                            votes[14] = 4;
                        }
                    } else {
                        if (ss_median <= 48.25) {
                            votes[14] = 4;
                        } else {
                            votes[14] = 4;
                        }
                    }
                } else {
                    votes[14] = 3;
                }
            }
        } else {
            if (systolic_area <= 216288.9609375) {
                if (rr_std <= 9.244638442993164) {
                    if (systolic_area <= 176308.328125) {
                        if (diff_median <= 4.29285192489624) {
                            if (ss_median <= 71.0) {
                                votes[14] = 2;
                            } else {
                                votes[14] = 2;
                            }
                        } else {
                            if (diff_median <= 13.705848217010498) {
                                if (systolic_area <= 89924.6796875) {
                                    if (systolic_time <= 0.4444705992937088) {
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
                        if (systolic_area <= 209470.1015625) {
                            votes[14] = 5;
                        } else {
                            votes[14] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 61735.158203125) {
                        votes[14] = 4;
                    } else {
                        votes[14] = 5;
                    }
                }
            } else {
                if (diff_median <= 23.58607292175293) {
                    votes[14] = 3;
                } else {
                    votes[14] = 5;
                }
            }
        }
    }
// Decision rules for tree 15
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004020768217742443) {
            votes[15] = 0;
        } else {
            if (systolic_time <= 0.9774999916553497) {
                votes[15] = 0;
            } else {
                votes[15] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1203138.0) {
                if (rr_std <= 15.072619915008545) {
                    if (systolic_time <= 0.08722148090600967) {
                        if (systolic_area <= 63453.923828125) {
                            if (diff_median <= 6.915104150772095) {
                                votes[15] = 4;
                            } else {
                                votes[15] = 3;
                            }
                        } else {
                            if (systolic_area <= 389597.40625) {
                                if (systolic_area <= 326501.4375) {
                                    votes[15] = 1;
                                } else {
                                    if (diff_median <= 32.67567539215088) {
                                        votes[15] = 1;
                                    } else {
                                        votes[15] = 1;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.043532490730285645) {
                                    if (ss_median <= 48.0) {
                                        votes[15] = 1;
                                    } else {
                                        votes[15] = 1;
                                    }
                                } else {
                                    if (ss_median <= 54.75) {
                                        if (diff_median <= 33.73859691619873) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    } else {
                                        votes[15] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 110712.87890625) {
                            if (diff_median <= 5.163897752761841) {
                                if (diff_median <= 4.8241188526153564) {
                                    if (systolic_area <= 19143.8017578125) {
                                        votes[15] = 4;
                                    } else {
                                        votes[15] = 5;
                                    }
                                } else {
                                    votes[15] = 2;
                                }
                            } else {
                                if (rr_std <= 13.714651584625244) {
                                    votes[15] = 5;
                                } else {
                                    votes[15] = 5;
                                }
                            }
                        } else {
                            if (ss_median <= 48.75) {
                                if (diff_median <= 12.578598022460938) {
                                    if (ss_median <= 44.75) {
                                        votes[15] = 3;
                                    } else {
                                        if (systolic_area <= 379180.375) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 5.322622776031494) {
                                        votes[15] = 5;
                                    } else {
                                        if (systolic_area <= 379889.59375) {
                                            votes[15] = 1;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 12.324662685394287) {
                                    if (systolic_area <= 874224.09375) {
                                        if (rr_std <= 1.232020229101181) {
                                            votes[15] = 3;
                                        } else {
                                            votes[15] = 3;
                                        }
                                    } else {
                                        votes[15] = 2;
                                    }
                                } else {
                                    if (rr_std <= 13.061464309692383) {
                                        votes[15] = 5;
                                    } else {
                                        votes[15] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.44263529777526855) {
                        if (systolic_area <= 52044.12890625) {
                            if (rr_std <= 18.5367431640625) {
                                votes[15] = 2;
                            } else {
                                if (systolic_area <= 32069.3935546875) {
                                    if (ss_median <= 51.25) {
                                        votes[15] = 4;
                                    } else {
                                        votes[15] = 4;
                                    }
                                } else {
                                    if (ss_median <= 55.0) {
                                        votes[15] = 4;
                                    } else {
                                        votes[15] = 4;
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.08486853539943695) {
                                if (diff_median <= 9.234489917755127) {
                                    votes[15] = 1;
                                } else {
                                    votes[15] = 1;
                                }
                            } else {
                                if (rr_std <= 22.759645462036133) {
                                    if (systolic_time <= 0.16371088474988937) {
                                        if (diff_median <= 15.787216663360596) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 194442.28125) {
                                            votes[15] = 5;
                                        } else {
                                            votes[15] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 227903.5234375) {
                                        votes[15] = 1;
                                    } else {
                                        votes[15] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 24.86577606201172) {
                            if (ss_median <= 49.25) {
                                votes[15] = 1;
                            } else {
                                if (systolic_area <= 26173.9423828125) {
                                    votes[15] = 2;
                                } else {
                                    votes[15] = 5;
                                }
                            }
                        } else {
                            votes[15] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 9.81369400024414) {
                    if (systolic_time <= 0.05070512741804123) {
                        if (systolic_area <= 3166643.875) {
                            votes[15] = 3;
                        } else {
                            votes[15] = 4;
                        }
                    } else {
                        votes[15] = 5;
                    }
                } else {
                    if (systolic_area <= 1460716.75) {
                        if (systolic_time <= 0.09231007844209671) {
                            votes[15] = 1;
                        } else {
                            votes[15] = 4;
                        }
                    } else {
                        if (ss_median <= 47.5) {
                            votes[15] = 4;
                        } else {
                            votes[15] = 4;
                        }
                    }
                }
            }
        } else {
            if (systolic_area <= 136085.171875) {
                if (rr_std <= 9.228055477142334) {
                    if (systolic_area <= 74396.34375) {
                        votes[15] = 5;
                    } else {
                        if (ss_median <= 73.5) {
                            if (systolic_time <= 0.4224444329738617) {
                                votes[15] = 2;
                            } else {
                                if (systolic_time <= 0.45105883479118347) {
                                    votes[15] = 2;
                                } else {
                                    votes[15] = 2;
                                }
                            }
                        } else {
                            votes[15] = 2;
                        }
                    }
                } else {
                    votes[15] = 3;
                }
            } else {
                if (systolic_time <= 0.1022278480231762) {
                    votes[15] = 3;
                } else {
                    if (ss_median <= 71.5) {
                        if (diff_median <= 14.654432773590088) {
                            if (ss_median <= 67.5) {
                                votes[15] = 2;
                            } else {
                                votes[15] = 2;
                            }
                        } else {
                            if (systolic_time <= 0.16658865660429) {
                                votes[15] = 2;
                            } else {
                                votes[15] = 5;
                            }
                        }
                    } else {
                        votes[15] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 16
    if (diff_median <= 0.06958737876266241) {
        if (diff_median <= 0.003955815336667001) {
            votes[16] = 2;
        } else {
            if (rr_std <= 4.194984555244446) {
                votes[16] = 0;
            } else {
                votes[16] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.27558621764183044) {
            if (systolic_area <= 1457443.125) {
                if (systolic_area <= 47706.263671875) {
                    if (diff_median <= 14.221578598022461) {
                        if (systolic_time <= 0.18773171305656433) {
                            if (systolic_time <= 0.0730285719037056) {
                                if (rr_std <= 10.48525857925415) {
                                    votes[16] = 4;
                                } else {
                                    votes[16] = 4;
                                }
                            } else {
                                votes[16] = 4;
                            }
                        } else {
                            if (systolic_time <= 0.21298378705978394) {
                                votes[16] = 4;
                            } else {
                                votes[16] = 4;
                            }
                        }
                    } else {
                        votes[16] = 3;
                    }
                } else {
                    if (systolic_time <= 0.09053333476185799) {
                        if (systolic_area <= 528743.25) {
                            if (diff_median <= 18.175158500671387) {
                                if (rr_std <= 14.171024322509766) {
                                    if (ss_median <= 47.5) {
                                        votes[16] = 3;
                                    } else {
                                        votes[16] = 1;
                                    }
                                } else {
                                    votes[16] = 1;
                                }
                            } else {
                                if (ss_median <= 52.25) {
                                    if (systolic_area <= 389901.890625) {
                                        if (systolic_time <= 0.07432917505502701) {
                                            votes[16] = 1;
                                        } else {
                                            votes[16] = 1;
                                        }
                                    } else {
                                        votes[16] = 1;
                                    }
                                } else {
                                    votes[16] = 1;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.039556652307510376) {
                                if (ss_median <= 46.5) {
                                    votes[16] = 4;
                                } else {
                                    votes[16] = 1;
                                }
                            } else {
                                if (rr_std <= 12.568150043487549) {
                                    if (systolic_area <= 1232212.4375) {
                                        if (systolic_area <= 879835.625) {
                                            votes[16] = 3;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    } else {
                                        votes[16] = 5;
                                    }
                                } else {
                                    if (systolic_time <= 0.07327095791697502) {
                                        votes[16] = 1;
                                    } else {
                                        votes[16] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.183817386627197) {
                            if (systolic_area <= 982618.625) {
                                if (ss_median <= 66.5) {
                                    if (ss_median <= 48.75) {
                                        if (diff_median <= 32.064374923706055) {
                                            votes[16] = 5;
                                        } else {
                                            votes[16] = 1;
                                        }
                                    } else {
                                        if (systolic_time <= 0.10020440816879272) {
                                            votes[16] = 1;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 8.226449966430664) {
                                        if (ss_median <= 74.5) {
                                            votes[16] = 3;
                                        } else {
                                            votes[16] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 216288.9609375) {
                                            votes[16] = 2;
                                        } else {
                                            votes[16] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 10.71972370147705) {
                                    votes[16] = 4;
                                } else {
                                    votes[16] = 4;
                                }
                            }
                        } else {
                            if (rr_std <= 21.680421829223633) {
                                if (diff_median <= 16.96665334701538) {
                                    votes[16] = 5;
                                } else {
                                    votes[16] = 5;
                                }
                            } else {
                                votes[16] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.3821439743042) {
                    if (diff_median <= 18.67464590072632) {
                        if (diff_median <= 6.06548285484314) {
                            votes[16] = 1;
                        } else {
                            votes[16] = 4;
                        }
                    } else {
                        votes[16] = 3;
                    }
                } else {
                    if (ss_median <= 48.75) {
                        if (systolic_time <= 0.033687978982925415) {
                            votes[16] = 4;
                        } else {
                            votes[16] = 4;
                        }
                    } else {
                        if (ss_median <= 61.25) {
                            votes[16] = 4;
                        } else {
                            votes[16] = 4;
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 66.5) {
                if (systolic_area <= 34647.513671875) {
                    if (rr_std <= 24.86577606201172) {
                        if (systolic_time <= 1.023714303970337) {
                            if (diff_median <= 2.0865602493286133) {
                                votes[16] = 4;
                            } else {
                                if (rr_std <= 14.58484411239624) {
                                    votes[16] = 2;
                                } else {
                                    if (ss_median <= 49.25) {
                                        votes[16] = 2;
                                    } else {
                                        if (ss_median <= 57.0) {
                                            votes[16] = 2;
                                        } else {
                                            votes[16] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[16] = 1;
                        }
                    } else {
                        if (systolic_time <= 0.6757999956607819) {
                            votes[16] = 1;
                        } else {
                            if (ss_median <= 51.0) {
                                votes[16] = 1;
                            } else {
                                votes[16] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 124825.64453125) {
                        if (diff_median <= 6.567801475524902) {
                            votes[16] = 1;
                        } else {
                            votes[16] = 5;
                        }
                    } else {
                        if (ss_median <= 49.75) {
                            votes[16] = 5;
                        } else {
                            if (systolic_time <= 0.30553846061229706) {
                                votes[16] = 4;
                            } else {
                                votes[16] = 3;
                            }
                        }
                    }
                }
            } else {
                if (ss_median <= 73.75) {
                    if (diff_median <= 12.8790922164917) {
                        if (diff_median <= 3.699536919593811) {
                            votes[16] = 2;
                        } else {
                            if (systolic_time <= 0.4179298132658005) {
                                votes[16] = 2;
                            } else {
                                if (systolic_time <= 0.45105883479118347) {
                                    votes[16] = 2;
                                } else {
                                    votes[16] = 2;
                                }
                            }
                        }
                    } else {
                        votes[16] = 2;
                    }
                } else {
                    if (systolic_area <= 92910.6015625) {
                        votes[16] = 2;
                    } else {
                        votes[16] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 17
    if (diff_median <= 0.06968991085886955) {
        if (rr_std <= 4.010679841041565) {
            votes[17] = 2;
        } else {
            if (diff_median <= 0.004020768217742443) {
                votes[17] = 0;
            } else {
                if (rr_std <= 97.28718185424805) {
                    votes[17] = 0;
                } else {
                    votes[17] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1030944.53125) {
                if (systolic_area <= 47672.765625) {
                    if (systolic_time <= 0.3430909067392349) {
                        if (diff_median <= 12.586799144744873) {
                            if (systolic_time <= 0.2809777855873108) {
                                if (systolic_area <= 32069.3935546875) {
                                    if (diff_median <= 2.201472580432892) {
                                        votes[17] = 4;
                                    } else {
                                        votes[17] = 1;
                                    }
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
                        if (ss_median <= 50.25) {
                            if (systolic_time <= 0.45272982120513916) {
                                votes[17] = 2;
                            } else {
                                if (rr_std <= 21.059687614440918) {
                                    votes[17] = 1;
                                } else {
                                    votes[17] = 1;
                                }
                            }
                        } else {
                            if (systolic_time <= 1.0308571457862854) {
                                if (rr_std <= 17.43222713470459) {
                                    if (systolic_area <= 25509.5439453125) {
                                        votes[17] = 5;
                                    } else {
                                        votes[17] = 2;
                                    }
                                } else {
                                    if (rr_std <= 19.690412521362305) {
                                        votes[17] = 2;
                                    } else {
                                        votes[17] = 2;
                                    }
                                }
                            } else {
                                votes[17] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.07295128330588341) {
                        if (ss_median <= 44.25) {
                            if (rr_std <= 8.281267881393433) {
                                votes[17] = 4;
                            } else {
                                votes[17] = 1;
                            }
                        } else {
                            if (diff_median <= 19.19188404083252) {
                                if (rr_std <= 11.160855293273926) {
                                    if (systolic_time <= 0.05637322552502155) {
                                        votes[17] = 1;
                                    } else {
                                        votes[17] = 3;
                                    }
                                } else {
                                    if (systolic_area <= 507803.546875) {
                                        votes[17] = 1;
                                    } else {
                                        votes[17] = 1;
                                    }
                                }
                            } else {
                                if (systolic_area <= 607069.296875) {
                                    votes[17] = 1;
                                } else {
                                    votes[17] = 1;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (systolic_time <= 0.17984777688980103) {
                                if (diff_median <= 21.42103385925293) {
                                    if (systolic_time <= 0.1206742413341999) {
                                        if (rr_std <= 16.108530044555664) {
                                            votes[17] = 3;
                                        } else {
                                            votes[17] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 15.809858798980713) {
                                            votes[17] = 5;
                                        } else {
                                            votes[17] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 10.100097179412842) {
                                        votes[17] = 3;
                                    } else {
                                        if (systolic_area <= 261971.0546875) {
                                            votes[17] = 1;
                                        } else {
                                            votes[17] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 7.0533246994018555) {
                                    votes[17] = 3;
                                } else {
                                    if (systolic_area <= 179636.3515625) {
                                        votes[17] = 5;
                                    } else {
                                        votes[17] = 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 12.233860492706299) {
                                if (ss_median <= 52.25) {
                                    if (systolic_area <= 215476.6875) {
                                        votes[17] = 3;
                                    } else {
                                        if (systolic_area <= 254363.3671875) {
                                            votes[17] = 3;
                                        } else {
                                            votes[17] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 8.665321826934814) {
                                        if (systolic_time <= 0.10033470392227173) {
                                            votes[17] = 3;
                                        } else {
                                            votes[17] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 54.25) {
                                            votes[17] = 1;
                                        } else {
                                            votes[17] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 51.25) {
                                    votes[17] = 3;
                                } else {
                                    if (ss_median <= 57.0) {
                                        if (rr_std <= 15.456686973571777) {
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
                }
            } else {
                if (rr_std <= 9.674737930297852) {
                    if (diff_median <= 17.102996349334717) {
                        if (systolic_area <= 2248010.0) {
                            if (ss_median <= 51.5) {
                                votes[17] = 3;
                            } else {
                                votes[17] = 1;
                            }
                        } else {
                            votes[17] = 4;
                        }
                    } else {
                        votes[17] = 3;
                    }
                } else {
                    if (diff_median <= 18.251303672790527) {
                        if (systolic_time <= 0.032819848507642746) {
                            votes[17] = 4;
                        } else {
                            if (ss_median <= 50.0) {
                                if (systolic_area <= 2403075.875) {
                                    votes[17] = 5;
                                } else {
                                    votes[17] = 4;
                                }
                            } else {
                                if (systolic_area <= 1290365.0) {
                                    votes[17] = 4;
                                } else {
                                    votes[17] = 4;
                                }
                            }
                        }
                    } else {
                        votes[17] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 9.244638442993164) {
                if (systolic_area <= 74396.34375) {
                    votes[17] = 5;
                } else {
                    if (systolic_area <= 230412.609375) {
                        if (ss_median <= 73.5) {
                            if (diff_median <= 4.396815538406372) {
                                votes[17] = 2;
                            } else {
                                if (systolic_area <= 189480.5546875) {
                                    votes[17] = 2;
                                } else {
                                    votes[17] = 2;
                                }
                            }
                        } else {
                            if (systolic_area <= 95682.9453125) {
                                votes[17] = 2;
                            } else {
                                votes[17] = 5;
                            }
                        }
                    } else {
                        votes[17] = 3;
                    }
                }
            } else {
                if (rr_std <= 18.028037071228027) {
                    if (rr_std <= 14.567712306976318) {
                        votes[17] = 5;
                    } else {
                        votes[17] = 3;
                    }
                } else {
                    votes[17] = 4;
                }
            }
        }
    }
// Decision rules for tree 18
    if (diff_median <= 0.030496088787913322) {
        if (rr_std <= 5.721498966217041) {
            votes[18] = 2;
        } else {
            if (diff_median <= 0.004066428868100047) {
                votes[18] = 0;
            } else {
                votes[18] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1030944.53125) {
                if (systolic_area <= 40932.755859375) {
                    if (systolic_time <= 0.3439999967813492) {
                        if (diff_median <= 15.17879867553711) {
                            if (diff_median <= 2.2691255807876587) {
                                if (systolic_area <= 21244.00732421875) {
                                    votes[18] = 4;
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                if (diff_median <= 3.5035643577575684) {
                                    votes[18] = 5;
                                } else {
                                    if (ss_median <= 50.25) {
                                        votes[18] = 4;
                                    } else {
                                        votes[18] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[18] = 3;
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (ss_median <= 46.0) {
                                votes[18] = 1;
                            } else {
                                votes[18] = 1;
                            }
                        } else {
                            if (systolic_time <= 1.0308571457862854) {
                                if (rr_std <= 25.1250057220459) {
                                    if (rr_std <= 15.065435409545898) {
                                        votes[18] = 2;
                                    } else {
                                        if (systolic_area <= 20505.8232421875) {
                                            votes[18] = 2;
                                        } else {
                                            votes[18] = 2;
                                        }
                                    }
                                } else {
                                    votes[18] = 1;
                                }
                            } else {
                                votes[18] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.10030317306518555) {
                        if (systolic_area <= 308283.265625) {
                            if (ss_median <= 52.5) {
                                if (rr_std <= 12.528731346130371) {
                                    votes[18] = 1;
                                } else {
                                    votes[18] = 1;
                                }
                            } else {
                                votes[18] = 1;
                            }
                        } else {
                            if (systolic_time <= 0.06686297804117203) {
                                if (ss_median <= 45.75) {
                                    if (ss_median <= 44.25) {
                                        votes[18] = 4;
                                    } else {
                                        votes[18] = 3;
                                    }
                                } else {
                                    if (diff_median <= 7.9117677211761475) {
                                        if (ss_median <= 51.25) {
                                            votes[18] = 1;
                                        } else {
                                            votes[18] = 1;
                                        }
                                    } else {
                                        votes[18] = 1;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.09667479619383812) {
                                    if (diff_median <= 43.57331657409668) {
                                        if (diff_median <= 7.52429723739624) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    } else {
                                        votes[18] = 5;
                                    }
                                } else {
                                    votes[18] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.072619915008545) {
                            if (systolic_area <= 110712.87890625) {
                                if (ss_median <= 49.75) {
                                    votes[18] = 5;
                                } else {
                                    votes[18] = 5;
                                }
                            } else {
                                if (ss_median <= 48.75) {
                                    if (diff_median <= 7.803195238113403) {
                                        if (rr_std <= 8.002862930297852) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 180273.7265625) {
                                            votes[18] = 1;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 9.95051383972168) {
                                        if (systolic_time <= 0.2790663093328476) {
                                            votes[18] = 3;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 278344.53125) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 6.634951591491699) {
                                votes[18] = 1;
                            } else {
                                if (systolic_time <= 0.16583333164453506) {
                                    votes[18] = 1;
                                } else {
                                    if (systolic_area <= 186885.8125) {
                                        if (systolic_time <= 0.219437837600708) {
                                            votes[18] = 5;
                                        } else {
                                            votes[18] = 5;
                                        }
                                    } else {
                                        votes[18] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 17.947805404663086) {
                    if (rr_std <= 9.548663139343262) {
                        if (diff_median <= 6.702579975128174) {
                            votes[18] = 1;
                        } else {
                            votes[18] = 4;
                        }
                    } else {
                        if (rr_std <= 19.061857223510742) {
                            if (rr_std <= 10.50492811203003) {
                                if (systolic_area <= 1809164.5) {
                                    votes[18] = 5;
                                } else {
                                    votes[18] = 4;
                                }
                            } else {
                                if (diff_median <= 4.488692879676819) {
                                    votes[18] = 4;
                                } else {
                                    if (ss_median <= 48.5) {
                                        votes[18] = 4;
                                    } else {
                                        votes[18] = 4;
                                    }
                                }
                            }
                        } else {
                            votes[18] = 4;
                        }
                    }
                } else {
                    if (systolic_area <= 1584333.125) {
                        votes[18] = 5;
                    } else {
                        votes[18] = 3;
                    }
                }
            }
        } else {
            if (systolic_area <= 230412.609375) {
                if (rr_std <= 9.244638442993164) {
                    if (systolic_area <= 176308.328125) {
                        if (diff_median <= 17.390315532684326) {
                            if (diff_median <= 4.77883243560791) {
                                if (systolic_area <= 105572.65234375) {
                                    votes[18] = 2;
                                } else {
                                    votes[18] = 2;
                                }
                            } else {
                                if (systolic_area <= 88905.99609375) {
                                    if (systolic_time <= 0.4444705992937088) {
                                        votes[18] = 2;
                                    } else {
                                        votes[18] = 2;
                                    }
                                } else {
                                    if (systolic_time <= 0.4050631523132324) {
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
                        if (systolic_time <= 0.15879999846220016) {
                            votes[18] = 2;
                        } else {
                            votes[18] = 5;
                        }
                    }
                } else {
                    if (systolic_time <= 0.24059229344129562) {
                        votes[18] = 4;
                    } else {
                        votes[18] = 5;
                    }
                }
            } else {
                if (systolic_time <= 0.16329000145196915) {
                    if (systolic_area <= 471195.296875) {
                        votes[18] = 3;
                    } else {
                        votes[18] = 3;
                    }
                } else {
                    votes[18] = 5;
                }
            }
        }
    }
// Decision rules for tree 19
    if (diff_median <= 0.030496088787913322) {
        if (rr_std <= 5.905803680419922) {
            votes[19] = 2;
        } else {
            if (diff_median <= 0.0040887275245040655) {
                votes[19] = 2;
            } else {
                if (rr_std <= 96.6473503112793) {
                    votes[19] = 0;
                } else {
                    votes[19] = 0;
                }
            }
        }
    } else {
        if (systolic_time <= 0.28987911343574524) {
            if (systolic_area <= 1267299.375) {
                if (systolic_area <= 47706.263671875) {
                    if (diff_median <= 9.28077220916748) {
                        if (systolic_area <= 32069.3935546875) {
                            if (diff_median <= 1.4684094786643982) {
                                votes[19] = 4;
                            } else {
                                if (diff_median <= 3.089908719062805) {
                                    votes[19] = 5;
                                } else {
                                    votes[19] = 4;
                                }
                            }
                        } else {
                            votes[19] = 4;
                        }
                    } else {
                        if (rr_std <= 14.773552417755127) {
                            votes[19] = 3;
                        } else {
                            votes[19] = 4;
                        }
                    }
                } else {
                    if (systolic_time <= 0.07251151278614998) {
                        if (ss_median <= 45.75) {
                            if (ss_median <= 43.5) {
                                votes[19] = 5;
                            } else {
                                if (systolic_time <= 0.042485976591706276) {
                                    votes[19] = 1;
                                } else {
                                    votes[19] = 3;
                                }
                            }
                        } else {
                            if (rr_std <= 7.06352972984314) {
                                if (rr_std <= 5.191058397293091) {
                                    votes[19] = 1;
                                } else {
                                    votes[19] = 3;
                                }
                            } else {
                                if (rr_std <= 11.160855293273926) {
                                    if (systolic_area <= 450210.015625) {
                                        if (rr_std <= 8.24902629852295) {
                                            votes[19] = 1;
                                        } else {
                                            votes[19] = 1;
                                        }
                                    } else {
                                        votes[19] = 1;
                                    }
                                } else {
                                    votes[19] = 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.1538461521267891) {
                            if (diff_median <= 20.71765422821045) {
                                if (systolic_area <= 207746.8359375) {
                                    if (diff_median <= 13.10890817642212) {
                                        votes[19] = 5;
                                    } else {
                                        votes[19] = 1;
                                    }
                                } else {
                                    if (rr_std <= 15.25027084350586) {
                                        if (systolic_time <= 0.1206742413341999) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        if (systolic_time <= 0.09834999963641167) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 379520.328125) {
                                    if (rr_std <= 9.62558889389038) {
                                        votes[19] = 3;
                                    } else {
                                        if (ss_median <= 53.25) {
                                            votes[19] = 1;
                                        } else {
                                            votes[19] = 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 31.048044204711914) {
                                        votes[19] = 3;
                                    } else {
                                        votes[19] = 5;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 49.75) {
                                if (diff_median <= 34.99837303161621) {
                                    if (diff_median <= 17.686767578125) {
                                        if (systolic_time <= 0.20304210484027863) {
                                            votes[19] = 5;
                                        } else {
                                            votes[19] = 5;
                                        }
                                    } else {
                                        votes[19] = 5;
                                    }
                                } else {
                                    votes[19] = 3;
                                }
                            } else {
                                if (ss_median <= 66.5) {
                                    if (rr_std <= 10.21739387512207) {
                                        if (ss_median <= 55.0) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 3;
                                        }
                                    } else {
                                        votes[19] = 1;
                                    }
                                } else {
                                    if (ss_median <= 68.5) {
                                        if (rr_std <= 5.1370580196380615) {
                                            votes[19] = 2;
                                        } else {
                                            votes[19] = 2;
                                        }
                                    } else {
                                        if (systolic_area <= 181105.046875) {
                                            votes[19] = 3;
                                        } else {
                                            votes[19] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.13351345062256) {
                    if (systolic_time <= 0.03297355957329273) {
                        votes[19] = 1;
                    } else {
                        if (rr_std <= 10.499430656433105) {
                            if (systolic_area <= 1735374.8125) {
                                votes[19] = 5;
                            } else {
                                votes[19] = 4;
                            }
                        } else {
                            if (diff_median <= 14.595852375030518) {
                                if (ss_median <= 62.5) {
                                    votes[19] = 4;
                                } else {
                                    votes[19] = 4;
                                }
                            } else {
                                votes[19] = 4;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 1732259.625) {
                        votes[19] = 3;
                    } else {
                        votes[19] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 24.86577606201172) {
                if (diff_median <= 15.469798564910889) {
                    if (ss_median <= 48.75) {
                        if (systolic_area <= 22910.8740234375) {
                            votes[19] = 1;
                        } else {
                            votes[19] = 3;
                        }
                    } else {
                        if (systolic_area <= 88905.99609375) {
                            if (rr_std <= 15.087045669555664) {
                                if (systolic_time <= 0.471000000834465) {
                                    if (systolic_time <= 0.44235295057296753) {
                                        if (systolic_area <= 27781.2861328125) {
                                            votes[19] = 2;
                                        } else {
                                            votes[19] = 5;
                                        }
                                    } else {
                                        votes[19] = 2;
                                    }
                                } else {
                                    votes[19] = 5;
                                }
                            } else {
                                if (systolic_area <= 19566.0263671875) {
                                    votes[19] = 2;
                                } else {
                                    if (systolic_time <= 0.4895000010728836) {
                                        votes[19] = 2;
                                    } else {
                                        votes[19] = 1;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 65.25) {
                                votes[19] = 3;
                            } else {
                                if (ss_median <= 73.5) {
                                    votes[19] = 2;
                                } else {
                                    votes[19] = 2;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 130882.703125) {
                        if (systolic_time <= 0.7550222277641296) {
                            votes[19] = 5;
                        } else {
                            votes[19] = 5;
                        }
                    } else {
                        votes[19] = 3;
                    }
                }
            } else {
                if (systolic_time <= 0.8151111006736755) {
                    if (diff_median <= 3.0897576212882996) {
                        votes[19] = 1;
                    } else {
                        votes[19] = 1;
                    }
                } else {
                    votes[19] = 1;
                }
            }
        }
    }
// Decision rules for tree 20
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004020768217742443) {
            votes[20] = 0;
        } else {
            if (rr_std <= 6.585163354873657) {
                votes[20] = 0;
            } else {
                votes[20] = 0;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1144473.8125) {
                if (systolic_area <= 41123.59375) {
                    if (systolic_time <= 0.5579120814800262) {
                        if (systolic_time <= 0.2809777855873108) {
                            if (diff_median <= 12.586799144744873) {
                                if (diff_median <= 1.4684094786643982) {
                                    votes[20] = 4;
                                } else {
                                    if (diff_median <= 3.048689365386963) {
                                        votes[20] = 5;
                                    } else {
                                        if (ss_median <= 53.5) {
                                            votes[20] = 4;
                                        } else {
                                            votes[20] = 4;
                                        }
                                    }
                                }
                            } else {
                                votes[20] = 3;
                            }
                        } else {
                            if (systolic_time <= 0.3989555537700653) {
                                if (ss_median <= 51.0) {
                                    votes[20] = 2;
                                } else {
                                    votes[20] = 2;
                                }
                            } else {
                                if (rr_std <= 15.128767967224121) {
                                    votes[20] = 5;
                                } else {
                                    votes[20] = 2;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 20229.802734375) {
                            if (rr_std <= 28.075544357299805) {
                                if (diff_median <= 6.225771427154541) {
                                    votes[20] = 2;
                                } else {
                                    votes[20] = 2;
                                }
                            } else {
                                votes[20] = 1;
                            }
                        } else {
                            votes[20] = 1;
                        }
                    }
                } else {
                    if (systolic_time <= 0.08722148090600967) {
                        if (systolic_area <= 445745.078125) {
                            if (systolic_area <= 385727.59375) {
                                if (ss_median <= 56.25) {
                                    if (rr_std <= 11.324142456054688) {
                                        if (systolic_time <= 0.07641066983342171) {
                                            votes[20] = 1;
                                        } else {
                                            votes[20] = 1;
                                        }
                                    } else {
                                        votes[20] = 1;
                                    }
                                } else {
                                    votes[20] = 1;
                                }
                            } else {
                                if (systolic_time <= 0.0676279067993164) {
                                    votes[20] = 1;
                                } else {
                                    votes[20] = 4;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.03935120068490505) {
                                votes[20] = 1;
                            } else {
                                if (diff_median <= 23.06857204437256) {
                                    if (ss_median <= 43.25) {
                                        votes[20] = 5;
                                    } else {
                                        if (systolic_area <= 738748.78125) {
                                            votes[20] = 3;
                                        } else {
                                            votes[20] = 3;
                                        }
                                    }
                                } else {
                                    votes[20] = 5;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 124825.64453125) {
                            if (diff_median <= 7.120602607727051) {
                                votes[20] = 5;
                            } else {
                                if (systolic_time <= 0.35872727632522583) {
                                    votes[20] = 5;
                                } else {
                                    votes[20] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 14.814233303070068) {
                                if (diff_median <= 7.853553056716919) {
                                    if (rr_std <= 4.734786033630371) {
                                        votes[20] = 3;
                                    } else {
                                        if (rr_std <= 9.223421573638916) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.19288095086812973) {
                                        if (systolic_area <= 350676.390625) {
                                            votes[20] = 1;
                                        } else {
                                            votes[20] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 50.5) {
                                            votes[20] = 3;
                                        } else {
                                            votes[20] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 22.459537506103516) {
                                    if (diff_median <= 12.234694957733154) {
                                        votes[20] = 5;
                                    } else {
                                        if (diff_median <= 16.321417808532715) {
                                            votes[20] = 5;
                                        } else {
                                            votes[20] = 5;
                                        }
                                    }
                                } else {
                                    votes[20] = 3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.43701171875) {
                    if (rr_std <= 9.3821439743042) {
                        votes[20] = 5;
                    } else {
                        if (ss_median <= 53.25) {
                            if (systolic_area <= 1729023.875) {
                                if (rr_std <= 13.93470811843872) {
                                    votes[20] = 5;
                                } else {
                                    votes[20] = 4;
                                }
                            } else {
                                votes[20] = 4;
                            }
                        } else {
                            if (rr_std <= 10.294044494628906) {
                                votes[20] = 4;
                            } else {
                                votes[20] = 4;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 1599360.5625) {
                        votes[20] = 3;
                    } else {
                        votes[20] = 3;
                    }
                }
            }
        } else {
            if (systolic_area <= 143262.4296875) {
                if (rr_std <= 16.601760864257812) {
                    if (ss_median <= 73.75) {
                        if (systolic_time <= 0.4224444329738617) {
                            votes[20] = 2;
                        } else {
                            if (diff_median <= 7.2975263595581055) {
                                votes[20] = 2;
                            } else {
                                votes[20] = 2;
                            }
                        }
                    } else {
                        votes[20] = 2;
                    }
                } else {
                    votes[20] = 4;
                }
            } else {
                if (ss_median <= 68.25) {
                    if (rr_std <= 5.112382650375366) {
                        if (systolic_area <= 176308.328125) {
                            votes[20] = 2;
                        } else {
                            votes[20] = 2;
                        }
                    } else {
                        votes[20] = 4;
                    }
                } else {
                    if (diff_median <= 28.496010780334473) {
                        if (systolic_time <= 0.16409531980752945) {
                            votes[20] = 5;
                        } else {
                            votes[20] = 3;
                        }
                    } else {
                        votes[20] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 21
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004066428868100047) {
            votes[21] = 0;
        } else {
            if (rr_std <= 7.6975061893463135) {
                votes[21] = 0;
            } else {
                if (rr_std <= 102.29393005371094) {
                    votes[21] = 0;
                } else {
                    votes[21] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1056118.3125) {
                if (systolic_area <= 40211.546875) {
                    if (systolic_time <= 0.27971282601356506) {
                        if (diff_median <= 11.950178146362305) {
                            if (diff_median <= 2.3086659908294678) {
                                votes[21] = 4;
                            } else {
                                if (diff_median <= 5.623067378997803) {
                                    votes[21] = 1;
                                } else {
                                    votes[21] = 4;
                                }
                            }
                        } else {
                            votes[21] = 3;
                        }
                    } else {
                        if (ss_median <= 51.75) {
                            if (systolic_time <= 0.48171429336071014) {
                                if (ss_median <= 47.75) {
                                    votes[21] = 1;
                                } else {
                                    votes[21] = 4;
                                }
                            } else {
                                votes[21] = 1;
                            }
                        } else {
                            if (systolic_time <= 1.023714303970337) {
                                if (rr_std <= 25.1250057220459) {
                                    if (rr_std <= 15.065435409545898) {
                                        if (systolic_time <= 0.3989555537700653) {
                                            votes[21] = 2;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 18.69395923614502) {
                                            votes[21] = 2;
                                        } else {
                                            votes[21] = 2;
                                        }
                                    }
                                } else {
                                    votes[21] = 1;
                                }
                            } else {
                                votes[21] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.0850052647292614) {
                        if (rr_std <= 8.893284797668457) {
                            if (rr_std <= 8.07172155380249) {
                                if (ss_median <= 46.25) {
                                    votes[21] = 3;
                                } else {
                                    if (systolic_time <= 0.0681985504925251) {
                                        votes[21] = 1;
                                    } else {
                                        votes[21] = 3;
                                    }
                                }
                            } else {
                                votes[21] = 5;
                            }
                        } else {
                            if (systolic_time <= 0.05696453899145126) {
                                if (systolic_time <= 0.03958991914987564) {
                                    votes[21] = 1;
                                } else {
                                    votes[21] = 1;
                                }
                            } else {
                                if (systolic_area <= 713072.125) {
                                    if (systolic_area <= 313742.203125) {
                                        votes[21] = 1;
                                    } else {
                                        if (rr_std <= 10.220032215118408) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 1;
                                        }
                                    }
                                } else {
                                    votes[21] = 3;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 111313.03515625) {
                            if (rr_std <= 19.35378360748291) {
                                if (ss_median <= 46.25) {
                                    votes[21] = 5;
                                } else {
                                    votes[21] = 5;
                                }
                            } else {
                                votes[21] = 1;
                            }
                        } else {
                            if (ss_median <= 48.75) {
                                if (diff_median <= 25.258479118347168) {
                                    if (diff_median <= 7.8849451541900635) {
                                        if (ss_median <= 45.25) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= 221721.8984375) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 312201.46875) {
                                        if (diff_median <= 28.665300369262695) {
                                            votes[21] = 1;
                                        } else {
                                            votes[21] = 1;
                                        }
                                    } else {
                                        votes[21] = 5;
                                    }
                                }
                            } else {
                                if (diff_median <= 12.652993202209473) {
                                    if (rr_std <= 10.48756742477417) {
                                        if (ss_median <= 55.5) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 4;
                                        }
                                    } else {
                                        if (systolic_area <= 273366.734375) {
                                            votes[21] = 5;
                                        } else {
                                            votes[21] = 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 46.94061851501465) {
                                        if (systolic_area <= 242091.3203125) {
                                            votes[21] = 3;
                                        } else {
                                            votes[21] = 3;
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
                if (rr_std <= 9.446590900421143) {
                    if (diff_median <= 8.738744258880615) {
                        if (diff_median <= 5.897542238235474) {
                            votes[21] = 3;
                        } else {
                            votes[21] = 5;
                        }
                    } else {
                        votes[21] = 3;
                    }
                } else {
                    if (diff_median <= 18.81639575958252) {
                        if (rr_std <= 10.46803903579712) {
                            if (systolic_area <= 1589839.3125) {
                                votes[21] = 3;
                            } else {
                                votes[21] = 4;
                            }
                        } else {
                            if (systolic_time <= 0.03255549818277359) {
                                votes[21] = 4;
                            } else {
                                if (ss_median <= 50.0) {
                                    if (systolic_time <= 0.034004323184490204) {
                                        votes[21] = 4;
                                    } else {
                                        votes[21] = 4;
                                    }
                                } else {
                                    votes[21] = 4;
                                }
                            }
                        }
                    } else {
                        votes[21] = 1;
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 184352.6015625) {
                    if (diff_median <= 17.390315532684326) {
                        if (rr_std <= 4.711605548858643) {
                            if (ss_median <= 73.5) {
                                votes[21] = 2;
                            } else {
                                votes[21] = 2;
                            }
                        } else {
                            if (rr_std <= 6.927605152130127) {
                                votes[21] = 2;
                            } else {
                                if (systolic_time <= 0.4520000070333481) {
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
                    if (systolic_time <= 0.16329000145196915) {
                        votes[21] = 3;
                    } else {
                        votes[21] = 5;
                    }
                }
            } else {
                if (diff_median <= 21.782341957092285) {
                    if (rr_std <= 17.917859077453613) {
                        votes[21] = 3;
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
    if (diff_median <= 0.03044529166072607) {
        if (rr_std <= 3.371516928076744) {
            votes[22] = 0;
        } else {
            if (diff_median <= 0.004107014741748571) {
                votes[22] = 0;
            } else {
                votes[22] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.28987911343574524) {
            if (systolic_area <= 1136458.3125) {
                if (systolic_area <= 48243.8984375) {
                    if (rr_std <= 9.542292594909668) {
                        votes[22] = 3;
                    } else {
                        if (rr_std <= 18.93219757080078) {
                            if (systolic_time <= 0.03500884771347046) {
                                votes[22] = 4;
                            } else {
                                votes[22] = 4;
                            }
                        } else {
                            votes[22] = 4;
                        }
                    }
                } else {
                    if (systolic_time <= 0.0850052647292614) {
                        if (systolic_area <= 302548.375) {
                            votes[22] = 1;
                        } else {
                            if (systolic_time <= 0.05169336125254631) {
                                if (ss_median <= 46.75) {
                                    votes[22] = 1;
                                } else {
                                    votes[22] = 1;
                                }
                            } else {
                                if (diff_median <= 32.20073223114014) {
                                    if (ss_median <= 44.75) {
                                        if (diff_median <= 11.243181705474854) {
                                            votes[22] = 4;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        if (systolic_time <= 0.06822891905903816) {
                                            votes[22] = 1;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 10.718014240264893) {
                                        votes[22] = 1;
                                    } else {
                                        votes[22] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 66.5) {
                            if (ss_median <= 48.75) {
                                if (diff_median <= 4.970672130584717) {
                                    votes[22] = 5;
                                } else {
                                    if (rr_std <= 16.13937282562256) {
                                        if (diff_median <= 28.41865825653076) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 274314.21875) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 12.257632732391357) {
                                    if (systolic_time <= 0.2762758582830429) {
                                        if (rr_std <= 9.657167434692383) {
                                            votes[22] = 3;
                                        } else {
                                            votes[22] = 3;
                                        }
                                    } else {
                                        votes[22] = 4;
                                    }
                                } else {
                                    if (systolic_area <= 289987.4375) {
                                        if (diff_median <= 9.494954586029053) {
                                            votes[22] = 5;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        votes[22] = 1;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 70.5) {
                                if (systolic_area <= 248617.625) {
                                    if (rr_std <= 7.0890419483184814) {
                                        if (systolic_time <= 0.19820155203342438) {
                                            votes[22] = 2;
                                        } else {
                                            votes[22] = 2;
                                        }
                                    } else {
                                        votes[22] = 2;
                                    }
                                } else {
                                    votes[22] = 3;
                                }
                            } else {
                                votes[22] = 3;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 7.514648199081421) {
                    votes[22] = 3;
                } else {
                    if (diff_median <= 18.81639575958252) {
                        if (systolic_area <= 1581538.75) {
                            if (ss_median <= 52.75) {
                                if (systolic_area <= 1372491.625) {
                                    votes[22] = 1;
                                } else {
                                    votes[22] = 5;
                                }
                            } else {
                                if (systolic_time <= 0.09110606089234352) {
                                    if (ss_median <= 57.5) {
                                        votes[22] = 4;
                                    } else {
                                        votes[22] = 3;
                                    }
                                } else {
                                    votes[22] = 4;
                                }
                            }
                        } else {
                            if (rr_std <= 9.3821439743042) {
                                votes[22] = 4;
                            } else {
                                votes[22] = 4;
                            }
                        }
                    } else {
                        votes[22] = 5;
                    }
                }
            }
        } else {
            if (ss_median <= 50.25) {
                if (rr_std <= 21.522724151611328) {
                    if (systolic_area <= 21198.5478515625) {
                        votes[22] = 1;
                    } else {
                        if (ss_median <= 47.5) {
                            votes[22] = 5;
                        } else {
                            votes[22] = 5;
                        }
                    }
                } else {
                    if (systolic_time <= 0.48011429607868195) {
                        votes[22] = 1;
                    } else {
                        votes[22] = 1;
                    }
                }
            } else {
                if (diff_median <= 14.933287620544434) {
                    if (ss_median <= 69.75) {
                        if (ss_median <= 63.0) {
                            if (systolic_area <= 29738.5107421875) {
                                if (systolic_time <= 1.0128571391105652) {
                                    if (rr_std <= 15.087045669555664) {
                                        if (systolic_time <= 0.419164702296257) {
                                            votes[22] = 2;
                                        } else {
                                            votes[22] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= 13422.24658203125) {
                                            votes[22] = 2;
                                        } else {
                                            votes[22] = 2;
                                        }
                                    }
                                } else {
                                    votes[22] = 2;
                                }
                            } else {
                                votes[22] = 1;
                            }
                        } else {
                            votes[22] = 5;
                        }
                    } else {
                        if (ss_median <= 73.5) {
                            if (systolic_time <= 0.4224444329738617) {
                                votes[22] = 2;
                            } else {
                                if (systolic_area <= 82429.99609375) {
                                    votes[22] = 2;
                                } else {
                                    votes[22] = 2;
                                }
                            }
                        } else {
                            votes[22] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 109718.265625) {
                        votes[22] = 5;
                    } else {
                        votes[22] = 3;
                    }
                }
            }
        }
    }
// Decision rules for tree 23
    if (diff_median <= 0.08579669892787933) {
        if (diff_median <= 0.004066428868100047) {
            votes[23] = 0;
        } else {
            if (rr_std <= 2.8213865607976913) {
                votes[23] = 0;
            } else {
                votes[23] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.2760000079870224) {
            if (rr_std <= 9.70350980758667) {
                if (ss_median <= 66.5) {
                    if (ss_median <= 42.25) {
                        if (rr_std <= 4.603369474411011) {
                            votes[23] = 5;
                        } else {
                            votes[23] = 1;
                        }
                    } else {
                        if (diff_median <= 4.940803527832031) {
                            if (systolic_time <= 0.11239045485854149) {
                                votes[23] = 4;
                            } else {
                                votes[23] = 5;
                            }
                        } else {
                            if (systolic_time <= 0.10032592713832855) {
                                if (systolic_time <= 0.028547613881528378) {
                                    votes[23] = 3;
                                } else {
                                    if (diff_median <= 32.21865272521973) {
                                        if (diff_median <= 15.094590187072754) {
                                            votes[23] = 1;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        votes[23] = 1;
                                    }
                                }
                            } else {
                                if (diff_median <= 24.682432174682617) {
                                    if (diff_median <= 20.791752815246582) {
                                        if (rr_std <= 7.824291706085205) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        votes[23] = 1;
                                    }
                                } else {
                                    votes[23] = 3;
                                }
                            }
                        }
                    }
                } else {
                    if (diff_median <= 8.174882650375366) {
                        if (diff_median <= 5.178769588470459) {
                            votes[23] = 3;
                        } else {
                            votes[23] = 3;
                        }
                    } else {
                        if (systolic_time <= 0.17389371991157532) {
                            votes[23] = 2;
                        } else {
                            if (diff_median <= 12.937006950378418) {
                                votes[23] = 2;
                            } else {
                                votes[23] = 2;
                            }
                        }
                    }
                }
            } else {
                if (systolic_area <= 1116136.3125) {
                    if (systolic_area <= 47907.599609375) {
                        if (systolic_time <= 0.1057535745203495) {
                            if (diff_median <= 2.103205144405365) {
                                votes[23] = 4;
                            } else {
                                votes[23] = 1;
                            }
                        } else {
                            if (systolic_area <= 31957.453125) {
                                votes[23] = 4;
                            } else {
                                votes[23] = 4;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.06721820682287216) {
                            if (ss_median <= 54.5) {
                                if (systolic_area <= 842187.78125) {
                                    votes[23] = 1;
                                } else {
                                    votes[23] = 1;
                                }
                            } else {
                                votes[23] = 1;
                            }
                        } else {
                            if (rr_std <= 15.177318572998047) {
                                if (systolic_area <= 314543.078125) {
                                    if (systolic_area <= 237888.3671875) {
                                        if (systolic_time <= 0.1743265688419342) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 249777.03125) {
                                            votes[23] = 1;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 50.457122802734375) {
                                        if (diff_median <= 15.301966190338135) {
                                            votes[23] = 3;
                                        } else {
                                            votes[23] = 3;
                                        }
                                    } else {
                                        votes[23] = 5;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.08019840717315674) {
                                    votes[23] = 1;
                                } else {
                                    if (ss_median <= 57.0) {
                                        if (rr_std <= 16.58811855316162) {
                                            votes[23] = 5;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    } else {
                                        votes[23] = 1;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (ss_median <= 50.0) {
                        if (systolic_time <= 0.04282765835523605) {
                            if (systolic_area <= 4025378.25) {
                                votes[23] = 4;
                            } else {
                                votes[23] = 4;
                            }
                        } else {
                            votes[23] = 5;
                        }
                    } else {
                        if (rr_std <= 19.061857223510742) {
                            if (systolic_time <= 0.06557849794626236) {
                                if (diff_median <= 5.127537131309509) {
                                    votes[23] = 4;
                                } else {
                                    votes[23] = 4;
                                }
                            } else {
                                if (rr_std <= 10.294044494628906) {
                                    votes[23] = 4;
                                } else {
                                    votes[23] = 4;
                                }
                            }
                        } else {
                            votes[23] = 4;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 24.86577606201172) {
                if (diff_median <= 14.933287620544434) {
                    if (ss_median <= 50.25) {
                        if (systolic_area <= 56212.806640625) {
                            if (rr_std <= 14.566115856170654) {
                                votes[23] = 5;
                            } else {
                                votes[23] = 1;
                            }
                        } else {
                            votes[23] = 3;
                        }
                    } else {
                        if (systolic_area <= 129175.23828125) {
                            if (ss_median <= 73.75) {
                                if (ss_median <= 69.75) {
                                    if (systolic_area <= 24690.1474609375) {
                                        votes[23] = 2;
                                    } else {
                                        if (systolic_time <= 0.4076105207204819) {
                                            votes[23] = 2;
                                        } else {
                                            votes[23] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 73702.06640625) {
                                        votes[23] = 2;
                                    } else {
                                        votes[23] = 2;
                                    }
                                }
                            } else {
                                votes[23] = 5;
                            }
                        } else {
                            votes[23] = 4;
                        }
                    }
                } else {
                    if (systolic_time <= 0.8187777698040009) {
                        if (systolic_area <= 130882.703125) {
                            votes[23] = 5;
                        } else {
                            votes[23] = 3;
                        }
                    } else {
                        votes[23] = 1;
                    }
                }
            } else {
                if (systolic_time <= 0.8151111006736755) {
                    if (systolic_area <= 19686.4619140625) {
                        votes[23] = 5;
                    } else {
                        votes[23] = 1;
                    }
                } else {
                    votes[23] = 1;
                }
            }
        }
    }
// Decision rules for tree 24
    if (diff_median <= 0.06968991085886955) {
        if (rr_std <= 87.54888153076172) {
            if (rr_std <= 5.355673313140869) {
                votes[24] = 0;
            } else {
                if (diff_median <= 0.004516886314377189) {
                    votes[24] = 0;
                } else {
                    votes[24] = 0;
                }
            }
        } else {
            votes[24] = 0;
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1136458.3125) {
                if (rr_std <= 10.253437995910645) {
                    if (ss_median <= 49.25) {
                        if (systolic_time <= 0.06831244006752968) {
                            if (ss_median <= 44.25) {
                                votes[24] = 4;
                            } else {
                                votes[24] = 1;
                            }
                        } else {
                            if (systolic_time <= 0.2790663093328476) {
                                if (diff_median <= 5.042850732803345) {
                                    votes[24] = 5;
                                } else {
                                    if (diff_median <= 9.992846965789795) {
                                        if (systolic_area <= 245269.2421875) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 5.8780505657196045) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 3;
                                        }
                                    }
                                }
                            } else {
                                votes[24] = 5;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.38919998705387115) {
                            if (systolic_time <= 0.08531274646520615) {
                                if (systolic_area <= 261270.84375) {
                                    votes[24] = 3;
                                } else {
                                    if (systolic_area <= 358981.140625) {
                                        votes[24] = 1;
                                    } else {
                                        votes[24] = 1;
                                    }
                                }
                            } else {
                                if (systolic_area <= 358584.09375) {
                                    if (systolic_area <= 238896.4140625) {
                                        if (ss_median <= 52.75) {
                                            votes[24] = 3;
                                        } else {
                                            votes[24] = 3;
                                        }
                                    } else {
                                        votes[24] = 3;
                                    }
                                } else {
                                    if (rr_std <= 3.127577781677246) {
                                        votes[24] = 3;
                                    } else {
                                        votes[24] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[24] = 5;
                        }
                    }
                } else {
                    if (systolic_time <= 0.07996078208088875) {
                        if (systolic_area <= 21918.272583007812) {
                            votes[24] = 4;
                        } else {
                            if (systolic_time <= 0.0666862279176712) {
                                if (ss_median <= 57.0) {
                                    votes[24] = 1;
                                } else {
                                    votes[24] = 1;
                                }
                            } else {
                                if (systolic_area <= 321504.234375) {
                                    votes[24] = 1;
                                } else {
                                    votes[24] = 3;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.5103999972343445) {
                            if (rr_std <= 20.051213264465332) {
                                if (systolic_area <= 29828.9248046875) {
                                    if (systolic_area <= 25849.34375) {
                                        if (ss_median <= 50.0) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 2;
                                        }
                                    } else {
                                        votes[24] = 2;
                                    }
                                } else {
                                    if (rr_std <= 15.183817386627197) {
                                        if (diff_median <= 12.187095642089844) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 12.234694957733154) {
                                            votes[24] = 5;
                                        } else {
                                            votes[24] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 50.0) {
                                    if (systolic_area <= 75187.720703125) {
                                        votes[24] = 4;
                                    } else {
                                        votes[24] = 5;
                                    }
                                } else {
                                    if (rr_std <= 24.974759101867676) {
                                        votes[24] = 4;
                                    } else {
                                        votes[24] = 4;
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 50.75) {
                                if (diff_median <= 16.613525390625) {
                                    votes[24] = 1;
                                } else {
                                    votes[24] = 1;
                                }
                            } else {
                                if (systolic_area <= 22369.9375) {
                                    if (diff_median <= 7.361528635025024) {
                                        votes[24] = 2;
                                    } else {
                                        votes[24] = 2;
                                    }
                                } else {
                                    votes[24] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.400676727294922) {
                    if (systolic_time <= 0.0331330057233572) {
                        if (systolic_area <= 1311974.5625) {
                            votes[24] = 4;
                        } else {
                            votes[24] = 1;
                        }
                    } else {
                        if (ss_median <= 50.25) {
                            if (systolic_area <= 2403075.875) {
                                votes[24] = 5;
                            } else {
                                votes[24] = 4;
                            }
                        } else {
                            if (ss_median <= 63.75) {
                                if (diff_median <= 14.126954078674316) {
                                    votes[24] = 4;
                                } else {
                                    if (systolic_area <= 1429606.125) {
                                        votes[24] = 4;
                                    } else {
                                        votes[24] = 4;
                                    }
                                }
                            } else {
                                votes[24] = 4;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 1615248.8125) {
                        votes[24] = 3;
                    } else {
                        votes[24] = 3;
                    }
                }
            }
        } else {
            if (systolic_area <= 236195.6015625) {
                if (rr_std <= 9.244638442993164) {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 4.396815538406372) {
                            votes[24] = 2;
                        } else {
                            if (systolic_area <= 88905.99609375) {
                                if (systolic_time <= 0.4444705992937088) {
                                    votes[24] = 5;
                                } else {
                                    votes[24] = 2;
                                }
                            } else {
                                if (systolic_area <= 192079.890625) {
                                    votes[24] = 2;
                                } else {
                                    votes[24] = 2;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 135132.97265625) {
                            votes[24] = 2;
                        } else {
                            votes[24] = 3;
                        }
                    }
                } else {
                    if (rr_std <= 15.31504774093628) {
                        votes[24] = 5;
                    } else {
                        if (systolic_time <= 0.21787581592798233) {
                            votes[24] = 4;
                        } else {
                            votes[24] = 4;
                        }
                    }
                }
            } else {
                if (diff_median <= 15.760447978973389) {
                    votes[24] = 3;
                } else {
                    votes[24] = 3;
                }
            }
        }
    }
// Decision rules for tree 25
    if (diff_median <= 0.06968991085886955) {
        if (rr_std <= 3.005691275000572) {
            votes[25] = 0;
        } else {
            if (diff_median <= 0.0044935515616089106) {
                votes[25] = 0;
            } else {
                votes[25] = 0;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1144473.8125) {
                if (systolic_area <= 47907.599609375) {
                    if (systolic_time <= 0.3418181836605072) {
                        if (diff_median <= 10.98346996307373) {
                            if (systolic_time <= 0.27971282601356506) {
                                if (systolic_area <= 31957.453125) {
                                    if (diff_median <= 1.4684094786643982) {
                                        votes[25] = 4;
                                    } else {
                                        votes[25] = 4;
                                    }
                                } else {
                                    votes[25] = 4;
                                }
                            } else {
                                votes[25] = 4;
                            }
                        } else {
                            votes[25] = 3;
                        }
                    } else {
                        if (rr_std <= 24.649049758911133) {
                            if (rr_std <= 14.43082857131958) {
                                votes[25] = 5;
                            } else {
                                if (systolic_time <= 1.023714303970337) {
                                    if (rr_std <= 20.07761287689209) {
                                        if (rr_std <= 17.922286987304688) {
                                            votes[25] = 2;
                                        } else {
                                            votes[25] = 2;
                                        }
                                    } else {
                                        votes[25] = 2;
                                    }
                                } else {
                                    votes[25] = 1;
                                }
                            }
                        } else {
                            if (systolic_area <= 13251.22216796875) {
                                votes[25] = 1;
                            } else {
                                votes[25] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.10030317306518555) {
                        if (rr_std <= 11.178565502166748) {
                            if (systolic_area <= 394366.390625) {
                                if (diff_median <= 26.646583557128906) {
                                    if (systolic_time <= 0.06957900896668434) {
                                        votes[25] = 1;
                                    } else {
                                        votes[25] = 3;
                                    }
                                } else {
                                    votes[25] = 1;
                                }
                            } else {
                                if (systolic_area <= 907594.78125) {
                                    if (diff_median <= 6.539689064025879) {
                                        votes[25] = 4;
                                    } else {
                                        if (ss_median <= 53.75) {
                                            votes[25] = 5;
                                        } else {
                                            votes[25] = 1;
                                        }
                                    }
                                } else {
                                    votes[25] = 3;
                                }
                            }
                        } else {
                            if (systolic_area <= 344381.8125) {
                                if (systolic_area <= 299548.46875) {
                                    if (ss_median <= 52.5) {
                                        votes[25] = 1;
                                    } else {
                                        votes[25] = 1;
                                    }
                                } else {
                                    votes[25] = 5;
                                }
                            } else {
                                if (systolic_time <= 0.06858889013528824) {
                                    if (rr_std <= 14.629390716552734) {
                                        votes[25] = 1;
                                    } else {
                                        votes[25] = 1;
                                    }
                                } else {
                                    if (rr_std <= 13.307454109191895) {
                                        votes[25] = 1;
                                    } else {
                                        votes[25] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.087306499481201) {
                            if (ss_median <= 48.75) {
                                if (diff_median <= 20.877151489257812) {
                                    if (systolic_time <= 0.12011655047535896) {
                                        if (rr_std <= 10.633883953094482) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 3;
                                        }
                                    } else {
                                        if (systolic_time <= 0.1560298055410385) {
                                            votes[25] = 5;
                                        } else {
                                            votes[25] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.17275115847587585) {
                                        if (systolic_time <= 0.14879725873470306) {
                                            votes[25] = 1;
                                        } else {
                                            votes[25] = 3;
                                        }
                                    } else {
                                        votes[25] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= 122772.0) {
                                    votes[25] = 5;
                                } else {
                                    if (systolic_area <= 272396.78125) {
                                        if (systolic_time <= 0.1841125562787056) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 12.327876091003418) {
                                            votes[25] = 3;
                                        } else {
                                            votes[25] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.1537346914410591) {
                                votes[25] = 4;
                            } else {
                                if (rr_std <= 22.72266387939453) {
                                    if (systolic_area <= 260123.3359375) {
                                        votes[25] = 5;
                                    } else {
                                        votes[25] = 5;
                                    }
                                } else {
                                    votes[25] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.3821439743042) {
                    if (systolic_area <= 2543798.375) {
                        if (systolic_area <= 1584333.125) {
                            votes[25] = 5;
                        } else {
                            votes[25] = 3;
                        }
                    } else {
                        votes[25] = 4;
                    }
                } else {
                    if (systolic_area <= 1727948.1875) {
                        if (ss_median <= 51.25) {
                            if (systolic_area <= 1369698.375) {
                                votes[25] = 1;
                            } else {
                                votes[25] = 5;
                            }
                        } else {
                            if (systolic_time <= 0.07280198484659195) {
                                votes[25] = 1;
                            } else {
                                if (rr_std <= 10.470348358154297) {
                                    votes[25] = 4;
                                } else {
                                    votes[25] = 4;
                                }
                            }
                        }
                    } else {
                        votes[25] = 4;
                    }
                }
            }
        } else {
            if (systolic_area <= 230412.609375) {
                if (ss_median <= 73.75) {
                    if (diff_median <= 15.386186122894287) {
                        if (diff_median <= 3.3606507778167725) {
                            votes[25] = 2;
                        } else {
                            if (systolic_area <= 88905.99609375) {
                                if (systolic_time <= 0.4444705992937088) {
                                    votes[25] = 2;
                                } else {
                                    if (systolic_time <= 0.515857145190239) {
                                        votes[25] = 2;
                                    } else {
                                        votes[25] = 2;
                                    }
                                }
                            } else {
                                if (systolic_area <= 158444.484375) {
                                    votes[25] = 2;
                                } else {
                                    votes[25] = 2;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 7.175737142562866) {
                            votes[25] = 2;
                        } else {
                            votes[25] = 5;
                        }
                    }
                } else {
                    if (systolic_area <= 92910.6015625) {
                        votes[25] = 2;
                    } else {
                        votes[25] = 3;
                    }
                }
            } else {
                if (systolic_time <= 0.1274036355316639) {
                    if (systolic_area <= 624302.59375) {
                        votes[25] = 3;
                    } else {
                        votes[25] = 3;
                    }
                } else {
                    votes[25] = 5;
                }
            }
        }
    }
// Decision rules for tree 26
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004076202865689993) {
            votes[26] = 2;
        } else {
            if (rr_std <= 3.4454481452703476) {
                votes[26] = 0;
            } else {
                if (rr_std <= 102.29393005371094) {
                    votes[26] = 0;
                } else {
                    votes[26] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1144473.8125) {
                if (systolic_area <= 47907.599609375) {
                    if (systolic_time <= 0.3418181836605072) {
                        if (diff_median <= 12.586799144744873) {
                            if (systolic_time <= 0.2809777855873108) {
                                if (diff_median <= 2.9080346822738647) {
                                    if (diff_median <= 1.4684094786643982) {
                                        votes[26] = 4;
                                    } else {
                                        votes[26] = 5;
                                    }
                                } else {
                                    votes[26] = 4;
                                }
                            } else {
                                votes[26] = 4;
                            }
                        } else {
                            votes[26] = 3;
                        }
                    } else {
                        if (systolic_time <= 0.6571817994117737) {
                            if (rr_std <= 14.168848037719727) {
                                if (systolic_time <= 0.3989555537700653) {
                                    votes[26] = 2;
                                } else {
                                    votes[26] = 5;
                                }
                            } else {
                                if (diff_median <= 2.3313686847686768) {
                                    votes[26] = 1;
                                } else {
                                    if (ss_median <= 50.75) {
                                        votes[26] = 2;
                                    } else {
                                        votes[26] = 2;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 14333.19482421875) {
                                if (rr_std <= 25.1250057220459) {
                                    votes[26] = 2;
                                } else {
                                    votes[26] = 1;
                                }
                            } else {
                                if (ss_median <= 52.25) {
                                    votes[26] = 1;
                                } else {
                                    votes[26] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.0850052647292614) {
                        if (systolic_area <= 858309.625) {
                            if (ss_median <= 42.25) {
                                votes[26] = 4;
                            } else {
                                if (systolic_area <= 398062.90625) {
                                    if (ss_median <= 44.5) {
                                        votes[26] = 1;
                                    } else {
                                        if (rr_std <= 10.858441352844238) {
                                            votes[26] = 1;
                                        } else {
                                            votes[26] = 1;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 55.5) {
                                        if (rr_std <= 11.29219913482666) {
                                            votes[26] = 4;
                                        } else {
                                            votes[26] = 1;
                                        }
                                    } else {
                                        votes[26] = 1;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 11.498597621917725) {
                                votes[26] = 3;
                            } else {
                                votes[26] = 1;
                            }
                        }
                    } else {
                        if (rr_std <= 15.079118728637695) {
                            if (ss_median <= 48.5) {
                                if (rr_std <= 10.255537509918213) {
                                    if (ss_median <= 41.5) {
                                        votes[26] = 5;
                                    } else {
                                        if (ss_median <= 44.5) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 14.80295467376709) {
                                        if (systolic_area <= 212348.9375) {
                                            votes[26] = 5;
                                        } else {
                                            votes[26] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 309161.125) {
                                            votes[26] = 1;
                                        } else {
                                            votes[26] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 13.361648559570312) {
                                    if (rr_std <= 1.9837775230407715) {
                                        votes[26] = 3;
                                    } else {
                                        if (diff_median <= 7.502258539199829) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 6.8858864307403564) {
                                        votes[26] = 3;
                                    } else {
                                        if (rr_std <= 9.94936466217041) {
                                            votes[26] = 3;
                                        } else {
                                            votes[26] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.14563491940498352) {
                                if (diff_median <= 15.787216663360596) {
                                    if (ss_median <= 48.0) {
                                        votes[26] = 5;
                                    } else {
                                        votes[26] = 4;
                                    }
                                } else {
                                    votes[26] = 1;
                                }
                            } else {
                                if (rr_std <= 18.129616737365723) {
                                    votes[26] = 5;
                                } else {
                                    if (ss_median <= 46.75) {
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
                if (rr_std <= 8.481294631958008) {
                    if (diff_median <= 15.252370834350586) {
                        votes[26] = 3;
                    } else {
                        votes[26] = 3;
                    }
                } else {
                    if (diff_median <= 19.229668617248535) {
                        if (systolic_area <= 1460019.6875) {
                            if (systolic_area <= 1416906.75) {
                                if (ss_median <= 55.0) {
                                    votes[26] = 1;
                                } else {
                                    if (rr_std <= 11.185087203979492) {
                                        votes[26] = 4;
                                    } else {
                                        votes[26] = 4;
                                    }
                                }
                            } else {
                                votes[26] = 5;
                            }
                        } else {
                            if (ss_median <= 48.25) {
                                if (systolic_time <= 0.033687978982925415) {
                                    votes[26] = 4;
                                } else {
                                    votes[26] = 4;
                                }
                            } else {
                                votes[26] = 4;
                            }
                        }
                    } else {
                        votes[26] = 3;
                    }
                }
            }
        } else {
            if (systolic_area <= 230412.609375) {
                if (rr_std <= 9.244638442993164) {
                    if (diff_median <= 5.547675609588623) {
                        if (systolic_area <= 131121.0546875) {
                            if (systolic_time <= 0.3754380941390991) {
                                votes[26] = 2;
                            } else {
                                votes[26] = 5;
                            }
                        } else {
                            votes[26] = 5;
                        }
                    } else {
                        if (systolic_time <= 0.4251111000776291) {
                            if (systolic_time <= 0.1660711094737053) {
                                votes[26] = 2;
                            } else {
                                votes[26] = 2;
                            }
                        } else {
                            if (systolic_area <= 82835.1796875) {
                                if (ss_median <= 72.25) {
                                    votes[26] = 2;
                                } else {
                                    votes[26] = 2;
                                }
                            } else {
                                votes[26] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 18.81850242614746) {
                        votes[26] = 3;
                    } else {
                        votes[26] = 4;
                    }
                }
            } else {
                if (diff_median <= 15.022047519683838) {
                    votes[26] = 3;
                } else {
                    votes[26] = 5;
                }
            }
        }
    }
// Decision rules for tree 27
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.003862016135826707) {
            votes[27] = 2;
        } else {
            if (rr_std <= 4.194984555244446) {
                votes[27] = 2;
            } else {
                if (rr_std <= 102.29393005371094) {
                    votes[27] = 0;
                } else {
                    votes[27] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1265087.125) {
                if (rr_std <= 15.072619915008545) {
                    if (systolic_time <= 0.08089311048388481) {
                        if (systolic_area <= 130297.7109375) {
                            if (diff_median <= 6.915104150772095) {
                                votes[27] = 4;
                            } else {
                                votes[27] = 3;
                            }
                        } else {
                            if (systolic_area <= 1022641.6875) {
                                if (ss_median <= 45.75) {
                                    if (rr_std <= 10.395636081695557) {
                                        votes[27] = 3;
                                    } else {
                                        votes[27] = 1;
                                    }
                                } else {
                                    if (systolic_time <= 0.06935311481356621) {
                                        if (ss_median <= 51.75) {
                                            votes[27] = 1;
                                        } else {
                                            votes[27] = 1;
                                        }
                                    } else {
                                        if (systolic_time <= 0.0744716264307499) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 1;
                                        }
                                    }
                                }
                            } else {
                                votes[27] = 3;
                            }
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (rr_std <= 9.183510303497314) {
                                if (rr_std <= 1.1241505146026611) {
                                    votes[27] = 3;
                                } else {
                                    if (ss_median <= 42.5) {
                                        votes[27] = 5;
                                    } else {
                                        if (ss_median <= 47.5) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 45.75) {
                                    if (systolic_area <= 212348.9375) {
                                        votes[27] = 5;
                                    } else {
                                        votes[27] = 3;
                                    }
                                } else {
                                    if (systolic_area <= 283938.1796875) {
                                        if (systolic_area <= 233299.6796875) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 1;
                                        }
                                    } else {
                                        votes[27] = 3;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 98288.82421875) {
                                if (diff_median <= 3.77221417427063) {
                                    votes[27] = 1;
                                } else {
                                    if (systolic_time <= 0.3989555537700653) {
                                        votes[27] = 2;
                                    } else {
                                        votes[27] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 9.962873935699463) {
                                    if (diff_median <= 8.950088024139404) {
                                        if (diff_median <= 5.9107584953308105) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    } else {
                                        if (systolic_time <= 0.08652828633785248) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 12.586992740631104) {
                                        if (ss_median <= 51.0) {
                                            votes[27] = 3;
                                        } else {
                                            votes[27] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 264801.828125) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.3340703994035721) {
                        if (systolic_area <= 53541.966796875) {
                            if (rr_std <= 20.261210441589355) {
                                votes[27] = 4;
                            } else {
                                votes[27] = 4;
                            }
                        } else {
                            if (systolic_time <= 0.08546428009867668) {
                                if (diff_median <= 7.981634855270386) {
                                    votes[27] = 1;
                                } else {
                                    votes[27] = 1;
                                }
                            } else {
                                if (systolic_time <= 0.14563491940498352) {
                                    if (systolic_area <= 464751.546875) {
                                        if (systolic_area <= 229756.703125) {
                                            votes[27] = 1;
                                        } else {
                                            votes[27] = 4;
                                        }
                                    } else {
                                        votes[27] = 5;
                                    }
                                } else {
                                    if (systolic_area <= 164436.75) {
                                        votes[27] = 5;
                                    } else {
                                        if (rr_std <= 17.990124702453613) {
                                            votes[27] = 5;
                                        } else {
                                            votes[27] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 24.32447052001953) {
                            if (ss_median <= 51.5) {
                                if (systolic_area <= 25952.6435546875) {
                                    votes[27] = 1;
                                } else {
                                    votes[27] = 5;
                                }
                            } else {
                                if (systolic_area <= 26418.6484375) {
                                    if (rr_std <= 18.18818187713623) {
                                        votes[27] = 2;
                                    } else {
                                        votes[27] = 2;
                                    }
                                } else {
                                    votes[27] = 2;
                                }
                            }
                        } else {
                            if (systolic_area <= 18107.3486328125) {
                                votes[27] = 1;
                            } else {
                                votes[27] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 17.81293773651123) {
                    if (systolic_time <= 0.03297355957329273) {
                        votes[27] = 1;
                    } else {
                        if (rr_std <= 9.182872295379639) {
                            votes[27] = 4;
                        } else {
                            if (diff_median <= 14.112196445465088) {
                                if (rr_std <= 18.2642879486084) {
                                    votes[27] = 4;
                                } else {
                                    votes[27] = 4;
                                }
                            } else {
                                if (rr_std <= 11.35561466217041) {
                                    votes[27] = 4;
                                } else {
                                    votes[27] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 1627438.3125) {
                        votes[27] = 3;
                    } else {
                        votes[27] = 3;
                    }
                }
            }
        } else {
            if (systolic_area <= 230412.609375) {
                if (rr_std <= 10.886465549468994) {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 4.29285192489624) {
                            votes[27] = 2;
                        } else {
                            if (systolic_area <= 176308.328125) {
                                votes[27] = 2;
                            } else {
                                votes[27] = 2;
                            }
                        }
                    } else {
                        if (systolic_area <= 95682.9453125) {
                            votes[27] = 2;
                        } else {
                            votes[27] = 3;
                        }
                    }
                } else {
                    if (systolic_area <= 68919.6484375) {
                        votes[27] = 4;
                    } else {
                        votes[27] = 3;
                    }
                }
            } else {
                if (diff_median <= 15.760447978973389) {
                    if (systolic_area <= 471195.296875) {
                        votes[27] = 3;
                    } else {
                        votes[27] = 3;
                    }
                } else {
                    votes[27] = 5;
                }
            }
        }
    }
// Decision rules for tree 28
    if (diff_median <= 0.06968991085886955) {
        if (diff_median <= 0.004092516377568245) {
            votes[28] = 0;
        } else {
            if (rr_std <= 7.092077732086182) {
                votes[28] = 0;
            } else {
                votes[28] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1259380.25) {
                if (systolic_area <= 45731.693359375) {
                    if (systolic_time <= 0.3966631442308426) {
                        if (rr_std <= 19.698450088500977) {
                            if (systolic_area <= 19161.8974609375) {
                                if (diff_median <= 7.254663467407227) {
                                    if (ss_median <= 46.0) {
                                        votes[28] = 4;
                                    } else {
                                        votes[28] = 4;
                                    }
                                } else {
                                    votes[28] = 3;
                                }
                            } else {
                                if (diff_median <= 4.894253492355347) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 2;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.1867000013589859) {
                                votes[28] = 4;
                            } else {
                                if (ss_median <= 60.25) {
                                    votes[28] = 4;
                                } else {
                                    votes[28] = 4;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 24.32447052001953) {
                            if (systolic_area <= 20373.869140625) {
                                votes[28] = 2;
                            } else {
                                if (systolic_time <= 0.5885034799575806) {
                                    if (diff_median <= 5.891192436218262) {
                                        if (diff_median <= 4.303074598312378) {
                                            votes[28] = 2;
                                        } else {
                                            votes[28] = 2;
                                        }
                                    } else {
                                        votes[28] = 5;
                                    }
                                } else {
                                    votes[28] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 27.81925106048584) {
                                votes[28] = 1;
                            } else {
                                votes[28] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08917773142457008) {
                        if (diff_median <= 23.398984909057617) {
                            if (rr_std <= 11.176952362060547) {
                                if (systolic_time <= 0.05637322552502155) {
                                    votes[28] = 1;
                                } else {
                                    if (systolic_area <= 342354.03125) {
                                        votes[28] = 1;
                                    } else {
                                        if (ss_median <= 52.75) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 43.0) {
                                    votes[28] = 5;
                                } else {
                                    if (systolic_area <= 1022641.6875) {
                                        if (systolic_time <= 0.06227490305900574) {
                                            votes[28] = 1;
                                        } else {
                                            votes[28] = 1;
                                        }
                                    } else {
                                        votes[28] = 1;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 394549.296875) {
                                if (systolic_area <= 314647.84375) {
                                    votes[28] = 1;
                                } else {
                                    votes[28] = 1;
                                }
                            } else {
                                if (rr_std <= 10.582107543945312) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 111313.03515625) {
                            if (diff_median <= 7.712582588195801) {
                                votes[28] = 5;
                            } else {
                                if (ss_median <= 46.25) {
                                    votes[28] = 5;
                                } else {
                                    votes[28] = 5;
                                }
                            }
                        } else {
                            if (ss_median <= 48.75) {
                                if (diff_median <= 21.42103385925293) {
                                    if (diff_median <= 5.312238454818726) {
                                        votes[28] = 5;
                                    } else {
                                        if (ss_median <= 46.75) {
                                            votes[28] = 5;
                                        } else {
                                            votes[28] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.171833336353302) {
                                        if (systolic_area <= 261971.0546875) {
                                            votes[28] = 1;
                                        } else {
                                            votes[28] = 1;
                                        }
                                    } else {
                                        votes[28] = 5;
                                    }
                                }
                            } else {
                                if (diff_median <= 11.909705638885498) {
                                    if (rr_std <= 11.873761177062988) {
                                        if (rr_std <= 10.138969421386719) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 54.5) {
                                            votes[28] = 5;
                                        } else {
                                            votes[28] = 5;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 43.7681884765625) {
                                        if (ss_median <= 52.25) {
                                            votes[28] = 3;
                                        } else {
                                            votes[28] = 3;
                                        }
                                    } else {
                                        votes[28] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.81639575958252) {
                    if (systolic_time <= 0.03255549818277359) {
                        votes[28] = 1;
                    } else {
                        if (systolic_area <= 1729023.875) {
                            if (systolic_time <= 0.07731464132666588) {
                                votes[28] = 5;
                            } else {
                                if (rr_std <= 10.532838344573975) {
                                    votes[28] = 4;
                                } else {
                                    votes[28] = 4;
                                }
                            }
                        } else {
                            votes[28] = 4;
                        }
                    }
                } else {
                    votes[28] = 3;
                }
            }
        } else {
            if (systolic_area <= 176308.328125) {
                if (rr_std <= 9.440065383911133) {
                    if (systolic_area <= 74396.34375) {
                        votes[28] = 5;
                    } else {
                        if (ss_median <= 73.5) {
                            if (systolic_area <= 90033.8671875) {
                                if (systolic_time <= 0.45105883479118347) {
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
                    }
                } else {
                    if (rr_std <= 18.928680419921875) {
                        votes[28] = 3;
                    } else {
                        votes[28] = 4;
                    }
                }
            } else {
                if (diff_median <= 14.04937744140625) {
                    if (systolic_time <= 0.1022278480231762) {
                        votes[28] = 3;
                    } else {
                        votes[28] = 3;
                    }
                } else {
                    if (ss_median <= 68.25) {
                        votes[28] = 2;
                    } else {
                        votes[28] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 29
    if (diff_median <= 0.03044529166072607) {
        if (diff_median <= 0.004234063671901822) {
            votes[29] = 4;
        } else {
            votes[29] = 0;
        }
    } else {
        if (systolic_time <= 0.28987911343574524) {
            if (systolic_area <= 1267299.375) {
                if (systolic_area <= 47907.599609375) {
                    if (diff_median <= 12.586799144744873) {
                        if (systolic_area <= 32468.138671875) {
                            if (systolic_area <= 20413.51171875) {
                                votes[29] = 4;
                            } else {
                                votes[29] = 5;
                            }
                        } else {
                            votes[29] = 4;
                        }
                    } else {
                        votes[29] = 3;
                    }
                } else {
                    if (systolic_time <= 0.08876864239573479) {
                        if (systolic_area <= 302548.375) {
                            if (diff_median <= 11.796945095062256) {
                                votes[29] = 1;
                            } else {
                                votes[29] = 1;
                            }
                        } else {
                            if (ss_median <= 43.25) {
                                if (systolic_area <= 481138.1875) {
                                    votes[29] = 3;
                                } else {
                                    votes[29] = 5;
                                }
                            } else {
                                if (rr_std <= 4.061559677124023) {
                                    votes[29] = 3;
                                } else {
                                    if (diff_median <= 44.96658897399902) {
                                        if (systolic_time <= 0.06108894199132919) {
                                            votes[29] = 1;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    } else {
                                        votes[29] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 66.5) {
                            if (rr_std <= 16.373181343078613) {
                                if (diff_median <= 18.059364318847656) {
                                    if (systolic_time <= 0.23058823496103287) {
                                        if (systolic_area <= 228100.2421875) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    } else {
                                        votes[29] = 3;
                                    }
                                } else {
                                    if (rr_std <= 10.324345588684082) {
                                        if (diff_median <= 24.158918380737305) {
                                            votes[29] = 1;
                                        } else {
                                            votes[29] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 28.72021770477295) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 24.888038635253906) {
                                    if (ss_median <= 44.25) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 5;
                                    }
                                } else {
                                    votes[29] = 4;
                                }
                            }
                        } else {
                            if (ss_median <= 71.0) {
                                if (systolic_area <= 242029.390625) {
                                    if (systolic_time <= 0.18636415153741837) {
                                        votes[29] = 2;
                                    } else {
                                        votes[29] = 2;
                                    }
                                } else {
                                    votes[29] = 3;
                                }
                            } else {
                                if (systolic_time <= 0.2525266483426094) {
                                    votes[29] = 5;
                                } else {
                                    votes[29] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.13351345062256) {
                    if (systolic_time <= 0.033210638910532) {
                        votes[29] = 1;
                    } else {
                        if (systolic_area <= 1742695.375) {
                            if (systolic_time <= 0.07818539068102837) {
                                votes[29] = 5;
                            } else {
                                if (rr_std <= 10.382689952850342) {
                                    votes[29] = 4;
                                } else {
                                    votes[29] = 4;
                                }
                            }
                        } else {
                            votes[29] = 4;
                        }
                    }
                } else {
                    if (systolic_area <= 1584333.125) {
                        votes[29] = 5;
                    } else {
                        votes[29] = 3;
                    }
                }
            }
        } else {
            if (ss_median <= 51.25) {
                if (systolic_area <= 37582.080078125) {
                    if (systolic_time <= 0.521142840385437) {
                        if (diff_median <= 2.6361730098724365) {
                            votes[29] = 4;
                        } else {
                            votes[29] = 2;
                        }
                    } else {
                        votes[29] = 1;
                    }
                } else {
                    if (ss_median <= 47.5) {
                        if (rr_std <= 18.469563484191895) {
                            votes[29] = 5;
                        } else {
                            votes[29] = 5;
                        }
                    } else {
                        votes[29] = 3;
                    }
                }
            } else {
                if (diff_median <= 15.386186122894287) {
                    if (rr_std <= 24.649049758911133) {
                        if (ss_median <= 73.75) {
                            if (systolic_time <= 0.4134736806154251) {
                                if (ss_median <= 65.5) {
                                    if (systolic_time <= 0.3353043496608734) {
                                        votes[29] = 5;
                                    } else {
                                        votes[29] = 2;
                                    }
                                } else {
                                    votes[29] = 2;
                                }
                            } else {
                                if (systolic_area <= 24690.1474609375) {
                                    votes[29] = 2;
                                } else {
                                    if (ss_median <= 72.25) {
                                        if (systolic_time <= 0.4822999984025955) {
                                            votes[29] = 5;
                                        } else {
                                            votes[29] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 82429.99609375) {
                                            votes[29] = 2;
                                        } else {
                                            votes[29] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[29] = 3;
                        }
                    } else {
                        votes[29] = 1;
                    }
                } else {
                    if (systolic_time <= 0.5527179539203644) {
                        votes[29] = 5;
                    } else {
                        votes[29] = 1;
                    }
                }
            }
        }
    }
// Decision rules for tree 30
    if (diff_median <= 0.06968991085886955) {
        if (diff_median <= 0.004066428868100047) {
            votes[30] = 0;
        } else {
            if (rr_std <= 4.194984555244446) {
                votes[30] = 2;
            } else {
                if (rr_std <= 102.29393005371094) {
                    votes[30] = 0;
                } else {
                    votes[30] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1051481.9375) {
                if (rr_std <= 15.079118728637695) {
                    if (systolic_time <= 0.08876864239573479) {
                        if (diff_median <= 19.433613777160645) {
                            if (systolic_time <= 0.05637322552502155) {
                                if (systolic_area <= 733734.03125) {
                                    if (diff_median <= 9.057189702987671) {
                                        if (systolic_area <= 54731.349609375) {
                                            votes[30] = 4;
                                        } else {
                                            votes[30] = 4;
                                        }
                                    } else {
                                        votes[30] = 3;
                                    }
                                } else {
                                    votes[30] = 1;
                                }
                            } else {
                                if (systolic_area <= 445745.078125) {
                                    votes[30] = 1;
                                } else {
                                    if (rr_std <= 10.399247646331787) {
                                        votes[30] = 3;
                                    } else {
                                        votes[30] = 3;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 241836.2734375) {
                                votes[30] = 1;
                            } else {
                                if (systolic_time <= 0.07352760434150696) {
                                    if (systolic_area <= 347411.34375) {
                                        votes[30] = 1;
                                    } else {
                                        votes[30] = 1;
                                    }
                                } else {
                                    if (systolic_time <= 0.08191489428281784) {
                                        votes[30] = 1;
                                    } else {
                                        votes[30] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 110712.87890625) {
                            if (diff_median <= 5.163897752761841) {
                                if (diff_median <= 4.261242866516113) {
                                    if (systolic_time <= 0.4557647109031677) {
                                        votes[30] = 4;
                                    } else {
                                        votes[30] = 1;
                                    }
                                } else {
                                    votes[30] = 2;
                                }
                            } else {
                                if (rr_std <= 12.971628189086914) {
                                    votes[30] = 5;
                                } else {
                                    votes[30] = 5;
                                }
                            }
                        } else {
                            if (diff_median <= 15.86698865890503) {
                                if (ss_median <= 48.75) {
                                    if (rr_std <= 9.223421573638916) {
                                        if (diff_median <= 5.636716365814209) {
                                            votes[30] = 5;
                                        } else {
                                            votes[30] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 9.72336721420288) {
                                            votes[30] = 3;
                                        } else {
                                            votes[30] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.1020989641547203) {
                                        votes[30] = 5;
                                    } else {
                                        if (rr_std <= 3.0664775371551514) {
                                            votes[30] = 3;
                                        } else {
                                            votes[30] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 47.5) {
                                    votes[30] = 1;
                                } else {
                                    if (systolic_area <= 198275.1953125) {
                                        if (diff_median <= 32.088561058044434) {
                                            votes[30] = 1;
                                        } else {
                                            votes[30] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 49.5) {
                                            votes[30] = 3;
                                        } else {
                                            votes[30] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.4059298187494278) {
                        if (systolic_area <= 48210.400390625) {
                            if (rr_std <= 23.737985610961914) {
                                if (diff_median <= 3.5616633892059326) {
                                    votes[30] = 4;
                                } else {
                                    votes[30] = 2;
                                }
                            } else {
                                votes[30] = 4;
                            }
                        } else {
                            if (systolic_time <= 0.16371088474988937) {
                                if (systolic_time <= 0.08486853539943695) {
                                    if (diff_median <= 10.830707550048828) {
                                        votes[30] = 1;
                                    } else {
                                        votes[30] = 1;
                                    }
                                } else {
                                    if (systolic_area <= 216855.171875) {
                                        votes[30] = 1;
                                    } else {
                                        if (rr_std <= 19.275917053222656) {
                                            votes[30] = 5;
                                        } else {
                                            votes[30] = 4;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 24.888038635253906) {
                                    votes[30] = 5;
                                } else {
                                    votes[30] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 24.86577606201172) {
                            if (systolic_time <= 1.1681143045425415) {
                                if (systolic_area <= 20171.9677734375) {
                                    votes[30] = 2;
                                } else {
                                    if (systolic_time <= 0.5433846116065979) {
                                        votes[30] = 2;
                                    } else {
                                        votes[30] = 1;
                                    }
                                }
                            } else {
                                votes[30] = 1;
                            }
                        } else {
                            if (systolic_area <= 13488.75732421875) {
                                votes[30] = 1;
                            } else {
                                votes[30] = 1;
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.611593246459961) {
                    if (systolic_area <= 2324589.25) {
                        if (diff_median <= 11.389796257019043) {
                            votes[30] = 1;
                        } else {
                            votes[30] = 3;
                        }
                    } else {
                        votes[30] = 4;
                    }
                } else {
                    if (diff_median <= 18.81639575958252) {
                        if (ss_median <= 51.25) {
                            if (systolic_time <= 0.03975859843194485) {
                                if (systolic_time <= 0.03255549818277359) {
                                    votes[30] = 4;
                                } else {
                                    votes[30] = 4;
                                }
                            } else {
                                votes[30] = 5;
                            }
                        } else {
                            if (rr_std <= 10.356062889099121) {
                                votes[30] = 4;
                            } else {
                                votes[30] = 4;
                            }
                        }
                    } else {
                        votes[30] = 3;
                    }
                }
            }
        } else {
            if (ss_median <= 73.75) {
                if (systolic_area <= 216288.9609375) {
                    if (rr_std <= 9.244638442993164) {
                        if (systolic_area <= 74396.34375) {
                            votes[30] = 5;
                        } else {
                            if (diff_median <= 4.404758453369141) {
                                votes[30] = 2;
                            } else {
                                if (rr_std <= 3.488726854324341) {
                                    if (rr_std <= 0.5958648025989532) {
                                        votes[30] = 2;
                                    } else {
                                        votes[30] = 2;
                                    }
                                } else {
                                    votes[30] = 2;
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 8.420197010040283) {
                            votes[30] = 4;
                        } else {
                            votes[30] = 5;
                        }
                    }
                } else {
                    if (diff_median <= 15.022047519683838) {
                        votes[30] = 3;
                    } else {
                        votes[30] = 5;
                    }
                }
            } else {
                if (ss_median <= 74.75) {
                    if (systolic_area <= 94697.5) {
                        votes[30] = 2;
                    } else {
                        votes[30] = 5;
                    }
                } else {
                    votes[30] = 3;
                }
            }
        }
    }
// Decision rules for tree 31
    if (diff_median <= 0.0696391137316823) {
        if (diff_median <= 0.004066428868100047) {
            votes[31] = 2;
        } else {
            if (rr_std <= 4.010679841041565) {
                votes[31] = 0;
            } else {
                votes[31] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.2760000079870224) {
            if (systolic_area <= 1144473.8125) {
                if (systolic_area <= 53541.966796875) {
                    if (diff_median <= 12.586799144744873) {
                        if (diff_median <= 9.28077220916748) {
                            if (systolic_area <= 32472.51953125) {
                                if (systolic_time <= 0.06862857192754745) {
                                    votes[31] = 4;
                                } else {
                                    votes[31] = 4;
                                }
                            } else {
                                votes[31] = 4;
                            }
                        } else {
                            votes[31] = 4;
                        }
                    } else {
                        votes[31] = 3;
                    }
                } else {
                    if (systolic_time <= 0.08686956390738487) {
                        if (systolic_area <= 308283.265625) {
                            if (systolic_area <= 244348.6640625) {
                                votes[31] = 1;
                            } else {
                                votes[31] = 1;
                            }
                        } else {
                            if (systolic_time <= 0.06073544919490814) {
                                if (rr_std <= 5.983262538909912) {
                                    votes[31] = 3;
                                } else {
                                    if (systolic_time <= 0.051223089918494225) {
                                        if (systolic_area <= 910572.4375) {
                                            votes[31] = 1;
                                        } else {
                                            votes[31] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 429892.5) {
                                            votes[31] = 1;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (diff_median <= 38.7027645111084) {
                                    if (ss_median <= 43.25) {
                                        votes[31] = 5;
                                    } else {
                                        if (rr_std <= 9.096600532531738) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 3;
                                        }
                                    }
                                } else {
                                    votes[31] = 1;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.785616397857666) {
                            if (ss_median <= 48.75) {
                                if (diff_median <= 21.923081398010254) {
                                    if (systolic_area <= 207961.9765625) {
                                        if (systolic_time <= 0.15102322399616241) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 10.469242572784424) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 10.100097179412842) {
                                        votes[31] = 5;
                                    } else {
                                        if (systolic_time <= 0.12241730839014053) {
                                            votes[31] = 1;
                                        } else {
                                            votes[31] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 66.5) {
                                    if (rr_std <= 8.374650955200195) {
                                        if (ss_median <= 58.5) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 52.25) {
                                            votes[31] = 3;
                                        } else {
                                            votes[31] = 1;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 74.75) {
                                        if (ss_median <= 72.0) {
                                            votes[31] = 2;
                                        } else {
                                            votes[31] = 5;
                                        }
                                    } else {
                                        votes[31] = 3;
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.16371088474988937) {
                                if (systolic_area <= 237268.5703125) {
                                    votes[31] = 1;
                                } else {
                                    votes[31] = 4;
                                }
                            } else {
                                if (rr_std <= 17.345208168029785) {
                                    votes[31] = 5;
                                } else {
                                    votes[31] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.3821439743042) {
                    if (diff_median <= 6.293206691741943) {
                        votes[31] = 1;
                    } else {
                        if (rr_std <= 7.145128965377808) {
                            votes[31] = 3;
                        } else {
                            votes[31] = 3;
                        }
                    }
                } else {
                    if (systolic_area <= 1727948.1875) {
                        if (systolic_time <= 0.07365289330482483) {
                            if (diff_median <= 7.3582963943481445) {
                                votes[31] = 1;
                            } else {
                                votes[31] = 5;
                            }
                        } else {
                            if (systolic_time <= 0.09146969765424728) {
                                votes[31] = 4;
                            } else {
                                votes[31] = 4;
                            }
                        }
                    } else {
                        if (diff_median <= 13.37059736251831) {
                            votes[31] = 4;
                        } else {
                            votes[31] = 4;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 24.649049758911133) {
                if (diff_median <= 15.469798564910889) {
                    if (ss_median <= 48.5) {
                        if (systolic_time <= 0.4700000137090683) {
                            votes[31] = 1;
                        } else {
                            votes[31] = 1;
                        }
                    } else {
                        if (systolic_area <= 127010.140625) {
                            if (diff_median <= 2.2683844566345215) {
                                votes[31] = 5;
                            } else {
                                if (systolic_time <= 0.4134736806154251) {
                                    if (rr_std <= 14.14981746673584) {
                                        votes[31] = 2;
                                    } else {
                                        votes[31] = 2;
                                    }
                                } else {
                                    if (rr_std <= 14.332386493682861) {
                                        if (ss_median <= 71.0) {
                                            votes[31] = 5;
                                        } else {
                                            votes[31] = 2;
                                        }
                                    } else {
                                        if (systolic_area <= 20505.8232421875) {
                                            votes[31] = 2;
                                        } else {
                                            votes[31] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            votes[31] = 3;
                        }
                    }
                } else {
                    if (systolic_area <= 57973.66796875) {
                        votes[31] = 1;
                    } else {
                        if (systolic_area <= 123983.77734375) {
                            votes[31] = 5;
                        } else {
                            votes[31] = 5;
                        }
                    }
                }
            } else {
                if (systolic_time <= 0.6757999956607819) {
                    votes[31] = 1;
                } else {
                    if (systolic_area <= 14080.0419921875) {
                        votes[31] = 1;
                    } else {
                        votes[31] = 1;
                    }
                }
            }
        }
    }
// Decision rules for tree 32
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004079991718754172) {
            votes[32] = 0;
        } else {
            if (rr_std <= 7.092077732086182) {
                votes[32] = 0;
            } else {
                votes[32] = 0;
            }
        }
    } else {
        if (systolic_time <= 0.28987911343574524) {
            if (systolic_area <= 1318163.0625) {
                if (systolic_area <= 48243.8984375) {
                    if (diff_median <= 12.586799144744873) {
                        if (rr_std <= 13.846278190612793) {
                            if (ss_median <= 51.0) {
                                votes[32] = 4;
                            } else {
                                votes[32] = 4;
                            }
                        } else {
                            if (rr_std <= 32.93207931518555) {
                                votes[32] = 4;
                            } else {
                                if (systolic_time <= 0.17220000177621841) {
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
                    if (systolic_time <= 0.062467603012919426) {
                        if (rr_std <= 5.797294855117798) {
                            votes[32] = 4;
                        } else {
                            if (systolic_area <= 598247.046875) {
                                votes[32] = 1;
                            } else {
                                if (systolic_time <= 0.045298127457499504) {
                                    if (systolic_area <= 960668.5) {
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
                        if (ss_median <= 66.5) {
                            if (rr_std <= 10.487295150756836) {
                                if (ss_median <= 49.75) {
                                    if (rr_std <= 3.935507893562317) {
                                        if (systolic_area <= 253331.09375) {
                                            votes[32] = 3;
                                        } else {
                                            votes[32] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 36.244178771972656) {
                                            votes[32] = 5;
                                        } else {
                                            votes[32] = 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 16.96202564239502) {
                                        if (rr_std <= 1.072266161441803) {
                                            votes[32] = 3;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 8.868951797485352) {
                                            votes[32] = 3;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 1182562.6875) {
                                    if (rr_std <= 11.143233299255371) {
                                        votes[32] = 1;
                                    } else {
                                        if (systolic_area <= 323173.78125) {
                                            votes[32] = 1;
                                        } else {
                                            votes[32] = 3;
                                        }
                                    }
                                } else {
                                    votes[32] = 4;
                                }
                            }
                        } else {
                            if (systolic_area <= 216288.9609375) {
                                if (ss_median <= 70.5) {
                                    if (ss_median <= 67.5) {
                                        votes[32] = 2;
                                    } else {
                                        votes[32] = 2;
                                    }
                                } else {
                                    votes[32] = 3;
                                }
                            } else {
                                if (diff_median <= 21.935876846313477) {
                                    if (ss_median <= 69.0) {
                                        votes[32] = 3;
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
            } else {
                if (diff_median <= 18.81639575958252) {
                    if (rr_std <= 9.488260269165039) {
                        if (systolic_area <= 2186468.6875) {
                            votes[32] = 3;
                        } else {
                            votes[32] = 4;
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            votes[32] = 4;
                        } else {
                            if (systolic_time <= 0.033226966857910156) {
                                votes[32] = 4;
                            } else {
                                if (rr_std <= 10.294044494628906) {
                                    votes[32] = 4;
                                } else {
                                    votes[32] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 1895936.0625) {
                        votes[32] = 1;
                    } else {
                        votes[32] = 3;
                    }
                }
            }
        } else {
            if (ss_median <= 50.25) {
                if (rr_std <= 20.109132766723633) {
                    if (systolic_area <= 109292.83984375) {
                        if (systolic_area <= 23913.5126953125) {
                            votes[32] = 5;
                        } else {
                            if (rr_std <= 8.573405742645264) {
                                votes[32] = 5;
                            } else {
                                votes[32] = 5;
                            }
                        }
                    } else {
                        votes[32] = 3;
                    }
                } else {
                    if (systolic_area <= 28714.673828125) {
                        votes[32] = 1;
                    } else {
                        votes[32] = 1;
                    }
                }
            } else {
                if (diff_median <= 15.386186122894287) {
                    if (rr_std <= 24.649049758911133) {
                        if (ss_median <= 73.75) {
                            if (ss_median <= 69.75) {
                                if (systolic_area <= 38077.552734375) {
                                    if (systolic_area <= 23771.6533203125) {
                                        votes[32] = 2;
                                    } else {
                                        if (rr_std <= 14.626100063323975) {
                                            votes[32] = 2;
                                        } else {
                                            votes[32] = 2;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 96144.37890625) {
                                        votes[32] = 5;
                                    } else {
                                        votes[32] = 2;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.4224444329738617) {
                                    votes[32] = 2;
                                } else {
                                    if (rr_std <= 1.8286373019218445) {
                                        votes[32] = 2;
                                    } else {
                                        votes[32] = 2;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 4.149633198976517) {
                                votes[32] = 2;
                            } else {
                                votes[32] = 5;
                            }
                        }
                    } else {
                        votes[32] = 1;
                    }
                } else {
                    if (ss_median <= 60.5) {
                        votes[32] = 1;
                    } else {
                        votes[32] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 33
    if (diff_median <= 0.08579669892787933) {
        if (diff_median <= 0.004066428868100047) {
            votes[33] = 0;
        } else {
            if (rr_std <= 8.158273220062256) {
                votes[33] = 0;
            } else {
                if (rr_std <= 102.29393005371094) {
                    votes[33] = 0;
                } else {
                    votes[33] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1144473.8125) {
                if (rr_std <= 15.105588912963867) {
                    if (systolic_time <= 0.3121538460254669) {
                        if (systolic_time <= 0.08774608746170998) {
                            if (systolic_area <= 3743.306640625) {
                                if (ss_median <= 50.0) {
                                    votes[33] = 3;
                                } else {
                                    votes[33] = 3;
                                }
                            } else {
                                if (ss_median <= 44.5) {
                                    if (diff_median <= 11.243181705474854) {
                                        votes[33] = 4;
                                    } else {
                                        if (rr_std <= 10.354161739349365) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 910572.4375) {
                                        if (systolic_time <= 0.06020250543951988) {
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
                            if (diff_median <= 13.347043991088867) {
                                if (systolic_area <= 736746.375) {
                                    if (ss_median <= 48.75) {
                                        if (rr_std <= 13.297555923461914) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 12.185485363006592) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    }
                                } else {
                                    votes[33] = 2;
                                }
                            } else {
                                if (systolic_area <= 314214.125) {
                                    if (systolic_time <= 0.15887638926506042) {
                                        if (rr_std <= 9.99140214920044) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 50.75) {
                                            votes[33] = 3;
                                        } else {
                                            votes[33] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 12.192376613616943) {
                                        votes[33] = 3;
                                    } else {
                                        votes[33] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (diff_median <= 5.163897752761841) {
                            if (ss_median <= 53.0) {
                                votes[33] = 1;
                            } else {
                                votes[33] = 2;
                            }
                        } else {
                            if (ss_median <= 49.75) {
                                votes[33] = 5;
                            } else {
                                votes[33] = 5;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.44329412281513214) {
                        if (systolic_area <= 48445.234375) {
                            if (systolic_time <= 0.28202666342258453) {
                                if (systolic_time <= 0.1867000013589859) {
                                    votes[33] = 4;
                                } else {
                                    votes[33] = 4;
                                }
                            } else {
                                if (rr_std <= 20.051213264465332) {
                                    votes[33] = 5;
                                } else {
                                    votes[33] = 4;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.0781402699649334) {
                                if (diff_median <= 15.36630916595459) {
                                    votes[33] = 1;
                                } else {
                                    votes[33] = 1;
                                }
                            } else {
                                if (systolic_time <= 0.14563491940498352) {
                                    if (systolic_area <= 219957.796875) {
                                        votes[33] = 1;
                                    } else {
                                        if (systolic_area <= 372228.015625) {
                                            votes[33] = 4;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 22.659668922424316) {
                                        if (diff_median <= 20.470187187194824) {
                                            votes[33] = 5;
                                        } else {
                                            votes[33] = 5;
                                        }
                                    } else {
                                        votes[33] = 5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 24.86577606201172) {
                            if (systolic_area <= 25453.8740234375) {
                                if (systolic_area <= 20480.3515625) {
                                    votes[33] = 2;
                                } else {
                                    votes[33] = 2;
                                }
                            } else {
                                votes[33] = 1;
                            }
                        } else {
                            votes[33] = 1;
                        }
                    }
                }
            } else {
                if (rr_std <= 9.62944507598877) {
                    if (diff_median <= 16.835833072662354) {
                        if (systolic_area <= 2248010.0) {
                            votes[33] = 3;
                        } else {
                            votes[33] = 4;
                        }
                    } else {
                        votes[33] = 3;
                    }
                } else {
                    if (ss_median <= 48.75) {
                        if (systolic_time <= 0.039152251556515694) {
                            votes[33] = 4;
                        } else {
                            votes[33] = 1;
                        }
                    } else {
                        if (diff_median <= 14.126954078674316) {
                            if (systolic_area <= 1362293.8125) {
                                votes[33] = 4;
                            } else {
                                votes[33] = 4;
                            }
                        } else {
                            if (systolic_time <= 0.09243521466851234) {
                                votes[33] = 5;
                            } else {
                                votes[33] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 7.592450380325317) {
                if (systolic_area <= 176308.328125) {
                    if (systolic_time <= 0.4757999926805496) {
                        if (ss_median <= 73.5) {
                            if (ss_median <= 72.75) {
                                votes[33] = 2;
                            } else {
                                if (rr_std <= 7.105848073959351) {
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
                    if (diff_median <= 14.277794361114502) {
                        votes[33] = 3;
                    } else {
                        votes[33] = 2;
                    }
                }
            } else {
                if (rr_std <= 18.028037071228027) {
                    if (ss_median <= 74.75) {
                        if (systolic_time <= 0.23252499848604202) {
                            votes[33] = 4;
                        } else {
                            if (rr_std <= 8.644608974456787) {
                                votes[33] = 5;
                            } else {
                                votes[33] = 2;
                            }
                        }
                    } else {
                        votes[33] = 3;
                    }
                } else {
                    votes[33] = 4;
                }
            }
        }
    }
// Decision rules for tree 34
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004076202865689993) {
            votes[34] = 0;
        } else {
            if (systolic_time <= 0.9550000131130219) {
                if (rr_std <= 91.48487854003906) {
                    votes[34] = 0;
                } else {
                    votes[34] = 0;
                }
            } else {
                votes[34] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1036495.625) {
                if (systolic_area <= 47907.599609375) {
                    if (systolic_time <= 0.3418181836605072) {
                        if (diff_median <= 12.586799144744873) {
                            if (systolic_area <= 32468.138671875) {
                                if (diff_median <= 2.210398554801941) {
                                    if (ss_median <= 51.25) {
                                        votes[34] = 4;
                                    } else {
                                        votes[34] = 4;
                                    }
                                } else {
                                    if (diff_median <= 3.9080299139022827) {
                                        votes[34] = 1;
                                    } else {
                                        votes[34] = 4;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.23849041759967804) {
                                    votes[34] = 4;
                                } else {
                                    votes[34] = 4;
                                }
                            }
                        } else {
                            votes[34] = 3;
                        }
                    } else {
                        if (rr_std <= 24.649049758911133) {
                            if (ss_median <= 48.75) {
                                if (systolic_area <= 20789.70703125) {
                                    votes[34] = 1;
                                } else {
                                    votes[34] = 1;
                                }
                            } else {
                                if (rr_std <= 15.065435409545898) {
                                    if (systolic_area <= 25664.2666015625) {
                                        votes[34] = 5;
                                    } else {
                                        votes[34] = 5;
                                    }
                                } else {
                                    if (systolic_area <= 26132.8837890625) {
                                        if (rr_std <= 17.6076602935791) {
                                            votes[34] = 2;
                                        } else {
                                            votes[34] = 2;
                                        }
                                    } else {
                                        votes[34] = 1;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 37.32935333251953) {
                                votes[34] = 1;
                            } else {
                                votes[34] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.07996039465069771) {
                        if (ss_median <= 44.5) {
                            if (systolic_area <= 425557.15625) {
                                votes[34] = 5;
                            } else {
                                votes[34] = 4;
                            }
                        } else {
                            if (systolic_time <= 0.05062141828238964) {
                                votes[34] = 1;
                            } else {
                                if (diff_median <= 18.004337310791016) {
                                    if (ss_median <= 54.0) {
                                        votes[34] = 3;
                                    } else {
                                        votes[34] = 1;
                                    }
                                } else {
                                    if (systolic_area <= 470341.921875) {
                                        if (ss_median <= 50.25) {
                                            votes[34] = 1;
                                        } else {
                                            votes[34] = 1;
                                        }
                                    } else {
                                        votes[34] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (systolic_time <= 0.1761225312948227) {
                                if (diff_median <= 15.787216663360596) {
                                    if (ss_median <= 41.5) {
                                        votes[34] = 5;
                                    } else {
                                        if (diff_median <= 5.394191026687622) {
                                            votes[34] = 5;
                                        } else {
                                            votes[34] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 308096.671875) {
                                        if (diff_median <= 21.42103385925293) {
                                            votes[34] = 1;
                                        } else {
                                            votes[34] = 1;
                                        }
                                    } else {
                                        votes[34] = 3;
                                    }
                                }
                            } else {
                                if (systolic_area <= 186885.8125) {
                                    votes[34] = 5;
                                } else {
                                    votes[34] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 12.257632732391357) {
                                if (rr_std <= 8.96584701538086) {
                                    if (rr_std <= 8.155208110809326) {
                                        if (systolic_time <= 0.2774111479520798) {
                                            votes[34] = 3;
                                        } else {
                                            votes[34] = 3;
                                        }
                                    } else {
                                        votes[34] = 5;
                                    }
                                } else {
                                    if (ss_median <= 52.25) {
                                        if (systolic_time <= 0.1309788078069687) {
                                            votes[34] = 4;
                                        } else {
                                            votes[34] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 364019.9375) {
                                            votes[34] = 1;
                                        } else {
                                            votes[34] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.10006571561098099) {
                                    votes[34] = 1;
                                } else {
                                    if (rr_std <= 19.51534080505371) {
                                        if (systolic_time <= 0.20229743421077728) {
                                            votes[34] = 5;
                                        } else {
                                            votes[34] = 3;
                                        }
                                    } else {
                                        votes[34] = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.48953628540039) {
                    if (diff_median <= 13.47854232788086) {
                        if (ss_median <= 51.5) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 1;
                        }
                    } else {
                        if (rr_std <= 7.204138517379761) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 18.251303672790527) {
                        if (systolic_time <= 0.032819848507642746) {
                            votes[34] = 1;
                        } else {
                            if (ss_median <= 48.75) {
                                if (systolic_area <= 2403075.875) {
                                    votes[34] = 5;
                                } else {
                                    votes[34] = 4;
                                }
                            } else {
                                if (systolic_area <= 1255393.5625) {
                                    votes[34] = 4;
                                } else {
                                    if (rr_std <= 10.294044494628906) {
                                        votes[34] = 4;
                                    } else {
                                        votes[34] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        votes[34] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 9.244638442993164) {
                if (systolic_area <= 230412.609375) {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 4.156393885612488) {
                            votes[34] = 2;
                        } else {
                            if (diff_median <= 12.488958358764648) {
                                votes[34] = 2;
                            } else {
                                if (systolic_time <= 0.3364727199077606) {
                                    votes[34] = 2;
                                } else {
                                    votes[34] = 2;
                                }
                            }
                        }
                    } else {
                        votes[34] = 2;
                    }
                } else {
                    votes[34] = 3;
                }
            } else {
                if (rr_std <= 18.028037071228027) {
                    if (diff_median <= 23.251953125) {
                        if (systolic_time <= 0.3363083004951477) {
                            votes[34] = 3;
                        } else {
                            votes[34] = 2;
                        }
                    } else {
                        votes[34] = 5;
                    }
                } else {
                    votes[34] = 4;
                }
            }
        }
    }
// Decision rules for tree 35
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004194555804133415) {
            votes[35] = 0;
        } else {
            votes[35] = 0;
        }
    } else {
        if (systolic_time <= 0.2760000079870224) {
            if (systolic_area <= 1136458.3125) {
                if (systolic_area <= 59164.30859375) {
                    if (diff_median <= 12.586799144744873) {
                        if (rr_std <= 9.565252780914307) {
                            votes[35] = 4;
                        } else {
                            if (systolic_area <= 32468.138671875) {
                                if (diff_median <= 2.210398554801941) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 4;
                                }
                            } else {
                                votes[35] = 4;
                            }
                        }
                    } else {
                        votes[35] = 3;
                    }
                } else {
                    if (systolic_time <= 0.06926310807466507) {
                        if (ss_median <= 44.25) {
                            votes[35] = 3;
                        } else {
                            if (ss_median <= 47.25) {
                                if (diff_median <= 6.611520767211914) {
                                    votes[35] = 1;
                                } else {
                                    votes[35] = 1;
                                }
                            } else {
                                if (ss_median <= 54.75) {
                                    votes[35] = 1;
                                } else {
                                    if (rr_std <= 12.287717342376709) {
                                        votes[35] = 1;
                                    } else {
                                        votes[35] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 14.767391204833984) {
                            if (ss_median <= 66.5) {
                                if (ss_median <= 48.75) {
                                    if (rr_std <= 9.183510303497314) {
                                        if (ss_median <= 42.5) {
                                            votes[35] = 1;
                                        } else {
                                            votes[35] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 20.20185375213623) {
                                            votes[35] = 3;
                                        } else {
                                            votes[35] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 9.657167434692383) {
                                        if (systolic_time <= 0.08080888167023659) {
                                            votes[35] = 1;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    } else {
                                        if (systolic_area <= 296926.703125) {
                                            votes[35] = 1;
                                        } else {
                                            votes[35] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 236182.1796875) {
                                    if (ss_median <= 71.5) {
                                        if (systolic_area <= 175571.1875) {
                                            votes[35] = 2;
                                        } else {
                                            votes[35] = 2;
                                        }
                                    } else {
                                        votes[35] = 5;
                                    }
                                } else {
                                    if (diff_median <= 11.999983310699463) {
                                        votes[35] = 3;
                                    } else {
                                        votes[35] = 3;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 20.18163299560547) {
                                if (diff_median <= 22.429277420043945) {
                                    if (systolic_time <= 0.11498592421412468) {
                                        votes[35] = 3;
                                    } else {
                                        if (rr_std <= 17.05286693572998) {
                                            votes[35] = 5;
                                        } else {
                                            votes[35] = 4;
                                        }
                                    }
                                } else {
                                    votes[35] = 5;
                                }
                            } else {
                                if (systolic_area <= 265248.6171875) {
                                    votes[35] = 1;
                                } else {
                                    votes[35] = 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.625496864318848) {
                    if (rr_std <= 6.324967861175537) {
                        votes[35] = 3;
                    } else {
                        if (systolic_area <= 2275077.25) {
                            if (systolic_time <= 0.053215669468045235) {
                                votes[35] = 1;
                            } else {
                                votes[35] = 5;
                            }
                        } else {
                            votes[35] = 4;
                        }
                    }
                } else {
                    if (systolic_time <= 0.028541339561343193) {
                        votes[35] = 1;
                    } else {
                        if (systolic_area <= 1581538.75) {
                            if (diff_median <= 9.838661193847656) {
                                votes[35] = 5;
                            } else {
                                if (systolic_time <= 0.09243521466851234) {
                                    votes[35] = 4;
                                } else {
                                    votes[35] = 4;
                                }
                            }
                        } else {
                            if (diff_median <= 14.025601863861084) {
                                votes[35] = 4;
                            } else {
                                votes[35] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (ss_median <= 50.25) {
                if (systolic_area <= 35926.439453125) {
                    if (systolic_time <= 0.4699495881795883) {
                        votes[35] = 4;
                    } else {
                        if (diff_median <= 1.7229338884353638) {
                            votes[35] = 1;
                        } else {
                            votes[35] = 1;
                        }
                    }
                } else {
                    if (systolic_area <= 111313.03515625) {
                        if (ss_median <= 45.0) {
                            votes[35] = 5;
                        } else {
                            votes[35] = 5;
                        }
                    } else {
                        votes[35] = 3;
                    }
                }
            } else {
                if (diff_median <= 18.044769287109375) {
                    if (rr_std <= 25.4495849609375) {
                        if (ss_median <= 73.75) {
                            if (ss_median <= 69.75) {
                                if (systolic_area <= 34946.642578125) {
                                    if (systolic_area <= 25975.15625) {
                                        if (ss_median <= 57.0) {
                                            votes[35] = 2;
                                        } else {
                                            votes[35] = 2;
                                        }
                                    } else {
                                        if (systolic_time <= 0.419164702296257) {
                                            votes[35] = 2;
                                        } else {
                                            votes[35] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 98664.375) {
                                        votes[35] = 5;
                                    } else {
                                        votes[35] = 2;
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.4179298132658005) {
                                    votes[35] = 2;
                                } else {
                                    if (diff_median <= 7.2975263595581055) {
                                        votes[35] = 2;
                                    } else {
                                        votes[35] = 2;
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.42000000178813934) {
                                votes[35] = 3;
                            } else {
                                votes[35] = 2;
                            }
                        }
                    } else {
                        votes[35] = 1;
                    }
                } else {
                    if (systolic_area <= 78558.61328125) {
                        votes[35] = 5;
                    } else {
                        votes[35] = 3;
                    }
                }
            }
        }
    }
// Decision rules for tree 36
    if (diff_median <= 0.12414451688528061) {
        if (diff_median <= 0.003926969016902149) {
            votes[36] = 1;
        } else {
            if (rr_std <= 4.010679841041565) {
                votes[36] = 0;
            } else {
                votes[36] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1144473.8125) {
                if (rr_std <= 15.079118728637695) {
                    if (systolic_time <= 0.07318959757685661) {
                        if (systolic_area <= 50988.04296875) {
                            if (diff_median <= 6.881969451904297) {
                                votes[36] = 4;
                            } else {
                                votes[36] = 3;
                            }
                        } else {
                            if (systolic_time <= 0.05845502205193043) {
                                if (systolic_area <= 854299.0) {
                                    if (diff_median <= 5.046473979949951) {
                                        votes[36] = 1;
                                    } else {
                                        votes[36] = 1;
                                    }
                                } else {
                                    votes[36] = 1;
                                }
                            } else {
                                if (diff_median <= 8.011213541030884) {
                                    votes[36] = 3;
                                } else {
                                    if (systolic_area <= 331387.625) {
                                        votes[36] = 1;
                                    } else {
                                        if (diff_median <= 24.264817237854004) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 124433.3515625) {
                            if (systolic_area <= 25390.5576171875) {
                                votes[36] = 1;
                            } else {
                                if (systolic_area <= 29660.27734375) {
                                    votes[36] = 2;
                                } else {
                                    if (diff_median <= 3.6729155778884888) {
                                        votes[36] = 3;
                                    } else {
                                        if (rr_std <= 11.81705379486084) {
                                            votes[36] = 5;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 0.8058986365795135) {
                                votes[36] = 3;
                            } else {
                                if (rr_std <= 12.266499042510986) {
                                    if (systolic_time <= 0.21984361112117767) {
                                        if (systolic_area <= 186858.5859375) {
                                            votes[36] = 1;
                                        } else {
                                            votes[36] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 13.246957778930664) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 13.40253210067749) {
                                        if (diff_median <= 14.084330081939697) {
                                            votes[36] = 5;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    } else {
                                        if (systolic_area <= 256462.1640625) {
                                            votes[36] = 3;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.6365151405334473) {
                        if (systolic_time <= 0.08019840717315674) {
                            if (systolic_area <= 134904.2686767578) {
                                votes[36] = 4;
                            } else {
                                votes[36] = 1;
                            }
                        } else {
                            if (rr_std <= 21.10545253753662) {
                                if (systolic_area <= 37405.314453125) {
                                    if (diff_median <= 4.202802777290344) {
                                        votes[36] = 2;
                                    } else {
                                        votes[36] = 2;
                                    }
                                } else {
                                    if (diff_median <= 11.82557487487793) {
                                        if (diff_median <= 8.873132228851318) {
                                            votes[36] = 5;
                                        } else {
                                            votes[36] = 4;
                                        }
                                    } else {
                                        if (ss_median <= 46.0) {
                                            votes[36] = 1;
                                        } else {
                                            votes[36] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 49.25) {
                                    if (systolic_time <= 0.17873913049697876) {
                                        votes[36] = 4;
                                    } else {
                                        if (systolic_time <= 0.3187408745288849) {
                                            votes[36] = 5;
                                        } else {
                                            votes[36] = 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 5.147705793380737) {
                                        if (systolic_time <= 0.20428571105003357) {
                                            votes[36] = 4;
                                        } else {
                                            votes[36] = 1;
                                        }
                                    } else {
                                        votes[36] = 4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 52.25) {
                            if (systolic_area <= 26117.189453125) {
                                votes[36] = 1;
                            } else {
                                votes[36] = 1;
                            }
                        } else {
                            if (systolic_area <= 20505.8232421875) {
                                if (rr_std <= 22.674845695495605) {
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
                if (rr_std <= 9.822773933410645) {
                    if (systolic_area <= 1735374.8125) {
                        if (diff_median <= 12.124118328094482) {
                            votes[36] = 5;
                        } else {
                            votes[36] = 3;
                        }
                    } else {
                        votes[36] = 4;
                    }
                } else {
                    if (systolic_time <= 0.030956193804740906) {
                        votes[36] = 1;
                    } else {
                        if (diff_median <= 18.429875373840332) {
                            if (ss_median <= 49.75) {
                                if (systolic_area <= 2364233.375) {
                                    votes[36] = 5;
                                } else {
                                    votes[36] = 4;
                                }
                            } else {
                                votes[36] = 4;
                            }
                        } else {
                            votes[36] = 1;
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 176308.328125) {
                    if (systolic_area <= 74045.859375) {
                        votes[36] = 2;
                    } else {
                        if (ss_median <= 73.5) {
                            if (systolic_time <= 0.4224444329738617) {
                                votes[36] = 2;
                            } else {
                                if (systolic_area <= 82429.99609375) {
                                    votes[36] = 2;
                                } else {
                                    votes[36] = 2;
                                }
                            }
                        } else {
                            votes[36] = 2;
                        }
                    }
                } else {
                    if (systolic_time <= 0.15879999846220016) {
                        votes[36] = 2;
                    } else {
                        votes[36] = 5;
                    }
                }
            } else {
                if (rr_std <= 12.467930793762207) {
                    votes[36] = 3;
                } else {
                    if (systolic_time <= 0.23782922327518463) {
                        votes[36] = 4;
                    } else {
                        votes[36] = 4;
                    }
                }
            }
        }
    }
// Decision rules for tree 37
    if (diff_median <= 0.08579669892787933) {
        if (diff_median <= 0.003955815336667001) {
            votes[37] = 0;
        } else {
            if (rr_std <= 91.48487854003906) {
                if (rr_std <= 7.024920225143433) {
                    votes[37] = 0;
                } else {
                    votes[37] = 0;
                }
            } else {
                votes[37] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1267299.375) {
                if (systolic_area <= 47907.599609375) {
                    if (systolic_time <= 0.2809777855873108) {
                        if (diff_median <= 9.28077220916748) {
                            if (systolic_area <= 32468.138671875) {
                                if (rr_std <= 13.127246856689453) {
                                    votes[37] = 4;
                                } else {
                                    votes[37] = 1;
                                }
                            } else {
                                votes[37] = 4;
                            }
                        } else {
                            if (rr_std <= 11.325981616973877) {
                                votes[37] = 3;
                            } else {
                                votes[37] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 24.649049758911133) {
                            if (systolic_time <= 1.1681143045425415) {
                                if (rr_std <= 13.585935592651367) {
                                    if (diff_median <= 5.224998474121094) {
                                        votes[37] = 2;
                                    } else {
                                        votes[37] = 5;
                                    }
                                } else {
                                    if (ss_median <= 49.75) {
                                        votes[37] = 1;
                                    } else {
                                        if (ss_median <= 56.5) {
                                            votes[37] = 2;
                                        } else {
                                            votes[37] = 2;
                                        }
                                    }
                                }
                            } else {
                                votes[37] = 1;
                            }
                        } else {
                            if (diff_median <= 0.9666398763656616) {
                                votes[37] = 1;
                            } else {
                                votes[37] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08486853539943695) {
                        if (ss_median <= 44.5) {
                            if (systolic_area <= 378802.078125) {
                                votes[37] = 1;
                            } else {
                                if (diff_median <= 10.08619737625122) {
                                    votes[37] = 4;
                                } else {
                                    votes[37] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 11.213212966918945) {
                                if (systolic_time <= 0.05677430145442486) {
                                    if (ss_median <= 46.75) {
                                        votes[37] = 3;
                                    } else {
                                        votes[37] = 1;
                                    }
                                } else {
                                    if (ss_median <= 48.75) {
                                        votes[37] = 5;
                                    } else {
                                        if (systolic_time <= 0.06904124468564987) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 1;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.029083188623189926) {
                                    votes[37] = 4;
                                } else {
                                    if (diff_median <= 4.675040245056152) {
                                        votes[37] = 1;
                                    } else {
                                        if (systolic_time <= 0.081451665610075) {
                                            votes[37] = 1;
                                        } else {
                                            votes[37] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.093132495880127) {
                            if (systolic_area <= 108116.921875) {
                                votes[37] = 5;
                            } else {
                                if (ss_median <= 48.75) {
                                    if (diff_median <= 29.16497802734375) {
                                        if (systolic_area <= 211499.5) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 10.657351016998291) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 1;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 12.317295551300049) {
                                        if (systolic_area <= 613315.53125) {
                                            votes[37] = 3;
                                        } else {
                                            votes[37] = 4;
                                        }
                                    } else {
                                        if (systolic_area <= 256909.5859375) {
                                            votes[37] = 5;
                                        } else {
                                            votes[37] = 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 22.811251640319824) {
                                if (systolic_time <= 0.16371088474988937) {
                                    if (diff_median <= 13.886706352233887) {
                                        votes[37] = 5;
                                    } else {
                                        votes[37] = 1;
                                    }
                                } else {
                                    if (systolic_area <= 293425.8046875) {
                                        votes[37] = 5;
                                    } else {
                                        votes[37] = 5;
                                    }
                                }
                            } else {
                                if (ss_median <= 48.5) {
                                    votes[37] = 5;
                                } else {
                                    votes[37] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.81639575958252) {
                    if (rr_std <= 9.221685409545898) {
                        if (systolic_area <= 1820846.125) {
                            votes[37] = 1;
                        } else {
                            votes[37] = 4;
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (systolic_time <= 0.033374372869729996) {
                                votes[37] = 4;
                            } else {
                                votes[37] = 5;
                            }
                        } else {
                            if (systolic_area <= 1324348.8125) {
                                votes[37] = 4;
                            } else {
                                if (rr_std <= 10.294044494628906) {
                                    votes[37] = 4;
                                } else {
                                    votes[37] = 4;
                                }
                            }
                        }
                    }
                } else {
                    if (rr_std <= 8.690484523773193) {
                        votes[37] = 3;
                    } else {
                        votes[37] = 3;
                    }
                }
            }
        } else {
            if (systolic_area <= 230412.609375) {
                if (rr_std <= 18.028037071228027) {
                    if (rr_std <= 10.886465549468994) {
                        if (systolic_area <= 180760.53125) {
                            if (systolic_time <= 0.50685715675354) {
                                if (systolic_area <= 148475.0) {
                                    if (diff_median <= 12.488958358764648) {
                                        if (ss_median <= 72.75) {
                                            votes[37] = 2;
                                        } else {
                                            votes[37] = 2;
                                        }
                                    } else {
                                        if (rr_std <= 7.000285387039185) {
                                            votes[37] = 2;
                                        } else {
                                            votes[37] = 2;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 0.5958648025989532) {
                                        votes[37] = 2;
                                    } else {
                                        votes[37] = 2;
                                    }
                                }
                            } else {
                                votes[37] = 5;
                            }
                        } else {
                            if (systolic_time <= 0.15879999846220016) {
                                votes[37] = 2;
                            } else {
                                votes[37] = 5;
                            }
                        }
                    } else {
                        votes[37] = 5;
                    }
                } else {
                    votes[37] = 4;
                }
            } else {
                if (diff_median <= 15.022047519683838) {
                    if (rr_std <= 8.312105655670166) {
                        votes[37] = 3;
                    } else {
                        votes[37] = 3;
                    }
                } else {
                    votes[37] = 5;
                }
            }
        }
    }
// Decision rules for tree 38
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004079991718754172) {
            votes[38] = 2;
        } else {
            if (rr_std <= 4.194984555244446) {
                votes[38] = 0;
            } else {
                if (rr_std <= 102.29393005371094) {
                    votes[38] = 0;
                } else {
                    votes[38] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1036495.625) {
                if (rr_std <= 15.079118728637695) {
                    if (systolic_time <= 0.08722148090600967) {
                        if (systolic_area <= 50988.04296875) {
                            if (diff_median <= 7.254663467407227) {
                                votes[38] = 4;
                            } else {
                                votes[38] = 3;
                            }
                        } else {
                            if (diff_median <= 18.175158500671387) {
                                if (systolic_time <= 0.04111839644610882) {
                                    votes[38] = 1;
                                } else {
                                    if (diff_median <= 8.617546081542969) {
                                        if (systolic_area <= 738748.78125) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    } else {
                                        if (systolic_time <= 0.06897732615470886) {
                                            votes[38] = 1;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_area <= 401246.703125) {
                                    if (ss_median <= 50.75) {
                                        votes[38] = 1;
                                    } else {
                                        votes[38] = 1;
                                    }
                                } else {
                                    if (rr_std <= 10.194355964660645) {
                                        votes[38] = 5;
                                    } else {
                                        votes[38] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 113328.2734375) {
                            if (diff_median <= 5.163897752761841) {
                                if (rr_std <= 8.508912563323975) {
                                    votes[38] = 2;
                                } else {
                                    votes[38] = 1;
                                }
                            } else {
                                votes[38] = 5;
                            }
                        } else {
                            if (ss_median <= 48.75) {
                                if (diff_median <= 21.737714767456055) {
                                    if (diff_median <= 4.597002029418945) {
                                        votes[38] = 5;
                                    } else {
                                        if (systolic_time <= 0.13742857426404953) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 312201.46875) {
                                        if (systolic_time <= 0.15533550828695297) {
                                            votes[38] = 1;
                                        } else {
                                            votes[38] = 1;
                                        }
                                    } else {
                                        votes[38] = 3;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.852434635162354) {
                                    if (systolic_time <= 0.1334463283419609) {
                                        if (systolic_area <= 270213.1875) {
                                            votes[38] = 1;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    } else {
                                        if (rr_std <= 6.0096540451049805) {
                                            votes[38] = 3;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.11844869330525398) {
                                        votes[38] = 5;
                                    } else {
                                        votes[38] = 3;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.33826087415218353) {
                        if (systolic_area <= 48210.400390625) {
                            if (rr_std <= 24.10576629638672) {
                                if (ss_median <= 57.75) {
                                    votes[38] = 5;
                                } else {
                                    votes[38] = 4;
                                }
                            } else {
                                if (diff_median <= 3.0197348594665527) {
                                    votes[38] = 4;
                                } else {
                                    votes[38] = 4;
                                }
                            }
                        } else {
                            if (systolic_time <= 0.08247142285108566) {
                                votes[38] = 1;
                            } else {
                                if (systolic_area <= 394436.625) {
                                    if (systolic_area <= 229756.703125) {
                                        if (diff_median <= 14.366021156311035) {
                                            votes[38] = 5;
                                        } else {
                                            votes[38] = 1;
                                        }
                                    } else {
                                        if (systolic_time <= 0.1302555799484253) {
                                            votes[38] = 4;
                                        } else {
                                            votes[38] = 3;
                                        }
                                    }
                                } else {
                                    votes[38] = 5;
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 21.784536361694336) {
                            if (diff_median <= 16.065368175506592) {
                                if (rr_std <= 17.6076602935791) {
                                    votes[38] = 2;
                                } else {
                                    if (rr_std <= 19.92720603942871) {
                                        votes[38] = 2;
                                    } else {
                                        votes[38] = 2;
                                    }
                                }
                            } else {
                                votes[38] = 5;
                            }
                        } else {
                            if (ss_median <= 51.0) {
                                votes[38] = 1;
                            } else {
                                if (rr_std <= 24.649049758911133) {
                                    votes[38] = 2;
                                } else {
                                    votes[38] = 1;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.81639575958252) {
                    if (rr_std <= 9.09713888168335) {
                        votes[38] = 3;
                    } else {
                        if (systolic_time <= 0.032819848507642746) {
                            votes[38] = 1;
                        } else {
                            if (ss_median <= 48.75) {
                                if (systolic_time <= 0.039152251556515694) {
                                    votes[38] = 4;
                                } else {
                                    votes[38] = 5;
                                }
                            } else {
                                if (systolic_area <= 1211237.8125) {
                                    votes[38] = 4;
                                } else {
                                    if (rr_std <= 10.356062889099121) {
                                        votes[38] = 4;
                                    } else {
                                        votes[38] = 4;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.04809523746371269) {
                        votes[38] = 3;
                    } else {
                        votes[38] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 7.592450380325317) {
                if (systolic_area <= 242029.390625) {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 4.404758453369141) {
                            votes[38] = 2;
                        } else {
                            if (systolic_time <= 0.4224444329738617) {
                                if (rr_std <= 7.37030553817749) {
                                    votes[38] = 2;
                                } else {
                                    votes[38] = 2;
                                }
                            } else {
                                if (systolic_area <= 82835.1796875) {
                                    if (rr_std <= 4.782148122787476) {
                                        votes[38] = 2;
                                    } else {
                                        votes[38] = 2;
                                    }
                                } else {
                                    votes[38] = 2;
                                }
                            }
                        }
                    } else {
                        votes[38] = 3;
                    }
                } else {
                    votes[38] = 3;
                }
            } else {
                if (diff_median <= 23.58607292175293) {
                    if (systolic_time <= 0.10244156047701836) {
                        votes[38] = 3;
                    } else {
                        if (systolic_time <= 0.29268406331539154) {
                            votes[38] = 4;
                        } else {
                            if (systolic_time <= 0.37353333830833435) {
                                votes[38] = 2;
                            } else {
                                votes[38] = 5;
                            }
                        }
                    }
                } else {
                    votes[38] = 5;
                }
            }
        }
    }
// Decision rules for tree 39
    if (diff_median <= 0.0696391137316823) {
        if (rr_std <= 5.905803680419922) {
            votes[39] = 0;
        } else {
            if (diff_median <= 0.00406027608551085) {
                votes[39] = 0;
            } else {
                if (rr_std <= 102.29393005371094) {
                    votes[39] = 0;
                } else {
                    votes[39] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1144473.8125) {
                if (systolic_time <= 0.0850052647292614) {
                    if (systolic_area <= 24279.154296875) {
                        if (diff_median <= 7.254663467407227) {
                            votes[39] = 4;
                        } else {
                            votes[39] = 3;
                        }
                    } else {
                        if (ss_median <= 43.25) {
                            votes[39] = 5;
                        } else {
                            if (rr_std <= 6.660591125488281) {
                                if (ss_median <= 50.0) {
                                    votes[39] = 3;
                                } else {
                                    votes[39] = 1;
                                }
                            } else {
                                if (systolic_time <= 0.06280690617859364) {
                                    if (systolic_time <= 0.04293053783476353) {
                                        votes[39] = 1;
                                    } else {
                                        if (diff_median <= 8.740846395492554) {
                                            votes[39] = 4;
                                        } else {
                                            votes[39] = 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 12.18774938583374) {
                                        if (systolic_area <= 709220.9375) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 3;
                                        }
                                    } else {
                                        if (systolic_time <= 0.06904124468564987) {
                                            votes[39] = 1;
                                        } else {
                                            votes[39] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 40211.546875) {
                        if (systolic_time <= 0.3166086971759796) {
                            if (rr_std <= 23.737985610961914) {
                                votes[39] = 4;
                            } else {
                                votes[39] = 4;
                            }
                        } else {
                            if (rr_std <= 24.649049758911133) {
                                if (systolic_time <= 1.1681143045425415) {
                                    if (rr_std <= 15.047332286834717) {
                                        if (ss_median <= 52.25) {
                                            votes[39] = 1;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 50.5) {
                                            votes[39] = 1;
                                        } else {
                                            votes[39] = 2;
                                        }
                                    }
                                } else {
                                    votes[39] = 1;
                                }
                            } else {
                                if (systolic_area <= 13464.1455078125) {
                                    votes[39] = 1;
                                } else {
                                    votes[39] = 1;
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (diff_median <= 16.321417808532715) {
                                if (systolic_area <= 234958.796875) {
                                    if (diff_median <= 6.661669015884399) {
                                        votes[39] = 5;
                                    } else {
                                        if (rr_std <= 8.465497016906738) {
                                            votes[39] = 5;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 274314.21875) {
                                        votes[39] = 3;
                                    } else {
                                        if (systolic_area <= 551111.46875) {
                                            votes[39] = 5;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.18201902508735657) {
                                    if (systolic_area <= 184332.40625) {
                                        votes[39] = 1;
                                    } else {
                                        if (systolic_time <= 0.10997730866074562) {
                                            votes[39] = 1;
                                        } else {
                                            votes[39] = 3;
                                        }
                                    }
                                } else {
                                    votes[39] = 5;
                                }
                            }
                        } else {
                            if (ss_median <= 52.25) {
                                if (rr_std <= 15.695009708404541) {
                                    if (systolic_area <= 512324.734375) {
                                        if (ss_median <= 49.25) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 3;
                                        }
                                    } else {
                                        votes[39] = 2;
                                    }
                                } else {
                                    votes[39] = 1;
                                }
                            } else {
                                if (systolic_time <= 0.37151487171649933) {
                                    if (rr_std <= 11.916815280914307) {
                                        if (ss_median <= 61.75) {
                                            votes[39] = 3;
                                        } else {
                                            votes[39] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 57.5) {
                                            votes[39] = 5;
                                        } else {
                                            votes[39] = 4;
                                        }
                                    }
                                } else {
                                    votes[39] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.446590900421143) {
                    if (diff_median <= 16.536827564239502) {
                        if (systolic_area <= 1545712.125) {
                            votes[39] = 5;
                        } else {
                            votes[39] = 4;
                        }
                    } else {
                        votes[39] = 3;
                    }
                } else {
                    if (ss_median <= 48.5) {
                        if (systolic_time <= 0.03939760662615299) {
                            votes[39] = 4;
                        } else {
                            votes[39] = 5;
                        }
                    } else {
                        if (systolic_area <= 1245500.8125) {
                            votes[39] = 4;
                        } else {
                            if (diff_median <= 16.59813117980957) {
                                if (systolic_time <= 0.033226966857910156) {
                                    votes[39] = 4;
                                } else {
                                    votes[39] = 4;
                                }
                            } else {
                                votes[39] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (systolic_area <= 216288.9609375) {
                if (rr_std <= 18.81850242614746) {
                    if (systolic_area <= 180760.53125) {
                        if (rr_std <= 7.592450380325317) {
                            if (diff_median <= 4.148450970649719) {
                                votes[39] = 2;
                            } else {
                                if (ss_median <= 73.5) {
                                    if (systolic_area <= 83848.23046875) {
                                        if (systolic_time <= 0.457882359623909) {
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
                            }
                        } else {
                            votes[39] = 2;
                        }
                    } else {
                        if (ss_median <= 70.5) {
                            votes[39] = 2;
                        } else {
                            votes[39] = 5;
                        }
                    }
                } else {
                    votes[39] = 4;
                }
            } else {
                if (systolic_time <= 0.12440519407391548) {
                    votes[39] = 3;
                } else {
                    votes[39] = 5;
                }
            }
        }
    }
// Decision rules for tree 40
    if (diff_median <= 0.2226160392165184) {
        if (diff_median <= 0.004020768217742443) {
            votes[40] = 2;
        } else {
            if (rr_std <= 4.010679841041565) {
                votes[40] = 0;
            } else {
                if (diff_median <= 0.004241863964125514) {
                    votes[40] = 0;
                } else {
                    votes[40] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 971634.75) {
                if (systolic_area <= 47672.765625) {
                    if (systolic_time <= 0.3430909067392349) {
                        if (diff_median <= 9.83949089050293) {
                            if (systolic_time <= 0.2809777855873108) {
                                if (ss_median <= 57.25) {
                                    if (systolic_time <= 0.017999999225139618) {
                                        votes[40] = 4;
                                    } else {
                                        votes[40] = 4;
                                    }
                                } else {
                                    votes[40] = 4;
                                }
                            } else {
                                votes[40] = 4;
                            }
                        } else {
                            if (diff_median <= 14.258374214172363) {
                                votes[40] = 3;
                            } else {
                                votes[40] = 3;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.5362856984138489) {
                            if (rr_std <= 13.911077976226807) {
                                votes[40] = 5;
                            } else {
                                if (diff_median <= 2.3313686847686768) {
                                    votes[40] = 1;
                                } else {
                                    if (rr_std <= 15.740625858306885) {
                                        votes[40] = 2;
                                    } else {
                                        votes[40] = 2;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 13028.59619140625) {
                                votes[40] = 2;
                            } else {
                                if (systolic_area <= 20229.802734375) {
                                    if (rr_std <= 25.06736183166504) {
                                        votes[40] = 2;
                                    } else {
                                        votes[40] = 1;
                                    }
                                } else {
                                    votes[40] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08722148090600967) {
                        if (systolic_area <= 385727.59375) {
                            if (diff_median <= 11.867364883422852) {
                                votes[40] = 1;
                            } else {
                                if (systolic_time <= 0.06777165085077286) {
                                    votes[40] = 1;
                                } else {
                                    if (systolic_area <= 301226.78125) {
                                        votes[40] = 1;
                                    } else {
                                        votes[40] = 1;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 4.847156286239624) {
                                votes[40] = 1;
                            } else {
                                if (systolic_time <= 0.07225458696484566) {
                                    if (rr_std <= 9.912474155426025) {
                                        if (systolic_time <= 0.058294178918004036) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 18.43827486038208) {
                                            votes[40] = 4;
                                        } else {
                                            votes[40] = 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 14.416905403137207) {
                                        votes[40] = 3;
                                    } else {
                                        votes[40] = 3;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (systolic_time <= 0.18822194635868073) {
                                if (diff_median <= 32.064374923706055) {
                                    if (diff_median <= 5.312238454818726) {
                                        votes[40] = 5;
                                    } else {
                                        if (ss_median <= 41.25) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    }
                                } else {
                                    votes[40] = 1;
                                }
                            } else {
                                if (diff_median <= 7.366953611373901) {
                                    votes[40] = 5;
                                } else {
                                    votes[40] = 5;
                                }
                            }
                        } else {
                            if (rr_std <= 12.21613883972168) {
                                if (systolic_area <= 120003.84375) {
                                    votes[40] = 5;
                                } else {
                                    if (systolic_area <= 288708.4375) {
                                        if (systolic_area <= 238896.4140625) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 8.529728412628174) {
                                            votes[40] = 3;
                                        } else {
                                            votes[40] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (ss_median <= 55.25) {
                                    if (ss_median <= 52.5) {
                                        votes[40] = 4;
                                    } else {
                                        if (rr_std <= 14.26136827468872) {
                                            votes[40] = 5;
                                        } else {
                                            votes[40] = 5;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 15.216278553009033) {
                                        votes[40] = 3;
                                    } else {
                                        votes[40] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.27763032913208) {
                    if (ss_median <= 45.75) {
                        votes[40] = 4;
                    } else {
                        if (diff_median <= 7.526423692703247) {
                            votes[40] = 3;
                        } else {
                            votes[40] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 22.487199783325195) {
                        if (systolic_area <= 1318097.3125) {
                            if (systolic_area <= 1241135.5625) {
                                if (ss_median <= 57.25) {
                                    votes[40] = 4;
                                } else {
                                    votes[40] = 3;
                                }
                            } else {
                                votes[40] = 1;
                            }
                        } else {
                            if (ss_median <= 50.25) {
                                if (systolic_area <= 2986320.375) {
                                    votes[40] = 5;
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
            }
        } else {
            if (systolic_area <= 176308.328125) {
                if (rr_std <= 9.244638442993164) {
                    if (systolic_area <= 74053.2109375) {
                        votes[40] = 5;
                    } else {
                        if (systolic_time <= 0.4251111000776291) {
                            if (systolic_time <= 0.24150928109884262) {
                                if (systolic_area <= 170378.78125) {
                                    votes[40] = 3;
                                } else {
                                    votes[40] = 2;
                                }
                            } else {
                                votes[40] = 2;
                            }
                        } else {
                            if (ss_median <= 72.75) {
                                votes[40] = 2;
                            } else {
                                votes[40] = 5;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 19.05832576751709) {
                        votes[40] = 3;
                    } else {
                        votes[40] = 4;
                    }
                }
            } else {
                if (systolic_time <= 0.15887999534606934) {
                    if (diff_median <= 24.366117477416992) {
                        if (systolic_area <= 618678.96875) {
                            votes[40] = 3;
                        } else {
                            votes[40] = 3;
                        }
                    } else {
                        votes[40] = 2;
                    }
                } else {
                    votes[40] = 5;
                }
            }
        }
    }
// Decision rules for tree 41
    if (diff_median <= 0.030496088787913322) {
        if (rr_std <= 4.194984555244446) {
            votes[41] = 2;
        } else {
            if (diff_median <= 0.004080927232280374) {
                votes[41] = 0;
            } else {
                votes[41] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1036495.625) {
                if (systolic_area <= 45731.693359375) {
                    if (systolic_time <= 0.3258095383644104) {
                        if (diff_median <= 11.828458309173584) {
                            if (systolic_time <= 0.2592211961746216) {
                                if (systolic_area <= 32468.138671875) {
                                    if (diff_median <= 2.103205144405365) {
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
                    } else {
                        if (ss_median <= 50.25) {
                            if (systolic_time <= 0.48171429336071014) {
                                votes[41] = 2;
                            } else {
                                if (rr_std <= 20.270516395568848) {
                                    votes[41] = 1;
                                } else {
                                    votes[41] = 1;
                                }
                            }
                        } else {
                            if (systolic_time <= 1.1477143168449402) {
                                if (ss_median <= 60.0) {
                                    if (rr_std <= 23.280648231506348) {
                                        if (rr_std <= 10.619217872619629) {
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
                                votes[41] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08722148090600967) {
                        if (ss_median <= 43.25) {
                            votes[41] = 5;
                        } else {
                            if (rr_std <= 8.893284797668457) {
                                if (rr_std <= 6.413774251937866) {
                                    if (diff_median <= 22.578815937042236) {
                                        votes[41] = 1;
                                    } else {
                                        votes[41] = 1;
                                    }
                                } else {
                                    votes[41] = 3;
                                }
                            } else {
                                if (diff_median <= 43.45599555969238) {
                                    if (systolic_area <= 887508.5625) {
                                        if (diff_median <= 18.004337310791016) {
                                            votes[41] = 1;
                                        } else {
                                            votes[41] = 1;
                                        }
                                    } else {
                                        votes[41] = 1;
                                    }
                                } else {
                                    votes[41] = 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.2822970747947693) {
                            if (ss_median <= 47.5) {
                                if (diff_median <= 15.974817752838135) {
                                    if (ss_median <= 41.5) {
                                        votes[41] = 5;
                                    } else {
                                        if (ss_median <= 44.5) {
                                            votes[41] = 3;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.18228181451559067) {
                                        if (rr_std <= 11.437215328216553) {
                                            votes[41] = 3;
                                        } else {
                                            votes[41] = 1;
                                        }
                                    } else {
                                        votes[41] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= 416071.75) {
                                    if (rr_std <= 7.737064599990845) {
                                        if (ss_median <= 61.0) {
                                            votes[41] = 3;
                                        } else {
                                            votes[41] = 5;
                                        }
                                    } else {
                                        if (rr_std <= 8.96584701538086) {
                                            votes[41] = 5;
                                        } else {
                                            votes[41] = 3;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 9.261995315551758) {
                                        votes[41] = 3;
                                    } else {
                                        votes[41] = 3;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 4.954872369766235) {
                                votes[41] = 4;
                            } else {
                                if (systolic_time <= 0.362191379070282) {
                                    votes[41] = 5;
                                } else {
                                    votes[41] = 5;
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.488260269165039) {
                    if (diff_median <= 9.679653644561768) {
                        if (diff_median <= 6.324881315231323) {
                            votes[41] = 1;
                        } else {
                            votes[41] = 5;
                        }
                    } else {
                        if (diff_median <= 21.166512489318848) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 19.233586311340332) {
                        if (ss_median <= 49.75) {
                            if (systolic_area <= 2403075.875) {
                                votes[41] = 1;
                            } else {
                                votes[41] = 4;
                            }
                        } else {
                            if (rr_std <= 19.061857223510742) {
                                if (systolic_area <= 1249686.6875) {
                                    votes[41] = 4;
                                } else {
                                    votes[41] = 4;
                                }
                            } else {
                                votes[41] = 4;
                            }
                        }
                    } else {
                        votes[41] = 5;
                    }
                }
            }
        } else {
            if (rr_std <= 9.244638442993164) {
                if (systolic_area <= 180760.53125) {
                    if (systolic_area <= 74396.34375) {
                        votes[41] = 5;
                    } else {
                        if (systolic_time <= 0.4251111000776291) {
                            if (diff_median <= 4.475214719772339) {
                                votes[41] = 2;
                            } else {
                                votes[41] = 2;
                            }
                        } else {
                            if (systolic_area <= 82429.99609375) {
                                votes[41] = 2;
                            } else {
                                votes[41] = 2;
                            }
                        }
                    }
                } else {
                    if (ss_median <= 71.0) {
                        if (diff_median <= 19.473225116729736) {
                            votes[41] = 3;
                        } else {
                            votes[41] = 2;
                        }
                    } else {
                        votes[41] = 5;
                    }
                }
            } else {
                if (rr_std <= 17.917859077453613) {
                    if (systolic_time <= 0.10244156047701836) {
                        votes[41] = 3;
                    } else {
                        votes[41] = 3;
                    }
                } else {
                    votes[41] = 4;
                }
            }
        }
    }
// Decision rules for tree 42
    if (diff_median <= 0.03044529166072607) {
        if (rr_std <= 4.010679841041565) {
            votes[42] = 2;
        } else {
            if (diff_median <= 0.004241863964125514) {
                votes[42] = 0;
            } else {
                if (rr_std <= 85.83829879760742) {
                    votes[42] = 0;
                } else {
                    votes[42] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1146499.8125) {
                if (systolic_area <= 45496.859375) {
                    if (systolic_time <= 0.3418181836605072) {
                        if (diff_median <= 12.586799144744873) {
                            if (systolic_time <= 0.28144571185112) {
                                if (ss_median <= 46.5) {
                                    votes[42] = 4;
                                } else {
                                    if (systolic_area <= 32468.138671875) {
                                        if (systolic_area <= 20413.51171875) {
                                            votes[42] = 4;
                                        } else {
                                            votes[42] = 4;
                                        }
                                    } else {
                                        votes[42] = 4;
                                    }
                                }
                            } else {
                                votes[42] = 4;
                            }
                        } else {
                            votes[42] = 3;
                        }
                    } else {
                        if (ss_median <= 49.25) {
                            if (systolic_time <= 0.6100419461727142) {
                                votes[42] = 1;
                            } else {
                                if (systolic_area <= 17507.01171875) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 1;
                                }
                            }
                        } else {
                            if (rr_std <= 15.087045669555664) {
                                votes[42] = 5;
                            } else {
                                if (systolic_time <= 1.050190508365631) {
                                    if (rr_std <= 24.86577606201172) {
                                        if (rr_std <= 20.07761287689209) {
                                            votes[42] = 2;
                                        } else {
                                            votes[42] = 2;
                                        }
                                    } else {
                                        votes[42] = 1;
                                    }
                                } else {
                                    votes[42] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08652828633785248) {
                        if (ss_median <= 44.25) {
                            if (rr_std <= 6.873003005981445) {
                                votes[42] = 3;
                            } else {
                                if (systolic_area <= 378802.078125) {
                                    votes[42] = 1;
                                } else {
                                    votes[42] = 5;
                                }
                            }
                        } else {
                            if (systolic_area <= 1022641.6875) {
                                if (systolic_time <= 0.06777165085077286) {
                                    if (diff_median <= 8.542354583740234) {
                                        if (systolic_time <= 0.044068699702620506) {
                                            votes[42] = 1;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 48.25) {
                                            votes[42] = 1;
                                        } else {
                                            votes[42] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 302697.4375) {
                                        votes[42] = 1;
                                    } else {
                                        if (systolic_area <= 356120.984375) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 1;
                                        }
                                    }
                                }
                            } else {
                                votes[42] = 3;
                            }
                        }
                    } else {
                        if (rr_std <= 15.183817386627197) {
                            if (systolic_area <= 110712.87890625) {
                                if (rr_std <= 5.833443880081177) {
                                    votes[42] = 5;
                                } else {
                                    votes[42] = 5;
                                }
                            } else {
                                if (diff_median <= 12.20846700668335) {
                                    if (rr_std <= 1.072266161441803) {
                                        votes[42] = 3;
                                    } else {
                                        if (rr_std <= 5.01172661781311) {
                                            votes[42] = 4;
                                        } else {
                                            votes[42] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 47.5) {
                                        if (systolic_area <= 210346.6484375) {
                                            votes[42] = 5;
                                        } else {
                                            votes[42] = 1;
                                        }
                                    } else {
                                        if (systolic_time <= 0.15851464122533798) {
                                            votes[42] = 3;
                                        } else {
                                            votes[42] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 12.580174922943115) {
                                if (rr_std <= 20.484920501708984) {
                                    votes[42] = 4;
                                } else {
                                    votes[42] = 5;
                                }
                            } else {
                                if (systolic_time <= 0.14461414515972137) {
                                    if (systolic_area <= 278989.015625) {
                                        votes[42] = 1;
                                    } else {
                                        votes[42] = 5;
                                    }
                                } else {
                                    if (ss_median <= 48.0) {
                                        votes[42] = 5;
                                    } else {
                                        votes[42] = 5;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.400676727294922) {
                    if (rr_std <= 10.53155517578125) {
                        if (diff_median <= 14.259297847747803) {
                            if (systolic_area <= 1826244.625) {
                                if (diff_median <= 12.195547103881836) {
                                    votes[42] = 5;
                                } else {
                                    votes[42] = 3;
                                }
                            } else {
                                votes[42] = 4;
                            }
                        } else {
                            votes[42] = 4;
                        }
                    } else {
                        if (systolic_time <= 0.03255549818277359) {
                            votes[42] = 1;
                        } else {
                            if (rr_std <= 17.47436237335205) {
                                votes[42] = 4;
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
            if (systolic_time <= 0.24150928109884262) {
                if (diff_median <= 13.009530067443848) {
                    if (systolic_area <= 144070.3828125) {
                        votes[42] = 4;
                    } else {
                        if (rr_std <= 0.5843037068843842) {
                            votes[42] = 3;
                        } else {
                            if (rr_std <= 8.312105655670166) {
                                votes[42] = 3;
                            } else {
                                votes[42] = 3;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 5.1370580196380615) {
                        votes[42] = 2;
                    } else {
                        votes[42] = 4;
                    }
                }
            } else {
                if (systolic_area <= 150313.3203125) {
                    if (rr_std <= 9.244638442993164) {
                        if (systolic_area <= 74396.34375) {
                            votes[42] = 5;
                        } else {
                            if (ss_median <= 73.5) {
                                if (systolic_time <= 0.4224444329738617) {
                                    votes[42] = 2;
                                } else {
                                    if (systolic_area <= 82429.99609375) {
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
                        votes[42] = 3;
                    }
                } else {
                    votes[42] = 5;
                }
            }
        }
    }
// Decision rules for tree 43
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004080927232280374) {
            votes[43] = 0;
        } else {
            if (rr_std <= 5.905803680419922) {
                votes[43] = 0;
            } else {
                if (rr_std <= 102.29393005371094) {
                    votes[43] = 0;
                } else {
                    votes[43] = 0;
                }
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1144473.8125) {
                if (systolic_area <= 48502.75390625) {
                    if (systolic_time <= 0.27971282601356506) {
                        if (diff_median <= 12.586799144744873) {
                            if (systolic_area <= 32468.138671875) {
                                if (systolic_area <= 20413.51171875) {
                                    if (rr_std <= 13.481364250183105) {
                                        votes[43] = 4;
                                    } else {
                                        votes[43] = 4;
                                    }
                                } else {
                                    votes[43] = 5;
                                }
                            } else {
                                votes[43] = 4;
                            }
                        } else {
                            votes[43] = 3;
                        }
                    } else {
                        if (rr_std <= 24.32447052001953) {
                            if (ss_median <= 50.0) {
                                if (systolic_time <= 0.5632727146148682) {
                                    votes[43] = 5;
                                } else {
                                    votes[43] = 1;
                                }
                            } else {
                                if (systolic_time <= 1.0128571391105652) {
                                    if (systolic_time <= 0.4740000069141388) {
                                        if (rr_std <= 11.99017858505249) {
                                            votes[43] = 2;
                                        } else {
                                            votes[43] = 2;
                                        }
                                    } else {
                                        if (rr_std <= 18.69395923614502) {
                                            votes[43] = 2;
                                        } else {
                                            votes[43] = 2;
                                        }
                                    }
                                } else {
                                    votes[43] = 1;
                                }
                            }
                        } else {
                            if (systolic_area <= 13405.50830078125) {
                                votes[43] = 1;
                            } else {
                                votes[43] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 111313.03515625) {
                        if (systolic_time <= 0.362191379070282) {
                            votes[43] = 5;
                        } else {
                            if (systolic_area <= 63329.419921875) {
                                votes[43] = 5;
                            } else {
                                votes[43] = 5;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.05860205926001072) {
                            if (systolic_area <= 887508.5625) {
                                if (ss_median <= 46.25) {
                                    votes[43] = 1;
                                } else {
                                    votes[43] = 1;
                                }
                            } else {
                                votes[43] = 3;
                            }
                        } else {
                            if (ss_median <= 48.75) {
                                if (diff_median <= 19.637072563171387) {
                                    if (systolic_time <= 0.06702521070837975) {
                                        votes[43] = 3;
                                    } else {
                                        if (rr_std <= 9.346848487854004) {
                                            votes[43] = 5;
                                        } else {
                                            votes[43] = 3;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 401246.703125) {
                                        if (systolic_time <= 0.16913767904043198) {
                                            votes[43] = 1;
                                        } else {
                                            votes[43] = 5;
                                        }
                                    } else {
                                        votes[43] = 5;
                                    }
                                }
                            } else {
                                if (rr_std <= 12.275354385375977) {
                                    if (systolic_time <= 0.08043722808361053) {
                                        if (diff_median <= 16.745394706726074) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 52.25) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 12.726859092712402) {
                                        votes[43] = 5;
                                    } else {
                                        if (rr_std <= 15.117170810699463) {
                                            votes[43] = 3;
                                        } else {
                                            votes[43] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.488260269165039) {
                    if (systolic_area <= 1584333.125) {
                        votes[43] = 5;
                    } else {
                        if (diff_median <= 16.536827564239502) {
                            votes[43] = 4;
                        } else {
                            votes[43] = 3;
                        }
                    }
                } else {
                    if (diff_median <= 18.81639575958252) {
                        if (systolic_time <= 0.03255549818277359) {
                            votes[43] = 4;
                        } else {
                            if (ss_median <= 48.25) {
                                if (systolic_area <= 4028025.25) {
                                    votes[43] = 4;
                                } else {
                                    votes[43] = 4;
                                }
                            } else {
                                votes[43] = 4;
                            }
                        }
                    } else {
                        votes[43] = 1;
                    }
                }
            }
        } else {
            if (systolic_area <= 176308.328125) {
                if (rr_std <= 16.601760864257812) {
                    if (ss_median <= 73.75) {
                        if (diff_median <= 3.699536919593811) {
                            votes[43] = 2;
                        } else {
                            if (systolic_area <= 74396.34375) {
                                votes[43] = 2;
                            } else {
                                if (systolic_area <= 90033.8671875) {
                                    if (systolic_area <= 82429.99609375) {
                                        votes[43] = 2;
                                    } else {
                                        votes[43] = 2;
                                    }
                                } else {
                                    if (diff_median <= 14.437601566314697) {
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
                } else {
                    votes[43] = 4;
                }
            } else {
                if (systolic_area <= 639903.9375) {
                    if (diff_median <= 7.697573184967041) {
                        votes[43] = 3;
                    } else {
                        if (systolic_time <= 0.16321000456809998) {
                            votes[43] = 5;
                        } else {
                            votes[43] = 5;
                        }
                    }
                } else {
                    votes[43] = 3;
                }
            }
        }
    }
// Decision rules for tree 44
    if (diff_median <= 0.0696391137316823) {
        if (diff_median <= 0.003862016135826707) {
            votes[44] = 2;
        } else {
            if (rr_std <= 2.8213865607976913) {
                votes[44] = 0;
            } else {
                votes[44] = 0;
            }
        }
    } else {
        if (ss_median <= 66.5) {
            if (systolic_area <= 1144473.8125) {
                if (rr_std <= 9.915580749511719) {
                    if (ss_median <= 48.75) {
                        if (systolic_area <= 641227.125) {
                            if (systolic_time <= 0.06702521070837975) {
                                votes[44] = 1;
                            } else {
                                if (ss_median <= 47.5) {
                                    if (ss_median <= 44.5) {
                                        if (rr_std <= 2.694109559059143) {
                                            votes[44] = 5;
                                        } else {
                                            votes[44] = 3;
                                        }
                                    } else {
                                        if (systolic_time <= 0.13741745054721832) {
                                            votes[44] = 5;
                                        } else {
                                            votes[44] = 5;
                                        }
                                    }
                                } else {
                                    votes[44] = 5;
                                }
                            }
                        } else {
                            if (systolic_area <= 823779.15625) {
                                votes[44] = 3;
                            } else {
                                votes[44] = 3;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.38919998705387115) {
                            if (systolic_time <= 0.08704154565930367) {
                                if (systolic_time <= 0.024974359199404716) {
                                    votes[44] = 3;
                                } else {
                                    if (systolic_area <= 412930.0625) {
                                        if (rr_std <= 6.981604814529419) {
                                            votes[44] = 1;
                                        } else {
                                            votes[44] = 1;
                                        }
                                    } else {
                                        votes[44] = 3;
                                    }
                                }
                            } else {
                                if (ss_median <= 59.5) {
                                    if (diff_median <= 7.538793087005615) {
                                        if (diff_median <= 6.10008978843689) {
                                            votes[44] = 3;
                                        } else {
                                            votes[44] = 2;
                                        }
                                    } else {
                                        if (systolic_time <= 0.2762758582830429) {
                                            votes[44] = 3;
                                        } else {
                                            votes[44] = 3;
                                        }
                                    }
                                } else {
                                    if (rr_std <= 2.3788644075393677) {
                                        votes[44] = 1;
                                    } else {
                                        votes[44] = 3;
                                    }
                                }
                            }
                        } else {
                            votes[44] = 2;
                        }
                    }
                } else {
                    if (systolic_area <= 6644.6827392578125) {
                        if (diff_median <= 4.0903472900390625) {
                            if (rr_std <= 14.633645057678223) {
                                votes[44] = 4;
                            } else {
                                votes[44] = 4;
                            }
                        } else {
                            votes[44] = 3;
                        }
                    } else {
                        if (systolic_time <= 0.08774608746170998) {
                            if (ss_median <= 43.25) {
                                votes[44] = 5;
                            } else {
                                if (systolic_area <= 304764.453125) {
                                    votes[44] = 1;
                                } else {
                                    if (systolic_time <= 0.06280690617859364) {
                                        if (rr_std <= 11.011319160461426) {
                                            votes[44] = 1;
                                        } else {
                                            votes[44] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 52.0) {
                                            votes[44] = 1;
                                        } else {
                                            votes[44] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 19.39901828765869) {
                                if (systolic_area <= 31677.892578125) {
                                    if (ss_median <= 56.75) {
                                        if (systolic_area <= 23699.369140625) {
                                            votes[44] = 2;
                                        } else {
                                            votes[44] = 2;
                                        }
                                    } else {
                                        votes[44] = 5;
                                    }
                                } else {
                                    if (rr_std <= 15.087306499481201) {
                                        if (diff_median <= 28.448612213134766) {
                                            votes[44] = 5;
                                        } else {
                                            votes[44] = 1;
                                        }
                                    } else {
                                        if (diff_median <= 12.580174922943115) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 5;
                                        }
                                    }
                                }
                            } else {
                                if (systolic_time <= 0.3258095383644104) {
                                    if (systolic_area <= 82577.07421875) {
                                        if (rr_std <= 24.365010261535645) {
                                            votes[44] = 4;
                                        } else {
                                            votes[44] = 4;
                                        }
                                    } else {
                                        if (systolic_time <= 0.1565754935145378) {
                                            votes[44] = 1;
                                        } else {
                                            votes[44] = 5;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 51.0) {
                                        if (rr_std <= 21.790634155273438) {
                                            votes[44] = 1;
                                        } else {
                                            votes[44] = 1;
                                        }
                                    } else {
                                        if (systolic_area <= 23218.001953125) {
                                            votes[44] = 2;
                                        } else {
                                            votes[44] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (rr_std <= 9.287076473236084) {
                    if (systolic_area <= 1599360.5625) {
                        votes[44] = 5;
                    } else {
                        if (systolic_area <= 3135830.375) {
                            votes[44] = 3;
                        } else {
                            votes[44] = 4;
                        }
                    }
                } else {
                    if (ss_median <= 48.75) {
                        if (systolic_time <= 0.046071264892816544) {
                            if (systolic_time <= 0.03327601216733456) {
                                votes[44] = 4;
                            } else {
                                votes[44] = 4;
                            }
                        } else {
                            votes[44] = 5;
                        }
                    } else {
                        if (rr_std <= 10.435910701751709) {
                            if (diff_median <= 13.723804473876953) {
                                votes[44] = 4;
                            } else {
                                votes[44] = 4;
                            }
                        } else {
                            if (systolic_time <= 0.033226966857910156) {
                                votes[44] = 4;
                            } else {
                                votes[44] = 4;
                            }
                        }
                    }
                }
            }
        } else {
            if (rr_std <= 9.244638442993164) {
                if (ss_median <= 74.75) {
                    if (systolic_area <= 248617.625) {
                        if (diff_median <= 3.699536919593811) {
                            votes[44] = 2;
                        } else {
                            if (ss_median <= 73.5) {
                                if (systolic_area <= 176308.328125) {
                                    if (diff_median <= 12.488958358764648) {
                                        votes[44] = 2;
                                    } else {
                                        if (systolic_area <= 106566.19921875) {
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
                        votes[44] = 3;
                    }
                } else {
                    votes[44] = 3;
                }
            } else {
                if (diff_median <= 8.451427698135376) {
                    votes[44] = 4;
                } else {
                    votes[44] = 5;
                }
            }
        }
    }
// Decision rules for tree 45
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.003927538520656526) {
            votes[45] = 0;
        } else {
            if (rr_std <= 83.20280075073242) {
                if (rr_std <= 7.391850471496582) {
                    votes[45] = 0;
                } else {
                    votes[45] = 0;
                }
            } else {
                votes[45] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1263294.1875) {
                if (systolic_area <= 45496.859375) {
                    if (systolic_time <= 0.2791318744421005) {
                        if (diff_median <= 12.586799144744873) {
                            if (systolic_area <= 32472.51953125) {
                                if (systolic_area <= 20413.51171875) {
                                    if (diff_median <= 1.6159321069717407) {
                                        votes[45] = 4;
                                    } else {
                                        votes[45] = 4;
                                    }
                                } else {
                                    votes[45] = 5;
                                }
                            } else {
                                votes[45] = 4;
                            }
                        } else {
                            votes[45] = 3;
                        }
                    } else {
                        if (ss_median <= 50.25) {
                            if (systolic_time <= 0.48171429336071014) {
                                if (rr_std <= 14.922327995300293) {
                                    votes[45] = 5;
                                } else {
                                    votes[45] = 4;
                                }
                            } else {
                                votes[45] = 1;
                            }
                        } else {
                            if (rr_std <= 24.32447052001953) {
                                if (systolic_area <= 27016.8505859375) {
                                    if (systolic_area <= 20505.8232421875) {
                                        votes[45] = 2;
                                    } else {
                                        if (systolic_time <= 0.409177765250206) {
                                            votes[45] = 2;
                                        } else {
                                            votes[45] = 2;
                                        }
                                    }
                                } else {
                                    votes[45] = 1;
                                }
                            } else {
                                votes[45] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.0850052647292614) {
                        if (ss_median <= 43.25) {
                            if (rr_std <= 7.899800062179565) {
                                votes[45] = 4;
                            } else {
                                votes[45] = 5;
                            }
                        } else {
                            if (systolic_time <= 0.05126349814236164) {
                                if (systolic_time <= 0.029083188623189926) {
                                    votes[45] = 4;
                                } else {
                                    votes[45] = 1;
                                }
                            } else {
                                if (systolic_area <= 369423.890625) {
                                    if (diff_median <= 18.320408821105957) {
                                        votes[45] = 1;
                                    } else {
                                        votes[45] = 1;
                                    }
                                } else {
                                    if (ss_median <= 54.5) {
                                        if (diff_median <= 24.02391242980957) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 5;
                                        }
                                    } else {
                                        votes[45] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (rr_std <= 15.093132495880127) {
                            if (systolic_area <= 110712.87890625) {
                                if (systolic_time <= 0.4099545478820801) {
                                    votes[45] = 5;
                                } else {
                                    votes[45] = 5;
                                }
                            } else {
                                if (diff_median <= 12.592039585113525) {
                                    if (rr_std <= 4.960942029953003) {
                                        if (rr_std <= 0.8785105347633362) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 4;
                                        }
                                    } else {
                                        if (rr_std <= 13.611221313476562) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 47.5) {
                                        if (rr_std <= 4.238691568374634) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 1;
                                        }
                                    } else {
                                        if (systolic_time <= 0.13406214118003845) {
                                            votes[45] = 3;
                                        } else {
                                            votes[45] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 22.811251640319824) {
                                if (systolic_time <= 0.16371088474988937) {
                                    if (diff_median <= 15.974817752838135) {
                                        if (ss_median <= 45.0) {
                                            votes[45] = 5;
                                        } else {
                                            votes[45] = 4;
                                        }
                                    } else {
                                        votes[45] = 1;
                                    }
                                } else {
                                    if (systolic_area <= 186454.6640625) {
                                        votes[45] = 5;
                                    } else {
                                        votes[45] = 5;
                                    }
                                }
                            } else {
                                if (systolic_area <= 227903.5234375) {
                                    votes[45] = 1;
                                } else {
                                    votes[45] = 4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 17.688864707946777) {
                    if (rr_std <= 9.3821439743042) {
                        votes[45] = 4;
                    } else {
                        if (systolic_area <= 1548233.0625) {
                            if (ss_median <= 56.0) {
                                votes[45] = 4;
                            } else {
                                votes[45] = 4;
                            }
                        } else {
                            votes[45] = 4;
                        }
                    }
                } else {
                    if (systolic_area <= 1584333.125) {
                        votes[45] = 1;
                    } else {
                        votes[45] = 3;
                    }
                }
            }
        } else {
            if (rr_std <= 9.272529602050781) {
                if (systolic_area <= 230412.609375) {
                    if (ss_median <= 73.5) {
                        if (diff_median <= 4.148450970649719) {
                            votes[45] = 2;
                        } else {
                            if (systolic_area <= 189480.5546875) {
                                if (systolic_area <= 78379.32421875) {
                                    votes[45] = 2;
                                } else {
                                    votes[45] = 2;
                                }
                            } else {
                                votes[45] = 2;
                            }
                        }
                    } else {
                        if (systolic_area <= 101726.60546875) {
                            votes[45] = 2;
                        } else {
                            votes[45] = 5;
                        }
                    }
                } else {
                    if (systolic_time <= 0.10232888907194138) {
                        votes[45] = 3;
                    } else {
                        votes[45] = 5;
                    }
                }
            } else {
                if (rr_std <= 18.028037071228027) {
                    if (systolic_area <= 240125.796875) {
                        votes[45] = 5;
                    } else {
                        votes[45] = 3;
                    }
                } else {
                    votes[45] = 4;
                }
            }
        }
    }
// Decision rules for tree 46
    if (diff_median <= 0.06968991085886955) {
        if (rr_std <= 95.39395141601562) {
            if (rr_std <= 4.560810208320618) {
                votes[46] = 0;
            } else {
                if (diff_median <= 0.004516886314377189) {
                    votes[46] = 0;
                } else {
                    votes[46] = 0;
                }
            }
        } else {
            votes[46] = 0;
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1271213.3125) {
                if (systolic_area <= 45496.859375) {
                    if (systolic_time <= 0.27971282601356506) {
                        if (diff_median <= 14.221578598022461) {
                            if (rr_std <= 32.93207931518555) {
                                if (ss_median <= 57.5) {
                                    votes[46] = 4;
                                } else {
                                    votes[46] = 4;
                                }
                            } else {
                                votes[46] = 4;
                            }
                        } else {
                            votes[46] = 3;
                        }
                    } else {
                        if (rr_std <= 24.649049758911133) {
                            if (ss_median <= 50.25) {
                                if (systolic_time <= 0.655636340379715) {
                                    votes[46] = 5;
                                } else {
                                    votes[46] = 1;
                                }
                            } else {
                                if (ss_median <= 56.5) {
                                    if (rr_std <= 14.844515800476074) {
                                        votes[46] = 2;
                                    } else {
                                        votes[46] = 2;
                                    }
                                } else {
                                    if (systolic_time <= 0.6740444302558899) {
                                        votes[46] = 5;
                                    } else {
                                        votes[46] = 2;
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 1.3113622665405273) {
                                votes[46] = 1;
                            } else {
                                if (ss_median <= 54.5) {
                                    votes[46] = 1;
                                } else {
                                    votes[46] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (ss_median <= 48.75) {
                        if (systolic_time <= 0.17918182164430618) {
                            if (rr_std <= 10.206163883209229) {
                                if (systolic_area <= 631695.125) {
                                    if (diff_median <= 32.789445877075195) {
                                        if (ss_median <= 47.5) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 5;
                                        }
                                    } else {
                                        votes[46] = 3;
                                    }
                                } else {
                                    votes[46] = 3;
                                }
                            } else {
                                if (ss_median <= 41.5) {
                                    votes[46] = 5;
                                } else {
                                    if (systolic_time <= 0.13908134400844574) {
                                        if (systolic_area <= 301226.78125) {
                                            votes[46] = 1;
                                        } else {
                                            votes[46] = 1;
                                        }
                                    } else {
                                        if (ss_median <= 46.75) {
                                            votes[46] = 5;
                                        } else {
                                            votes[46] = 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (diff_median <= 5.14289116859436) {
                                votes[46] = 5;
                            } else {
                                votes[46] = 5;
                            }
                        }
                    } else {
                        if (systolic_time <= 0.10020440816879272) {
                            if (systolic_time <= 0.06246769055724144) {
                                if (systolic_area <= 601688.515625) {
                                    votes[46] = 1;
                                } else {
                                    if (ss_median <= 53.75) {
                                        votes[46] = 1;
                                    } else {
                                        votes[46] = 1;
                                    }
                                }
                            } else {
                                if (systolic_area <= 301421.640625) {
                                    votes[46] = 1;
                                } else {
                                    if (systolic_time <= 0.08955308049917221) {
                                        if (rr_std <= 9.713447570800781) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 1;
                                        }
                                    } else {
                                        votes[46] = 1;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 12.096088886260986) {
                                if (systolic_area <= 721914.25) {
                                    if (systolic_area <= 128113.703125) {
                                        votes[46] = 5;
                                    } else {
                                        if (diff_median <= 9.043829917907715) {
                                            votes[46] = 3;
                                        } else {
                                            votes[46] = 3;
                                        }
                                    }
                                } else {
                                    votes[46] = 4;
                                }
                            } else {
                                if (ss_median <= 52.0) {
                                    if (systolic_area <= 256909.5859375) {
                                        votes[46] = 1;
                                    } else {
                                        votes[46] = 3;
                                    }
                                } else {
                                    if (ss_median <= 57.5) {
                                        if (rr_std <= 16.501861572265625) {
                                            votes[46] = 5;
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
                }
            } else {
                if (diff_median <= 17.81293773651123) {
                    if (ss_median <= 52.0) {
                        if (systolic_area <= 1826244.625) {
                            votes[46] = 5;
                        } else {
                            if (systolic_time <= 0.033226966857910156) {
                                votes[46] = 4;
                            } else {
                                votes[46] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 10.356062889099121) {
                            if (systolic_area <= 1701352.375) {
                                votes[46] = 4;
                            } else {
                                votes[46] = 4;
                            }
                        } else {
                            votes[46] = 4;
                        }
                    }
                } else {
                    if (systolic_area <= 1584333.125) {
                        votes[46] = 1;
                    } else {
                        votes[46] = 3;
                    }
                }
            }
        } else {
            if (systolic_area <= 216288.9609375) {
                if (rr_std <= 9.244638442993164) {
                    if (ss_median <= 73.5) {
                        if (systolic_area <= 74045.859375) {
                            votes[46] = 2;
                        } else {
                            if (systolic_area <= 180760.53125) {
                                if (systolic_area <= 90033.8671875) {
                                    if (systolic_area <= 82429.99609375) {
                                        votes[46] = 2;
                                    } else {
                                        votes[46] = 2;
                                    }
                                } else {
                                    if (systolic_time <= 0.23908504098653793) {
                                        votes[46] = 2;
                                    } else {
                                        votes[46] = 2;
                                    }
                                }
                            } else {
                                votes[46] = 2;
                            }
                        }
                    } else {
                        if (systolic_area <= 95682.9453125) {
                            votes[46] = 2;
                        } else {
                            votes[46] = 3;
                        }
                    }
                } else {
                    if (systolic_time <= 0.21306200325489044) {
                        votes[46] = 4;
                    } else {
                        votes[46] = 5;
                    }
                }
            } else {
                if (diff_median <= 14.729794979095459) {
                    votes[46] = 3;
                } else {
                    votes[46] = 5;
                }
            }
        }
    }
// Decision rules for tree 47
    if (diff_median <= 0.030496088787913322) {
        if (rr_std <= 4.010679841041565) {
            votes[47] = 2;
        } else {
            if (systolic_time <= 0.2655172348022461) {
                votes[47] = 0;
            } else {
                votes[47] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1144473.8125) {
                if (systolic_area <= 48979.705078125) {
                    if (systolic_time <= 0.3166086971759796) {
                        if (diff_median <= 14.221578598022461) {
                            if (ss_median <= 46.75) {
                                votes[47] = 4;
                            } else {
                                if (systolic_time <= 0.18997561186552048) {
                                    votes[47] = 5;
                                } else {
                                    votes[47] = 4;
                                }
                            }
                        } else {
                            votes[47] = 3;
                        }
                    } else {
                        if (systolic_time <= 0.8199110925197601) {
                            if (diff_median <= 2.3498358726501465) {
                                if (systolic_area <= 16142.01513671875) {
                                    votes[47] = 4;
                                } else {
                                    votes[47] = 1;
                                }
                            } else {
                                if (rr_std <= 14.876248836517334) {
                                    if (diff_median <= 5.224998474121094) {
                                        votes[47] = 2;
                                    } else {
                                        votes[47] = 5;
                                    }
                                } else {
                                    if (ss_median <= 50.25) {
                                        votes[47] = 2;
                                    } else {
                                        if (rr_std <= 17.6076602935791) {
                                            votes[47] = 2;
                                        } else {
                                            votes[47] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 13436.8095703125) {
                                votes[47] = 2;
                            } else {
                                if (systolic_area <= 18999.7353515625) {
                                    votes[47] = 1;
                                } else {
                                    votes[47] = 1;
                                }
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.08486853539943695) {
                        if (diff_median <= 18.004337310791016) {
                            if (systolic_time <= 0.03935120068490505) {
                                if (systolic_area <= 958682.9375) {
                                    votes[47] = 1;
                                } else {
                                    votes[47] = 1;
                                }
                            } else {
                                if (rr_std <= 14.65866756439209) {
                                    if (rr_std <= 11.144776344299316) {
                                        if (diff_median <= 6.690210819244385) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 1;
                                        }
                                    } else {
                                        votes[47] = 3;
                                    }
                                } else {
                                    votes[47] = 1;
                                }
                            }
                        } else {
                            if (ss_median <= 44.25) {
                                votes[47] = 5;
                            } else {
                                if (diff_median <= 33.24205780029297) {
                                    if (diff_median <= 23.849590301513672) {
                                        votes[47] = 1;
                                    } else {
                                        votes[47] = 1;
                                    }
                                } else {
                                    if (systolic_time <= 0.05615196004509926) {
                                        votes[47] = 1;
                                    } else {
                                        votes[47] = 1;
                                    }
                                }
                            }
                        }
                    } else {
                        if (ss_median <= 48.75) {
                            if (systolic_time <= 0.17930232733488083) {
                                if (diff_median <= 21.42103385925293) {
                                    if (systolic_time <= 0.1206742413341999) {
                                        if (systolic_time <= 0.09842650592327118) {
                                            votes[47] = 5;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    } else {
                                        if (diff_median <= 14.711501121520996) {
                                            votes[47] = 5;
                                        } else {
                                            votes[47] = 1;
                                        }
                                    }
                                } else {
                                    if (systolic_area <= 421020.453125) {
                                        if (systolic_area <= 183071.9765625) {
                                            votes[47] = 1;
                                        } else {
                                            votes[47] = 1;
                                        }
                                    } else {
                                        votes[47] = 5;
                                    }
                                }
                            } else {
                                if (diff_median <= 6.8992369174957275) {
                                    votes[47] = 5;
                                } else {
                                    if (systolic_time <= 0.21005982905626297) {
                                        votes[47] = 5;
                                    } else {
                                        votes[47] = 5;
                                    }
                                }
                            }
                        } else {
                            if (rr_std <= 12.393282413482666) {
                                if (systolic_time <= 0.3789428472518921) {
                                    if (diff_median <= 9.043829917907715) {
                                        if (diff_median <= 6.747710704803467) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    } else {
                                        if (ss_median <= 59.5) {
                                            votes[47] = 3;
                                        } else {
                                            votes[47] = 3;
                                        }
                                    }
                                } else {
                                    votes[47] = 5;
                                }
                            } else {
                                if (rr_std <= 19.51534080505371) {
                                    if (systolic_area <= 264801.828125) {
                                        votes[47] = 5;
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
                if (diff_median <= 18.13351345062256) {
                    if (systolic_time <= 0.0331330057233572) {
                        votes[47] = 3;
                    } else {
                        if (systolic_area <= 1727948.1875) {
                            if (systolic_time <= 0.08311845362186432) {
                                if (systolic_time <= 0.05502238683402538) {
                                    votes[47] = 1;
                                } else {
                                    votes[47] = 5;
                                }
                            } else {
                                if (rr_std <= 10.356062889099121) {
                                    votes[47] = 4;
                                } else {
                                    votes[47] = 4;
                                }
                            }
                        } else {
                            votes[47] = 4;
                        }
                    }
                } else {
                    if (systolic_area <= 1575297.25) {
                        votes[47] = 1;
                    } else {
                        votes[47] = 3;
                    }
                }
            }
        } else {
            if (systolic_area <= 180689.3984375) {
                if (rr_std <= 7.592450380325317) {
                    if (systolic_area <= 78379.32421875) {
                        votes[47] = 2;
                    } else {
                        votes[47] = 2;
                    }
                } else {
                    if (rr_std <= 18.928680419921875) {
                        if (systolic_time <= 0.37353333830833435) {
                            votes[47] = 2;
                        } else {
                            votes[47] = 5;
                        }
                    } else {
                        votes[47] = 4;
                    }
                }
            } else {
                if (systolic_time <= 0.1274036355316639) {
                    if (systolic_area <= 653815.4375) {
                        votes[47] = 3;
                    } else {
                        votes[47] = 3;
                    }
                } else {
                    if (ss_median <= 68.75) {
                        votes[47] = 2;
                    } else {
                        votes[47] = 5;
                    }
                }
            }
        }
    }
// Decision rules for tree 48
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004066428868100047) {
            votes[48] = 0;
        } else {
            if (rr_std <= 5.7954301834106445) {
                votes[48] = 0;
            } else {
                votes[48] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1144473.8125) {
                if (systolic_area <= 47907.599609375) {
                    if (systolic_time <= 0.3418181836605072) {
                        if (diff_median <= 12.586799144744873) {
                            if (rr_std <= 19.833313941955566) {
                                if (rr_std <= 14.507194995880127) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 5;
                                }
                            } else {
                                if (systolic_area <= 24814.0087890625) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 4;
                                }
                            }
                        } else {
                            votes[48] = 3;
                        }
                    } else {
                        if (rr_std <= 21.784725189208984) {
                            if (rr_std <= 13.585935592651367) {
                                votes[48] = 5;
                            } else {
                                if (ss_median <= 49.25) {
                                    votes[48] = 4;
                                } else {
                                    if (systolic_area <= 24447.8154296875) {
                                        votes[48] = 2;
                                    } else {
                                        if (systolic_area <= 25805.03515625) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (ss_median <= 54.5) {
                                if (systolic_time <= 0.6168111860752106) {
                                    votes[48] = 1;
                                } else {
                                    votes[48] = 1;
                                }
                            } else {
                                votes[48] = 2;
                            }
                        }
                    }
                } else {
                    if (rr_std <= 15.655972480773926) {
                        if (systolic_time <= 0.09908024594187737) {
                            if (diff_median <= 24.009407997131348) {
                                if (systolic_time <= 0.039556652307510376) {
                                    votes[48] = 1;
                                } else {
                                    if (systolic_area <= 739075.25) {
                                        if (ss_median <= 44.25) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    } else {
                                        votes[48] = 3;
                                    }
                                }
                            } else {
                                if (systolic_area <= 400028.015625) {
                                    if (rr_std <= 11.084955215454102) {
                                        votes[48] = 1;
                                    } else {
                                        votes[48] = 1;
                                    }
                                } else {
                                    if (systolic_time <= 0.07352760434150696) {
                                        votes[48] = 1;
                                    } else {
                                        votes[48] = 5;
                                    }
                                }
                            }
                        } else {
                            if (systolic_area <= 121665.1953125) {
                                if (diff_median <= 10.003479957580566) {
                                    votes[48] = 5;
                                } else {
                                    votes[48] = 5;
                                }
                            } else {
                                if (systolic_time <= 0.16385815292596817) {
                                    if (systolic_area <= 227915.703125) {
                                        if (diff_median <= 15.638427257537842) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 1;
                                        }
                                    } else {
                                        if (rr_std <= 9.436504364013672) {
                                            votes[48] = 5;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    }
                                } else {
                                    if (ss_median <= 49.75) {
                                        if (systolic_area <= 159078.5234375) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 5;
                                        }
                                    } else {
                                        if (diff_median <= 12.040770530700684) {
                                            votes[48] = 3;
                                        } else {
                                            votes[48] = 3;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (systolic_time <= 0.07586725428700447) {
                            votes[48] = 1;
                        } else {
                            if (rr_std <= 24.848801612854004) {
                                if (systolic_time <= 0.14563491940498352) {
                                    if (systolic_time <= 0.10954225063323975) {
                                        votes[48] = 5;
                                    } else {
                                        votes[48] = 1;
                                    }
                                } else {
                                    if (rr_std <= 20.262414932250977) {
                                        votes[48] = 5;
                                    } else {
                                        votes[48] = 5;
                                    }
                                }
                            } else {
                                votes[48] = 1;
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 17.947805404663086) {
                    if (ss_median <= 50.25) {
                        if (systolic_time <= 0.039561741054058075) {
                            if (systolic_area <= 2793073.0625) {
                                votes[48] = 1;
                            } else {
                                if (ss_median <= 48.25) {
                                    votes[48] = 4;
                                } else {
                                    votes[48] = 4;
                                }
                            }
                        } else {
                            votes[48] = 5;
                        }
                    } else {
                        if (rr_std <= 9.700536727905273) {
                            votes[48] = 4;
                        } else {
                            if (rr_std <= 10.444921016693115) {
                                votes[48] = 4;
                            } else {
                                votes[48] = 4;
                            }
                        }
                    }
                } else {
                    if (systolic_area <= 1575297.25) {
                        votes[48] = 4;
                    } else {
                        votes[48] = 3;
                    }
                }
            }
        } else {
            if (systolic_area <= 230412.609375) {
                if (rr_std <= 9.244638442993164) {
                    if (systolic_area <= 74396.34375) {
                        votes[48] = 5;
                    } else {
                        if (ss_median <= 73.5) {
                            if (systolic_area <= 136965.609375) {
                                if (systolic_time <= 0.4224444329738617) {
                                    votes[48] = 2;
                                } else {
                                    if (ss_median <= 72.75) {
                                        votes[48] = 2;
                                    } else {
                                        votes[48] = 2;
                                    }
                                }
                            } else {
                                if (ss_median <= 69.0) {
                                    votes[48] = 2;
                                } else {
                                    votes[48] = 5;
                                }
                            }
                        } else {
                            votes[48] = 2;
                        }
                    }
                } else {
                    if (systolic_time <= 0.24059229344129562) {
                        votes[48] = 4;
                    } else {
                        votes[48] = 5;
                    }
                }
            } else {
                if (diff_median <= 15.022047519683838) {
                    votes[48] = 3;
                } else {
                    votes[48] = 5;
                }
            }
        }
    }
// Decision rules for tree 49
    if (diff_median <= 0.030496088787913322) {
        if (diff_median <= 0.004066428868100047) {
            votes[49] = 0;
        } else {
            if (rr_std <= 4.010679841041565) {
                votes[49] = 0;
            } else {
                votes[49] = 0;
            }
        }
    } else {
        if (ss_median <= 66.75) {
            if (systolic_area <= 1136458.3125) {
                if (systolic_area <= 48502.75390625) {
                    if (systolic_time <= 0.2791318744421005) {
                        if (diff_median <= 10.98346996307373) {
                            if (diff_median <= 2.210398554801941) {
                                votes[49] = 4;
                            } else {
                                if (diff_median <= 3.3423322439193726) {
                                    votes[49] = 4;
                                } else {
                                    votes[49] = 4;
                                }
                            }
                        } else {
                            votes[49] = 3;
                        }
                    } else {
                        if (rr_std <= 24.86577606201172) {
                            if (diff_median <= 1.9896726608276367) {
                                votes[49] = 5;
                            } else {
                                if (ss_median <= 48.75) {
                                    votes[49] = 1;
                                } else {
                                    if (rr_std <= 13.585935592651367) {
                                        if (rr_std <= 11.63772964477539) {
                                            votes[49] = 2;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    } else {
                                        if (systolic_time <= 0.8199110925197601) {
                                            votes[49] = 2;
                                        } else {
                                            votes[49] = 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (systolic_time <= 0.6757999956607819) {
                                votes[49] = 1;
                            } else {
                                votes[49] = 1;
                            }
                        }
                    }
                } else {
                    if (systolic_time <= 0.0672396719455719) {
                        if (rr_std <= 10.161478519439697) {
                            if (systolic_area <= 484976.828125) {
                                if (rr_std <= 7.609112739562988) {
                                    votes[49] = 1;
                                } else {
                                    votes[49] = 1;
                                }
                            } else {
                                if (rr_std <= 5.814694881439209) {
                                    votes[49] = 3;
                                } else {
                                    votes[49] = 5;
                                }
                            }
                        } else {
                            if (systolic_area <= 358362.75) {
                                votes[49] = 1;
                            } else {
                                if (systolic_area <= 977758.09375) {
                                    votes[49] = 1;
                                } else {
                                    votes[49] = 1;
                                }
                            }
                        }
                    } else {
                        if (systolic_area <= 111183.828125) {
                            if (rr_std <= 13.13141393661499) {
                                if (systolic_area <= 62440.78125) {
                                    votes[49] = 5;
                                } else {
                                    votes[49] = 5;
                                }
                            } else {
                                votes[49] = 5;
                            }
                        } else {
                            if (rr_std <= 15.08080768585205) {
                                if (ss_median <= 48.75) {
                                    if (rr_std <= 11.567734718322754) {
                                        if (diff_median <= 5.52993369102478) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    } else {
                                        if (ss_median <= 44.75) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 1;
                                        }
                                    }
                                } else {
                                    if (diff_median <= 4.416049003601074) {
                                        votes[49] = 4;
                                    } else {
                                        if (systolic_time <= 0.2464761808514595) {
                                            votes[49] = 3;
                                        } else {
                                            votes[49] = 3;
                                        }
                                    }
                                }
                            } else {
                                if (rr_std <= 17.933236122131348) {
                                    if (systolic_time <= 0.10886619612574577) {
                                        votes[49] = 5;
                                    } else {
                                        if (systolic_area <= 204278.1640625) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    }
                                } else {
                                    if (systolic_time <= 0.15636827796697617) {
                                        votes[49] = 1;
                                    } else {
                                        if (systolic_time <= 0.21578378230333328) {
                                            votes[49] = 5;
                                        } else {
                                            votes[49] = 5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (diff_median <= 18.13351345062256) {
                    if (rr_std <= 10.50492811203003) {
                        if (systolic_area <= 1712231.25) {
                            if (systolic_time <= 0.05301908776164055) {
                                votes[49] = 1;
                            } else {
                                if (diff_median <= 12.195547103881836) {
                                    votes[49] = 5;
                                } else {
                                    votes[49] = 3;
                                }
                            }
                        } else {
                            if (diff_median <= 10.136273384094238) {
                                votes[49] = 4;
                            } else {
                                votes[49] = 4;
                            }
                        }
                    } else {
                        if (rr_std <= 19.061857223510742) {
                            if (ss_median <= 47.25) {
                                votes[49] = 4;
                            } else {
                                votes[49] = 4;
                            }
                        } else {
                            votes[49] = 4;
                        }
                    }
                } else {
                    votes[49] = 3;
                }
            }
        } else {
            if (rr_std <= 9.244638442993164) {
                if (systolic_area <= 176308.328125) {
                    if (systolic_area <= 74396.34375) {
                        votes[49] = 5;
                    } else {
                        if (systolic_time <= 0.24150928109884262) {
                            if (diff_median <= 11.089471817016602) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 2;
                            }
                        } else {
                            if (ss_median <= 73.5) {
                                votes[49] = 2;
                            } else {
                                votes[49] = 2;
                            }
                        }
                    }
                } else {
                    if (diff_median <= 25.53351402282715) {
                        if (diff_median <= 6.137380123138428) {
                            votes[49] = 3;
                        } else {
                            votes[49] = 5;
                        }
                    } else {
                        votes[49] = 2;
                    }
                }
            } else {
                if (diff_median <= 7.453150510787964) {
                    votes[49] = 4;
                } else {
                    if (systolic_area <= 172403.875) {
                        votes[49] = 5;
                    } else {
                        votes[49] = 3;
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
