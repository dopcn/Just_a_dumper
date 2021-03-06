//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor, UIFont, UIScrollView;
@protocol BDWalletSwitchTabViewDelegate;

@interface BDWalletSwitchTabView : UIView
{
    id <BDWalletSwitchTabViewDelegate> _delegate;
    NSMutableArray *_tabItems;
    UIScrollView *_scrollView;
    UIView *_containerView;
    long long _selectedItemIndex;
    UIView *_selectedItemBottomLine;
    UIView *_spLineView;
    UIFont *_tabItemTitelFont;
    UIColor *_tabItemTitelSelectedColor;
    UIColor *_tabItemSelectedBottomeLineColor;
    double _tabItemSelectedBottomeLineHeight;
}

+ (double)defaultHeight;
@property(nonatomic) double tabItemSelectedBottomeLineHeight; // @synthesize tabItemSelectedBottomeLineHeight=_tabItemSelectedBottomeLineHeight;
@property(retain, nonatomic) UIColor *tabItemSelectedBottomeLineColor; // @synthesize tabItemSelectedBottomeLineColor=_tabItemSelectedBottomeLineColor;
@property(retain, nonatomic) UIColor *tabItemTitelSelectedColor; // @synthesize tabItemTitelSelectedColor=_tabItemTitelSelectedColor;
@property(retain, nonatomic) UIFont *tabItemTitelFont; // @synthesize tabItemTitelFont=_tabItemTitelFont;
@property(retain, nonatomic) UIView *spLineView; // @synthesize spLineView=_spLineView;
@property(retain, nonatomic) UIView *selectedItemBottomLine; // @synthesize selectedItemBottomLine=_selectedItemBottomLine;
@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *tabItems; // @synthesize tabItems=_tabItems;
@property(nonatomic) __weak id <BDWalletSwitchTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg1 animate:(_Bool)arg2;
- (void)scrollToCenterButton:(id)arg1 animate:(_Bool)arg2;
- (void)itemBottomLineJumpToItemAtIndex:(long long)arg1 animate:(_Bool)arg2;
- (void)didSelectedItem:(id)arg1;
- (id)createItemWithTitle:(id)arg1 frame:(struct CGRect)arg2;
- (void)setTabTitles:(id)arg1 focusIndex:(long long)arg2;
- (void)setTabTitles:(id)arg1;
- (long long)getSelectedTabIndex;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 selectTitelColor:(id)arg2 selectLineColor:(id)arg3 selectLineHeight:(double)arg4 tabItemFont:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

