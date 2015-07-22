/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, PRSImage;


@protocol PRSRowSection <PRSSection>
@property (nonatomic,retain) NSString * key; 
@property (assign,nonatomic) BOOL key_nowrap; 
@property (assign,nonatomic) long long key_weight; 
@property (nonatomic,retain) NSString * value; 
@property (assign,nonatomic) BOOL value_nowrap; 
@property (assign,nonatomic) long long value_weight; 
@property (nonatomic,retain) PRSImage * value_image; 
@optional
-(NSString *)value;
-(void)setValue:(id)arg1;
-(BOOL)key_nowrap;
-(void)setKey_nowrap:(BOOL)arg1;
-(long long)key_weight;
-(void)setKey_weight:(long long)arg1;
-(BOOL)value_nowrap;
-(void)setValue_nowrap:(BOOL)arg1;
-(long long)value_weight;
-(void)setValue_weight:(long long)arg1;
-(PRSImage *)value_image;
-(void)setValue_image:(id)arg1;

@required
-(NSString *)key;
-(void)setKey:(id)arg1;

@end
