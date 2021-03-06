//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class TPKProductCostNotice, TPKProductNotice;

@interface TPKProductPurchaseNotice : SAKDomainObject
{
    TPKProductNotice *_bookNotice;
    TPKProductCostNotice *_costNotice;
    TPKProductNotice *_visaNotice;
    TPKProductNotice *_remindNotice;
}

+ (id)remindNoticeJSONTransformer;
+ (id)visaNoticeJSONTransformer;
+ (id)costNoticeJSONTransformer;
+ (id)bookNoticeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) TPKProductNotice *remindNotice; // @synthesize remindNotice=_remindNotice;
@property(retain, nonatomic) TPKProductNotice *visaNotice; // @synthesize visaNotice=_visaNotice;
@property(retain, nonatomic) TPKProductCostNotice *costNotice; // @synthesize costNotice=_costNotice;
@property(retain, nonatomic) TPKProductNotice *bookNotice; // @synthesize bookNotice=_bookNotice;
- (void).cxx_destruct;

@end

