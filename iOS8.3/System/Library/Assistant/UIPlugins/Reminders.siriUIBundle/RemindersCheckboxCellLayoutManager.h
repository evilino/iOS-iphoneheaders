/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:07:00 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Reminders.siriUIBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UITableViewCellLayoutManager.h>

@interface RemindersCheckboxCellLayoutManager : UITableViewCellLayoutManager {

	id _realLayoutManager;

}
+(id)sharedLayoutManager;
-(CGRect)reorderControlStartingRectForCell:(id)arg1 forNewEditingState:(char)arg2 ;
-(CGRect)reorderControlEndingRectForCell:(id)arg1 forNewEditingState:(char)arg2 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(char)arg2 ;
-(char)editControlShouldFadeForCell:(id)arg1 ;
-(char)reorderControlShouldFadeForCell:(id)arg1 ;
-(CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(char)arg2 ;
@end
