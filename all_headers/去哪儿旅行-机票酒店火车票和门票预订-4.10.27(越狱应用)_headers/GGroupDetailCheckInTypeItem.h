//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface GGroupDetailCheckInTypeItem : NSObject
{
    NSString *_priceId;
    NSString *_realPrice;
    NSString *_dateDesc;
    NSString *_dateRange;
    NSString *_originPrice;
    NSString *_redEnvelope;
    NSNumber *_discountThemeColor;
    NSString *_discountLabelDesc;
    NSNumber *_discountLabelColor2;
    NSString *_discountLabelDesc2;
    NSString *_marketPrice;
    NSString *_priceDesc;
}

@property(readonly, copy, nonatomic) NSString *priceDesc; // @synthesize priceDesc=_priceDesc;
@property(readonly, nonatomic) NSString *marketPrice; // @synthesize marketPrice=_marketPrice;
@property(readonly, nonatomic) NSString *discountLabelDesc2; // @synthesize discountLabelDesc2=_discountLabelDesc2;
@property(readonly, nonatomic) NSNumber *discountLabelColor2; // @synthesize discountLabelColor2=_discountLabelColor2;
@property(readonly, nonatomic) NSString *discountLabelDesc; // @synthesize discountLabelDesc=_discountLabelDesc;
@property(readonly, nonatomic) NSNumber *discountThemeColor; // @synthesize discountThemeColor=_discountThemeColor;
@property(readonly, nonatomic, getter=qunarRed) NSString *redEnvelope; // @synthesize redEnvelope=_redEnvelope;
@property(readonly, nonatomic) NSString *originPrice; // @synthesize originPrice=_originPrice;
@property(readonly, nonatomic) NSString *dateRange; // @synthesize dateRange=_dateRange;
@property(readonly, nonatomic) NSString *dateDesc; // @synthesize dateDesc=_dateDesc;
@property(readonly, nonatomic) NSString *realPrice; // @synthesize realPrice=_realPrice;
@property(readonly, nonatomic) NSString *priceId; // @synthesize priceId=_priceId;
- (void).cxx_destruct;

@end

