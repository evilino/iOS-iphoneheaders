/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/iOS Diagnostics.app/iOS Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBSServerDelegate;
@class NSDictionary;

@interface MBSServer : NSObject {

	NSDictionary* _serverConfigDictionary;
	<MBSServerDelegate>* _delegate;
	int _status;

}

@property (retain) NSDictionary * serverConfigDictionary;              //@synthesize serverConfigDictionary=_serverConfigDictionary - In the implementation block
@property (assign) id delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign) int status;                                         //@synthesize status=_status - In the implementation block
+(id)defaultServer;
-(void)submitDataForDevice:(id)arg1 ticketNumber:(id)arg2 tests:(id)arg3 ;
-(void)submitExtendedData:(id)arg1 withFilename:(id)arg2 andTicketNumber:(id)arg3 ;
-(id)fetchTestConfiguration;
-(id)fetchDescriptionText;
-(void)fetchConfigDictionary;
-(void)setServerConfigDictionary:(id)arg1 ;
-(id)serverConfigDictionary;
-(id)urlFor:(id)arg1 withQueryParameters:(id)arg2 ;
-(void)validateTicketNumber:(id)arg1 ;
-(void)updatePostParametersForBackwardCompatibility:(id)arg1 ;
-(void)updatePostParameters:(id)arg1 withTests:(id)arg2 ;
-(id)dictToPostBody:(id)arg1 ;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
@end
