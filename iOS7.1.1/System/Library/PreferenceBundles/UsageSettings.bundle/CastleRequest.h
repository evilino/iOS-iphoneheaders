/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class AAAccount;

@interface CastleRequest : AARequest {

	AAAccount* _account;

}

@property (nonatomic,retain) AAAccount * account;              //@synthesize account=_account - In the implementation block
+(void)addHeadersToRequest:(id)arg1 forAccount:(id)arg2 ;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 ;
-(void)dealloc;
-(id)urlRequest;
-(id)account;
-(void)setAccount:(id)arg1 ;
@end
