//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CTPOrderSummaryTitleCarModel : NSObject
{
    NSString *_carModel;
    NSString *_takeCarTime;
    NSString *_reCarTime;
    NSString *_takeCarAddress;
    NSString *_reCarAddress;
    NSString *_useCarDuration;
}

+ (id)orderSummaryTitleCarModel:(id)arg1;
@property(copy, nonatomic) NSString *useCarDuration; // @synthesize useCarDuration=_useCarDuration;
@property(copy, nonatomic) NSString *reCarAddress; // @synthesize reCarAddress=_reCarAddress;
@property(copy, nonatomic) NSString *takeCarAddress; // @synthesize takeCarAddress=_takeCarAddress;
@property(copy, nonatomic) NSString *reCarTime; // @synthesize reCarTime=_reCarTime;
@property(copy, nonatomic) NSString *takeCarTime; // @synthesize takeCarTime=_takeCarTime;
@property(copy, nonatomic) NSString *carModel; // @synthesize carModel=_carModel;
- (void).cxx_destruct;
- (id)orderSummaryDicTransformForSelf;
- (_Bool)checkCustomTitle:(id)arg1;

@end

