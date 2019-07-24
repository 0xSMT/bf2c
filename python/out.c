#include <stdio.h>

char tape[100];
char *ptr = &tape[0];

int main() {
	setbuf(stdout, NULL);

	(*ptr)+=13;
	while (*ptr) {
		(*ptr)-=1;
		ptr+=1;
		(*ptr)+=2;
		ptr+=3;
		(*ptr)+=5;
		ptr+=1;
		(*ptr)+=2;
		ptr+=1;
		(*ptr)+=1;
		ptr-=6;
	}
	ptr+=5;
	(*ptr)+=6;
	ptr+=1;
	(*ptr)-=3;
	ptr+=10;
	(*ptr)+=15;
	while (*ptr) {
		while (*ptr) {
			ptr+=9;
		}
		(*ptr)+=1;
		while (*ptr) {
			ptr-=9;
		}
		ptr+=9;
		(*ptr)-=1;
	}
	(*ptr)+=1;
	while (*ptr) {
		ptr+=8;
		while (*ptr) {
			(*ptr)-=1;
		}
		ptr+=1;
	}
	ptr-=9;
	while (*ptr) {
		ptr-=9;
	}
	ptr+=8;
	while (*ptr) {
		(*ptr)-=1;
	}
	(*ptr)+=1;
	ptr-=7;
	(*ptr)+=5;
	while (*ptr) {
		(*ptr)-=1;
		while (*ptr) {
			(*ptr)-=1;
			ptr+=9;
			(*ptr)+=1;
			ptr-=9;
		}
		ptr+=9;
	}
	ptr+=7;
	(*ptr)+=1;
	ptr+=26;
	ptr+=1;
	(*ptr)+=1;
	ptr-=17;
	while (*ptr) {
		ptr-=9;
	}
	ptr+=3;
	while (*ptr) {
		(*ptr)-=1;
	}
	(*ptr)+=1;
	while (*ptr) {
		ptr+=6;
		while (*ptr) {
			ptr+=7;
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr+=2;
		}
		ptr-=9;
		while (*ptr) {
			ptr-=9;
		}
		ptr+=2;
		ptr+=5;
		while (*ptr) {
			(*ptr)-=1;
		}
		(*ptr)+=1;
		ptr-=6;
		(*ptr)+=4;
		while (*ptr) {
			(*ptr)-=1;
			while (*ptr) {
				(*ptr)-=1;
				ptr+=9;
				(*ptr)+=1;
				ptr-=9;
			}
			ptr+=9;
		}
		ptr+=6;
		(*ptr)+=1;
		ptr-=6;
		(*ptr)+=7;
		while (*ptr) {
			(*ptr)-=1;
			while (*ptr) {
				(*ptr)-=1;
				ptr+=3;
				ptr+=6;
				(*ptr)+=1;
				ptr-=9;
			}
			ptr+=9;
		}
		ptr+=6;
		(*ptr)+=1;
		ptr-=16;
		while (*ptr) {
			ptr-=9;
		}
		ptr+=3;
		while (*ptr) {
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr+=6;
			while (*ptr) {
				ptr+=5;
				ptr+=2;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=6;
					(*ptr)+=1;
					ptr+=6;
				}
				ptr-=6;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=6;
					(*ptr)+=1;
					ptr-=2;
					(*ptr)+=1;
					ptr-=3;
					(*ptr)+=1;
					ptr-=1;
				}
				ptr+=8;
			}
			ptr-=9;
			while (*ptr) {
				ptr-=9;
			}
			ptr+=9;
			while (*ptr) {
				ptr+=8;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=7;
					(*ptr)+=1;
					ptr+=7;
				}
				ptr-=7;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=7;
					(*ptr)+=1;
					ptr-=2;
					(*ptr)+=1;
					ptr-=3;
					(*ptr)+=1;
					ptr-=2;
				}
				ptr+=8;
			}
			ptr-=9;
			while (*ptr) {
				ptr-=7;
				ptr-=2;
			}
			ptr+=7;
			while (*ptr) {
				(*ptr)-=1;
				ptr-=7;
				(*ptr)+=1;
				ptr+=7;
			}
			ptr-=7;
			while (*ptr) {
				(*ptr)-=1;
				ptr+=7;
				(*ptr)+=1;
				ptr-=2;
				(*ptr)+=1;
				ptr-=5;
			}
			ptr+=9;
			(*ptr)+=15;
			while (*ptr) {
				while (*ptr) {
					ptr+=9;
				}
				(*ptr)+=1;
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				(*ptr)-=1;
			}
			(*ptr)+=1;
			while (*ptr) {
				ptr+=1;
				(*ptr)+=1;
				ptr+=8;
			}
			ptr-=9;
			while (*ptr) {
				ptr-=9;
			}
			ptr+=9;
			while (*ptr) {
				ptr+=1;
				(*ptr)-=1;
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=4;
					(*ptr)+=1;
					ptr+=4;
				}
				ptr-=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=4;
					(*ptr)+=1;
					ptr-=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=2;
							(*ptr)+=1;
							ptr+=2;
						}
						ptr-=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=2;
							(*ptr)+=1;
							ptr+=2;
							(*ptr)+=1;
							ptr-=4;
						}
						(*ptr)+=1;
						ptr+=9;
					}
					ptr-=8;
					while (*ptr) {
						ptr-=9;
					}
				}
				ptr+=9;
				while (*ptr) {
					ptr+=9;
				}
				ptr-=7;
				ptr-=2;
				while (*ptr) {
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=9;
						(*ptr)+=1;
						ptr-=9;
					}
					ptr-=10;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=9;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr-=1;
				(*ptr)+=1;
				ptr+=8;
			}
			ptr-=9;
			while (*ptr) {
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr-=1;
				(*ptr)-=1;
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=4;
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						ptr-=1;
						(*ptr)-=1;
						ptr+=1;
						(*ptr)-=1;
						ptr-=6;
						(*ptr)+=1;
						ptr+=6;
					}
					ptr-=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=1;
						(*ptr)+=1;
						ptr-=1;
					}
					ptr+=4;
				}
				ptr-=3;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=3;
					(*ptr)+=1;
					ptr-=3;
				}
				ptr-=1;
				(*ptr)+=1;
				ptr-=9;
			}
			ptr+=5;
			ptr+=4;
			while (*ptr) {
				ptr+=1;
				(*ptr)+=1;
				ptr+=8;
			}
			ptr-=9;
			while (*ptr) {
				ptr-=9;
			}
			ptr+=9;
			while (*ptr) {
				ptr+=1;
				(*ptr)-=1;
				ptr+=5;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=5;
					(*ptr)+=1;
					ptr+=5;
				}
				ptr-=5;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=5;
					(*ptr)+=1;
					ptr-=6;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=3;
							(*ptr)+=1;
							ptr+=3;
						}
						ptr-=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=3;
							(*ptr)+=1;
							ptr+=1;
							(*ptr)+=1;
							ptr-=4;
						}
						(*ptr)+=1;
						ptr+=9;
					}
					ptr-=8;
					while (*ptr) {
						ptr-=9;
					}
				}
				ptr+=9;
				while (*ptr) {
					ptr+=2;
					ptr+=7;
				}
				ptr-=9;
				while (*ptr) {
					ptr+=2;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=9;
						(*ptr)+=1;
						ptr-=9;
					}
					ptr-=11;
				}
				ptr+=2;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=9;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr-=2;
				(*ptr)+=1;
				ptr+=8;
			}
			ptr-=9;
			while (*ptr) {
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr-=1;
				(*ptr)-=1;
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=4;
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						ptr-=1;
						(*ptr)-=1;
						ptr+=1;
						(*ptr)-=1;
						ptr-=6;
						(*ptr)+=1;
						ptr+=6;
					}
					ptr-=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=1;
						(*ptr)+=1;
						ptr-=1;
					}
					ptr+=4;
				}
				ptr-=3;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=3;
					(*ptr)+=1;
					ptr-=2;
					ptr-=1;
				}
				ptr-=1;
				(*ptr)+=1;
				ptr-=9;
			}
			ptr+=9;
			while (*ptr) {
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=36;
					(*ptr)+=1;
					ptr+=13;
					ptr+=23;
				}
				ptr+=5;
			}
			ptr-=9;
			while (*ptr) {
				ptr-=9;
			}
			ptr+=9;
			(*ptr)+=15;
			while (*ptr) {
				while (*ptr) {
					ptr+=4;
					ptr+=5;
				}
				ptr-=9;
				(*ptr)-=1;
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				(*ptr)-=1;
			}
			(*ptr)+=1;
			ptr+=21;
			(*ptr)+=1;
			ptr-=3;
			while (*ptr) {
				ptr-=6;
				ptr-=3;
			}
			ptr+=9;
			while (*ptr) {
				ptr+=3;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=3;
					(*ptr)-=1;
					ptr+=3;
				}
				(*ptr)+=1;
				ptr-=3;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=3;
					(*ptr)-=1;
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=4;
					}
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=4;
						(*ptr)+=1;
						ptr-=13;
						while (*ptr) {
							ptr-=5;
							ptr-=4;
						}
						ptr+=4;
						while (*ptr) {
							(*ptr)-=1;
						}
						(*ptr)+=1;
						ptr+=5;
						while (*ptr) {
							ptr+=9;
						}
						ptr+=1;
						(*ptr)+=1;
						ptr-=1;
					}
				}
				(*ptr)+=1;
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=4;
					(*ptr)-=1;
					ptr+=4;
				}
				(*ptr)+=1;
				ptr-=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=4;
					(*ptr)-=1;
					ptr-=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=3;
						(*ptr)+=1;
						ptr+=3;
					}
					ptr-=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=1;
						ptr+=2;
						(*ptr)+=1;
						ptr-=12;
						while (*ptr) {
							ptr-=9;
						}
						ptr+=3;
						while (*ptr) {
							(*ptr)-=1;
						}
						(*ptr)+=1;
						ptr+=6;
						while (*ptr) {
							ptr+=9;
						}
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
						}
						(*ptr)+=1;
						ptr-=1;
					}
				}
				(*ptr)+=1;
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=1;
					while (*ptr) {
						ptr+=9;
					}
					ptr-=6;
					ptr-=2;
				}
				ptr+=8;
			}
			ptr-=9;
			while (*ptr) {
				ptr-=9;
			}
			ptr-=7;
			while (*ptr) {
				(*ptr)-=1;
				ptr+=1;
				(*ptr)+=1;
				ptr+=3;
				(*ptr)-=1;
				ptr-=4;
			}
			ptr+=9;
			(*ptr)+=19;
			(*ptr)+=7;
			ptr+=2;
			while (*ptr) {
				(*ptr)-=1;
				ptr-=4;
				(*ptr)+=1;
				ptr+=4;
			}
			ptr-=4;
			while (*ptr) {
				(*ptr)-=1;
				ptr+=4;
				(*ptr)+=1;
				ptr-=2;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr-=2;
			}
			ptr+=2;
			while (*ptr) {
				ptr-=7;
				(*ptr)+=1;
				ptr-=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=1;
					(*ptr)+=1;
					ptr+=4;
					(*ptr)+=1;
					ptr-=2;
					while (*ptr) {
						(*ptr)-=1;
					}
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=2;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=1;
						(*ptr)+=1;
						ptr+=3;
						(*ptr)-=1;
						ptr-=4;
					}
					ptr+=3;
				}
				ptr+=13;
				while (*ptr) {
					ptr+=2;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=5;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=3;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=6;
				while (*ptr) {
					ptr+=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=4;
					}
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=4;
						(*ptr)+=1;
						ptr-=3;
						(*ptr)+=1;
						ptr-=1;
					}
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=2;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=8;
						ptr-=1;
						(*ptr)+=1;
						ptr+=9;
					}
					ptr+=7;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				(*ptr)+=15;
				while (*ptr) {
					while (*ptr) {
						ptr+=9;
					}
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=9;
					while (*ptr) {
						ptr-=9;
					}
					ptr+=9;
					(*ptr)-=1;
				}
				(*ptr)+=1;
				while (*ptr) {
					ptr+=1;
					(*ptr)+=1;
					ptr+=8;
				}
				ptr-=3;
				ptr-=6;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=1;
					(*ptr)-=1;
					ptr+=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=5;
						(*ptr)+=1;
						ptr+=5;
					}
					ptr-=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=5;
						(*ptr)+=1;
						ptr-=6;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)+=1;
								ptr+=2;
							}
							ptr-=1;
							ptr-=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)+=1;
								ptr+=1;
								(*ptr)+=1;
								ptr-=3;
							}
							(*ptr)+=1;
							ptr+=9;
						}
						ptr-=8;
						while (*ptr) {
							ptr-=9;
						}
					}
					ptr+=9;
					while (*ptr) {
						ptr+=9;
					}
					ptr-=9;
					while (*ptr) {
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=4;
							ptr+=5;
							(*ptr)+=1;
							ptr-=9;
						}
						ptr-=10;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=9;
						(*ptr)+=1;
						ptr-=9;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=1;
					(*ptr)-=1;
					ptr+=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=3;
						(*ptr)+=1;
						ptr+=1;
						while (*ptr) {
							ptr-=1;
							(*ptr)-=1;
							ptr+=1;
							(*ptr)-=1;
							ptr-=7;
							(*ptr)+=1;
							ptr+=7;
						}
						ptr-=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=1;
							(*ptr)+=1;
							ptr-=1;
						}
						ptr+=3;
					}
					ptr-=2;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=2;
						(*ptr)+=1;
						ptr-=2;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=6;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=5;
					}
					ptr-=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=5;
						(*ptr)+=1;
						ptr-=4;
						(*ptr)+=1;
						ptr-=1;
					}
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=1;
					(*ptr)+=1;
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=1;
					(*ptr)-=1;
					ptr+=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=5;
						(*ptr)+=1;
						ptr+=5;
					}
					ptr-=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=5;
						(*ptr)+=1;
						ptr-=6;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)+=1;
								ptr+=2;
							}
							ptr-=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)+=1;
								ptr+=2;
								(*ptr)+=1;
								ptr-=4;
							}
							(*ptr)+=1;
							ptr+=9;
						}
						ptr-=8;
						while (*ptr) {
							ptr-=9;
						}
					}
					ptr+=9;
					while (*ptr) {
						ptr+=9;
					}
					ptr-=9;
					while (*ptr) {
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=9;
							(*ptr)+=1;
							ptr-=9;
						}
						ptr-=10;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=9;
						(*ptr)+=1;
						ptr-=9;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=1;
					(*ptr)-=1;
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=1;
						while (*ptr) {
							ptr-=1;
							(*ptr)-=1;
							ptr+=1;
							(*ptr)-=1;
							ptr-=6;
							(*ptr)+=1;
							ptr+=6;
						}
						ptr-=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=1;
							(*ptr)+=1;
							ptr-=1;
						}
						ptr+=4;
					}
					ptr-=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=3;
						(*ptr)+=1;
						ptr-=3;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=36;
						(*ptr)+=1;
						ptr+=36;
					}
					ptr+=5;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=36;
						(*ptr)+=1;
						ptr+=1;
						ptr+=35;
					}
					ptr+=6;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				(*ptr)+=8;
				(*ptr)+=7;
				while (*ptr) {
					while (*ptr) {
						ptr+=9;
					}
					ptr-=9;
					(*ptr)-=1;
					ptr-=9;
					while (*ptr) {
						ptr-=9;
					}
					ptr+=9;
					(*ptr)-=1;
				}
				(*ptr)+=1;
				while (*ptr) {
					ptr+=8;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=7;
						(*ptr)+=1;
						ptr+=7;
					}
					ptr-=7;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=7;
						(*ptr)+=1;
						ptr-=6;
						(*ptr)+=1;
						ptr-=1;
					}
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=6;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=3;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=4;
				(*ptr)+=1;
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=1;
					(*ptr)-=1;
					ptr-=4;
					(*ptr)+=1;
					ptr+=5;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=6;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=5;
						(*ptr)+=1;
						ptr-=1;
						(*ptr)+=2;
						ptr-=4;
					}
					ptr+=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=5;
					}
					ptr-=1;
					(*ptr)-=1;
					ptr+=1;
					(*ptr)+=1;
					ptr+=1;
				}
				ptr-=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=1;
					(*ptr)+=1;
					ptr-=1;
				}
				ptr-=5;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=5;
					(*ptr)+=1;
					ptr-=5;
				}
				ptr+=6;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr-=6;
				(*ptr)+=1;
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=4;
					(*ptr)-=1;
					ptr+=4;
				}
				(*ptr)+=1;
				ptr-=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=4;
					(*ptr)-=1;
					ptr+=5;
					while (*ptr) {
						ptr+=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=2;
							(*ptr)-=1;
							ptr+=2;
						}
						(*ptr)+=1;
						ptr-=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=2;
							(*ptr)-=1;
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=3;
								(*ptr)+=1;
								ptr+=3;
							}
							ptr-=3;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=3;
								(*ptr)+=1;
								ptr-=12;
								while (*ptr) {
									ptr-=9;
								}
								ptr+=3;
								while (*ptr) {
									(*ptr)-=1;
								}
								(*ptr)+=1;
								ptr+=6;
								while (*ptr) {
									ptr+=9;
								}
								ptr+=1;
								(*ptr)+=1;
								ptr-=1;
							}
						}
						(*ptr)+=1;
						ptr+=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=3;
							(*ptr)-=1;
							ptr+=3;
						}
						(*ptr)+=1;
						ptr-=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=3;
							(*ptr)-=1;
							ptr-=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)+=1;
								ptr+=2;
							}
							ptr-=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)+=1;
								ptr-=11;
								while (*ptr) {
									ptr-=5;
									ptr-=4;
								}
								ptr+=4;
								while (*ptr) {
									(*ptr)-=1;
								}
								(*ptr)+=1;
								ptr+=5;
								while (*ptr) {
									ptr+=9;
								}
								ptr+=1;
								while (*ptr) {
									(*ptr)-=1;
								}
								(*ptr)+=1;
								ptr-=1;
							}
						}
						(*ptr)+=1;
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=1;
							while (*ptr) {
								ptr+=9;
							}
							ptr-=8;
						}
						ptr+=8;
					}
					ptr-=9;
					while (*ptr) {
						ptr-=9;
					}
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=4;
					}
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=4;
						(*ptr)+=1;
						ptr+=5;
						while (*ptr) {
							ptr+=1;
							(*ptr)+=1;
							ptr+=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)-=1;
								ptr+=2;
							}
							ptr-=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)+=1;
								ptr-=2;
							}
							ptr+=8;
						}
						ptr-=5;
						ptr-=3;
						(*ptr)+=1;
						ptr-=1;
						while (*ptr) {
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=5;
								(*ptr)+=1;
								ptr-=4;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=4;
									(*ptr)-=1;
									ptr-=14;
									(*ptr)+=1;
									ptr+=11;
									while (*ptr) {
										(*ptr)-=1;
										ptr+=3;
										(*ptr)+=1;
										ptr-=3;
									}
									ptr-=1;
								}
								ptr+=1;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=3;
									(*ptr)-=1;
									ptr-=9;
									ptr-=5;
									(*ptr)+=1;
									ptr+=11;
								}
								ptr-=2;
							}
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=4;
								(*ptr)+=1;
								ptr-=3;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=3;
									(*ptr)-=1;
									ptr-=14;
									(*ptr)+=1;
									ptr+=11;
								}
								ptr-=1;
							}
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=3;
								(*ptr)+=1;
								ptr-=3;
							}
							ptr-=2;
							ptr-=10;
						}
						ptr+=4;
						while (*ptr) {
							(*ptr)-=1;
						}
						ptr-=4;
					}
					ptr+=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=3;
						(*ptr)+=1;
						ptr+=3;
					}
					ptr-=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=3;
						(*ptr)+=1;
						ptr+=6;
						while (*ptr) {
							ptr+=1;
							(*ptr)+=1;
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=1;
								(*ptr)-=1;
								ptr+=1;
							}
							ptr-=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=1;
								(*ptr)+=1;
								ptr-=1;
							}
							ptr+=8;
						}
						ptr-=3;
						ptr-=5;
						(*ptr)+=1;
						ptr-=1;
						while (*ptr) {
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=5;
								(*ptr)+=1;
								ptr-=3;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=3;
									(*ptr)-=1;
									ptr-=14;
									(*ptr)+=1;
									ptr+=10;
									while (*ptr) {
										(*ptr)-=1;
										ptr+=4;
										(*ptr)+=1;
										ptr-=4;
									}
									ptr+=1;
								}
								ptr-=1;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=4;
									(*ptr)-=1;
									ptr-=7;
									ptr-=7;
									(*ptr)+=1;
									ptr+=10;
								}
								ptr-=1;
							}
							ptr+=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=3;
								(*ptr)+=1;
								ptr-=4;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=4;
									(*ptr)-=1;
									ptr-=14;
									(*ptr)+=1;
									ptr+=10;
								}
								ptr+=1;
							}
							ptr-=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=4;
								(*ptr)+=1;
								ptr-=4;
							}
							ptr-=11;
						}
						ptr+=6;
						(*ptr)+=1;
						ptr-=6;
					}
				}
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=4;
					(*ptr)+=1;
					ptr+=4;
				}
				ptr-=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=4;
					(*ptr)+=1;
					ptr+=5;
					while (*ptr) {
						ptr+=9;
					}
					ptr-=9;
					while (*ptr) {
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=5;
							(*ptr)+=1;
							ptr-=4;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=4;
								(*ptr)-=1;
								ptr-=14;
								(*ptr)+=1;
								ptr+=11;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=3;
									(*ptr)+=1;
									ptr-=3;
								}
								ptr-=1;
							}
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=3;
								(*ptr)-=1;
								ptr-=14;
								(*ptr)+=1;
								ptr+=11;
							}
							ptr-=2;
						}
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=4;
							(*ptr)+=1;
							ptr-=3;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=3;
								(*ptr)-=1;
								ptr-=14;
								(*ptr)+=1;
								ptr+=11;
							}
							ptr-=1;
						}
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=3;
							(*ptr)+=1;
							ptr-=3;
						}
						ptr-=7;
						ptr-=5;
					}
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=2;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=5;
				while (*ptr) {
					ptr+=2;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=6;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=1;
						ptr-=3;
						(*ptr)+=1;
						ptr+=4;
					}
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=4;
						(*ptr)+=1;
						ptr-=3;
						(*ptr)+=1;
						ptr-=1;
					}
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				(*ptr)+=15;
				while (*ptr) {
					while (*ptr) {
						ptr+=9;
					}
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=9;
					while (*ptr) {
						ptr-=9;
					}
					ptr+=9;
					(*ptr)-=1;
				}
				(*ptr)+=1;
				while (*ptr) {
					ptr+=1;
					(*ptr)+=1;
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=1;
					(*ptr)-=1;
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=4;
					}
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=4;
						(*ptr)+=1;
						ptr-=5;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)+=1;
								ptr+=2;
							}
							ptr-=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)+=1;
								ptr+=1;
								(*ptr)+=1;
								ptr-=3;
							}
							(*ptr)+=1;
							ptr+=9;
						}
						ptr-=8;
						while (*ptr) {
							ptr-=9;
						}
					}
					ptr+=9;
					while (*ptr) {
						ptr+=9;
					}
					ptr-=8;
					ptr-=1;
					while (*ptr) {
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=9;
							(*ptr)+=1;
							ptr-=9;
						}
						ptr-=10;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=9;
						(*ptr)+=1;
						ptr-=9;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=1;
					(*ptr)-=1;
					ptr+=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=3;
						(*ptr)+=1;
						ptr+=1;
						while (*ptr) {
							ptr-=1;
							(*ptr)-=1;
							ptr+=1;
							(*ptr)-=1;
							ptr-=7;
							(*ptr)+=1;
							ptr+=7;
						}
						ptr-=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=1;
							(*ptr)+=1;
							ptr-=1;
						}
						ptr+=3;
					}
					ptr-=2;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=2;
						(*ptr)+=1;
						ptr-=2;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=36;
						(*ptr)+=1;
						ptr+=36;
					}
					ptr+=1;
					ptr+=5;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=5;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=4;
				(*ptr)+=15;
				while (*ptr) {
					while (*ptr) {
						ptr+=9;
					}
					ptr-=9;
					(*ptr)-=1;
					ptr-=5;
					ptr-=4;
					while (*ptr) {
						ptr-=9;
					}
					ptr+=9;
					(*ptr)-=1;
				}
				(*ptr)+=1;
				while (*ptr) {
					ptr+=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=3;
						(*ptr)-=1;
						ptr+=3;
					}
					(*ptr)+=1;
					ptr-=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=3;
						(*ptr)-=1;
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=4;
							(*ptr)+=1;
							ptr+=4;
						}
						ptr-=4;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=4;
							(*ptr)+=1;
							ptr-=5;
							ptr-=8;
							while (*ptr) {
								ptr-=9;
							}
							ptr+=4;
							while (*ptr) {
								(*ptr)-=1;
							}
							(*ptr)+=1;
							ptr+=5;
							while (*ptr) {
								ptr+=9;
							}
							ptr+=1;
							(*ptr)+=1;
							ptr-=1;
						}
					}
					(*ptr)+=1;
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)-=1;
						ptr+=4;
					}
					(*ptr)+=1;
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=4;
						(*ptr)-=1;
						ptr-=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=3;
							(*ptr)+=1;
							ptr+=3;
						}
						ptr-=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=3;
							(*ptr)+=1;
							ptr-=12;
							while (*ptr) {
								ptr-=9;
							}
							ptr+=3;
							while (*ptr) {
								(*ptr)-=1;
							}
							(*ptr)+=1;
							ptr+=6;
							while (*ptr) {
								ptr+=9;
							}
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
							}
							(*ptr)+=1;
							ptr-=1;
						}
					}
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=1;
						while (*ptr) {
							ptr+=2;
							ptr+=7;
						}
						ptr-=8;
					}
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=3;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=3;
					(*ptr)+=1;
					ptr+=3;
				}
				ptr-=3;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=3;
					(*ptr)+=1;
					ptr+=6;
					while (*ptr) {
						ptr+=1;
						(*ptr)+=1;
						ptr+=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=3;
							(*ptr)-=1;
							ptr+=3;
						}
						ptr-=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=3;
							(*ptr)+=1;
							ptr-=3;
						}
						ptr+=8;
					}
					ptr-=8;
					(*ptr)+=1;
					ptr-=1;
					while (*ptr) {
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=1;
							(*ptr)+=1;
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=1;
								(*ptr)-=1;
								ptr-=10;
								(*ptr)+=1;
								ptr+=12;
								while (*ptr) {
									(*ptr)-=1;
									ptr-=2;
									(*ptr)+=1;
									ptr+=2;
								}
								ptr-=1;
							}
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)-=1;
								ptr-=10;
								(*ptr)+=1;
								ptr+=12;
							}
							ptr-=3;
						}
						ptr+=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=1;
							(*ptr)+=1;
							ptr+=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)-=1;
								ptr-=10;
								(*ptr)+=1;
								ptr+=12;
							}
							ptr-=1;
						}
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=2;
							(*ptr)+=1;
							ptr+=2;
						}
						ptr-=13;
					}
				}
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=4;
					(*ptr)+=1;
					ptr+=4;
				}
				ptr-=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=4;
					(*ptr)+=1;
					ptr+=5;
					while (*ptr) {
						ptr+=1;
						(*ptr)+=1;
						ptr+=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=2;
							(*ptr)-=1;
							ptr+=2;
						}
						ptr-=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=2;
							(*ptr)+=1;
							ptr-=2;
						}
						ptr+=2;
						ptr+=6;
					}
					ptr-=8;
					(*ptr)+=1;
					ptr-=1;
					while (*ptr) {
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=1;
							(*ptr)+=1;
							ptr+=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)-=1;
								ptr-=10;
								(*ptr)+=1;
								ptr+=11;
								while (*ptr) {
									(*ptr)-=1;
									ptr-=1;
									(*ptr)+=1;
									ptr+=1;
								}
								ptr+=1;
							}
							ptr-=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=1;
								(*ptr)-=1;
								ptr-=10;
								(*ptr)+=1;
								ptr+=4;
								ptr+=7;
							}
							ptr-=2;
						}
						ptr+=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=2;
							(*ptr)+=1;
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=1;
								(*ptr)-=1;
								ptr-=10;
								(*ptr)+=1;
								ptr+=11;
							}
							ptr+=1;
						}
						ptr-=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=1;
							(*ptr)+=1;
							ptr+=1;
						}
						ptr-=12;
					}
					ptr+=5;
					(*ptr)+=1;
					ptr-=5;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=3;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=4;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=3;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=5;
				while (*ptr) {
					ptr+=7;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=5;
						ptr-=1;
						(*ptr)+=1;
						ptr+=6;
					}
					ptr-=6;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=6;
						(*ptr)+=1;
						ptr-=4;
						(*ptr)+=1;
						ptr-=2;
					}
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=4;
				(*ptr)+=1;
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=1;
					(*ptr)-=1;
					ptr-=4;
					(*ptr)+=1;
					ptr+=4;
					ptr+=1;
				}
				ptr+=2;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=7;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=5;
						(*ptr)+=1;
						ptr-=1;
						(*ptr)+=2;
						ptr-=4;
					}
					ptr+=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=5;
						(*ptr)+=1;
						ptr+=5;
					}
					ptr-=1;
					(*ptr)-=1;
					ptr+=1;
					(*ptr)+=1;
					ptr+=2;
				}
				ptr-=2;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=2;
					(*ptr)+=1;
					ptr-=2;
				}
				ptr-=5;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=5;
					(*ptr)+=1;
					ptr-=2;
					ptr-=3;
				}
				(*ptr)+=1;
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=4;
					(*ptr)-=1;
					ptr+=4;
				}
				(*ptr)+=1;
				ptr-=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=4;
					(*ptr)-=1;
					ptr+=5;
					while (*ptr) {
						ptr+=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=3;
							(*ptr)-=1;
							ptr+=3;
						}
						(*ptr)+=1;
						ptr-=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=3;
							(*ptr)-=1;
							ptr-=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)+=1;
								ptr+=2;
							}
							ptr-=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)+=1;
								ptr-=2;
								ptr-=9;
								while (*ptr) {
									ptr-=9;
								}
								ptr+=4;
								while (*ptr) {
									(*ptr)-=1;
								}
								(*ptr)+=1;
								ptr+=5;
								while (*ptr) {
									ptr+=9;
								}
								ptr+=1;
								(*ptr)+=1;
								ptr-=1;
							}
						}
						(*ptr)+=1;
						ptr+=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=2;
							(*ptr)-=1;
							ptr+=2;
						}
						(*ptr)+=1;
						ptr-=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=2;
							(*ptr)-=1;
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=3;
								(*ptr)+=1;
								ptr+=3;
							}
							ptr-=1;
							ptr-=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=3;
								(*ptr)+=1;
								ptr-=12;
								while (*ptr) {
									ptr-=9;
								}
								ptr+=3;
								while (*ptr) {
									(*ptr)-=1;
								}
								(*ptr)+=1;
								ptr+=6;
								while (*ptr) {
									ptr+=9;
								}
								ptr+=1;
								while (*ptr) {
									(*ptr)-=1;
								}
								(*ptr)+=1;
								ptr-=1;
							}
						}
						(*ptr)+=1;
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=1;
							while (*ptr) {
								ptr+=9;
							}
							ptr-=1;
							ptr-=7;
						}
						ptr+=8;
					}
					ptr-=9;
					while (*ptr) {
						ptr-=9;
					}
					ptr+=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=3;
						(*ptr)+=1;
						ptr+=3;
					}
					ptr-=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=3;
						(*ptr)+=1;
						ptr+=6;
						while (*ptr) {
							ptr+=1;
							(*ptr)+=1;
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=1;
								(*ptr)-=1;
								ptr+=1;
							}
							ptr-=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=1;
								(*ptr)+=1;
								ptr-=1;
							}
							ptr+=8;
						}
						ptr-=8;
						(*ptr)+=1;
						ptr-=1;
						while (*ptr) {
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=4;
								(*ptr)+=1;
								ptr-=2;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=2;
									(*ptr)-=1;
									ptr-=13;
									(*ptr)+=1;
									ptr+=10;
									while (*ptr) {
										(*ptr)-=1;
										ptr+=3;
										(*ptr)+=1;
										ptr-=3;
									}
									ptr+=1;
								}
								ptr-=1;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=3;
									(*ptr)-=1;
									ptr-=13;
									(*ptr)+=1;
									ptr+=10;
								}
								ptr-=1;
							}
							ptr+=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)+=1;
								ptr-=3;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=3;
									(*ptr)-=1;
									ptr-=13;
									(*ptr)+=1;
									ptr+=10;
								}
								ptr+=1;
							}
							ptr-=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=3;
								(*ptr)+=1;
								ptr-=3;
							}
							ptr-=11;
						}
						ptr+=5;
						while (*ptr) {
							(*ptr)-=1;
						}
						ptr+=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=7;
							(*ptr)+=1;
							ptr+=7;
						}
						ptr-=7;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=7;
							(*ptr)+=1;
							ptr-=2;
							(*ptr)+=1;
							ptr-=5;
						}
					}
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=1;
						ptr+=3;
					}
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=4;
						(*ptr)+=1;
						ptr+=5;
						while (*ptr) {
							ptr+=1;
							(*ptr)+=1;
							ptr+=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)-=1;
								ptr+=2;
							}
							ptr-=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)+=1;
								ptr-=2;
							}
							ptr+=8;
						}
						ptr-=8;
						(*ptr)+=1;
						ptr-=1;
						while (*ptr) {
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=4;
								(*ptr)+=1;
								ptr-=3;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=3;
									(*ptr)-=1;
									ptr-=13;
									(*ptr)+=1;
									ptr+=11;
									while (*ptr) {
										(*ptr)-=1;
										ptr+=2;
										(*ptr)+=1;
										ptr-=2;
									}
									ptr-=1;
								}
								ptr+=1;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=2;
									(*ptr)-=1;
									ptr-=13;
									(*ptr)+=1;
									ptr+=11;
								}
								ptr-=2;
							}
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=3;
								(*ptr)+=1;
								ptr-=2;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=2;
									(*ptr)-=1;
									ptr-=13;
									(*ptr)+=1;
									ptr+=11;
								}
								ptr-=1;
							}
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)+=1;
								ptr-=2;
							}
							ptr-=12;
						}
					}
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=4;
				}
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=4;
					(*ptr)+=1;
					ptr+=2;
					ptr+=2;
				}
				ptr-=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=4;
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=2;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=7;
						(*ptr)+=1;
						ptr+=7;
					}
					ptr-=7;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=7;
						(*ptr)+=1;
						ptr-=2;
						(*ptr)+=1;
						ptr-=5;
					}
					ptr+=9;
					while (*ptr) {
						ptr+=6;
						ptr+=3;
					}
					ptr-=9;
					while (*ptr) {
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=4;
							(*ptr)+=1;
							ptr-=3;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=3;
								(*ptr)-=1;
								ptr-=13;
								(*ptr)+=1;
								ptr+=11;
								while (*ptr) {
									(*ptr)-=1;
									ptr+=2;
									(*ptr)+=1;
									ptr-=2;
								}
								ptr-=1;
							}
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)-=1;
								ptr-=8;
								ptr-=5;
								(*ptr)+=1;
								ptr+=11;
							}
							ptr-=2;
						}
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=3;
							(*ptr)+=1;
							ptr-=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)-=1;
								ptr-=13;
								(*ptr)+=1;
								ptr+=11;
							}
							ptr-=1;
						}
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=2;
							(*ptr)+=1;
							ptr-=2;
						}
						ptr-=8;
						ptr-=4;
					}
				}
				ptr+=9;
				while (*ptr) {
					ptr+=2;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=6;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=3;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=5;
				while (*ptr) {
					ptr+=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=4;
					}
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=4;
						(*ptr)+=1;
						ptr-=3;
						(*ptr)+=1;
						ptr-=1;
					}
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=6;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=5;
						(*ptr)+=1;
						ptr+=5;
					}
					ptr-=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=5;
						(*ptr)+=1;
						ptr-=3;
						(*ptr)+=1;
						ptr-=2;
					}
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				(*ptr)+=15;
				while (*ptr) {
					while (*ptr) {
						ptr+=4;
						ptr+=5;
					}
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=9;
					while (*ptr) {
						ptr-=9;
					}
					ptr+=9;
					(*ptr)-=1;
				}
				(*ptr)+=1;
				while (*ptr) {
					ptr+=1;
					(*ptr)+=1;
					ptr+=2;
					ptr+=6;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=1;
					(*ptr)-=1;
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=4;
					}
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=4;
						(*ptr)+=1;
						ptr-=5;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=2;
								(*ptr)+=1;
								ptr+=2;
							}
							ptr-=2;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=2;
								(*ptr)+=1;
								ptr+=2;
								(*ptr)+=1;
								ptr-=4;
							}
							(*ptr)+=1;
							ptr+=9;
						}
						ptr-=8;
						while (*ptr) {
							ptr-=9;
						}
					}
					ptr+=9;
					while (*ptr) {
						ptr+=9;
					}
					ptr-=9;
					while (*ptr) {
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=9;
							(*ptr)+=1;
							ptr-=9;
						}
						ptr-=10;
					}
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=9;
						(*ptr)+=1;
						ptr-=9;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=1;
					(*ptr)-=1;
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=1;
						while (*ptr) {
							ptr-=1;
							(*ptr)-=1;
							ptr+=1;
							(*ptr)-=1;
							ptr-=6;
							(*ptr)+=1;
							ptr+=6;
						}
						ptr-=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=1;
							(*ptr)+=1;
							ptr-=1;
						}
						ptr+=4;
					}
					ptr-=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=3;
						(*ptr)+=1;
						ptr-=3;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=1;
					(*ptr)+=1;
					ptr+=8;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=1;
					(*ptr)-=1;
					ptr+=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=5;
						(*ptr)+=1;
						ptr+=5;
					}
					ptr-=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=5;
						(*ptr)+=1;
						ptr-=4;
						ptr-=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=3;
							while (*ptr) {
								(*ptr)-=1;
								ptr-=3;
								(*ptr)+=1;
								ptr+=3;
							}
							ptr-=3;
							while (*ptr) {
								(*ptr)-=1;
								ptr+=3;
								(*ptr)+=1;
								ptr+=1;
								(*ptr)+=1;
								ptr-=4;
							}
							(*ptr)+=1;
							ptr+=9;
						}
						ptr-=8;
						while (*ptr) {
							ptr-=9;
						}
					}
					ptr+=9;
					while (*ptr) {
						ptr+=6;
						ptr+=3;
					}
					ptr-=9;
					while (*ptr) {
						ptr+=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=9;
							(*ptr)+=1;
							ptr-=9;
						}
						ptr-=11;
					}
					ptr+=2;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=9;
						(*ptr)+=1;
						ptr-=9;
					}
					ptr-=2;
					(*ptr)+=1;
					ptr+=3;
					ptr+=5;
				}
				ptr-=9;
				while (*ptr) {
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=1;
					(*ptr)-=1;
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)+=1;
						ptr+=1;
						while (*ptr) {
							ptr-=1;
							(*ptr)-=1;
							ptr+=1;
							(*ptr)-=1;
							ptr-=6;
							(*ptr)+=1;
							ptr+=6;
						}
						ptr-=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=1;
							(*ptr)+=1;
							ptr-=1;
						}
						ptr+=4;
					}
					ptr-=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=3;
						(*ptr)+=1;
						ptr-=3;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=36;
						(*ptr)+=1;
						ptr+=17;
						ptr+=19;
					}
					ptr+=5;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				(*ptr)+=15;
				while (*ptr) {
					while (*ptr) {
						ptr+=8;
						ptr+=1;
					}
					ptr-=9;
					(*ptr)-=1;
					ptr-=9;
					while (*ptr) {
						ptr-=9;
					}
					ptr+=9;
					(*ptr)-=1;
				}
				(*ptr)+=1;
				ptr+=21;
				(*ptr)+=1;
				ptr-=3;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=3;
						(*ptr)-=1;
						ptr+=3;
					}
					(*ptr)+=1;
					ptr-=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=3;
						(*ptr)-=1;
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=4;
							(*ptr)+=1;
							ptr+=4;
						}
						ptr-=4;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=4;
							(*ptr)+=1;
							ptr-=13;
							while (*ptr) {
								ptr-=9;
							}
							ptr+=4;
							while (*ptr) {
								(*ptr)-=1;
							}
							(*ptr)+=1;
							ptr+=5;
							while (*ptr) {
								ptr+=9;
							}
							ptr+=1;
							(*ptr)+=1;
							ptr-=1;
						}
					}
					(*ptr)+=1;
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)-=1;
						ptr+=4;
					}
					(*ptr)+=1;
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=4;
						(*ptr)-=1;
						ptr-=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=3;
							(*ptr)+=1;
							ptr+=3;
						}
						ptr-=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=3;
							(*ptr)+=1;
							ptr-=1;
							ptr-=11;
							while (*ptr) {
								ptr-=9;
							}
							ptr+=3;
							while (*ptr) {
								(*ptr)-=1;
							}
							(*ptr)+=1;
							ptr+=6;
							while (*ptr) {
								ptr+=9;
							}
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
							}
							(*ptr)+=1;
							ptr-=1;
						}
					}
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=1;
						while (*ptr) {
							ptr+=9;
						}
						ptr-=8;
					}
					ptr+=1;
					ptr+=7;
				}
				ptr-=9;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=2;
				(*ptr)-=1;
				ptr+=2;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=4;
					(*ptr)+=1;
					ptr+=4;
				}
				ptr-=4;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=4;
					(*ptr)+=1;
					ptr-=2;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=2;
				}
				ptr+=2;
			}
			ptr-=2;
			(*ptr)+=1;
			ptr+=4;
			while (*ptr) {
				(*ptr)-=1;
				ptr-=4;
				(*ptr)-=1;
				ptr+=4;
			}
			(*ptr)+=1;
			ptr-=4;
			while (*ptr) {
				(*ptr)-=1;
				ptr+=4;
				(*ptr)-=1;
				ptr-=6;
				printf("%c", *ptr);
				ptr+=2;
			}
			ptr+=4;
			while (*ptr) {
				(*ptr)-=1;
				ptr-=7;
				printf("%c", *ptr);
				ptr+=7;
			}
			ptr-=3;
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr+=1;
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr+=1;
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr+=1;
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr+=1;
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr+=1;
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr+=3;
			while (*ptr) {
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=3;
			}
			ptr-=9;
			while (*ptr) {
				ptr-=9;
			}
			ptr+=9;
			while (*ptr) {
				ptr+=5;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=4;
			}
			ptr-=9;
			while (*ptr) {
				ptr-=9;
			}
			ptr+=1;
			(*ptr)+=11;
			while (*ptr) {
				(*ptr)-=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=9;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr+=9;
			}
			ptr+=4;
			(*ptr)+=1;
			ptr+=9;
			(*ptr)+=1;
			ptr-=8;
			ptr-=6;
			while (*ptr) {
				ptr-=9;
			}
			ptr+=7;
			while (*ptr) {
				(*ptr)-=1;
				ptr-=7;
				(*ptr)+=1;
				ptr+=7;
			}
			ptr-=7;
			while (*ptr) {
				(*ptr)-=1;
				ptr+=7;
				(*ptr)+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr+=2;
				while (*ptr) {
					ptr+=9;
				}
				ptr-=5;
				ptr-=4;
				while (*ptr) {
					ptr+=7;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=6;
						(*ptr)+=1;
						ptr+=6;
					}
					ptr-=6;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=6;
						(*ptr)+=1;
						ptr-=7;
						while (*ptr) {
							ptr-=9;
						}
						ptr+=7;
						while (*ptr) {
							(*ptr)-=1;
						}
						(*ptr)+=1;
						ptr+=3;
					}
					ptr-=4;
					ptr-=6;
				}
			}
			ptr+=7;
			while (*ptr) {
				(*ptr)-=1;
				ptr-=7;
				(*ptr)+=1;
				ptr+=7;
			}
			ptr-=7;
			while (*ptr) {
				(*ptr)-=1;
				ptr+=7;
				(*ptr)+=1;
				ptr+=2;
				while (*ptr) {
					ptr+=1;
					(*ptr)+=1;
					ptr+=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=4;
						(*ptr)-=1;
						ptr+=4;
					}
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=3;
						ptr+=1;
						(*ptr)+=1;
						ptr-=4;
					}
					ptr+=8;
				}
				ptr-=2;
				(*ptr)+=1;
				ptr-=7;
				while (*ptr) {
					ptr+=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=2;
						(*ptr)+=1;
						ptr-=2;
					}
					ptr-=14;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=9;
				}
				ptr-=5;
				ptr-=4;
				while (*ptr) {
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=1;
					(*ptr)-=1;
					ptr+=7;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=7;
						(*ptr)+=1;
						ptr+=1;
						while (*ptr) {
							ptr-=1;
							(*ptr)-=1;
							ptr+=1;
							(*ptr)-=1;
							ptr-=3;
							(*ptr)+=1;
							ptr+=3;
						}
						ptr-=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=1;
							(*ptr)+=1;
							ptr-=1;
						}
						ptr+=7;
					}
					ptr-=6;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=6;
						(*ptr)+=1;
						ptr-=6;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr+=7;
				(*ptr)-=1;
				ptr-=4;
				while (*ptr) {
					(*ptr)-=1;
				}
				(*ptr)+=1;
				ptr-=3;
			}
			(*ptr)+=1;
			ptr+=7;
			while (*ptr) {
				(*ptr)-=1;
				ptr-=7;
				(*ptr)-=1;
				ptr+=7;
			}
			(*ptr)+=1;
			ptr-=7;
			while (*ptr) {
				(*ptr)-=1;
				ptr+=7;
				(*ptr)-=1;
				ptr+=2;
				while (*ptr) {
					ptr+=2;
					ptr+=3;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=2;
						(*ptr)+=1;
						ptr-=2;
					}
					ptr+=4;
				}
				ptr-=9;
				while (*ptr) {
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
					}
					ptr-=1;
					(*ptr)-=1;
					ptr+=7;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=7;
						(*ptr)+=1;
						ptr+=1;
						while (*ptr) {
							ptr-=1;
							(*ptr)-=1;
							ptr+=1;
							(*ptr)-=1;
							ptr-=3;
							(*ptr)+=1;
							ptr+=3;
						}
						ptr-=1;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=1;
							(*ptr)+=1;
							ptr-=1;
						}
						ptr+=7;
					}
					ptr-=2;
					ptr-=4;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=6;
						(*ptr)+=1;
						ptr-=6;
					}
					ptr-=1;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr+=1;
				(*ptr)+=5;
				while (*ptr) {
					(*ptr)-=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=9;
						(*ptr)+=1;
						ptr-=9;
					}
					ptr+=9;
				}
				ptr+=4;
				(*ptr)+=1;
				ptr-=3;
				ptr-=2;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=9;
				while (*ptr) {
					ptr+=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=5;
						(*ptr)-=1;
						ptr+=5;
					}
					(*ptr)+=1;
					ptr-=5;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=5;
						(*ptr)-=1;
						ptr+=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=7;
							(*ptr)+=1;
							ptr+=7;
						}
						ptr-=4;
						ptr-=3;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=7;
							(*ptr)+=1;
							ptr-=16;
							while (*ptr) {
								ptr-=9;
							}
							ptr+=4;
							while (*ptr) {
								(*ptr)-=1;
							}
							(*ptr)+=1;
							ptr+=5;
							while (*ptr) {
								ptr+=9;
							}
							ptr+=1;
							(*ptr)+=1;
							ptr-=1;
						}
					}
					(*ptr)+=1;
					ptr+=7;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=1;
						ptr-=6;
						(*ptr)-=1;
						ptr+=7;
					}
					(*ptr)+=1;
					ptr-=7;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=7;
						(*ptr)-=1;
						ptr-=2;
						while (*ptr) {
							(*ptr)-=1;
							ptr-=5;
							(*ptr)+=1;
							ptr+=5;
						}
						ptr-=5;
						while (*ptr) {
							(*ptr)-=1;
							ptr+=5;
							(*ptr)+=1;
							ptr-=14;
							while (*ptr) {
								ptr-=3;
								ptr-=6;
							}
							ptr+=3;
							while (*ptr) {
								(*ptr)-=1;
							}
							(*ptr)+=1;
							ptr+=6;
							while (*ptr) {
								ptr+=9;
							}
							ptr+=1;
							while (*ptr) {
								(*ptr)-=1;
							}
							(*ptr)+=1;
							ptr-=1;
						}
					}
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=1;
						while (*ptr) {
							ptr+=9;
						}
						ptr-=8;
					}
					ptr+=8;
				}
				ptr-=7;
				ptr-=2;
				while (*ptr) {
					ptr-=9;
				}
				ptr+=4;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr-=3;
				(*ptr)+=5;
				while (*ptr) {
					(*ptr)-=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=9;
						(*ptr)+=1;
						ptr-=9;
					}
					ptr+=9;
				}
				ptr+=4;
				(*ptr)-=1;
				ptr-=5;
				while (*ptr) {
					ptr-=7;
					ptr-=2;
				}
			}
			ptr+=3;
		}
		ptr-=4;
		printf("%c", *ptr);
		ptr+=10;
		while (*ptr) {
			ptr+=6;
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr+=3;
		}
		ptr-=9;
		while (*ptr) {
			ptr-=9;
		}
		ptr+=1;
		(*ptr)+=10;
		while (*ptr) {
			(*ptr)-=1;
			while (*ptr) {
				(*ptr)-=1;
				ptr+=8;
				ptr+=1;
				(*ptr)+=1;
				ptr-=9;
			}
			ptr+=9;
		}
		ptr+=5;
		(*ptr)+=1;
		ptr+=9;
		(*ptr)+=1;
		ptr-=15;
		while (*ptr) {
			ptr-=9;
		}
		ptr+=8;
		while (*ptr) {
			(*ptr)-=1;
			ptr-=6;
			ptr-=2;
			(*ptr)+=1;
			ptr+=8;
		}
		ptr-=8;
		while (*ptr) {
			(*ptr)-=1;
			ptr+=8;
			(*ptr)+=1;
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr+=1;
			while (*ptr) {
				ptr+=9;
			}
			ptr-=9;
			while (*ptr) {
				ptr+=8;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=7;
					(*ptr)+=1;
					ptr+=6;
					ptr+=1;
				}
				ptr-=7;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=7;
					(*ptr)+=1;
					ptr-=8;
					while (*ptr) {
						ptr-=9;
					}
					ptr+=8;
					while (*ptr) {
						(*ptr)-=1;
					}
					(*ptr)+=1;
					ptr+=2;
				}
				ptr-=10;
			}
		}
		ptr+=8;
		while (*ptr) {
			(*ptr)-=1;
			ptr-=5;
			ptr-=3;
			(*ptr)+=1;
			ptr+=8;
		}
		ptr-=8;
		while (*ptr) {
			(*ptr)-=1;
			ptr+=8;
			(*ptr)+=1;
			ptr+=1;
			while (*ptr) {
				ptr+=1;
				(*ptr)+=1;
				ptr+=5;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=5;
					(*ptr)-=1;
					ptr+=5;
				}
				ptr-=5;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=5;
					(*ptr)+=1;
					ptr-=5;
				}
				ptr+=6;
				ptr+=2;
			}
			ptr-=1;
			(*ptr)+=1;
			ptr-=8;
			while (*ptr) {
				ptr+=6;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=2;
					(*ptr)+=1;
					ptr-=2;
				}
				ptr-=15;
			}
			ptr+=9;
			while (*ptr) {
				ptr+=9;
			}
			ptr-=9;
			while (*ptr) {
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr-=1;
				(*ptr)-=1;
				ptr+=8;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=8;
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						ptr-=1;
						(*ptr)-=1;
						ptr+=1;
						(*ptr)-=1;
						ptr-=2;
						(*ptr)+=1;
						ptr+=2;
					}
					ptr-=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=1;
						(*ptr)+=1;
						ptr-=1;
					}
					ptr+=8;
				}
				ptr-=7;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=7;
					(*ptr)+=1;
					ptr-=7;
				}
				ptr-=1;
				(*ptr)+=1;
				ptr-=6;
				ptr-=3;
			}
			ptr+=8;
			(*ptr)-=1;
			ptr-=5;
			while (*ptr) {
				(*ptr)-=1;
			}
			(*ptr)+=1;
			ptr-=3;
		}
		(*ptr)+=1;
		ptr+=8;
		while (*ptr) {
			(*ptr)-=1;
			ptr-=8;
			(*ptr)-=1;
			ptr+=8;
		}
		(*ptr)+=1;
		ptr-=8;
		while (*ptr) {
			(*ptr)-=1;
			ptr+=8;
			(*ptr)-=1;
			ptr+=1;
			while (*ptr) {
				ptr+=3;
				ptr+=3;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=2;
					(*ptr)+=1;
					ptr-=2;
				}
				ptr+=3;
			}
			ptr-=9;
			while (*ptr) {
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
				}
				ptr-=1;
				(*ptr)-=1;
				ptr+=8;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=8;
					(*ptr)+=1;
					ptr+=1;
					while (*ptr) {
						ptr-=1;
						(*ptr)-=1;
						ptr+=1;
						(*ptr)-=1;
						ptr-=2;
						(*ptr)+=1;
						ptr+=2;
					}
					ptr-=1;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=1;
						(*ptr)+=1;
						ptr-=1;
					}
					ptr+=8;
				}
				ptr-=2;
				ptr-=5;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=7;
					(*ptr)+=1;
					ptr-=7;
				}
				ptr-=1;
				(*ptr)+=1;
				ptr-=9;
			}
			ptr+=1;
			(*ptr)+=5;
			while (*ptr) {
				(*ptr)-=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=9;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr+=9;
			}
			ptr+=5;
			(*ptr)+=1;
			ptr+=27;
			(*ptr)+=1;
			ptr-=6;
			while (*ptr) {
				ptr-=9;
			}
			ptr+=9;
			while (*ptr) {
				ptr+=6;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=6;
					(*ptr)-=1;
					ptr+=6;
				}
				(*ptr)+=1;
				ptr-=1;
				ptr-=5;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=6;
					(*ptr)-=1;
					ptr+=2;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=8;
						(*ptr)+=1;
						ptr+=8;
					}
					ptr-=8;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=8;
						(*ptr)+=1;
						ptr-=17;
						while (*ptr) {
							ptr-=7;
							ptr-=2;
						}
						ptr+=4;
						while (*ptr) {
							(*ptr)-=1;
						}
						(*ptr)+=1;
						ptr+=5;
						while (*ptr) {
							ptr+=9;
						}
						ptr+=1;
						(*ptr)+=1;
						ptr-=1;
					}
				}
				(*ptr)+=1;
				ptr+=8;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=8;
					(*ptr)-=1;
					ptr+=8;
				}
				(*ptr)+=1;
				ptr-=8;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=8;
					(*ptr)-=1;
					ptr-=2;
					while (*ptr) {
						(*ptr)-=1;
						ptr-=6;
						(*ptr)+=1;
						ptr+=6;
					}
					ptr-=6;
					while (*ptr) {
						(*ptr)-=1;
						ptr+=6;
						(*ptr)+=1;
						ptr-=15;
						while (*ptr) {
							ptr-=9;
						}
						ptr+=3;
						while (*ptr) {
							(*ptr)-=1;
						}
						(*ptr)+=1;
						ptr+=6;
						while (*ptr) {
							ptr+=6;
							ptr+=3;
						}
						ptr+=1;
						while (*ptr) {
							(*ptr)-=1;
						}
						(*ptr)+=1;
						ptr-=1;
					}
				}
				(*ptr)+=1;
				ptr+=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr-=1;
					while (*ptr) {
						ptr+=9;
					}
					ptr-=8;
				}
				ptr+=8;
			}
			ptr-=9;
			while (*ptr) {
				ptr-=9;
			}
			ptr+=4;
			while (*ptr) {
				(*ptr)-=1;
			}
			ptr-=3;
			(*ptr)+=4;
			(*ptr)+=1;
			while (*ptr) {
				(*ptr)-=1;
				while (*ptr) {
					(*ptr)-=1;
					ptr+=9;
					(*ptr)+=1;
					ptr-=9;
				}
				ptr+=9;
			}
			ptr+=5;
			(*ptr)-=1;
			ptr+=27;
			(*ptr)-=1;
			ptr-=6;
			while (*ptr) {
				ptr-=4;
				ptr-=5;
			}
		}
		ptr+=3;
	}

	return 0;
}