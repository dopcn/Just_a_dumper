//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WDSGetRealNameInfoAllDataManager : NSObject
{
    NSDictionary *_myRealNameInfoAllDataDictionary;
    NSDictionary *_myAccountCheckauthHomeDataDic;
    NSDictionary *_myAccountCheckauthGoodsDataDic;
    NSDictionary *_myAccountCheckauthShopDiaryDataDic;
    NSDictionary *_aRealNameInfoAllDataDictionary;
    NSDictionary *_aAccountCheckauthHomeDataDic;
    NSDictionary *_aAccountCheckauthGoodsDataDic;
    NSDictionary *_aAccountCheckauthShopDiaryDataDic;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *aAccountCheckauthShopDiaryDataDic; // @synthesize aAccountCheckauthShopDiaryDataDic=_aAccountCheckauthShopDiaryDataDic;
@property(retain, nonatomic) NSDictionary *aAccountCheckauthGoodsDataDic; // @synthesize aAccountCheckauthGoodsDataDic=_aAccountCheckauthGoodsDataDic;
@property(retain, nonatomic) NSDictionary *aAccountCheckauthHomeDataDic; // @synthesize aAccountCheckauthHomeDataDic=_aAccountCheckauthHomeDataDic;
@property(retain, nonatomic) NSDictionary *aRealNameInfoAllDataDictionary; // @synthesize aRealNameInfoAllDataDictionary=_aRealNameInfoAllDataDictionary;
@property(nonatomic) __weak NSDictionary *myAccountCheckauthShopDiaryDataDic; // @synthesize myAccountCheckauthShopDiaryDataDic=_myAccountCheckauthShopDiaryDataDic;
@property(nonatomic) __weak NSDictionary *myAccountCheckauthGoodsDataDic; // @synthesize myAccountCheckauthGoodsDataDic=_myAccountCheckauthGoodsDataDic;
@property(nonatomic) __weak NSDictionary *myAccountCheckauthHomeDataDic; // @synthesize myAccountCheckauthHomeDataDic=_myAccountCheckauthHomeDataDic;
@property(nonatomic) __weak NSDictionary *myRealNameInfoAllDataDictionary; // @synthesize myRealNameInfoAllDataDictionary=_myRealNameInfoAllDataDictionary;
- (void).cxx_destruct;
- (void)skipRealName_Cer_AuthRequestWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2 fromType:(long long)arg3;
- (void)skipRealName_Cer_AuthWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2 fromType:(long long)arg3;
- (void)loadAccountCheckauthDataRequestWithType:(id)arg1 fromSuccess:(CDUnknownBlockType)arg2 fromFailure:(CDUnknownBlockType)arg3;
- (void)loadGetRealNameInfoAllDataRequestWithSuccess:(CDUnknownBlockType)arg1 fromFailure:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

