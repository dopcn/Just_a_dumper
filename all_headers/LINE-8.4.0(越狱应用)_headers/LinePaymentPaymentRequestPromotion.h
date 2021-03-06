//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LinePaymentPaymentRequestPromotionBanner, NSDictionary, NSString;

@interface LinePaymentPaymentRequestPromotion : NSObject
{
    NSString *__promotionPhrase;
    NSString *__balancePromotionPhrase;
    NSDictionary *__cardPromotionPhrases;
    LinePaymentPaymentRequestPromotionBanner *__banner;
    NSDictionary *__ownCardPromotionPhrases;
    struct {
        unsigned int promotionPhrase:1;
        unsigned int balancePromotionPhrase:1;
        unsigned int cardPromotionPhrases:1;
        unsigned int banner:1;
        unsigned int ownCardPromotionPhrases:1;
    } __isSet;
}

@property(retain, nonatomic) NSDictionary *ownCardPromotionPhrases; // @synthesize ownCardPromotionPhrases=__ownCardPromotionPhrases;
@property(retain, nonatomic) LinePaymentPaymentRequestPromotionBanner *banner; // @synthesize banner=__banner;
@property(retain, nonatomic) NSDictionary *cardPromotionPhrases; // @synthesize cardPromotionPhrases=__cardPromotionPhrases;
@property(copy, nonatomic) NSString *balancePromotionPhrase; // @synthesize balancePromotionPhrase=__balancePromotionPhrase;
@property(copy, nonatomic) NSString *promotionPhrase; // @synthesize promotionPhrase=__promotionPhrase;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (id)init;

@end

