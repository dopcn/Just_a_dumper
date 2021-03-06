//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

@class NSArray, NSNumber, NSString;

@interface TTTShopConfigModel : TTTBaseModel
{
    _Bool _isShowInfoView;
    NSString *_showAuxPic;
    NSString *_showAttn;
    NSString *_showCps;
    NSString *_showLbl;
    NSString *_showSlgn;
    NSString *_showLogo;
    NSString *_showName;
    NSString *_slide;
    NSArray *_cardColorList;
    long long _awStyle;
    NSNumber *_picWidth;
    NSNumber *_picHeight;
    NSNumber *_height;
}

@property(copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(copy, nonatomic) NSNumber *picHeight; // @synthesize picHeight=_picHeight;
@property(copy, nonatomic) NSNumber *picWidth; // @synthesize picWidth=_picWidth;
@property(nonatomic) long long awStyle; // @synthesize awStyle=_awStyle;
@property(retain, nonatomic) NSArray *cardColorList; // @synthesize cardColorList=_cardColorList;
@property(copy, nonatomic) NSString *slide; // @synthesize slide=_slide;
@property(nonatomic) _Bool isShowInfoView; // @synthesize isShowInfoView=_isShowInfoView;
@property(copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(copy, nonatomic) NSString *showLogo; // @synthesize showLogo=_showLogo;
@property(copy, nonatomic) NSString *showSlgn; // @synthesize showSlgn=_showSlgn;
@property(copy, nonatomic) NSString *showLbl; // @synthesize showLbl=_showLbl;
@property(copy, nonatomic) NSString *showCps; // @synthesize showCps=_showCps;
@property(copy, nonatomic) NSString *showAttn; // @synthesize showAttn=_showAttn;
@property(copy, nonatomic) NSString *showAuxPic; // @synthesize showAuxPic=_showAuxPic;
- (void).cxx_destruct;

@end

