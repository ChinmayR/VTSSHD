/*
 * FFTWrapper.cpp
 *
 *  Created on: Jan 30, 2014
 *      Author: chinmay
 */

#include "FFTWrapper.h"


FFTWrapper::FFTWrapper(int NPassedIn) {
	// TODO Auto-generated constructor stub
	FFTWrapper::N = NPassed;
}

FFTWrapper::~FFTWrapper() {
	// TODO Auto-generated destructor stub
}

void FFTWrapper::fftCreatePlan() {
	cout << "Creating FFT Plan!" << endl;
	FFTWrapper::fft_plan = rfftw_create_plan(N, FFTW_REAL_TO_COMPLEX, FFTW_ESTIMATE);
	cout << "Done Creating FFT Plan!" << endl;
}

void FFTWrapper::fftDestroyPlan() {
	cout << "Destroying FFT Plan!" << endl;
	rfftw_destroy_plan(FFTWrapper::fft_plan);
	cout << "Done Destroying FFT Plan!" << endl;
}

void FFTWrapper::runFFT(fftw_real inPassed) {
	cout << "Running FFT on Data!" << endl;

	cout << "Done Running FFT on Data!" << endl;
	/*
	FFTWrapper::in = inPassed;
	fftw_one(fft_plan, in, out);
	power_spectrum[0] = out[0]*out[0];
	for (k = 1; k < (N+1)/2; ++k)
	     power_spectrum[k] = out[k]*out[k] + out[N-k]*out[N-k];
	if (N % 2 == 0)
	     power_spectrum[N/2] = out[N/2]*out[N/2];
	*/
}
