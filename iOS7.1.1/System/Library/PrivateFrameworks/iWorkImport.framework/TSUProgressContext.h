/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSUProgressStage, NSDate;

@interface TSUProgressContext : NSObject {

	TSUProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	double m_lastProgressReport;

}
-(void)dealloc;
-(id)init;
-(id)currentStage;
-(void)reportProgress:(double)arg1 overallProgress:(double)arg2 ;
-(void)setProgress:(double)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)reset;
-(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 ;
-(void)endStage;
-(void)advanceProgress:(double)arg1 ;
-(double)currentPosition;
-(void)addProgressObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeProgressObserver:(id)arg1 ;
-(void)setPercentageProgressFromCPProgressContext:(double)arg1 ;
-(double)overallProgress;
-(id)addProgressObserverBlock:(/*^block*/ id)arg1 ;
-(void)createStageWithSteps:(double)arg1 ;
-(void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1 ;
@end
