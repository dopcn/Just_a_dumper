//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTHomeCascadeCategoryInfoModel, CTHomeCascadeCuisineInfoModel, NSMutableArray, NSString;

@interface CTHomeCascadeBusinessItemInfoModel : NSObject
{
    _Bool _priceExtraDescNeedCrossOut;
    NSString *_tag;
    NSString *_coverImageUrl;
    NSString *_title;
    NSString *_commentScoreDesc;
    NSString *_commentCountDesc;
    NSMutableArray *_tagNameList;
    NSMutableArray *_activityTagNamesList;
    NSString *_distanceDesc;
    NSString *_zoneName;
    NSString *_priceDesc;
    NSString *_priceExtraDesc;
    NSString *_recommendReason;
    NSMutableArray *_specialActivitiesList;
    NSString *_url;
    NSString *_mslName;
    long long _itemType;
    CTHomeCascadeCategoryInfoModel *_categoryInfoModel;
    CTHomeCascadeCuisineInfoModel *_cuisineInfoModel;
    long long _cascadeType;
}

@property(nonatomic) long long cascadeType; // @synthesize cascadeType=_cascadeType;
@property(retain, nonatomic) CTHomeCascadeCuisineInfoModel *cuisineInfoModel; // @synthesize cuisineInfoModel=_cuisineInfoModel;
@property(retain, nonatomic) CTHomeCascadeCategoryInfoModel *categoryInfoModel; // @synthesize categoryInfoModel=_categoryInfoModel;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSString *mslName; // @synthesize mslName=_mslName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableArray *specialActivitiesList; // @synthesize specialActivitiesList=_specialActivitiesList;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) _Bool priceExtraDescNeedCrossOut; // @synthesize priceExtraDescNeedCrossOut=_priceExtraDescNeedCrossOut;
@property(copy, nonatomic) NSString *priceExtraDesc; // @synthesize priceExtraDesc=_priceExtraDesc;
@property(copy, nonatomic) NSString *priceDesc; // @synthesize priceDesc=_priceDesc;
@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(copy, nonatomic) NSString *distanceDesc; // @synthesize distanceDesc=_distanceDesc;
@property(retain, nonatomic) NSMutableArray *activityTagNamesList; // @synthesize activityTagNamesList=_activityTagNamesList;
@property(retain, nonatomic) NSMutableArray *tagNameList; // @synthesize tagNameList=_tagNameList;
@property(copy, nonatomic) NSString *commentCountDesc; // @synthesize commentCountDesc=_commentCountDesc;
@property(copy, nonatomic) NSString *commentScoreDesc; // @synthesize commentScoreDesc=_commentScoreDesc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;

@end

