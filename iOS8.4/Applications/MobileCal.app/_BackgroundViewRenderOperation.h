/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSMutableSet, LargeMonthWeekOccurrencesView;

@interface _BackgroundViewRenderOperation : NSOperation {

	NSMutableSet* _views;
	LargeMonthWeekOccurrencesView* _view;

}

@property (readonly) LargeMonthWeekOccurrencesView * view;              //@synthesize view=_view - In the implementation block
-(id)initWithView:(id)arg1 views:(id)arg2 ;
-(LargeMonthWeekOccurrencesView *)view;
-(void)main;
@end
