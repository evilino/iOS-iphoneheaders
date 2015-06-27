/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface ICEResultQuery : NSObject {

	unsigned long callID;
	tagCONNRESULT* result;
	char isQueryAnswered;

}

@property (assign) tagCONNRESULT* result; 
@property (assign) unsigned long callID; 
@property (assign) char isQueryAnswered; 
-(void)dealloc;
-(tagCONNRESULT*)result;
-(id)initWithResult:(tagCONNRESULT*)arg1 ;
-(id)initWithCallID:(unsigned long)arg1 ;
-(void)setResult:(tagCONNRESULT*)arg1 ;
-(unsigned long)callID;
-(void)setCallID:(unsigned long)arg1 ;
-(char)isQueryAnswered;
-(void)setIsQueryAnswered:(char)arg1 ;
@end
