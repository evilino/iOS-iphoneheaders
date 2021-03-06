/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MicroPaymentProductsResponse : NSObject {

	NSArray* _expectedIdentifiers;
	NSArray* _invalidIdentifiers;
	NSArray* _products;

}

@property (nonatomic,copy) NSArray * expectedIdentifiers;                 //@synthesize expectedIdentifiers=_expectedIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * invalidIdentifiers;              //@synthesize invalidIdentifiers=_invalidIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * products;                        //@synthesize products=_products - In the implementation block
-(void)setExpectedIdentifiers:(NSArray *)arg1 ;
-(char)loadFromDictionary:(id)arg1 error:(id*)arg2 ;
-(NSArray *)invalidIdentifiers;
-(NSArray *)expectedIdentifiers;
-(NSArray *)products;
-(void)dealloc;
@end

