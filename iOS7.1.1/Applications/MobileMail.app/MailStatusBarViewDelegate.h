/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MailStatusBarViewDelegate
@required
-(id)statusWithCount:(int*)arg1 total:(int*)arg2 progress:(float*)arg3 state:(unsigned*)arg4;
-(id)updatedSubtitleString;
-(void)statusBarView:(id)arg1 stateDidChange:(unsigned)arg2;
-(int)interfaceOrientation;
-(id)lastUpdated;
@end

