/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CRRecentContactsLibrary;

@interface MailboxFrecencyController : NSObject {

	CRRecentContactsLibrary* _library;

}
+(id)sharedInstance;
-(void)recordEventWithMailboxURLString:(id)arg1 ;
-(id)_rankedMailboxURLs;
-(id)orderedMailboxUidsForAccount:(id)arg1 ;
-(id)orderedArrayOfSources:(id)arg1 ;
-(void)dealloc;
-(BOOL)shouldHideNotesForAccount:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
@end
