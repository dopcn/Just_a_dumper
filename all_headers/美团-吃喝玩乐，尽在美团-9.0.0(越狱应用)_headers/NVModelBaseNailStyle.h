//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseNailStyle : NVBaseModel
{
    long long _styleId;
    NSString *_link;
    NSString *_sale;
    NSString *_oldPrice;
    NSString *_NewPrice;
    NSString *_tag;
    NSString *_title;
    NSString *_img;
    NSString *_imgTag;
    long long _goodsId;
    long long _layoutHeight;
    long long _layoutWidth;
    NSString *_tagBgColor;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *tagBgColor; // @synthesize tagBgColor=_tagBgColor;
@property(nonatomic) long long layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) long long layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property(nonatomic) long long goodsId; // @synthesize goodsId=_goodsId;
@property(copy, nonatomic) NSString *imgTag; // @synthesize imgTag=_imgTag;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *NewPrice; // @synthesize NewPrice=_NewPrice;
@property(copy, nonatomic) NSString *oldPrice; // @synthesize oldPrice=_oldPrice;
@property(copy, nonatomic) NSString *sale; // @synthesize sale=_sale;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) long long styleId; // @synthesize styleId=_styleId;
- (void).cxx_destruct;

@end

