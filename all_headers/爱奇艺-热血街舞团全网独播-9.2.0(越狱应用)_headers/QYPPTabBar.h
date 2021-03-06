//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView;
@protocol QYPPTabBarDelegate;

@interface QYPPTabBar : UIView <UIScrollViewDelegate>
{
    NSArray *_barItems;
    id <QYPPTabBarDelegate> _delegate;
    long long _selectedIndex;
    UIScrollView *_contentView;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <QYPPTabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *barItems; // @synthesize barItems=_barItems;
- (void).cxx_destruct;
- (struct CGRect)mirrorFrame:(struct CGRect)arg1;
- (id)barItemAtPoint:(struct CGPoint)arg1;
- (void)tapAction:(id)arg1;
- (double)caluFitWidthWithHeight:(double)arg1 string:(id)arg2 font:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setCurrentBarItem:(id)arg1;
- (id)currentBarItem;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectBarItemAtIndex:(long long)arg1;
- (void)resetContentOffsetWhenSelectAtIndex:(long long)arg1;
- (void)resetUIWhenScroll:(double)arg1 isWillScroll:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

