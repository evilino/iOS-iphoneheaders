/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSURegressionModel.h>

@class NSMutableArray;

@interface TSUExponentialRegressionModel : TSURegressionModel {

	double* mCoefficients;
	int mNumCoefficients;
	BOOL mAffine;
	double mIntercept;
	double mRSquared;
	int mNumSuperscriptRanges;
	NSMutableArray* mSuperscriptRangesArray;

}
-(id)initWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 makeAffine:(BOOL)arg5 desiredIntercept:(double)arg6 ;
-(id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 ;
-(id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5 ;
-(int)regressionType;
-(int)numCoefficients;
-(double)coefficientAtIndex:(int)arg1 ;
-(double)rSquared;
-(double)estimateForX:(double*)arg1 ;
-(id)getEquationStringAndBuildSuperscriptRangesArray;
-(int)numSuperscriptRanges;
-(NSRange)superscriptRangeAtIndex:(int)arg1 ;
-(void)dealloc;
@end

