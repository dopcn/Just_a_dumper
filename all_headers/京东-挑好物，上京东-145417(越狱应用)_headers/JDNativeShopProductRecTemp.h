//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSString;

@interface JDNativeShopProductRecTemp : UIView
{
    id tapDelegate;
    NSString *_mTitle;
    NSMutableDictionary *_m_productDic;
}

@property(retain, nonatomic) NSMutableDictionary *m_productDic; // @synthesize m_productDic=_m_productDic;
@property(retain, nonatomic) NSString *mTitle; // @synthesize mTitle=_mTitle;
- (void)dealloc;
- (void)moreBtnClick;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateLayoutFrame:(struct CGRect)arg1;
- (void)setProductInfos:(id)arg1 delegate:(id)arg2;

@end

