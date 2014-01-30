/*
 * FFTWrapper.h
 *
 *  Created on: Jan 30, 2014
 *      Author: chinmay
 */

#ifndef FFTWRAPPER_H_
#define FFTWRAPPER_H_

#include <fftw.h>


class FFTWrapper {

private:
	int N;
	fftw_real in[N];
	fftw_real out[N];
	fftw_real power_spectrum[N/2 + 1];
	rfftw_plan fft_plan;
	int k;

public:
	FFTWrapper(int NPassed);
	virtual ~FFTWrapper();
	void fftCreatePlan();
	void runFFT(fftw_real inPassed);
	void fftDestroyPlan();

};

#endif /* FFTWRAPPER_H_ */

I LOVE POOJA! :p
