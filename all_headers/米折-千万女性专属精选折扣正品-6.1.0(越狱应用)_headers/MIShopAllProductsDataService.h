//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MBCtcUserPostGetModel, MBCtcUserPostTabGetModel, MIBBCtcUserPostGetRequest, MIBBCtcUserPostTabGetRequest;

@interface MIShopAllProductsDataService : NSObject
{
    MBCtcUserPostGetModel *_latestProductModel;
    MBCtcUserPostTabGetModel *_productModel;
    CDUnknownBlockType _dataCallBackBlock;
    MIBBCtcUserPostGetRequest *_latestRequest;
    MIBBCtcUserPostTabGetRequest *_shopTagRequest;
}

@property(retain, nonatomic) MIBBCtcUserPostTabGetRequest *shopTagRequest; // @synthesize shopTagRequest=_shopTagRequest;
@property(retain, nonatomic) MIBBCtcUserPostGetRequest *latestRequest; // @synthesize latestRequest=_latestRequest;
@property(copy, nonatomic) CDUnknownBlockType dataCallBackBlock; // @synthesize dataCallBackBlock=_dataCallBackBlock;
@property(retain, nonatomic) MBCtcUserPostTabGetModel *productModel; // @synthesize productModel=_productModel;
@property(retain, nonatomic) MBCtcUserPostGetModel *latestProductModel; // @synthesize latestProductModel=_latestProductModel;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)requestLatestProductDataWithUserID:(id)arg1 page:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestProductDataWithUserID:(id)arg1 Type:(unsigned long long)arg2 sequence:(unsigned long long)arg3 page:(long long)arg4 callback:(CDUnknownBlockType)arg5;
- (void)requestProductDataWithUserID:(id)arg1 Type:(unsigned long long)arg2 page:(long long)arg3 callback:(CDUnknownBlockType)arg4;

@end

