//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HomePageChannelStyleParamModel : NSObject
{
    _Bool _promotionTag;
    _Bool _priceComparison;
    _Bool _withCart;
    _Bool _showSlogan;
    _Bool _lookSimilar;
    NSString *_btnBgColor;
    NSString *_btnSelectedColor;
    NSString *_buySlogan;
}

@property(copy, nonatomic) NSString *buySlogan; // @synthesize buySlogan=_buySlogan;
@property(copy, nonatomic) NSString *btnSelectedColor; // @synthesize btnSelectedColor=_btnSelectedColor;
@property(copy, nonatomic) NSString *btnBgColor; // @synthesize btnBgColor=_btnBgColor;
@property(nonatomic) _Bool lookSimilar; // @synthesize lookSimilar=_lookSimilar;
@property(nonatomic) _Bool showSlogan; // @synthesize showSlogan=_showSlogan;
@property(nonatomic) _Bool withCart; // @synthesize withCart=_withCart;
@property(nonatomic) _Bool priceComparison; // @synthesize priceComparison=_priceComparison;
@property(nonatomic) _Bool promotionTag; // @synthesize promotionTag=_promotionTag;
- (void).cxx_destruct;

@end

