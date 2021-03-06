//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView, WebSiteNaviWebView;

@interface WebSiteNaviTableViewCell : UITableViewCell
{
    UIView *m_roundRectClipView;
    UIView *m_containerView;
    _Bool m_isAnimating;
    _Bool m_isLastCell;
    int _section;
    WebSiteNaviWebView *m_contentWebView;
}

@property(nonatomic) int section; // @synthesize section=_section;
@property(retain, nonatomic) WebSiteNaviWebView *contentWebView; // @synthesize contentWebView=m_contentWebView;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=m_isLastCell;
- (void)didThemeChange;
- (void)homepageEnableCornerRadius:(_Bool)arg1;
- (void)resetContentWebView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

