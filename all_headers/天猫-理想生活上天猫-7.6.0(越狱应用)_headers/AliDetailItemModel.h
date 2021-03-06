//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailItemVideoModel, NSArray, NSDictionary, NSString;
@protocol AliDetailItemVideoModel, AliDetailMultiCountItemModel;

@interface AliDetailItemModel : TBJSONModel
{
    NSString *_itemId;
    NSString *_themeType;
    NSString *_title;
    NSString *_shortTitle;
    NSString *_subtitle;
    NSString *_titleDesc;
    NSArray *_images;
    NSString *_maxDonateCount;
    NSArray<AliDetailMultiCountItemModel> *_countMultiple;
    NSArray<AliDetailItemVideoModel> *_videos;
    AliDetailItemVideoModel *_videoDetail;
    NSDictionary *_themeConfig;
    NSString *_taobaoDescUrl;
    NSString *_tmallDescUrl;
    NSString *_taobaoPcDescUrl;
    NSString *_moduleDescUrl;
    NSString *_h5moduleDescUrl;
    NSDictionary *_moduleDescParams;
    NSString *_titleIcon;
    NSString *_skuText;
    NSString *_couponUrl;
    long long _sellCount;
    long long _itemPoint;
    long long _pointTimes;
    long long _commentCount;
    long long _unitBuy;
    long long _descType;
    NSDictionary *_infoText;
    NSString *_favcount;
    long long _quantity;
    long long _showShopActivitySize;
    NSString *_categoryId;
    NSString *_brandValueId;
    NSString *_shareIcon;
    NSString *_rootCategoryId;
    NSString *_spatialVideoUrl;
    NSString *_spatialVideoFileId;
}

@property(copy, nonatomic) NSString *spatialVideoFileId; // @synthesize spatialVideoFileId=_spatialVideoFileId;
@property(copy, nonatomic) NSString *spatialVideoUrl; // @synthesize spatialVideoUrl=_spatialVideoUrl;
@property(copy, nonatomic) NSString *rootCategoryId; // @synthesize rootCategoryId=_rootCategoryId;
@property(copy, nonatomic) NSString *shareIcon; // @synthesize shareIcon=_shareIcon;
@property(copy, nonatomic) NSString *brandValueId; // @synthesize brandValueId=_brandValueId;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long showShopActivitySize; // @synthesize showShopActivitySize=_showShopActivitySize;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *favcount; // @synthesize favcount=_favcount;
@property(retain, nonatomic) NSDictionary *infoText; // @synthesize infoText=_infoText;
@property(nonatomic) long long descType; // @synthesize descType=_descType;
@property(nonatomic) long long unitBuy; // @synthesize unitBuy=_unitBuy;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long pointTimes; // @synthesize pointTimes=_pointTimes;
@property(nonatomic) long long itemPoint; // @synthesize itemPoint=_itemPoint;
@property(nonatomic) long long sellCount; // @synthesize sellCount=_sellCount;
@property(copy, nonatomic) NSString *couponUrl; // @synthesize couponUrl=_couponUrl;
@property(copy, nonatomic) NSString *skuText; // @synthesize skuText=_skuText;
@property(copy, nonatomic) NSString *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(retain, nonatomic) NSDictionary *moduleDescParams; // @synthesize moduleDescParams=_moduleDescParams;
@property(copy, nonatomic) NSString *h5moduleDescUrl; // @synthesize h5moduleDescUrl=_h5moduleDescUrl;
@property(copy, nonatomic) NSString *moduleDescUrl; // @synthesize moduleDescUrl=_moduleDescUrl;
@property(copy, nonatomic) NSString *taobaoPcDescUrl; // @synthesize taobaoPcDescUrl=_taobaoPcDescUrl;
@property(copy, nonatomic) NSString *tmallDescUrl; // @synthesize tmallDescUrl=_tmallDescUrl;
@property(copy, nonatomic) NSString *taobaoDescUrl; // @synthesize taobaoDescUrl=_taobaoDescUrl;
@property(retain, nonatomic) NSDictionary *themeConfig; // @synthesize themeConfig=_themeConfig;
@property(retain, nonatomic) AliDetailItemVideoModel *videoDetail; // @synthesize videoDetail=_videoDetail;
@property(retain, nonatomic) NSArray<AliDetailItemVideoModel> *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSArray<AliDetailMultiCountItemModel> *countMultiple; // @synthesize countMultiple=_countMultiple;
@property(copy, nonatomic) NSString *maxDonateCount; // @synthesize maxDonateCount=_maxDonateCount;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *titleDesc; // @synthesize titleDesc=_titleDesc;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *themeType; // @synthesize themeType=_themeType;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)init;

@end

