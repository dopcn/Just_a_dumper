//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HotelBasicImageModel.h"

@class HotelAdditionalInfoModel, NSMutableArray, NSString;

@interface HotelBasicImageViewModel : HotelBasicImageModel
{
    _Bool _hasGrouponLabel;
    _Bool _isFromURL;
    int _hotelID;
    int _hotelStar;
    int _hotelDataType;
    HotelAdditionalInfoModel *_grouponProduct;
    NSMutableArray *_subImageList;
    NSString *_sourceTitle;
    NSString *_browseImgTitle;
    NSString *_browseImgNickName;
    NSString *_browseImgCreateDate;
    NSString *_otherUrl;
    NSString *_totalTime;
}

+ (id)changeModel:(id)arg1 hasGrouponTabel:(_Bool)arg2 grouponProduct:(id)arg3;
@property(nonatomic) int hotelDataType; // @synthesize hotelDataType=_hotelDataType;
@property(nonatomic) int hotelStar; // @synthesize hotelStar=_hotelStar;
@property(nonatomic) _Bool isFromURL; // @synthesize isFromURL=_isFromURL;
@property(nonatomic) int hotelID; // @synthesize hotelID=_hotelID;
@property(retain, nonatomic) NSString *totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) NSString *otherUrl; // @synthesize otherUrl=_otherUrl;
@property(retain, nonatomic) NSString *browseImgCreateDate; // @synthesize browseImgCreateDate=_browseImgCreateDate;
@property(retain, nonatomic) NSString *browseImgNickName; // @synthesize browseImgNickName=_browseImgNickName;
@property(retain, nonatomic) NSString *browseImgTitle; // @synthesize browseImgTitle=_browseImgTitle;
@property(copy, nonatomic) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
@property(retain, nonatomic) NSMutableArray *subImageList; // @synthesize subImageList=_subImageList;
@property(retain, nonatomic) HotelAdditionalInfoModel *grouponProduct; // @synthesize grouponProduct=_grouponProduct;
@property(nonatomic) _Bool hasGrouponLabel; // @synthesize hasGrouponLabel=_hasGrouponLabel;
- (void).cxx_destruct;
- (id)init;

@end

