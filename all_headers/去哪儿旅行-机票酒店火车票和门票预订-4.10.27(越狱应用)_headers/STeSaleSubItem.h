//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCardItem.h"

@class NSString;

@interface STeSaleSubItem : SCardItem
{
    NSString *_qunarPrice;
    NSString *_priceColor;
    NSString *_desc;
    NSString *_businessImgUrl;
    NSString *_maskingUrl;
}

@property(retain, nonatomic) NSString *maskingUrl; // @synthesize maskingUrl=_maskingUrl;
@property(copy, nonatomic) NSString *businessImgUrl; // @synthesize businessImgUrl=_businessImgUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *priceColor; // @synthesize priceColor=_priceColor;
@property(retain, nonatomic) NSString *qunarPrice; // @synthesize qunarPrice=_qunarPrice;
- (void).cxx_destruct;

@end

