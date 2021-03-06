/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableSet;

@interface SBKnownWidgetsStore : NSObject {

	NSMutableSet* _knownWidgets;

}
+(id)sharedStore;
-(id)_knownWidgetsFilePath;
-(id)_defaultWidgets;
-(BOOL)isWidgetKnown:(id)arg1 ;
-(void)setWidgetAsKnown:(id)arg1 ;
-(void)clearKnownWidgets;
-(void)saveWidgetsState;
-(void)dealloc;
-(id)init;
@end

