//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NVModelBaseShopQuan, NVModelBaseShopTuan;

@interface NVModelBaseOSShopGroupOnDO : NVBaseModel
{
    _Bool _show;
    _Bool _foodShop;
    NVModelBaseShopTuan *_shopTuan;
    NVModelBaseShopQuan *_shopQuan;
}

+ (id)metaInfo;
@property(nonatomic) _Bool foodShop; // @synthesize foodShop=_foodShop;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(retain, nonatomic) NVModelBaseShopQuan *shopQuan; // @synthesize shopQuan=_shopQuan;
@property(retain, nonatomic) NVModelBaseShopTuan *shopTuan; // @synthesize shopTuan=_shopTuan;
- (void).cxx_destruct;

@end

