//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface BasicDistrictInfoModel : CTBusinessBean
{
    _Bool _isNationTemplet;
    _Bool _isInChina;
    _Bool _hasLive;
    int _districtId;
    int _cityId;
    NSString *_districtName;
    NSString *_districtEnName;
    NSString *_covImgUrl;
    NSString *_intro;
    NSString *_cityExtension;
    NSString *_labelName;
}

@property(nonatomic) _Bool hasLive; // @synthesize hasLive=_hasLive;
@property(copy, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(copy, nonatomic) NSString *cityExtension; // @synthesize cityExtension=_cityExtension;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(nonatomic) _Bool isInChina; // @synthesize isInChina=_isInChina;
@property(nonatomic) _Bool isNationTemplet; // @synthesize isNationTemplet=_isNationTemplet;
@property(copy, nonatomic) NSString *covImgUrl; // @synthesize covImgUrl=_covImgUrl;
@property(copy, nonatomic) NSString *districtEnName; // @synthesize districtEnName=_districtEnName;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName=_districtName;
@property(nonatomic) int districtId; // @synthesize districtId=_districtId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

