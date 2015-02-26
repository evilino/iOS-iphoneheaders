/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDCanvasZoomTrackerDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSDCanvasLayer, NSObject;

@interface TSDCanvasZoomTracker : NSObject {

	TSDCanvasLayer* mCanvasLayer;
	NSObject*<TSDCanvasZoomTrackerDelegate> mDelegate;
	BOOL mAlwaysUsesTranslationSprings;
	BOOL mSnapsViewScale;
	BOOL mAnimateTransform;
	CGAffineTransform mSavedTransform;
	CGPoint mZoomOrigin;
	BOOL mHasGestureOrigin;
	CGPoint mGestureOrigin;
	CGPoint mGestureOffset;
	CGPoint mSavedContentOffset;
	BOOL mIsZooming;
	unsigned long long mZoomVelocitySampleCount;
	double mZoomVelocity;
	double mZoomStartTime;
	BOOL mIsShowingZoomHUD;

}

@property (assign,nonatomic,__weak) NSObject*<TSDCanvasZoomTrackerDelegate> delegate; 
@property (assign,nonatomic) BOOL alwaysUsesTranslationSprings; 
@property (assign,nonatomic) BOOL snapsViewScale; 
@property (assign,nonatomic) BOOL animateTransform; 
-(BOOL)snapsViewScale;
-(BOOL)alwaysUsesTranslationSprings;
-(BOOL)animateTransform;
-(void)p_finishZoomWithFinalScaleFactor:(double)arg1 contentOffset:(CGPoint)arg2 ;
-(id)initWithCanvasLayer:(id)arg1 ;
-(void)zoomWithScale:(double)arg1 velocity:(double)arg2 locationInView:(CGPoint)arg3 phase:(int)arg4 ;
-(void)setAlwaysUsesTranslationSprings:(BOOL)arg1 ;
-(void)setSnapsViewScale:(BOOL)arg1 ;
-(void)setAnimateTransform:(BOOL)arg1 ;
-(void)setDelegate:(NSObject*<TSDCanvasZoomTrackerDelegate>)arg1 ;
-(NSObject*<TSDCanvasZoomTrackerDelegate>)delegate;
@end
