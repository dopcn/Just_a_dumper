//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface JDRankThemeModel : JDModel
{
    NSString *m_shopGuideId;
    NSString *m_rankTitle;
    NSString *m_rankId;
    NSString *m_rankDesc;
    NSString *m_banner;
    NSString *_m_readCount;
    NSString *_m_nextShopGuideName;
    NSString *_m_nextShopGuideId;
    NSString *_m_sharecontent;
    NSString *_m_shareUrl;
    NSString *_m_shareTitle;
    NSString *_m_bottom;
    NSString *_m_activityurl;
}

@property(retain, nonatomic) NSString *m_activityurl; // @synthesize m_activityurl=_m_activityurl;
@property(retain, nonatomic) NSString *m_bottom; // @synthesize m_bottom=_m_bottom;
@property(retain, nonatomic) NSString *m_shareTitle; // @synthesize m_shareTitle=_m_shareTitle;
@property(retain, nonatomic) NSString *m_shareUrl; // @synthesize m_shareUrl=_m_shareUrl;
@property(retain, nonatomic) NSString *m_sharecontent; // @synthesize m_sharecontent=_m_sharecontent;
@property(retain, nonatomic) NSString *m_nextShopGuideId; // @synthesize m_nextShopGuideId=_m_nextShopGuideId;
@property(retain, nonatomic) NSString *m_nextShopGuideName; // @synthesize m_nextShopGuideName=_m_nextShopGuideName;
@property(retain, nonatomic) NSString *m_readCount; // @synthesize m_readCount=_m_readCount;
@property(retain, nonatomic) NSString *m_banner; // @synthesize m_banner;
@property(retain, nonatomic) NSString *m_rankDesc; // @synthesize m_rankDesc;
@property(retain, nonatomic) NSString *m_rankId; // @synthesize m_rankId;
@property(retain, nonatomic) NSString *m_rankTitle; // @synthesize m_rankTitle;
@property(retain, nonatomic) NSString *m_shopGuideId; // @synthesize m_shopGuideId;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end

