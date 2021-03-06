//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString, UIColor;

@interface BBAFeedAdCarouselTextImageItemCellViewModel : NSObject
{
    unsigned long long _cellType;
    NSString *_text;
    NSString *_imageUrlString;
    NSString *_price;
    NSNumber *_imageWidth;
    NSNumber *_imageHeight;
    NSMutableDictionary *_layoutInfoDict;
    UIColor *_itemTitleColor;
    UIColor *_priceColor;
}

@property(retain, nonatomic) UIColor *priceColor; // @synthesize priceColor=_priceColor;
@property(retain, nonatomic) UIColor *itemTitleColor; // @synthesize itemTitleColor=_itemTitleColor;
@property(retain, nonatomic) NSMutableDictionary *layoutInfoDict; // @synthesize layoutInfoDict=_layoutInfoDict;
@property(retain, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(retain, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *imageUrlString; // @synthesize imageUrlString=_imageUrlString;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (id)init;

@end

