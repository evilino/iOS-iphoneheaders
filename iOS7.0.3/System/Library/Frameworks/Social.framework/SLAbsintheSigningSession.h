/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@class NSString;

@interface SLAbsintheSigningSession : NSObject {

	NACContextOpaque_Ref _context;
	NSString* _certURL;
	NSString* _sessionURL;

}
-(id)_urlEncodedString:(id)arg1 ;
-(id)initWithCertURL:(id)arg1 sessionURL:(id)arg2 ;
-(BOOL)establish;
-(id)signatureForData:(id)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
@end
