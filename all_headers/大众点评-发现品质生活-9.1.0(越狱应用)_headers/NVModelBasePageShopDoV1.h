//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString, NVModelBaseHotelInfo;

@interface NVModelBasePageShopDoV1 : NVBaseModel
{
    _Bool _isMOpay;
    _Bool _isWeLifeCard;
    _Bool _containMeituan;
    _Bool _hotelAvailable;
    _Bool _isForeign;
    _Bool _hasHotelDeal;
    _Bool _isDishMenu;
    _Bool _hotelBookable;
    _Bool _NewShop;
    _Bool _bookable;
    _Bool _isHotelFull;
    _Bool _hasDeals;
    _Bool _isAdShop;
    _Bool _hasPromo;
    long long _shopGroupId;
    NSString *_altName;
    NSString *_branchName;
    NSString *_name;
    long long _id;
    long long _authorityLabelType;
    NSString *_authorityLabel;
    NSString *_shopView;
    long long _viewType;
    NSString *_shopStyle;
    NSArray *_spuIdList;
    long long _sortInCity;
    NVModelBaseHotelInfo *_hotelInfo;
    NSString *_hotelRankTag;
    long long _price;
    NSArray *_isHotelDeal;
    long long _hasbeautybooking;
    long long _score3;
    long long _score2;
    long long _score1;
    long long _pop;
    NSString *_scoreText;
    NSString *_hotelDeals;
    double _oriLongitude;
    double _oriLatitude;
    NSArray *_hotelPromoList;
    NSString *_hotelPromoTag;
    NSArray *_otaHotelPriceList;
    long long _marketPrice;
    NSString *_tourist;
    NSString *_deals;
    NSArray *_promos;
    NSString *_mcStatus;
    long long _membercardId;
    NSString *_defaultPic;
    double _lng;
    double _lat;
    NSString *_regionName;
    long long _regionId;
    long long _cityId;
    NSString *_categoryName;
    long long _categoryId;
    long long _shopType;
    NSString *_crossRoad;
    NSString *_address;
    NSArray *_phoneNos;
    NSString *_streetView;
    NSString *_defaultPic4G;
    long long _defaultPicType;
    NSString *_extraJson;
    NSString *_priceText;
    long long _shopPower;
    long long _status;
    long long _reviewCount;
    NSString *_categoryText;
    NSString *_regionText;
    NSString *_distanceText;
}

+ (id)metaInfo;
@property(nonatomic) _Bool hasPromo; // @synthesize hasPromo=_hasPromo;
@property(copy, nonatomic) NSString *distanceText; // @synthesize distanceText=_distanceText;
@property(copy, nonatomic) NSString *regionText; // @synthesize regionText=_regionText;
@property(copy, nonatomic) NSString *categoryText; // @synthesize categoryText=_categoryText;
@property(nonatomic) _Bool isAdShop; // @synthesize isAdShop=_isAdShop;
@property(nonatomic) long long reviewCount; // @synthesize reviewCount=_reviewCount;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long shopPower; // @synthesize shopPower=_shopPower;
@property(copy, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
@property(copy, nonatomic) NSString *extraJson; // @synthesize extraJson=_extraJson;
@property(nonatomic) _Bool hasDeals; // @synthesize hasDeals=_hasDeals;
@property(nonatomic) long long defaultPicType; // @synthesize defaultPicType=_defaultPicType;
@property(copy, nonatomic) NSString *defaultPic4G; // @synthesize defaultPic4G=_defaultPic4G;
@property(copy, nonatomic) NSString *streetView; // @synthesize streetView=_streetView;
@property(retain, nonatomic) NSArray *phoneNos; // @synthesize phoneNos=_phoneNos;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *crossRoad; // @synthesize crossRoad=_crossRoad;
@property(nonatomic) long long shopType; // @synthesize shopType=_shopType;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) long long cityId; // @synthesize cityId=_cityId;
@property(nonatomic) long long regionId; // @synthesize regionId=_regionId;
@property(copy, nonatomic) NSString *regionName; // @synthesize regionName=_regionName;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) _Bool isHotelFull; // @synthesize isHotelFull=_isHotelFull;
@property(copy, nonatomic) NSString *defaultPic; // @synthesize defaultPic=_defaultPic;
@property(nonatomic) _Bool bookable; // @synthesize bookable=_bookable;
@property(nonatomic) long long membercardId; // @synthesize membercardId=_membercardId;
@property(copy, nonatomic) NSString *mcStatus; // @synthesize mcStatus=_mcStatus;
@property(retain, nonatomic) NSArray *promos; // @synthesize promos=_promos;
@property(copy, nonatomic) NSString *deals; // @synthesize deals=_deals;
@property(copy, nonatomic) NSString *tourist; // @synthesize tourist=_tourist;
@property(nonatomic) long long marketPrice; // @synthesize marketPrice=_marketPrice;
@property(retain, nonatomic) NSArray *otaHotelPriceList; // @synthesize otaHotelPriceList=_otaHotelPriceList;
@property(nonatomic) _Bool NewShop; // @synthesize NewShop=_NewShop;
@property(nonatomic) _Bool hotelBookable; // @synthesize hotelBookable=_hotelBookable;
@property(copy, nonatomic) NSString *hotelPromoTag; // @synthesize hotelPromoTag=_hotelPromoTag;
@property(retain, nonatomic) NSArray *hotelPromoList; // @synthesize hotelPromoList=_hotelPromoList;
@property(nonatomic) double oriLatitude; // @synthesize oriLatitude=_oriLatitude;
@property(nonatomic) double oriLongitude; // @synthesize oriLongitude=_oriLongitude;
@property(nonatomic) _Bool isDishMenu; // @synthesize isDishMenu=_isDishMenu;
@property(nonatomic) _Bool hasHotelDeal; // @synthesize hasHotelDeal=_hasHotelDeal;
@property(copy, nonatomic) NSString *hotelDeals; // @synthesize hotelDeals=_hotelDeals;
@property(copy, nonatomic) NSString *scoreText; // @synthesize scoreText=_scoreText;
@property(nonatomic) _Bool isForeign; // @synthesize isForeign=_isForeign;
@property(nonatomic) long long pop; // @synthesize pop=_pop;
@property(nonatomic) long long score1; // @synthesize score1=_score1;
@property(nonatomic) long long score2; // @synthesize score2=_score2;
@property(nonatomic) long long score3; // @synthesize score3=_score3;
@property(nonatomic) long long hasbeautybooking; // @synthesize hasbeautybooking=_hasbeautybooking;
@property(nonatomic) _Bool hotelAvailable; // @synthesize hotelAvailable=_hotelAvailable;
@property(retain, nonatomic) NSArray *isHotelDeal; // @synthesize isHotelDeal=_isHotelDeal;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *hotelRankTag; // @synthesize hotelRankTag=_hotelRankTag;
@property(retain, nonatomic) NVModelBaseHotelInfo *hotelInfo; // @synthesize hotelInfo=_hotelInfo;
@property(nonatomic) long long sortInCity; // @synthesize sortInCity=_sortInCity;
@property(retain, nonatomic) NSArray *spuIdList; // @synthesize spuIdList=_spuIdList;
@property(copy, nonatomic) NSString *shopStyle; // @synthesize shopStyle=_shopStyle;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool containMeituan; // @synthesize containMeituan=_containMeituan;
@property(copy, nonatomic) NSString *shopView; // @synthesize shopView=_shopView;
@property(nonatomic) _Bool isWeLifeCard; // @synthesize isWeLifeCard=_isWeLifeCard;
@property(copy, nonatomic) NSString *authorityLabel; // @synthesize authorityLabel=_authorityLabel;
@property(nonatomic) long long authorityLabelType; // @synthesize authorityLabelType=_authorityLabelType;
@property(nonatomic) _Bool isMOpay; // @synthesize isMOpay=_isMOpay;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *branchName; // @synthesize branchName=_branchName;
@property(copy, nonatomic) NSString *altName; // @synthesize altName=_altName;
@property(nonatomic) long long shopGroupId; // @synthesize shopGroupId=_shopGroupId;
- (void).cxx_destruct;

@end

