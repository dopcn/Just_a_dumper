//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDMainPageJumpSourceValueModel.h"

@class NSString;

@interface JDMainPageExOfferModel : JDMainPageJumpSourceValueModel
{
    _Bool _hasReportMTA;
    NSString *_showName;
    NSString *_brandLogo;
    NSString *_slogan;
    NSString *_brandName;
}

@property(nonatomic) _Bool hasReportMTA; // @synthesize hasReportMTA=_hasReportMTA;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(copy, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(copy, nonatomic) NSString *brandLogo; // @synthesize brandLogo=_brandLogo;
@property(copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
- (void).cxx_destruct;
- (id)mta_eventParam;
- (int)pageLevel;
- (id)mta_eventId;

@end

