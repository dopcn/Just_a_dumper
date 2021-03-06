//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDLinkHostModel, WareConfigModel;

@interface ProductManager : NSObject
{
    _Bool _isProductDetailBTest;
    NSString *wareID_;
    PDLinkHostModel *_linkHostModel;
    WareConfigModel *_wareConfigModel;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedProductManager;
@property(retain, nonatomic) WareConfigModel *wareConfigModel; // @synthesize wareConfigModel=_wareConfigModel;
@property(retain, nonatomic) PDLinkHostModel *linkHostModel; // @synthesize linkHostModel=_linkHostModel;
@property(nonatomic) _Bool isProductDetailBTest; // @synthesize isProductDetailBTest=_isProductDetailBTest;
@property(retain, nonatomic) NSString *wareID; // @synthesize wareID=wareID_;
- (void)clearSkinConfig;
- (id)getSkuSkinModelForSkuId:(id)arg1;
- (id)getSkinConfig;
- (_Bool)cacheSkinConfig:(id)arg1;
- (id)validateUrl:(id)arg1;
- (void)processingLinkHost:(id)arg1;
@property(nonatomic) _Bool isCdnOpen;
- (id)getDefaultCDNImageUrlReplaceModel;
- (id)getPDCDNImageUrlReplaceModel;
- (void)cacheProductDetailCdnConfig:(id)arg1;
- (void)showProductDetailWithWareId:(id)arg1 CkuID:(id)arg2 Expid:(id)arg3 Index:(id)arg4 Rid:(id)arg5;
- (void)showProductDetailWithDic:(id)arg1;
- (id)createAProductDetailWithModel:(id)arg1;
- (void)showProductDetailWithModel:(id)arg1;
- (void)showProductDetailWithWareId:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

