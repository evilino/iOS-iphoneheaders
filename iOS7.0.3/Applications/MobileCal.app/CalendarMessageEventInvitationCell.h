/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/CalendarMessageCell.h>

@class NSString;

@interface CalendarMessageEventInvitationCell : CalendarMessageCell {

	NSString* _subtitle;
	NSString* _thirdTitle;

}
+(id)titleForNotification:(id)arg1 ;
+(id)subtitleForNotification:(id)arg1 ;
+(id)thirdTitleForNotification:(id)arg1 ;
+(id)fourthTitleForNotification:(id)arg1 ;
+(int)messageCellTypeForNotification:(id)arg1 ;
+(BOOL)showAsCancelledOrDeclinedForNotification:(id)arg1 ;
+(BOOL)notificationIsCancelled:(id)arg1 ;
+(BOOL)notificationIsInvite:(id)arg1 ;
-(id)thirdTitle;
-(id)subtitle;
-(void)setNotification:(id)arg1 ;
-(void).cxx_destruct;
@end
