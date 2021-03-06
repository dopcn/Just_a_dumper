//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol BDNMarketingButtonModel><Optional, Optional;

@interface BDNMarketingPopInfoModel : JSONModel
{
    NSNumber<Optional> *_infoId;
    NSString<Optional> *_picUrl;
    NSArray<BDNMarketingButtonModel><Optional> *_buttonInfo;
    NSNumber<Optional> *_startTime;
    NSNumber<Optional> *_endTime;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSNumber<Optional> *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSNumber<Optional> *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSArray<BDNMarketingButtonModel><Optional> *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
@property(copy, nonatomic) NSString<Optional> *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSNumber<Optional> *infoId; // @synthesize infoId=_infoId;
- (void).cxx_destruct;
- (id)safeInfoId;
- (_Bool)isMarketingInfoInTime;

@end

